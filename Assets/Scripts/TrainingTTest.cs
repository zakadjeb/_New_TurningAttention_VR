using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Diagnostics;
using Debug=UnityEngine.Debug;
using Accord.Statistics.Testing;
using System.Linq;
using System;

public class TrainingTTest : MonoBehaviour
{
    TrainingPosnerParadigm p;
    TrainingManager m;
    Instructions instruc;
    [Header("Data collected")]
    public string TTestStringFirst, TTestStringSecond, TTestStringThird, FTestStringFirst, FTestStringSecond, FTestStringThird;
    public Stopwatch timer;
    private bool runOnce = true;
    //public double[] TwentyRT, FortyfiveRT, NinetyRT;
    public List<double> TwentyRT, FortyfiveRT, NinetyRT;
    // Start is called before the first frame update
    void Start()
    {
        p = GameObject.Find("[CameraRig]").GetComponent<TrainingPosnerParadigm>();
        m = GameObject.Find("Manager").GetComponent<TrainingManager>();
        instruc = GameObject.Find("Manager").GetComponent<Instructions>();
        timer = new Stopwatch();
    }

    // Update is called once per frame
    void Update()
    {

        // Collecting the response time. Both missed and hit!
        if (instruc.instructionDone && runOnce && (p.showRightStimulus || p.showLeftStimulus)) { timer.Reset(); timer.Start(); runOnce = false;}
        if (instruc.instructionDone && p.hasAnswered && !runOnce) {
            timer.Stop();
            if (m.TurningState[m.CurrentTrial] == "TwentyDegs"){ 
                if (TwentyRT.Count() > 2) {
                    if (timer.ElapsedMilliseconds < 2 * TwentyRT.Average()) {
                        TwentyRT.Add(timer.ElapsedMilliseconds);
                    }
                }
                else { TwentyRT.Add(timer.ElapsedMilliseconds); }
            }
            if (m.TurningState[m.CurrentTrial] == "FortyfiveDegs"){
                if (FortyfiveRT.Count() > 2) {
                    if (timer.ElapsedMilliseconds < 2 * FortyfiveRT.Average()) {
                        FortyfiveRT.Add(timer.ElapsedMilliseconds);
                    }
                }
                else { FortyfiveRT.Add(timer.ElapsedMilliseconds); }
            }
            if (m.TurningState[m.CurrentTrial] == "NinetyDegs"){
                if (NinetyRT.Count() > 2) {
                    if (timer.ElapsedMilliseconds < 2 * NinetyRT.Average()) {
                        NinetyRT.Add(timer.ElapsedMilliseconds);
                    }
                }
                else { NinetyRT.Add(timer.ElapsedMilliseconds); }
            }
            runOnce = true;
        }

        // Cleaning up the list
        for (int i = 0; i < TwentyRT.Count(); i++){
            if (TwentyRT[i] == 0) { TwentyRT.RemoveAt(i); }
        }
        for (int i = 0; i < FortyfiveRT.Count(); i++){
            if (FortyfiveRT[i] == 0) { FortyfiveRT.RemoveAt(i); }
        }
        for (int i = 0; i < NinetyRT.Count(); i++){
            if (NinetyRT[i] == 0) { NinetyRT.RemoveAt(i); }
        }

/*
        // Doing the T-Test
        if (TwentyRT.ToArray().Sum()>1 && NinetyRT.ToArray().Sum()>1){
            PairedTTest test = new PairedTTest(TwentyRT.ToArray(), NinetyRT.ToArray(), TwoSampleHypothesis.FirstValueIsSmallerThanSecond);
            TTestStringFirst = "T-test: 20 degs v 90 degs.\n" + "Significance: " + test.Significant.ToString() + "\nP-value: " + test.PValue.ToString("0.0000") + "\n\n";
        }
        if (TwentyRT.ToArray().Sum()>1 && FortyfiveRT.ToArray().Sum()>1){
            PairedTTest test = new PairedTTest(TwentyRT.ToArray(), FortyfiveRT.ToArray(), TwoSampleHypothesis.FirstValueIsSmallerThanSecond);
            TTestStringSecond = "T-test: 20 degs v 45 degs.\n" + "Significance: " + test.Significant.ToString() + "\nP-value: " + test.PValue.ToString("0.0000") + "\n\n";
        }
        if (FortyfiveRT.ToArray().Sum()>1 && NinetyRT.ToArray().Sum()>1){
            PairedTTest test = new PairedTTest(FortyfiveRT.ToArray(), NinetyRT.ToArray(), TwoSampleHypothesis.FirstValueIsSmallerThanSecond);
            TTestStringThird = "T-test: 45 degs v 90 degs.\n" + "Significance: " + test.Significant.ToString() + "\nP-value: " + test.PValue.ToString("0.0000") + "\n\n";
        }
        */

        // Doing the F-Test
        if (TwentyRT.Count>2 && NinetyRT.Count>2){
            double avrgFirst = TwentyRT.Average();
            double sumSquareFirst = TwentyRT.Select(val => (val - avrgFirst) * (val - avrgFirst)).Sum();
            double stdDevFirst = Mathf.Sqrt((float)sumSquareFirst / TwentyRT.Count());

            double avrgSecond = NinetyRT.Average();
            double sumSquareSecond = NinetyRT.Select(val => (val - avrgSecond) * (val - avrgSecond)).Sum();
            double stdDevSecond = Mathf.Sqrt((float)sumSquareSecond / NinetyRT.Count());
            
            var FTest = new FTest(stdDevFirst, stdDevSecond, TwentyRT.Count()-1,NinetyRT.Count()-1);
            FTestStringFirst = "F-test: 20 degs v 90 degs.\n" + "Significance: " + FTest.Significant.ToString() + "\nP-value: " + FTest.PValue.ToString("0.0000") + "\n\n";
        }
        if (TwentyRT.Count>2 && FortyfiveRT.Count>2){
            double avrgFirst = TwentyRT.Average();
            double sumSquareFirst = TwentyRT.Select(val => (val - avrgFirst) * (val - avrgFirst)).Sum();
            double stdDevFirst = Mathf.Sqrt((float)sumSquareFirst / TwentyRT.Count());

            double avrgSecond = FortyfiveRT.Average();
            double sumSquareSecond = FortyfiveRT.Select(val => (val - avrgSecond) * (val - avrgSecond)).Sum();
            double stdDevSecond = Mathf.Sqrt((float)sumSquareSecond / FortyfiveRT.Count());
            
            var FTest = new FTest(stdDevFirst, stdDevSecond, TwentyRT.Count()-1,FortyfiveRT.Count()-1);
            FTestStringSecond = "F-test: 20 degs v 45 degs.\n" + "Significance: " + FTest.Significant.ToString() + "\nP-value: " + FTest.PValue.ToString("0.0000") + "\n\n";
        }
        if (FortyfiveRT.Count>2 && NinetyRT.Count>2){
            double avrgFirst = FortyfiveRT.Average();
            double sumSquareFirst = FortyfiveRT.Select(val => (val - avrgFirst) * (val - avrgFirst)).Sum();
            double stdDevFirst = Mathf.Sqrt((float)sumSquareFirst / FortyfiveRT.Count());

            double avrgSecond = NinetyRT.Average();
            double sumSquareSecond = NinetyRT.Select(val => (val - avrgSecond) * (val - avrgSecond)).Sum();
            double stdDevSecond = Mathf.Sqrt((float)sumSquareSecond / NinetyRT.Count());
            
            var FTest = new FTest(stdDevFirst, stdDevSecond, FortyfiveRT.Count()-1,NinetyRT.Count()-1);
            FTestStringThird = "F-test: 45 degs v 90 degs.\n" + "Significance: " + FTest.Significant.ToString() + "\nP-value: " + FTest.PValue.ToString("0.0000") + "\n\n";
        }
    }
}
