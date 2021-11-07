using System;
using Constants;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;

namespace Gameplay
{
    public class VehicleLoadingManager : MonoBehaviour
    {
        [Header("References")]
        [SerializeField] private SoundFXManager soundFxManager;
        [SerializeField] private GameObject loadingSpinner;
        
        private GameObject currVehicle = null;

        private bool isLoading = false;
        
        public GameObject CurrVehicle => currVehicle;

        private void Awake()
        {
            loadingSpinner.SetActive(false);
        }

        /// <summary>
        /// Loads vehicles. Not necessary to call this. Instead use placement manager
        /// </summary>
        /// <param name="vehicleType"></param>
        public void Load(Vehicles.VehicleType vehicleType)
        {
            if (currVehicle)
            {
                Debug.Log($"Unloading previous vehicle {currVehicle.name}");
                Addressables.ReleaseInstance(currVehicle);
            }

            if (isLoading)
            {
                Debug.LogWarning("Already loading a vehicle...");
                return;
            }

            isLoading = true;
            
            Debug.Log($"Instantiating new vehicle of type {vehicleType}");

            loadingSpinner.SetActive(true);
            
            Addressables.InstantiateAsync(Vehicles.VehicleDict[vehicleType], Vector3.zero, Quaternion.identity)
                .Completed += OnCompleted;
        }

        public void Destroy()
        {
            if (!currVehicle)
            {
                return;
            }
            
            Addressables.ReleaseInstance(currVehicle);
            currVehicle = null;
            
            Debug.Log("Destroyed current vehicle.");
        }

        private void OnCompleted(AsyncOperationHandle<GameObject> obj)
        {
            isLoading = false;
            currVehicle = obj.Result;
            loadingSpinner.SetActive(false);
            soundFxManager.Play(soundFxManager.vehicleLoad);
            Debug.Log($"Vehicle instantiating for {currVehicle.name} complete");
        }
    }
}
