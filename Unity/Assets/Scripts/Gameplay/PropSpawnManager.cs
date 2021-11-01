using System;
using System.Collections.Generic;
using Constants;
using DG.Tweening;
using UI;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.InputSystem;
using UnityEngine.UI;

namespace Gameplay
{
    public class PropSpawnManager : MonoBehaviour
    {
        [Header("References")]
        [SerializeField] private Transform propSpawnParent;
        [SerializeField] private ScrollRect propSpawnScrollRect;
        [SerializeField] private GameObject propSpawnButtonsHolder;
        [SerializeField] private Ease easeType;
        [SerializeField] private float animSpeed = 0.2f;
        [SerializeField] private Button toggleEditModeButton;
        
        private PropSpawnButtonData[] propSpawnButtons;
        private Dictionary<GameObject, string> spawnedObjects; //key: gameobject itself | value: proptype enum
        private GameObject currentlyPlacing = null;
        private bool isLoading = false;
        
        public Dictionary<GameObject, string> SpawnedObjects => spawnedObjects;
        public GameObject CurrentlyPlacing => currentlyPlacing;
        
        private void Start()
        {
            spawnedObjects = new Dictionary<GameObject, string>();

            propSpawnButtons = propSpawnButtonsHolder.GetComponentsInChildren<PropSpawnButtonData>();

            for (int i = 0; i < propSpawnButtons.Length; i++)
            {
                PropSpawnButtonData button = propSpawnButtons[i];
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
            if (!currentlyPlacing) return;
            
            HandlePlacing();
        }

        public void SpawnProp(string propAddress, Vector3 position, Quaternion rotation, bool shouldPlace = true)
        {
            if (isLoading) return;
            isLoading = true;

            Addressables.InstantiateAsync(propAddress, position, rotation, propSpawnParent).Completed += handle =>
            {
                spawnedObjects.Add(handle.Result, propAddress);
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

                if(shouldPlace)
                    currentlyPlacing = handle.Result;
            };
        }

        private void PlaceObject()
        {
            if (!currentlyPlacing) return;
            
            float endYPos = currentlyPlacing.transform.position.y - 2;

            currentlyPlacing.transform.DOMoveY(endYPos, animSpeed).SetEase(easeType).onComplete += () =>
            {
                if (currentlyPlacing.transform.TryGetComponent<Rigidbody>(out Rigidbody rbParent))
                {
                    rbParent.isKinematic = false;
                    rbParent.constraints = RigidbodyConstraints.None;
                }
                
                for (int i = 0; i < currentlyPlacing.transform.childCount; i++)
                {
                    if (currentlyPlacing.transform.GetChild(i).TryGetComponent<Rigidbody>(out Rigidbody rbChild))
                    {
                        rbChild.isKinematic = false;
                        rbChild.constraints = RigidbodyConstraints.None;
                    }
                }
                
                currentlyPlacing = null;
            };
        }
        
        private void DestroyObj(GameObject obj)
        {
            Addressables.ReleaseInstance(obj);
        }

        public void ClearAllProps()
        {
            for (int i = 0; i < propSpawnParent.childCount; i++)
            {
                DestroyObj(propSpawnParent.GetChild(i).gameObject);
            }
        }
        
        private void HandlePlacing()
        {
            Ray ray = Camera.main.ScreenPointToRay(Pointer.current.position.ReadValue());

            if (Physics.Raycast(ray, out var hit))
            {
                Vector3 objPos = hit.point;
                objPos.y += 2f;
                
                currentlyPlacing.transform.position = objPos;
            }
        }
    }
}
