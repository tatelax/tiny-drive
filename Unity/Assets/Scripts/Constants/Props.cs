using System.Collections.Generic;

namespace Constants
{
    public static class Props
    {
        public enum Prop
        {
            Cone,
            Barrier,
            DirtRamp1,
        }

        public static readonly Dictionary<Prop, string> PropDict = new Dictionary<Prop, string>
        {
            {Prop.DirtRamp1, "Assets/Art/Toon Racing/Prefabs/Track Kit/Dirt_Ramp_1A.prefab"}
        };
    }
}