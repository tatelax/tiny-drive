using System;
using DigitalRubyShared;
using UnityEngine;

namespace Gameplay
{
    public class PropTransformManager : MonoBehaviour
    {
        [Header("References")]
        [SerializeField] private PropSpawnManager propSpawnManager;
        
        private float rotationDegressDelta;

        /// <summary>
        /// Rotation gesture
        /// </summary>
        private RotateGestureRecognizer RotationGesture { get; set; }

        private void OnEnable()
        {
            RotationGesture = new RotateGestureRecognizer();
            RotationGesture.StateUpdated += RotationGesture_Updated;
            FingersScript.Instance.AddGesture(RotationGesture);
        }
        
        private void OnDisable()
        {
            if (FingersScript.HasInstance)
            {
                FingersScript.Instance.RemoveGesture(RotationGesture);
            }
        }
        
        private void RotationGesture_Updated(DigitalRubyShared.GestureRecognizer gesture)
        {
            if (gesture.State == GestureRecognizerState.Executing)
            {
                rotationDegressDelta = RotationGesture.RotationDegreesDelta;
            }
            else
            {
                rotationDegressDelta = 0;
            }
        }

        private void Update()
        {
            if (!propSpawnManager.CurrentlyPlacing) return;
            
            Vector3 newRot = propSpawnManager.CurrentlyPlacing.transform.rotation.eulerAngles;
            newRot.y -= rotationDegressDelta;
            propSpawnManager.CurrentlyPlacing.transform.rotation = Quaternion.Euler(newRot);
        }
    }
}
