using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using LSL;
using Assets.LSL4Unity.Scripts;
using Valve.VR;

public class Instructions : MonoBehaviour
{
    public bool instructionDone = false;
    public bool instruc1 = false;
    public bool instruc2 = false;
    public bool instruc3 = false;
    public bool instruc4 = false;
    public bool instruc5 = false;
    public bool instruc6 = false;
    public GameObject controller;
    public GameObject trigger;
    public GameObject pad;
    public Material selected;
    public Material originalMaterial;
    public GameObject trainingText;
    private GameObject Pointer;
    private GameObject StimulusLeft, StimulusRight;
    public Camera Camera;                           // The Camera
    private Vector3 leftDirection, rightDirection;  // The vectors for stimulus projection
    public float excentricity = 15f;                // Excentricity angles
    public float sphereSize = 7f;                   // Controls the eye-to-sphere angles
    public int layerMask;                           // Ray distance
    public LSLMarkerStream marker;

    // Start is called before the first frame update
    void Start()
    {
        marker = FindObjectOfType<LSLMarkerStream>();
        marker.GetComponent<LSLMarkerStream>().lslStreamType = "Markers";
        marker.Write("TrainingStarted");
        Debug.Log("TrainingStarted");

        layerMask = 1 << 6; // Hit only Layer 6

        originalMaterial = controller.transform.GetChild(0).GetComponent<Renderer>().material;
        Pointer = GameObject.Find("[CameraRig]").transform.Find("Controller (right)").transform.Find("PR_Pointer").gameObject;
        StimulusLeft = GameObject.Find("[CameraRig]").transform.Find("Stimulus_Left").gameObject;
        StimulusRight = GameObject.Find("[CameraRig]").transform.Find("Stimulus_Right").gameObject;
        controller.SetActive(true);
        trigger.SetActive(true);
        pad.SetActive(true);
        instruc1 = true;
    }

    IEnumerator colorChange(GameObject g, Material firstMat, Material secondMat){
        float duration = .5f;
        float lerp = Mathf.PingPong(Time.time, duration) / duration;
        g.GetComponentInChildren<Renderer>().material.Lerp(firstMat, secondMat, lerp);
        yield return null;
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

        // Make the controller rotate.
        controller.transform.Rotate(Vector3.up, 50 * Time.deltaTime);

        // Start of instruction sequence.
        if (instruc1){
            trainingText.GetComponentInChildren<TMPro.TextMeshPro>().text = "Welcome to this experiment!"
            + "\nHere are some instructions about how to use the controllers."
            + "\nThis is what your controllers look like."
            + "\nThe highlighted button is called 'the trigger'."
            + "\nYou will mainly use this button in the experiment."
            + "\n\nTry pulling the trigger on the right-handed controller!";
            //trigger.transform.GetChild(0).GetComponent<Renderer>().material = selected;
            StartCoroutine(colorChange(trigger,selected, originalMaterial));
            if (SteamVR_Actions.default_PosnerClicks.GetStateDown(SteamVR_Input_Sources.RightHand)) {
                instruc1 = false;
                instruc2 = true;
                Debug.Log("Instruction 1/6.");
            }
        }

        // Second instruction
        if (instruc2) {
            trainingText.GetComponentInChildren<TMPro.TextMeshPro>().text = "Great job!"
            + "\nYou also have a controller in your left hand."
            + "\n\nTry pulling the left-handed trigger!";
            if (SteamVR_Actions.default_PosnerClicks.GetStateDown(SteamVR_Input_Sources.LeftHand)) {
                instruc2 = false;
                instruc3 = true;
                Debug.Log("Instruction 2/6.");
            }
        }

        // Third instruction
        if (instruc3) {
            trigger.transform.GetChild(0).GetComponent<Renderer>().material = originalMaterial;
            StartCoroutine(colorChange(pad,selected, originalMaterial));
            //pad.transform.GetChild(0).GetComponent<Renderer>().material = selected;
            Pointer.GetComponent<Pointer>().enabled = true;
            Pointer.GetComponent<LineRenderer>().enabled = true;
            Pointer.GetComponentInChildren<MeshRenderer>().enabled = true;
            trainingText.GetComponentInChildren<TMPro.TextMeshPro>().text = "Super!"
            + "\nDuring the experiment, a questionnaire will sometimes show up."
            + "\nWhen it does, the laser shooting now out of the right-handed controller"
            + "\nwill be activated too. Use it to aim at the sliders and use 'the pad' to drag and click."
            + "\n\nTry clicking the pad!";
            if (SteamVR_Actions.default_SelfReport.GetStateDown(SteamVR_Input_Sources.LeftHand) || SteamVR_Actions.default_SelfReport.GetStateDown(SteamVR_Input_Sources.RightHand)) {
                Pointer.GetComponent<Pointer>().enabled = false;
                Pointer.GetComponent<LineRenderer>().enabled = false;
                Pointer.GetComponentInChildren<MeshRenderer>().enabled = false;
                instruc3 = false;
                instruc4 = true;
                Debug.Log("Instruction 3/6.");
            }
        }

        // Fourth instruction
        if (instruc4) {
            if(Physics.Raycast(rightRay, out hitRight, Mathf.Infinity, layerMask)){
                if(hitRight.collider.transform.parent.tag == "Walls"){
                    float newRadiusRight = Mathf.Tan(sphereSize*Mathf.Deg2Rad) * hitRight.distance;
                    StimulusRight.transform.localScale = new Vector3(newRadiusRight,newRadiusRight,newRadiusRight);
                    StimulusRight.transform.position = Camera.transform.position + (rightDirection * (hitRight.distance-(newRadiusRight/2)));
                    StimulusRight.SetActive(true);
                }
            }
            //trigger.transform.GetChild(0).GetComponent<Renderer>().material = selected;
            StartCoroutine(colorChange(trigger,selected, originalMaterial));
            pad.transform.GetChild(0).GetComponent<Renderer>().material = originalMaterial;
            trainingText.GetComponentInChildren<TMPro.TextMeshPro>().text = "Well done!"
            + "\nThese are the two buttons you will need."
            + "\nThe task is simply to walk through the hallway, but"
            + "\nas you are walking, a stimulus will show either to your right or left."
            + "\n\nYou should be able to see an orange sphere to your right now."
            + "\nGo ahead! Pull the right-handed trigger!";
            if (SteamVR_Actions.default_PosnerClicks.GetStateDown(SteamVR_Input_Sources.RightHand)) {
                instruc4 = false;
                instruc5 = true;
                StimulusRight.SetActive(false);
                Debug.Log("Instruction 4/6.");
            }
        }

        // Fifth instruction
        if (instruc5) {
            if(Physics.Raycast(leftRay, out hitLeft, Mathf.Infinity, layerMask)){
                if(hitLeft.collider.transform.parent.tag == "Walls"){
                    float newRadiusLeft = Mathf.Tan(sphereSize*Mathf.Deg2Rad) * hitLeft.distance;
                    StimulusLeft.transform.localScale = new Vector3(newRadiusLeft,newRadiusLeft,newRadiusLeft);
                    StimulusLeft.transform.position = Camera.transform.position + (leftDirection * (hitLeft.distance-(newRadiusLeft/2)));
                    StimulusLeft.SetActive(true);
                }
            }
            trainingText.GetComponentInChildren<TMPro.TextMeshPro>().text = "Easy!"
            + "\nCan you guess what to do now?";
            if (SteamVR_Actions.default_PosnerClicks.GetStateDown(SteamVR_Input_Sources.LeftHand)) {
                StimulusLeft.SetActive(false);
                instruc5 = false;
                instruc6 = true;
                Debug.Log("Instruction 5/6.");
            }
        }

        // Sixth instruction
        if (instruc6) {
            trainingText.GetComponentInChildren<TMPro.TextMeshPro>().text = "Alright, you seem to understand the controls."
            + "\nDuring the experiment, the stimulus will only"
            + "\nappear very briefly. While you walk into the second space,"
            + "\nyour task is to pull the trigger according to the"
            + "\ndirection as fast as possible."
            + "\n\nIf you're ready, let's try a couple of trials."
            + "\nPull the right-handed trigger to start.";
            if (SteamVR_Actions.default_PosnerClicks.GetStateDown(SteamVR_Input_Sources.RightHand)) {
                controller.SetActive(false);
                trainingText.SetActive(false);
                instructionDone = true;
                Debug.Log("Instruction 6/6. Instructions done.");
                instruc6 = false;
            }
        }
    }
}
