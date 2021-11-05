using System;
using Constants;
using UnityEngine;
using UnityEngine.UI;

namespace UI
{
    [RequireComponent(typeof(PointerTrackingButton))]
    public class PropSpawnButtonData : MonoBehaviour
    {
        [SerializeField] string propAddress;

        public PointerTrackingButton PointerTrackingButton;
        public string PropAddress => propAddress;

        private void Awake()
        {
            PointerTrackingButton = GetComponent<PointerTrackingButton>();
        }
    }
}
