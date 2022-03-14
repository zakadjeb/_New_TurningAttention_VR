using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using LSL;

public class LSL_HeadPosDir : MonoBehaviour
{
    [Header("LSL String")]
    public Camera Camera;                           // The Camera
    public liblsl.StreamOutlet outletHeadPos, outletHeadDir; // Creating the LSL outlet for head position and direction
    private float[] cameraPos, cameraDir;           // Creating the list of floats holding the position and the vector
    public string HeadPositionStreamName = "Unity.HeadPositionStream"; // Setting the Stream Name
    public string HeadPositionStreamType = "Unity.StreamType";  // Setting the Stream Type
    public string HeadDirectionStreamName = "Unity.HeadDirectionStream"; // Setting the Stream Name
    public string HeadDirectionStreamType = "Unity.StreamType";  // Setting the Stream Type
    // Start is called before the first frame update
    void Start()
    {
        Camera = GameObject.Find("Camera").GetComponent<Camera>();

        // LSL setup head position
        liblsl.StreamInfo streamInfoHeadPos = new liblsl.StreamInfo(HeadPositionStreamName,HeadPositionStreamType,3,Time.fixedDeltaTime * 1000, liblsl.channel_format_t.cf_float32);
        liblsl.XMLElement chanHeadPos = streamInfoHeadPos.desc().append_child("Positions");
        chanHeadPos.append_child("Position").append_child_value("Label", "X");
        chanHeadPos.append_child("Position").append_child_value("Label", "Y");
        chanHeadPos.append_child("Position").append_child_value("Label", "Z");
        outletHeadPos = new liblsl.StreamOutlet(streamInfoHeadPos);
        cameraPos = new float[3];

        // LSL setup head direction
        liblsl.StreamInfo streamInfoHeadDir = new liblsl.StreamInfo(HeadDirectionStreamName,HeadDirectionStreamType,3,Time.fixedDeltaTime * 1000, liblsl.channel_format_t.cf_float32);
        liblsl.XMLElement chanHeadDir = streamInfoHeadDir.desc().append_child("Positions");
        chanHeadDir.append_child("Direction").append_child_value("Label", "X");
        chanHeadDir.append_child("Direction").append_child_value("Label", "Y");
        chanHeadDir.append_child("Direction").append_child_value("Label", "Z");
        outletHeadDir = new liblsl.StreamOutlet(streamInfoHeadDir);
        cameraDir = new float[3];

        DontDestroyOnLoad(this);
    }

    // Update is called once per frame
    void Update()
    {
        // LSL updating position
        Vector3 pos = Camera.transform.position;
        cameraPos[0] = pos.x;
        cameraPos[1] = pos.y;
        cameraPos[2] = pos.z;
        outletHeadPos.push_sample(cameraPos);

        // LSL updating direction
        Vector3 dir = Camera.transform.eulerAngles;
        cameraDir[0] = dir.x;
        cameraDir[1] = dir.y;
        cameraDir[2] = dir.z;
        outletHeadDir.push_sample(cameraDir);

    }
}
