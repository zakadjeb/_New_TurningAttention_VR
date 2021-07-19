using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using Valve.VR;
using System;

public class PosnerParadigm : MonoBehaviour
{
    // Start is called before the first frame update

    public Manager m;                               // Link to Manager
    public GameObject StimulusRight;                // The Right cube
    public GameObject StimulusLeft;                 // The Left cube
    //public GameObject XRRig;                        // The rig
    public Camera Camera;                           // The Camera
    private Vector3 leftDirection;                  // The left vector for stimulus projection
    private Vector3 rightDirection;                 // The right vector for stimulus projection
    public float excentricity = 60f;                // Excentricity angles
    public int layerMask;                  // Ray distance
    public SteamVR_Action_Boolean PosnerClicks;     // Retrieving the ActionSet of controller
    public SteamVR_Input_Sources HandType;          // The handtype needed
    public string CurrentCondition;                 // A string to compare with for hit/miss data
    public bool EventMarkerRun = false;             // Boolean for SendMarker 
    public bool HasRun = false;                     // Boolean to reset the trial number of the posner paradigm
    public bool showRightStimulus = false;          // Boolean for showing the right stimulus 
    public bool showLeftStimulus = false;           // Boolean for showing the left stimulus 
    public bool StimulusShown = false;              // Boolean for the stimulus
    public List<string> PosnerList;                 // The list of order for the posner paradigm
    [Header("LSL String")]
    private liblsl.StreamOutlet outlet;             // Creating the LSL outlet
    private float[] cameraPos;                      // Creating the list of floats holding the position
    public string StreamName = "Unity.HeadPositionStream"; // Setting the Stream Name
    public string StreamType = "Unity.StreamType";  // Setting the Stream Type
    public string StreamId = "UnityStreamID1";      // Setting the Stream ID

    void Start()
    {     
        // Making sure the RayCast only hits objects in Layer 6
        layerMask = 1 << 6; // Hit only Layer 6

        // LSL setup
        liblsl.StreamInfo streamInfo = new liblsl.StreamInfo(StreamName,StreamType,3,Time.fixedDeltaTime * 1000, liblsl.channel_format_t.cf_float32);
        liblsl.XMLElement chan = streamInfo.desc().append_child("Positions");
        chan.append_child("Position").append_child_value("Label", "X");
        chan.append_child("Position").append_child_value("Label", "Y");
        chan.append_child("Position").append_child_value("Label", "Z");
        outlet = new liblsl.StreamOutlet(streamInfo);
        cameraPos = new float[3];

    }

    // Update is called once per frame
    void Update()
    {
        // LSL updating position
        Vector3 pos = gameObject.transform.position;
        cameraPos[0] = pos.x;
        cameraPos[1] = pos.y;
        cameraPos[2] = pos.z;
        outlet.push_sample(cameraPos);

        // Setting up the RayCast for projecting the stimulus
        leftDirection = Camera.transform.forward;
        rightDirection = Camera.transform.forward;
        leftDirection = Quaternion.AngleAxis(-excentricity, Vector3.up) * leftDirection;
        rightDirection = Quaternion.AngleAxis(excentricity, Vector3.up) * rightDirection;
        RaycastHit hitLeft;
        RaycastHit hitRight;
        Ray leftRay = new Ray(Camera.transform.position, leftDirection);
        Ray rightRay = new Ray(Camera.transform.position, rightDirection);

        Debug.DrawRay(Camera.transform.position, leftDirection, Color.green, 2);
        Debug.DrawRay(Camera.transform.position, rightDirection, Color.cyan, 2);
        
        // Resetting 
        if (m.NewTrial){
            CurrentCondition = "";
            m.CurrentPosnerWall = "";
            m.posnerDone = false;
            HasRun = false;
        }

        // Pseudo-randomize the list of turning direction
        if (!HasRun) {
            
            for (int i = 0; i < (10 / 2); i++)
            {
                PosnerList.Add("Right");      // Right
                PosnerList.Add("Left");       // Left
                PosnerList = PosnerList.OrderBy(x => UnityEngine.Random.value).ToList();
            }
            HasRun = true;
        }

        // Showing the stimuli
        if (showRightStimulus){
            if(Physics.Raycast(rightRay, out hitRight, Mathf.Infinity, layerMask)){
                if(hitRight.collider.transform.parent.tag == "Walls"){
                    //Debug.Log("we're in");
                    StimulusRight.transform.position = Camera.transform.position + (rightDirection * hitRight.distance);
                    StimulusRight.SetActive(true);
                    StartCoroutine(DisableStimulus());
                    StimulusShown = true;
                }
            }
        }
        if (showLeftStimulus){
            if(Physics.Raycast(leftRay, out hitLeft, Mathf.Infinity, layerMask)){
                if(hitLeft.collider.transform.parent.tag == "Walls"){
                    //Debug.Log("we're in");
                    StimulusLeft.transform.position = Camera.transform.position + (leftDirection * hitLeft.distance);
                    StimulusLeft.SetActive(true);
                    StartCoroutine(DisableStimulus());
                    StimulusShown = true;
                }
            }
        }

        // Last wall
        if (m.CurrentPosnerWall == "PosnerWall10") {
            StartCoroutine(LastWall());            
        }

        // Handling the triggers and LSL events
        if (m.CurrentPosnerWall != "PosnerWall10") {
            if (SteamVR_Actions.default_PosnerClicks.GetStateDown(SteamVR_Input_Sources.LeftHand) && CurrentCondition == "Left") {
                sendMarker(m.LSLstatus + ";" + m.CurrentPosnerWall + ";" + "Hit");
            }
            if (SteamVR_Actions.default_PosnerClicks.GetStateDown(SteamVR_Input_Sources.RightHand) && CurrentCondition == "Right") {
                sendMarker(m.LSLstatus + ";" + m.CurrentPosnerWall + ";" + "Hit");
            }
            if (SteamVR_Actions.default_PosnerClicks.GetStateDown(SteamVR_Input_Sources.LeftHand) && CurrentCondition == "Right") {
                sendMarker(m.LSLstatus + ";" + m.CurrentPosnerWall + ";" + "Miss");
            }
            if (SteamVR_Actions.default_PosnerClicks.GetStateDown(SteamVR_Input_Sources.RightHand) && CurrentCondition == "Left") {
                sendMarker(m.LSLstatus + ";" + m.CurrentPosnerWall + ";" + "Miss");
            }
        }
    }

    void OnTriggerEnter(Collider o){
        m.CurrentPosnerWall = o.transform.parent.name;
        
        if(PosnerList[Int16.Parse(o.transform.parent.name.Substring(o.transform.parent.name.Length - 1))] == "Right" && !StimulusShown && o.transform.parent.name.StartsWith("Posner")) {
            //StimulusRight.SetActive(true);
            showRightStimulus = true;
            CurrentCondition = "Right";
            sendMarker(m.LSLstatus + ";" + o.transform.parent.name + ";" + "Right");
            //StimulusShown = true;
        }

        if(PosnerList[Int16.Parse(o.transform.parent.name.Substring(o.transform.parent.name.Length - 1))] == "Left" && !StimulusShown && o.transform.parent.name.StartsWith("Posner")) {
            //StimulusLeft.SetActive(true);
            showLeftStimulus = true;
            CurrentCondition = "Left";
            sendMarker(m.LSLstatus + ";" + o.transform.parent.name + ";" + "Left");
            //StimulusShown = true;
        }   
    }

    private void OnTriggerExit(Collider o){
        StimulusShown = false;
        EventMarkerRun = false;
    }

    // Function for sending marker
    void sendMarker(string StringToSend)
    {
        m.marker.Write(StringToSend);
        print(StringToSend);
    }

    // Function to disable the stimulus
    IEnumerator DisableStimulus() {
        yield return new WaitForSeconds(m.StimulusDisplayTime);
        showRightStimulus = false;
        showLeftStimulus = false;
        StimulusLeft.SetActive(false);
        StimulusRight.SetActive(false);
    }
    IEnumerator LastWall () {
        //yield return new WaitUntil(() => SteamVR_Actions.default_PosnerClicks.GetStateDown(SteamVR_Input_Sources.LeftHand) || SteamVR_Actions.default_PosnerClicks.GetStateDown(SteamVR_Input_Sources.RightHand) == true);
        if (SteamVR_Actions.default_PosnerClicks.GetStateDown(SteamVR_Input_Sources.LeftHand) || SteamVR_Actions.default_PosnerClicks.GetStateDown(SteamVR_Input_Sources.RightHand)){
            //Debug.Log("Entered"); 
            m.posnerDone = true;
        }
        yield break;
    }
}
