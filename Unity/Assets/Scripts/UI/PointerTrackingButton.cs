using System;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.EventSystems;
using UnityEngine.InputSystem;
using UnityEngine.UI;

namespace UI
{
    /// <summary>
    /// Tracks pointer for drag events on click
    /// </summary>
    [AddComponentMenu("Custom/Pointer Tracking Button")]
    public class PointerTrackingButton : Button
    {
        [SerializeField] private float requiredDragAmount = 2.0f;

        public event Action OnDragStart;
        public event Action OnDragStop;
        
        public float RequiredDragAmount
        {
            get => requiredDragAmount;
            set => requiredDragAmount = value;
        }

        private bool isDragging;
        private bool didInvoke;
        private Vector2 fingerPosOnDown;
        
        public override void OnPointerDown(PointerEventData eventData)
        {
            base.OnPointerDown(eventData);

            if (!Application.isPlaying) return;
            isDragging = true;
            fingerPosOnDown = eventData.position;
            
        }

        public override void OnPointerUp(PointerEventData eventData)
        {
            base.OnPointerUp(eventData);
            
            if (!Application.isPlaying) return;
            
            isDragging = false;
            didInvoke = false;
            
            OnDragStop?.Invoke();
        }

        public void Update()
        {
            if (!isDragging) return;

            if (didInvoke) return;
            
            if (Vector2.Distance(fingerPosOnDown, new Vector2(Pointer.current.position.x.ReadValue(), Pointer.current.position.y.ReadValue())) < requiredDragAmount)
            {
                return;
            }
            
            OnDragStart?.Invoke();
            didInvoke = true;
        }
    }
}
