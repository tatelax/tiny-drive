using System.Collections.Generic;
using UnityEngine;

namespace Constants
{
    public static class Vehicles
    {
        public enum VehicleType
        {
            MonsterTruck = 0
        }

        public static readonly Dictionary<VehicleType, string> VehicleDict = new Dictionary<VehicleType, string>
        {
            { VehicleType.MonsterTruck, "Assets/Prefabs/Vehicles/MonsterTruck.prefab" }
        };
    }
}
