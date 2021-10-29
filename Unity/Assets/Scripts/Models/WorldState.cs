using System.Collections.Generic;

[System.Serializable]
public class Prop
{
    public string name;
    public int propType;
    
    public float posX;
    public float posY;
    public float posZ;
    
    public float rotX;
    public float rotY;
    public float rotZ;

    public Prop(string name, int propType, float posX, float posY, float posZ, float rotX, float rotY, float rotZ)
    {
        this.name = name;
        this.propType = propType;
        this.posX = posX;
        this.posY = posY;
        this.posZ = posZ;
        this.rotX = rotX;
        this.rotY = rotY;
        this.rotZ = rotZ;
    }
}

public class WorldState
{
    public List<Prop> spawnedProps { get; set; }
    public string id;
    
    public WorldState(string _id)
    {
        id = _id;
        spawnedProps = new List<Prop>();
    }
}