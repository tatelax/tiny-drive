using System;
using Constants;
using UI;
using UnityEngine;
using UnityEngine.UI;

namespace Gameplay
{
    public class VehicleChangeManager : MonoBehaviour
    {
        [Header("References")]
        [SerializeField] private GameObject vehicleOptionsHolder;
        [SerializeField] private VehicleLoadingManager vehicleLoadingManager;
        [SerializeField] private VehiclePlacementManager vehiclePlacementManager;
        [SerializeField] private GameObject changeVehiclePanel;
        [SerializeField] private Button changeVehicleButton;
        
        private VehicleChangeButtonData[] vehicleOptions;
        
        private void Start()
        {
            changeVehiclePanel.SetActive(false);
            
            changeVehicleButton.onClick.AddListener(OpenPanel);
            
            vehicleOptions = vehicleOptionsHolder.GetComponentsInChildren<VehicleChangeButtonData>();
            
            for (var i = 0; i < vehicleOptions.Length; i++)
            {
                var i1 = i;
                vehicleOptions[i].GetComponent<Button>().onClick.AddListener(() => ChangeVehicle(vehicleOptions[i1].VehicleType));
            }
        }

        private void ChangeVehicle(Vehicles.VehicleType vehicleType)
        {
            vehiclePlacementManager.PlaceVehicle(vehicleType);
            changeVehiclePanel.SetActive(false);
        }

        private void OpenPanel()
        {
            changeVehiclePanel.SetActive(true);
        }
    }
}
