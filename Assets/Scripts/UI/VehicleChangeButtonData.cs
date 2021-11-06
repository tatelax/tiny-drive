using System;
using Constants;
using UnityEngine;
using UnityEngine.UI;

namespace UI
{
    [RequireComponent(typeof(Button))]
    public class VehicleChangeButtonData : MonoBehaviour
    {
        [SerializeField] private Vehicles.VehicleType vehicleType;
        public Vehicles.VehicleType VehicleType => vehicleType;
    }
}
