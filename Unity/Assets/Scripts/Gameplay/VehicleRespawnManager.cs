using System;
using NWH.VehiclePhysics2;
using UnityEngine;
using Object = UnityEngine.Object;

namespace Gameplay
{
    public class VehicleRespawnManager : MonoBehaviour
    {
        [Header("Settings")]
        [SerializeField] private float maxFreeFallTime = 10.0f;

        [Header("References")]
        [SerializeField] private VehicleLoadingManager vehicleLoadingManager;
        [SerializeField] private VehiclePlacementManager vehiclePlacementManager;
        
        private VehicleController currVehicleController;
        private float currFallTime = 0;
        
        private void Awake()
        {
            vehiclePlacementManager.ReleaseVehicleEvent += VehicleReleaseEvent;
        }

        private void VehicleReleaseEvent()
        {
            currVehicleController = vehicleLoadingManager.CurrVehicle.GetComponent<VehicleController>();
        }

        private void Update()
        {
            if (!currVehicleController) return;
            
            if (currVehicleController.IsGrounded())
            {
                currFallTime = 0;
                return;
            }

            currFallTime += Time.deltaTime;

            if (currFallTime >= maxFreeFallTime)
            {
                Respawn();
                currFallTime = 0;
            }
        }

        private void Respawn()
        {
            Debug.Log($"Respawning vehicle {vehiclePlacementManager.LastVehicleType}");
            vehiclePlacementManager.PlaceVehicle(vehiclePlacementManager.LastVehicleType);
        }
    }
}
