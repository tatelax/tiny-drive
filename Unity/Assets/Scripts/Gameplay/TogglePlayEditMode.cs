using System;
using Constants;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace Gameplay
{
    public class TogglePlayEditMode : MonoBehaviour
    {
        [Header("Settings")]
        [SerializeField] private bool startInEditMode = true;
        [SerializeField] private Color editModeColor;
        [SerializeField] private Color playModeColor;
        [SerializeField] private string enterEditModeText = "Edit";
        [SerializeField] private string enterPlayModeText = "GO!";
        
        [Header("References")]
        [SerializeField] private Button togglePlayEditButton;
        [SerializeField] private TextMeshProUGUI toggleButtonText;
        [SerializeField] private Image toggleButtonBg;
        [SerializeField] private GameObject editModeUI;
        [SerializeField] private GameObject playModeUI;
        [SerializeField] private VehiclePlacementManager vehiclePlacementManager;
        [SerializeField] private VehicleLoadingManager vehicleLoadingManager;

        private bool editMode = false;

        private void Awake()
        {
            Toggle(startInEditMode);
            
            togglePlayEditButton.onClick.AddListener(Toggle);
        }

        public void Toggle()
        {
            Toggle(!editMode);
        }
        
        public void Toggle(bool newEditMode)
        {
            editMode = newEditMode;
            editModeUI.SetActive(newEditMode);
            playModeUI.SetActive(!newEditMode);

            toggleButtonText.text = newEditMode ? enterPlayModeText : enterEditModeText;
            toggleButtonBg.color = newEditMode ? editModeColor : playModeColor;

            if (newEditMode)
            {
                HandleExitPlayMode();
            }
            else
            {
                HandleEnterPlayMode();
            }
        }

        private void HandleEnterPlayMode()
        {
            if (!PlayerPrefs.HasKey("LastVehicle"))
            {
                PlayerPrefs.SetInt("LastVehicle", 0);
            }
            
            int lastVehicle = PlayerPrefs.GetInt("LastVehicle");
            vehiclePlacementManager.PlaceVehicle((Vehicles.VehicleType) lastVehicle);
        }

        private void HandleExitPlayMode()
        {
            vehiclePlacementManager.StopPlacing();
            vehicleLoadingManager.Destroy();
        }
    }
}
