using System.Collections.Generic;

namespace Constants
{
    public static class Props
    {
        public enum Prop
        {
            Cone,
            Barrier,
            Ramp,
            Coin
        }

        public static readonly Dictionary<Prop, string> PropDict = new Dictionary<Prop, string>
        {
            {Prop.Coin, "Assets/Prefabs/TrackObjs/Coin.prefab"},
            {Prop.Ramp, "Assets/Prefabs/TrackObjs/Ramp.prefab"}
        };
    }
}