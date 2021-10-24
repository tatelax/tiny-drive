using System;
using NWH.VehiclePhysics2;
using UnityEngine;

namespace Vehicle
{
    [RequireComponent(typeof(Rigidbody))]
    [RequireComponent(typeof(VehicleController))]
    public class VehiclePlacementHandler : MonoBehaviour
    {
        private Rigidbody rb;
        private VehicleController vehicleController;
        
        private void Awake()
        {
            rb = GetComponent<Rigidbody>();
            vehicleController = GetComponent<VehicleController>();
        }

        public void Release()
        {
            rb.constraints = RigidbodyConstraints.None;
            rb.useGravity = true;
            vehicleController.Wake();
            
            Debug.Log($"Vehicle released {gameObject.name}");
        }
    }
}
