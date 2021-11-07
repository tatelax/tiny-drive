using System;
using Constants;
using NWH.VehiclePhysics2;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using Vehicle;

namespace Gameplay
{
    public class VehiclePlacementManager : MonoBehaviour
    {
        [Header("References")]
        [SerializeField] private VehicleLoadingManager vehicleLoadingManager;
        [SerializeField] private PlayerPrefsManager playerPrefsManager;
        [SerializeField] private SoundFXManager soundFXManager;
        [SerializeField] private Camera arCamera;

        private Vehicles.VehicleType lastVehicleType;
        
        public event Action PlaceVehicleEvent;
        public event Action StopPlaceVehicleEvent;
        public event Action ReleaseVehicleEvent;
        
        private bool isPlacing = false;
        public bool IsPlacing => isPlacing;
        public Vehicles.VehicleType LastVehicleType => lastVehicleType;

        public void PlaceVehicle(int type)
        {
            PlaceVehicle((Vehicles.VehicleType)type);
        }
        
        public void PlaceVehicle(Vehicles.VehicleType type)
        {
            isPlacing = true;
            vehicleLoadingManager.Load(type);
            PlaceVehicleEvent?.Invoke();
            lastVehicleType = type;
            playerPrefsManager.VehiclePref = (int)type;
        }

        public void StopPlacing()
        {
            if (!isPlacing)
            {
                return;
            }
            
            isPlacing = false;
            StopPlaceVehicleEvent?.Invoke();
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
            ReleaseVehicleEvent?.Invoke();
            soundFXManager.Play(soundFXManager.vehicleRelease);
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
