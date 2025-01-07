_TurningAttention_VR

<b>Attentional cueing effects are reversed during locomotion</b>

The following Unity project makes use of HTC Vive Pro Eye and require at least 6 x 6 metres of free space. It is intended as a Mobile Brain/Body Imaging study using VR and EEG. LabStreamingLayer (LSL) is entirely integrated.
The purpose of the project is to investigate how the turning-angle of architectural transitions providing different gradients of sensory information about the environment are (i) integrated with motor cortex activity, (ii) affect our embodied and behavioural decisions, e.g. RTs, velocity, acceleration and so on, and (iii) understand at which point the sensory information is "contaminated" by motor information by network analysis.

This repo includes both the unbuilt and built project. For the unbuilt project, it depends on a couple of softwares:

<b>The first one:</b>
Download the VIVE SRanipal SDK and import the .unitypackage into your Unity project. Make sure to download v.1.3.1.1 as newer updates will drain the CPU.

https://hub.vive.com/en-US/download/VIVE_SRanipalInstaller_1.3.1.1.msi

Make sure the VIVE Sranipal SDK works before going to the next step.

The tray icon eyes turn green when eye tracking is active, this should happen when your Unity application is running.

<b>The second one:</b>
Download the latest OpenVR Unity XR Plugin .tgz-file

https://github.com/ValveSoftware/unity-xr-plugin/releases

Open the Package Manager
Click “Add package from tarball…" and select the .tgz-file you just downloaded
Enable the OpenVR Loader in the XR Plugin Management, i.e. Project Settings -> XR Plugin Management -> Check OpenVR Loader & Windows Mixed Reality

<b>The built version</b>
If planning to simply run the experiment, download the built version under 'release'. This works entirely independent; of course, provided using Vive Pro Eye.

<b>Matlab-files</b>
The Matlab-files in the folder refers to the data that can be found at: https://osf.io/92vzx/

<b>In case of any issues</b>
Please do not hesitate to contact me:
https://vbn.aau.dk/da/persons/138355
