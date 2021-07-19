using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Assets.LSL4Unity.Scripts;

public class ButtonScript : MonoBehaviour
{
    public LSLMarkerStream marker;          // Creating the marker
    public string LSLstatus;
    public Slider Difficulty;
    public Slider Accuracy;
    public GameObject Parent;
    public GameObject Submitted;
    public Manager m;

    // Start is called before the first frame update
    void Start()
    {
        // Getting LSL stream
        marker = FindObjectOfType<LSLMarkerStream>();

        // Setting gameobjects
        m = GameObject.Find("Manager").GetComponent<Manager>();
        Parent = transform.parent.gameObject;
        Submitted = transform.Find("Submitted").gameObject;

        Button SelfReportButton = GetComponent<Button>();
        SelfReportButton.onClick.AddListener(TaskOnClick);

        Difficulty = Parent.transform.Find("Difficulty_Slider").gameObject.GetComponent<Slider>();
        Accuracy = Parent.transform.Find("Accuracy_Slider").gameObject.GetComponent<Slider>();
    }

    // Update is called once per frame
    void Update()
    {
        // LSL update
        LSLstatus = "#" + m.CurrentTrial.ToString() + ";" + m.CurrentCondition + ";" + m.CurrentDirection + ";" + m.CurrentLight;

        // Resetting the questionnaire
        if(m.NewTrial){
            Difficulty.value = 0.5f;
            Accuracy.value = 0.5f;
            m.hasAnswered = false;
            Submitted.SetActive(false);
        }
    }

    void TaskOnClick() {
        marker.Write(LSLstatus + ";DifficultyScore;" + Difficulty.value.ToString());
        marker.Write(LSLstatus + ";AccuracyScore;" + Accuracy.value.ToString());
        Debug.Log(LSLstatus + ";DifficultyScore;" + Difficulty.value.ToString());
        Debug.Log(LSLstatus + ";AccuracyScore;" + Accuracy.value.ToString());
        Debug.Log("Self-report submitted");
        m.hasAnswered = true;
        Submitted.SetActive(true);
    }
}
