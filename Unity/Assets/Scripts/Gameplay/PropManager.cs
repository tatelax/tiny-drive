using System;
using System.Collections.Generic;
using Constants;
using DG.Tweening;
using UI;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.EventSystems;
using UnityEngine.InputSystem;
using UnityEngine.UI;

namespace Gameplay
{
    public class PropManager : MonoBehaviour
    {
        [Header("References")]
        [SerializeField] private Transform propSpawnParent;
        [SerializeField] private ScrollRect propSpawnScrollRect;
        [SerializeField] private GameObject propSpawnButtonsHolder;
        [SerializeField] private Ease easeType;
        [SerializeField] private float animSpeed = 0.2f;
        [SerializeField] private Button toggleEditModeButton;
        [SerializeField] private Camera mainCamera;
        [SerializeField] private GameObject editUIParent;
        [SerializeField] private Button confirmButton;
        [SerializeField] private Button deleteButton;
        [SerializeField] private GameObject[] uiToIgnoreWhenRaycasting;
        [SerializeField] private SoundFXManager soundFxManager;
        
        private PropSpawnButtonData[] propSpawnButtons;
        private Dictionary<GameObject, string> spawnedProps; //key: gameobject itself | value: proptype enum
        private GameObject currentlyPlacing = null;
        private bool isLoading = false;
        
        public Dictionary<GameObject, string> SpawnedProps => spawnedProps;
        public GameObject CurrentlyPlacing => currentlyPlacing;
        
        private void Start()
        {
            
            spawnedProps = new Dictionary<GameObject, string>();

            propSpawnButtons = propSpawnButtonsHolder.GetComponentsInChildren<PropSpawnButtonData>();

            for (int i = 0; i < propSpawnButtons.Length; i++)
            {
                PropSpawnButtonData button = propSpawnButtons[i];
                
                if (button.PointerTrackingButton == null)
                    button.PointerTrackingButton = button.gameObject.GetComponent<PointerTrackingButton>();

                button.PointerTrackingButton.OnDragStart += () =>
                {
                    propSpawnScrollRect.vertical = false;
                    DOTween.To(()=> propSpawnScrollRect.verticalNormalizedPosition, x=> propSpawnScrollRect.verticalNormalizedPosition = x, 1, animSpeed);
                    
                    SetButtonsInteractable(false);
                    SpawnProp(button.PropAddress, Vector3.zero, Quaternion.identity);
                };

                button.PointerTrackingButton.OnDragStop += () =>
                {
                    propSpawnScrollRect.vertical = true;
                    SetButtonsInteractable(true);
                    PlaceObject();
                };
            }
            
            ToggleEditUI(false);
            
            deleteButton.onClick.AddListener(DeletePropButton);
            confirmButton.onClick.AddListener(ConfirmPlacePropButton);
        }

        private void SetButtonsInteractable(bool state)
        {
            for (var i = 0; i < propSpawnButtons.Length; i++)
            {
                propSpawnButtons[i].PointerTrackingButton.interactable = state;
            }

            toggleEditModeButton.interactable = state;
        }

        private void Update()
        {
            HandlePlacing();
            HandleEditingExisting();
        }

        public void SpawnProp(string propAddress, Vector3 position, Quaternion rotation, bool shouldPlace = true)
        {
            if (isLoading) return;
            isLoading = true;

            Addressables.InstantiateAsync(propAddress, position, rotation, propSpawnParent).Completed += handle =>
            {
                spawnedProps.Add(handle.Result, propAddress);
                isLoading = false;

                if (handle.Result.transform.TryGetComponent<Rigidbody>(out Rigidbody rbParent))
                {
                    rbParent.isKinematic = true;
                    rbParent.constraints = RigidbodyConstraints.FreezeRotation;
                }
                
                for (int i = 0; i < handle.Result.transform.childCount; i++)
                {
                    if (handle.Result.transform.GetChild(i).TryGetComponent<Rigidbody>(out Rigidbody rbChild))
                    {
                        rbChild.isKinematic = true;
                        rbChild.constraints = RigidbodyConstraints.FreezeRotation;
                    }
                }

                handle.Result.gameObject.layer = LayerMask.NameToLayer("Ignore Raycast");
                
                for (int i = 0; i < handle.Result.transform.childCount; i++)
                {
                    handle.Result.transform.GetChild(i).gameObject.layer = LayerMask.NameToLayer("Ignore Raycast");
                }
                
                if(shouldPlace)
                    currentlyPlacing = handle.Result;
                
                soundFxManager.Play(soundFxManager.propLoad);
            };
        }

        private void PlaceObject()
        {
            if (!currentlyPlacing) return;
            
            float endYPos = currentlyPlacing.transform.position.y - 1.99f; // 0.01f offset to fix z fighting

            GameObject objToPlace = currentlyPlacing;
            currentlyPlacing = null;
            
            objToPlace.transform.DOMoveY(endYPos, animSpeed).SetEase(easeType).onComplete += () =>
            {
                if (objToPlace.transform.TryGetComponent<Rigidbody>(out Rigidbody rbParent))
                {
                    rbParent.isKinematic = false;
                    rbParent.constraints = RigidbodyConstraints.None;
                } 
                
                for (int i = 0; i < objToPlace.transform.childCount; i++)
                {
                    if (objToPlace.transform.GetChild(i).TryGetComponent<Rigidbody>(out Rigidbody rbChild))
                    {
                        rbChild.isKinematic = false;
                        rbChild.constraints = RigidbodyConstraints.None;
                    }
                }

                objToPlace.layer = LayerMask.NameToLayer("Default");
                
                for (int i = 0; i < objToPlace.transform.childCount; i++)
                {
                    objToPlace.transform.GetChild(i).gameObject.layer = LayerMask.NameToLayer("Default");
                }         
                
                soundFxManager.Play(soundFxManager.placeProp);
                objToPlace = null;
            };
        }
        
        private void HandlePlacing()
        {
            if (!currentlyPlacing) return;
            
            Ray ray = mainCamera.ScreenPointToRay(Pointer.current.position.ReadValue());

            if (Physics.Raycast(ray, out var hit))
            {
                if (spawnedProps.ContainsKey(hit.transform.gameObject))
                    return;

                if (IsPointerOverUIObject()) return;
                
                Vector3 objPos = hit.point;
                objPos.y += 2f;
                
                currentlyPlacing.transform.position = objPos;
            }
        }
        
        private void HandleEditingExisting()
        {
            if (currentlyPlacing) return;
            if (!Pointer.current.press.wasPressedThisFrame) return;

            Ray ray = mainCamera.ScreenPointToRay(Pointer.current.position.ReadValue());

            if (Physics.Raycast(ray, out var hit))
            {
                if (!spawnedProps.ContainsKey(hit.transform.gameObject)) return;

                GameObject selectedObj = hit.transform.gameObject;

                Rigidbody rb = selectedObj.GetComponent<Rigidbody>();
                rb.isKinematic = true;
                rb.constraints = RigidbodyConstraints.FreezeRotation;

                selectedObj.layer = LayerMask.NameToLayer("Ignore Raycast");
                
                for (int i = 0; i < selectedObj.transform.childCount; i++)
                {
                    selectedObj.transform.GetChild(i).gameObject.layer = LayerMask.NameToLayer("Ignore Raycast");
                }  
                
                selectedObj.transform.DOMoveY(selectedObj.transform.position.y + 2, animSpeed).SetEase(easeType).onComplete +=
                    () =>
                    {
                        currentlyPlacing = hit.transform.gameObject;
                        ToggleEditUI(true);
                        soundFxManager.Play(soundFxManager.placeProp);
                    };
            }
        }
        
        private bool IsPointerOverUIObject()
        {
            var touchPosition = Touchscreen.current.position.ReadValue();
            var eventData = new PointerEventData(EventSystem.current) {position = touchPosition};
            var results = new List<RaycastResult>();
            EventSystem.current.RaycastAll(eventData, results);

            for (var i = 0; i < results.Count; i++)
            {
                for (var i1 = 0; i1 < uiToIgnoreWhenRaycasting.Length; i1++)
                {
                    for (var i2 = 0; i2 < uiToIgnoreWhenRaycasting[i1].transform.childCount; i2++)
                    {
                        if (results[i].gameObject == uiToIgnoreWhenRaycasting[i1].transform.GetChild(i2).gameObject)
                        {
                            return true;
                        }
                    }
                }
            }

            return false;
        }

        private void DestroyProp(GameObject obj)
        {
            Addressables.ReleaseInstance(obj);
            spawnedProps.Remove(obj);
            soundFxManager.Play(soundFxManager.destroyProp);
        }

        public void ClearAllProps()
        {
            for (int i = 0; i < propSpawnParent.childCount; i++)
            {
                DestroyProp(propSpawnParent.GetChild(i).gameObject);
            }
            
            spawnedProps.Clear();
        }
        
        private void DeletePropButton()
        {
            DestroyProp(currentlyPlacing);
            ToggleEditUI(false);
            currentlyPlacing = null;
        }

        private void ConfirmPlacePropButton()
        {
            PlaceObject();
            ToggleEditUI(false);
        }

        private void ToggleEditUI(bool setting)
        {
            editUIParent.SetActive(setting);
        }
    }
}
