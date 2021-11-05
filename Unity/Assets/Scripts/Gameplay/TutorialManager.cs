using AR;
using Sirenix.OdinInspector;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation.Samples;

namespace Gameplay
{
    public class TutorialManager : MonoBehaviour
    {
        [Header("References")]
        [SerializeField] private GameObject tutorialPanel;
        [SerializeField] private PlayerPrefsManager playerPrefsManager;
        [SerializeField] private ARKitCoachingOverlay coachingOverlay;
        [SerializeField] private Button completeTutorialButton;
        [SerializeField] private ToggleUIWhenCoaching toggleUIWhenCoaching;
        
        private void Awake()
        {
            completeTutorialButton.onClick.AddListener(CompleteTutorial);
            coachingOverlay.enabled = false;
            toggleUIWhenCoaching.enabled = false;
            
            if (!playerPrefsManager.DidCompleteTutorial())
            {
                ShowTutorial();
            }
            else
            {
                CompleteTutorial();
            }
        }

        private void ShowTutorial()
        {
            tutorialPanel.SetActive(true);
        }

        private void CompleteTutorial()
        {
            tutorialPanel.SetActive(false);
            toggleUIWhenCoaching.enabled = true;
            coachingOverlay.enabled = true;
            coachingOverlay.ActivateCoaching(true);
            playerPrefsManager.CompleteTutorial();
            Debug.Log("Completed tutorial");
        }

        [Button("Reset Tutorial Completion Save")]
        private void ResetPlayerPrefs()
        {
            playerPrefsManager.UnCompleteTutorial();
        }
    }
}
