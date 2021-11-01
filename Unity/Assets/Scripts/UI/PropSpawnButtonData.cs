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

        public string PropAddress => propAddress;
        public PointerTrackingButton PointerTrackingButton { get; private set; }

        private void Awake()
        {
            PointerTrackingButton = GetComponent<PointerTrackingButton>();
        }
    }
}
