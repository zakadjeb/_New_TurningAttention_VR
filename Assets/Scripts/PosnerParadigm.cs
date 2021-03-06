using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using System.Linq;
using Valve.VR;
using System;
using LSL;

public class PosnerParadigm : MonoBehaviour
{
    // Start is called before the first frame update
    public bool sceneHasLoaded = false;             // Bool for when scene has loaded
    static System.Random rnd = new System.Random();
    public Manager m;                               // Link to Manager
    public GameObject StimulusRight, StimulusLeft;  // The cubes
    //public GameObject XRRig;                        // The rig
    public Camera Camera;                           // The Camera
    private Vector3 leftDirection, rightDirection;  // The vectors for stimulus projection
    public float excentricity = 20f;                // Excentricity angles
    public float sphereSize = 10f;                   // Controls the eye-to-sphere angles
    public int layerMask;                           // Ray distance
    public SteamVR_Action_Boolean PosnerClicks;     // Retrieving the ActionSet of controller
    public SteamVR_Input_Sources HandType;          // The handtype needed
    public string CurrentCondition;                 // A string to compare with for hit/miss data
    public bool EventMarkerRun = false;             // Boolean for SendMarker 
    public bool HasRun = false;                     // Boolean to reset the trial number of the posner paradigm
    public bool showRightStimulus = false;          // Boolean for showing the right stimulus 
    public bool showLeftStimulus = false;           // Boolean for showing the left stimulus 
    public bool StimulusShown = false;              // Boolean for the stimulus
    public List<string> PosnerList;                 // The list of order for the posner paradigm
    public bool hasAnswered;
    public bool onTriggerHasRun = false;
    public int counter;
    public GameObject twenty;
    public GameObject fortyfive;
    public GameObject ninety;
    public string direction;
    public bool rndRunOnce = false;
    public string CurrentPosnerWall;                // Which Posner-Wall triggered the stimulus
    void Start()
    {     

    }

    void OnEnable(){
        SceneManager.sceneLoaded += OnSceneLoaded;
        // Making sure the RayCast only hits objects in Layer 6
        layerMask = 1 << 6; // Hit only Layer 6
        counter = 1;
        Debug.Log("PosnerParadigm Enabled!");
    }

    // Update is called once per frame
    void Update()
    {
        // Setting up the RayCast for projecting the stimulus
        leftDirection = Camera.transform.forward;
        rightDirection = Camera.transform.forward;
        leftDirection = Quaternion.AngleAxis(-excentricity, Vector3.up) * leftDirection;
        rightDirection = Quaternion.AngleAxis(excentricity, Vector3.up) * rightDirection;
        RaycastHit hitLeft;
        RaycastHit hitRight;
        Ray leftRay = new Ray(Camera.transform.position, leftDirection);
        Ray rightRay = new Ray(Camera.transform.position, rightDirection);

        //Debug.DrawRay(Camera.transform.position, leftDirection, Color.green, 2);
        //Debug.DrawRay(Camera.transform.position, rightDirection, Color.cyan, 2);
        
        // Resetting 
        if (m.NewTrial){
            CurrentCondition = "";
            m.CurrentPosnerWall = "";
            m.posnerDone = false;
            HasRun = false;
            counter = 1;
            
            // Reactivating the disabled RotatedBoxCollides / PosnerWalls
            foreach (Transform child in twenty.transform) { child.transform.GetChild(0).gameObject.SetActive(true); }
            foreach (Transform child in fortyfive.transform) { child.transform.GetChild(0).gameObject.SetActive(true); }
            foreach (Transform child in ninety.transform) { child.transform.GetChild(0).gameObject.SetActive(true); }
        }

        // Pseudo-randomize the list of turning direction
        if (!HasRun) {
            PosnerList.Add("Right");
            PosnerList.Add("Left");
            HasRun = true;
        }
/*
        // TEMP CODE
        Physics.Raycast(rightRay, out hitRight, Mathf.Infinity, layerMask);
        float newRadiusRight = Mathf.Tan(sphereSize*Mathf.Deg2Rad) * hitRight.distance;
        StimulusRight.transform.localScale = new Vector3(newRadiusRight,newRadiusRight,newRadiusRight);
        StimulusRight.transform.position = Camera.transform.position + (rightDirection * (hitRight.distance-(newRadiusRight/2)));
        StimulusRight.SetActive(true);

        Physics.Raycast(leftRay, out hitLeft, Mathf.Infinity, layerMask);
        float newRadiusLeft = Mathf.Tan(sphereSize*Mathf.Deg2Rad) * hitLeft.distance;
        StimulusLeft.transform.localScale = new Vector3(newRadiusLeft,newRadiusLeft,newRadiusLeft);
        StimulusLeft.transform.position = Camera.transform.position + (leftDirection * (hitLeft.distance-(newRadiusLeft/2)));
        StimulusLeft.SetActive(true);
*/

        // Showing the stimuli
        if (showRightStimulus){
            if(Physics.Raycast(rightRay, out hitRight, Mathf.Infinity, layerMask)){
                if(hitRight.collider.transform.parent.tag == "Walls"){
                    float newRadiusRight = Mathf.Tan(sphereSize*Mathf.Deg2Rad) * hitRight.distance;
                    StimulusRight.transform.localScale = new Vector3(newRadiusRight,newRadiusRight,newRadiusRight);
                    StimulusRight.transform.position = Camera.transform.position + (rightDirection * (hitRight.distance-(newRadiusRight/2)));
                    StimulusRight.SetActive(true);
                    StartCoroutine(DisableStimulus());
                    StimulusShown = true;
                }
            }
        }
        else { StimulusShown = false; onTriggerHasRun = false; }
        if (showLeftStimulus){
            if(Physics.Raycast(leftRay, out hitLeft, Mathf.Infinity, layerMask)){
                if(hitLeft.collider.transform.parent.tag == "Walls"){
                    float newRadiusLeft = Mathf.Tan(sphereSize*Mathf.Deg2Rad) * hitLeft.distance;
                    StimulusLeft.transform.localScale = new Vector3(newRadiusLeft,newRadiusLeft,newRadiusLeft);
                    StimulusLeft.transform.position = Camera.transform.position + (leftDirection * (hitLeft.distance-(newRadiusLeft/2)));
                    StimulusLeft.SetActive(true);
                    StartCoroutine(DisableStimulus());
                    StimulusShown = true;
                }
            }
        }
        else { StimulusShown = false; onTriggerHasRun = false; }

        // Last wall
        if (CurrentPosnerWall == "PosnerWall10") {
            StartCoroutine(LastWall());
        }

        // Handling the triggers and LSL events
        if (CurrentPosnerWall != "PosnerWall10" && !m.posnerDone) {
            if (SteamVR_Actions.default_PosnerClicks.GetStateDown(SteamVR_Input_Sources.LeftHand)
            && CurrentCondition == "Left") {
                sendMarker(m.LSLstatus + ";" + CurrentPosnerWall + ";" + "Hit");
                hasAnswered = true;
            }
            if (SteamVR_Actions.default_PosnerClicks.GetStateDown(SteamVR_Input_Sources.RightHand)
            && CurrentCondition == "Right") {
                sendMarker(m.LSLstatus + ";" + CurrentPosnerWall + ";" + "Hit");
                hasAnswered = true;
            }
            if (SteamVR_Actions.default_PosnerClicks.GetStateDown(SteamVR_Input_Sources.LeftHand)
            && CurrentCondition == "Right") {
                sendMarker(m.LSLstatus + ";" + CurrentPosnerWall + ";" + "Miss");
                hasAnswered = true;
            }
            if (SteamVR_Actions.default_PosnerClicks.GetStateDown(SteamVR_Input_Sources.RightHand)
            && CurrentCondition == "Left") {
                sendMarker(m.LSLstatus + ";" + CurrentPosnerWall + ";" + "Miss");
                hasAnswered = true;
            }
        }
    }

    void OnTriggerEnter(Collider o){
        if(o.tag == "PosnerWall" + counter.ToString()){
            hasAnswered = false;
            CurrentPosnerWall = o.transform.parent.name;
            if(!m.isDark && !onTriggerHasRun){
                if(!rndRunOnce) { direction = PosnerList[rnd.Next(PosnerList.Count)]; rndRunOnce = true; }
                if(direction == "Right" && !StimulusShown) {
                    showRightStimulus = true;
                    CurrentCondition = "Right";
                    sendMarker(m.LSLstatus + ";" + o.transform.parent.name + ";" + "Right");
                    onTriggerHasRun = true;
                    o.transform.parent.transform.gameObject.SetActive(false);
                    counter++;
                }

                if(direction == "Left" && !StimulusShown && o.tag == "PosnerWall" + counter.ToString()) {
                    showLeftStimulus = true;
                    CurrentCondition = "Left";
                    sendMarker(m.LSLstatus + ";" + o.transform.parent.name + ";" + "Left");
                    onTriggerHasRun = true;
                    o.transform.parent.transform.gameObject.SetActive(false);
                    counter++;
                }
            }
        }
    }

    private void OnTriggerExit(Collider o){
        StimulusShown = false;
    }

    // Function for sending marker
    void sendMarker(string StringToSend)
    {
        m.marker.Write(StringToSend);
        print(StringToSend);
    }

    // Function to assign Manager
     void OnSceneLoaded(Scene scene, LoadSceneMode mode)
    {
        m = GameObject.Find("Manager").GetComponent<Manager>();
        twenty = GameObject.Find("TwentyDegs").gameObject;
        fortyfive = GameObject.Find("FortyfiveDegs").gameObject;
        ninety = GameObject.Find("NinetyDegs").gameObject;
        sceneHasLoaded = true;
    }

    // Function to disable the stimulus
    IEnumerator DisableStimulus() {
        yield return new WaitForSeconds(m.StimulusDisplayTime);
        rndRunOnce = false;
        showRightStimulus = false;
        showLeftStimulus = false;
        StimulusLeft.SetActive(false);
        StimulusRight.SetActive(false);
    }
    IEnumerator LastWall () {
        //yield return new WaitUntil(() => SteamVR_Actions.default_PosnerClicks.GetStateDown(SteamVR_Input_Sources.LeftHand) || SteamVR_Actions.default_PosnerClicks.GetStateDown(SteamVR_Input_Sources.RightHand) == true);
        if (SteamVR_Actions.default_PosnerClicks.GetStateDown(SteamVR_Input_Sources.LeftHand) && CurrentCondition == "Left") {
            sendMarker(m.LSLstatus + ";" + CurrentPosnerWall + ";" + "Hit");
            m.posnerDone = true;
        }
        if (SteamVR_Actions.default_PosnerClicks.GetStateDown(SteamVR_Input_Sources.RightHand) && CurrentCondition == "Right") {
            sendMarker(m.LSLstatus + ";" + CurrentPosnerWall + ";" + "Hit");
            m.posnerDone = true;
        }
        if (SteamVR_Actions.default_PosnerClicks.GetStateDown(SteamVR_Input_Sources.LeftHand) && CurrentCondition == "Right") {
            sendMarker(m.LSLstatus + ";" + CurrentPosnerWall + ";" + "Miss");
            m.posnerDone = true;
        }
        if (SteamVR_Actions.default_PosnerClicks.GetStateDown(SteamVR_Input_Sources.RightHand) && CurrentCondition == "Left") {
            sendMarker(m.LSLstatus + ";" + CurrentPosnerWall + ";" + "Miss");
            m.posnerDone = true;
        }
        yield break;
    }
}
