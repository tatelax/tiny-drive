using System;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.EventSystems;
using UnityEngine.InputSystem;
using UnityEngine.UI;

namespace Gameplay
{
    [AddComponentMenu("Custom/Track Object Button")]
    public class TrackObjectButton : Button
    {
        [SerializeField] private string objAddress = null;
        [SerializeField] private float dragAmountBeforeSpawn = 2.0f;

        public float DragAmountBeforeSpawn
        {
            get => dragAmountBeforeSpawn;
            set => dragAmountBeforeSpawn = value;
        }

        public string ObjAddress
        {
            get => objAddress;
            set => objAddress = value;
        }

        private bool isDragging;
        private GameObject spawnedObj = null;
        private bool isSpawning;
        private Vector2 fingerPosOnDown;
        
        public override void OnPointerDown(PointerEventData eventData)
        {
            base.OnPointerDown(eventData);

            if (!Application.isPlaying) return;
            isDragging = true;
            fingerPosOnDown = eventData.position;
            
        }

        public override void OnPointerUp(PointerEventData eventData)
        {
            base.OnPointerUp(eventData);
            
            if (!Application.isPlaying) return;
            
            isDragging = false;
            spawnedObj = null;
        }

        public void Update()
        {
            if (!isDragging) return;
            
            if (spawnedObj == null && Vector2.Distance(fingerPosOnDown, new Vector2(Pointer.current.position.x.ReadValue(), Pointer.current.position.y.ReadValue())) < dragAmountBeforeSpawn)
            {
                return;
            }

            if (spawnedObj == null)
            {
                SpawnObj();
            }

            if (spawnedObj)
            {
                HandlePlacing();
            }
        }

        private void SpawnObj()
        {
            if (isSpawning) return;
            isSpawning = true;

            Addressables.InstantiateAsync(objAddress, Vector3.zero, Quaternion.identity).Completed += handle =>
            {
                spawnedObj = handle.Result;
                isSpawning = false;
            };
        }

        private void DestroyObj()
        {
            if (spawnedObj == null) return;

            Addressables.ReleaseInstance(spawnedObj);
        }
        
        private void HandlePlacing()
        {
            Ray ray = Camera.main.ScreenPointToRay(Pointer.current.position.ReadValue());

            if (Physics.Raycast(ray, out var hit))
            {
                Vector3 objPos = hit.point;
                objPos.y += 2f;
                
                spawnedObj.transform.position = objPos;
            }
        }
    }
}
