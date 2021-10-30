using System;
using DigitalRubyShared;
using UnityEngine;

namespace Gameplay
{
    public class PropTransformHandler : MonoBehaviour
    {
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
            Vector3 newRot = transform.rotation.eulerAngles;
            newRot.y -= rotationDegressDelta;

            Quaternion newQuat = new Quaternion
            {
                eulerAngles = newRot
            };

            transform.rotation = newQuat;
        }
    }
}
