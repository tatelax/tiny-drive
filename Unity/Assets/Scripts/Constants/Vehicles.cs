using System.Collections.Generic;
using UnityEngine;

namespace Constants
{
    public static class Vehicles
    {
        public enum VehicleType
        {
            MonsterTruck9A = 0
        }

        public static readonly Dictionary<VehicleType, string> VehicleDict = new Dictionary<VehicleType, string>
        {
            { VehicleType.MonsterTruck9A, "Assets/Prefabs/Cars/Monster Trucks/Monster_Truck_9A.prefab" }
        };
    }
}
