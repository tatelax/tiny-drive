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
        [SerializeField] private SoundFXManager soundFXManager;
        [SerializeField] private Button togglePlayEditButton;
        [SerializeField] private TextMeshProUGUI toggleButtonText;
        [SerializeField] private Image toggleButtonBg;
        [SerializeField] private GameObject editModeUI;
        [SerializeField] private GameObject playModeUI;
        [SerializeField] private GameObject toggleButtonUI;
        [SerializeField] private VehiclePlacementManager vehiclePlacementManager;
        [SerializeField] private VehicleLoadingManager vehicleLoadingManager;
        [SerializeField] private PlayerPrefsManager playerPrefsManager;

        private bool editMode = false;

        private void Awake()
        {
#if UNITY_EDITOR
            Debug.Log("Auto enabled UI because we're in the editor where finishing coaching isnt possible.");
            toggleButtonUI.SetActive(true);
            Toggle(startInEditMode, false);
#endif
            
            togglePlayEditButton.onClick.AddListener(Toggle);
        }

        public void Toggle()
        {
            Toggle(!editMode);
        }
        
        public void Toggle(bool newEditMode, bool playSound = true)
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

            if (playSound)
            {
                soundFXManager.Play(newEditMode ? soundFXManager.enterEditMode : soundFXManager.exitEditMode);
            }
        }

        private void HandleEnterPlayMode()
        {
            vehiclePlacementManager.PlaceVehicle(playerPrefsManager.VehiclePref);
        }

        private void HandleExitPlayMode()
        {
            vehiclePlacementManager.StopPlacing();
            vehicleLoadingManager.Destroy();
        }
    }
}
