using System.Collections;
using System.Collections.Generic;
using UnityEngine;


/// ClippingCyllinder is the class in charge of sending values of the cylinder to the shader. At each update it sends the position, height, and radius to the shader in the correct format.
public class ClippingCyllinder : MonoBehaviour
{
    /// Mat is the material that holds the shader to which we pass the values to.
    public Material[] mat;

    /// The height of the cylinder.
    public static float height;
    /// The radius of the cylinder.
    public static float radius;
    /// The position of the cylinder.
    public static Vector3 position;

    /// The x-ray head GameObject.
    public GameObject xRayHead;
    Plane planeUp;
    Plane planeDown;
    void Start()
    {
        transform.up = Vector3.up;

    }

    // Update is called once per frame
    void Update()
    {
        position = XRayValues.pos;
        transform.position = XRayValues.pos;

        height = XRayValues.height;
        radius = XRayValues.radius;

        //create clipping planes
        planeUp = new Plane(transform.up, transform.position + transform.up * height / 2);
        planeDown = new Plane(-1 * transform.up, transform.position + -1 * transform.up * height / 2);

        foreach (Material m in mat)
        {
            //transfer values from plane to vector4
            Vector4 planeRepresentationUp = new Vector4(planeUp.normal.x, planeUp.normal.y, planeUp.normal.z, planeUp.distance);
            //pass vector to shader
            m.SetVector("_PlaneUp", planeRepresentationUp);

            //transfer values from plane to vector4
            Vector4 planeRepresentationDown = new Vector4(planeDown.normal.x, planeDown.normal.y, planeDown.normal.z, planeDown.distance);
            //pass vector to shader
            m.SetVector("_PlaneDown", planeRepresentationDown);

            //transfer cylinder values
            Vector4 cylinderRepresentation = new Vector4(transform.position.x, transform.position.y, transform.position.z, radius);
            //pass vector to shader
            m.SetVector("_Cylinder", cylinderRepresentation);

            m.SetVector("_Position", xRayHead.transform.position);
        }
    }
}
