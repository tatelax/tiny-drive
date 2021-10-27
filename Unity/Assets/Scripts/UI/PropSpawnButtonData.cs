using System;
using Constants;
using UnityEngine;
using UnityEngine.UI;

namespace UI
{
    [RequireComponent(typeof(PointerTrackingButton))]
    public class PropSpawnButtonData : MonoBehaviour
    {
        [SerializeField] private Props.Prop propType;

        public Props.Prop PropType => propType;
        public PointerTrackingButton PointerTrackingButton { get; private set; }

        private void Awake()
        {
            PointerTrackingButton = GetComponent<PointerTrackingButton>();
        }
    }
}
