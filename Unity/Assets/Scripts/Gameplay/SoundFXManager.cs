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
        public AudioClip toggleEditMode;
        public AudioClip placeProp;
        public AudioClip destroyProp;

        public void Play(AudioClip audioclip)
        {
            audioSource.PlayOneShot(audioclip);
        }
    }
}
