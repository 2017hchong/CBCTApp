using System.Collections;
using System.Collections.Generic;
using UnityEngine;


/// CameraDrag handles the rotation of the camera in front of the x-ray head. It listens for user inputs and rotates the camera around the x-ray head based on user direction.
public class CameraDrag : MonoBehaviour
{
    /// The speed of how fast to rotate the camera.
    public float speed = 100;
     private float X;
     private float Y;
    private float startingPosition;

    /// The target of the camera to rotate around.
    public GameObject target;
    /// The camera that is rotating.
    public GameObject camera;

    void Update()
    {
    	if(!SceneHandler.isXRay)
    		return;
        if (Input.touchCount > 0)
        {
            Touch touch = Input.GetTouch(0);
            switch (touch.phase)
            {
             case TouchPhase.Began:
                 startingPosition = touch.position.x;
                 break;
             case TouchPhase.Moved:
                 if (startingPosition > touch.position.x)
                 {
                     transform.Rotate(Vector3.up, -speed * Time.deltaTime);
                 }
                 else if (startingPosition < touch.position.x)
                 {
                     transform.Rotate(Vector3.up, speed * Time.deltaTime);
                 }
                 break;
             case TouchPhase.Ended:
                 Debug.Log("Touch Phase Ended.");
                 break;
            }
        } else if(Input.GetMouseButton(0))
        {
            transform.Rotate(new Vector3(0, Input.GetAxis("Mouse X") * speed/10, 0), Space.World);
        }
    }

    /// Method to set the location of the camera relative to the target. The Vector3 dist takes in a vector from the target to place the camera.
    public void SetCamera(Vector3 dist)
    {
        camera.transform.position = target.transform.position + dist;
        camera.transform.LookAt(target.transform);
        // Vector3 Dist = Vector3.Distance(Camera.main.transform.position,transform.position) 
    }
 
 
}