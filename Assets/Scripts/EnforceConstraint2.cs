using UnityEngine;
using UnityEngine.UI;
using System.Collections.Generic;
using System.Text;

/// EnforceConstraint is a class that makes sure to keep two GameObjects have the same y position and the same scale.
public class EnforceConstraint2 : MonoBehaviour
{
    /// One GameObject to enforce the constraints.
    public GameObject sr1;
    /// Second GameObject to enforce the constraints.
    public GameObject sr2;

    float savedHeight;

    float savedLeft;
    float savedRight;
    float savedTop;
    float savedBottom;

    UIEnforceConstraints values1;
    UIEnforceConstraints values2;

    void Start()
    {

        values1 = sr1.GetComponent<UIEnforceConstraints>();
        values2 = sr2.GetComponent<UIEnforceConstraints>();

        // savedScale = new Vector3(values1.width, values1.height, 1);
        // savedScale = sr1.transform.localScale;

        savedHeight = sr2.transform.position.y;

        savedTop = values1.top.transform.localPosition.y;
        savedBottom = values1.bottom.transform.localPosition.y;
        savedLeft = values1.left.transform.localPosition.x;
        savedRight = values1.right.transform.localPosition.x;
    }

    void Update()
    {

        if (savedHeight != sr1.transform.position.y)
        {
            sr2.transform.position = new Vector3(sr2.transform.position.x, sr1.transform.position.y, sr2.transform.position.z);
            savedHeight = sr1.transform.position.y;
        }
        else if (savedHeight != sr2.transform.position.y)
        {
            sr1.transform.position = new Vector3(sr1.transform.position.x, sr2.transform.position.y, sr1.transform.position.z);
            savedHeight = sr2.transform.position.y;
        }

        if (savedTop != values2.top.transform.localPosition.y)
        {
            savedTop = values2.top.transform.localPosition.y;
            values1.top.transform.localPosition = new Vector3(values1.top.transform.localPosition.x, savedTop, values1.top.transform.localPosition.z);
        } else if(savedTop != values1.top.transform.localPosition.y)
        {
            savedTop = values1.top.transform.localPosition.y;
            values2.top.transform.localPosition = new Vector3(values2.top.transform.localPosition.x, savedTop, values2.top.transform.localPosition.z);
        }

        if (savedBottom != values2.bottom.transform.localPosition.y)
        {
            savedBottom = values2.bottom.transform.localPosition.y;
            values1.bottom.transform.localPosition = new Vector3(values1.bottom.transform.localPosition.x, savedBottom, values1.bottom.transform.localPosition.z);
        } else if(savedBottom != values1.bottom.transform.localPosition.y)
        {
            savedBottom = values1.bottom.transform.localPosition.y;
            values2.bottom.transform.localPosition = new Vector3(values2.bottom.transform.localPosition.x, savedBottom, values2.bottom.transform.localPosition.z);
        }

        if (savedLeft != values2.left.transform.localPosition.x)
        {
            savedLeft = values2.left.transform.localPosition.x;
            values1.left.transform.localPosition = new Vector3(savedLeft, values1.left.transform.localPosition.y, values1.left.transform.localPosition.z);
        } else if(savedLeft != values1.left.transform.localPosition.x)
        {
            savedLeft = values1.left.transform.localPosition.x;
            values2.left.transform.localPosition = new Vector3(savedLeft, values2.left.transform.localPosition.y, values2.left.transform.localPosition.z);
        }

        if (savedRight != values2.right.transform.localPosition.x)
        {
            savedRight = values2.right.transform.localPosition.x;
            values1.right.transform.localPosition = new Vector3(savedRight, values1.right.transform.localPosition.y, values1.right.transform.localPosition.z);
        } else if(savedRight != values1.right.transform.localPosition.x)
        {
            savedRight = values1.right.transform.localPosition.x;
            values2.right.transform.localPosition = new Vector3(savedRight, values2.right.transform.localPosition.y, values2.right.transform.localPosition.z);
        }

    }
}
