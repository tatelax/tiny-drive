using System.Collections.Generic;

namespace Constants
{
    public static class Props
    {
        public enum Prop
        {
            DirtRamp1A
        }

        public static readonly Dictionary<Prop, string> PropDict = new Dictionary<Prop, string>
        {
            {Prop.DirtRamp1A, "Assets/Prefabs/Track Kit/Dirt_Ramp_1A.prefab"}
        };
    }
}