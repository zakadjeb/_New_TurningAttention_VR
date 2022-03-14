using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ChangingSpaces : MonoBehaviour
{
    // Start is called before the first frame update

    public Manager m;
    public GameObject twenty;
    public GameObject fortyfive;
    public GameObject ninety;
    public string StartSquare;

    void OnEnable()
    {
        SceneManager.sceneLoaded += OnSceneLoaded;        
    }

    // Update is called once per frame
    void Update()
    {
        if(m.CurrentTrial+1 >= m.TotalNumberOfTrials){ this.enabled = false;}
        if (m.TurningState[m.CurrentTrial] == "TwentyDegs") { StartSquare = "StartEndSquare20"; twenty.SetActive(true); } else { twenty.SetActive(false); }
        if (m.TurningState[m.CurrentTrial] == "FortyfiveDegs") { StartSquare = "StartEndSquare45"; fortyfive.SetActive(true); } else { fortyfive.SetActive(false); }
        if (m.TurningState[m.CurrentTrial] == "NinetyDegs") { StartSquare = "StartEndSquare90"; ninety.SetActive(true); } else { ninety.SetActive(false); }
        if(!m.ExperimentDone) {    
            // Activate the gameobject if it's summoned by the manager
            if(gameObject.name == m.TurningState[m.CurrentTrial]) {
                foreach (Transform child in transform) {
                    child.gameObject.SetActive(true);
                }
            }
            else{
                foreach (Transform child in transform) {
                    child.gameObject.SetActive(false);
                }
            }

            // Reactivating the PosnerWalls

            // Position the space according to the TurningDirection list in the manager
            if(gameObject.name == m.TurningState[m.CurrentTrial] && m.TurningDirection[m.CurrentTrial] == "TurningRight") {
                transform.position = new Vector3(0,0,0);
                transform.rotation = Quaternion.Euler(0,0,0);
                if (StartSquare == "StartEndSquare20"){
                    twenty.transform.position = new Vector3(0,0,0);
                    twenty.transform.rotation = Quaternion.Euler(0,0,0);
                }
                if (StartSquare == "StartEndSquare45"){
                    fortyfive.transform.position = new Vector3(0,0,0);
                    fortyfive.transform.rotation = Quaternion.Euler(0,0,0);
                }
                if (StartSquare == "StartEndSquare90"){
                    ninety.transform.position = new Vector3(0,0,0);
                    ninety.transform.rotation = Quaternion.Euler(0,0,0);
                }
            }

            if(gameObject.name == m.TurningState[m.CurrentTrial] && m.TurningDirection[m.CurrentTrial] == "TurningLeft") {
                transform.position = new Vector3(-3.5f,3f,0);
                transform.rotation = Quaternion.Euler(0,0,-180f);
                if (StartSquare == "StartEndSquare20"){
                    twenty.transform.position = new Vector3(-3.5f,0.01f,0);
                    twenty.transform.rotation = Quaternion.Euler(0,0,-180f);
                }
                if (StartSquare == "StartEndSquare45"){
                    fortyfive.transform.position = new Vector3(-3.5f,0.01f,0);
                    fortyfive.transform.rotation = Quaternion.Euler(0,0,-180f);
                }
                if (StartSquare == "StartEndSquare90"){
                    ninety.transform.position = new Vector3(-3.5f,0.01f,0);
                    ninety.transform.rotation = Quaternion.Euler(0,0,-180f);
                }
            }
        }
        if(m.ExperimentDone){
            foreach (Transform child in transform) {
                    child.gameObject.SetActive(false);
                }
        }
    }

    // Function to assign Manager
     void OnSceneLoaded(Scene scene, LoadSceneMode mode)
    {
        m = GameObject.Find("Manager").GetComponent<Manager>();
        twenty = GameObject.Find("StartEndSquare20").gameObject;
        fortyfive = GameObject.Find("StartEndSquare45").gameObject;
        ninety = GameObject.Find("StartEndSquare90").gameObject;
    }
}
