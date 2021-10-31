using System.Collections.Generic;

namespace Constants
{
    public static class Props
    {
        public enum Prop
        {
            Tower,
            Press_Tower_1A,
            Garage,
            Barrel_1A,
            Barrel_1B,
            Cone_1A,
            Cone_1B,
            Extinguisher_1A,
            Impact_Tires_1A,
            Impact_Tires_2A,
            Pine_Trees_2A,
            Pine_Trees_2B,
            Rocks_1A,
            Rocks_1B,
            Billboard_2F,
            Canopy_1A,
            Dirt_Ramp_1A,
            Dirt_Ramp_1B,
            Dirt_Ramp_1C,
            Fence_1A,
            Fence_2A,
            Fence_3A,
            Sign_Support_1A,
            Stand_1E
        }

        public static readonly Dictionary<Prop, string> PropDict = new Dictionary<Prop, string>
        {
            {Prop.Tower, "Assets/Prefabs/Buildings/Tower_1A.prefab"},
            {Prop.Press_Tower_1A, "Assets/Prefabs/Buildings/Press_Tower_1A.prefab"},
            {Prop.Garage, "Assets/Prefabs/Buildings/Garage_1A.prefab"},
            {Prop.Barrel_1A, "Assets/Prefabs/Props/Barrel_1A.prefab"},
            {Prop.Barrel_1B, "Assets/Prefabs/Props/Barrel_1B.prefab"},
            {Prop.Cone_1A, "Assets/Prefabs/Props/Cone_1A.prefab"},
            {Prop.Cone_1B, "Assets/Prefabs/Props/Cone_1B.prefab"},
            {Prop.Extinguisher_1A, "Assets/Prefabs/Props/Extinguisher_1A.prefab"},
            {Prop.Impact_Tires_1A, "Assets/Prefabs/Props/Impact_Tires_1A.prefab"},
            {Prop.Impact_Tires_2A, "Assets/Prefabs/Props/Impact_Tires_2A.prefab"},
            {Prop.Pine_Trees_2A, "Assets/Prefabs/Props/Pine_Tree_2A.prefab"},
            {Prop.Pine_Trees_2B, "Assets/Prefabs/Props/Pine_Tree_2B.prefab"},
            {Prop.Rocks_1A, "Assets/Prefabs/Props/Rocks_1A.prefab"},
            {Prop.Rocks_1B, "Assets/Prefabs/Props/Rocks_1B.prefab"},
            {Prop.Billboard_2F, "Assets/Prefabs/Track Kit/Billboard_2F.prefab"},
            {Prop.Canopy_1A, "Assets/Prefabs/Track Kit/Canopy_1A.prefab"},
            {Prop.Dirt_Ramp_1A, "Assets/Prefabs/Track Kit/Dirt_Ramp_1A.prefab"},
            {Prop.Dirt_Ramp_1B, "Assets/Prefabs/Track Kit/Dirt_Ramp_1B.prefab"},
            {Prop.Dirt_Ramp_1C, "Assets/Prefabs/Track Kit/Dirt_Ramp_1C.prefab"},
            {Prop.Fence_1A, "Assets/Prefabs/Track Kit/Fence_1A.prefab"},
            {Prop.Fence_2A, "Assets/Prefabs/Track Kit/Fence_2A.prefab"},
            {Prop.Fence_3A, "Assets/Prefabs/Track Kit/Fence_3A.prefab"},
            {Prop.Sign_Support_1A, "Assets/Prefabs/Track Kit/Sign_Support_1A.prefab"},
            {Prop.Stand_1E, "Assets/Prefabs/Track Kit/Stand_1E.prefab"}
        };
    }
}