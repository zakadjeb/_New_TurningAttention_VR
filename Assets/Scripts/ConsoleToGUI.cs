 using UnityEngine;
 using ViveSR.anipal.Eye;
 using UnityEditor;
 using System.Linq;
 using System.Collections.Generic;
 using Assets.LSL4Unity.Scripts;
 using System.Collections;
 
 public class ConsoleToGUI : MonoBehaviour
 {
   string myLog = "*begin log";
   System.DateTime localDate = System.DateTime.Now;
   public string startTime;
   string filename = "";
   bool doShow = true;
   int kChars = 1000;
   public bool refreshStats = true;
   //TTest t;
   Manager m;
   public LSLMarkerStream marker;                  // Creating the marker
   string waitingData;
   public float anchorX = 570;
   public float anchorY = 190f;
    /*
    private Color twentyColor = new Color((0f/255f),(48f/255f),(73f/255f),0.5f);
   private Color fortyfiveColor = new Color((214f/255f),(40f/255f),(40f/255f),0.5f);
   private Color ninetyColor = new Color((247f/255f),(127f/255f),(0f/255f),0.5f); 
   private Color bgColor = new Color(0,0,0,0.5f);
   public double maxScore, minScore, scoreTwenty, scoreFortyfive, scoreNinety;
   public float converter;
   private double oldLengthTwenty = -1, oldLengthFortyfive = -1, oldLengthNinety = -1;
   private int currentValTwenty, currentValFortyfive, currentValNinety, scoreIndexTwenty, scoreIndexFortyfive, scoreIndexNinety;
   public int NumberOfLists = 20;
   private List<int> intervalListTwenty, intervalListFortyfive, intervalListNinety;
   public List<int> maxList; 
   */
      void Start() {
        //t = GameObject.Find("Manager").GetComponent<TTest>();
        m = GameObject.Find("Manager").GetComponent<Manager>();
        marker = FindObjectOfType<LSLMarkerStream>();
        startTime = localDate.ToString();
        myLog = "*Beginning Experiment" + "\n" + startTime + "\n" + "You can toggle this screen by hitting 'spacebar'.";
     }
      void OnEnable() { Application.logMessageReceived += Log; }
      void OnDisable() { Application.logMessageReceived -= Log; }
      void Update() { if (Input.GetKeyDown(KeyCode.Space)) { doShow = !doShow; } }
      public void Log(string logString, string stackTrace, LogType type)
      {
         // for onscreen...
            myLog = myLog + "\n" + logString;
            if (myLog.Length > kChars) { myLog = myLog.Substring(myLog.Length - kChars); }
   
            // for the file ...
            if (filename == "")
            {
               string d = System.Environment.GetFolderPath(
                  System.Environment.SpecialFolder.Desktop) + "/Zak/EXPERIMENT_LOGS";
               System.IO.Directory.CreateDirectory(d);
               string r = Random.Range(1000, 9999).ToString();
               filename = d + "/log-" + r + ".txt";
            }
            try { System.IO.File.AppendAllText(filename, logString + "\n"); }
            catch { }
      }
 
      void OnGUI()
      {
            if (!doShow) { return; }
            GUI.matrix = Matrix4x4.TRS(Vector3.zero, Quaternion.identity,
               new Vector3(Screen.width / 1200.0f, Screen.height / 800.0f, 1.0f));
            GUI.TextArea(new Rect(10, 10, 540, anchorY + 160 + 21), myLog);

            /*
            if (t.TwentyRT.Count==0){ waitingData = "Running realtime F-test when enough trials are collected.\n\n"; } else { waitingData=""; }
            GUI.TextArea(new Rect(anchorX, 10, 220, 170), waitingData + t.FTestStringFirst + t.FTestStringSecond + t.FTestStringThird);
            */

            if (GUI.Button(new Rect(anchorX, anchorY, 220, 30), "Quit Experiment")){
               Debug.Log("Closing Experiment.");
               // Saving the RT lists
               Application.Quit();
            }
            
            if (GUI.Button(new Rect(anchorX, anchorY + 40, 220, 30), "Eye Calibration")){
               Debug.Log("Starting Eye Calibration.");
               SRanipal_Eye.LaunchEyeCalibration();
            }

            /*
            if (GUI.Button(new Rect(anchorX, anchorY + 80, 220, 30), "Debugging; Add data")){
               Debug.Log("Data added.");
               t.TwentyRT.Add(UnityEngine.Random.Range(1000,1300));
               t.FortyfiveRT.Add(UnityEngine.Random.Range(1100,1400));
               t.NinetyRT.Add(UnityEngine.Random.Range(1200,1700));
               t.TwentyRT.Add(UnityEngine.Random.Range(1000,1300));
               t.FortyfiveRT.Add(UnityEngine.Random.Range(1100,1400));
               t.NinetyRT.Add(UnityEngine.Random.Range(1200,1700));
            }
            */

            if (GUI.Button(new Rect(anchorX, anchorY + 120, 220, 30), "Reset this trial")){
               m.ExperimentDone=false;
               m.breakTime=false;
               m.isDark=false;
               m.hasAnswered=true;
               //m.CurrentTrial += 1;
               m.NewTrial = true;
               m.DarkTimer = m.TimeInDarkList[m.CurrentTrial];
               m.isDark = true;
               marker.Write("Trial reset");
               Debug.Log("**Resetting trial**\nPlease be sure the participant is in the start space in VR.");
            }

            /*
            if (GUI.Button(new Rect(anchorX, anchorY + 160, 220, 30), "Refresh stats/Remove outliers")){
               //StartCoroutine(refreshGraph());
               t.TwentyRT = StatisticalOutLierAnalysis(t.TwentyRT);
               t.FortyfiveRT = StatisticalOutLierAnalysis(t.FortyfiveRT);
               t.NinetyRT = StatisticalOutLierAnalysis(t.NinetyRT);

            }
            */
            
   /*
   **THIS IS TOO RAM EXPENSIVE--DO NOT UNCOMMENT
            // Visualizing the response time
            if (t.TwentyRT.Sum()>=2 && t.FortyfiveRT.Sum()>=2 && t.NinetyRT.Sum()>=2){
               DrawQuad(new Rect(anchorX-10, anchorY + 20, 220, 15), twentyColor);
               DrawQuad(new Rect(anchorX-10, anchorY + 35, 220, 15), fortyfiveColor);
               DrawQuad(new Rect(anchorX-10, anchorY + 50, 220, 17), ninetyColor);
               GUI.Label(new Rect(anchorX, anchorY + 20, 210, 70), "20 degs x\u0305: " + t.TwentyRT.Average().ToString("0.00") + "\tn = " + t.TwentyRT.Count +
               "\n45 degs x\u0305: " + t.FortyfiveRT.Average().ToString("0.00") + "\tn = " + t.FortyfiveRT.Count + "\n90 degs x\u0305: " + t.NinetyRT.Average().ToString("0.00")
               + "\tn = " + t.NinetyRT.Count);
               
               maxScore = t.TwentyRT.Concat(t.FortyfiveRT).Concat(t.NinetyRT).ToList().Max();
               minScore = t.TwentyRT.Concat(t.FortyfiveRT).Concat(t.NinetyRT).ToList().Min();
               
               // Case of twenty degrees
               if (t.TwentyRT.Sum() > oldLengthTwenty){ 
                  intervalListTwenty = new List<int>();
                  for (int i = 0; i < NumberOfLists; i++){ intervalListTwenty.Add(0);}

                  for (int i = 0; i < t.TwentyRT.Count; i++) {
                     scoreTwenty = (t.TwentyRT[i] - minScore) / (maxScore - minScore) * NumberOfLists;
                     scoreIndexTwenty = System.Convert.ToInt32(System.Math.Round(scoreTwenty));
                     if (scoreIndexTwenty == 0){ scoreIndexTwenty = 1; }
                     currentValTwenty = intervalListTwenty[scoreIndexTwenty-1];
                     intervalListTwenty.Insert(scoreIndexTwenty-1, currentValTwenty+1);
                     intervalListTwenty.RemoveAt(scoreIndexTwenty);
                     oldLengthTwenty = t.TwentyRT.Sum();
                  }
               }

               // Case of fortyfive degrees
               if (t.FortyfiveRT.Sum() > oldLengthFortyfive){ 
                  intervalListFortyfive = new List<int>();
                  for (int i = 0; i < NumberOfLists; i++){ intervalListFortyfive.Add(0);}

                  for (int i = 0; i < t.FortyfiveRT.Count; i++) {
                     scoreFortyfive = (t.FortyfiveRT[i] - minScore) / (maxScore - minScore) * NumberOfLists;
                     scoreIndexFortyfive = System.Convert.ToInt32(System.Math.Round(scoreFortyfive));
                     if (scoreIndexFortyfive == 0){ scoreIndexFortyfive = 1; }
                     currentValFortyfive = intervalListFortyfive[scoreIndexFortyfive-1];
                     intervalListFortyfive.Insert(scoreIndexFortyfive-1, currentValFortyfive+1);
                     intervalListFortyfive.RemoveAt(scoreIndexFortyfive);
                     oldLengthFortyfive = t.FortyfiveRT.Sum();
                  }
               }

               // Case of ninety degrees
               if (t.NinetyRT.Sum() > oldLengthNinety){ 
                  intervalListNinety = new List<int>();
                  for (int i = 0; i < NumberOfLists; i++){ intervalListNinety.Add(0);}

                  for (int i = 0; i < t.NinetyRT.Count; i++) {
                     scoreNinety = (t.NinetyRT[i] - minScore) / (maxScore - minScore) * NumberOfLists;
                     scoreIndexNinety = System.Convert.ToInt32(System.Math.Round(scoreNinety));
                     if (scoreIndexNinety == 0){ scoreIndexNinety = 1; }
                     currentValNinety = intervalListNinety[scoreIndexNinety-1];
                     intervalListNinety.Insert(scoreIndexNinety-1, currentValNinety+1);
                     intervalListNinety.RemoveAt(scoreIndexNinety);
                     oldLengthNinety = t.NinetyRT.Sum();
                  }
               }
            }
            
            if(refreshStats){
               // Drawing the bar chart
               if (intervalListTwenty != null && intervalListFortyfive != null && intervalListNinety != null){
                  DrawQuad(new Rect(anchorX - 10, anchorY + 10, 220, -120), bgColor);
                  maxList = intervalListTwenty.Concat(intervalListFortyfive).Concat(intervalListNinety).ToList();
                  converter = 100/System.Convert.ToSingle(maxList.Max());
                  for (int i = 0; i < intervalListTwenty.Count; i++){
                     float newVal = intervalListTwenty[i]*converter;
                     DrawQuad(new Rect(anchorX + ((210/NumberOfLists) * i), anchorY, 5, -newVal), twentyColor);
                  }
                  for (int i = 0; i < intervalListFortyfive.Count; i++){
                     float newVal = intervalListFortyfive[i]*converter;
                     DrawQuad( new Rect(anchorX + ((210/NumberOfLists) * i), anchorY, 5, -newVal), fortyfiveColor);
                  }
                  for (int i = 0; i < intervalListNinety.Count; i++){
                     float newVal = intervalListNinety[i]*converter;
                     DrawQuad( new Rect(anchorX + ((210/NumberOfLists) * i), anchorY, 5, -newVal), ninetyColor);
                  }
               }
            }
            */
      }
     /*
      IEnumerator refreshGraph(){
         oldLengthTwenty = 0; oldLengthFortyfive = 0; oldLengthNinety = 0;
         refreshStats = false;
         yield return new WaitForSeconds(0.5f);
         refreshStats = true;
      }
      */

      void DrawQuad(Rect position, Color color) {
         Texture2D texture = new Texture2D(1,1);
         texture.SetPixel(0,0,color);
         texture.Apply();
         GUI.DrawTexture(position, texture);
      }
      private static List<double> StatisticalOutLierAnalysis(List<double> allNumbers)
      {
         List<double> normalNumbers = new List<double>();
         List<double> outLierNumbers = new List<double>(); 
         double avg = allNumbers.Average();
         double standardDeviation = System.Math.Sqrt(allNumbers.Average(v => System.Math.Pow(v - avg, 2)));
         foreach (double number in allNumbers)
         {
            if ((System.Math.Abs(number - avg)) > (2 * standardDeviation))
                  outLierNumbers.Add(number);
            else
                  normalNumbers.Add(number);
         }
         //Debug.Log(normalNumbers.Count);
         return normalNumbers;
      }
 }