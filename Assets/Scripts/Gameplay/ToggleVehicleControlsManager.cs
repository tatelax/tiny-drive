using UnityEngine;

namespace Gameplay
{
    public class ToggleVehicleControlsManager : MonoBehaviour
    {
        [Header("References")]
        [SerializeField] private VehiclePlacementManager vehiclePlacementManager;
        [SerializeField] private GameObject vehicleControlsUI;

        private void Awake()
        {
            vehiclePlacementManager.PlaceVehicleEvent += OnPlaceVehicleEvent;
            vehiclePlacementManager.ReleaseVehicleEvent += OnReleaseVehicleEvent;
        }

        private void Start()
        {
            vehicleControlsUI.SetActive(!vehiclePlacementManager.IsPlacing);
        }

        private void OnPlaceVehicleEvent()
        {
            vehicleControlsUI.SetActive(false);
        }
        
        private void OnReleaseVehicleEvent()
        {
            vehicleControlsUI.SetActive(true);
        }
    }
}
