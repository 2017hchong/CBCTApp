using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// FlipCamera is the script used for controlling the locations of the two cameras and the orientation of the head in the user interface. It always ensures that the main camera is scanning the part of the screen that the user wants to interact with.
public class FlipCamera : MonoBehaviour
{
    /// The main camera. Always located on the z-axis.
    public Camera mainCam;
    /// The side camera. Scans the orientation of the head not scanned by the main camera.
    public Camera sideCam;

    /// An empty GameObject that contains the head.
    public GameObject headEmpty;

    /// The box on the left side of the screen.
    public GameObject leftBox;
    /// The box on the right side of the screen.
    public GameObject rightBox;
    /// Boolean to keep track of which camera is at which side of the screen. True if the main camera is on the left side and is capturing the front view of the head.
    static public bool isFrontView = true;

    int camDist = 3;

    ///
    /// The Update method gets called at each frame. This method is listening for a user input at each frame. 
    /// If it detects user input, it determines which side of the screen it occured at, and flips the cameras accordingly.
    ///
    public void Update()
    {
        if (SceneHandler.isXRay)
            return;

        //Click
        if (Input.GetMouseButtonDown(0))
        {
            Vector3 pos = Input.mousePosition;

            if (pos.x > Screen.width / 2 && isFrontView)
            {
                isFrontView = false;
                buttonFlipCamera();
            }
            else if(pos.x < Screen.width / 2 && !isFrontView)
            {
                isFrontView = true;
                buttonFlipCamera();
            }
        }
        //Mobile
        if (Input.touchCount > 0 && Input.touches[0].phase == TouchPhase.Began)
        {
            Vector3 pos = Input.touches[0].position;

            if (pos.x > Screen.width / 2 && isFrontView)
            {
                isFrontView = false;
                buttonFlipCamera();
            }
            else if (pos.x < Screen.width / 2 && !isFrontView)
            {
                isFrontView = true;
                buttonFlipCamera();
            }
        }
    }

    ///
    /// This method sets the view back to the view where the main camera is on the left and is capturing the front face view. 
    /// It also sets isFrontView to true.
    ///
    public void resetView()
    {
        if (!isFrontView)
        {
            isFrontView = true;
            buttonFlipCamera();
        }
    }
    ///
    /// This method sets the camera orientations correctly, depending on the value of isFrontView.
    /// It rotates the side camera depending on whether to fix it to capture the front or side view of the camera.
    /// The head is also rotated by 90 degrees clockwise if isFrontView is false. LayerMasks are updated for the 
    /// UI boxes depending on which camera is capturing which box.
    ///
    public void buttonFlipCamera()
    {
        if(isFrontView)
        {
            headEmpty.transform.Rotate(new Vector3(0, -90, 0));
            sideCam.transform.Rotate(new Vector3(0, -180, 0));
            sideCam.transform.position = new Vector3(camDist, 0, 0) + headEmpty.transform.position;

            SetLayerRecursively(rightBox, LayerMask.NameToLayer("Side Camera"));
            SetLayerRecursively(leftBox, LayerMask.NameToLayer("Front Camera"));

            sideCam.rect = new Rect(0.5f, 0, 0.5f, 1);
            mainCam.rect = new Rect(0, 0, 0.5f, 1);
        }
        else
        {
            headEmpty.transform.Rotate(new Vector3(0, 90, 0));
            sideCam.transform.Rotate(new Vector3(0, 180, 0));
            sideCam.transform.position = new Vector3(-camDist, 0, 0) + headEmpty.transform.position;

            SetLayerRecursively(rightBox, LayerMask.NameToLayer("Front Camera"));
            SetLayerRecursively(leftBox, LayerMask.NameToLayer("Side Camera"));

            mainCam.rect = new Rect(0.5f, 0, 0.5f, 1);
            sideCam.rect = new Rect(0, 0, 0.5f, 1);
        }
    }
    void SetLayerRecursively(GameObject obj, int newLayer)
    {
        if (null == obj)
        {
            return;
        }

        obj.layer = newLayer;

        foreach (Transform child in obj.transform)
        {
            if (null == child)
            {
                continue;
            }
            SetLayerRecursively(child.gameObject, newLayer);
        }
    }
}
