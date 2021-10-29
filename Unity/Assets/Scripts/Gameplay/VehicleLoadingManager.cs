using System;
using Constants;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;

namespace Gameplay
{
    public class VehicleLoadingManager : MonoBehaviour
    {
        private GameObject currVehicle = null;

        public GameObject CurrVehicle => currVehicle;

        private bool isLoading = false;

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

            Addressables.InstantiateAsync(Vehicles.VehicleDict[vehicleType], Vector3.zero, Quaternion.identity)
                .Completed += OnCompleted;
        }

        public void Destroy()
        {
            Addressables.ReleaseInstance(currVehicle);
            currVehicle = null;
            
            Debug.Log("Destroyed current vehicle.");
        }

        private void OnCompleted(AsyncOperationHandle<GameObject> obj)
        {
            isLoading = false;
            currVehicle = obj.Result;
            Debug.Log($"Vehicle instantiating for {currVehicle.name} complete");
        }
    }
}
