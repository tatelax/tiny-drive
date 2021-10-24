using System;
using Constants;
using UnityEngine;
using UnityEngine.Serialization;

namespace Gameplay
{
    public class PlaceVehicleAtStart : MonoBehaviour
    {
        [Header("Settings")]
        [SerializeField] private Vehicles.VehicleType vehicleType;
        
        [Header("References")]
        [SerializeField] private VehiclePlacementManager vehiclePlacementManager;
        
        public void Start()
        {
            vehiclePlacementManager.PlaceVehicle(vehicleType);
        }
    }
}
