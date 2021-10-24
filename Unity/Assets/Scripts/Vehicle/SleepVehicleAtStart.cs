using System;
using NWH.VehiclePhysics2;
using UnityEngine;

namespace Gameplay
{
    [RequireComponent(typeof(VehicleController))]
    public class SleepVehicleAtStart : MonoBehaviour
    {
        public void Start()
        {
            Debug.Log("Vehicle Set to Sleep");
            GetComponent<VehicleController>().Sleep();
        }
    }
}
