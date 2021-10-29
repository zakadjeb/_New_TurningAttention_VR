//========= Copyright 2018, HTC Corporation. All rights reserved. ===========
using System.Runtime.InteropServices;
using UnityEngine;
using UnityEngine.Assertions;
using LSL;

namespace ViveSR
{
    namespace anipal
    {
        namespace Eye
        {
            public class EyeTracking : MonoBehaviour
            {
                [Header("Eye tracking")]
                private liblsl.StreamOutlet outlet;             // Creating the LSL outlet
                private float[] eyePos;                         // Creating the list of floats holding the position
                public string StreamName = "Unity.EyeTrackingStream"; // Setting the Stream Name
                public string StreamType = "Unity.StreamType";  // Setting the Stream Type                
                public int LengthOfRay = 25;
                public Camera VRcam;
                [SerializeField] private LineRenderer GazeRayRenderer;
                private static EyeData eyeData = new EyeData();
                private bool eye_callback_registered = false;
                private void Start()
                {
                    // Eye tracking LSL
                    liblsl.StreamInfo streamInfo = new liblsl.StreamInfo(StreamName,StreamType,3,Time.fixedDeltaTime * 1000, liblsl.channel_format_t.cf_float32);
                    liblsl.XMLElement chan = streamInfo.desc().append_child("Positions");
                    chan.append_child("Position").append_child_value("Label", "X");
                    chan.append_child("Position").append_child_value("Label", "Y");
                    chan.append_child("Position").append_child_value("Label", "Z");
                    outlet = new liblsl.StreamOutlet(streamInfo);
                    eyePos = new float[3];

                    if (!SRanipal_Eye_Framework.Instance.EnableEye)
                    {
                        enabled = false;
                        return;
                    }
                    Assert.IsNotNull(GazeRayRenderer);
                }

                private void Update()
                {
                    if (SRanipal_Eye_Framework.Status != SRanipal_Eye_Framework.FrameworkStatus.WORKING &&
                        SRanipal_Eye_Framework.Status != SRanipal_Eye_Framework.FrameworkStatus.NOT_SUPPORT) return;

                    if (SRanipal_Eye_Framework.Instance.EnableEyeDataCallback == true && eye_callback_registered == false)
                    {
                        SRanipal_Eye.WrapperRegisterEyeDataCallback(Marshal.GetFunctionPointerForDelegate((SRanipal_Eye.CallbackBasic)EyeCallback));
                        eye_callback_registered = true;
                    }
                    else if (SRanipal_Eye_Framework.Instance.EnableEyeDataCallback == false && eye_callback_registered == true)
                    {
                        SRanipal_Eye.WrapperUnRegisterEyeDataCallback(Marshal.GetFunctionPointerForDelegate((SRanipal_Eye.CallbackBasic)EyeCallback));
                        eye_callback_registered = false;
                    }

                    Vector3 GazeOriginCombinedLocal, GazeDirectionCombinedLocal;

                    if (eye_callback_registered)
                    {
                        if (SRanipal_Eye.GetGazeRay(GazeIndex.COMBINE, out GazeOriginCombinedLocal, out GazeDirectionCombinedLocal, eyeData)) { }
                        else if (SRanipal_Eye.GetGazeRay(GazeIndex.LEFT, out GazeOriginCombinedLocal, out GazeDirectionCombinedLocal, eyeData)) { }
                        else if (SRanipal_Eye.GetGazeRay(GazeIndex.RIGHT, out GazeOriginCombinedLocal, out GazeDirectionCombinedLocal, eyeData)) { }
                        else return;
                    }
                    else
                    {
                        if (SRanipal_Eye.GetGazeRay(GazeIndex.COMBINE, out GazeOriginCombinedLocal, out GazeDirectionCombinedLocal)) { }
                        else if (SRanipal_Eye.GetGazeRay(GazeIndex.LEFT, out GazeOriginCombinedLocal, out GazeDirectionCombinedLocal)) { }
                        else if (SRanipal_Eye.GetGazeRay(GazeIndex.RIGHT, out GazeOriginCombinedLocal, out GazeDirectionCombinedLocal)) { }
                        else return;
                    }
                    
                    // Drawing up the GazeRenderer
                    //Vector3 GazeDirectionCombined = VRcam.transform.TransformDirection(GazeDirectionCombinedLocal);
                    //GazeRayRenderer.SetPosition(0, VRcam.transform.position - VRcam.transform.up * 0.05f);
                    //GazeRayRenderer.SetPosition(1, VRcam.transform.position + GazeDirectionCombined * LengthOfRay);
                    
                    // Pushing the LSL eye tracking samples
                    Vector3 direction;
                    Vector3 origin;
                    ViveSR.anipal.Eye.SRanipal_Eye.GetGazeRay(GazeIndex.COMBINE, out origin, out direction);
                    string xGaze = string.Format("{0:0.00}", direction.x.ToString());
                    string yGaze = string.Format("{0:0.00}", direction.y.ToString());
                    string zGaze = string.Format("{0:0.00}", direction.z.ToString());
                    eyePos[0] = float.Parse(xGaze);
                    eyePos[1] = float.Parse(yGaze);
                    eyePos[2] = float.Parse(zGaze);
                    outlet.push_sample(eyePos);                    
                }
                private void Release() {
                    if (eye_callback_registered == true)
                    {
                        SRanipal_Eye.WrapperUnRegisterEyeDataCallback(Marshal.GetFunctionPointerForDelegate((SRanipal_Eye.CallbackBasic)EyeCallback));
                        eye_callback_registered = false;
                    }
                }
                internal class MonoPInvokeCallbackAttribute : System.Attribute
                {
                    public MonoPInvokeCallbackAttribute() { }
                }
                [MonoPInvokeCallback]
                private static void EyeCallback(ref EyeData eye_data)
                {
                    eyeData = eye_data;
                }
            }
        }
    }
}
