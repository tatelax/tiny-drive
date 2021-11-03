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
        [SerializeField] private GameObject toggleEditModeButton;
        [SerializeField] private Button changeVehicleButton;
        [SerializeField] private Button cancelChangeVehicleButton;
        [SerializeField] private GameObject placeVehicleButton;
        
        private VehicleChangeButtonData[] vehicleOptions;
        
        private void Start()
        {
            changeVehiclePanel.SetActive(false);
            cancelChangeVehicleButton.gameObject.SetActive(false);
            
            changeVehicleButton.onClick.AddListener((() => { TogglePanel(true);}));
            cancelChangeVehicleButton.onClick.AddListener(() => { TogglePanel(false);});
            
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
            TogglePanel(false);
        }

        private void TogglePanel(bool setting)
        {
            toggleEditModeButton.SetActive(!setting);
            placeVehicleButton.SetActive(!setting);
            changeVehicleButton.gameObject.SetActive(!setting);
            cancelChangeVehicleButton.gameObject.SetActive(setting);
            changeVehiclePanel.SetActive(setting);
        }
    }
}
