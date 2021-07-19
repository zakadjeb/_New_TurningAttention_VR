_TurningAttention_VR

The project depends on a couple of softwares:

<b>The first one:</b>
Download the VIVE SRanipal SDK and import the .unitypackage into your Unity project.

https://developer.vive.com/resources/vive-sense/sdk/vive-eye-and-facial-tracking-sdk/

Make sure the VIVE Sranipal SDK works before going to the next step.

The tray icon eyes turn green when eye tracking is active, this should happen when your Unity application is running.

<b>The second one:</b>
Download the latest OpenVR Unity XR Plugin .tgz-file

https://github.com/ValveSoftware/unity-xr-plugin/releases

Open the Package Manager
Click “Add package from tarball…" and select the .tgz-file you just downloaded
Enable the OpenVR Loader in the XR Plugin Management, i.e. Project Settings -> XR Plugin Management -> Check OpenVR Loader & Windows Mixed Reality

<b>The third one:</b>
Download the Tobii XR SDK for Unity and unzip the package

https://vr.tobii.com/sdk/downloads/

Open the Package Manager
Click “Add package from disk…"
Select the package.json file from the download location
