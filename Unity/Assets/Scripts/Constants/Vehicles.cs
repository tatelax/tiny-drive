using System.Collections.Generic;
using UnityEngine;

namespace Constants
{
    public static class Vehicles
    {
        public enum VehicleType
        {
            Monster_Truck_9A = 0,
            Monster_Truck_9B = 1,
            Monster_Truck_10A = 2,
            Monster_Truck_10B = 3,
            Monster_Truck_11A = 4,
            Monster_Truck_11B = 5,
            Monster_Truck_12A = 6,
            Monster_Truck_12B = 7,
            Race_Car_5A = 8,
            Race_Car_5B = 9,
            Race_Car_5C = 10,
            Race_Car_6A = 11,
            Race_Car_6B = 12,
            Race_Car_6C = 13,
            Race_Car_7A = 14,
            Race_Car_7B = 15,
            Race_Car_7C = 16,
            Race_Car_8A = 17,
            Race_Car_8B = 18,
            Race_Car_8C = 19,
            Rally_Car_1A = 20,
            Rally_Car_1B = 21,
            Rally_Car_1C = 22,
            Rally_Car_2A = 23,
            Rally_Car_2B = 24,
            Rally_Car_2C = 25,
            Rally_Car_3A = 26,
            Rally_Car_3B = 27,
            Rally_Car_3C = 28,
            Rally_Car_4A = 29,
            Rally_Car_4B = 30,
            Rally_Car_4C = 31
        }

        public static readonly Dictionary<VehicleType, string> VehicleDict = new Dictionary<VehicleType, string>
        {
            {VehicleType.Monster_Truck_9A, "Assets/Prefabs/Cars/Monster Trucks/Monster_Truck_9A.prefab"},
            {VehicleType.Monster_Truck_9B, "Assets/Prefabs/Cars/Monster Trucks/Monster_Truck_9B.prefab"},
            {VehicleType.Monster_Truck_10A, "Assets/Prefabs/Cars/Monster Trucks/Monster_Truck_10A.prefab"},
            {VehicleType.Monster_Truck_10B, "Askk,msets/Prefabs/Cars/Monster Trucks/Monster_Truck_10B.prefab"},
            {VehicleType.Monster_Truck_11A, "Assets/Prefabs/Cars/Monster Trucks/Monster_Truck_11A.prefab"},
            {VehicleType.Monster_Truck_11B, "Assets/Prefabs/Cars/Monster Trucks/Monster_Truck_11B.prefab"},
            {VehicleType.Monster_Truck_12A, "Assets/Prefabs/Cars/Monster Trucks/Monster_Truck_12A.prefab"},
            {VehicleType.Monster_Truck_12B, "Assets/Prefabs/Cars/Monster Trucks/Monster_Truck_12B.prefab"},
            {VehicleType.Race_Car_5A, "Assets/Prefabs/Cars/Racing/Race_Car_5A.prefab"},
            {VehicleType.Race_Car_5B, "Assets/Prefabs/Cars/Racing/Race_Car_5B.prefab"},
            {VehicleType.Race_Car_5C, "Assets/Prefabs/Cars/Racing/Race_Car_5C.prefab"},
            {VehicleType.Race_Car_6A, "Assets/Prefabs/Cars/Racing/Race_Car_6A.prefab"},
            {VehicleType.Race_Car_6B, "Assets/Prefabs/Cars/Racing/Race_Car_6B.prefab"},
            {VehicleType.Race_Car_6C, "Assets/Prefabs/Cars/Racing/Race_Car_6C.prefab"},
            {VehicleType.Race_Car_7A, "Assets/Prefabs/Cars/Racing/Race_Car_7A.prefab"},
            {VehicleType.Race_Car_7B, "Assets/Prefabs/Cars/Racing/Race_Car_7B.prefab"},
            {VehicleType.Race_Car_7C, "Assets/Prefabs/Cars/Racing/Race_Car_7C.prefab"},
            {VehicleType.Race_Car_8A, "Assets/Prefabs/Cars/Racing/Race_Car_8A.prefab"},
            {VehicleType.Race_Car_8B, "Assets/Prefabs/Cars/Racing/Race_Car_8B.prefab"},
            {VehicleType.Race_Car_8C, "Assets/Prefabs/Cars/Racing/Race_Car_8C.prefab"},
            {VehicleType.Rally_Car_1A, "Assets/Prefabs/Cars/Rally/Rally_Car_1A.prefab"},
            {VehicleType.Rally_Car_1B, "Assets/Prefabs/Cars/Rally/Rally_Car_1B.prefab"},
            {VehicleType.Rally_Car_1C, "Assets/Prefabs/Cars/Rally/Rally_Car_1C.prefab"},
            {VehicleType.Rally_Car_2A, "Assets/Prefabs/Cars/Rally/Rally_Car_2A.prefab"},
            {VehicleType.Rally_Car_2B, "Assets/Prefabs/Cars/Rally/Rally_Car_2B.prefab"},
            {VehicleType.Rally_Car_2C, "Assets/Prefabs/Cars/Rally/Rally_Car_2C.prefab"},
            {VehicleType.Rally_Car_3A, "Assets/Prefabs/Cars/Rally/Rally_Car_3A.prefab"},
            {VehicleType.Rally_Car_3B, "Assets/Prefabs/Cars/Rally/Rally_Car_3B.prefab"},
            {VehicleType.Rally_Car_3C, "Assets/Prefabs/Cars/Rally/Rally_Car_3C.prefab"},
            {VehicleType.Rally_Car_4A, "Assets/Prefabs/Cars/Rally/Rally_Car_4A.prefab"},
            {VehicleType.Rally_Car_4B, "Assets/Prefabs/Cars/Rally/Rally_Car_4B.prefab"},
            {VehicleType.Rally_Car_4C, "Assets/Prefabs/Cars/Rally/Rally_Car_4C.prefab"},
        };
    }
}
