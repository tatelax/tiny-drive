using System;
using System.Collections.Generic;
using Constants;
using UI;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.InputSystem;

namespace Gameplay
{
    public class PropSpawnManager : MonoBehaviour
    {
        [SerializeField] private List<PropSpawnButtonData> propSpawnButtons;

        private HashSet<GameObject> spawnedObjects;

        private GameObject currentlyPlacing = null;
        private bool isLoading = false;
        
        private void Awake()
        {
            spawnedObjects = new HashSet<GameObject>();
            
            foreach (PropSpawnButtonData button in propSpawnButtons)
            {
                button.PointerTrackingButton.OnDragStart += () =>
                {
                    SetButtonsInteractable(false);
                    SpawnProp(button);
                };

                button.PointerTrackingButton.OnDragStop += () =>
                {
                    SetButtonsInteractable(true);
                    PlaceObject();
                };
            }
        }

        private void SetButtonsInteractable(bool state)
        {
            for (var i = 0; i < propSpawnButtons.Count; i++)
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
