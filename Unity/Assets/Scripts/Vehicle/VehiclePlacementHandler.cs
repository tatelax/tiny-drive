using System;
using NWH.VehiclePhysics2;
using UnityEngine;

namespace Vehicle
{
    [RequireComponent(typeof(Rigidbody))]
    [RequireComponent(typeof(VehicleController))]
    public class VehiclePlacementHandler : MonoBehaviour
    {
        [SerializeField] private Collider collider;
        
        private Rigidbody rb;
        private VehicleController vehicleController;
        
        private void Awake()
        {
            rb = GetComponent<Rigidbody>();
            vehicleController = GetComponent<VehicleController>();

            if (!collider)
            {
                Debug.LogError("Collider not assigned");
                return;
            }

            collider.isTrigger = true;
        }

        public void Release()
        {
            rb.constraints = RigidbodyConstraints.None;
            rb.useGravity = true;
            vehicleController.Wake();
            collider.isTrigger = false;
            
            Debug.Log($"Vehicle released {gameObject.name}");
        }
    }
}
