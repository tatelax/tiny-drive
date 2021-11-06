using System;
using Constants;
using UnityEngine;
using UnityEngine.UI;

namespace Gameplay
{
    public class ReleaseVehicleButton : MonoBehaviour
    {
        [Header("References")]
        [SerializeField] private VehiclePlacementManager vehiclePlacementManager;
        [SerializeField] private Button releaseButton;        

        private void Start()
        {
            vehiclePlacementManager.PlaceVehicleEvent += () => { releaseButton.gameObject.SetActive(true);};
            releaseButton.onClick.AddListener(Place);
        }

        private void Place()
        {
            vehiclePlacementManager.ReleaseVehicle();
            releaseButton.gameObject.SetActive(false);
        }
    }
}
