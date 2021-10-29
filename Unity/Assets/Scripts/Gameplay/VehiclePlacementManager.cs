using System;
using Constants;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using Vehicle;

namespace Gameplay
{
    public class VehiclePlacementManager : MonoBehaviour
    {
        [Header("References")]
        [SerializeField] private VehicleLoadingManager vehicleLoadingManager;
        [SerializeField] private Camera arCamera;

        public event Action PlaceVehicleEvent;
        
        private bool isPlacing = false;
        
        public void PlaceVehicle(Vehicles.VehicleType type)
        {
            isPlacing = true;
            vehicleLoadingManager.Load(type);
            PlaceVehicleEvent?.Invoke();
        }

        public void StopPlacing()
        {
            if (!isPlacing)
            {
                Debug.LogWarning("Not placing.");
                return;
            }
            
            isPlacing = false;
        }

        public void ReleaseVehicle()
        {
            if (!isPlacing)
            {
                Debug.LogWarning("Not currently placing anything.");
                return;
            }

            isPlacing = false;
            vehicleLoadingManager.CurrVehicle.GetComponent<VehiclePlacementHandler>().Release();
        }

        private void Update()
        {
            if (isPlacing)
            {
                HandlePlacing();
            }
        }

        private void HandlePlacing()
        {
            if (vehicleLoadingManager.CurrVehicle == null)
            {
                return;
            }

            Ray ray = arCamera.ViewportPointToRay(new Vector3(0.5f, 0.5f, 0f));

            if (Physics.Raycast(ray, out var hit))
            {
                Vector3 vehPos = hit.point;
                vehPos.y += 2f;
                
                vehicleLoadingManager.CurrVehicle.transform.position = vehPos;
            }
        }
    }
}
