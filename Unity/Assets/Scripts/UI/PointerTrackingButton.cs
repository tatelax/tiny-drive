using System;
using DG.Tweening;
using DG.Tweening.Core;
using DG.Tweening.Plugins.Options;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.EventSystems;
using UnityEngine.InputSystem;
using UnityEngine.UI;
using UnityEngine.UI.ProceduralImage;

namespace UI
{
    /// <summary>
    /// Tracks pointer for drag events on click
    /// </summary>
    [AddComponentMenu("Custom/Pointer Tracking Button")]
    [RequireComponent(typeof(ProceduralImage))]
    public class PointerTrackingButton : Button, IDragHandler
    {
        [SerializeField] private float requiredDragAmount = 2.0f;
        [SerializeField] private float holdDownTime = 1f;
        
        private ProceduralImage procImg;
        
        public event Action OnDragStart;
        public event Action OnDragStop;
        
        public float RequiredDragAmount
        {
            get => requiredDragAmount;
            set => requiredDragAmount = value;
        }

        public float HoldDownTime
        {
            get => holdDownTime;
            set => holdDownTime = value;
        }

        private bool isDragging;
        private bool didInvoke;
        private Vector2 fingerPosOnDown;
        private float currHoldDownTime = 0;

        protected override void Awake()
        {
            base.Awake();
            
            procImg = GetComponent<ProceduralImage>();
        }
        
        public override void OnPointerDown(PointerEventData eventData)
        {
            base.OnPointerDown(eventData);

            if (!Application.isPlaying) return;

            fingerPosOnDown = eventData.position;
            isDragging = true;
            currHoldDownTime = 0;
        }

        public override void OnPointerUp(PointerEventData eventData)
        { 
            base.OnPointerUp(eventData);
            
            if (!Application.isPlaying) return;
            
            isDragging = false;
            didInvoke = false;
            currHoldDownTime = 0;
            Debug.Log("STOP");
            OnDragStop?.Invoke();
        }
        
        public void OnDrag(PointerEventData eventData) { }

        public void Update()
        {
            if (!isDragging) return;
            if (didInvoke) return;

            currHoldDownTime += Time.deltaTime;
            
            if (currHoldDownTime < holdDownTime) return;

            OnDragStart?.Invoke();
            didInvoke = true;
            currHoldDownTime = 0;
        }
    }
}
