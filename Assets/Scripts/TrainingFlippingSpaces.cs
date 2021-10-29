using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TrainingFlippingSpaces : MonoBehaviour
{
    public TrainingManager m;
    public GameObject CameraRig;
    public bool hasRun = false;
    // Start is called before the first frame update
    void Start()
    {
        m = this.GetComponent<TrainingManager>();
        CameraRig = GameObject.Find("[CameraRig]");
    }

    // Update is called once per frame
    void Update()
    {
        if(m.NewTrial) {hasRun = false;}

        // Using Grasshopper and Rhino it can be shown that using 3-pt circle that the centre of the circle
        // precisely is (2.5, 7.5, 0) where z-axis is up. For Unity it would be (2.5, 0, 7.5) where the y-axis is up.
        // 160 degs for 20 degs space
        // 135 degs for 45 degs space
        // 90 degs for 90 degs space
        // negative degs for left turn spaces

        if (m.CurrentTrial > 0 && !m.TrainingDone) {
            // Right turns
            if(m.TurningState[m.CurrentTrial-1] == "TwentyDegs" && m.TurningDirection[m.CurrentTrial-1] == "TurningRight" && !hasRun){ // remember to add m.posnerDone to the conditions
                //Debug.Log("entered");
                CameraRig.transform.RotateAround(this.transform.position, Vector3.up, 160f);
                hasRun = true;
            }
            if(m.TurningState[m.CurrentTrial-1] == "TwentyDegs" && m.TurningDirection[m.CurrentTrial-1] == "TurningLeft" && !hasRun){ // remember to add m.posnerDone to the conditions
                //Debug.Log("entered");
                CameraRig.transform.RotateAround(this.transform.position, Vector3.up, 200f);
                hasRun = true;
            }

            if(m.TurningState[m.CurrentTrial-1] == "FortyfiveDegs" && m.TurningDirection[m.CurrentTrial-1] == "TurningRight" && !hasRun){ // remember to add m.posnerDone to the conditions
                //Debug.Log("entered");
                CameraRig.transform.RotateAround(this.transform.position, Vector3.up, 135f);
                hasRun = true;
            }
            if(m.TurningState[m.CurrentTrial-1] == "FortyfiveDegs" && m.TurningDirection[m.CurrentTrial-1] == "TurningLeft" && !hasRun){ // remember to add m.posnerDone to the conditions
                //Debug.Log("entered");
                CameraRig.transform.RotateAround(this.transform.position, Vector3.up, 225f);
                hasRun = true;
            }

            if(m.TurningState[m.CurrentTrial-1] == "NinetyDegs" && m.TurningDirection[m.CurrentTrial-1] == "TurningRight" && !hasRun){ // remember to add m.posnerDone to the conditions
                //Debug.Log("entered");
                CameraRig.transform.RotateAround(this.transform.position, Vector3.up, 90f);
                hasRun = true;
            }
            if(m.TurningState[m.CurrentTrial-1] == "NinetyDegs" && m.TurningDirection[m.CurrentTrial-1] == "TurningLeft" && !hasRun){ // remember to add m.posnerDone to the conditions
                //Debug.Log("entered");
                CameraRig.transform.RotateAround(this.transform.position, Vector3.up, 270f);
                hasRun = true;
            }
        }
        

    }
}
