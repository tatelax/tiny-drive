using System;
using System.Collections.Generic;
using Constants;
using UI;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.InputSystem;
using UnityEngine.UI;

namespace Gameplay
{
    public class PropSpawnManager : MonoBehaviour
    {
        [SerializeField] private ScrollRect propSpawnScrollRect;
        [SerializeField] private GameObject propSpawnButtonsHolder;
        
        private PropSpawnButtonData[] propSpawnButtons;
        private HashSet<GameObject> spawnedObjects;

        private GameObject currentlyPlacing = null;
        private bool isLoading = false;
        
        private void Start()
        {
            spawnedObjects = new HashSet<GameObject>();

            propSpawnButtons = propSpawnButtonsHolder.GetComponentsInChildren<PropSpawnButtonData>();

            for (int i = 0; i < propSpawnButtons.Length; i++)
            {
                PropSpawnButtonData button = propSpawnButtons[i];
                button.PointerTrackingButton.OnDragStart += () =>
                {
                    propSpawnScrollRect.vertical = false;
                    SetButtonsInteractable(false);
                    SpawnProp(button);
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
        }

        private void Update()
        {
            if (!currentlyPlacing) return;
            
            HandlePlacing();
        }

        private void SpawnProp(PropSpawnButtonData propSpawnButtonData)
        {
            if (isLoading) return;
            isLoading = true;

            string address = Props.PropDict[propSpawnButtonData.PropType];
            
            Addressables.InstantiateAsync(address, Vector3.zero, Quaternion.identity).Completed += handle =>
            {
                spawnedObjects.Add(handle.Result);
                isLoading = false;

                currentlyPlacing = handle.Result;
            };
        }

        private void PlaceObject()
        {
            if (!currentlyPlacing) return;
            
            Vector3 currPos = currentlyPlacing.transform.position;

            currPos.y -= 2;
            
            currentlyPlacing.transform.position = currPos;
            
            
            
            currentlyPlacing = null;
        }
        
        private void DestroyObj(GameObject obj)
        {
            Addressables.ReleaseInstance(obj);
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
