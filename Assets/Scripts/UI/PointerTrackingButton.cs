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
    [System.Serializable]
    public class PointerTrackingButton : Button, IDragHandler, IBeginDragHandler, IEndDragHandler
    {
        [SerializeField] private ScrollRect scrollRect;
        [SerializeField] private float requiredDragAmount = 2.0f;
        [SerializeField] private float holdDownTime = 1f;
        
        private ProceduralImage procImg;
        
        public event Action OnDragStart;
        public event Action OnDragStop;

        public ScrollRect ScrollRect
        {
            get => scrollRect;
            set => scrollRect = value;
        }

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

        private bool isHoldingDownButton;
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
            isHoldingDownButton = true;
            currHoldDownTime = 0;
        }

        public override void OnPointerUp(PointerEventData eventData)
        { 
            base.OnPointerUp(eventData);
            
            if (!Application.isPlaying) return;
            
            isHoldingDownButton = false;
            didInvoke = false;
            currHoldDownTime = 0;
            Debug.Log("STOP");
            OnDragStop?.Invoke();
        }
        
        public void OnDrag(PointerEventData eventData)
        {
            if(!scrollRect) return;
            
            scrollRect.OnDrag(eventData);
        }
        public void OnEndDrag(PointerEventData eventData)
        {
            if(!scrollRect) return;
            
            scrollRect.OnEndDrag(eventData);
        }
        public void OnBeginDrag(PointerEventData eventData)
        {
            if(!scrollRect) return;
            
            scrollRect.OnBeginDrag(eventData);

            isHoldingDownButton = false;
            currHoldDownTime = 0;
        }
        
        public void Update()
        {
            if (!isHoldingDownButton) return;
            if (didInvoke) return;

            currHoldDownTime += Time.deltaTime;
            
            if (currHoldDownTime < holdDownTime) return;

            OnDragStart?.Invoke();
            didInvoke = true;
            currHoldDownTime = 0;
        }
    }
}
