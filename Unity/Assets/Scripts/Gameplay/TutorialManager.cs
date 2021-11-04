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

        private void Awake()
        {
            completeTutorialButton.onClick.AddListener(CompleteTutorial);
            
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
