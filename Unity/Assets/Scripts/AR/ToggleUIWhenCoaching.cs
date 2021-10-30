using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARKit;
using UnityEngine.XR.ARSubsystems;

namespace AR
{
    [RequireComponent(typeof(ARSession))]
    public class ToggleUIWhenCoaching : MonoBehaviour
    {
        [Header("Settings")]
        [SerializeField] private GameObject[] objsToToggle;
        
        private ARKitSessionSubsystem sessionSubsystem;

        private bool wasEnabledLastFrame;
        
        private void Awake()
        {
            XRSessionSubsystem arSession = GetComponent<ARSession>().subsystem;

            if (arSession is ARKitSessionSubsystem)
            {
                sessionSubsystem = (ARKitSessionSubsystem)GetComponent<ARSession>().subsystem;
            }
        }

        private void Update()
        {
            if (sessionSubsystem == null) return;
            
            if (wasEnabledLastFrame != sessionSubsystem.coachingActive)
            {
                wasEnabledLastFrame = sessionSubsystem.coachingActive;

                for (int i = 0; i < objsToToggle.Length; i++)
                {
                    objsToToggle[i].SetActive(!wasEnabledLastFrame);
                }
            }
        }
    }
}
