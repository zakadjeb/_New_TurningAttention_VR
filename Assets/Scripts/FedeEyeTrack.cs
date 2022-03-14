using System.Collections;
using System.Collections.Generic;
using Tobii.XR;
using ViveSR.anipal;
using UnityEngine;
using ViveSR.anipal.Eye;

[System.Serializable]
public struct EyeDataPack
{
    public float openess;
    public string focusObject;
    public float pupilDiameter;
    public float time;

    public EyeDataPack(float openess, string focusObject, float pupilDiameter, float time)
    {
        this.openess = openess;
        this.focusObject = focusObject;
        this.pupilDiameter = pupilDiameter;
        this.time = time;
    }
}

public class FedeEyeTrack : MonoBehaviour
{
    public bool trackEye = true;
    public float maxAngle = 45;
    public static List<EyeDataPack> leftEyeData;
    public static List<EyeDataPack> rightEyeData;

    // Start is called before the first frame update
    void Start()
    {
        leftEyeData = new List<EyeDataPack>();
        rightEyeData = new List<EyeDataPack>();
    }

    // Update is called once per frame
    void Update()
    {
        if (!trackEye)
            return;

        //creo ray
        Ray leftRay;
        Ray rightRay;
        SRanipal_Eye.GetGazeRay(GazeIndex.LEFT, out leftRay);
        SRanipal_Eye.GetGazeRay(GazeIndex.RIGHT, out rightRay);
        //calcolo direzione locale
        Vector3 rightDir = Quaternion.Euler(rightRay.direction.y * -maxAngle,
            rightRay.direction.x * maxAngle,
            rightRay.direction.z * maxAngle) * transform.forward;
        Vector3 leftDir = Quaternion.Euler(leftRay.direction.y * -maxAngle,
            leftRay.direction.x * maxAngle,
            leftRay.direction.z * maxAngle) * transform.forward;
        //check collisioni
        RaycastHit hit;
        string rightObjectLooked = "";
        string leftObjectLooked = "";
        if (Physics.Raycast(transform.position, rightDir, out hit))
        {
            rightObjectLooked = hit.transform.name;
            //Debug.Log(rightObjectLooked);
        }
        if (Physics.Raycast(transform.position, leftDir, out hit))
        {
            leftObjectLooked = hit.transform.name;
        }
        //calcolo dati occhio
        float openLeft;
        float openRight;
        SRanipal_Eye.GetEyeOpenness(EyeIndex.LEFT, out openLeft);
        SRanipal_Eye.GetEyeOpenness(EyeIndex.RIGHT, out openRight);
        //get pupils
        VerboseData data;
        SRanipal_Eye.GetVerboseData(out data);
        float leftPupil = data.left.pupil_diameter_mm;
        float rightPupil = data.right.pupil_diameter_mm;

        leftEyeData.Add(new EyeDataPack(openLeft, leftObjectLooked, leftPupil, Time.time));
        rightEyeData.Add(new EyeDataPack(openRight, rightObjectLooked, rightPupil, Time.time));

    }
}
