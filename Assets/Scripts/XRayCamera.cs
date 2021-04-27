using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// XRayCamera is a class to handle the camera capturing the x-ray image. Currently it only consists of a Light to enable and disable pre and post render.
public class XRayCamera : MonoBehaviour
{
	/// A light that is a child to the camera.
    public Light light;

    void OnPreCull()
    {
        light.enabled = false;
    }

    void OnPostRender()
    {
        light.enabled = true;
    }
}
