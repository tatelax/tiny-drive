using System;
using System.IO;
using System.Threading.Tasks;
using Constants;
using Newtonsoft.Json;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation.Samples;

namespace Gameplay
{
    public class WorldSaveLoadManager : MonoBehaviour
    {
        [Header("References")]
        [SerializeField] private Transform propParent;
        [SerializeField] private Button saveButton;
        [SerializeField] private Button loadButton;
        [SerializeField] private PropManager propManager;
        [SerializeField] private ARWorldMapController arWorldMapController;

        private const string FolderName = "SaveData";
        
        private void Awake()
        {
            saveButton.onClick.AddListener(Save);
            saveButton.onClick.AddListener(arWorldMapController.OnSaveButton);
            loadButton.onClick.AddListener(arWorldMapController.OnLoadButton);

            arWorldMapController.OnLoadComplete += Load;
        }

        private void Save()
        {
            string worldName = "helloworld";
            WorldState worldState = new WorldState(worldName);

            for (int i = 0 ; i < propParent.childCount; i++)
            {
                Transform child = propParent.GetChild(i);
                Vector3 position = child.position;
                Vector3 rotation = child.rotation.eulerAngles;
                
                Prop prop = new Prop(child.name, 
                    propManager.SpawnedProps[child.gameObject],
                    position.x,
                    position.y,
                    position.z,
                    rotation.x,
                    
                    rotation.y,
                    rotation.z);
                
                worldState.spawnedProps.Add(prop);
            }

            string json = JsonConvert.SerializeObject(worldState);
            
            SaveDataToTextFile(FolderName, worldName, json);
        }

        private async void Load()
        {
            propManager.ClearAllProps();

            Task<string> json = ReadSavedData(FolderName, "helloworld");
            string result = await json;

            WorldState worldState = JsonConvert.DeserializeObject<WorldState>(result);

            if (worldState.spawnedProps == null) return;
            
            for (int i = 0; i < worldState.spawnedProps.Count; i++)
            {
                Prop prop = worldState.spawnedProps[i];
                Vector3 position = new Vector3(prop.posX, prop.posY, prop.posZ);
                Quaternion rotation = Quaternion.identity;

                propManager.SpawnProp(prop.propAddress, position, rotation, false);
            }
        }

        private void SaveDataToTextFile(string folderName, string fileName, string data)
        {
            string folderPath = Path.Combine(Application.persistentDataPath, folderName);
            string filePath = Path.Combine(folderPath, fileName + ".json");
            
            if(!Directory.Exists(folderPath))
            {
                Directory.CreateDirectory(folderPath);
            }

            if(File.Exists(filePath))
            {
                File.Delete(filePath);
            }

            using(var fs = File.Open(filePath, FileMode.OpenOrCreate, FileAccess.Write, FileShare.Write))
            {
                using(var writer = new StreamWriter(fs))
                {
                    writer.Write(data);
                }
            }
            
            Debug.Log($"File saved to: {filePath}");
        }
        
        public async Task<string> ReadSavedData(string folderName, string fileName)
        {
            string folderPath = Path.Combine(Application.persistentDataPath, folderName);
            string filePath = Path.Combine(folderPath, fileName + ".json");

            if (!File.Exists(filePath))
            {
                Debug.LogError($"File not found {filePath}");
                return null;
            }

            string result = "";
            
            using(var fs = File.Open(filePath, FileMode.Open, FileAccess.Read, FileShare.Read))
            {
                using(var reader = new StreamReader(fs))
                {
                    var task = Task.Run(async () =>
                    {
                        result = await reader.ReadToEndAsync();
                    });
                    await task;
                }
            }

            Debug.Log("Loading Complete!");
            
            return result;
        }
    }
}
