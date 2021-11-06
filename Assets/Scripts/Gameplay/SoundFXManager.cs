using UnityEngine;

namespace Gameplay
{
    public class SoundFXManager : MonoBehaviour
    {
        [Header("References")]
        [SerializeField] private AudioSource audioSource;

        [Header("Sounds")]
        public AudioClip vehicleLoad;
        public AudioClip vehicleRelease;
        public AudioClip enterEditMode;
        public AudioClip exitEditMode;
        public AudioClip placeProp;
        public AudioClip propLoad;
        public AudioClip destroyProp;

        public void Play(AudioClip audioclip)
        {
            audioSource.PlayOneShot(audioclip);
        }
    }
}
