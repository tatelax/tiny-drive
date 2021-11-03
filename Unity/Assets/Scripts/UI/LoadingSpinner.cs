using UnityEngine;

namespace UI
{
    public class LoadingSpinner : MonoBehaviour
    {
        [SerializeField] private float speed = 5.0f;

        void Update()
        {
            transform.Rotate(Vector3.forward * Time.deltaTime * speed);
        }
    }
}
