using System;
using DigitalRubyShared;
using UnityEngine;

namespace Gameplay
{
    public class PropTransformManager : MonoBehaviour
    {
        [Header("References")]
        [SerializeField] private PropManager propManager;
        [SerializeField] private float minScale, maxScale;

        private RotateGestureRecognizer rotationGesture;
        private ScaleGestureRecognizer scaleGesture;
        
        private void OnEnable()
        {
            rotationGesture = new RotateGestureRecognizer();
            scaleGesture = new ScaleGestureRecognizer();
            
            rotationGesture.StateUpdated += RotationGesture_Updated;
            scaleGesture.StateUpdated += ScaleGesture_Updated;

            rotationGesture.AllowSimultaneousExecutionWithAllGestures();
            scaleGesture.AllowSimultaneousExecutionWithAllGestures();

            FingersScript.Instance.AddGesture(rotationGesture);
            FingersScript.Instance.AddGesture(scaleGesture);
        }

        private void OnDisable()
        {
            if (FingersScript.HasInstance)
            {
                FingersScript.Instance.RemoveGesture(rotationGesture);
                FingersScript.Instance.RemoveGesture(scaleGesture);
            }
        }
        
        private void RotationGesture_Updated(DigitalRubyShared.GestureRecognizer gesture)
        {
            if (!propManager.CurrentlyPlacing) return;
            
            if (gesture.State == GestureRecognizerState.Executing)
            {
                Vector3 newRot = propManager.CurrentlyPlacing.transform.rotation.eulerAngles;
                newRot.y -= rotationGesture.RotationDegreesDelta;
                propManager.CurrentlyPlacing.transform.rotation = Quaternion.Euler(newRot);
            }
        }
        
        private void ScaleGesture_Updated(GestureRecognizer gesture)
        {
            if (!propManager.CurrentlyPlacing) return;
            
            if (gesture.State == GestureRecognizerState.Executing)
            {
                Vector3 currScale = propManager.CurrentlyPlacing.transform.localScale;
                
                if(currScale.x > minScale && currScale.x < maxScale)
                    propManager.CurrentlyPlacing.transform.localScale *= scaleGesture.ScaleMultiplier;
            }
        }
    }
}
