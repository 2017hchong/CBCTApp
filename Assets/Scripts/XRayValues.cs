using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// XRayValues holds all the updated values for the position, height, and radius of the cylinder region from the bounding boxes.
public class XRayValues : MonoBehaviour
{
    /// The bounding box on the front face view.
    public GameObject front;
    /// The bounding box on the side face view.
    public GameObject side;
    /// The empty GameObject containing the head.
    public GameObject headEmpty;

    /// Position of the cylinder.
    static public Vector3 pos;
    /// Height of the cylinder.
    static public float height;
    ///Radius of the cylinder.
    static public float radius;

    public GameObject head;
    public GameObject xRayHead;


    // Update is called once per frame
    void Update()
    {

        UIEnforceConstraints frontUI = front.GetComponent<UIEnforceConstraints>();
        UIEnforceConstraints sideUI = side.GetComponent<UIEnforceConstraints>();

        pos = new Vector3(
            front.transform.localPosition.x + front.transform.localScale.x * frontUI.savedPos.x, 
            front.transform.localPosition.y + front.transform.localScale.y * frontUI.savedPos.y, 
            side.transform.localPosition.z + side.transform.localScale.x * sideUI.savedPos.x
            ); 

        // constant to relate head to xRayHead
        float scale  = head.transform.localScale.x / xRayHead.transform.localScale.x;

        pos = pos / scale;

        height = (frontUI.height*2) * front.transform.localScale.y / scale;
        radius = (frontUI.width*2) * front.transform.localScale.x / scale / 2.0f;
    }
}
