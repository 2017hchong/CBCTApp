using UnityEngine;
using UnityEngine.UI;
using System.Collections.Generic;
using System.Text;

public class Ycord : MonoBehaviour
{
    public SpriteRenderer sr;
    public Text m_Text;
    float width;
    RectTransform rt;

    public void Start()
    {
        m_Text.text = sr.size[1].ToString("n2");
    }

    public void Update()
    {
        m_Text.text = sr.size[1].ToString("n2");
    }
}
