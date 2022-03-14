using System.Collections.Generic;
using System.Collections;
//using System.Diagnostics;
using System;
using System.IO;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.XR;
//using UnityEngine.Rendering;
using System.Linq;
using Assets.LSL4Unity.Scripts;
using Valve.VR;
//using Tobii.XR;
using LSL;

public class TrainingManager : MonoBehaviour
{
    public bool runOnce = false;                            // For debugging.
    [Header("Training-settings")]
    public Instructions instruc;
    [Header("Timer-settings")]
    public int TimeInDark = 2;                      // Time in the dark
    public int DarkSD = 1;                          // Inter trial variation in the dark
    public float DarkTimer = 0f;                    // Current time in the dark
    public bool isDark;                             // Currently dark or not
    public bool posnerDone = false;                 // Currently done with task or not
    public List<int> TimeInDarkList;                // The list of order for all darktimes

    [Header("Game-settings")]       
    public int TotalNumberOfTrials = 150;           // At least 50 trials per trial for ERSPs
    public int ProbeQuestionnaire = 5;              // The interval for probing the questionnaire
    public int CurrentTrial = 0;                    // Current trial number
    public bool TrialDone = false;                  // Turns true whenever a trial is done
    public bool TrainingDone = false;               // Tracks whether experiment is done
    public bool trainingDoneRunOnce = false;        // Boolean to make sure we only send this marker once
    private GameObject BlackSphere;                 // The black sphere around head of the rig
    private GameObject XRRig;                       // The VR rig
    private GameObject VRCamera;                    // The VR Camera
    private GameObject Controller;                  // The VR Controller
    private GameObject Pointer;                     // The gameobject holding the laser pointer script
    private GameObject SteamInputModule;            // For controller
    private GameObject SRanipal;                    // Eye tracking gameobject
    public GameObject TwentyDegs;                   // 20 Degs space
    public GameObject FortyfiveDegs;                // 45 Degs space
    public GameObject NinetyDegs;                   // 90 Degs space

    [Header("Break settings")]
    public bool breakTime = false;                  // Boolean revealing whether they're currently on a break
    private bool breakRunOnce = false;              // run once bool for breaks
    public Canvas breakCanvas;                      // The break canvas.
    public bool answeredBreak = false;              // Track whether the participant has answered or not.

    [Header("Self-report settings")]
    //public SteamVR_Action_Boolean PosnerClicks;     // Retrieving the ActionSet of controller
    //public SteamVR_Input_Sources HandType;          // The handtype needed
    public bool hasRunSelfReport = false;
    public GameObject SelfReport;                       // Self-report questionnaire
    public bool hasAnswered;                        // Whether or not the self-report has been answered
    public List<string> TurningState;               // The list of order for all conditions
    public List<string> TurningDirection;           // The list of order for all directions
    public List<string> tempTwentyDirection;       // The list of order for twenty directions
    public List<string> tempFortyfiveDirection;    // The list of order for fortyfive directions
    public List<string> tempNinetyDirection;       // The list of order for ninety directions
    public List<int> questIndex;                    // The list of indeces for when the selfreport should show


    [Header("Posner-settings")]
    public float StimulusDisplayTime = 0.1f;        // For how long should the stimulus be on display
    public bool NewTrial;                           // True whenever a new trial sets off
    static System.Random rnd = new System.Random();
    public GameObject StimulusRight, StimulusLeft;  // The cubes
    //public GameObject XRRig;                      // The rig
    public Camera Camera;                           // The Camera
    public Vector3 leftDirection, rightDirection;   // The vectors for stimulus projection
    public float excentricity = 20f;                      // Excentricity angles
    public float sphereSize;                        // Controls the eye-to-sphere angles
    public int layerMask;                           // Ray distance
    public SteamVR_Action_Boolean PosnerClicks;     // Retrieving the ActionSet of controller
    public SteamVR_Input_Sources HandType;          // The handtype needed
    public bool HasRun = false;                     // Boolean to reset the trial number of the posner paradigm
    public bool showRightStimulus = false;          // Boolean for showing the right stimulus 
    public bool showLeftStimulus = false;           // Boolean for showing the left stimulus 
    public bool StimulusShown = false;              // Boolean for the stimulus
    public List<string> PosnerList;                 // The list of order for the posner paradigm
    public bool onTriggerHasRun = false;
    public int counter;
    public GameObject twenty;
    public GameObject fortyfive;
    public GameObject ninety;
    public string direction;
    public bool rndRunOnce = false;
    
    [Header("LSL String")]
    public LSLMarkerStream marker;                  // Creating the marker
    public string LSLstatus;                        // Current state of the experiment, string to send with LSL marker
    public string CurrentCondition;                 // Current condition
    public string CurrentDirection;                 // Current direction
    public string CurrentLight;                     // Current light conditions (Lights on or off)
    public string CurrentPosnerWall;                // Which Posner-Wall triggered the stimulus
    public string CurrentStimulus;                  // Current stimulus (Right or left)
    public string CurrentHitOrMiss;                 // Whether successful in clicking
    public bool EventMarkerRun;                     // Track whether marker has been sent or not



    // Start is called before the first frame update
    void Start()
    {
        // Making sure the RayCast only hits objects in Layer 6
        layerMask = 1 << 6; // Hit only Layer 6
        counter = 1;
        
        // Getting LSL stream
        marker = FindObjectOfType<LSLMarkerStream>();
        marker.GetComponent<LSLMarkerStream>().lslStreamType = "Markers";
        instruc = GetComponent<Instructions>();

        // Find gameobjects
        SRanipal = GameObject.Find("SRanipal Eye Framework").gameObject;
        XRRig = GameObject.Find("[CameraRig]");
        VRCamera = XRRig.transform.Find("Camera").gameObject;
        Controller = XRRig.transform.Find("Controller (right)").gameObject;
        Pointer = Controller.transform.Find("PR_Pointer").gameObject;
        SteamInputModule = GameObject.Find("SteamInputModule").gameObject;
        BlackSphere = VRCamera.transform.Find("BlackSphere").gameObject;
        TwentyDegs = GameObject.Find("TwentyDegs");
        FortyfiveDegs = GameObject.Find("FortyfiveDegs");
        NinetyDegs = GameObject.Find("NinetyDegs");
        SelfReport = GameObject.Find("SelfReport").gameObject;
        breakCanvas.transform.localPosition = new Vector3(0,2,1.1f);
        
        DontDestroyOnLoad(XRRig);
        DontDestroyOnLoad(marker);
        DontDestroyOnLoad(SteamInputModule);
        DontDestroyOnLoad(SRanipal);
        DontDestroyOnLoad(SelfReport);

        // Check if total trial is divisible by 3
        float checkInt = TotalNumberOfTrials/6f;
        if((checkInt % 1) > 0){
            throw new Exception("Total number of trials is not divisible by 6!");
        }

        // Pseudo-randomize the list of time in dark
        System.Random rnd = new System.Random();
        for (int i = 0; i < TotalNumberOfTrials; i++)
        {
            TimeInDarkList.Add(rnd.Next(TimeInDark-DarkSD, TimeInDark+(DarkSD*2)));
        }

        // Pseudo-randomize the list of conditions
        for (int i = 0; i < (TotalNumberOfTrials / 3); i++) {
            TurningState.Add("TwentyDegs");     // 20 Degs
            TurningState.Add("FortyfiveDegs");  // 45 Degs
            TurningState.Add("NinetyDegs");     // 90 Degs
            TurningState = TurningState.OrderBy(x => UnityEngine.Random.value).ToList();
        }

        // Pseudo-randomize the list of turning direction
        for (int i = 0; i < (TotalNumberOfTrials / 2); i++) {
            TurningDirection.Add("Unfilled");               // Creating the index space
            TurningDirection.Add("Unfilled");               // Creating the index space
        }
        for (int i = 0; i < (TotalNumberOfTrials / 6); i++) {
            tempTwentyDirection.Add("TurningRight");       // Right
            tempTwentyDirection.Add("TurningLeft");        // Left
            tempTwentyDirection = tempTwentyDirection.OrderBy(x => UnityEngine.Random.value).ToList();
            tempFortyfiveDirection.Add("TurningRight");       // Right
            tempFortyfiveDirection.Add("TurningLeft");        // Left
            tempFortyfiveDirection = tempFortyfiveDirection.OrderBy(x => UnityEngine.Random.value).ToList();
            tempNinetyDirection.Add("TurningRight");       // Right
            tempNinetyDirection.Add("TurningLeft");        // Left
            tempNinetyDirection = tempNinetyDirection.OrderBy(x => UnityEngine.Random.value).ToList();
        }
            List<int> templist = new List<int>();
            int[] indexTwenty = TurningState.Select((element, index) => element == "TwentyDegs" ? index : -1).Where(i => i >= 0).ToArray();
            templist.AddRange(indexTwenty);
            for (int i = 0; i < tempTwentyDirection.Count(); i++) { TurningDirection[templist[i]] = tempTwentyDirection[i]; }
            templist.Clear();

            int[] indexFortyfive = TurningState.Select((element, index) => element == "FortyfiveDegs" ? index : -1).Where(i => i >= 0).ToArray();
            templist.AddRange(indexFortyfive);
            for (int i = 0; i < tempFortyfiveDirection.Count(); i++) { TurningDirection[templist[i]] = tempFortyfiveDirection[i]; }
            templist.Clear();

            int[] indexNinety = TurningState.Select((element, index) => element == "NinetyDegs" ? index : -1).Where(i => i >= 0).ToArray();
            templist.AddRange(indexNinety);
            for (int i = 0; i < tempNinetyDirection.Count(); i++) { TurningDirection[templist[i]] = tempNinetyDirection[i]; }
            templist.Clear();        

        // Find the Trial index that the self-report should show
        // We need to identify just as many for the right/left as well as for the conditions 20/45/90 degrees
        // Additionally, we need to find every fifth
        int countTwentyRight = 0;
        int countTwentyLeft = 0;
        int countFortyfiveRight = 0;
        int countFortyfiveLeft = 0;
        int countNinetyRight = 0;
        int countNinetyLeft = 0;

        for (int i = 0; i < TotalNumberOfTrials; i++){
            if (TurningState[i] == "TwentyDegs"){
                if (TurningDirection[i] == "TurningRight"){ 
                    countTwentyRight++;
                    if (countTwentyRight == ProbeQuestionnaire) { questIndex.Add(i); countTwentyRight = 0; }
                }
                if (TurningDirection[i] == "TurningLeft"){ 
                    countTwentyLeft++; 
                    if (countTwentyLeft == ProbeQuestionnaire) { questIndex.Add(i); countTwentyLeft = 0; }
                }
            }
            if (TurningState[i] == "FortyfiveDegs"){
                if (TurningDirection[i] == "TurningRight"){ 
                    countFortyfiveRight++;
                    if (countFortyfiveRight == ProbeQuestionnaire) { questIndex.Add(i); countFortyfiveRight = 0; }
                }
                if (TurningDirection[i] == "TurningLeft"){ 
                    countFortyfiveLeft++; 
                    if (countFortyfiveLeft == ProbeQuestionnaire) { questIndex.Add(i); countFortyfiveLeft = 0; }
                }
            }
            if (TurningState[i] == "NinetyDegs"){
                if (TurningDirection[i] == "TurningRight"){ 
                    countNinetyRight++;
                    if (countNinetyRight == ProbeQuestionnaire) { questIndex.Add(i); countNinetyRight = 0; }
                }
                if (TurningDirection[i] == "TurningLeft"){ 
                    countNinetyLeft++; 
                    if (countNinetyLeft == ProbeQuestionnaire) { questIndex.Add(i); countNinetyLeft = 0; }
                }
            }
        }
        
        // Start settings
        //activateSelfReport(false);
        DarkTimer = TimeInDarkList[CurrentTrial];
        BlackSphere.SetActive(true);
        isDark = true;
        CurrentLight = "LightsOff";
        EventMarkerRun = false;
        Pointer.GetComponent<Pointer>().enabled = false;
        Pointer.GetComponent<LineRenderer>().enabled = false;
        Pointer.GetComponentInChildren<MeshRenderer>().enabled = false;
    }

    // Update is called once per frame
    void Update()
    {
        if(Input.GetKeyDown(KeyCode.A)) { marker.Write("Keyboard press A"); }
        if (!instruc.instructionDone) { BlackSphere.SetActive(false); }
        if (instruc.instructionDone){
            // Starting off with the controller pass.
            if(!runOnce){
                DarkTimer = TimeInDarkList[CurrentTrial];
                BlackSphere.SetActive(true);
                isDark = true;
                CurrentLight = "LightsOff";
                EventMarkerRun = false;
                Pointer.GetComponent<Pointer>().enabled = false;
                Pointer.GetComponent<LineRenderer>().enabled = false;
                Pointer.GetComponentInChildren<MeshRenderer>().enabled = false;
                runOnce=true; 
            }
            //controller.transform.Rotate(Vector3.up, 50 * Time.deltaTime);

            // Checking first if the experiment is done
            if(CurrentTrial == TotalNumberOfTrials && !trainingDoneRunOnce){
                TrainingDone = true;
                breakCanvas.transform.localPosition = new Vector3(0,0,1.1f);
                breakCanvas.GetComponentInChildren<TMPro.TextMeshPro>().text = "End of training!"
                + "\nYou are now ready to start the experiment."
                + "\n\nWhen you're ready, pull your left-hand trigger to continue.";
                activateSelfReport(false);
                //SelfReport.transform.localPosition = new Vector3(0,2,0.8f);
                marker.Write("TrainingDone");
                print("TrainingDone");
                trainingDoneRunOnce = true;
            }
            if (trainingDoneRunOnce && SteamVR_Actions.default_PosnerClicks.GetStateDown(SteamVR_Input_Sources.LeftHand)){ 
                //XRRig.GetComponent<TrainingPosnerParadigm>().enabled=false;
                //XRRig.GetComponent<PosnerParadigm>().enabled=true;
                //SceneManager.LoadScene("Main Scene", LoadSceneMode.Single);
                StartCoroutine(LoadMainScene());
            }

            // Setting the current situation for LSL string
            if(!TrainingDone && CurrentTrial != TotalNumberOfTrials){CurrentCondition = TurningState[CurrentTrial];}
            if(!TrainingDone && CurrentTrial != TotalNumberOfTrials){CurrentDirection = TurningDirection[CurrentTrial];}
            if(isDark){CurrentLight="LightsOff";}

            // Timer-loop
            // Countdown for the time in the dark
            if(DarkTimer >= 0 && isDark)  {
                NewTrial = false;
                DarkTimer -= Time.deltaTime;
                BlackSphere.SetActive(true);
                hasAnswered = false;
                Pointer.GetComponent<Pointer>().enabled = false;
                Pointer.GetComponent<LineRenderer>().enabled = false;
                Pointer.GetComponentInChildren<MeshRenderer>().enabled = false;
                breakCanvas.transform.localPosition = new Vector3(0,2,1.1f);
                hasRunSelfReport = false;
                activateSelfReport(false);
                //SelfReport.transform.localPosition = new Vector3(0,2,0.8f);
                sendMarker();
            }

            // Once the countdown hits zero or less
            if(DarkTimer <= 0 && isDark) {
                BlackSphere.SetActive(false);
                CurrentLight = "LightsOn";
                EventMarkerRun = false;
                sendMarker();
                isDark = false;
            }

            
            // When the trial is over, check for break time--if not, then continue experiment
            if((CurrentTrial == TotalNumberOfTrials/3 || CurrentTrial == 2*(TotalNumberOfTrials/3)) && !breakTime){ 
                StartCoroutine("waitForBreak");
                if(!breakRunOnce){
                    UnityEngine.Debug.Log("BreakStart");
                    marker.Write("BreakStart");
                    breakRunOnce = true;
                }
            }
            if(!TrainingDone && !breakTime && !isDark && hasAnswered && SteamVR_Actions.default_PosnerClicks.GetStateDown(SteamVR_Input_Sources.RightHand)) {
                CurrentTrial += 1;
                NewTrial = true;
                DarkTimer = TimeInDarkList[CurrentTrial];
                isDark = true;
            }
            if (hasAnswered && !breakTime) { StopCoroutine(waitForBreak()); }
            

            // Activating the laser pointer and self-report text once the Posner paradigm is done
            if(posnerDone){
                if (questIndex.Contains(CurrentTrial)){
                    Pointer.GetComponent<Pointer>().enabled = true;
                    Pointer.GetComponent<LineRenderer>().enabled = true;
                    Pointer.GetComponentInChildren<MeshRenderer>().enabled = true;
                    activateSelfReport(true);
                    //SelfReport.transform.localPosition = new Vector3(0,0,0.8f);
                }
                else {
                    hasAnswered = true;
                    answeredBreak = false;
                    breakCanvas.transform.localPosition = new Vector3(0,0,0.8f);
                    breakCanvas.GetComponentInChildren<TMPro.TextMeshPro>().text = "Great! Turn around and pull the right-handed trigger.";
                    Pointer.GetComponent<Pointer>().enabled = false;
                    Pointer.GetComponent<LineRenderer>().enabled = false;
                    Pointer.GetComponentInChildren<MeshRenderer>().enabled = false;
                    activateSelfReport(false);
                    //SelfReport.transform.localPosition = new Vector3(0,2,0.8f);
                }
            }
        }
        
    }

    // Function for sending marker
    void sendMarker()
    {
        if(!EventMarkerRun) {
            LSLstatus = "#" + CurrentTrial.ToString() + ";" + CurrentCondition + ";" + CurrentDirection + ";" + CurrentLight;
            marker.Write(LSLstatus);
            print(LSLstatus);
            EventMarkerRun = true;
        }
    }

    // Function for async load main scene
    IEnumerator LoadMainScene(){
        TwentyDegs.GetComponent<TrainingChangingSpaces>().enabled = false;
        FortyfiveDegs.GetComponent<TrainingChangingSpaces>().enabled = false;
        NinetyDegs.GetComponent<TrainingChangingSpaces>().enabled = false;
        AsyncOperation asyncload = SceneManager.LoadSceneAsync("Main Scene");
        while (!asyncload.isDone){
            yield return null;
        }
    }
    

    // Functions for the break
    IEnumerator waitForBreak (){
        if (!answeredBreak) {
            SelfReport.SetActive(false);
            breakCanvas.transform.localPosition = new Vector3(0,0,1.1f);
            breakCanvas.GetComponentInChildren<TMPro.TextMeshPro>().text = "'It's time for a break!'"
            + "\n\nThat's what will show up three times during the experiment." 
            + "\nThere is also the possibility to just continue."
            + "\nLike right now. It's too early for a break!"
            + "\n\nTo continue, pull the left-handed trigger.";
            if(SteamVR_Actions.default_PosnerClicks.GetStateDown(SteamVR_Input_Sources.LeftHand)){ answeredBreak = true; breakTime = true;}    
        }
        if(breakTime && answeredBreak && SteamVR_Actions.default_PosnerClicks.GetStateDown(SteamVR_Input_Sources.LeftHand)){
            UnityEngine.Debug.Log("BreakEnd");
            marker.Write("BreakEnd");
            breakCanvas.GetComponentInChildren<TMPro.TextMeshPro>().text = "Go ahead and continue as before!";
            yield return new WaitForSeconds(2.5f);
            breakCanvas.GetComponentInChildren<TMPro.TextMeshPro>().text = "";
            breakTime=false;
            answeredBreak = true;
            yield return null;
        }
    }

    // Function for self-report
    void activateSelfReport (bool activate){
        if (!activate){ SelfReport.SetActive(false); }
        if (activate && instruc.instructionDone){
            if(TurningState[CurrentTrial] == "TwentyDegs" && TurningDirection[CurrentTrial] == "TurningRight" && !hasRunSelfReport){ // remember to add m.posnerDone to the conditions
                SelfReport.SetActive(true);
                SelfReport.transform.position = new Vector3(-3.56f, 1.8f, -10.1f);
                SelfReport.transform.rotation = Quaternion.Euler(0,-160f,0);
                hasRunSelfReport = true;
            }
            if(TurningState[CurrentTrial] == "TwentyDegs" && TurningDirection[CurrentTrial] == "TurningLeft" && !hasRunSelfReport){ // remember to add m.posnerDone to the conditions
                SelfReport.SetActive(true);
                SelfReport.transform.position = new Vector3(0.01f, 1.8f, -10.13f);
                SelfReport.transform.rotation = Quaternion.Euler(0,-200,0);
                hasRunSelfReport = true;
            }

            if(TurningState[CurrentTrial] == "FortyfiveDegs" && TurningDirection[CurrentTrial] == "TurningRight" && !hasRunSelfReport){ // remember to add m.posnerDone to the conditions
                SelfReport.SetActive(true);
                SelfReport.transform.position = new Vector3(-5.44f, 1.8f, -9f);
                SelfReport.transform.rotation = Quaternion.Euler(0,-135f,0);
                hasRunSelfReport = true;
            }
            if(TurningState[CurrentTrial] == "FortyfiveDegs" && TurningDirection[CurrentTrial] == "TurningLeft" && !hasRunSelfReport){ // remember to add m.posnerDone to the conditions
                SelfReport.SetActive(true);
                SelfReport.transform.position = new Vector3(1.94f, 1.8f, -9f);
                SelfReport.transform.rotation = Quaternion.Euler(0,-225f,0);
                hasRunSelfReport = true;
            }

            if(TurningState[CurrentTrial] == "NinetyDegs" && TurningDirection[CurrentTrial] == "TurningRight" && !hasRunSelfReport){ // remember to add m.posnerDone to the conditions
                SelfReport.SetActive(true);
                SelfReport.transform.position = new Vector3(-6.93f, 1.8f, -5.25f);
                SelfReport.transform.rotation = Quaternion.Euler(0,-90f,0);
                hasRunSelfReport = true;
            }
            if(TurningState[CurrentTrial] == "NinetyDegs" && TurningDirection[CurrentTrial] == "TurningLeft" && !hasRunSelfReport){ // remember to add m.posnerDone to the conditions
                SelfReport.SetActive(true);
                SelfReport.transform.position = new Vector3(3.429f, 1.8f, -5.25f);
                SelfReport.transform.rotation = Quaternion.Euler(0,-270f,0);
                hasRunSelfReport = true;
            }
        }
    }
}
