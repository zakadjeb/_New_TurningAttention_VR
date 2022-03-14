using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Assets.LSL4Unity.Scripts;
using UnityEngine.SceneManagement;

public class TrainingButtonScript : MonoBehaviour
{
    public LSLMarkerStream marker;          // Creating the marker
    public string LSLstatus;
    public Slider Difficulty;
    public Slider Accuracy;
    public Slider Liking;
    public GameObject Parent;
    public GameObject Submitted;
    public TrainingManager m;

    // Start is called before the first frame update
    void Start()
    {
        // Getting LSL stream
        marker = FindObjectOfType<LSLMarkerStream>();

        // Setting gameobjects
        m = GameObject.Find("TrainingManager").GetComponent<TrainingManager>();
        Parent = transform.parent.gameObject;
        Submitted = transform.Find("Submitted").gameObject;

        Button SelfReportButton = GetComponent<Button>();
        SelfReportButton.onClick.AddListener(TaskOnClick);

        Difficulty = Parent.transform.Find("Difficulty_Slider").gameObject.GetComponent<Slider>();
        Accuracy = Parent.transform.Find("Accuracy_Slider").gameObject.GetComponent<Slider>();
        Liking = Parent.transform.Find("Liking_Slider").gameObject.GetComponent<Slider>();
    }

    // Update is called once per frame
    void Update()
    {
        // LSL update
        LSLstatus = "#" + m.CurrentTrial.ToString() + ";" + m.CurrentCondition + ";" + m.CurrentDirection + ";" + m.CurrentLight;

        // Resetting the questionnaire
        if(m.isDark){
            Difficulty.value = 0.5f;
            Accuracy.value = 0.5f;
            Liking.value = 0.5f;
            m.hasAnswered = false;
            Submitted.SetActive(false);
        }

        // Destory this object if the scene is 'Main Scene'
        if(SceneManager.GetActiveScene().name == "Main Scene") {Destroy(this.GetComponent<TrainingButtonScript>());}
    }

    void TaskOnClick() {
        marker.Write(LSLstatus + ";DifficultyScore;" + Difficulty.value.ToString());
        marker.Write(LSLstatus + ";AccuracyScore;" + Accuracy.value.ToString());
        marker.Write(LSLstatus + ";LikingScore;" + Accuracy.value.ToString());
        Debug.Log(LSLstatus + ";DifficultyScore;" + Difficulty.value.ToString());
        Debug.Log(LSLstatus + ";AccuracyScore;" + Accuracy.value.ToString());
        Debug.Log(LSLstatus + ";LikingScore;" + Accuracy.value.ToString());
        Debug.Log("Self-report submitted");
        m.hasAnswered = true;
        Submitted.SetActive(true);
    }
}
