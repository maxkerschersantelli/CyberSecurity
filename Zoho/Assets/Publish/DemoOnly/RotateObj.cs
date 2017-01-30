using UnityEngine;  
using System.Collections;  
   
public class RotateObj : MonoBehaviour  
{  
    public float speed = 10f;  
    public bool flipX = false, flipY = false;  
    private Vector3 lastPosition;  
    public Camera camera;  
    void Awake()  
    {  
        camera = (camera == null) ? Camera.main : camera;  
    }
   
    void OnMouseDown()  
    {  
        lastPosition = Input.mousePosition;  
    }  
    void OnMouseDrag()  
    {  
        Vector3 diff = -speed * Time.deltaTime * (Input.mousePosition - lastPosition);  
        diff = new Vector3((flipY?diff.y:-diff.y),(flipX?diff.x:-diff.x), 0f);  
        Vector3 objUp = transform.InverseTransformDirection(camera.transform.TransformDirection(Vector3.up));  
        Vector3 objRight = transform.InverseTransformDirection(camera.transform.TransformDirection(Vector3.right));  
        transform.rotation *= Quaternion.AngleAxis(diff.y, objUp) * Quaternion.AngleAxis(diff.x, objRight);  
        lastPosition = Input.mousePosition;  
    }  
}