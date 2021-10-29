using Valve.VR;

public class SteamInputModule : VRInputModule
{

    public SteamVR_Input_Sources m_Source = SteamVR_Input_Sources.RightHand;
    public SteamVR_Action_Boolean m_Click = null;
    public SteamVR_Action_Boolean selfreport_Click = null;

    public override void Process()
    {
        base.Process();
        // Press
        if (m_Click.GetStateDown(m_Source))
            Press();
        // Release
        if (m_Click.GetStateUp(m_Source))
            Release();

        // Press
        if (selfreport_Click.GetStateDown(m_Source))
            Press();
        // Release
        if (selfreport_Click.GetStateUp(m_Source))
            Release();
    }
}