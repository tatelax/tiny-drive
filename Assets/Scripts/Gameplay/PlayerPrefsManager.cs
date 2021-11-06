using UnityEngine;

namespace Gameplay
{
    public class PlayerPrefsManager : MonoBehaviour
    {
        public int VehiclePref
        {
            get {
                if (PlayerPrefs.HasKey("Vehicle"))
                {
                    return PlayerPrefs.GetInt("Vehicle");
                }
                else
                {
                    return 0;
                }}
            set
            {
                PlayerPrefs.SetInt("Vehicle", value);
            }
        }

        public void CompleteTutorial()
        {
            PlayerPrefs.SetInt("TutorialCompleted", 1);
        }

        public void UnCompleteTutorial()
        {
            PlayerPrefs.SetInt("TutorialCompleted", 0);
        }

        public bool DidCompleteTutorial()
        {
            if (PlayerPrefs.HasKey("TutorialCompleted"))
            {
                if (PlayerPrefs.GetInt("TutorialCompleted") == 1)
                {
                    return true;
                }

                return false;
            }

            return false;
        }
    }
}
