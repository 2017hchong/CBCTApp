using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Vuforia;

/// ARHandler is in charge of changing between the AR mode and the non-AR mode. 
public class ARHandler : MonoBehaviour
{
    /// GameObject containing all the related AR GameObjects
	public GameObject arAssets;
    /// ground plane stage object necessary for AR
	public GameObject groundPlaneStage; 
    /// empty GameObject holding the xray as child.
	public GameObject xRayHeadEmpty; 
    /// 3D model head showing x-ray result
	public GameObject xRayHead; 
    /// Script to rotate the camera around the head
	public CameraDrag camScript; 
    /// Button to enter or leave AR mode
    public Button yourButton; 

    GameObject ARCam;

    GameObject MainCam;

    GameObject XRayCam;

    GameObject PlaneFinder;

    GameObject GroundPlaneStage;

    bool isARMode = false;

    void Start()
    {
    	arAssets.transform.GetChild(0).position = new Vector3(0,0,-0.7f);

    	ARCam = GameObject.Find("ARCamera");
    	MainCam = GameObject.Find("MainCamera");
    	XRayCam = GameObject.Find("Camera");
    	PlaneFinder = GameObject.Find("Plane Finder");
    	GroundPlaneStage = GameObject.Find("Ground Plane Stage");

    	NonARMode();

        Button btn = yourButton.GetComponent<Button>();
        btn.onClick.AddListener(ChangeMode);
    }

    void ChangeMode() 
    {
    	if(isARMode) {
    		NonARMode();
    	} else {
    		ARMode();
    	}
    }

    ///
    /// Make the necessary changes to enter AR mode. 
    ///
    public void ARMode() 
    {
    	isARMode = true;
        GroundPlaneStage.transform.position = new Vector3(0,0,0);

    	xRayHead.transform.rotation = Quaternion.Euler(90.0f,0,0);
    	xRayHead.transform.position = new Vector3(0,0.2f,0);
    	xRayHead.transform.parent = groundPlaneStage.transform;

        MainCam.tag = "Untagged";
        ARCam.tag = "MainCamera";

        XRayCam.SetActive(false);
        PlaneFinder.SetActive(true);
    }

    ///
    /// Make the necessary changes to exit AR mode. 
    ///
    public void NonARMode()
    {
    	Transform arCamTrans = ARCam.transform;
    	//Vector3 Dist = arCamTrans.position - xRayHead.transform.position;

        MainCam.tag = "MainCamera";
        ARCam.tag = "Untagged";

        XRayCam.SetActive(true);
        PlaneFinder.SetActive(false);

    	isARMode = false;

    	xRayHead.transform.parent = xRayHeadEmpty.transform;
    	xRayHead.transform.position = new Vector3(0,0,0);
    	xRayHead.transform.rotation = Quaternion.Euler(90.0f,0,0);
    	//camScript.SetCamera(Dist);
    }
}
