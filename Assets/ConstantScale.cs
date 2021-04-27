using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ConstantScale : MonoBehaviour
{
    public Transform objectToFollow;
    public Vector3 offset;
    Vector3 initScale;
    Vector3 initObScale;
    Vector3 initTotal;
    // Start is called before the first frame update
    void Start()
    {
        initScale = transform.localScale;
        initObScale = objectToFollow.localScale;
        initTotal = Vector3.Scale(initScale, initObScale);
    }

    // Update is called once per frame
    void Update()
    {
        transform.localScale = new Vector3(objectToFollow.localScale.x * initScale.x / initObScale.x, objectToFollow.localScale.y * initScale.y / initObScale.y, initScale.z);
    }
}
