﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>
struct Dictionary_2_t62F8E88182F28FE8A3E61CDA9445309B4DE28C09;
// System.Collections.Generic.Dictionary`2<System.Int32,Tobii.G2OM.InternalCandidate>
struct Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs>
struct EventHandler_1_t7F26BD2270AD4531F2328FD1382278E975249DF1;
// System.Func`1<System.Object>
struct Func_1_t807CEE610086E24A0167BAA97A64062016E09D49;
// System.Func`1<Tobii.XR.Internal.TobiiEulaFile>
struct Func_1_t260F34DDA6149F57AC12F143882952B9B8673B6A;
// System.Func`2<System.Reflection.Assembly,System.Collections.Generic.IEnumerable`1<System.Type>>
struct Func_2_tE0DBF080012BEFCAB3A265240B5CD35BD3519412;
// System.Func`2<Tobii.XR.IEyeTrackingProvider,System.Boolean>
struct Func_2_t0D121E24665C7C6EBDEE662FD349B058C314168D;
// System.Func`2<System.Object,System.Collections.Generic.IEnumerable`1<System.Object>>
struct Func_2_tD457CA07229B6835F9D0AB141D4F1A7455A8AF29;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8;
// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436;
// System.Func`2<System.Type,System.Boolean>
struct Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5;
// System.Func`2<System.Type,Tobii.XR.IEyeTrackingProvider>
struct Func_2_t37CB4832DBF1755273858A77BAAC6B4B50B9444D;
// System.Func`2<Tobii.XR.TobiiXR_Settings/ProviderElement,System.Object>
struct Func_2_tA94719DE56CE149024C3C6AD70662A042EAF6C71;
// System.Func`2<Tobii.XR.TobiiXR_Settings/ProviderElement,System.Type>
struct Func_2_tD834A382C7BC9720A3941F056FF6626757F128C1;
// System.Collections.Generic.IEnumerable`1<System.Reflection.Assembly>
struct IEnumerable_1_tB3F4FE9423F20C9D8337F7B224FE58B3F54208E9;
// System.Collections.Generic.IEnumerable`1<Tobii.XR.IEyeTrackingProvider>
struct IEnumerable_1_t25825BE2171FE5EC472B35493E89341A57488888;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_tA2CFC624CD7D291A0E486D1A5FC78BF6425F9428;
// System.Collections.Generic.IEnumerable`1<Tobii.XR.TobiiXR_Settings/ProviderElement>
struct IEnumerable_1_t0047AE2743C5421A1F65A6F15B0D3EADF6EA861E;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D;
// System.Collections.Generic.List`1<Tobii.G2OM.FocusedCandidate>
struct List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>
struct List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<Tobii.XR.TobiiXR_Settings/ProviderElement>
struct List_1_t047270E2141D972A607E0D91E0E16FD0FFFC2D07;
// System.Collections.Generic.Queue`1<Tobii.XR.TobiiXR_AdvancedEyeTrackingData>
struct Queue_1_t27DFB585D1A1063ABE7B597B1FCFF823EF113243;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// UnityEngine.Events.UnityEvent`1<UnityEngine.GameObject>
struct UnityEvent_1_t1DC2DB931FE9E53AEC9A04F4DE9B4F7B469BC78E;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F;
// UnityEngine.Events.UnityEvent`2<UnityEngine.GameObject,System.Boolean>
struct UnityEvent_2_tECE314F182CE3F2DC54078795CE06100AA0F8967;
// UnityEngine.Events.UnityEvent`2<UnityEngine.GameObject,System.Int32>
struct UnityEvent_2_tB328963BE2F2851746B8F3A3DFDD18751B2637E5;
// UnityEngine.Events.UnityEvent`2<System.Object,System.Boolean>
struct UnityEvent_2_tD47463D1388FE0395585FD2FC6019F50DC5C530F;
// UnityEngine.Events.UnityEvent`2<System.Object,System.Int32>
struct UnityEvent_2_t528947688904F26DFB16C3AFF468E62DF205DC60;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510;
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t42061B4CA43487DD8ECD8C3AACCEF783FA081FF0;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// Tobii.G2OM.FocusedCandidate[]
struct FocusedCandidateU5BU5D_t0FF1AF1620D956D5317F919CCEC07FE9D5220585;
// Tobii.G2OM.G2OM_Candidate[]
struct G2OM_CandidateU5BU5D_t7CEC092C766EEA7361EF48AA914B042BC20BFF1E;
// Tobii.G2OM.G2OM_CandidateResult[]
struct G2OM_CandidateResultU5BU5D_tAB848527789DB0EBAD0DD5B7914AAFFEC0EEEC02;
// UnityEngine.XR.InputDevice[]
struct InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// Tobii.XR.TobiiXR_Settings/ProviderElement[]
struct ProviderElementU5BU5D_tD23139C928113C907534BEE4D2E8F9B20B8D0AB7;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03;
// System.AppDomain
struct AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A;
// System.Reflection.Assembly
struct Assembly_t;
// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_tE06B38463937F6FBCCECF4DF6519F83C1683FE0C;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.BoxCollider
struct BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// Tobii.XR.ControllerManager
struct ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.EventHandler
struct EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B;
// System.Exception
struct Exception_t;
// Tobii.XR.EyeTrackingFilterBase
struct EyeTrackingFilterBase_t898096B000FCA3A953F1A9BC81D2648D8CD3C66C;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// Tobii.G2OM.G2OM
struct G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C;
// Tobii.G2OM.G2OM_Description
struct G2OM_Description_tDDC3E7F8747B6FC42E6B44F4302D67374D28F2DB;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// Tobii.XR.HmdToWorldTransformer
struct HmdToWorldTransformer_t24E03A8555C369004B146BC76E854496C096FA8A;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Tobii.XR.IControllerAdapter
struct IControllerAdapter_tD3704C6A643A8873ACBCAE0EC1718D4CAC1DA9B2;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// Tobii.XR.IEyeTrackingProvider
struct IEyeTrackingProvider_t04D6D65DC709128E4BE6CCF69F52197434C02F73;
// Tobii.G2OM.IG2OM_ColliderDataProvider
struct IG2OM_ColliderDataProvider_t902B64FB6CC49EB5144558A308B6AD50CF8518B3;
// Tobii.G2OM.IG2OM_Context
struct IG2OM_Context_t76A1678AB05CC3E9530C8AEA2D90DE68D4136722;
// Tobii.G2OM.IG2OM_ObjectDistinguisher
struct IG2OM_ObjectDistinguisher_t54814829C953800054E5898D73F2099C0E0F1952;
// Tobii.G2OM.IG2OM_ObjectFinder
struct IG2OM_ObjectFinder_tDE13D081D582DC99781887DF958EF7D474C94445;
// Tobii.G2OM.IG2OM_PostTicker
struct IG2OM_PostTicker_t20B92D25A8EB1162F7B58A942D165501F94C7CC4;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// Tobii.XR.NoseDirectionProvider
struct NoseDirectionProvider_t390567955750C154B13CD90437312E9A6EF7859B;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// System.ResolveEventHandler
struct ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// Tobii.XR.StreamEngineTracker
struct StreamEngineTracker_tF1BA81AD436A1E38EC7BD63DE1F7D85FF74BDD7D;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextAsset
struct TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// Tobii.XR.Internal.TobiiEulaFile
struct TobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466;
// Tobii.XR.TobiiProvider
struct TobiiProvider_tD45A100799E1CF76E55DBE531F3B1D064727C6AB;
// Tobii.XR.TobiiXRAdvanced
struct TobiiXRAdvanced_tD89ECFBC056BC287F4A99F38CAD8804962868C74;
// Tobii.XR.TobiiXR_AdvancedEyeTrackingData
struct TobiiXR_AdvancedEyeTrackingData_tB2678609BBF22A44D4C6187F17115A3C699D977A;
// Tobii.XR.TobiiXR_EyeTrackingData
struct TobiiXR_EyeTrackingData_t77A57D23997EA5B3B365ABDD60221EFB27BD72EA;
// TobiiXR_Initializer
struct TobiiXR_Initializer_t6E6B5AF7DF774175B1F4BD7B27E636E4489D8286;
// Tobii.XR.Internal.TobiiXR_Lifecycle
struct TobiiXR_Lifecycle_t5A45FF952AADCB1A985E3D365599A048F5142195;
// Tobii.XR.TobiiXR_Settings
struct TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// Tobii.XR.UIButtonEvent
struct UIButtonEvent_t6ACDD055C471804447D38E6EA0D042A57A243B1A;
// Tobii.XR.UIGazeButtonGraphics
struct UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3;
// Tobii.XR.UIGazeCollider
struct UIGazeCollider_tCB961420BFA37C9B3316A58369CD5D55B214FB85;
// Tobii.XR.UIGazeSliderGraphics
struct UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9;
// Tobii.XR.UIGazeToggleButtonGraphics
struct UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59;
// Tobii.XR.UIHighlightAtGaze
struct UIHighlightAtGaze_t8E5928A9329AA5E470E20EA5B93409A21EEC0EF6;
// Tobii.XR.UISliderEvent
struct UISliderEvent_t36D445D0583DF9594EF697A1EE85A07EE10DA88D;
// Tobii.XR.UIToggleEvent
struct UIToggleEvent_t3025F2607AD11E28D3936621C944D224B4FCF15B;
// Tobii.XR.UITouchpadGazeButton
struct UITouchpadGazeButton_t3A308EBB536DF4924AFB84B203E0048273DF092A;
// Tobii.XR.UITouchpadGazeSlider
struct UITouchpadGazeSlider_t92A4881810F3381D4454AD18E58E6D65F52AF7B3;
// Tobii.XR.UITouchpadGazeToggleButton
struct UITouchpadGazeToggleButton_t47CD31E42D965D1D0A084EF01FA40A171AB3FC31;
// Tobii.XR.UITouchpadSwipeDetector
struct UITouchpadSwipeDetector_tF8D39854F9C2AEC5EB30A18490D8B5BDC24B1237;
// Tobii.XR.UITriggerDragDetector
struct UITriggerDragDetector_t5B95945A64025F5B6F9641C0C64FC5F53431C4B8;
// Tobii.XR.UITriggerGazeButton
struct UITriggerGazeButton_t2554537E0895389690AB22BFAEF73BE3E89B483F;
// Tobii.XR.UITriggerGazeButtonWithHold
struct UITriggerGazeButtonWithHold_tA1C5EE28D3A9F40D8B285501369988CE21C3E6E5;
// Tobii.XR.UITriggerGazeSlider
struct UITriggerGazeSlider_t0A8BB5E0FD17F213EDA17FB7FDBB192FA2C5A08E;
// Tobii.XR.UITriggerGazeToggleButton
struct UITriggerGazeToggleButton_t84661EDC6F01AC3F57A499DE2B60F8CCA0E0C462;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_t1DF125A860ED9B70F24ADFA6CB0781533A23DA64;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Reflection.Assembly/ResolveEventHolder
struct ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C;
// Tobii.XR.Internal.AssemblyUtils/<>c
struct U3CU3Ec_tBC16F7556FA087545272E36FD9D2790DE039B327;
// Tobii.XR.Internal.AssemblyUtils/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t8AA428BBDE450BAEDAF50A6FE80DB09E6FE06571;
// Tobii.XR.Internal.AssemblyUtils/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_tB8AFD562969053C15173A4FB08AD7412A6D911A0;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE;
// Tobii.XR.Internal.TobiiEulaFile/<>c
struct U3CU3Ec_tCDA4616F789EF10766F6EE525B2FE845C62B4EC3;
// Tobii.XR.TobiiXR/TobiiXRInternal
struct TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD;
// Tobii.XR.Internal.TobiiXR_Lifecycle/<>c
struct U3CU3Ec_tCF809EE280FCA8E46728688925705891BCE185DB;
// Tobii.XR.TobiiXR_Settings/<>c
struct U3CU3Ec_tB863BCE9690BD07ADCB7EC7104291B12AEC27562;
// Tobii.XR.UIGazeButtonGraphics/<AnimateButton>d__20
struct U3CAnimateButtonU3Ed__20_t206BE52250D8631429CA487BD86A828BD76754A6;
// Tobii.XR.UIGazeSliderGraphics/<AnimateHandle>d__33
struct U3CAnimateHandleU3Ed__33_t25309B59592FBF6C583EA1A1A89E51814130219F;
// Tobii.XR.UIGazeSliderGraphics/<AnimateVisualFeedback>d__32
struct U3CAnimateVisualFeedbackU3Ed__32_tAE9021EC3BD7C7D1730454554D4D341065B43175;
// Tobii.XR.UIGazeToggleButtonGraphics/<AnimateVisualFeedback>d__31
struct U3CAnimateVisualFeedbackU3Ed__31_t07D3E601DC366CDB016FA37DE08D53A461AB2E7E;
// Tobii.XR.UIGazeToggleButtonGraphics/<MoveKnob>d__33
struct U3CMoveKnobU3Ed__33_tE58824844149E1E88D502B3178B56C9A60997966;

IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AssemblyUtils_tA96C6CB138EFA919A345672B154FEFEEFE702552_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CompilerFlagAttribute_t723232B1FDEB871FC8C6FB74D41A3B23C5158F53_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t260F34DDA6149F57AC12F143882952B9B8673B6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t0D121E24665C7C6EBDEE662FD349B058C314168D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t37CB4832DBF1755273858A77BAAC6B4B50B9444D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tD834A382C7BC9720A3941F056FF6626757F128C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tE0DBF080012BEFCAB3A265240B5CD35BD3519412_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* G2OM_Description_tDDC3E7F8747B6FC42E6B44F4302D67374D28F2DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEyeTrackingProvider_t04D6D65DC709128E4BE6CCF69F52197434C02F73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t047270E2141D972A607E0D91E0E16FD0FFFC2D07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NoseDirectionProvider_t390567955750C154B13CD90437312E9A6EF7859B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ProviderDisplayNameAttribute_t009EAE95225D051706217867F249D54A91DBFB5D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TobiiEula_t556736868F1DED17A9E7BBE39E2EB3C457318850_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TobiiProvider_tD45A100799E1CF76E55DBE531F3B1D064727C6AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TobiiXRAdvanced_tD89ECFBC056BC287F4A99F38CAD8804962868C74_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TobiiXR_EyeTrackingData_t77A57D23997EA5B3B365ABDD60221EFB27BD72EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TobiiXR_TrackingSpace_tA891CDDE8FE1FA340B247836C82693CF4AE93098_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAnimateButtonU3Ed__20_t206BE52250D8631429CA487BD86A828BD76754A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAnimateHandleU3Ed__33_t25309B59592FBF6C583EA1A1A89E51814130219F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAnimateVisualFeedbackU3Ed__31_t07D3E601DC366CDB016FA37DE08D53A461AB2E7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAnimateVisualFeedbackU3Ed__32_tAE9021EC3BD7C7D1730454554D4D341065B43175_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CMoveKnobU3Ed__33_tE58824844149E1E88D502B3178B56C9A60997966_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass0_0_t8AA428BBDE450BAEDAF50A6FE80DB09E6FE06571_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass1_0_tB8AFD562969053C15173A4FB08AD7412A6D911A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tB863BCE9690BD07ADCB7EC7104291B12AEC27562_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tBC16F7556FA087545272E36FD9D2790DE039B327_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tCDA4616F789EF10766F6EE525B2FE845C62B4EC3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tCF809EE280FCA8E46728688925705891BCE185DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIButtonEvent_t6ACDD055C471804447D38E6EA0D042A57A243B1A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UISliderEvent_t36D445D0583DF9594EF697A1EE85A07EE10DA88D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIToggleEvent_t3025F2607AD11E28D3936621C944D224B4FCF15B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0CB31F09837C5C148A125E752A0CD574CB0AF391;
IL2CPP_EXTERN_C String_t* _stringLiteral1BE39779F1A6C99420526073195C1896499BD17E;
IL2CPP_EXTERN_C String_t* _stringLiteral30E176393A3DD2060A60BC132F0F38B14418E45B;
IL2CPP_EXTERN_C String_t* _stringLiteral3550D924947D14C05AF4029FAE8CAF702E26DBCB;
IL2CPP_EXTERN_C String_t* _stringLiteral56C5A3C9094F519DF6BBADC5014B3B9B0C721DFA;
IL2CPP_EXTERN_C String_t* _stringLiteral5D54E959817188DBAD9E65FA3DB55F06B70F5E3C;
IL2CPP_EXTERN_C String_t* _stringLiteral6144B56578C5988A983BEA4A285805EA9DFCF3BE;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8CB7CAD4AF4DD11A8E631AFC7CD80394E0E43B;
IL2CPP_EXTERN_C String_t* _stringLiteral8AA30B8838A092B1BEF4E45FEECB34ED8E916FC9;
IL2CPP_EXTERN_C String_t* _stringLiteral8EE0C01A5CD0425C36280F9FE180B556D21A50D1;
IL2CPP_EXTERN_C String_t* _stringLiteral9757C8C79C623E91A33A44121BF0A8E71780698A;
IL2CPP_EXTERN_C String_t* _stringLiteralC92E67FAE80124BBE133E64B83039E7A1A54C1BE;
IL2CPP_EXTERN_C String_t* _stringLiteralC9D5AF54BBED103B0E2129D59B32C171FC818A99;
IL2CPP_EXTERN_C String_t* _stringLiteralCBCF8744FADF32F40692AB98D5D5EB63DA905545;
IL2CPP_EXTERN_C String_t* _stringLiteralE97065529319EF6A0A6EA02D3B2EA5B2BD58B71D;
IL2CPP_EXTERN_C String_t* _stringLiteralF71EC8637E6650DB082BA534ED8C799612E620ED;
IL2CPP_EXTERN_C String_t* _stringLiteralFD60316EE3ADB7B16A998DF8AE0D68C293F6622E;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisGraphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_mC2B96FBBFDBEB7FC16A23436F3C7A3C2740CAAA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisUIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3_m4EA0B70811CC9A42F1C754D2F89EA074D0B35B2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisUIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9_m05202FD41E43B29E57ECEDEAF05C4ABC1DDCB268_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisUIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59_mF5A28883054A0C0B04D6E5B827C2389852E41FBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m5BB06692D9A48A3FEEB102881A86417DE6DA5027_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mFCD5E71429358EE225039B602674518740D30141_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisIEyeTrackingProvider_t04D6D65DC709128E4BE6CCF69F52197434C02F73_m6A2990A123D1A2AA3557FE683206B00DE9F054AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisRuntimeObject_mEA30C68B8D8C7D44DF6690A8FC79E4A48A09C6F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisType_t_mB2DD58F1158C4877353C4DF1F486FC9D97794727_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SelectMany_TisAssembly_t_TisType_t_m714BE3CD2D51FDBC0AE1C1A383B08D53E587CADC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisProviderElement_t76AE55D58DAD3043AE5CE90FE6B06F6C474697E9_TisType_t_mDE5A5E00BCBB24B5E759302251C87FCC6E3B1188_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisType_t_TisIEyeTrackingProvider_t04D6D65DC709128E4BE6CCF69F52197434C02F73_m9DCEBD222FCB4C3512642BDB084248722E4EF79C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisType_t_m2A0B85DA7F086A9F38AE3CBF6F6DB181B2A86753_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1_Invoke_m7008E359360830F80BC6ED46103A57A0480C942E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_mD168B39FC1925BF2254BC1BE0C5135E9CCDF7686_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m6AC59D19A3B5879023B89F3EB96AC21D1F244F9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mBBC58743DEEE7E47F68AA3544FF0092BC5F79EC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mD7D590149A2A911A966A7D1E031658803A962FF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mF525E1BFCBF8F3108DEAE75F57915F8E5F8F6906_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mF99B731B7FE71291198AC579A27977DAFAEE528D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* G2OM_Clear_m48E4F43C0E2A2CDC1561AE39EA38FDEC49382E66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisTobiiXR_Lifecycle_t5A45FF952AADCB1A985E3D365599A048F5142195_mF53ABD3C38E75BE9F52A2F3AD531E40062D59EA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5F2125A910D0551B1D0A871848A833DA8EF773C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0529F0D5B1BA587113A1E74322AD526D1C8867BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m2D0945B0A5D9457CD045D4DB2DACB55D6727F9A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m301E51804C88F4CDA1665B126A03BC15123C2BB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisTobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466_mB14A47319ED839FECE0ADF05ECF86BB0476E1501_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptableObject_CreateInstance_TisTobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466_m83E128068266AE53287AE6976427CD363421C9BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TobiiXR_GetEyeTrackingData_m86E3934E2BFDE85FF95A2C156531420635058D21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TobiiXR_Lifecycle_OnQuitting_mE4E207F08156F52D4E034152552776E06CFF606B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TobiiXR_Settings_GetProviderFrom_m38E09C04C3FB68D785BFDEDEEDAC1FF2BF7E8ED7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TobiiXR_Start_mB3C5E46DAF061A6E7F7742119A6306C7ADC44213_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TobiiXR_Stop_m5D6EF0ECE0F1C85E6B3C7BACBCFD474D9B6F0832_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TobiiXR_Tick_m28D9E7F49EA879B767BB4CBBF4971C5EAE940CFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAnimateButtonU3Ed__20_System_Collections_IEnumerator_Reset_mF5012BBE7B56971CE8566835D0F9BB6232E75C20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAnimateHandleU3Ed__33_System_Collections_IEnumerator_Reset_m4C0CD86D0A1F3C9E74ADF6B0E388A2F5AAA9F467_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAnimateVisualFeedbackU3Ed__31_System_Collections_IEnumerator_Reset_m1452E921ACD437F544A5A871DC2A34DD96426A60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAnimateVisualFeedbackU3Ed__32_System_Collections_IEnumerator_Reset_mB1148DA62314881BAB22C748B1A2D66971515764_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMoveKnobU3Ed__33_System_Collections_IEnumerator_Reset_mC077DB8266FF6D6952502CC131D3305AA180BB76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CEyetrackingProviderTypesU3Eb__1_0_m7FA8598F590E4CD6279E6FC5CC41AA2CAA97B08D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetProviderU3Eb__18_0_m3AD5BA8B1C76D17AE2C1F93E3F5DF8F00477F6F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetProviderU3Eb__18_1_m7A2FD166742E05AF9CDD8244B378BCC9441BA979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetProviderU3Eb__18_2_m0EA4774C2078DCB7A9AFFEEC7D6CFC9F900D0B91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__6_0_m9E919CE5E3AEB9E2CDAD9BBDA7EDFC233AB4D8BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__7_0_m5AAA90722319D81046F03D378DC8C4803F199138_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__7_1_mB1A3837B0BEFB757FF17E6F20201A382A500FF46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__7_2_m7994086901B229011858E7170DAB71D8DFF57999_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass0_0_U3CEyetrackingProviderTypeU3Eb__0_mB363C9C42D94B49EBF24696684215FCB05E8D02B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass1_0_U3CEyetrackingProviderTypesU3Eb__1_m6F6286E3A64283423378899EE3D35C1BB5712E2C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m2905EEB7C8C104A9BC6500F3BB559F14A86CB376_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mFEC498EC5642F0C80769E4D2E08EA2E3E4D3D0EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2_Invoke_m3CA0A236B3D5729DADE146B720B9B52DA0B07D6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2_Invoke_mB9C23C9CF956F0CCBE6C295112BC8F4C9A4EDA3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2__ctor_m15AD3364487BCDF358770B0A3394D4A6A151D60F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2__ctor_mAC7F8CF59475A3EAD20EC4DB1FA8FBE86578E9BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* CompilerFlagAttribute_t723232B1FDEB871FC8C6FB74D41A3B23C5158F53_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* HTCProvider_tA77301FB31503866101DB7CD5651306DB6B8096E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IEyeTrackingProvider_t04D6D65DC709128E4BE6CCF69F52197434C02F73_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* MouseProvider_t7EFE808926569FDFC3E250262D425765658431A4_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NoseDirectionProvider_t390567955750C154B13CD90437312E9A6EF7859B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PicoXRProvider_tEB058C77E2E229098595476B6E58AEE27077D2C8_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ProviderDisplayNameAttribute_t009EAE95225D051706217867F249D54A91DBFB5D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TobiiProvider_tD45A100799E1CF76E55DBE531F3B1D064727C6AB_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AssemblyU5BU5D_t42061B4CA43487DD8ECD8C3AACCEF783FA081FF0;
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFB519A580BEA5F04140B6E767CBCB027ED6BDB8A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___entries_1)); }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___keys_7)); }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___values_8)); }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<Tobii.G2OM.FocusedCandidate>
struct List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	FocusedCandidateU5BU5D_t0FF1AF1620D956D5317F919CCEC07FE9D5220585* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C, ____items_1)); }
	inline FocusedCandidateU5BU5D_t0FF1AF1620D956D5317F919CCEC07FE9D5220585* get__items_1() const { return ____items_1; }
	inline FocusedCandidateU5BU5D_t0FF1AF1620D956D5317F919CCEC07FE9D5220585** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(FocusedCandidateU5BU5D_t0FF1AF1620D956D5317F919CCEC07FE9D5220585* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	FocusedCandidateU5BU5D_t0FF1AF1620D956D5317F919CCEC07FE9D5220585* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C_StaticFields, ____emptyArray_5)); }
	inline FocusedCandidateU5BU5D_t0FF1AF1620D956D5317F919CCEC07FE9D5220585* get__emptyArray_5() const { return ____emptyArray_5; }
	inline FocusedCandidateU5BU5D_t0FF1AF1620D956D5317F919CCEC07FE9D5220585** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(FocusedCandidateU5BU5D_t0FF1AF1620D956D5317F919CCEC07FE9D5220585* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>
struct List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F, ____items_1)); }
	inline InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE* get__items_1() const { return ____items_1; }
	inline InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F_StaticFields, ____emptyArray_5)); }
	inline InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Tobii.XR.TobiiXR_Settings/ProviderElement>
struct List_1_t047270E2141D972A607E0D91E0E16FD0FFFC2D07  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ProviderElementU5BU5D_tD23139C928113C907534BEE4D2E8F9B20B8D0AB7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t047270E2141D972A607E0D91E0E16FD0FFFC2D07, ____items_1)); }
	inline ProviderElementU5BU5D_tD23139C928113C907534BEE4D2E8F9B20B8D0AB7* get__items_1() const { return ____items_1; }
	inline ProviderElementU5BU5D_tD23139C928113C907534BEE4D2E8F9B20B8D0AB7** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ProviderElementU5BU5D_tD23139C928113C907534BEE4D2E8F9B20B8D0AB7* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t047270E2141D972A607E0D91E0E16FD0FFFC2D07, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t047270E2141D972A607E0D91E0E16FD0FFFC2D07, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t047270E2141D972A607E0D91E0E16FD0FFFC2D07, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t047270E2141D972A607E0D91E0E16FD0FFFC2D07_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ProviderElementU5BU5D_tD23139C928113C907534BEE4D2E8F9B20B8D0AB7* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t047270E2141D972A607E0D91E0E16FD0FFFC2D07_StaticFields, ____emptyArray_5)); }
	inline ProviderElementU5BU5D_tD23139C928113C907534BEE4D2E8F9B20B8D0AB7* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ProviderElementU5BU5D_tD23139C928113C907534BEE4D2E8F9B20B8D0AB7** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ProviderElementU5BU5D_tD23139C928113C907534BEE4D2E8F9B20B8D0AB7* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Tobii.XR.Internal.AssemblyUtils
struct AssemblyUtils_tA96C6CB138EFA919A345672B154FEFEEFE702552  : public RuntimeObject
{
public:

public:
};

struct AssemblyUtils_tA96C6CB138EFA919A345672B154FEFEEFE702552_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Tobii.XR.Internal.AssemblyUtils::_cachedProviderDisplayNames
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ____cachedProviderDisplayNames_0;

public:
	inline static int32_t get_offset_of__cachedProviderDisplayNames_0() { return static_cast<int32_t>(offsetof(AssemblyUtils_tA96C6CB138EFA919A345672B154FEFEEFE702552_StaticFields, ____cachedProviderDisplayNames_0)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get__cachedProviderDisplayNames_0() const { return ____cachedProviderDisplayNames_0; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of__cachedProviderDisplayNames_0() { return &____cachedProviderDisplayNames_0; }
	inline void set__cachedProviderDisplayNames_0(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		____cachedProviderDisplayNames_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cachedProviderDisplayNames_0), (void*)value);
	}
};


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_10)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_13)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_14)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___encodings_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// Tobii.XR.NoseDirectionProvider
struct NoseDirectionProvider_t390567955750C154B13CD90437312E9A6EF7859B  : public RuntimeObject
{
public:
	// Tobii.XR.TobiiXR_EyeTrackingData Tobii.XR.NoseDirectionProvider::_eyeTrackingDataLocal
	TobiiXR_EyeTrackingData_t77A57D23997EA5B3B365ABDD60221EFB27BD72EA * ____eyeTrackingDataLocal_0;

public:
	inline static int32_t get_offset_of__eyeTrackingDataLocal_0() { return static_cast<int32_t>(offsetof(NoseDirectionProvider_t390567955750C154B13CD90437312E9A6EF7859B, ____eyeTrackingDataLocal_0)); }
	inline TobiiXR_EyeTrackingData_t77A57D23997EA5B3B365ABDD60221EFB27BD72EA * get__eyeTrackingDataLocal_0() const { return ____eyeTrackingDataLocal_0; }
	inline TobiiXR_EyeTrackingData_t77A57D23997EA5B3B365ABDD60221EFB27BD72EA ** get_address_of__eyeTrackingDataLocal_0() { return &____eyeTrackingDataLocal_0; }
	inline void set__eyeTrackingDataLocal_0(TobiiXR_EyeTrackingData_t77A57D23997EA5B3B365ABDD60221EFB27BD72EA * value)
	{
		____eyeTrackingDataLocal_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____eyeTrackingDataLocal_0), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// Tobii.XR.Internal.TobiiEula
struct TobiiEula_t556736868F1DED17A9E7BBE39E2EB3C457318850  : public RuntimeObject
{
public:

public:
};

struct TobiiEula_t556736868F1DED17A9E7BBE39E2EB3C457318850_StaticFields
{
public:
	// Tobii.XR.Internal.TobiiEulaFile Tobii.XR.Internal.TobiiEula::_eulaFile
	TobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466 * ____eulaFile_0;

public:
	inline static int32_t get_offset_of__eulaFile_0() { return static_cast<int32_t>(offsetof(TobiiEula_t556736868F1DED17A9E7BBE39E2EB3C457318850_StaticFields, ____eulaFile_0)); }
	inline TobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466 * get__eulaFile_0() const { return ____eulaFile_0; }
	inline TobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466 ** get_address_of__eulaFile_0() { return &____eulaFile_0; }
	inline void set__eulaFile_0(TobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466 * value)
	{
		____eulaFile_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____eulaFile_0), (void*)value);
	}
};


// Tobii.XR.TobiiXR
struct TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03  : public RuntimeObject
{
public:

public:
};

struct TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_StaticFields
{
public:
	// Tobii.XR.TobiiXR/TobiiXRInternal Tobii.XR.TobiiXR::_internal
	TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD * ____internal_0;
	// UnityEngine.GameObject Tobii.XR.TobiiXR::_updaterGameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____updaterGameObject_1;
	// Tobii.XR.TobiiXR_EyeTrackingData Tobii.XR.TobiiXR::_eyeTrackingDataLocal
	TobiiXR_EyeTrackingData_t77A57D23997EA5B3B365ABDD60221EFB27BD72EA * ____eyeTrackingDataLocal_2;
	// Tobii.XR.TobiiXR_EyeTrackingData Tobii.XR.TobiiXR::_eyeTrackingDataWorld
	TobiiXR_EyeTrackingData_t77A57D23997EA5B3B365ABDD60221EFB27BD72EA * ____eyeTrackingDataWorld_3;
	// Tobii.XR.TobiiXRAdvanced Tobii.XR.TobiiXR::_advanced
	TobiiXRAdvanced_tD89ECFBC056BC287F4A99F38CAD8804962868C74 * ____advanced_4;

public:
	inline static int32_t get_offset_of__internal_0() { return static_cast<int32_t>(offsetof(TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_StaticFields, ____internal_0)); }
	inline TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD * get__internal_0() const { return ____internal_0; }
	inline TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD ** get_address_of__internal_0() { return &____internal_0; }
	inline void set__internal_0(TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD * value)
	{
		____internal_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____internal_0), (void*)value);
	}

	inline static int32_t get_offset_of__updaterGameObject_1() { return static_cast<int32_t>(offsetof(TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_StaticFields, ____updaterGameObject_1)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__updaterGameObject_1() const { return ____updaterGameObject_1; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__updaterGameObject_1() { return &____updaterGameObject_1; }
	inline void set__updaterGameObject_1(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____updaterGameObject_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____updaterGameObject_1), (void*)value);
	}

	inline static int32_t get_offset_of__eyeTrackingDataLocal_2() { return static_cast<int32_t>(offsetof(TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_StaticFields, ____eyeTrackingDataLocal_2)); }
	inline TobiiXR_EyeTrackingData_t77A57D23997EA5B3B365ABDD60221EFB27BD72EA * get__eyeTrackingDataLocal_2() const { return ____eyeTrackingDataLocal_2; }
	inline TobiiXR_EyeTrackingData_t77A57D23997EA5B3B365ABDD60221EFB27BD72EA ** get_address_of__eyeTrackingDataLocal_2() { return &____eyeTrackingDataLocal_2; }
	inline void set__eyeTrackingDataLocal_2(TobiiXR_EyeTrackingData_t77A57D23997EA5B3B365ABDD60221EFB27BD72EA * value)
	{
		____eyeTrackingDataLocal_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____eyeTrackingDataLocal_2), (void*)value);
	}

	inline static int32_t get_offset_of__eyeTrackingDataWorld_3() { return static_cast<int32_t>(offsetof(TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_StaticFields, ____eyeTrackingDataWorld_3)); }
	inline TobiiXR_EyeTrackingData_t77A57D23997EA5B3B365ABDD60221EFB27BD72EA * get__eyeTrackingDataWorld_3() const { return ____eyeTrackingDataWorld_3; }
	inline TobiiXR_EyeTrackingData_t77A57D23997EA5B3B365ABDD60221EFB27BD72EA ** get_address_of__eyeTrackingDataWorld_3() { return &____eyeTrackingDataWorld_3; }
	inline void set__eyeTrackingDataWorld_3(TobiiXR_EyeTrackingData_t77A57D23997EA5B3B365ABDD60221EFB27BD72EA * value)
	{
		____eyeTrackingDataWorld_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____eyeTrackingDataWorld_3), (void*)value);
	}

	inline static int32_t get_offset_of__advanced_4() { return static_cast<int32_t>(offsetof(TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_StaticFields, ____advanced_4)); }
	inline TobiiXRAdvanced_tD89ECFBC056BC287F4A99F38CAD8804962868C74 * get__advanced_4() const { return ____advanced_4; }
	inline TobiiXRAdvanced_tD89ECFBC056BC287F4A99F38CAD8804962868C74 ** get_address_of__advanced_4() { return &____advanced_4; }
	inline void set__advanced_4(TobiiXRAdvanced_tD89ECFBC056BC287F4A99F38CAD8804962868C74 * value)
	{
		____advanced_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____advanced_4), (void*)value);
	}
};


// Tobii.XR.TobiiXRAdvanced
struct TobiiXRAdvanced_tD89ECFBC056BC287F4A99F38CAD8804962868C74  : public RuntimeObject
{
public:
	// Tobii.XR.TobiiProvider Tobii.XR.TobiiXRAdvanced::_provider
	TobiiProvider_tD45A100799E1CF76E55DBE531F3B1D064727C6AB * ____provider_0;

public:
	inline static int32_t get_offset_of__provider_0() { return static_cast<int32_t>(offsetof(TobiiXRAdvanced_tD89ECFBC056BC287F4A99F38CAD8804962868C74, ____provider_0)); }
	inline TobiiProvider_tD45A100799E1CF76E55DBE531F3B1D064727C6AB * get__provider_0() const { return ____provider_0; }
	inline TobiiProvider_tD45A100799E1CF76E55DBE531F3B1D064727C6AB ** get_address_of__provider_0() { return &____provider_0; }
	inline void set__provider_0(TobiiProvider_tD45A100799E1CF76E55DBE531F3B1D064727C6AB * value)
	{
		____provider_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____provider_0), (void*)value);
	}
};


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// Tobii.XR.Internal.AssemblyUtils/<>c
struct U3CU3Ec_tBC16F7556FA087545272E36FD9D2790DE039B327  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tBC16F7556FA087545272E36FD9D2790DE039B327_StaticFields
{
public:
	// Tobii.XR.Internal.AssemblyUtils/<>c Tobii.XR.Internal.AssemblyUtils/<>c::<>9
	U3CU3Ec_tBC16F7556FA087545272E36FD9D2790DE039B327 * ___U3CU3E9_0;
	// System.Func`2<System.Reflection.Assembly,System.Collections.Generic.IEnumerable`1<System.Type>> Tobii.XR.Internal.AssemblyUtils/<>c::<>9__1_0
	Func_2_tE0DBF080012BEFCAB3A265240B5CD35BD3519412 * ___U3CU3E9__1_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tBC16F7556FA087545272E36FD9D2790DE039B327_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tBC16F7556FA087545272E36FD9D2790DE039B327 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tBC16F7556FA087545272E36FD9D2790DE039B327 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tBC16F7556FA087545272E36FD9D2790DE039B327 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tBC16F7556FA087545272E36FD9D2790DE039B327_StaticFields, ___U3CU3E9__1_0_1)); }
	inline Func_2_tE0DBF080012BEFCAB3A265240B5CD35BD3519412 * get_U3CU3E9__1_0_1() const { return ___U3CU3E9__1_0_1; }
	inline Func_2_tE0DBF080012BEFCAB3A265240B5CD35BD3519412 ** get_address_of_U3CU3E9__1_0_1() { return &___U3CU3E9__1_0_1; }
	inline void set_U3CU3E9__1_0_1(Func_2_tE0DBF080012BEFCAB3A265240B5CD35BD3519412 * value)
	{
		___U3CU3E9__1_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__1_0_1), (void*)value);
	}
};


// Tobii.XR.Internal.AssemblyUtils/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t8AA428BBDE450BAEDAF50A6FE80DB09E6FE06571  : public RuntimeObject
{
public:
	// System.String Tobii.XR.Internal.AssemblyUtils/<>c__DisplayClass0_0::typeName
	String_t* ___typeName_0;

public:
	inline static int32_t get_offset_of_typeName_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_0_t8AA428BBDE450BAEDAF50A6FE80DB09E6FE06571, ___typeName_0)); }
	inline String_t* get_typeName_0() const { return ___typeName_0; }
	inline String_t** get_address_of_typeName_0() { return &___typeName_0; }
	inline void set_typeName_0(String_t* value)
	{
		___typeName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeName_0), (void*)value);
	}
};


// Tobii.XR.Internal.AssemblyUtils/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_tB8AFD562969053C15173A4FB08AD7412A6D911A0  : public RuntimeObject
{
public:
	// System.Type Tobii.XR.Internal.AssemblyUtils/<>c__DisplayClass1_0::type
	Type_t * ___type_0;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_tB8AFD562969053C15173A4FB08AD7412A6D911A0, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_0), (void*)value);
	}
};


// Tobii.XR.Internal.TobiiEulaFile/<>c
struct U3CU3Ec_tCDA4616F789EF10766F6EE525B2FE845C62B4EC3  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tCDA4616F789EF10766F6EE525B2FE845C62B4EC3_StaticFields
{
public:
	// Tobii.XR.Internal.TobiiEulaFile/<>c Tobii.XR.Internal.TobiiEulaFile/<>c::<>9
	U3CU3Ec_tCDA4616F789EF10766F6EE525B2FE845C62B4EC3 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCDA4616F789EF10766F6EE525B2FE845C62B4EC3_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tCDA4616F789EF10766F6EE525B2FE845C62B4EC3 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tCDA4616F789EF10766F6EE525B2FE845C62B4EC3 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tCDA4616F789EF10766F6EE525B2FE845C62B4EC3 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// Tobii.XR.TobiiXR/TobiiXRInternal
struct TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD  : public RuntimeObject
{
public:
	// Tobii.XR.TobiiXR_Settings Tobii.XR.TobiiXR/TobiiXRInternal::<Settings>k__BackingField
	TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0 * ___U3CSettingsU3Ek__BackingField_0;
	// Tobii.XR.IEyeTrackingProvider Tobii.XR.TobiiXR/TobiiXRInternal::<Provider>k__BackingField
	RuntimeObject* ___U3CProviderU3Ek__BackingField_1;
	// Tobii.G2OM.G2OM Tobii.XR.TobiiXR/TobiiXRInternal::<G2OM>k__BackingField
	G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C * ___U3CG2OMU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CSettingsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD, ___U3CSettingsU3Ek__BackingField_0)); }
	inline TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0 * get_U3CSettingsU3Ek__BackingField_0() const { return ___U3CSettingsU3Ek__BackingField_0; }
	inline TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0 ** get_address_of_U3CSettingsU3Ek__BackingField_0() { return &___U3CSettingsU3Ek__BackingField_0; }
	inline void set_U3CSettingsU3Ek__BackingField_0(TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0 * value)
	{
		___U3CSettingsU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSettingsU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CProviderU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD, ___U3CProviderU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CProviderU3Ek__BackingField_1() const { return ___U3CProviderU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CProviderU3Ek__BackingField_1() { return &___U3CProviderU3Ek__BackingField_1; }
	inline void set_U3CProviderU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CProviderU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CProviderU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CG2OMU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD, ___U3CG2OMU3Ek__BackingField_2)); }
	inline G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C * get_U3CG2OMU3Ek__BackingField_2() const { return ___U3CG2OMU3Ek__BackingField_2; }
	inline G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C ** get_address_of_U3CG2OMU3Ek__BackingField_2() { return &___U3CG2OMU3Ek__BackingField_2; }
	inline void set_U3CG2OMU3Ek__BackingField_2(G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C * value)
	{
		___U3CG2OMU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CG2OMU3Ek__BackingField_2), (void*)value);
	}
};


// Tobii.XR.Internal.TobiiXR_Lifecycle/<>c
struct U3CU3Ec_tCF809EE280FCA8E46728688925705891BCE185DB  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tCF809EE280FCA8E46728688925705891BCE185DB_StaticFields
{
public:
	// Tobii.XR.Internal.TobiiXR_Lifecycle/<>c Tobii.XR.Internal.TobiiXR_Lifecycle/<>c::<>9
	U3CU3Ec_tCF809EE280FCA8E46728688925705891BCE185DB * ___U3CU3E9_0;
	// System.Action Tobii.XR.Internal.TobiiXR_Lifecycle/<>c::<>9__7_0
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3CU3E9__7_0_1;
	// System.Action Tobii.XR.Internal.TobiiXR_Lifecycle/<>c::<>9__7_1
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3CU3E9__7_1_2;
	// System.Action Tobii.XR.Internal.TobiiXR_Lifecycle/<>c::<>9__7_2
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3CU3E9__7_2_3;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCF809EE280FCA8E46728688925705891BCE185DB_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tCF809EE280FCA8E46728688925705891BCE185DB * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tCF809EE280FCA8E46728688925705891BCE185DB ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tCF809EE280FCA8E46728688925705891BCE185DB * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__7_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCF809EE280FCA8E46728688925705891BCE185DB_StaticFields, ___U3CU3E9__7_0_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3CU3E9__7_0_1() const { return ___U3CU3E9__7_0_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3CU3E9__7_0_1() { return &___U3CU3E9__7_0_1; }
	inline void set_U3CU3E9__7_0_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3CU3E9__7_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__7_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__7_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCF809EE280FCA8E46728688925705891BCE185DB_StaticFields, ___U3CU3E9__7_1_2)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3CU3E9__7_1_2() const { return ___U3CU3E9__7_1_2; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3CU3E9__7_1_2() { return &___U3CU3E9__7_1_2; }
	inline void set_U3CU3E9__7_1_2(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3CU3E9__7_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__7_1_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__7_2_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCF809EE280FCA8E46728688925705891BCE185DB_StaticFields, ___U3CU3E9__7_2_3)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3CU3E9__7_2_3() const { return ___U3CU3E9__7_2_3; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3CU3E9__7_2_3() { return &___U3CU3E9__7_2_3; }
	inline void set_U3CU3E9__7_2_3(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3CU3E9__7_2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__7_2_3), (void*)value);
	}
};


// Tobii.XR.TobiiXR_Settings/<>c
struct U3CU3Ec_tB863BCE9690BD07ADCB7EC7104291B12AEC27562  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tB863BCE9690BD07ADCB7EC7104291B12AEC27562_StaticFields
{
public:
	// Tobii.XR.TobiiXR_Settings/<>c Tobii.XR.TobiiXR_Settings/<>c::<>9
	U3CU3Ec_tB863BCE9690BD07ADCB7EC7104291B12AEC27562 * ___U3CU3E9_0;
	// System.Func`2<Tobii.XR.TobiiXR_Settings/ProviderElement,System.Type> Tobii.XR.TobiiXR_Settings/<>c::<>9__18_0
	Func_2_tD834A382C7BC9720A3941F056FF6626757F128C1 * ___U3CU3E9__18_0_1;
	// System.Func`2<System.Type,System.Boolean> Tobii.XR.TobiiXR_Settings/<>c::<>9__18_1
	Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * ___U3CU3E9__18_1_2;
	// System.Func`2<Tobii.XR.IEyeTrackingProvider,System.Boolean> Tobii.XR.TobiiXR_Settings/<>c::<>9__18_2
	Func_2_t0D121E24665C7C6EBDEE662FD349B058C314168D * ___U3CU3E9__18_2_3;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB863BCE9690BD07ADCB7EC7104291B12AEC27562_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tB863BCE9690BD07ADCB7EC7104291B12AEC27562 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tB863BCE9690BD07ADCB7EC7104291B12AEC27562 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tB863BCE9690BD07ADCB7EC7104291B12AEC27562 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__18_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB863BCE9690BD07ADCB7EC7104291B12AEC27562_StaticFields, ___U3CU3E9__18_0_1)); }
	inline Func_2_tD834A382C7BC9720A3941F056FF6626757F128C1 * get_U3CU3E9__18_0_1() const { return ___U3CU3E9__18_0_1; }
	inline Func_2_tD834A382C7BC9720A3941F056FF6626757F128C1 ** get_address_of_U3CU3E9__18_0_1() { return &___U3CU3E9__18_0_1; }
	inline void set_U3CU3E9__18_0_1(Func_2_tD834A382C7BC9720A3941F056FF6626757F128C1 * value)
	{
		___U3CU3E9__18_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__18_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__18_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB863BCE9690BD07ADCB7EC7104291B12AEC27562_StaticFields, ___U3CU3E9__18_1_2)); }
	inline Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * get_U3CU3E9__18_1_2() const { return ___U3CU3E9__18_1_2; }
	inline Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 ** get_address_of_U3CU3E9__18_1_2() { return &___U3CU3E9__18_1_2; }
	inline void set_U3CU3E9__18_1_2(Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * value)
	{
		___U3CU3E9__18_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__18_1_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__18_2_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB863BCE9690BD07ADCB7EC7104291B12AEC27562_StaticFields, ___U3CU3E9__18_2_3)); }
	inline Func_2_t0D121E24665C7C6EBDEE662FD349B058C314168D * get_U3CU3E9__18_2_3() const { return ___U3CU3E9__18_2_3; }
	inline Func_2_t0D121E24665C7C6EBDEE662FD349B058C314168D ** get_address_of_U3CU3E9__18_2_3() { return &___U3CU3E9__18_2_3; }
	inline void set_U3CU3E9__18_2_3(Func_2_t0D121E24665C7C6EBDEE662FD349B058C314168D * value)
	{
		___U3CU3E9__18_2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__18_2_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<UnityEngine.GameObject>
struct UnityEvent_1_t1DC2DB931FE9E53AEC9A04F4DE9B4F7B469BC78E  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t1DC2DB931FE9E53AEC9A04F4DE9B4F7B469BC78E, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`2<UnityEngine.GameObject,System.Boolean>
struct UnityEvent_2_tECE314F182CE3F2DC54078795CE06100AA0F8967  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_2_tECE314F182CE3F2DC54078795CE06100AA0F8967, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`2<UnityEngine.GameObject,System.Int32>
struct UnityEvent_2_tB328963BE2F2851746B8F3A3DFDD18751B2637E5  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_2_tB328963BE2F2851746B8F3A3DFDD18751B2637E5, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// Tobii.XR.CompilerFlagAttribute
struct CompilerFlagAttribute_t723232B1FDEB871FC8C6FB74D41A3B23C5158F53  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String Tobii.XR.CompilerFlagAttribute::Flag
	String_t* ___Flag_0;

public:
	inline static int32_t get_offset_of_Flag_0() { return static_cast<int32_t>(offsetof(CompilerFlagAttribute_t723232B1FDEB871FC8C6FB74D41A3B23C5158F53, ___Flag_0)); }
	inline String_t* get_Flag_0() const { return ___Flag_0; }
	inline String_t** get_address_of_Flag_0() { return &___Flag_0; }
	inline void set_Flag_0(String_t* value)
	{
		___Flag_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Flag_0), (void*)value);
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// Tobii.G2OM.G2OM_ContextCreateOptions
struct G2OM_ContextCreateOptions_t4309561974C46E5E7EF46973F10D5149A0610724 
{
public:
	// System.UInt32 Tobii.G2OM.G2OM_ContextCreateOptions::capacity
	uint32_t ___capacity_0;
	// System.UInt32 Tobii.G2OM.G2OM_ContextCreateOptions::thread_count
	uint32_t ___thread_count_1;
	// System.String Tobii.G2OM.G2OM_ContextCreateOptions::license_content
	String_t* ___license_content_2;

public:
	inline static int32_t get_offset_of_capacity_0() { return static_cast<int32_t>(offsetof(G2OM_ContextCreateOptions_t4309561974C46E5E7EF46973F10D5149A0610724, ___capacity_0)); }
	inline uint32_t get_capacity_0() const { return ___capacity_0; }
	inline uint32_t* get_address_of_capacity_0() { return &___capacity_0; }
	inline void set_capacity_0(uint32_t value)
	{
		___capacity_0 = value;
	}

	inline static int32_t get_offset_of_thread_count_1() { return static_cast<int32_t>(offsetof(G2OM_ContextCreateOptions_t4309561974C46E5E7EF46973F10D5149A0610724, ___thread_count_1)); }
	inline uint32_t get_thread_count_1() const { return ___thread_count_1; }
	inline uint32_t* get_address_of_thread_count_1() { return &___thread_count_1; }
	inline void set_thread_count_1(uint32_t value)
	{
		___thread_count_1 = value;
	}

	inline static int32_t get_offset_of_license_content_2() { return static_cast<int32_t>(offsetof(G2OM_ContextCreateOptions_t4309561974C46E5E7EF46973F10D5149A0610724, ___license_content_2)); }
	inline String_t* get_license_content_2() const { return ___license_content_2; }
	inline String_t** get_address_of_license_content_2() { return &___license_content_2; }
	inline void set_license_content_2(String_t* value)
	{
		___license_content_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___license_content_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Tobii.G2OM.G2OM_ContextCreateOptions
struct G2OM_ContextCreateOptions_t4309561974C46E5E7EF46973F10D5149A0610724_marshaled_pinvoke
{
	uint32_t ___capacity_0;
	uint32_t ___thread_count_1;
	char* ___license_content_2;
};
// Native definition for COM marshalling of Tobii.G2OM.G2OM_ContextCreateOptions
struct G2OM_ContextCreateOptions_t4309561974C46E5E7EF46973F10D5149A0610724_marshaled_com
{
	uint32_t ___capacity_0;
	uint32_t ___thread_count_1;
	Il2CppChar* ___license_content_2;
};

// Tobii.G2OM.G2OM_Vector3
struct G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D 
{
public:
	// System.Single Tobii.G2OM.G2OM_Vector3::x
	float ___x_0;
	// System.Single Tobii.G2OM.G2OM_Vector3::y
	float ___y_1;
	// System.Single Tobii.G2OM.G2OM_Vector3::z
	float ___z_2;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.LayerMask
struct LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};


// UnityEngine.Matrix4x4
struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___identityMatrix_17 = value;
	}
};


// Tobii.XR.ProviderDisplayNameAttribute
struct ProviderDisplayNameAttribute_t009EAE95225D051706217867F249D54A91DBFB5D  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String Tobii.XR.ProviderDisplayNameAttribute::Name
	String_t* ___Name_0;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(ProviderDisplayNameAttribute_t009EAE95225D051706217867F249D54A91DBFB5D, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_0), (void*)value);
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// Tobii.XR.TobiiXR_Settings/ProviderElement
struct ProviderElement_t76AE55D58DAD3043AE5CE90FE6B06F6C474697E9 
{
public:
	// System.String Tobii.XR.TobiiXR_Settings/ProviderElement::_displayName
	String_t* ____displayName_0;
	// System.String Tobii.XR.TobiiXR_Settings/ProviderElement::TypeName
	String_t* ___TypeName_1;

public:
	inline static int32_t get_offset_of__displayName_0() { return static_cast<int32_t>(offsetof(ProviderElement_t76AE55D58DAD3043AE5CE90FE6B06F6C474697E9, ____displayName_0)); }
	inline String_t* get__displayName_0() const { return ____displayName_0; }
	inline String_t** get_address_of__displayName_0() { return &____displayName_0; }
	inline void set__displayName_0(String_t* value)
	{
		____displayName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____displayName_0), (void*)value);
	}

	inline static int32_t get_offset_of_TypeName_1() { return static_cast<int32_t>(offsetof(ProviderElement_t76AE55D58DAD3043AE5CE90FE6B06F6C474697E9, ___TypeName_1)); }
	inline String_t* get_TypeName_1() const { return ___TypeName_1; }
	inline String_t** get_address_of_TypeName_1() { return &___TypeName_1; }
	inline void set_TypeName_1(String_t* value)
	{
		___TypeName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TypeName_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Tobii.XR.TobiiXR_Settings/ProviderElement
struct ProviderElement_t76AE55D58DAD3043AE5CE90FE6B06F6C474697E9_marshaled_pinvoke
{
	char* ____displayName_0;
	char* ___TypeName_1;
};
// Native definition for COM marshalling of Tobii.XR.TobiiXR_Settings/ProviderElement
struct ProviderElement_t76AE55D58DAD3043AE5CE90FE6B06F6C474697E9_marshaled_com
{
	Il2CppChar* ____displayName_0;
	Il2CppChar* ___TypeName_1;
};

// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.AppDomain
struct AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IntPtr System.AppDomain::_mono_app_domain
	intptr_t ____mono_app_domain_1;
	// System.Object System.AppDomain::_evidence
	RuntimeObject * ____evidence_6;
	// System.Object System.AppDomain::_granted
	RuntimeObject * ____granted_7;
	// System.Int32 System.AppDomain::_principalPolicy
	int32_t ____principalPolicy_8;
	// System.AssemblyLoadEventHandler System.AppDomain::AssemblyLoad
	AssemblyLoadEventHandler_tE06B38463937F6FBCCECF4DF6519F83C1683FE0C * ___AssemblyLoad_11;
	// System.ResolveEventHandler System.AppDomain::AssemblyResolve
	ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * ___AssemblyResolve_12;
	// System.EventHandler System.AppDomain::DomainUnload
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___DomainUnload_13;
	// System.EventHandler System.AppDomain::ProcessExit
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___ProcessExit_14;
	// System.ResolveEventHandler System.AppDomain::ResourceResolve
	ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * ___ResourceResolve_15;
	// System.ResolveEventHandler System.AppDomain::TypeResolve
	ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * ___TypeResolve_16;
	// System.UnhandledExceptionEventHandler System.AppDomain::UnhandledException
	UnhandledExceptionEventHandler_t1DF125A860ED9B70F24ADFA6CB0781533A23DA64 * ___UnhandledException_17;
	// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs> System.AppDomain::FirstChanceException
	EventHandler_1_t7F26BD2270AD4531F2328FD1382278E975249DF1 * ___FirstChanceException_18;
	// System.Object System.AppDomain::_domain_manager
	RuntimeObject * ____domain_manager_19;
	// System.ResolveEventHandler System.AppDomain::ReflectionOnlyAssemblyResolve
	ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * ___ReflectionOnlyAssemblyResolve_20;
	// System.Object System.AppDomain::_activation
	RuntimeObject * ____activation_21;
	// System.Object System.AppDomain::_applicationIdentity
	RuntimeObject * ____applicationIdentity_22;
	// System.Collections.Generic.List`1<System.String> System.AppDomain::compatibility_switch
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___compatibility_switch_23;

public:
	inline static int32_t get_offset_of__mono_app_domain_1() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ____mono_app_domain_1)); }
	inline intptr_t get__mono_app_domain_1() const { return ____mono_app_domain_1; }
	inline intptr_t* get_address_of__mono_app_domain_1() { return &____mono_app_domain_1; }
	inline void set__mono_app_domain_1(intptr_t value)
	{
		____mono_app_domain_1 = value;
	}

	inline static int32_t get_offset_of__evidence_6() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ____evidence_6)); }
	inline RuntimeObject * get__evidence_6() const { return ____evidence_6; }
	inline RuntimeObject ** get_address_of__evidence_6() { return &____evidence_6; }
	inline void set__evidence_6(RuntimeObject * value)
	{
		____evidence_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____evidence_6), (void*)value);
	}

	inline static int32_t get_offset_of__granted_7() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ____granted_7)); }
	inline RuntimeObject * get__granted_7() const { return ____granted_7; }
	inline RuntimeObject ** get_address_of__granted_7() { return &____granted_7; }
	inline void set__granted_7(RuntimeObject * value)
	{
		____granted_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____granted_7), (void*)value);
	}

	inline static int32_t get_offset_of__principalPolicy_8() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ____principalPolicy_8)); }
	inline int32_t get__principalPolicy_8() const { return ____principalPolicy_8; }
	inline int32_t* get_address_of__principalPolicy_8() { return &____principalPolicy_8; }
	inline void set__principalPolicy_8(int32_t value)
	{
		____principalPolicy_8 = value;
	}

	inline static int32_t get_offset_of_AssemblyLoad_11() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___AssemblyLoad_11)); }
	inline AssemblyLoadEventHandler_tE06B38463937F6FBCCECF4DF6519F83C1683FE0C * get_AssemblyLoad_11() const { return ___AssemblyLoad_11; }
	inline AssemblyLoadEventHandler_tE06B38463937F6FBCCECF4DF6519F83C1683FE0C ** get_address_of_AssemblyLoad_11() { return &___AssemblyLoad_11; }
	inline void set_AssemblyLoad_11(AssemblyLoadEventHandler_tE06B38463937F6FBCCECF4DF6519F83C1683FE0C * value)
	{
		___AssemblyLoad_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AssemblyLoad_11), (void*)value);
	}

	inline static int32_t get_offset_of_AssemblyResolve_12() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___AssemblyResolve_12)); }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * get_AssemblyResolve_12() const { return ___AssemblyResolve_12; }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 ** get_address_of_AssemblyResolve_12() { return &___AssemblyResolve_12; }
	inline void set_AssemblyResolve_12(ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * value)
	{
		___AssemblyResolve_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AssemblyResolve_12), (void*)value);
	}

	inline static int32_t get_offset_of_DomainUnload_13() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___DomainUnload_13)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_DomainUnload_13() const { return ___DomainUnload_13; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_DomainUnload_13() { return &___DomainUnload_13; }
	inline void set_DomainUnload_13(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___DomainUnload_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DomainUnload_13), (void*)value);
	}

	inline static int32_t get_offset_of_ProcessExit_14() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___ProcessExit_14)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_ProcessExit_14() const { return ___ProcessExit_14; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_ProcessExit_14() { return &___ProcessExit_14; }
	inline void set_ProcessExit_14(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___ProcessExit_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProcessExit_14), (void*)value);
	}

	inline static int32_t get_offset_of_ResourceResolve_15() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___ResourceResolve_15)); }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * get_ResourceResolve_15() const { return ___ResourceResolve_15; }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 ** get_address_of_ResourceResolve_15() { return &___ResourceResolve_15; }
	inline void set_ResourceResolve_15(ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * value)
	{
		___ResourceResolve_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ResourceResolve_15), (void*)value);
	}

	inline static int32_t get_offset_of_TypeResolve_16() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___TypeResolve_16)); }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * get_TypeResolve_16() const { return ___TypeResolve_16; }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 ** get_address_of_TypeResolve_16() { return &___TypeResolve_16; }
	inline void set_TypeResolve_16(ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * value)
	{
		___TypeResolve_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TypeResolve_16), (void*)value);
	}

	inline static int32_t get_offset_of_UnhandledException_17() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___UnhandledException_17)); }
	inline UnhandledExceptionEventHandler_t1DF125A860ED9B70F24ADFA6CB0781533A23DA64 * get_UnhandledException_17() const { return ___UnhandledException_17; }
	inline UnhandledExceptionEventHandler_t1DF125A860ED9B70F24ADFA6CB0781533A23DA64 ** get_address_of_UnhandledException_17() { return &___UnhandledException_17; }
	inline void set_UnhandledException_17(UnhandledExceptionEventHandler_t1DF125A860ED9B70F24ADFA6CB0781533A23DA64 * value)
	{
		___UnhandledException_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UnhandledException_17), (void*)value);
	}

	inline static int32_t get_offset_of_FirstChanceException_18() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___FirstChanceException_18)); }
	inline EventHandler_1_t7F26BD2270AD4531F2328FD1382278E975249DF1 * get_FirstChanceException_18() const { return ___FirstChanceException_18; }
	inline EventHandler_1_t7F26BD2270AD4531F2328FD1382278E975249DF1 ** get_address_of_FirstChanceException_18() { return &___FirstChanceException_18; }
	inline void set_FirstChanceException_18(EventHandler_1_t7F26BD2270AD4531F2328FD1382278E975249DF1 * value)
	{
		___FirstChanceException_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FirstChanceException_18), (void*)value);
	}

	inline static int32_t get_offset_of__domain_manager_19() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ____domain_manager_19)); }
	inline RuntimeObject * get__domain_manager_19() const { return ____domain_manager_19; }
	inline RuntimeObject ** get_address_of__domain_manager_19() { return &____domain_manager_19; }
	inline void set__domain_manager_19(RuntimeObject * value)
	{
		____domain_manager_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____domain_manager_19), (void*)value);
	}

	inline static int32_t get_offset_of_ReflectionOnlyAssemblyResolve_20() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___ReflectionOnlyAssemblyResolve_20)); }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * get_ReflectionOnlyAssemblyResolve_20() const { return ___ReflectionOnlyAssemblyResolve_20; }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 ** get_address_of_ReflectionOnlyAssemblyResolve_20() { return &___ReflectionOnlyAssemblyResolve_20; }
	inline void set_ReflectionOnlyAssemblyResolve_20(ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * value)
	{
		___ReflectionOnlyAssemblyResolve_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReflectionOnlyAssemblyResolve_20), (void*)value);
	}

	inline static int32_t get_offset_of__activation_21() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ____activation_21)); }
	inline RuntimeObject * get__activation_21() const { return ____activation_21; }
	inline RuntimeObject ** get_address_of__activation_21() { return &____activation_21; }
	inline void set__activation_21(RuntimeObject * value)
	{
		____activation_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activation_21), (void*)value);
	}

	inline static int32_t get_offset_of__applicationIdentity_22() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ____applicationIdentity_22)); }
	inline RuntimeObject * get__applicationIdentity_22() const { return ____applicationIdentity_22; }
	inline RuntimeObject ** get_address_of__applicationIdentity_22() { return &____applicationIdentity_22; }
	inline void set__applicationIdentity_22(RuntimeObject * value)
	{
		____applicationIdentity_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____applicationIdentity_22), (void*)value);
	}

	inline static int32_t get_offset_of_compatibility_switch_23() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___compatibility_switch_23)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_compatibility_switch_23() const { return ___compatibility_switch_23; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_compatibility_switch_23() { return &___compatibility_switch_23; }
	inline void set_compatibility_switch_23(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___compatibility_switch_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compatibility_switch_23), (void*)value);
	}
};

struct AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_StaticFields
{
public:
	// System.String System.AppDomain::_process_guid
	String_t* ____process_guid_2;
	// System.AppDomain System.AppDomain::default_domain
	AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A * ___default_domain_10;

public:
	inline static int32_t get_offset_of__process_guid_2() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_StaticFields, ____process_guid_2)); }
	inline String_t* get__process_guid_2() const { return ____process_guid_2; }
	inline String_t** get_address_of__process_guid_2() { return &____process_guid_2; }
	inline void set__process_guid_2(String_t* value)
	{
		____process_guid_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____process_guid_2), (void*)value);
	}

	inline static int32_t get_offset_of_default_domain_10() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_StaticFields, ___default_domain_10)); }
	inline AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A * get_default_domain_10() const { return ___default_domain_10; }
	inline AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A ** get_address_of_default_domain_10() { return &___default_domain_10; }
	inline void set_default_domain_10(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A * value)
	{
		___default_domain_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_domain_10), (void*)value);
	}
};

struct AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_ThreadStaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::type_resolve_in_progress
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___type_resolve_in_progress_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___assembly_resolve_in_progress_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress_refonly
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___assembly_resolve_in_progress_refonly_5;
	// System.Object System.AppDomain::_principal
	RuntimeObject * ____principal_9;

public:
	inline static int32_t get_offset_of_type_resolve_in_progress_3() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_ThreadStaticFields, ___type_resolve_in_progress_3)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_type_resolve_in_progress_3() const { return ___type_resolve_in_progress_3; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_type_resolve_in_progress_3() { return &___type_resolve_in_progress_3; }
	inline void set_type_resolve_in_progress_3(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___type_resolve_in_progress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_resolve_in_progress_3), (void*)value);
	}

	inline static int32_t get_offset_of_assembly_resolve_in_progress_4() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_ThreadStaticFields, ___assembly_resolve_in_progress_4)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_assembly_resolve_in_progress_4() const { return ___assembly_resolve_in_progress_4; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_assembly_resolve_in_progress_4() { return &___assembly_resolve_in_progress_4; }
	inline void set_assembly_resolve_in_progress_4(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___assembly_resolve_in_progress_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assembly_resolve_in_progress_4), (void*)value);
	}

	inline static int32_t get_offset_of_assembly_resolve_in_progress_refonly_5() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_ThreadStaticFields, ___assembly_resolve_in_progress_refonly_5)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_assembly_resolve_in_progress_refonly_5() const { return ___assembly_resolve_in_progress_refonly_5; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_assembly_resolve_in_progress_refonly_5() { return &___assembly_resolve_in_progress_refonly_5; }
	inline void set_assembly_resolve_in_progress_refonly_5(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___assembly_resolve_in_progress_refonly_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assembly_resolve_in_progress_refonly_5), (void*)value);
	}

	inline static int32_t get_offset_of__principal_9() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_ThreadStaticFields, ____principal_9)); }
	inline RuntimeObject * get__principal_9() const { return ____principal_9; }
	inline RuntimeObject ** get_address_of__principal_9() { return &____principal_9; }
	inline void set__principal_9(RuntimeObject * value)
	{
		____principal_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____principal_9), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.AppDomain
struct AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_marshaled_pinvoke : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_11;
	Il2CppMethodPointer ___AssemblyResolve_12;
	Il2CppMethodPointer ___DomainUnload_13;
	Il2CppMethodPointer ___ProcessExit_14;
	Il2CppMethodPointer ___ResourceResolve_15;
	Il2CppMethodPointer ___TypeResolve_16;
	Il2CppMethodPointer ___UnhandledException_17;
	Il2CppMethodPointer ___FirstChanceException_18;
	Il2CppIUnknown* ____domain_manager_19;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_20;
	Il2CppIUnknown* ____activation_21;
	Il2CppIUnknown* ____applicationIdentity_22;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___compatibility_switch_23;
};
// Native definition for COM marshalling of System.AppDomain
struct AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_marshaled_com : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_11;
	Il2CppMethodPointer ___AssemblyResolve_12;
	Il2CppMethodPointer ___DomainUnload_13;
	Il2CppMethodPointer ___ProcessExit_14;
	Il2CppMethodPointer ___ResourceResolve_15;
	Il2CppMethodPointer ___TypeResolve_16;
	Il2CppMethodPointer ___UnhandledException_17;
	Il2CppMethodPointer ___FirstChanceException_18;
	Il2CppIUnknown* ____domain_manager_19;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_20;
	Il2CppIUnknown* ____activation_21;
	Il2CppIUnknown* ____applicationIdentity_22;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___compatibility_switch_23;
};

// System.Reflection.Assembly
struct Assembly_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Assembly::_mono_assembly
	intptr_t ____mono_assembly_0;
	// System.Reflection.Assembly/ResolveEventHolder System.Reflection.Assembly::resolve_event_holder
	ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * ___resolve_event_holder_1;
	// System.Object System.Reflection.Assembly::_evidence
	RuntimeObject * ____evidence_2;
	// System.Object System.Reflection.Assembly::_minimum
	RuntimeObject * ____minimum_3;
	// System.Object System.Reflection.Assembly::_optional
	RuntimeObject * ____optional_4;
	// System.Object System.Reflection.Assembly::_refuse
	RuntimeObject * ____refuse_5;
	// System.Object System.Reflection.Assembly::_granted
	RuntimeObject * ____granted_6;
	// System.Object System.Reflection.Assembly::_denied
	RuntimeObject * ____denied_7;
	// System.Boolean System.Reflection.Assembly::fromByteArray
	bool ___fromByteArray_8;
	// System.String System.Reflection.Assembly::assemblyName
	String_t* ___assemblyName_9;

public:
	inline static int32_t get_offset_of__mono_assembly_0() { return static_cast<int32_t>(offsetof(Assembly_t, ____mono_assembly_0)); }
	inline intptr_t get__mono_assembly_0() const { return ____mono_assembly_0; }
	inline intptr_t* get_address_of__mono_assembly_0() { return &____mono_assembly_0; }
	inline void set__mono_assembly_0(intptr_t value)
	{
		____mono_assembly_0 = value;
	}

	inline static int32_t get_offset_of_resolve_event_holder_1() { return static_cast<int32_t>(offsetof(Assembly_t, ___resolve_event_holder_1)); }
	inline ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * get_resolve_event_holder_1() const { return ___resolve_event_holder_1; }
	inline ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C ** get_address_of_resolve_event_holder_1() { return &___resolve_event_holder_1; }
	inline void set_resolve_event_holder_1(ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * value)
	{
		___resolve_event_holder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resolve_event_holder_1), (void*)value);
	}

	inline static int32_t get_offset_of__evidence_2() { return static_cast<int32_t>(offsetof(Assembly_t, ____evidence_2)); }
	inline RuntimeObject * get__evidence_2() const { return ____evidence_2; }
	inline RuntimeObject ** get_address_of__evidence_2() { return &____evidence_2; }
	inline void set__evidence_2(RuntimeObject * value)
	{
		____evidence_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____evidence_2), (void*)value);
	}

	inline static int32_t get_offset_of__minimum_3() { return static_cast<int32_t>(offsetof(Assembly_t, ____minimum_3)); }
	inline RuntimeObject * get__minimum_3() const { return ____minimum_3; }
	inline RuntimeObject ** get_address_of__minimum_3() { return &____minimum_3; }
	inline void set__minimum_3(RuntimeObject * value)
	{
		____minimum_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____minimum_3), (void*)value);
	}

	inline static int32_t get_offset_of__optional_4() { return static_cast<int32_t>(offsetof(Assembly_t, ____optional_4)); }
	inline RuntimeObject * get__optional_4() const { return ____optional_4; }
	inline RuntimeObject ** get_address_of__optional_4() { return &____optional_4; }
	inline void set__optional_4(RuntimeObject * value)
	{
		____optional_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____optional_4), (void*)value);
	}

	inline static int32_t get_offset_of__refuse_5() { return static_cast<int32_t>(offsetof(Assembly_t, ____refuse_5)); }
	inline RuntimeObject * get__refuse_5() const { return ____refuse_5; }
	inline RuntimeObject ** get_address_of__refuse_5() { return &____refuse_5; }
	inline void set__refuse_5(RuntimeObject * value)
	{
		____refuse_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____refuse_5), (void*)value);
	}

	inline static int32_t get_offset_of__granted_6() { return static_cast<int32_t>(offsetof(Assembly_t, ____granted_6)); }
	inline RuntimeObject * get__granted_6() const { return ____granted_6; }
	inline RuntimeObject ** get_address_of__granted_6() { return &____granted_6; }
	inline void set__granted_6(RuntimeObject * value)
	{
		____granted_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____granted_6), (void*)value);
	}

	inline static int32_t get_offset_of__denied_7() { return static_cast<int32_t>(offsetof(Assembly_t, ____denied_7)); }
	inline RuntimeObject * get__denied_7() const { return ____denied_7; }
	inline RuntimeObject ** get_address_of__denied_7() { return &____denied_7; }
	inline void set__denied_7(RuntimeObject * value)
	{
		____denied_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____denied_7), (void*)value);
	}

	inline static int32_t get_offset_of_fromByteArray_8() { return static_cast<int32_t>(offsetof(Assembly_t, ___fromByteArray_8)); }
	inline bool get_fromByteArray_8() const { return ___fromByteArray_8; }
	inline bool* get_address_of_fromByteArray_8() { return &___fromByteArray_8; }
	inline void set_fromByteArray_8(bool value)
	{
		___fromByteArray_8 = value;
	}

	inline static int32_t get_offset_of_assemblyName_9() { return static_cast<int32_t>(offsetof(Assembly_t, ___assemblyName_9)); }
	inline String_t* get_assemblyName_9() const { return ___assemblyName_9; }
	inline String_t** get_address_of_assemblyName_9() { return &___assemblyName_9; }
	inline void set_assemblyName_9(String_t* value)
	{
		___assemblyName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assemblyName_9), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * ___resolve_event_holder_1;
	Il2CppIUnknown* ____evidence_2;
	Il2CppIUnknown* ____minimum_3;
	Il2CppIUnknown* ____optional_4;
	Il2CppIUnknown* ____refuse_5;
	Il2CppIUnknown* ____granted_6;
	Il2CppIUnknown* ____denied_7;
	int32_t ___fromByteArray_8;
	char* ___assemblyName_9;
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * ___resolve_event_holder_1;
	Il2CppIUnknown* ____evidence_2;
	Il2CppIUnknown* ____minimum_3;
	Il2CppIUnknown* ____optional_4;
	Il2CppIUnknown* ____refuse_5;
	Il2CppIUnknown* ____granted_6;
	Il2CppIUnknown* ____denied_7;
	int32_t ___fromByteArray_8;
	Il2CppChar* ___assemblyName_9;
};

// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Tobii.XR.ButtonState
struct ButtonState_tFD61877FA3EC79C799968D5E099932F8D1017682 
{
public:
	// System.Int32 Tobii.XR.ButtonState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ButtonState_tFD61877FA3EC79C799968D5E099932F8D1017682, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Tobii.XR.ControllerButton
struct ControllerButton_t5C4D42B462520BDCA9879F546F67EAAA6BEEC55F 
{
public:
	// System.Int32 Tobii.XR.ControllerButton::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ControllerButton_t5C4D42B462520BDCA9879F546F67EAAA6BEEC55F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// Tobii.G2OM.G2OM_Description
struct G2OM_Description_tDDC3E7F8747B6FC42E6B44F4302D67374D28F2DB  : public RuntimeObject
{
public:
	// System.Single Tobii.G2OM.G2OM_Description::HowLongToKeepCandidatesInSeconds
	float ___HowLongToKeepCandidatesInSeconds_0;
	// UnityEngine.LayerMask Tobii.G2OM.G2OM_Description::LayerMask
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___LayerMask_1;
	// Tobii.G2OM.IG2OM_ObjectFinder Tobii.G2OM.G2OM_Description::ObjectFinder
	RuntimeObject* ___ObjectFinder_2;
	// Tobii.G2OM.IG2OM_ColliderDataProvider Tobii.G2OM.G2OM_Description::ColliderDataProvider
	RuntimeObject* ___ColliderDataProvider_3;
	// Tobii.G2OM.IG2OM_ObjectDistinguisher Tobii.G2OM.G2OM_Description::Distinguisher
	RuntimeObject* ___Distinguisher_4;
	// Tobii.G2OM.IG2OM_PostTicker Tobii.G2OM.G2OM_Description::PostTicker
	RuntimeObject* ___PostTicker_5;
	// Tobii.G2OM.IG2OM_Context Tobii.G2OM.G2OM_Description::Context
	RuntimeObject* ___Context_6;
	// Tobii.G2OM.G2OM_ContextCreateOptions Tobii.G2OM.G2OM_Description::Options
	G2OM_ContextCreateOptions_t4309561974C46E5E7EF46973F10D5149A0610724  ___Options_7;

public:
	inline static int32_t get_offset_of_HowLongToKeepCandidatesInSeconds_0() { return static_cast<int32_t>(offsetof(G2OM_Description_tDDC3E7F8747B6FC42E6B44F4302D67374D28F2DB, ___HowLongToKeepCandidatesInSeconds_0)); }
	inline float get_HowLongToKeepCandidatesInSeconds_0() const { return ___HowLongToKeepCandidatesInSeconds_0; }
	inline float* get_address_of_HowLongToKeepCandidatesInSeconds_0() { return &___HowLongToKeepCandidatesInSeconds_0; }
	inline void set_HowLongToKeepCandidatesInSeconds_0(float value)
	{
		___HowLongToKeepCandidatesInSeconds_0 = value;
	}

	inline static int32_t get_offset_of_LayerMask_1() { return static_cast<int32_t>(offsetof(G2OM_Description_tDDC3E7F8747B6FC42E6B44F4302D67374D28F2DB, ___LayerMask_1)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_LayerMask_1() const { return ___LayerMask_1; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_LayerMask_1() { return &___LayerMask_1; }
	inline void set_LayerMask_1(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___LayerMask_1 = value;
	}

	inline static int32_t get_offset_of_ObjectFinder_2() { return static_cast<int32_t>(offsetof(G2OM_Description_tDDC3E7F8747B6FC42E6B44F4302D67374D28F2DB, ___ObjectFinder_2)); }
	inline RuntimeObject* get_ObjectFinder_2() const { return ___ObjectFinder_2; }
	inline RuntimeObject** get_address_of_ObjectFinder_2() { return &___ObjectFinder_2; }
	inline void set_ObjectFinder_2(RuntimeObject* value)
	{
		___ObjectFinder_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ObjectFinder_2), (void*)value);
	}

	inline static int32_t get_offset_of_ColliderDataProvider_3() { return static_cast<int32_t>(offsetof(G2OM_Description_tDDC3E7F8747B6FC42E6B44F4302D67374D28F2DB, ___ColliderDataProvider_3)); }
	inline RuntimeObject* get_ColliderDataProvider_3() const { return ___ColliderDataProvider_3; }
	inline RuntimeObject** get_address_of_ColliderDataProvider_3() { return &___ColliderDataProvider_3; }
	inline void set_ColliderDataProvider_3(RuntimeObject* value)
	{
		___ColliderDataProvider_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ColliderDataProvider_3), (void*)value);
	}

	inline static int32_t get_offset_of_Distinguisher_4() { return static_cast<int32_t>(offsetof(G2OM_Description_tDDC3E7F8747B6FC42E6B44F4302D67374D28F2DB, ___Distinguisher_4)); }
	inline RuntimeObject* get_Distinguisher_4() const { return ___Distinguisher_4; }
	inline RuntimeObject** get_address_of_Distinguisher_4() { return &___Distinguisher_4; }
	inline void set_Distinguisher_4(RuntimeObject* value)
	{
		___Distinguisher_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Distinguisher_4), (void*)value);
	}

	inline static int32_t get_offset_of_PostTicker_5() { return static_cast<int32_t>(offsetof(G2OM_Description_tDDC3E7F8747B6FC42E6B44F4302D67374D28F2DB, ___PostTicker_5)); }
	inline RuntimeObject* get_PostTicker_5() const { return ___PostTicker_5; }
	inline RuntimeObject** get_address_of_PostTicker_5() { return &___PostTicker_5; }
	inline void set_PostTicker_5(RuntimeObject* value)
	{
		___PostTicker_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PostTicker_5), (void*)value);
	}

	inline static int32_t get_offset_of_Context_6() { return static_cast<int32_t>(offsetof(G2OM_Description_tDDC3E7F8747B6FC42E6B44F4302D67374D28F2DB, ___Context_6)); }
	inline RuntimeObject* get_Context_6() const { return ___Context_6; }
	inline RuntimeObject** get_address_of_Context_6() { return &___Context_6; }
	inline void set_Context_6(RuntimeObject* value)
	{
		___Context_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Context_6), (void*)value);
	}

	inline static int32_t get_offset_of_Options_7() { return static_cast<int32_t>(offsetof(G2OM_Description_tDDC3E7F8747B6FC42E6B44F4302D67374D28F2DB, ___Options_7)); }
	inline G2OM_ContextCreateOptions_t4309561974C46E5E7EF46973F10D5149A0610724  get_Options_7() const { return ___Options_7; }
	inline G2OM_ContextCreateOptions_t4309561974C46E5E7EF46973F10D5149A0610724 * get_address_of_Options_7() { return &___Options_7; }
	inline void set_Options_7(G2OM_ContextCreateOptions_t4309561974C46E5E7EF46973F10D5149A0610724  value)
	{
		___Options_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Options_7))->___license_content_2), (void*)NULL);
	}
};


// Tobii.G2OM.G2OM_Ray
struct G2OM_Ray_t5B49A5A55B51DA9DF39338656E6841A0BD844FB9 
{
public:
	// Tobii.G2OM.G2OM_Vector3 Tobii.G2OM.G2OM_Ray::origin
	G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D  ___origin_0;
	// Tobii.G2OM.G2OM_Vector3 Tobii.G2OM.G2OM_Ray::direction
	G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D  ___direction_1;

public:
	inline static int32_t get_offset_of_origin_0() { return static_cast<int32_t>(offsetof(G2OM_Ray_t5B49A5A55B51DA9DF39338656E6841A0BD844FB9, ___origin_0)); }
	inline G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D  get_origin_0() const { return ___origin_0; }
	inline G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D * get_address_of_origin_0() { return &___origin_0; }
	inline void set_origin_0(G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D  value)
	{
		___origin_0 = value;
	}

	inline static int32_t get_offset_of_direction_1() { return static_cast<int32_t>(offsetof(G2OM_Ray_t5B49A5A55B51DA9DF39338656E6841A0BD844FB9, ___direction_1)); }
	inline G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D  get_direction_1() const { return ___direction_1; }
	inline G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D * get_address_of_direction_1() { return &___direction_1; }
	inline void set_direction_1(G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D  value)
	{
		___direction_1 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Tobii.XR.PositionGuideData
struct PositionGuideData_tAFD909BA7528B47C41CB58FF0878F13D9E410412 
{
public:
	// UnityEngine.Vector2 Tobii.XR.PositionGuideData::Left
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___Left_0;
	// System.Boolean Tobii.XR.PositionGuideData::LeftIsValid
	bool ___LeftIsValid_1;
	// UnityEngine.Vector2 Tobii.XR.PositionGuideData::Right
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___Right_2;
	// System.Boolean Tobii.XR.PositionGuideData::RightIsValid
	bool ___RightIsValid_3;

public:
	inline static int32_t get_offset_of_Left_0() { return static_cast<int32_t>(offsetof(PositionGuideData_tAFD909BA7528B47C41CB58FF0878F13D9E410412, ___Left_0)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_Left_0() const { return ___Left_0; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_Left_0() { return &___Left_0; }
	inline void set_Left_0(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___Left_0 = value;
	}

	inline static int32_t get_offset_of_LeftIsValid_1() { return static_cast<int32_t>(offsetof(PositionGuideData_tAFD909BA7528B47C41CB58FF0878F13D9E410412, ___LeftIsValid_1)); }
	inline bool get_LeftIsValid_1() const { return ___LeftIsValid_1; }
	inline bool* get_address_of_LeftIsValid_1() { return &___LeftIsValid_1; }
	inline void set_LeftIsValid_1(bool value)
	{
		___LeftIsValid_1 = value;
	}

	inline static int32_t get_offset_of_Right_2() { return static_cast<int32_t>(offsetof(PositionGuideData_tAFD909BA7528B47C41CB58FF0878F13D9E410412, ___Right_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_Right_2() const { return ___Right_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_Right_2() { return &___Right_2; }
	inline void set_Right_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___Right_2 = value;
	}

	inline static int32_t get_offset_of_RightIsValid_3() { return static_cast<int32_t>(offsetof(PositionGuideData_tAFD909BA7528B47C41CB58FF0878F13D9E410412, ___RightIsValid_3)); }
	inline bool get_RightIsValid_3() const { return ___RightIsValid_3; }
	inline bool* get_address_of_RightIsValid_3() { return &___RightIsValid_3; }
	inline void set_RightIsValid_3(bool value)
	{
		___RightIsValid_3 = value;
	}
};

// Native definition for P/Invoke marshalling of Tobii.XR.PositionGuideData
struct PositionGuideData_tAFD909BA7528B47C41CB58FF0878F13D9E410412_marshaled_pinvoke
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___Left_0;
	int32_t ___LeftIsValid_1;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___Right_2;
	int32_t ___RightIsValid_3;
};
// Native definition for COM marshalling of Tobii.XR.PositionGuideData
struct PositionGuideData_tAFD909BA7528B47C41CB58FF0878F13D9E410412_marshaled_com
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___Left_0;
	int32_t ___LeftIsValid_1;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___Right_2;
	int32_t ___RightIsValid_3;
};

// UnityEngine.RuntimePlatform
struct RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// Tobii.XR.TobiiXR_GazeRay
struct TobiiXR_GazeRay_t0A6DF5B77C70D0342D4C3DBCF5936AAAA9107D32 
{
public:
	// UnityEngine.Vector3 Tobii.XR.TobiiXR_GazeRay::Direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Direction_0;
	// System.Boolean Tobii.XR.TobiiXR_GazeRay::IsValid
	bool ___IsValid_1;
	// UnityEngine.Vector3 Tobii.XR.TobiiXR_GazeRay::Origin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Origin_2;

public:
	inline static int32_t get_offset_of_Direction_0() { return static_cast<int32_t>(offsetof(TobiiXR_GazeRay_t0A6DF5B77C70D0342D4C3DBCF5936AAAA9107D32, ___Direction_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_Direction_0() const { return ___Direction_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_Direction_0() { return &___Direction_0; }
	inline void set_Direction_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___Direction_0 = value;
	}

	inline static int32_t get_offset_of_IsValid_1() { return static_cast<int32_t>(offsetof(TobiiXR_GazeRay_t0A6DF5B77C70D0342D4C3DBCF5936AAAA9107D32, ___IsValid_1)); }
	inline bool get_IsValid_1() const { return ___IsValid_1; }
	inline bool* get_address_of_IsValid_1() { return &___IsValid_1; }
	inline void set_IsValid_1(bool value)
	{
		___IsValid_1 = value;
	}

	inline static int32_t get_offset_of_Origin_2() { return static_cast<int32_t>(offsetof(TobiiXR_GazeRay_t0A6DF5B77C70D0342D4C3DBCF5936AAAA9107D32, ___Origin_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_Origin_2() const { return ___Origin_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_Origin_2() { return &___Origin_2; }
	inline void set_Origin_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___Origin_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Tobii.XR.TobiiXR_GazeRay
struct TobiiXR_GazeRay_t0A6DF5B77C70D0342D4C3DBCF5936AAAA9107D32_marshaled_pinvoke
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Direction_0;
	int32_t ___IsValid_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Origin_2;
};
// Native definition for COM marshalling of Tobii.XR.TobiiXR_GazeRay
struct TobiiXR_GazeRay_t0A6DF5B77C70D0342D4C3DBCF5936AAAA9107D32_marshaled_com
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Direction_0;
	int32_t ___IsValid_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Origin_2;
};

// Tobii.XR.TobiiXR_TrackingSpace
struct TobiiXR_TrackingSpace_tA891CDDE8FE1FA340B247836C82693CF4AE93098 
{
public:
	// System.Int32 Tobii.XR.TobiiXR_TrackingSpace::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TobiiXR_TrackingSpace_tA891CDDE8FE1FA340B247836C82693CF4AE93098, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Tobii.XR.UIButtonEvent
struct UIButtonEvent_t6ACDD055C471804447D38E6EA0D042A57A243B1A  : public UnityEvent_1_t1DC2DB931FE9E53AEC9A04F4DE9B4F7B469BC78E
{
public:

public:
};


// Tobii.XR.UISliderEvent
struct UISliderEvent_t36D445D0583DF9594EF697A1EE85A07EE10DA88D  : public UnityEvent_2_tB328963BE2F2851746B8F3A3DFDD18751B2637E5
{
public:

public:
};


// Tobii.XR.UIToggleEvent
struct UIToggleEvent_t3025F2607AD11E28D3936621C944D224B4FCF15B  : public UnityEvent_2_tECE314F182CE3F2DC54078795CE06100AA0F8967
{
public:

public:
};


// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Tobii.XR.UIGazeSliderGraphics/<AnimateHandle>d__33
struct U3CAnimateHandleU3Ed__33_t25309B59592FBF6C583EA1A1A89E51814130219F  : public RuntimeObject
{
public:
	// System.Int32 Tobii.XR.UIGazeSliderGraphics/<AnimateHandle>d__33::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Tobii.XR.UIGazeSliderGraphics/<AnimateHandle>d__33::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Tobii.XR.UIGazeSliderGraphics Tobii.XR.UIGazeSliderGraphics/<AnimateHandle>d__33::<>4__this
	UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * ___U3CU3E4__this_2;
	// System.Boolean Tobii.XR.UIGazeSliderGraphics/<AnimateHandle>d__33::hasFocus
	bool ___hasFocus_3;
	// UnityEngine.Color Tobii.XR.UIGazeSliderGraphics/<AnimateHandle>d__33::<startHandleColor>5__2
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CstartHandleColorU3E5__2_4;
	// UnityEngine.Vector3 Tobii.XR.UIGazeSliderGraphics/<AnimateHandle>d__33::<startHandleScale>5__3
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CstartHandleScaleU3E5__3_5;
	// UnityEngine.Color Tobii.XR.UIGazeSliderGraphics/<AnimateHandle>d__33::<endHandleColor>5__4
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CendHandleColorU3E5__4_6;
	// UnityEngine.Vector3 Tobii.XR.UIGazeSliderGraphics/<AnimateHandle>d__33::<endHandleScale>5__5
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CendHandleScaleU3E5__5_7;
	// System.Single Tobii.XR.UIGazeSliderGraphics/<AnimateHandle>d__33::<progress>5__6
	float ___U3CprogressU3E5__6_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAnimateHandleU3Ed__33_t25309B59592FBF6C583EA1A1A89E51814130219F, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAnimateHandleU3Ed__33_t25309B59592FBF6C583EA1A1A89E51814130219F, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CAnimateHandleU3Ed__33_t25309B59592FBF6C583EA1A1A89E51814130219F, ___U3CU3E4__this_2)); }
	inline UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_hasFocus_3() { return static_cast<int32_t>(offsetof(U3CAnimateHandleU3Ed__33_t25309B59592FBF6C583EA1A1A89E51814130219F, ___hasFocus_3)); }
	inline bool get_hasFocus_3() const { return ___hasFocus_3; }
	inline bool* get_address_of_hasFocus_3() { return &___hasFocus_3; }
	inline void set_hasFocus_3(bool value)
	{
		___hasFocus_3 = value;
	}

	inline static int32_t get_offset_of_U3CstartHandleColorU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CAnimateHandleU3Ed__33_t25309B59592FBF6C583EA1A1A89E51814130219F, ___U3CstartHandleColorU3E5__2_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CstartHandleColorU3E5__2_4() const { return ___U3CstartHandleColorU3E5__2_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CstartHandleColorU3E5__2_4() { return &___U3CstartHandleColorU3E5__2_4; }
	inline void set_U3CstartHandleColorU3E5__2_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CstartHandleColorU3E5__2_4 = value;
	}

	inline static int32_t get_offset_of_U3CstartHandleScaleU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CAnimateHandleU3Ed__33_t25309B59592FBF6C583EA1A1A89E51814130219F, ___U3CstartHandleScaleU3E5__3_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CstartHandleScaleU3E5__3_5() const { return ___U3CstartHandleScaleU3E5__3_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CstartHandleScaleU3E5__3_5() { return &___U3CstartHandleScaleU3E5__3_5; }
	inline void set_U3CstartHandleScaleU3E5__3_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CstartHandleScaleU3E5__3_5 = value;
	}

	inline static int32_t get_offset_of_U3CendHandleColorU3E5__4_6() { return static_cast<int32_t>(offsetof(U3CAnimateHandleU3Ed__33_t25309B59592FBF6C583EA1A1A89E51814130219F, ___U3CendHandleColorU3E5__4_6)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CendHandleColorU3E5__4_6() const { return ___U3CendHandleColorU3E5__4_6; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CendHandleColorU3E5__4_6() { return &___U3CendHandleColorU3E5__4_6; }
	inline void set_U3CendHandleColorU3E5__4_6(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CendHandleColorU3E5__4_6 = value;
	}

	inline static int32_t get_offset_of_U3CendHandleScaleU3E5__5_7() { return static_cast<int32_t>(offsetof(U3CAnimateHandleU3Ed__33_t25309B59592FBF6C583EA1A1A89E51814130219F, ___U3CendHandleScaleU3E5__5_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CendHandleScaleU3E5__5_7() const { return ___U3CendHandleScaleU3E5__5_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CendHandleScaleU3E5__5_7() { return &___U3CendHandleScaleU3E5__5_7; }
	inline void set_U3CendHandleScaleU3E5__5_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CendHandleScaleU3E5__5_7 = value;
	}

	inline static int32_t get_offset_of_U3CprogressU3E5__6_8() { return static_cast<int32_t>(offsetof(U3CAnimateHandleU3Ed__33_t25309B59592FBF6C583EA1A1A89E51814130219F, ___U3CprogressU3E5__6_8)); }
	inline float get_U3CprogressU3E5__6_8() const { return ___U3CprogressU3E5__6_8; }
	inline float* get_address_of_U3CprogressU3E5__6_8() { return &___U3CprogressU3E5__6_8; }
	inline void set_U3CprogressU3E5__6_8(float value)
	{
		___U3CprogressU3E5__6_8 = value;
	}
};


// Tobii.XR.UIGazeSliderGraphics/<AnimateVisualFeedback>d__32
struct U3CAnimateVisualFeedbackU3Ed__32_tAE9021EC3BD7C7D1730454554D4D341065B43175  : public RuntimeObject
{
public:
	// System.Int32 Tobii.XR.UIGazeSliderGraphics/<AnimateVisualFeedback>d__32::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Tobii.XR.UIGazeSliderGraphics/<AnimateVisualFeedback>d__32::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Tobii.XR.UIGazeSliderGraphics Tobii.XR.UIGazeSliderGraphics/<AnimateVisualFeedback>d__32::<>4__this
	UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * ___U3CU3E4__this_2;
	// System.Boolean Tobii.XR.UIGazeSliderGraphics/<AnimateVisualFeedback>d__32::hasFocus
	bool ___hasFocus_3;
	// UnityEngine.Vector3 Tobii.XR.UIGazeSliderGraphics/<AnimateVisualFeedback>d__32::<startSliderScale>5__2
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CstartSliderScaleU3E5__2_4;
	// UnityEngine.Vector3 Tobii.XR.UIGazeSliderGraphics/<AnimateVisualFeedback>d__32::<endSliderScale>5__3
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CendSliderScaleU3E5__3_5;
	// UnityEngine.Color Tobii.XR.UIGazeSliderGraphics/<AnimateVisualFeedback>d__32::<startFilledColor>5__4
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CstartFilledColorU3E5__4_6;
	// UnityEngine.Color Tobii.XR.UIGazeSliderGraphics/<AnimateVisualFeedback>d__32::<startLabelColor>5__5
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CstartLabelColorU3E5__5_7;
	// UnityEngine.Color Tobii.XR.UIGazeSliderGraphics/<AnimateVisualFeedback>d__32::<startBackgroundColor>5__6
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CstartBackgroundColorU3E5__6_8;
	// UnityEngine.Color Tobii.XR.UIGazeSliderGraphics/<AnimateVisualFeedback>d__32::<endFilledColor>5__7
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CendFilledColorU3E5__7_9;
	// UnityEngine.Color Tobii.XR.UIGazeSliderGraphics/<AnimateVisualFeedback>d__32::<endLabelColor>5__8
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CendLabelColorU3E5__8_10;
	// UnityEngine.Color Tobii.XR.UIGazeSliderGraphics/<AnimateVisualFeedback>d__32::<endBackgroundColor>5__9
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CendBackgroundColorU3E5__9_11;
	// System.Single Tobii.XR.UIGazeSliderGraphics/<AnimateVisualFeedback>d__32::<progress>5__10
	float ___U3CprogressU3E5__10_12;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAnimateVisualFeedbackU3Ed__32_tAE9021EC3BD7C7D1730454554D4D341065B43175, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAnimateVisualFeedbackU3Ed__32_tAE9021EC3BD7C7D1730454554D4D341065B43175, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CAnimateVisualFeedbackU3Ed__32_tAE9021EC3BD7C7D1730454554D4D341065B43175, ___U3CU3E4__this_2)); }
	inline UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_hasFocus_3() { return static_cast<int32_t>(offsetof(U3CAnimateVisualFeedbackU3Ed__32_tAE9021EC3BD7C7D1730454554D4D341065B43175, ___hasFocus_3)); }
	inline bool get_hasFocus_3() const { return ___hasFocus_3; }
	inline bool* get_address_of_hasFocus_3() { return &___hasFocus_3; }
	inline void set_hasFocus_3(bool value)
	{
		___hasFocus_3 = value;
	}

	inline static int32_t get_offset_of_U3CstartSliderScaleU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CAnimateVisualFeedbackU3Ed__32_tAE9021EC3BD7C7D1730454554D4D341065B43175, ___U3CstartSliderScaleU3E5__2_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CstartSliderScaleU3E5__2_4() const { return ___U3CstartSliderScaleU3E5__2_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CstartSliderScaleU3E5__2_4() { return &___U3CstartSliderScaleU3E5__2_4; }
	inline void set_U3CstartSliderScaleU3E5__2_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CstartSliderScaleU3E5__2_4 = value;
	}

	inline static int32_t get_offset_of_U3CendSliderScaleU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CAnimateVisualFeedbackU3Ed__32_tAE9021EC3BD7C7D1730454554D4D341065B43175, ___U3CendSliderScaleU3E5__3_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CendSliderScaleU3E5__3_5() const { return ___U3CendSliderScaleU3E5__3_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CendSliderScaleU3E5__3_5() { return &___U3CendSliderScaleU3E5__3_5; }
	inline void set_U3CendSliderScaleU3E5__3_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CendSliderScaleU3E5__3_5 = value;
	}

	inline static int32_t get_offset_of_U3CstartFilledColorU3E5__4_6() { return static_cast<int32_t>(offsetof(U3CAnimateVisualFeedbackU3Ed__32_tAE9021EC3BD7C7D1730454554D4D341065B43175, ___U3CstartFilledColorU3E5__4_6)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CstartFilledColorU3E5__4_6() const { return ___U3CstartFilledColorU3E5__4_6; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CstartFilledColorU3E5__4_6() { return &___U3CstartFilledColorU3E5__4_6; }
	inline void set_U3CstartFilledColorU3E5__4_6(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CstartFilledColorU3E5__4_6 = value;
	}

	inline static int32_t get_offset_of_U3CstartLabelColorU3E5__5_7() { return static_cast<int32_t>(offsetof(U3CAnimateVisualFeedbackU3Ed__32_tAE9021EC3BD7C7D1730454554D4D341065B43175, ___U3CstartLabelColorU3E5__5_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CstartLabelColorU3E5__5_7() const { return ___U3CstartLabelColorU3E5__5_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CstartLabelColorU3E5__5_7() { return &___U3CstartLabelColorU3E5__5_7; }
	inline void set_U3CstartLabelColorU3E5__5_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CstartLabelColorU3E5__5_7 = value;
	}

	inline static int32_t get_offset_of_U3CstartBackgroundColorU3E5__6_8() { return static_cast<int32_t>(offsetof(U3CAnimateVisualFeedbackU3Ed__32_tAE9021EC3BD7C7D1730454554D4D341065B43175, ___U3CstartBackgroundColorU3E5__6_8)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CstartBackgroundColorU3E5__6_8() const { return ___U3CstartBackgroundColorU3E5__6_8; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CstartBackgroundColorU3E5__6_8() { return &___U3CstartBackgroundColorU3E5__6_8; }
	inline void set_U3CstartBackgroundColorU3E5__6_8(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CstartBackgroundColorU3E5__6_8 = value;
	}

	inline static int32_t get_offset_of_U3CendFilledColorU3E5__7_9() { return static_cast<int32_t>(offsetof(U3CAnimateVisualFeedbackU3Ed__32_tAE9021EC3BD7C7D1730454554D4D341065B43175, ___U3CendFilledColorU3E5__7_9)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CendFilledColorU3E5__7_9() const { return ___U3CendFilledColorU3E5__7_9; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CendFilledColorU3E5__7_9() { return &___U3CendFilledColorU3E5__7_9; }
	inline void set_U3CendFilledColorU3E5__7_9(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CendFilledColorU3E5__7_9 = value;
	}

	inline static int32_t get_offset_of_U3CendLabelColorU3E5__8_10() { return static_cast<int32_t>(offsetof(U3CAnimateVisualFeedbackU3Ed__32_tAE9021EC3BD7C7D1730454554D4D341065B43175, ___U3CendLabelColorU3E5__8_10)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CendLabelColorU3E5__8_10() const { return ___U3CendLabelColorU3E5__8_10; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CendLabelColorU3E5__8_10() { return &___U3CendLabelColorU3E5__8_10; }
	inline void set_U3CendLabelColorU3E5__8_10(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CendLabelColorU3E5__8_10 = value;
	}

	inline static int32_t get_offset_of_U3CendBackgroundColorU3E5__9_11() { return static_cast<int32_t>(offsetof(U3CAnimateVisualFeedbackU3Ed__32_tAE9021EC3BD7C7D1730454554D4D341065B43175, ___U3CendBackgroundColorU3E5__9_11)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CendBackgroundColorU3E5__9_11() const { return ___U3CendBackgroundColorU3E5__9_11; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CendBackgroundColorU3E5__9_11() { return &___U3CendBackgroundColorU3E5__9_11; }
	inline void set_U3CendBackgroundColorU3E5__9_11(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CendBackgroundColorU3E5__9_11 = value;
	}

	inline static int32_t get_offset_of_U3CprogressU3E5__10_12() { return static_cast<int32_t>(offsetof(U3CAnimateVisualFeedbackU3Ed__32_tAE9021EC3BD7C7D1730454554D4D341065B43175, ___U3CprogressU3E5__10_12)); }
	inline float get_U3CprogressU3E5__10_12() const { return ___U3CprogressU3E5__10_12; }
	inline float* get_address_of_U3CprogressU3E5__10_12() { return &___U3CprogressU3E5__10_12; }
	inline void set_U3CprogressU3E5__10_12(float value)
	{
		___U3CprogressU3E5__10_12 = value;
	}
};


// Tobii.XR.UIGazeToggleButtonGraphics/<AnimateVisualFeedback>d__31
struct U3CAnimateVisualFeedbackU3Ed__31_t07D3E601DC366CDB016FA37DE08D53A461AB2E7E  : public RuntimeObject
{
public:
	// System.Int32 Tobii.XR.UIGazeToggleButtonGraphics/<AnimateVisualFeedback>d__31::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Tobii.XR.UIGazeToggleButtonGraphics/<AnimateVisualFeedback>d__31::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Tobii.XR.UIGazeToggleButtonGraphics Tobii.XR.UIGazeToggleButtonGraphics/<AnimateVisualFeedback>d__31::<>4__this
	UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * ___U3CU3E4__this_2;
	// System.Boolean Tobii.XR.UIGazeToggleButtonGraphics/<AnimateVisualFeedback>d__31::hasFocus
	bool ___hasFocus_3;
	// System.Boolean Tobii.XR.UIGazeToggleButtonGraphics/<AnimateVisualFeedback>d__31::isToggledOn
	bool ___isToggledOn_4;
	// System.Boolean Tobii.XR.UIGazeToggleButtonGraphics/<AnimateVisualFeedback>d__31::isButtonPressed
	bool ___isButtonPressed_5;
	// UnityEngine.Vector3 Tobii.XR.UIGazeToggleButtonGraphics/<AnimateVisualFeedback>d__31::<startKnobScale>5__2
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CstartKnobScaleU3E5__2_6;
	// UnityEngine.Vector3 Tobii.XR.UIGazeToggleButtonGraphics/<AnimateVisualFeedback>d__31::<endKnobScale>5__3
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CendKnobScaleU3E5__3_7;
	// UnityEngine.Vector3 Tobii.XR.UIGazeToggleButtonGraphics/<AnimateVisualFeedback>d__31::<startButtonScale>5__4
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CstartButtonScaleU3E5__4_8;
	// UnityEngine.Vector3 Tobii.XR.UIGazeToggleButtonGraphics/<AnimateVisualFeedback>d__31::<endButtonScale>5__5
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CendButtonScaleU3E5__5_9;
	// UnityEngine.Color Tobii.XR.UIGazeToggleButtonGraphics/<AnimateVisualFeedback>d__31::<startKnobColor>5__6
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CstartKnobColorU3E5__6_10;
	// UnityEngine.Color Tobii.XR.UIGazeToggleButtonGraphics/<AnimateVisualFeedback>d__31::<endKnobColor>5__7
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CendKnobColorU3E5__7_11;
	// UnityEngine.Color Tobii.XR.UIGazeToggleButtonGraphics/<AnimateVisualFeedback>d__31::<startLabelColor>5__8
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CstartLabelColorU3E5__8_12;
	// UnityEngine.Color Tobii.XR.UIGazeToggleButtonGraphics/<AnimateVisualFeedback>d__31::<endLabelColor>5__9
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CendLabelColorU3E5__9_13;
	// UnityEngine.Color Tobii.XR.UIGazeToggleButtonGraphics/<AnimateVisualFeedback>d__31::<startBackgroundColor>5__10
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CstartBackgroundColorU3E5__10_14;
	// UnityEngine.Color Tobii.XR.UIGazeToggleButtonGraphics/<AnimateVisualFeedback>d__31::<startOutlineColor>5__11
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CstartOutlineColorU3E5__11_15;
	// UnityEngine.Color Tobii.XR.UIGazeToggleButtonGraphics/<AnimateVisualFeedback>d__31::<endBackgroundColor>5__12
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CendBackgroundColorU3E5__12_16;
	// UnityEngine.Color Tobii.XR.UIGazeToggleButtonGraphics/<AnimateVisualFeedback>d__31::<endOutlineColor>5__13
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CendOutlineColorU3E5__13_17;
	// System.Single Tobii.XR.UIGazeToggleButtonGraphics/<AnimateVisualFeedback>d__31::<progress>5__14
	float ___U3CprogressU3E5__14_18;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAnimateVisualFeedbackU3Ed__31_t07D3E601DC366CDB016FA37DE08D53A461AB2E7E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAnimateVisualFeedbackU3Ed__31_t07D3E601DC366CDB016FA37DE08D53A461AB2E7E, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CAnimateVisualFeedbackU3Ed__31_t07D3E601DC366CDB016FA37DE08D53A461AB2E7E, ___U3CU3E4__this_2)); }
	inline UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_hasFocus_3() { return static_cast<int32_t>(offsetof(U3CAnimateVisualFeedbackU3Ed__31_t07D3E601DC366CDB016FA37DE08D53A461AB2E7E, ___hasFocus_3)); }
	inline bool get_hasFocus_3() const { return ___hasFocus_3; }
	inline bool* get_address_of_hasFocus_3() { return &___hasFocus_3; }
	inline void set_hasFocus_3(bool value)
	{
		___hasFocus_3 = value;
	}

	inline static int32_t get_offset_of_isToggledOn_4() { return static_cast<int32_t>(offsetof(U3CAnimateVisualFeedbackU3Ed__31_t07D3E601DC366CDB016FA37DE08D53A461AB2E7E, ___isToggledOn_4)); }
	inline bool get_isToggledOn_4() const { return ___isToggledOn_4; }
	inline bool* get_address_of_isToggledOn_4() { return &___isToggledOn_4; }
	inline void set_isToggledOn_4(bool value)
	{
		___isToggledOn_4 = value;
	}

	inline static int32_t get_offset_of_isButtonPressed_5() { return static_cast<int32_t>(offsetof(U3CAnimateVisualFeedbackU3Ed__31_t07D3E601DC366CDB016FA37DE08D53A461AB2E7E, ___isButtonPressed_5)); }
	inline bool get_isButtonPressed_5() const { return ___isButtonPressed_5; }
	inline bool* get_address_of_isButtonPressed_5() { return &___isButtonPressed_5; }
	inline void set_isButtonPressed_5(bool value)
	{
		___isButtonPressed_5 = value;
	}

	inline static int32_t get_offset_of_U3CstartKnobScaleU3E5__2_6() { return static_cast<int32_t>(offsetof(U3CAnimateVisualFeedbackU3Ed__31_t07D3E601DC366CDB016FA37DE08D53A461AB2E7E, ___U3CstartKnobScaleU3E5__2_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CstartKnobScaleU3E5__2_6() const { return ___U3CstartKnobScaleU3E5__2_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CstartKnobScaleU3E5__2_6() { return &___U3CstartKnobScaleU3E5__2_6; }
	inline void set_U3CstartKnobScaleU3E5__2_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CstartKnobScaleU3E5__2_6 = value;
	}

	inline static int32_t get_offset_of_U3CendKnobScaleU3E5__3_7() { return static_cast<int32_t>(offsetof(U3CAnimateVisualFeedbackU3Ed__31_t07D3E601DC366CDB016FA37DE08D53A461AB2E7E, ___U3CendKnobScaleU3E5__3_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CendKnobScaleU3E5__3_7() const { return ___U3CendKnobScaleU3E5__3_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CendKnobScaleU3E5__3_7() { return &___U3CendKnobScaleU3E5__3_7; }
	inline void set_U3CendKnobScaleU3E5__3_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CendKnobScaleU3E5__3_7 = value;
	}

	inline static int32_t get_offset_of_U3CstartButtonScaleU3E5__4_8() { return static_cast<int32_t>(offsetof(U3CAnimateVisualFeedbackU3Ed__31_t07D3E601DC366CDB016FA37DE08D53A461AB2E7E, ___U3CstartButtonScaleU3E5__4_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CstartButtonScaleU3E5__4_8() const { return ___U3CstartButtonScaleU3E5__4_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CstartButtonScaleU3E5__4_8() { return &___U3CstartButtonScaleU3E5__4_8; }
	inline void set_U3CstartButtonScaleU3E5__4_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CstartButtonScaleU3E5__4_8 = value;
	}

	inline static int32_t get_offset_of_U3CendButtonScaleU3E5__5_9() { return static_cast<int32_t>(offsetof(U3CAnimateVisualFeedbackU3Ed__31_t07D3E601DC366CDB016FA37DE08D53A461AB2E7E, ___U3CendButtonScaleU3E5__5_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CendButtonScaleU3E5__5_9() const { return ___U3CendButtonScaleU3E5__5_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CendButtonScaleU3E5__5_9() { return &___U3CendButtonScaleU3E5__5_9; }
	inline void set_U3CendButtonScaleU3E5__5_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CendButtonScaleU3E5__5_9 = value;
	}

	inline static int32_t get_offset_of_U3CstartKnobColorU3E5__6_10() { return static_cast<int32_t>(offsetof(U3CAnimateVisualFeedbackU3Ed__31_t07D3E601DC366CDB016FA37DE08D53A461AB2E7E, ___U3CstartKnobColorU3E5__6_10)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CstartKnobColorU3E5__6_10() const { return ___U3CstartKnobColorU3E5__6_10; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CstartKnobColorU3E5__6_10() { return &___U3CstartKnobColorU3E5__6_10; }
	inline void set_U3CstartKnobColorU3E5__6_10(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CstartKnobColorU3E5__6_10 = value;
	}

	inline static int32_t get_offset_of_U3CendKnobColorU3E5__7_11() { return static_cast<int32_t>(offsetof(U3CAnimateVisualFeedbackU3Ed__31_t07D3E601DC366CDB016FA37DE08D53A461AB2E7E, ___U3CendKnobColorU3E5__7_11)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CendKnobColorU3E5__7_11() const { return ___U3CendKnobColorU3E5__7_11; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CendKnobColorU3E5__7_11() { return &___U3CendKnobColorU3E5__7_11; }
	inline void set_U3CendKnobColorU3E5__7_11(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CendKnobColorU3E5__7_11 = value;
	}

	inline static int32_t get_offset_of_U3CstartLabelColorU3E5__8_12() { return static_cast<int32_t>(offsetof(U3CAnimateVisualFeedbackU3Ed__31_t07D3E601DC366CDB016FA37DE08D53A461AB2E7E, ___U3CstartLabelColorU3E5__8_12)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CstartLabelColorU3E5__8_12() const { return ___U3CstartLabelColorU3E5__8_12; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CstartLabelColorU3E5__8_12() { return &___U3CstartLabelColorU3E5__8_12; }
	inline void set_U3CstartLabelColorU3E5__8_12(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CstartLabelColorU3E5__8_12 = value;
	}

	inline static int32_t get_offset_of_U3CendLabelColorU3E5__9_13() { return static_cast<int32_t>(offsetof(U3CAnimateVisualFeedbackU3Ed__31_t07D3E601DC366CDB016FA37DE08D53A461AB2E7E, ___U3CendLabelColorU3E5__9_13)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CendLabelColorU3E5__9_13() const { return ___U3CendLabelColorU3E5__9_13; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CendLabelColorU3E5__9_13() { return &___U3CendLabelColorU3E5__9_13; }
	inline void set_U3CendLabelColorU3E5__9_13(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CendLabelColorU3E5__9_13 = value;
	}

	inline static int32_t get_offset_of_U3CstartBackgroundColorU3E5__10_14() { return static_cast<int32_t>(offsetof(U3CAnimateVisualFeedbackU3Ed__31_t07D3E601DC366CDB016FA37DE08D53A461AB2E7E, ___U3CstartBackgroundColorU3E5__10_14)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CstartBackgroundColorU3E5__10_14() const { return ___U3CstartBackgroundColorU3E5__10_14; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CstartBackgroundColorU3E5__10_14() { return &___U3CstartBackgroundColorU3E5__10_14; }
	inline void set_U3CstartBackgroundColorU3E5__10_14(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CstartBackgroundColorU3E5__10_14 = value;
	}

	inline static int32_t get_offset_of_U3CstartOutlineColorU3E5__11_15() { return static_cast<int32_t>(offsetof(U3CAnimateVisualFeedbackU3Ed__31_t07D3E601DC366CDB016FA37DE08D53A461AB2E7E, ___U3CstartOutlineColorU3E5__11_15)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CstartOutlineColorU3E5__11_15() const { return ___U3CstartOutlineColorU3E5__11_15; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CstartOutlineColorU3E5__11_15() { return &___U3CstartOutlineColorU3E5__11_15; }
	inline void set_U3CstartOutlineColorU3E5__11_15(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CstartOutlineColorU3E5__11_15 = value;
	}

	inline static int32_t get_offset_of_U3CendBackgroundColorU3E5__12_16() { return static_cast<int32_t>(offsetof(U3CAnimateVisualFeedbackU3Ed__31_t07D3E601DC366CDB016FA37DE08D53A461AB2E7E, ___U3CendBackgroundColorU3E5__12_16)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CendBackgroundColorU3E5__12_16() const { return ___U3CendBackgroundColorU3E5__12_16; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CendBackgroundColorU3E5__12_16() { return &___U3CendBackgroundColorU3E5__12_16; }
	inline void set_U3CendBackgroundColorU3E5__12_16(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CendBackgroundColorU3E5__12_16 = value;
	}

	inline static int32_t get_offset_of_U3CendOutlineColorU3E5__13_17() { return static_cast<int32_t>(offsetof(U3CAnimateVisualFeedbackU3Ed__31_t07D3E601DC366CDB016FA37DE08D53A461AB2E7E, ___U3CendOutlineColorU3E5__13_17)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CendOutlineColorU3E5__13_17() const { return ___U3CendOutlineColorU3E5__13_17; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CendOutlineColorU3E5__13_17() { return &___U3CendOutlineColorU3E5__13_17; }
	inline void set_U3CendOutlineColorU3E5__13_17(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CendOutlineColorU3E5__13_17 = value;
	}

	inline static int32_t get_offset_of_U3CprogressU3E5__14_18() { return static_cast<int32_t>(offsetof(U3CAnimateVisualFeedbackU3Ed__31_t07D3E601DC366CDB016FA37DE08D53A461AB2E7E, ___U3CprogressU3E5__14_18)); }
	inline float get_U3CprogressU3E5__14_18() const { return ___U3CprogressU3E5__14_18; }
	inline float* get_address_of_U3CprogressU3E5__14_18() { return &___U3CprogressU3E5__14_18; }
	inline void set_U3CprogressU3E5__14_18(float value)
	{
		___U3CprogressU3E5__14_18 = value;
	}
};


// Tobii.XR.UIGazeToggleButtonGraphics/<MoveKnob>d__33
struct U3CMoveKnobU3Ed__33_tE58824844149E1E88D502B3178B56C9A60997966  : public RuntimeObject
{
public:
	// System.Int32 Tobii.XR.UIGazeToggleButtonGraphics/<MoveKnob>d__33::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Tobii.XR.UIGazeToggleButtonGraphics/<MoveKnob>d__33::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Tobii.XR.UIGazeToggleButtonGraphics Tobii.XR.UIGazeToggleButtonGraphics/<MoveKnob>d__33::<>4__this
	UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * ___U3CU3E4__this_2;
	// System.Boolean Tobii.XR.UIGazeToggleButtonGraphics/<MoveKnob>d__33::isToggledOn
	bool ___isToggledOn_3;
	// UnityEngine.Vector3 Tobii.XR.UIGazeToggleButtonGraphics/<MoveKnob>d__33::<startPosition>5__2
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CstartPositionU3E5__2_4;
	// UnityEngine.Vector3 Tobii.XR.UIGazeToggleButtonGraphics/<MoveKnob>d__33::<endPosition>5__3
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CendPositionU3E5__3_5;
	// System.Single Tobii.XR.UIGazeToggleButtonGraphics/<MoveKnob>d__33::<progress>5__4
	float ___U3CprogressU3E5__4_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CMoveKnobU3Ed__33_tE58824844149E1E88D502B3178B56C9A60997966, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CMoveKnobU3Ed__33_tE58824844149E1E88D502B3178B56C9A60997966, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CMoveKnobU3Ed__33_tE58824844149E1E88D502B3178B56C9A60997966, ___U3CU3E4__this_2)); }
	inline UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_isToggledOn_3() { return static_cast<int32_t>(offsetof(U3CMoveKnobU3Ed__33_tE58824844149E1E88D502B3178B56C9A60997966, ___isToggledOn_3)); }
	inline bool get_isToggledOn_3() const { return ___isToggledOn_3; }
	inline bool* get_address_of_isToggledOn_3() { return &___isToggledOn_3; }
	inline void set_isToggledOn_3(bool value)
	{
		___isToggledOn_3 = value;
	}

	inline static int32_t get_offset_of_U3CstartPositionU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CMoveKnobU3Ed__33_tE58824844149E1E88D502B3178B56C9A60997966, ___U3CstartPositionU3E5__2_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CstartPositionU3E5__2_4() const { return ___U3CstartPositionU3E5__2_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CstartPositionU3E5__2_4() { return &___U3CstartPositionU3E5__2_4; }
	inline void set_U3CstartPositionU3E5__2_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CstartPositionU3E5__2_4 = value;
	}

	inline static int32_t get_offset_of_U3CendPositionU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CMoveKnobU3Ed__33_tE58824844149E1E88D502B3178B56C9A60997966, ___U3CendPositionU3E5__3_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CendPositionU3E5__3_5() const { return ___U3CendPositionU3E5__3_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CendPositionU3E5__3_5() { return &___U3CendPositionU3E5__3_5; }
	inline void set_U3CendPositionU3E5__3_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CendPositionU3E5__3_5 = value;
	}

	inline static int32_t get_offset_of_U3CprogressU3E5__4_6() { return static_cast<int32_t>(offsetof(U3CMoveKnobU3Ed__33_tE58824844149E1E88D502B3178B56C9A60997966, ___U3CprogressU3E5__4_6)); }
	inline float get_U3CprogressU3E5__4_6() const { return ___U3CprogressU3E5__4_6; }
	inline float* get_address_of_U3CprogressU3E5__4_6() { return &___U3CprogressU3E5__4_6; }
	inline void set_U3CprogressU3E5__4_6(float value)
	{
		___U3CprogressU3E5__4_6 = value;
	}
};


// Tobii.XR.UIGazeToggleButtonGraphics/VisualStateColors
struct VisualStateColors_t977B626B553DECF2FCA446AB601620C118B1EDA9 
{
public:
	// UnityEngine.Color Tobii.XR.UIGazeToggleButtonGraphics/VisualStateColors::DefaultBackgroundColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___DefaultBackgroundColor_0;
	// UnityEngine.Color Tobii.XR.UIGazeToggleButtonGraphics/VisualStateColors::FocusBackgroundColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___FocusBackgroundColor_1;
	// UnityEngine.Color Tobii.XR.UIGazeToggleButtonGraphics/VisualStateColors::DefaultOutlineColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___DefaultOutlineColor_2;
	// UnityEngine.Color Tobii.XR.UIGazeToggleButtonGraphics/VisualStateColors::FocusOutlineColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___FocusOutlineColor_3;

public:
	inline static int32_t get_offset_of_DefaultBackgroundColor_0() { return static_cast<int32_t>(offsetof(VisualStateColors_t977B626B553DECF2FCA446AB601620C118B1EDA9, ___DefaultBackgroundColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_DefaultBackgroundColor_0() const { return ___DefaultBackgroundColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_DefaultBackgroundColor_0() { return &___DefaultBackgroundColor_0; }
	inline void set_DefaultBackgroundColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___DefaultBackgroundColor_0 = value;
	}

	inline static int32_t get_offset_of_FocusBackgroundColor_1() { return static_cast<int32_t>(offsetof(VisualStateColors_t977B626B553DECF2FCA446AB601620C118B1EDA9, ___FocusBackgroundColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_FocusBackgroundColor_1() const { return ___FocusBackgroundColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_FocusBackgroundColor_1() { return &___FocusBackgroundColor_1; }
	inline void set_FocusBackgroundColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___FocusBackgroundColor_1 = value;
	}

	inline static int32_t get_offset_of_DefaultOutlineColor_2() { return static_cast<int32_t>(offsetof(VisualStateColors_t977B626B553DECF2FCA446AB601620C118B1EDA9, ___DefaultOutlineColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_DefaultOutlineColor_2() const { return ___DefaultOutlineColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_DefaultOutlineColor_2() { return &___DefaultOutlineColor_2; }
	inline void set_DefaultOutlineColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___DefaultOutlineColor_2 = value;
	}

	inline static int32_t get_offset_of_FocusOutlineColor_3() { return static_cast<int32_t>(offsetof(VisualStateColors_t977B626B553DECF2FCA446AB601620C118B1EDA9, ___FocusOutlineColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_FocusOutlineColor_3() const { return ___FocusOutlineColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_FocusOutlineColor_3() { return &___FocusOutlineColor_3; }
	inline void set_FocusOutlineColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___FocusOutlineColor_3 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// Tobii.G2OM.G2OM_GazeRay
struct G2OM_GazeRay_t58E094CB5E4078AB25F3A3857BF5049FF04342EA 
{
public:
	// Tobii.G2OM.G2OM_Ray Tobii.G2OM.G2OM_GazeRay::ray
	G2OM_Ray_t5B49A5A55B51DA9DF39338656E6841A0BD844FB9  ___ray_0;
	// System.Byte Tobii.G2OM.G2OM_GazeRay::is_valid
	uint8_t ___is_valid_1;

public:
	inline static int32_t get_offset_of_ray_0() { return static_cast<int32_t>(offsetof(G2OM_GazeRay_t58E094CB5E4078AB25F3A3857BF5049FF04342EA, ___ray_0)); }
	inline G2OM_Ray_t5B49A5A55B51DA9DF39338656E6841A0BD844FB9  get_ray_0() const { return ___ray_0; }
	inline G2OM_Ray_t5B49A5A55B51DA9DF39338656E6841A0BD844FB9 * get_address_of_ray_0() { return &___ray_0; }
	inline void set_ray_0(G2OM_Ray_t5B49A5A55B51DA9DF39338656E6841A0BD844FB9  value)
	{
		___ray_0 = value;
	}

	inline static int32_t get_offset_of_is_valid_1() { return static_cast<int32_t>(offsetof(G2OM_GazeRay_t58E094CB5E4078AB25F3A3857BF5049FF04342EA, ___is_valid_1)); }
	inline uint8_t get_is_valid_1() const { return ___is_valid_1; }
	inline uint8_t* get_address_of_is_valid_1() { return &___is_valid_1; }
	inline void set_is_valid_1(uint8_t value)
	{
		___is_valid_1 = value;
	}
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.TextAsset
struct TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// Tobii.XR.TobiiProvider
struct TobiiProvider_tD45A100799E1CF76E55DBE531F3B1D064727C6AB  : public RuntimeObject
{
public:
	// System.Object Tobii.XR.TobiiProvider::_lockEyeTrackingDataLocal
	RuntimeObject * ____lockEyeTrackingDataLocal_0;
	// Tobii.XR.TobiiXR_EyeTrackingData Tobii.XR.TobiiProvider::_eyeTrackingDataLocal
	TobiiXR_EyeTrackingData_t77A57D23997EA5B3B365ABDD60221EFB27BD72EA * ____eyeTrackingDataLocal_1;
	// Tobii.XR.TobiiXR_EyeTrackingData Tobii.XR.TobiiProvider::_eyeTrackingDataLocalInternal
	TobiiXR_EyeTrackingData_t77A57D23997EA5B3B365ABDD60221EFB27BD72EA * ____eyeTrackingDataLocalInternal_2;
	// System.Object Tobii.XR.TobiiProvider::_lockAdvancedData
	RuntimeObject * ____lockAdvancedData_3;
	// Tobii.XR.TobiiXR_AdvancedEyeTrackingData Tobii.XR.TobiiProvider::_advancedEyeTrackingData
	TobiiXR_AdvancedEyeTrackingData_tB2678609BBF22A44D4C6187F17115A3C699D977A * ____advancedEyeTrackingData_4;
	// System.Collections.Generic.Queue`1<Tobii.XR.TobiiXR_AdvancedEyeTrackingData> Tobii.XR.TobiiProvider::_advancedInternalQueue
	Queue_1_t27DFB585D1A1063ABE7B597B1FCFF823EF113243 * ____advancedInternalQueue_5;
	// System.Collections.Generic.Queue`1<Tobii.XR.TobiiXR_AdvancedEyeTrackingData> Tobii.XR.TobiiProvider::_advancedPublicQueue
	Queue_1_t27DFB585D1A1063ABE7B597B1FCFF823EF113243 * ____advancedPublicQueue_6;
	// Tobii.XR.StreamEngineTracker Tobii.XR.TobiiProvider::_streamEngineTracker
	StreamEngineTracker_tF1BA81AD436A1E38EC7BD63DE1F7D85FF74BDD7D * ____streamEngineTracker_7;
	// Tobii.XR.HmdToWorldTransformer Tobii.XR.TobiiProvider::_hmdToWorldTransformer
	HmdToWorldTransformer_t24E03A8555C369004B146BC76E854496C096FA8A * ____hmdToWorldTransformer_8;
	// UnityEngine.Matrix4x4 Tobii.XR.TobiiProvider::_localToWorldMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ____localToWorldMatrix_9;
	// UnityEngine.Vector3 Tobii.XR.TobiiProvider::_headToCenterEyeTranslation
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____headToCenterEyeTranslation_10;
	// Tobii.XR.PositionGuideData Tobii.XR.TobiiProvider::_positionGuideData
	PositionGuideData_tAFD909BA7528B47C41CB58FF0878F13D9E410412  ____positionGuideData_11;
	// System.Object Tobii.XR.TobiiProvider::_lockPositionGuideData
	RuntimeObject * ____lockPositionGuideData_12;

public:
	inline static int32_t get_offset_of__lockEyeTrackingDataLocal_0() { return static_cast<int32_t>(offsetof(TobiiProvider_tD45A100799E1CF76E55DBE531F3B1D064727C6AB, ____lockEyeTrackingDataLocal_0)); }
	inline RuntimeObject * get__lockEyeTrackingDataLocal_0() const { return ____lockEyeTrackingDataLocal_0; }
	inline RuntimeObject ** get_address_of__lockEyeTrackingDataLocal_0() { return &____lockEyeTrackingDataLocal_0; }
	inline void set__lockEyeTrackingDataLocal_0(RuntimeObject * value)
	{
		____lockEyeTrackingDataLocal_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lockEyeTrackingDataLocal_0), (void*)value);
	}

	inline static int32_t get_offset_of__eyeTrackingDataLocal_1() { return static_cast<int32_t>(offsetof(TobiiProvider_tD45A100799E1CF76E55DBE531F3B1D064727C6AB, ____eyeTrackingDataLocal_1)); }
	inline TobiiXR_EyeTrackingData_t77A57D23997EA5B3B365ABDD60221EFB27BD72EA * get__eyeTrackingDataLocal_1() const { return ____eyeTrackingDataLocal_1; }
	inline TobiiXR_EyeTrackingData_t77A57D23997EA5B3B365ABDD60221EFB27BD72EA ** get_address_of__eyeTrackingDataLocal_1() { return &____eyeTrackingDataLocal_1; }
	inline void set__eyeTrackingDataLocal_1(TobiiXR_EyeTrackingData_t77A57D23997EA5B3B365ABDD60221EFB27BD72EA * value)
	{
		____eyeTrackingDataLocal_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____eyeTrackingDataLocal_1), (void*)value);
	}

	inline static int32_t get_offset_of__eyeTrackingDataLocalInternal_2() { return static_cast<int32_t>(offsetof(TobiiProvider_tD45A100799E1CF76E55DBE531F3B1D064727C6AB, ____eyeTrackingDataLocalInternal_2)); }
	inline TobiiXR_EyeTrackingData_t77A57D23997EA5B3B365ABDD60221EFB27BD72EA * get__eyeTrackingDataLocalInternal_2() const { return ____eyeTrackingDataLocalInternal_2; }
	inline TobiiXR_EyeTrackingData_t77A57D23997EA5B3B365ABDD60221EFB27BD72EA ** get_address_of__eyeTrackingDataLocalInternal_2() { return &____eyeTrackingDataLocalInternal_2; }
	inline void set__eyeTrackingDataLocalInternal_2(TobiiXR_EyeTrackingData_t77A57D23997EA5B3B365ABDD60221EFB27BD72EA * value)
	{
		____eyeTrackingDataLocalInternal_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____eyeTrackingDataLocalInternal_2), (void*)value);
	}

	inline static int32_t get_offset_of__lockAdvancedData_3() { return static_cast<int32_t>(offsetof(TobiiProvider_tD45A100799E1CF76E55DBE531F3B1D064727C6AB, ____lockAdvancedData_3)); }
	inline RuntimeObject * get__lockAdvancedData_3() const { return ____lockAdvancedData_3; }
	inline RuntimeObject ** get_address_of__lockAdvancedData_3() { return &____lockAdvancedData_3; }
	inline void set__lockAdvancedData_3(RuntimeObject * value)
	{
		____lockAdvancedData_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lockAdvancedData_3), (void*)value);
	}

	inline static int32_t get_offset_of__advancedEyeTrackingData_4() { return static_cast<int32_t>(offsetof(TobiiProvider_tD45A100799E1CF76E55DBE531F3B1D064727C6AB, ____advancedEyeTrackingData_4)); }
	inline TobiiXR_AdvancedEyeTrackingData_tB2678609BBF22A44D4C6187F17115A3C699D977A * get__advancedEyeTrackingData_4() const { return ____advancedEyeTrackingData_4; }
	inline TobiiXR_AdvancedEyeTrackingData_tB2678609BBF22A44D4C6187F17115A3C699D977A ** get_address_of__advancedEyeTrackingData_4() { return &____advancedEyeTrackingData_4; }
	inline void set__advancedEyeTrackingData_4(TobiiXR_AdvancedEyeTrackingData_tB2678609BBF22A44D4C6187F17115A3C699D977A * value)
	{
		____advancedEyeTrackingData_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____advancedEyeTrackingData_4), (void*)value);
	}

	inline static int32_t get_offset_of__advancedInternalQueue_5() { return static_cast<int32_t>(offsetof(TobiiProvider_tD45A100799E1CF76E55DBE531F3B1D064727C6AB, ____advancedInternalQueue_5)); }
	inline Queue_1_t27DFB585D1A1063ABE7B597B1FCFF823EF113243 * get__advancedInternalQueue_5() const { return ____advancedInternalQueue_5; }
	inline Queue_1_t27DFB585D1A1063ABE7B597B1FCFF823EF113243 ** get_address_of__advancedInternalQueue_5() { return &____advancedInternalQueue_5; }
	inline void set__advancedInternalQueue_5(Queue_1_t27DFB585D1A1063ABE7B597B1FCFF823EF113243 * value)
	{
		____advancedInternalQueue_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____advancedInternalQueue_5), (void*)value);
	}

	inline static int32_t get_offset_of__advancedPublicQueue_6() { return static_cast<int32_t>(offsetof(TobiiProvider_tD45A100799E1CF76E55DBE531F3B1D064727C6AB, ____advancedPublicQueue_6)); }
	inline Queue_1_t27DFB585D1A1063ABE7B597B1FCFF823EF113243 * get__advancedPublicQueue_6() const { return ____advancedPublicQueue_6; }
	inline Queue_1_t27DFB585D1A1063ABE7B597B1FCFF823EF113243 ** get_address_of__advancedPublicQueue_6() { return &____advancedPublicQueue_6; }
	inline void set__advancedPublicQueue_6(Queue_1_t27DFB585D1A1063ABE7B597B1FCFF823EF113243 * value)
	{
		____advancedPublicQueue_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____advancedPublicQueue_6), (void*)value);
	}

	inline static int32_t get_offset_of__streamEngineTracker_7() { return static_cast<int32_t>(offsetof(TobiiProvider_tD45A100799E1CF76E55DBE531F3B1D064727C6AB, ____streamEngineTracker_7)); }
	inline StreamEngineTracker_tF1BA81AD436A1E38EC7BD63DE1F7D85FF74BDD7D * get__streamEngineTracker_7() const { return ____streamEngineTracker_7; }
	inline StreamEngineTracker_tF1BA81AD436A1E38EC7BD63DE1F7D85FF74BDD7D ** get_address_of__streamEngineTracker_7() { return &____streamEngineTracker_7; }
	inline void set__streamEngineTracker_7(StreamEngineTracker_tF1BA81AD436A1E38EC7BD63DE1F7D85FF74BDD7D * value)
	{
		____streamEngineTracker_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____streamEngineTracker_7), (void*)value);
	}

	inline static int32_t get_offset_of__hmdToWorldTransformer_8() { return static_cast<int32_t>(offsetof(TobiiProvider_tD45A100799E1CF76E55DBE531F3B1D064727C6AB, ____hmdToWorldTransformer_8)); }
	inline HmdToWorldTransformer_t24E03A8555C369004B146BC76E854496C096FA8A * get__hmdToWorldTransformer_8() const { return ____hmdToWorldTransformer_8; }
	inline HmdToWorldTransformer_t24E03A8555C369004B146BC76E854496C096FA8A ** get_address_of__hmdToWorldTransformer_8() { return &____hmdToWorldTransformer_8; }
	inline void set__hmdToWorldTransformer_8(HmdToWorldTransformer_t24E03A8555C369004B146BC76E854496C096FA8A * value)
	{
		____hmdToWorldTransformer_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____hmdToWorldTransformer_8), (void*)value);
	}

	inline static int32_t get_offset_of__localToWorldMatrix_9() { return static_cast<int32_t>(offsetof(TobiiProvider_tD45A100799E1CF76E55DBE531F3B1D064727C6AB, ____localToWorldMatrix_9)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get__localToWorldMatrix_9() const { return ____localToWorldMatrix_9; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of__localToWorldMatrix_9() { return &____localToWorldMatrix_9; }
	inline void set__localToWorldMatrix_9(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		____localToWorldMatrix_9 = value;
	}

	inline static int32_t get_offset_of__headToCenterEyeTranslation_10() { return static_cast<int32_t>(offsetof(TobiiProvider_tD45A100799E1CF76E55DBE531F3B1D064727C6AB, ____headToCenterEyeTranslation_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__headToCenterEyeTranslation_10() const { return ____headToCenterEyeTranslation_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__headToCenterEyeTranslation_10() { return &____headToCenterEyeTranslation_10; }
	inline void set__headToCenterEyeTranslation_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____headToCenterEyeTranslation_10 = value;
	}

	inline static int32_t get_offset_of__positionGuideData_11() { return static_cast<int32_t>(offsetof(TobiiProvider_tD45A100799E1CF76E55DBE531F3B1D064727C6AB, ____positionGuideData_11)); }
	inline PositionGuideData_tAFD909BA7528B47C41CB58FF0878F13D9E410412  get__positionGuideData_11() const { return ____positionGuideData_11; }
	inline PositionGuideData_tAFD909BA7528B47C41CB58FF0878F13D9E410412 * get_address_of__positionGuideData_11() { return &____positionGuideData_11; }
	inline void set__positionGuideData_11(PositionGuideData_tAFD909BA7528B47C41CB58FF0878F13D9E410412  value)
	{
		____positionGuideData_11 = value;
	}

	inline static int32_t get_offset_of__lockPositionGuideData_12() { return static_cast<int32_t>(offsetof(TobiiProvider_tD45A100799E1CF76E55DBE531F3B1D064727C6AB, ____lockPositionGuideData_12)); }
	inline RuntimeObject * get__lockPositionGuideData_12() const { return ____lockPositionGuideData_12; }
	inline RuntimeObject ** get_address_of__lockPositionGuideData_12() { return &____lockPositionGuideData_12; }
	inline void set__lockPositionGuideData_12(RuntimeObject * value)
	{
		____lockPositionGuideData_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lockPositionGuideData_12), (void*)value);
	}
};


// Tobii.XR.TobiiXR_EyeTrackingData
struct TobiiXR_EyeTrackingData_t77A57D23997EA5B3B365ABDD60221EFB27BD72EA  : public RuntimeObject
{
public:
	// System.Single Tobii.XR.TobiiXR_EyeTrackingData::Timestamp
	float ___Timestamp_0;
	// System.Single Tobii.XR.TobiiXR_EyeTrackingData::ConvergenceDistance
	float ___ConvergenceDistance_1;
	// System.Boolean Tobii.XR.TobiiXR_EyeTrackingData::ConvergenceDistanceIsValid
	bool ___ConvergenceDistanceIsValid_2;
	// Tobii.XR.TobiiXR_GazeRay Tobii.XR.TobiiXR_EyeTrackingData::GazeRay
	TobiiXR_GazeRay_t0A6DF5B77C70D0342D4C3DBCF5936AAAA9107D32  ___GazeRay_3;
	// System.Boolean Tobii.XR.TobiiXR_EyeTrackingData::IsLeftEyeBlinking
	bool ___IsLeftEyeBlinking_4;
	// System.Boolean Tobii.XR.TobiiXR_EyeTrackingData::IsRightEyeBlinking
	bool ___IsRightEyeBlinking_5;

public:
	inline static int32_t get_offset_of_Timestamp_0() { return static_cast<int32_t>(offsetof(TobiiXR_EyeTrackingData_t77A57D23997EA5B3B365ABDD60221EFB27BD72EA, ___Timestamp_0)); }
	inline float get_Timestamp_0() const { return ___Timestamp_0; }
	inline float* get_address_of_Timestamp_0() { return &___Timestamp_0; }
	inline void set_Timestamp_0(float value)
	{
		___Timestamp_0 = value;
	}

	inline static int32_t get_offset_of_ConvergenceDistance_1() { return static_cast<int32_t>(offsetof(TobiiXR_EyeTrackingData_t77A57D23997EA5B3B365ABDD60221EFB27BD72EA, ___ConvergenceDistance_1)); }
	inline float get_ConvergenceDistance_1() const { return ___ConvergenceDistance_1; }
	inline float* get_address_of_ConvergenceDistance_1() { return &___ConvergenceDistance_1; }
	inline void set_ConvergenceDistance_1(float value)
	{
		___ConvergenceDistance_1 = value;
	}

	inline static int32_t get_offset_of_ConvergenceDistanceIsValid_2() { return static_cast<int32_t>(offsetof(TobiiXR_EyeTrackingData_t77A57D23997EA5B3B365ABDD60221EFB27BD72EA, ___ConvergenceDistanceIsValid_2)); }
	inline bool get_ConvergenceDistanceIsValid_2() const { return ___ConvergenceDistanceIsValid_2; }
	inline bool* get_address_of_ConvergenceDistanceIsValid_2() { return &___ConvergenceDistanceIsValid_2; }
	inline void set_ConvergenceDistanceIsValid_2(bool value)
	{
		___ConvergenceDistanceIsValid_2 = value;
	}

	inline static int32_t get_offset_of_GazeRay_3() { return static_cast<int32_t>(offsetof(TobiiXR_EyeTrackingData_t77A57D23997EA5B3B365ABDD60221EFB27BD72EA, ___GazeRay_3)); }
	inline TobiiXR_GazeRay_t0A6DF5B77C70D0342D4C3DBCF5936AAAA9107D32  get_GazeRay_3() const { return ___GazeRay_3; }
	inline TobiiXR_GazeRay_t0A6DF5B77C70D0342D4C3DBCF5936AAAA9107D32 * get_address_of_GazeRay_3() { return &___GazeRay_3; }
	inline void set_GazeRay_3(TobiiXR_GazeRay_t0A6DF5B77C70D0342D4C3DBCF5936AAAA9107D32  value)
	{
		___GazeRay_3 = value;
	}

	inline static int32_t get_offset_of_IsLeftEyeBlinking_4() { return static_cast<int32_t>(offsetof(TobiiXR_EyeTrackingData_t77A57D23997EA5B3B365ABDD60221EFB27BD72EA, ___IsLeftEyeBlinking_4)); }
	inline bool get_IsLeftEyeBlinking_4() const { return ___IsLeftEyeBlinking_4; }
	inline bool* get_address_of_IsLeftEyeBlinking_4() { return &___IsLeftEyeBlinking_4; }
	inline void set_IsLeftEyeBlinking_4(bool value)
	{
		___IsLeftEyeBlinking_4 = value;
	}

	inline static int32_t get_offset_of_IsRightEyeBlinking_5() { return static_cast<int32_t>(offsetof(TobiiXR_EyeTrackingData_t77A57D23997EA5B3B365ABDD60221EFB27BD72EA, ___IsRightEyeBlinking_5)); }
	inline bool get_IsRightEyeBlinking_5() const { return ___IsRightEyeBlinking_5; }
	inline bool* get_address_of_IsRightEyeBlinking_5() { return &___IsRightEyeBlinking_5; }
	inline void set_IsRightEyeBlinking_5(bool value)
	{
		___IsRightEyeBlinking_5 = value;
	}
};


// Tobii.XR.TobiiXR_Settings
struct TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0  : public RuntimeObject
{
public:
	// Tobii.XR.IEyeTrackingProvider Tobii.XR.TobiiXR_Settings::_eyeTrackingProvider
	RuntimeObject* ____eyeTrackingProvider_1;
	// Tobii.G2OM.G2OM Tobii.XR.TobiiXR_Settings::<G2OM>k__BackingField
	G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C * ___U3CG2OMU3Ek__BackingField_2;
	// Tobii.XR.EyeTrackingFilterBase Tobii.XR.TobiiXR_Settings::EyeTrackingFilter
	EyeTrackingFilterBase_t898096B000FCA3A953F1A9BC81D2648D8CD3C66C * ___EyeTrackingFilter_3;
	// System.Collections.Generic.List`1<Tobii.XR.TobiiXR_Settings/ProviderElement> Tobii.XR.TobiiXR_Settings::StandaloneEyeTrackingProviders
	List_1_t047270E2141D972A607E0D91E0E16FD0FFFC2D07 * ___StandaloneEyeTrackingProviders_4;
	// System.Collections.Generic.List`1<Tobii.XR.TobiiXR_Settings/ProviderElement> Tobii.XR.TobiiXR_Settings::AndroidEyeTrackingProviders
	List_1_t047270E2141D972A607E0D91E0E16FD0FFFC2D07 * ___AndroidEyeTrackingProviders_5;
	// UnityEngine.LayerMask Tobii.XR.TobiiXR_Settings::LayerMask
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___LayerMask_6;
	// System.Single Tobii.XR.TobiiXR_Settings::HowLongToKeepCandidatesInSeconds
	float ___HowLongToKeepCandidatesInSeconds_7;
	// System.Boolean Tobii.XR.TobiiXR_Settings::AdvancedEnabled
	bool ___AdvancedEnabled_8;
	// System.String Tobii.XR.TobiiXR_Settings::OcumenLicense
	String_t* ___OcumenLicense_9;
	// UnityEngine.TextAsset Tobii.XR.TobiiXR_Settings::LicenseAsset
	TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * ___LicenseAsset_10;

public:
	inline static int32_t get_offset_of__eyeTrackingProvider_1() { return static_cast<int32_t>(offsetof(TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0, ____eyeTrackingProvider_1)); }
	inline RuntimeObject* get__eyeTrackingProvider_1() const { return ____eyeTrackingProvider_1; }
	inline RuntimeObject** get_address_of__eyeTrackingProvider_1() { return &____eyeTrackingProvider_1; }
	inline void set__eyeTrackingProvider_1(RuntimeObject* value)
	{
		____eyeTrackingProvider_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____eyeTrackingProvider_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CG2OMU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0, ___U3CG2OMU3Ek__BackingField_2)); }
	inline G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C * get_U3CG2OMU3Ek__BackingField_2() const { return ___U3CG2OMU3Ek__BackingField_2; }
	inline G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C ** get_address_of_U3CG2OMU3Ek__BackingField_2() { return &___U3CG2OMU3Ek__BackingField_2; }
	inline void set_U3CG2OMU3Ek__BackingField_2(G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C * value)
	{
		___U3CG2OMU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CG2OMU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_EyeTrackingFilter_3() { return static_cast<int32_t>(offsetof(TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0, ___EyeTrackingFilter_3)); }
	inline EyeTrackingFilterBase_t898096B000FCA3A953F1A9BC81D2648D8CD3C66C * get_EyeTrackingFilter_3() const { return ___EyeTrackingFilter_3; }
	inline EyeTrackingFilterBase_t898096B000FCA3A953F1A9BC81D2648D8CD3C66C ** get_address_of_EyeTrackingFilter_3() { return &___EyeTrackingFilter_3; }
	inline void set_EyeTrackingFilter_3(EyeTrackingFilterBase_t898096B000FCA3A953F1A9BC81D2648D8CD3C66C * value)
	{
		___EyeTrackingFilter_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EyeTrackingFilter_3), (void*)value);
	}

	inline static int32_t get_offset_of_StandaloneEyeTrackingProviders_4() { return static_cast<int32_t>(offsetof(TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0, ___StandaloneEyeTrackingProviders_4)); }
	inline List_1_t047270E2141D972A607E0D91E0E16FD0FFFC2D07 * get_StandaloneEyeTrackingProviders_4() const { return ___StandaloneEyeTrackingProviders_4; }
	inline List_1_t047270E2141D972A607E0D91E0E16FD0FFFC2D07 ** get_address_of_StandaloneEyeTrackingProviders_4() { return &___StandaloneEyeTrackingProviders_4; }
	inline void set_StandaloneEyeTrackingProviders_4(List_1_t047270E2141D972A607E0D91E0E16FD0FFFC2D07 * value)
	{
		___StandaloneEyeTrackingProviders_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StandaloneEyeTrackingProviders_4), (void*)value);
	}

	inline static int32_t get_offset_of_AndroidEyeTrackingProviders_5() { return static_cast<int32_t>(offsetof(TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0, ___AndroidEyeTrackingProviders_5)); }
	inline List_1_t047270E2141D972A607E0D91E0E16FD0FFFC2D07 * get_AndroidEyeTrackingProviders_5() const { return ___AndroidEyeTrackingProviders_5; }
	inline List_1_t047270E2141D972A607E0D91E0E16FD0FFFC2D07 ** get_address_of_AndroidEyeTrackingProviders_5() { return &___AndroidEyeTrackingProviders_5; }
	inline void set_AndroidEyeTrackingProviders_5(List_1_t047270E2141D972A607E0D91E0E16FD0FFFC2D07 * value)
	{
		___AndroidEyeTrackingProviders_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AndroidEyeTrackingProviders_5), (void*)value);
	}

	inline static int32_t get_offset_of_LayerMask_6() { return static_cast<int32_t>(offsetof(TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0, ___LayerMask_6)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_LayerMask_6() const { return ___LayerMask_6; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_LayerMask_6() { return &___LayerMask_6; }
	inline void set_LayerMask_6(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___LayerMask_6 = value;
	}

	inline static int32_t get_offset_of_HowLongToKeepCandidatesInSeconds_7() { return static_cast<int32_t>(offsetof(TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0, ___HowLongToKeepCandidatesInSeconds_7)); }
	inline float get_HowLongToKeepCandidatesInSeconds_7() const { return ___HowLongToKeepCandidatesInSeconds_7; }
	inline float* get_address_of_HowLongToKeepCandidatesInSeconds_7() { return &___HowLongToKeepCandidatesInSeconds_7; }
	inline void set_HowLongToKeepCandidatesInSeconds_7(float value)
	{
		___HowLongToKeepCandidatesInSeconds_7 = value;
	}

	inline static int32_t get_offset_of_AdvancedEnabled_8() { return static_cast<int32_t>(offsetof(TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0, ___AdvancedEnabled_8)); }
	inline bool get_AdvancedEnabled_8() const { return ___AdvancedEnabled_8; }
	inline bool* get_address_of_AdvancedEnabled_8() { return &___AdvancedEnabled_8; }
	inline void set_AdvancedEnabled_8(bool value)
	{
		___AdvancedEnabled_8 = value;
	}

	inline static int32_t get_offset_of_OcumenLicense_9() { return static_cast<int32_t>(offsetof(TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0, ___OcumenLicense_9)); }
	inline String_t* get_OcumenLicense_9() const { return ___OcumenLicense_9; }
	inline String_t** get_address_of_OcumenLicense_9() { return &___OcumenLicense_9; }
	inline void set_OcumenLicense_9(String_t* value)
	{
		___OcumenLicense_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OcumenLicense_9), (void*)value);
	}

	inline static int32_t get_offset_of_LicenseAsset_10() { return static_cast<int32_t>(offsetof(TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0, ___LicenseAsset_10)); }
	inline TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * get_LicenseAsset_10() const { return ___LicenseAsset_10; }
	inline TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 ** get_address_of_LicenseAsset_10() { return &___LicenseAsset_10; }
	inline void set_LicenseAsset_10(TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * value)
	{
		___LicenseAsset_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LicenseAsset_10), (void*)value);
	}
};

struct TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0_StaticFields
{
public:
	// UnityEngine.RuntimePlatform Tobii.XR.TobiiXR_Settings::_platform
	int32_t ____platform_0;

public:
	inline static int32_t get_offset_of__platform_0() { return static_cast<int32_t>(offsetof(TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0_StaticFields, ____platform_0)); }
	inline int32_t get__platform_0() const { return ____platform_0; }
	inline int32_t* get_address_of__platform_0() { return &____platform_0; }
	inline void set__platform_0(int32_t value)
	{
		____platform_0 = value;
	}
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// Tobii.XR.UIGazeButtonGraphics/<AnimateButton>d__20
struct U3CAnimateButtonU3Ed__20_t206BE52250D8631429CA487BD86A828BD76754A6  : public RuntimeObject
{
public:
	// System.Int32 Tobii.XR.UIGazeButtonGraphics/<AnimateButton>d__20::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Tobii.XR.UIGazeButtonGraphics/<AnimateButton>d__20::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Tobii.XR.UIGazeButtonGraphics Tobii.XR.UIGazeButtonGraphics/<AnimateButton>d__20::<>4__this
	UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3 * ___U3CU3E4__this_2;
	// Tobii.XR.ButtonState Tobii.XR.UIGazeButtonGraphics/<AnimateButton>d__20::currentButtonState
	int32_t ___currentButtonState_3;
	// System.Single Tobii.XR.UIGazeButtonGraphics/<AnimateButton>d__20::duration
	float ___duration_4;
	// UnityEngine.AnimationCurve Tobii.XR.UIGazeButtonGraphics/<AnimateButton>d__20::animationCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___animationCurve_5;
	// UnityEngine.Color Tobii.XR.UIGazeButtonGraphics/<AnimateButton>d__20::<startBackgroundColor>5__2
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CstartBackgroundColorU3E5__2_6;
	// UnityEngine.Color Tobii.XR.UIGazeButtonGraphics/<AnimateButton>d__20::<startLabelColor>5__3
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CstartLabelColorU3E5__3_7;
	// UnityEngine.Vector3 Tobii.XR.UIGazeButtonGraphics/<AnimateButton>d__20::<startButtonScale>5__4
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CstartButtonScaleU3E5__4_8;
	// UnityEngine.Color Tobii.XR.UIGazeButtonGraphics/<AnimateButton>d__20::<endBackgroundColor>5__5
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CendBackgroundColorU3E5__5_9;
	// UnityEngine.Color Tobii.XR.UIGazeButtonGraphics/<AnimateButton>d__20::<endLabelColor>5__6
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CendLabelColorU3E5__6_10;
	// UnityEngine.Vector3 Tobii.XR.UIGazeButtonGraphics/<AnimateButton>d__20::<endButtonScale>5__7
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CendButtonScaleU3E5__7_11;
	// System.Single Tobii.XR.UIGazeButtonGraphics/<AnimateButton>d__20::<progress>5__8
	float ___U3CprogressU3E5__8_12;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAnimateButtonU3Ed__20_t206BE52250D8631429CA487BD86A828BD76754A6, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAnimateButtonU3Ed__20_t206BE52250D8631429CA487BD86A828BD76754A6, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CAnimateButtonU3Ed__20_t206BE52250D8631429CA487BD86A828BD76754A6, ___U3CU3E4__this_2)); }
	inline UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_currentButtonState_3() { return static_cast<int32_t>(offsetof(U3CAnimateButtonU3Ed__20_t206BE52250D8631429CA487BD86A828BD76754A6, ___currentButtonState_3)); }
	inline int32_t get_currentButtonState_3() const { return ___currentButtonState_3; }
	inline int32_t* get_address_of_currentButtonState_3() { return &___currentButtonState_3; }
	inline void set_currentButtonState_3(int32_t value)
	{
		___currentButtonState_3 = value;
	}

	inline static int32_t get_offset_of_duration_4() { return static_cast<int32_t>(offsetof(U3CAnimateButtonU3Ed__20_t206BE52250D8631429CA487BD86A828BD76754A6, ___duration_4)); }
	inline float get_duration_4() const { return ___duration_4; }
	inline float* get_address_of_duration_4() { return &___duration_4; }
	inline void set_duration_4(float value)
	{
		___duration_4 = value;
	}

	inline static int32_t get_offset_of_animationCurve_5() { return static_cast<int32_t>(offsetof(U3CAnimateButtonU3Ed__20_t206BE52250D8631429CA487BD86A828BD76754A6, ___animationCurve_5)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_animationCurve_5() const { return ___animationCurve_5; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_animationCurve_5() { return &___animationCurve_5; }
	inline void set_animationCurve_5(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___animationCurve_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animationCurve_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstartBackgroundColorU3E5__2_6() { return static_cast<int32_t>(offsetof(U3CAnimateButtonU3Ed__20_t206BE52250D8631429CA487BD86A828BD76754A6, ___U3CstartBackgroundColorU3E5__2_6)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CstartBackgroundColorU3E5__2_6() const { return ___U3CstartBackgroundColorU3E5__2_6; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CstartBackgroundColorU3E5__2_6() { return &___U3CstartBackgroundColorU3E5__2_6; }
	inline void set_U3CstartBackgroundColorU3E5__2_6(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CstartBackgroundColorU3E5__2_6 = value;
	}

	inline static int32_t get_offset_of_U3CstartLabelColorU3E5__3_7() { return static_cast<int32_t>(offsetof(U3CAnimateButtonU3Ed__20_t206BE52250D8631429CA487BD86A828BD76754A6, ___U3CstartLabelColorU3E5__3_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CstartLabelColorU3E5__3_7() const { return ___U3CstartLabelColorU3E5__3_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CstartLabelColorU3E5__3_7() { return &___U3CstartLabelColorU3E5__3_7; }
	inline void set_U3CstartLabelColorU3E5__3_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CstartLabelColorU3E5__3_7 = value;
	}

	inline static int32_t get_offset_of_U3CstartButtonScaleU3E5__4_8() { return static_cast<int32_t>(offsetof(U3CAnimateButtonU3Ed__20_t206BE52250D8631429CA487BD86A828BD76754A6, ___U3CstartButtonScaleU3E5__4_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CstartButtonScaleU3E5__4_8() const { return ___U3CstartButtonScaleU3E5__4_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CstartButtonScaleU3E5__4_8() { return &___U3CstartButtonScaleU3E5__4_8; }
	inline void set_U3CstartButtonScaleU3E5__4_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CstartButtonScaleU3E5__4_8 = value;
	}

	inline static int32_t get_offset_of_U3CendBackgroundColorU3E5__5_9() { return static_cast<int32_t>(offsetof(U3CAnimateButtonU3Ed__20_t206BE52250D8631429CA487BD86A828BD76754A6, ___U3CendBackgroundColorU3E5__5_9)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CendBackgroundColorU3E5__5_9() const { return ___U3CendBackgroundColorU3E5__5_9; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CendBackgroundColorU3E5__5_9() { return &___U3CendBackgroundColorU3E5__5_9; }
	inline void set_U3CendBackgroundColorU3E5__5_9(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CendBackgroundColorU3E5__5_9 = value;
	}

	inline static int32_t get_offset_of_U3CendLabelColorU3E5__6_10() { return static_cast<int32_t>(offsetof(U3CAnimateButtonU3Ed__20_t206BE52250D8631429CA487BD86A828BD76754A6, ___U3CendLabelColorU3E5__6_10)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CendLabelColorU3E5__6_10() const { return ___U3CendLabelColorU3E5__6_10; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CendLabelColorU3E5__6_10() { return &___U3CendLabelColorU3E5__6_10; }
	inline void set_U3CendLabelColorU3E5__6_10(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CendLabelColorU3E5__6_10 = value;
	}

	inline static int32_t get_offset_of_U3CendButtonScaleU3E5__7_11() { return static_cast<int32_t>(offsetof(U3CAnimateButtonU3Ed__20_t206BE52250D8631429CA487BD86A828BD76754A6, ___U3CendButtonScaleU3E5__7_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CendButtonScaleU3E5__7_11() const { return ___U3CendButtonScaleU3E5__7_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CendButtonScaleU3E5__7_11() { return &___U3CendButtonScaleU3E5__7_11; }
	inline void set_U3CendButtonScaleU3E5__7_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CendButtonScaleU3E5__7_11 = value;
	}

	inline static int32_t get_offset_of_U3CprogressU3E5__8_12() { return static_cast<int32_t>(offsetof(U3CAnimateButtonU3Ed__20_t206BE52250D8631429CA487BD86A828BD76754A6, ___U3CprogressU3E5__8_12)); }
	inline float get_U3CprogressU3E5__8_12() const { return ___U3CprogressU3E5__8_12; }
	inline float* get_address_of_U3CprogressU3E5__8_12() { return &___U3CprogressU3E5__8_12; }
	inline void set_U3CprogressU3E5__8_12(float value)
	{
		___U3CprogressU3E5__8_12 = value;
	}
};


// System.Func`1<Tobii.XR.Internal.TobiiEulaFile>
struct Func_1_t260F34DDA6149F57AC12F143882952B9B8673B6A  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Reflection.Assembly,System.Collections.Generic.IEnumerable`1<System.Type>>
struct Func_2_tE0DBF080012BEFCAB3A265240B5CD35BD3519412  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Tobii.XR.IEyeTrackingProvider,System.Boolean>
struct Func_2_t0D121E24665C7C6EBDEE662FD349B058C314168D  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Type,System.Boolean>
struct Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Type,Tobii.XR.IEyeTrackingProvider>
struct Func_2_t37CB4832DBF1755273858A77BAAC6B4B50B9444D  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Tobii.XR.TobiiXR_Settings/ProviderElement,System.Type>
struct Func_2_tD834A382C7BC9720A3941F056FF6626757F128C1  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Tobii.G2OM.G2OM_DeviceData
struct G2OM_DeviceData_t89D8C181AD591B39B1DB1F185A0252ACCF616F14 
{
public:
	// System.Single Tobii.G2OM.G2OM_DeviceData::timestamp
	float ___timestamp_0;
	// Tobii.G2OM.G2OM_GazeRay Tobii.G2OM.G2OM_DeviceData::gaze_ray_world_space
	G2OM_GazeRay_t58E094CB5E4078AB25F3A3857BF5049FF04342EA  ___gaze_ray_world_space_1;
	// Tobii.G2OM.G2OM_Vector3 Tobii.G2OM.G2OM_DeviceData::camera_up_direction_world_space
	G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D  ___camera_up_direction_world_space_2;
	// Tobii.G2OM.G2OM_Vector3 Tobii.G2OM.G2OM_DeviceData::camera_right_direction_world_space
	G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D  ___camera_right_direction_world_space_3;

public:
	inline static int32_t get_offset_of_timestamp_0() { return static_cast<int32_t>(offsetof(G2OM_DeviceData_t89D8C181AD591B39B1DB1F185A0252ACCF616F14, ___timestamp_0)); }
	inline float get_timestamp_0() const { return ___timestamp_0; }
	inline float* get_address_of_timestamp_0() { return &___timestamp_0; }
	inline void set_timestamp_0(float value)
	{
		___timestamp_0 = value;
	}

	inline static int32_t get_offset_of_gaze_ray_world_space_1() { return static_cast<int32_t>(offsetof(G2OM_DeviceData_t89D8C181AD591B39B1DB1F185A0252ACCF616F14, ___gaze_ray_world_space_1)); }
	inline G2OM_GazeRay_t58E094CB5E4078AB25F3A3857BF5049FF04342EA  get_gaze_ray_world_space_1() const { return ___gaze_ray_world_space_1; }
	inline G2OM_GazeRay_t58E094CB5E4078AB25F3A3857BF5049FF04342EA * get_address_of_gaze_ray_world_space_1() { return &___gaze_ray_world_space_1; }
	inline void set_gaze_ray_world_space_1(G2OM_GazeRay_t58E094CB5E4078AB25F3A3857BF5049FF04342EA  value)
	{
		___gaze_ray_world_space_1 = value;
	}

	inline static int32_t get_offset_of_camera_up_direction_world_space_2() { return static_cast<int32_t>(offsetof(G2OM_DeviceData_t89D8C181AD591B39B1DB1F185A0252ACCF616F14, ___camera_up_direction_world_space_2)); }
	inline G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D  get_camera_up_direction_world_space_2() const { return ___camera_up_direction_world_space_2; }
	inline G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D * get_address_of_camera_up_direction_world_space_2() { return &___camera_up_direction_world_space_2; }
	inline void set_camera_up_direction_world_space_2(G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D  value)
	{
		___camera_up_direction_world_space_2 = value;
	}

	inline static int32_t get_offset_of_camera_right_direction_world_space_3() { return static_cast<int32_t>(offsetof(G2OM_DeviceData_t89D8C181AD591B39B1DB1F185A0252ACCF616F14, ___camera_right_direction_world_space_3)); }
	inline G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D  get_camera_right_direction_world_space_3() const { return ___camera_right_direction_world_space_3; }
	inline G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D * get_address_of_camera_right_direction_world_space_3() { return &___camera_right_direction_world_space_3; }
	inline void set_camera_right_direction_world_space_3(G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D  value)
	{
		___camera_right_direction_world_space_3 = value;
	}
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Tobii.XR.Internal.TobiiEulaFile
struct TobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Boolean Tobii.XR.Internal.TobiiEulaFile::_tobiiSDKEulaAccepted
	bool ____tobiiSDKEulaAccepted_4;

public:
	inline static int32_t get_offset_of__tobiiSDKEulaAccepted_4() { return static_cast<int32_t>(offsetof(TobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466, ____tobiiSDKEulaAccepted_4)); }
	inline bool get__tobiiSDKEulaAccepted_4() const { return ____tobiiSDKEulaAccepted_4; }
	inline bool* get_address_of__tobiiSDKEulaAccepted_4() { return &____tobiiSDKEulaAccepted_4; }
	inline void set__tobiiSDKEulaAccepted_4(bool value)
	{
		____tobiiSDKEulaAccepted_4 = value;
	}
};

struct TobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466_StaticFields
{
public:
	// System.String Tobii.XR.Internal.TobiiEulaFile::TobiiEulaFilePath
	String_t* ___TobiiEulaFilePath_5;
	// System.Func`1<Tobii.XR.Internal.TobiiEulaFile> Tobii.XR.Internal.TobiiEulaFile::LoadEulaFile
	Func_1_t260F34DDA6149F57AC12F143882952B9B8673B6A * ___LoadEulaFile_6;

public:
	inline static int32_t get_offset_of_TobiiEulaFilePath_5() { return static_cast<int32_t>(offsetof(TobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466_StaticFields, ___TobiiEulaFilePath_5)); }
	inline String_t* get_TobiiEulaFilePath_5() const { return ___TobiiEulaFilePath_5; }
	inline String_t** get_address_of_TobiiEulaFilePath_5() { return &___TobiiEulaFilePath_5; }
	inline void set_TobiiEulaFilePath_5(String_t* value)
	{
		___TobiiEulaFilePath_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TobiiEulaFilePath_5), (void*)value);
	}

	inline static int32_t get_offset_of_LoadEulaFile_6() { return static_cast<int32_t>(offsetof(TobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466_StaticFields, ___LoadEulaFile_6)); }
	inline Func_1_t260F34DDA6149F57AC12F143882952B9B8673B6A * get_LoadEulaFile_6() const { return ___LoadEulaFile_6; }
	inline Func_1_t260F34DDA6149F57AC12F143882952B9B8673B6A ** get_address_of_LoadEulaFile_6() { return &___LoadEulaFile_6; }
	inline void set_LoadEulaFile_6(Func_1_t260F34DDA6149F57AC12F143882952B9B8673B6A * value)
	{
		___LoadEulaFile_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LoadEulaFile_6), (void*)value);
	}
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Tobii.G2OM.G2OM
struct G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C  : public RuntimeObject
{
public:
	// Tobii.G2OM.IG2OM_ObjectFinder Tobii.G2OM.G2OM::_objectFinder
	RuntimeObject* ____objectFinder_0;
	// Tobii.G2OM.IG2OM_ColliderDataProvider Tobii.G2OM.G2OM::_colliderDataProvider
	RuntimeObject* ____colliderDataProvider_1;
	// Tobii.G2OM.IG2OM_ObjectDistinguisher Tobii.G2OM.G2OM::_distinguisher
	RuntimeObject* ____distinguisher_2;
	// Tobii.G2OM.IG2OM_PostTicker Tobii.G2OM.G2OM::_postTicker
	RuntimeObject* ____postTicker_3;
	// Tobii.G2OM.IG2OM_Context Tobii.G2OM.G2OM::_context
	RuntimeObject* ____context_4;
	// System.Collections.Generic.Dictionary`2<System.Int32,Tobii.G2OM.InternalCandidate> Tobii.G2OM.G2OM::_internalCandidates
	Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9 * ____internalCandidates_5;
	// System.Single Tobii.G2OM.G2OM::_howLongToKeepCandidatesInMemory
	float ____howLongToKeepCandidatesInMemory_6;
	// System.Int32 Tobii.G2OM.G2OM::_internalCapacity
	int32_t ____internalCapacity_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject> Tobii.G2OM.G2OM::_newCandidates
	Dictionary_2_t62F8E88182F28FE8A3E61CDA9445309B4DE28C09 * ____newCandidates_8;
	// System.Collections.Generic.List`1<System.Int32> Tobii.G2OM.G2OM::_keysToRemove
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ____keysToRemove_9;
	// System.Collections.Generic.List`1<Tobii.G2OM.FocusedCandidate> Tobii.G2OM.G2OM::_gazeFocusedObjects
	List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C * ____gazeFocusedObjects_10;
	// Tobii.G2OM.G2OM_DeviceData Tobii.G2OM.G2OM::_deviceData
	G2OM_DeviceData_t89D8C181AD591B39B1DB1F185A0252ACCF616F14  ____deviceData_11;
	// Tobii.G2OM.G2OM_Candidate[] Tobii.G2OM.G2OM::_nativeCandidates
	G2OM_CandidateU5BU5D_t7CEC092C766EEA7361EF48AA914B042BC20BFF1E* ____nativeCandidates_12;
	// Tobii.G2OM.G2OM_CandidateResult[] Tobii.G2OM.G2OM::_nativeCandidatesResult
	G2OM_CandidateResultU5BU5D_tAB848527789DB0EBAD0DD5B7914AAFFEC0EEEC02* ____nativeCandidatesResult_13;

public:
	inline static int32_t get_offset_of__objectFinder_0() { return static_cast<int32_t>(offsetof(G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C, ____objectFinder_0)); }
	inline RuntimeObject* get__objectFinder_0() const { return ____objectFinder_0; }
	inline RuntimeObject** get_address_of__objectFinder_0() { return &____objectFinder_0; }
	inline void set__objectFinder_0(RuntimeObject* value)
	{
		____objectFinder_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____objectFinder_0), (void*)value);
	}

	inline static int32_t get_offset_of__colliderDataProvider_1() { return static_cast<int32_t>(offsetof(G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C, ____colliderDataProvider_1)); }
	inline RuntimeObject* get__colliderDataProvider_1() const { return ____colliderDataProvider_1; }
	inline RuntimeObject** get_address_of__colliderDataProvider_1() { return &____colliderDataProvider_1; }
	inline void set__colliderDataProvider_1(RuntimeObject* value)
	{
		____colliderDataProvider_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____colliderDataProvider_1), (void*)value);
	}

	inline static int32_t get_offset_of__distinguisher_2() { return static_cast<int32_t>(offsetof(G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C, ____distinguisher_2)); }
	inline RuntimeObject* get__distinguisher_2() const { return ____distinguisher_2; }
	inline RuntimeObject** get_address_of__distinguisher_2() { return &____distinguisher_2; }
	inline void set__distinguisher_2(RuntimeObject* value)
	{
		____distinguisher_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____distinguisher_2), (void*)value);
	}

	inline static int32_t get_offset_of__postTicker_3() { return static_cast<int32_t>(offsetof(G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C, ____postTicker_3)); }
	inline RuntimeObject* get__postTicker_3() const { return ____postTicker_3; }
	inline RuntimeObject** get_address_of__postTicker_3() { return &____postTicker_3; }
	inline void set__postTicker_3(RuntimeObject* value)
	{
		____postTicker_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____postTicker_3), (void*)value);
	}

	inline static int32_t get_offset_of__context_4() { return static_cast<int32_t>(offsetof(G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C, ____context_4)); }
	inline RuntimeObject* get__context_4() const { return ____context_4; }
	inline RuntimeObject** get_address_of__context_4() { return &____context_4; }
	inline void set__context_4(RuntimeObject* value)
	{
		____context_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____context_4), (void*)value);
	}

	inline static int32_t get_offset_of__internalCandidates_5() { return static_cast<int32_t>(offsetof(G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C, ____internalCandidates_5)); }
	inline Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9 * get__internalCandidates_5() const { return ____internalCandidates_5; }
	inline Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9 ** get_address_of__internalCandidates_5() { return &____internalCandidates_5; }
	inline void set__internalCandidates_5(Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9 * value)
	{
		____internalCandidates_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____internalCandidates_5), (void*)value);
	}

	inline static int32_t get_offset_of__howLongToKeepCandidatesInMemory_6() { return static_cast<int32_t>(offsetof(G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C, ____howLongToKeepCandidatesInMemory_6)); }
	inline float get__howLongToKeepCandidatesInMemory_6() const { return ____howLongToKeepCandidatesInMemory_6; }
	inline float* get_address_of__howLongToKeepCandidatesInMemory_6() { return &____howLongToKeepCandidatesInMemory_6; }
	inline void set__howLongToKeepCandidatesInMemory_6(float value)
	{
		____howLongToKeepCandidatesInMemory_6 = value;
	}

	inline static int32_t get_offset_of__internalCapacity_7() { return static_cast<int32_t>(offsetof(G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C, ____internalCapacity_7)); }
	inline int32_t get__internalCapacity_7() const { return ____internalCapacity_7; }
	inline int32_t* get_address_of__internalCapacity_7() { return &____internalCapacity_7; }
	inline void set__internalCapacity_7(int32_t value)
	{
		____internalCapacity_7 = value;
	}

	inline static int32_t get_offset_of__newCandidates_8() { return static_cast<int32_t>(offsetof(G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C, ____newCandidates_8)); }
	inline Dictionary_2_t62F8E88182F28FE8A3E61CDA9445309B4DE28C09 * get__newCandidates_8() const { return ____newCandidates_8; }
	inline Dictionary_2_t62F8E88182F28FE8A3E61CDA9445309B4DE28C09 ** get_address_of__newCandidates_8() { return &____newCandidates_8; }
	inline void set__newCandidates_8(Dictionary_2_t62F8E88182F28FE8A3E61CDA9445309B4DE28C09 * value)
	{
		____newCandidates_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____newCandidates_8), (void*)value);
	}

	inline static int32_t get_offset_of__keysToRemove_9() { return static_cast<int32_t>(offsetof(G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C, ____keysToRemove_9)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get__keysToRemove_9() const { return ____keysToRemove_9; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of__keysToRemove_9() { return &____keysToRemove_9; }
	inline void set__keysToRemove_9(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		____keysToRemove_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____keysToRemove_9), (void*)value);
	}

	inline static int32_t get_offset_of__gazeFocusedObjects_10() { return static_cast<int32_t>(offsetof(G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C, ____gazeFocusedObjects_10)); }
	inline List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C * get__gazeFocusedObjects_10() const { return ____gazeFocusedObjects_10; }
	inline List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C ** get_address_of__gazeFocusedObjects_10() { return &____gazeFocusedObjects_10; }
	inline void set__gazeFocusedObjects_10(List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C * value)
	{
		____gazeFocusedObjects_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____gazeFocusedObjects_10), (void*)value);
	}

	inline static int32_t get_offset_of__deviceData_11() { return static_cast<int32_t>(offsetof(G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C, ____deviceData_11)); }
	inline G2OM_DeviceData_t89D8C181AD591B39B1DB1F185A0252ACCF616F14  get__deviceData_11() const { return ____deviceData_11; }
	inline G2OM_DeviceData_t89D8C181AD591B39B1DB1F185A0252ACCF616F14 * get_address_of__deviceData_11() { return &____deviceData_11; }
	inline void set__deviceData_11(G2OM_DeviceData_t89D8C181AD591B39B1DB1F185A0252ACCF616F14  value)
	{
		____deviceData_11 = value;
	}

	inline static int32_t get_offset_of__nativeCandidates_12() { return static_cast<int32_t>(offsetof(G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C, ____nativeCandidates_12)); }
	inline G2OM_CandidateU5BU5D_t7CEC092C766EEA7361EF48AA914B042BC20BFF1E* get__nativeCandidates_12() const { return ____nativeCandidates_12; }
	inline G2OM_CandidateU5BU5D_t7CEC092C766EEA7361EF48AA914B042BC20BFF1E** get_address_of__nativeCandidates_12() { return &____nativeCandidates_12; }
	inline void set__nativeCandidates_12(G2OM_CandidateU5BU5D_t7CEC092C766EEA7361EF48AA914B042BC20BFF1E* value)
	{
		____nativeCandidates_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____nativeCandidates_12), (void*)value);
	}

	inline static int32_t get_offset_of__nativeCandidatesResult_13() { return static_cast<int32_t>(offsetof(G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C, ____nativeCandidatesResult_13)); }
	inline G2OM_CandidateResultU5BU5D_tAB848527789DB0EBAD0DD5B7914AAFFEC0EEEC02* get__nativeCandidatesResult_13() const { return ____nativeCandidatesResult_13; }
	inline G2OM_CandidateResultU5BU5D_tAB848527789DB0EBAD0DD5B7914AAFFEC0EEEC02** get_address_of__nativeCandidatesResult_13() { return &____nativeCandidatesResult_13; }
	inline void set__nativeCandidatesResult_13(G2OM_CandidateResultU5BU5D_tAB848527789DB0EBAD0DD5B7914AAFFEC0EEEC02* value)
	{
		____nativeCandidatesResult_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____nativeCandidatesResult_13), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072  : public Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1
{
public:

public:
};

struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// Tobii.XR.ControllerManager
struct ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform Tobii.XR.ControllerManager::_roomOrigin
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ____roomOrigin_4;
	// UnityEngine.Vector3 Tobii.XR.ControllerManager::_lastPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____lastPosition_8;
	// UnityEngine.Quaternion Tobii.XR.ControllerManager::_lastRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ____lastRotation_9;
	// UnityEngine.Vector3 Tobii.XR.ControllerManager::_velocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____velocity_10;
	// UnityEngine.Vector3 Tobii.XR.ControllerManager::_angularVelocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____angularVelocity_11;

public:
	inline static int32_t get_offset_of__roomOrigin_4() { return static_cast<int32_t>(offsetof(ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C, ____roomOrigin_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get__roomOrigin_4() const { return ____roomOrigin_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of__roomOrigin_4() { return &____roomOrigin_4; }
	inline void set__roomOrigin_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		____roomOrigin_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____roomOrigin_4), (void*)value);
	}

	inline static int32_t get_offset_of__lastPosition_8() { return static_cast<int32_t>(offsetof(ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C, ____lastPosition_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__lastPosition_8() const { return ____lastPosition_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__lastPosition_8() { return &____lastPosition_8; }
	inline void set__lastPosition_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____lastPosition_8 = value;
	}

	inline static int32_t get_offset_of__lastRotation_9() { return static_cast<int32_t>(offsetof(ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C, ____lastRotation_9)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get__lastRotation_9() const { return ____lastRotation_9; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of__lastRotation_9() { return &____lastRotation_9; }
	inline void set__lastRotation_9(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		____lastRotation_9 = value;
	}

	inline static int32_t get_offset_of__velocity_10() { return static_cast<int32_t>(offsetof(ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C, ____velocity_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__velocity_10() const { return ____velocity_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__velocity_10() { return &____velocity_10; }
	inline void set__velocity_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____velocity_10 = value;
	}

	inline static int32_t get_offset_of__angularVelocity_11() { return static_cast<int32_t>(offsetof(ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C, ____angularVelocity_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__angularVelocity_11() const { return ____angularVelocity_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__angularVelocity_11() { return &____angularVelocity_11; }
	inline void set__angularVelocity_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____angularVelocity_11 = value;
	}
};

struct ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C_StaticFields
{
public:
	// UnityEngine.GameObject Tobii.XR.ControllerManager::_gameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____gameObject_5;
	// Tobii.XR.ControllerManager Tobii.XR.ControllerManager::_instance
	ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C * ____instance_6;
	// Tobii.XR.IControllerAdapter Tobii.XR.ControllerManager::_controllerAdapter
	RuntimeObject* ____controllerAdapter_7;

public:
	inline static int32_t get_offset_of__gameObject_5() { return static_cast<int32_t>(offsetof(ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C_StaticFields, ____gameObject_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__gameObject_5() const { return ____gameObject_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__gameObject_5() { return &____gameObject_5; }
	inline void set__gameObject_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____gameObject_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____gameObject_5), (void*)value);
	}

	inline static int32_t get_offset_of__instance_6() { return static_cast<int32_t>(offsetof(ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C_StaticFields, ____instance_6)); }
	inline ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C * get__instance_6() const { return ____instance_6; }
	inline ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C ** get_address_of__instance_6() { return &____instance_6; }
	inline void set__instance_6(ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C * value)
	{
		____instance_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_6), (void*)value);
	}

	inline static int32_t get_offset_of__controllerAdapter_7() { return static_cast<int32_t>(offsetof(ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C_StaticFields, ____controllerAdapter_7)); }
	inline RuntimeObject* get__controllerAdapter_7() const { return ____controllerAdapter_7; }
	inline RuntimeObject** get_address_of__controllerAdapter_7() { return &____controllerAdapter_7; }
	inline void set__controllerAdapter_7(RuntimeObject* value)
	{
		____controllerAdapter_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____controllerAdapter_7), (void*)value);
	}
};


// Tobii.XR.EyeTrackingFilterBase
struct EyeTrackingFilterBase_t898096B000FCA3A953F1A9BC81D2648D8CD3C66C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// TobiiXR_Initializer
struct TobiiXR_Initializer_t6E6B5AF7DF774175B1F4BD7B27E636E4489D8286  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Tobii.XR.TobiiXR_Settings TobiiXR_Initializer::Settings
	TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0 * ___Settings_4;

public:
	inline static int32_t get_offset_of_Settings_4() { return static_cast<int32_t>(offsetof(TobiiXR_Initializer_t6E6B5AF7DF774175B1F4BD7B27E636E4489D8286, ___Settings_4)); }
	inline TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0 * get_Settings_4() const { return ___Settings_4; }
	inline TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0 ** get_address_of_Settings_4() { return &___Settings_4; }
	inline void set_Settings_4(TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0 * value)
	{
		___Settings_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Settings_4), (void*)value);
	}
};


// Tobii.XR.Internal.TobiiXR_Lifecycle
struct TobiiXR_Lifecycle_t5A45FF952AADCB1A985E3D365599A048F5142195  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Action Tobii.XR.Internal.TobiiXR_Lifecycle::OnApplicationQuitAction
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnApplicationQuitAction_4;
	// System.Action Tobii.XR.Internal.TobiiXR_Lifecycle::OnUpdateAction
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnUpdateAction_5;
	// System.Action Tobii.XR.Internal.TobiiXR_Lifecycle::OnDisableAction
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnDisableAction_6;

public:
	inline static int32_t get_offset_of_OnApplicationQuitAction_4() { return static_cast<int32_t>(offsetof(TobiiXR_Lifecycle_t5A45FF952AADCB1A985E3D365599A048F5142195, ___OnApplicationQuitAction_4)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnApplicationQuitAction_4() const { return ___OnApplicationQuitAction_4; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnApplicationQuitAction_4() { return &___OnApplicationQuitAction_4; }
	inline void set_OnApplicationQuitAction_4(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnApplicationQuitAction_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnApplicationQuitAction_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnUpdateAction_5() { return static_cast<int32_t>(offsetof(TobiiXR_Lifecycle_t5A45FF952AADCB1A985E3D365599A048F5142195, ___OnUpdateAction_5)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnUpdateAction_5() const { return ___OnUpdateAction_5; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnUpdateAction_5() { return &___OnUpdateAction_5; }
	inline void set_OnUpdateAction_5(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnUpdateAction_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnUpdateAction_5), (void*)value);
	}

	inline static int32_t get_offset_of_OnDisableAction_6() { return static_cast<int32_t>(offsetof(TobiiXR_Lifecycle_t5A45FF952AADCB1A985E3D365599A048F5142195, ___OnDisableAction_6)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnDisableAction_6() const { return ___OnDisableAction_6; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnDisableAction_6() { return &___OnDisableAction_6; }
	inline void set_OnDisableAction_6(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnDisableAction_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDisableAction_6), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Tobii.XR.UIGazeButtonGraphics
struct UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Image Tobii.XR.UIGazeButtonGraphics::_buttonImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ____buttonImage_4;
	// UnityEngine.UI.Text Tobii.XR.UIGazeButtonGraphics::_label
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ____label_5;
	// UnityEngine.Color Tobii.XR.UIGazeButtonGraphics::_backgroundFocusColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ____backgroundFocusColor_6;
	// UnityEngine.Color Tobii.XR.UIGazeButtonGraphics::_labelFocusColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ____labelFocusColor_7;
	// System.Single Tobii.XR.UIGazeButtonGraphics::_buttonFocusScale
	float ____buttonFocusScale_8;
	// System.Single Tobii.XR.UIGazeButtonGraphics::_visualFeedbackDuration
	float ____visualFeedbackDuration_9;
	// UnityEngine.AnimationCurve Tobii.XR.UIGazeButtonGraphics::_visualFeedbackAnimationCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ____visualFeedbackAnimationCurve_10;
	// UnityEngine.Color Tobii.XR.UIGazeButtonGraphics::_backgroundPressColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ____backgroundPressColor_11;
	// UnityEngine.Color Tobii.XR.UIGazeButtonGraphics::_labelPressColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ____labelPressColor_12;
	// System.Single Tobii.XR.UIGazeButtonGraphics::_buttonScaleOnPress
	float ____buttonScaleOnPress_13;
	// System.Single Tobii.XR.UIGazeButtonGraphics::_buttonPressDuration
	float ____buttonPressDuration_14;
	// UnityEngine.AnimationCurve Tobii.XR.UIGazeButtonGraphics::_buttonPressAnimationCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ____buttonPressAnimationCurve_15;
	// UnityEngine.RectTransform Tobii.XR.UIGazeButtonGraphics::_buttonRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ____buttonRect_16;
	// UnityEngine.Color Tobii.XR.UIGazeButtonGraphics::_buttonDefaultColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ____buttonDefaultColor_17;
	// UnityEngine.Color Tobii.XR.UIGazeButtonGraphics::_labelDefaultColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ____labelDefaultColor_18;
	// UnityEngine.Vector3 Tobii.XR.UIGazeButtonGraphics::_buttonDefaultScale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____buttonDefaultScale_19;
	// UnityEngine.Coroutine Tobii.XR.UIGazeButtonGraphics::_buttonAnimationCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ____buttonAnimationCoroutine_20;

public:
	inline static int32_t get_offset_of__buttonImage_4() { return static_cast<int32_t>(offsetof(UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3, ____buttonImage_4)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get__buttonImage_4() const { return ____buttonImage_4; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of__buttonImage_4() { return &____buttonImage_4; }
	inline void set__buttonImage_4(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		____buttonImage_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buttonImage_4), (void*)value);
	}

	inline static int32_t get_offset_of__label_5() { return static_cast<int32_t>(offsetof(UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3, ____label_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get__label_5() const { return ____label_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of__label_5() { return &____label_5; }
	inline void set__label_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		____label_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____label_5), (void*)value);
	}

	inline static int32_t get_offset_of__backgroundFocusColor_6() { return static_cast<int32_t>(offsetof(UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3, ____backgroundFocusColor_6)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get__backgroundFocusColor_6() const { return ____backgroundFocusColor_6; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of__backgroundFocusColor_6() { return &____backgroundFocusColor_6; }
	inline void set__backgroundFocusColor_6(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		____backgroundFocusColor_6 = value;
	}

	inline static int32_t get_offset_of__labelFocusColor_7() { return static_cast<int32_t>(offsetof(UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3, ____labelFocusColor_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get__labelFocusColor_7() const { return ____labelFocusColor_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of__labelFocusColor_7() { return &____labelFocusColor_7; }
	inline void set__labelFocusColor_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		____labelFocusColor_7 = value;
	}

	inline static int32_t get_offset_of__buttonFocusScale_8() { return static_cast<int32_t>(offsetof(UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3, ____buttonFocusScale_8)); }
	inline float get__buttonFocusScale_8() const { return ____buttonFocusScale_8; }
	inline float* get_address_of__buttonFocusScale_8() { return &____buttonFocusScale_8; }
	inline void set__buttonFocusScale_8(float value)
	{
		____buttonFocusScale_8 = value;
	}

	inline static int32_t get_offset_of__visualFeedbackDuration_9() { return static_cast<int32_t>(offsetof(UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3, ____visualFeedbackDuration_9)); }
	inline float get__visualFeedbackDuration_9() const { return ____visualFeedbackDuration_9; }
	inline float* get_address_of__visualFeedbackDuration_9() { return &____visualFeedbackDuration_9; }
	inline void set__visualFeedbackDuration_9(float value)
	{
		____visualFeedbackDuration_9 = value;
	}

	inline static int32_t get_offset_of__visualFeedbackAnimationCurve_10() { return static_cast<int32_t>(offsetof(UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3, ____visualFeedbackAnimationCurve_10)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get__visualFeedbackAnimationCurve_10() const { return ____visualFeedbackAnimationCurve_10; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of__visualFeedbackAnimationCurve_10() { return &____visualFeedbackAnimationCurve_10; }
	inline void set__visualFeedbackAnimationCurve_10(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		____visualFeedbackAnimationCurve_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____visualFeedbackAnimationCurve_10), (void*)value);
	}

	inline static int32_t get_offset_of__backgroundPressColor_11() { return static_cast<int32_t>(offsetof(UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3, ____backgroundPressColor_11)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get__backgroundPressColor_11() const { return ____backgroundPressColor_11; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of__backgroundPressColor_11() { return &____backgroundPressColor_11; }
	inline void set__backgroundPressColor_11(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		____backgroundPressColor_11 = value;
	}

	inline static int32_t get_offset_of__labelPressColor_12() { return static_cast<int32_t>(offsetof(UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3, ____labelPressColor_12)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get__labelPressColor_12() const { return ____labelPressColor_12; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of__labelPressColor_12() { return &____labelPressColor_12; }
	inline void set__labelPressColor_12(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		____labelPressColor_12 = value;
	}

	inline static int32_t get_offset_of__buttonScaleOnPress_13() { return static_cast<int32_t>(offsetof(UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3, ____buttonScaleOnPress_13)); }
	inline float get__buttonScaleOnPress_13() const { return ____buttonScaleOnPress_13; }
	inline float* get_address_of__buttonScaleOnPress_13() { return &____buttonScaleOnPress_13; }
	inline void set__buttonScaleOnPress_13(float value)
	{
		____buttonScaleOnPress_13 = value;
	}

	inline static int32_t get_offset_of__buttonPressDuration_14() { return static_cast<int32_t>(offsetof(UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3, ____buttonPressDuration_14)); }
	inline float get__buttonPressDuration_14() const { return ____buttonPressDuration_14; }
	inline float* get_address_of__buttonPressDuration_14() { return &____buttonPressDuration_14; }
	inline void set__buttonPressDuration_14(float value)
	{
		____buttonPressDuration_14 = value;
	}

	inline static int32_t get_offset_of__buttonPressAnimationCurve_15() { return static_cast<int32_t>(offsetof(UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3, ____buttonPressAnimationCurve_15)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get__buttonPressAnimationCurve_15() const { return ____buttonPressAnimationCurve_15; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of__buttonPressAnimationCurve_15() { return &____buttonPressAnimationCurve_15; }
	inline void set__buttonPressAnimationCurve_15(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		____buttonPressAnimationCurve_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buttonPressAnimationCurve_15), (void*)value);
	}

	inline static int32_t get_offset_of__buttonRect_16() { return static_cast<int32_t>(offsetof(UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3, ____buttonRect_16)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get__buttonRect_16() const { return ____buttonRect_16; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of__buttonRect_16() { return &____buttonRect_16; }
	inline void set__buttonRect_16(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		____buttonRect_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buttonRect_16), (void*)value);
	}

	inline static int32_t get_offset_of__buttonDefaultColor_17() { return static_cast<int32_t>(offsetof(UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3, ____buttonDefaultColor_17)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get__buttonDefaultColor_17() const { return ____buttonDefaultColor_17; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of__buttonDefaultColor_17() { return &____buttonDefaultColor_17; }
	inline void set__buttonDefaultColor_17(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		____buttonDefaultColor_17 = value;
	}

	inline static int32_t get_offset_of__labelDefaultColor_18() { return static_cast<int32_t>(offsetof(UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3, ____labelDefaultColor_18)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get__labelDefaultColor_18() const { return ____labelDefaultColor_18; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of__labelDefaultColor_18() { return &____labelDefaultColor_18; }
	inline void set__labelDefaultColor_18(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		____labelDefaultColor_18 = value;
	}

	inline static int32_t get_offset_of__buttonDefaultScale_19() { return static_cast<int32_t>(offsetof(UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3, ____buttonDefaultScale_19)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__buttonDefaultScale_19() const { return ____buttonDefaultScale_19; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__buttonDefaultScale_19() { return &____buttonDefaultScale_19; }
	inline void set__buttonDefaultScale_19(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____buttonDefaultScale_19 = value;
	}

	inline static int32_t get_offset_of__buttonAnimationCoroutine_20() { return static_cast<int32_t>(offsetof(UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3, ____buttonAnimationCoroutine_20)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get__buttonAnimationCoroutine_20() const { return ____buttonAnimationCoroutine_20; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of__buttonAnimationCoroutine_20() { return &____buttonAnimationCoroutine_20; }
	inline void set__buttonAnimationCoroutine_20(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		____buttonAnimationCoroutine_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buttonAnimationCoroutine_20), (void*)value);
	}
};


// Tobii.XR.UIGazeCollider
struct UIGazeCollider_tCB961420BFA37C9B3316A58369CD5D55B214FB85  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Vector3 Tobii.XR.UIGazeCollider::_offset
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____offset_4;
	// UnityEngine.Vector3 Tobii.XR.UIGazeCollider::_padding
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____padding_5;
	// System.Boolean Tobii.XR.UIGazeCollider::_adjustToDepth
	bool ____adjustToDepth_6;
	// UnityEngine.Vector3 Tobii.XR.UIGazeCollider::_center
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____center_7;
	// UnityEngine.Vector3 Tobii.XR.UIGazeCollider::_size
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____size_8;
	// UnityEngine.BoxCollider Tobii.XR.UIGazeCollider::_collider
	BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * ____collider_9;
	// UnityEngine.RectTransform Tobii.XR.UIGazeCollider::_rectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ____rectTransform_10;
	// UnityEngine.UI.Graphic Tobii.XR.UIGazeCollider::_graphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ____graphic_11;

public:
	inline static int32_t get_offset_of__offset_4() { return static_cast<int32_t>(offsetof(UIGazeCollider_tCB961420BFA37C9B3316A58369CD5D55B214FB85, ____offset_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__offset_4() const { return ____offset_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__offset_4() { return &____offset_4; }
	inline void set__offset_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____offset_4 = value;
	}

	inline static int32_t get_offset_of__padding_5() { return static_cast<int32_t>(offsetof(UIGazeCollider_tCB961420BFA37C9B3316A58369CD5D55B214FB85, ____padding_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__padding_5() const { return ____padding_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__padding_5() { return &____padding_5; }
	inline void set__padding_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____padding_5 = value;
	}

	inline static int32_t get_offset_of__adjustToDepth_6() { return static_cast<int32_t>(offsetof(UIGazeCollider_tCB961420BFA37C9B3316A58369CD5D55B214FB85, ____adjustToDepth_6)); }
	inline bool get__adjustToDepth_6() const { return ____adjustToDepth_6; }
	inline bool* get_address_of__adjustToDepth_6() { return &____adjustToDepth_6; }
	inline void set__adjustToDepth_6(bool value)
	{
		____adjustToDepth_6 = value;
	}

	inline static int32_t get_offset_of__center_7() { return static_cast<int32_t>(offsetof(UIGazeCollider_tCB961420BFA37C9B3316A58369CD5D55B214FB85, ____center_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__center_7() const { return ____center_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__center_7() { return &____center_7; }
	inline void set__center_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____center_7 = value;
	}

	inline static int32_t get_offset_of__size_8() { return static_cast<int32_t>(offsetof(UIGazeCollider_tCB961420BFA37C9B3316A58369CD5D55B214FB85, ____size_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__size_8() const { return ____size_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__size_8() { return &____size_8; }
	inline void set__size_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____size_8 = value;
	}

	inline static int32_t get_offset_of__collider_9() { return static_cast<int32_t>(offsetof(UIGazeCollider_tCB961420BFA37C9B3316A58369CD5D55B214FB85, ____collider_9)); }
	inline BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * get__collider_9() const { return ____collider_9; }
	inline BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 ** get_address_of__collider_9() { return &____collider_9; }
	inline void set__collider_9(BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * value)
	{
		____collider_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____collider_9), (void*)value);
	}

	inline static int32_t get_offset_of__rectTransform_10() { return static_cast<int32_t>(offsetof(UIGazeCollider_tCB961420BFA37C9B3316A58369CD5D55B214FB85, ____rectTransform_10)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get__rectTransform_10() const { return ____rectTransform_10; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of__rectTransform_10() { return &____rectTransform_10; }
	inline void set__rectTransform_10(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		____rectTransform_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rectTransform_10), (void*)value);
	}

	inline static int32_t get_offset_of__graphic_11() { return static_cast<int32_t>(offsetof(UIGazeCollider_tCB961420BFA37C9B3316A58369CD5D55B214FB85, ____graphic_11)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get__graphic_11() const { return ____graphic_11; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of__graphic_11() { return &____graphic_11; }
	inline void set__graphic_11(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		____graphic_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____graphic_11), (void*)value);
	}
};


// Tobii.XR.UIGazeSliderGraphics
struct UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Image Tobii.XR.UIGazeSliderGraphics::_backgroundImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ____backgroundImage_4;
	// UnityEngine.UI.Image Tobii.XR.UIGazeSliderGraphics::_fillImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ____fillImage_5;
	// UnityEngine.UI.Image Tobii.XR.UIGazeSliderGraphics::_handleImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ____handleImage_6;
	// UnityEngine.UI.Text Tobii.XR.UIGazeSliderGraphics::_valueText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ____valueText_7;
	// UnityEngine.UI.Text Tobii.XR.UIGazeSliderGraphics::_label
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ____label_8;
	// UnityEngine.Color Tobii.XR.UIGazeSliderGraphics::_backgroundFocusColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ____backgroundFocusColor_9;
	// UnityEngine.Color Tobii.XR.UIGazeSliderGraphics::_fillFocusColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ____fillFocusColor_10;
	// UnityEngine.Color Tobii.XR.UIGazeSliderGraphics::_labelFocusColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ____labelFocusColor_11;
	// System.Single Tobii.XR.UIGazeSliderGraphics::_sliderFocusScale
	float ____sliderFocusScale_12;
	// System.Single Tobii.XR.UIGazeSliderGraphics::_visualFeedbackDuration
	float ____visualFeedbackDuration_13;
	// UnityEngine.AnimationCurve Tobii.XR.UIGazeSliderGraphics::_visualFeedbackAnimationCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ____visualFeedbackAnimationCurve_14;
	// UnityEngine.Color Tobii.XR.UIGazeSliderGraphics::_handleOnTouchColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ____handleOnTouchColor_15;
	// System.Single Tobii.XR.UIGazeSliderGraphics::_handleAnimationDuration
	float ____handleAnimationDuration_16;
	// UnityEngine.AnimationCurve Tobii.XR.UIGazeSliderGraphics::_handleAnimationCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ____handleAnimationCurve_17;
	// UnityEngine.Coroutine Tobii.XR.UIGazeSliderGraphics::_visualFeedbackCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ____visualFeedbackCoroutine_19;
	// UnityEngine.Coroutine Tobii.XR.UIGazeSliderGraphics::_handleAnimationCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ____handleAnimationCoroutine_20;
	// UnityEngine.RectTransform Tobii.XR.UIGazeSliderGraphics::_handleRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ____handleRect_21;
	// System.Single Tobii.XR.UIGazeSliderGraphics::_sliderWidth
	float ____sliderWidth_22;
	// UnityEngine.RectTransform Tobii.XR.UIGazeSliderGraphics::_sliderRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ____sliderRect_23;
	// UnityEngine.Color Tobii.XR.UIGazeSliderGraphics::_backgroundDefaultColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ____backgroundDefaultColor_24;
	// UnityEngine.Color Tobii.XR.UIGazeSliderGraphics::_fillDefaultColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ____fillDefaultColor_25;
	// UnityEngine.Color Tobii.XR.UIGazeSliderGraphics::_handleDefaultColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ____handleDefaultColor_26;
	// UnityEngine.Color Tobii.XR.UIGazeSliderGraphics::_labelDefaultColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ____labelDefaultColor_27;
	// UnityEngine.Vector3 Tobii.XR.UIGazeSliderGraphics::_defaultHandleScale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____defaultHandleScale_28;
	// UnityEngine.Vector3 Tobii.XR.UIGazeSliderGraphics::_defaultSliderScale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____defaultSliderScale_29;

public:
	inline static int32_t get_offset_of__backgroundImage_4() { return static_cast<int32_t>(offsetof(UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9, ____backgroundImage_4)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get__backgroundImage_4() const { return ____backgroundImage_4; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of__backgroundImage_4() { return &____backgroundImage_4; }
	inline void set__backgroundImage_4(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		____backgroundImage_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____backgroundImage_4), (void*)value);
	}

	inline static int32_t get_offset_of__fillImage_5() { return static_cast<int32_t>(offsetof(UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9, ____fillImage_5)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get__fillImage_5() const { return ____fillImage_5; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of__fillImage_5() { return &____fillImage_5; }
	inline void set__fillImage_5(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		____fillImage_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fillImage_5), (void*)value);
	}

	inline static int32_t get_offset_of__handleImage_6() { return static_cast<int32_t>(offsetof(UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9, ____handleImage_6)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get__handleImage_6() const { return ____handleImage_6; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of__handleImage_6() { return &____handleImage_6; }
	inline void set__handleImage_6(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		____handleImage_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____handleImage_6), (void*)value);
	}

	inline static int32_t get_offset_of__valueText_7() { return static_cast<int32_t>(offsetof(UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9, ____valueText_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get__valueText_7() const { return ____valueText_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of__valueText_7() { return &____valueText_7; }
	inline void set__valueText_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		____valueText_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____valueText_7), (void*)value);
	}

	inline static int32_t get_offset_of__label_8() { return static_cast<int32_t>(offsetof(UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9, ____label_8)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get__label_8() const { return ____label_8; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of__label_8() { return &____label_8; }
	inline void set__label_8(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		____label_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____label_8), (void*)value);
	}

	inline static int32_t get_offset_of__backgroundFocusColor_9() { return static_cast<int32_t>(offsetof(UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9, ____backgroundFocusColor_9)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get__backgroundFocusColor_9() const { return ____backgroundFocusColor_9; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of__backgroundFocusColor_9() { return &____backgroundFocusColor_9; }
	inline void set__backgroundFocusColor_9(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		____backgroundFocusColor_9 = value;
	}

	inline static int32_t get_offset_of__fillFocusColor_10() { return static_cast<int32_t>(offsetof(UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9, ____fillFocusColor_10)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get__fillFocusColor_10() const { return ____fillFocusColor_10; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of__fillFocusColor_10() { return &____fillFocusColor_10; }
	inline void set__fillFocusColor_10(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		____fillFocusColor_10 = value;
	}

	inline static int32_t get_offset_of__labelFocusColor_11() { return static_cast<int32_t>(offsetof(UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9, ____labelFocusColor_11)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get__labelFocusColor_11() const { return ____labelFocusColor_11; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of__labelFocusColor_11() { return &____labelFocusColor_11; }
	inline void set__labelFocusColor_11(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		____labelFocusColor_11 = value;
	}

	inline static int32_t get_offset_of__sliderFocusScale_12() { return static_cast<int32_t>(offsetof(UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9, ____sliderFocusScale_12)); }
	inline float get__sliderFocusScale_12() const { return ____sliderFocusScale_12; }
	inline float* get_address_of__sliderFocusScale_12() { return &____sliderFocusScale_12; }
	inline void set__sliderFocusScale_12(float value)
	{
		____sliderFocusScale_12 = value;
	}

	inline static int32_t get_offset_of__visualFeedbackDuration_13() { return static_cast<int32_t>(offsetof(UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9, ____visualFeedbackDuration_13)); }
	inline float get__visualFeedbackDuration_13() const { return ____visualFeedbackDuration_13; }
	inline float* get_address_of__visualFeedbackDuration_13() { return &____visualFeedbackDuration_13; }
	inline void set__visualFeedbackDuration_13(float value)
	{
		____visualFeedbackDuration_13 = value;
	}

	inline static int32_t get_offset_of__visualFeedbackAnimationCurve_14() { return static_cast<int32_t>(offsetof(UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9, ____visualFeedbackAnimationCurve_14)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get__visualFeedbackAnimationCurve_14() const { return ____visualFeedbackAnimationCurve_14; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of__visualFeedbackAnimationCurve_14() { return &____visualFeedbackAnimationCurve_14; }
	inline void set__visualFeedbackAnimationCurve_14(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		____visualFeedbackAnimationCurve_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____visualFeedbackAnimationCurve_14), (void*)value);
	}

	inline static int32_t get_offset_of__handleOnTouchColor_15() { return static_cast<int32_t>(offsetof(UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9, ____handleOnTouchColor_15)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get__handleOnTouchColor_15() const { return ____handleOnTouchColor_15; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of__handleOnTouchColor_15() { return &____handleOnTouchColor_15; }
	inline void set__handleOnTouchColor_15(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		____handleOnTouchColor_15 = value;
	}

	inline static int32_t get_offset_of__handleAnimationDuration_16() { return static_cast<int32_t>(offsetof(UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9, ____handleAnimationDuration_16)); }
	inline float get__handleAnimationDuration_16() const { return ____handleAnimationDuration_16; }
	inline float* get_address_of__handleAnimationDuration_16() { return &____handleAnimationDuration_16; }
	inline void set__handleAnimationDuration_16(float value)
	{
		____handleAnimationDuration_16 = value;
	}

	inline static int32_t get_offset_of__handleAnimationCurve_17() { return static_cast<int32_t>(offsetof(UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9, ____handleAnimationCurve_17)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get__handleAnimationCurve_17() const { return ____handleAnimationCurve_17; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of__handleAnimationCurve_17() { return &____handleAnimationCurve_17; }
	inline void set__handleAnimationCurve_17(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		____handleAnimationCurve_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____handleAnimationCurve_17), (void*)value);
	}

	inline static int32_t get_offset_of__visualFeedbackCoroutine_19() { return static_cast<int32_t>(offsetof(UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9, ____visualFeedbackCoroutine_19)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get__visualFeedbackCoroutine_19() const { return ____visualFeedbackCoroutine_19; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of__visualFeedbackCoroutine_19() { return &____visualFeedbackCoroutine_19; }
	inline void set__visualFeedbackCoroutine_19(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		____visualFeedbackCoroutine_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____visualFeedbackCoroutine_19), (void*)value);
	}

	inline static int32_t get_offset_of__handleAnimationCoroutine_20() { return static_cast<int32_t>(offsetof(UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9, ____handleAnimationCoroutine_20)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get__handleAnimationCoroutine_20() const { return ____handleAnimationCoroutine_20; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of__handleAnimationCoroutine_20() { return &____handleAnimationCoroutine_20; }
	inline void set__handleAnimationCoroutine_20(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		____handleAnimationCoroutine_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____handleAnimationCoroutine_20), (void*)value);
	}

	inline static int32_t get_offset_of__handleRect_21() { return static_cast<int32_t>(offsetof(UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9, ____handleRect_21)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get__handleRect_21() const { return ____handleRect_21; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of__handleRect_21() { return &____handleRect_21; }
	inline void set__handleRect_21(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		____handleRect_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____handleRect_21), (void*)value);
	}

	inline static int32_t get_offset_of__sliderWidth_22() { return static_cast<int32_t>(offsetof(UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9, ____sliderWidth_22)); }
	inline float get__sliderWidth_22() const { return ____sliderWidth_22; }
	inline float* get_address_of__sliderWidth_22() { return &____sliderWidth_22; }
	inline void set__sliderWidth_22(float value)
	{
		____sliderWidth_22 = value;
	}

	inline static int32_t get_offset_of__sliderRect_23() { return static_cast<int32_t>(offsetof(UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9, ____sliderRect_23)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get__sliderRect_23() const { return ____sliderRect_23; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of__sliderRect_23() { return &____sliderRect_23; }
	inline void set__sliderRect_23(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		____sliderRect_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sliderRect_23), (void*)value);
	}

	inline static int32_t get_offset_of__backgroundDefaultColor_24() { return static_cast<int32_t>(offsetof(UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9, ____backgroundDefaultColor_24)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get__backgroundDefaultColor_24() const { return ____backgroundDefaultColor_24; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of__backgroundDefaultColor_24() { return &____backgroundDefaultColor_24; }
	inline void set__backgroundDefaultColor_24(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		____backgroundDefaultColor_24 = value;
	}

	inline static int32_t get_offset_of__fillDefaultColor_25() { return static_cast<int32_t>(offsetof(UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9, ____fillDefaultColor_25)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get__fillDefaultColor_25() const { return ____fillDefaultColor_25; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of__fillDefaultColor_25() { return &____fillDefaultColor_25; }
	inline void set__fillDefaultColor_25(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		____fillDefaultColor_25 = value;
	}

	inline static int32_t get_offset_of__handleDefaultColor_26() { return static_cast<int32_t>(offsetof(UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9, ____handleDefaultColor_26)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get__handleDefaultColor_26() const { return ____handleDefaultColor_26; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of__handleDefaultColor_26() { return &____handleDefaultColor_26; }
	inline void set__handleDefaultColor_26(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		____handleDefaultColor_26 = value;
	}

	inline static int32_t get_offset_of__labelDefaultColor_27() { return static_cast<int32_t>(offsetof(UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9, ____labelDefaultColor_27)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get__labelDefaultColor_27() const { return ____labelDefaultColor_27; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of__labelDefaultColor_27() { return &____labelDefaultColor_27; }
	inline void set__labelDefaultColor_27(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		____labelDefaultColor_27 = value;
	}

	inline static int32_t get_offset_of__defaultHandleScale_28() { return static_cast<int32_t>(offsetof(UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9, ____defaultHandleScale_28)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__defaultHandleScale_28() const { return ____defaultHandleScale_28; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__defaultHandleScale_28() { return &____defaultHandleScale_28; }
	inline void set__defaultHandleScale_28(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____defaultHandleScale_28 = value;
	}

	inline static int32_t get_offset_of__defaultSliderScale_29() { return static_cast<int32_t>(offsetof(UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9, ____defaultSliderScale_29)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__defaultSliderScale_29() const { return ____defaultSliderScale_29; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__defaultSliderScale_29() { return &____defaultSliderScale_29; }
	inline void set__defaultSliderScale_29(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____defaultSliderScale_29 = value;
	}
};


// Tobii.XR.UIGazeToggleButtonGraphics
struct UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.RectTransform Tobii.XR.UIGazeToggleButtonGraphics::_buttonTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ____buttonTransform_4;
	// UnityEngine.UI.Text Tobii.XR.UIGazeToggleButtonGraphics::_label
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ____label_5;
	// UnityEngine.UI.Image Tobii.XR.UIGazeToggleButtonGraphics::_backgroundImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ____backgroundImage_6;
	// UnityEngine.UI.Image Tobii.XR.UIGazeToggleButtonGraphics::_outlineImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ____outlineImage_7;
	// UnityEngine.UI.Image Tobii.XR.UIGazeToggleButtonGraphics::_knobImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ____knobImage_8;
	// UnityEngine.RectTransform Tobii.XR.UIGazeToggleButtonGraphics::_buttonOffPosition
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ____buttonOffPosition_9;
	// UnityEngine.RectTransform Tobii.XR.UIGazeToggleButtonGraphics::_buttonOnPosition
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ____buttonOnPosition_10;
	// UnityEngine.Color Tobii.XR.UIGazeToggleButtonGraphics::_knobDefaultColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ____knobDefaultColor_11;
	// UnityEngine.Color Tobii.XR.UIGazeToggleButtonGraphics::_knobFocusColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ____knobFocusColor_12;
	// UnityEngine.Color Tobii.XR.UIGazeToggleButtonGraphics::_labelDefaultColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ____labelDefaultColor_13;
	// UnityEngine.Color Tobii.XR.UIGazeToggleButtonGraphics::_labelFocusColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ____labelFocusColor_14;
	// Tobii.XR.UIGazeToggleButtonGraphics/VisualStateColors Tobii.XR.UIGazeToggleButtonGraphics::_toggledOffColors
	VisualStateColors_t977B626B553DECF2FCA446AB601620C118B1EDA9  ____toggledOffColors_15;
	// Tobii.XR.UIGazeToggleButtonGraphics/VisualStateColors Tobii.XR.UIGazeToggleButtonGraphics::_toggledOnColors
	VisualStateColors_t977B626B553DECF2FCA446AB601620C118B1EDA9  ____toggledOnColors_16;
	// Tobii.XR.UIGazeToggleButtonGraphics/VisualStateColors Tobii.XR.UIGazeToggleButtonGraphics::_pressedDownColors
	VisualStateColors_t977B626B553DECF2FCA446AB601620C118B1EDA9  ____pressedDownColors_17;
	// System.Single Tobii.XR.UIGazeToggleButtonGraphics::_buttonFocusScale
	float ____buttonFocusScale_18;
	// System.Single Tobii.XR.UIGazeToggleButtonGraphics::_knobFocusScale
	float ____knobFocusScale_19;
	// System.Single Tobii.XR.UIGazeToggleButtonGraphics::_focusAnimationDuration
	float ____focusAnimationDuration_20;
	// UnityEngine.AnimationCurve Tobii.XR.UIGazeToggleButtonGraphics::_focusAnimationCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ____focusAnimationCurve_21;
	// System.Single Tobii.XR.UIGazeToggleButtonGraphics::_toggleAnimationDuration
	float ____toggleAnimationDuration_22;
	// UnityEngine.AnimationCurve Tobii.XR.UIGazeToggleButtonGraphics::_toggleAnimationCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ____toggleAnimationCurve_23;
	// UnityEngine.RectTransform Tobii.XR.UIGazeToggleButtonGraphics::_knobTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ____knobTransform_24;
	// UnityEngine.Vector3 Tobii.XR.UIGazeToggleButtonGraphics::_knobDefaultScale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____knobDefaultScale_25;
	// UnityEngine.Vector3 Tobii.XR.UIGazeToggleButtonGraphics::_buttonDefaultScale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____buttonDefaultScale_26;
	// UnityEngine.Coroutine Tobii.XR.UIGazeToggleButtonGraphics::_visualFeedbackCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ____visualFeedbackCoroutine_27;
	// UnityEngine.Coroutine Tobii.XR.UIGazeToggleButtonGraphics::_knobMovementCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ____knobMovementCoroutine_28;
	// System.Boolean Tobii.XR.UIGazeToggleButtonGraphics::_initialized
	bool ____initialized_29;

public:
	inline static int32_t get_offset_of__buttonTransform_4() { return static_cast<int32_t>(offsetof(UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59, ____buttonTransform_4)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get__buttonTransform_4() const { return ____buttonTransform_4; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of__buttonTransform_4() { return &____buttonTransform_4; }
	inline void set__buttonTransform_4(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		____buttonTransform_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buttonTransform_4), (void*)value);
	}

	inline static int32_t get_offset_of__label_5() { return static_cast<int32_t>(offsetof(UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59, ____label_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get__label_5() const { return ____label_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of__label_5() { return &____label_5; }
	inline void set__label_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		____label_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____label_5), (void*)value);
	}

	inline static int32_t get_offset_of__backgroundImage_6() { return static_cast<int32_t>(offsetof(UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59, ____backgroundImage_6)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get__backgroundImage_6() const { return ____backgroundImage_6; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of__backgroundImage_6() { return &____backgroundImage_6; }
	inline void set__backgroundImage_6(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		____backgroundImage_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____backgroundImage_6), (void*)value);
	}

	inline static int32_t get_offset_of__outlineImage_7() { return static_cast<int32_t>(offsetof(UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59, ____outlineImage_7)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get__outlineImage_7() const { return ____outlineImage_7; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of__outlineImage_7() { return &____outlineImage_7; }
	inline void set__outlineImage_7(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		____outlineImage_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____outlineImage_7), (void*)value);
	}

	inline static int32_t get_offset_of__knobImage_8() { return static_cast<int32_t>(offsetof(UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59, ____knobImage_8)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get__knobImage_8() const { return ____knobImage_8; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of__knobImage_8() { return &____knobImage_8; }
	inline void set__knobImage_8(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		____knobImage_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____knobImage_8), (void*)value);
	}

	inline static int32_t get_offset_of__buttonOffPosition_9() { return static_cast<int32_t>(offsetof(UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59, ____buttonOffPosition_9)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get__buttonOffPosition_9() const { return ____buttonOffPosition_9; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of__buttonOffPosition_9() { return &____buttonOffPosition_9; }
	inline void set__buttonOffPosition_9(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		____buttonOffPosition_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buttonOffPosition_9), (void*)value);
	}

	inline static int32_t get_offset_of__buttonOnPosition_10() { return static_cast<int32_t>(offsetof(UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59, ____buttonOnPosition_10)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get__buttonOnPosition_10() const { return ____buttonOnPosition_10; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of__buttonOnPosition_10() { return &____buttonOnPosition_10; }
	inline void set__buttonOnPosition_10(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		____buttonOnPosition_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buttonOnPosition_10), (void*)value);
	}

	inline static int32_t get_offset_of__knobDefaultColor_11() { return static_cast<int32_t>(offsetof(UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59, ____knobDefaultColor_11)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get__knobDefaultColor_11() const { return ____knobDefaultColor_11; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of__knobDefaultColor_11() { return &____knobDefaultColor_11; }
	inline void set__knobDefaultColor_11(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		____knobDefaultColor_11 = value;
	}

	inline static int32_t get_offset_of__knobFocusColor_12() { return static_cast<int32_t>(offsetof(UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59, ____knobFocusColor_12)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get__knobFocusColor_12() const { return ____knobFocusColor_12; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of__knobFocusColor_12() { return &____knobFocusColor_12; }
	inline void set__knobFocusColor_12(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		____knobFocusColor_12 = value;
	}

	inline static int32_t get_offset_of__labelDefaultColor_13() { return static_cast<int32_t>(offsetof(UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59, ____labelDefaultColor_13)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get__labelDefaultColor_13() const { return ____labelDefaultColor_13; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of__labelDefaultColor_13() { return &____labelDefaultColor_13; }
	inline void set__labelDefaultColor_13(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		____labelDefaultColor_13 = value;
	}

	inline static int32_t get_offset_of__labelFocusColor_14() { return static_cast<int32_t>(offsetof(UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59, ____labelFocusColor_14)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get__labelFocusColor_14() const { return ____labelFocusColor_14; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of__labelFocusColor_14() { return &____labelFocusColor_14; }
	inline void set__labelFocusColor_14(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		____labelFocusColor_14 = value;
	}

	inline static int32_t get_offset_of__toggledOffColors_15() { return static_cast<int32_t>(offsetof(UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59, ____toggledOffColors_15)); }
	inline VisualStateColors_t977B626B553DECF2FCA446AB601620C118B1EDA9  get__toggledOffColors_15() const { return ____toggledOffColors_15; }
	inline VisualStateColors_t977B626B553DECF2FCA446AB601620C118B1EDA9 * get_address_of__toggledOffColors_15() { return &____toggledOffColors_15; }
	inline void set__toggledOffColors_15(VisualStateColors_t977B626B553DECF2FCA446AB601620C118B1EDA9  value)
	{
		____toggledOffColors_15 = value;
	}

	inline static int32_t get_offset_of__toggledOnColors_16() { return static_cast<int32_t>(offsetof(UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59, ____toggledOnColors_16)); }
	inline VisualStateColors_t977B626B553DECF2FCA446AB601620C118B1EDA9  get__toggledOnColors_16() const { return ____toggledOnColors_16; }
	inline VisualStateColors_t977B626B553DECF2FCA446AB601620C118B1EDA9 * get_address_of__toggledOnColors_16() { return &____toggledOnColors_16; }
	inline void set__toggledOnColors_16(VisualStateColors_t977B626B553DECF2FCA446AB601620C118B1EDA9  value)
	{
		____toggledOnColors_16 = value;
	}

	inline static int32_t get_offset_of__pressedDownColors_17() { return static_cast<int32_t>(offsetof(UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59, ____pressedDownColors_17)); }
	inline VisualStateColors_t977B626B553DECF2FCA446AB601620C118B1EDA9  get__pressedDownColors_17() const { return ____pressedDownColors_17; }
	inline VisualStateColors_t977B626B553DECF2FCA446AB601620C118B1EDA9 * get_address_of__pressedDownColors_17() { return &____pressedDownColors_17; }
	inline void set__pressedDownColors_17(VisualStateColors_t977B626B553DECF2FCA446AB601620C118B1EDA9  value)
	{
		____pressedDownColors_17 = value;
	}

	inline static int32_t get_offset_of__buttonFocusScale_18() { return static_cast<int32_t>(offsetof(UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59, ____buttonFocusScale_18)); }
	inline float get__buttonFocusScale_18() const { return ____buttonFocusScale_18; }
	inline float* get_address_of__buttonFocusScale_18() { return &____buttonFocusScale_18; }
	inline void set__buttonFocusScale_18(float value)
	{
		____buttonFocusScale_18 = value;
	}

	inline static int32_t get_offset_of__knobFocusScale_19() { return static_cast<int32_t>(offsetof(UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59, ____knobFocusScale_19)); }
	inline float get__knobFocusScale_19() const { return ____knobFocusScale_19; }
	inline float* get_address_of__knobFocusScale_19() { return &____knobFocusScale_19; }
	inline void set__knobFocusScale_19(float value)
	{
		____knobFocusScale_19 = value;
	}

	inline static int32_t get_offset_of__focusAnimationDuration_20() { return static_cast<int32_t>(offsetof(UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59, ____focusAnimationDuration_20)); }
	inline float get__focusAnimationDuration_20() const { return ____focusAnimationDuration_20; }
	inline float* get_address_of__focusAnimationDuration_20() { return &____focusAnimationDuration_20; }
	inline void set__focusAnimationDuration_20(float value)
	{
		____focusAnimationDuration_20 = value;
	}

	inline static int32_t get_offset_of__focusAnimationCurve_21() { return static_cast<int32_t>(offsetof(UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59, ____focusAnimationCurve_21)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get__focusAnimationCurve_21() const { return ____focusAnimationCurve_21; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of__focusAnimationCurve_21() { return &____focusAnimationCurve_21; }
	inline void set__focusAnimationCurve_21(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		____focusAnimationCurve_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____focusAnimationCurve_21), (void*)value);
	}

	inline static int32_t get_offset_of__toggleAnimationDuration_22() { return static_cast<int32_t>(offsetof(UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59, ____toggleAnimationDuration_22)); }
	inline float get__toggleAnimationDuration_22() const { return ____toggleAnimationDuration_22; }
	inline float* get_address_of__toggleAnimationDuration_22() { return &____toggleAnimationDuration_22; }
	inline void set__toggleAnimationDuration_22(float value)
	{
		____toggleAnimationDuration_22 = value;
	}

	inline static int32_t get_offset_of__toggleAnimationCurve_23() { return static_cast<int32_t>(offsetof(UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59, ____toggleAnimationCurve_23)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get__toggleAnimationCurve_23() const { return ____toggleAnimationCurve_23; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of__toggleAnimationCurve_23() { return &____toggleAnimationCurve_23; }
	inline void set__toggleAnimationCurve_23(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		____toggleAnimationCurve_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____toggleAnimationCurve_23), (void*)value);
	}

	inline static int32_t get_offset_of__knobTransform_24() { return static_cast<int32_t>(offsetof(UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59, ____knobTransform_24)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get__knobTransform_24() const { return ____knobTransform_24; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of__knobTransform_24() { return &____knobTransform_24; }
	inline void set__knobTransform_24(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		____knobTransform_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____knobTransform_24), (void*)value);
	}

	inline static int32_t get_offset_of__knobDefaultScale_25() { return static_cast<int32_t>(offsetof(UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59, ____knobDefaultScale_25)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__knobDefaultScale_25() const { return ____knobDefaultScale_25; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__knobDefaultScale_25() { return &____knobDefaultScale_25; }
	inline void set__knobDefaultScale_25(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____knobDefaultScale_25 = value;
	}

	inline static int32_t get_offset_of__buttonDefaultScale_26() { return static_cast<int32_t>(offsetof(UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59, ____buttonDefaultScale_26)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__buttonDefaultScale_26() const { return ____buttonDefaultScale_26; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__buttonDefaultScale_26() { return &____buttonDefaultScale_26; }
	inline void set__buttonDefaultScale_26(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____buttonDefaultScale_26 = value;
	}

	inline static int32_t get_offset_of__visualFeedbackCoroutine_27() { return static_cast<int32_t>(offsetof(UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59, ____visualFeedbackCoroutine_27)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get__visualFeedbackCoroutine_27() const { return ____visualFeedbackCoroutine_27; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of__visualFeedbackCoroutine_27() { return &____visualFeedbackCoroutine_27; }
	inline void set__visualFeedbackCoroutine_27(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		____visualFeedbackCoroutine_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____visualFeedbackCoroutine_27), (void*)value);
	}

	inline static int32_t get_offset_of__knobMovementCoroutine_28() { return static_cast<int32_t>(offsetof(UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59, ____knobMovementCoroutine_28)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get__knobMovementCoroutine_28() const { return ____knobMovementCoroutine_28; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of__knobMovementCoroutine_28() { return &____knobMovementCoroutine_28; }
	inline void set__knobMovementCoroutine_28(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		____knobMovementCoroutine_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____knobMovementCoroutine_28), (void*)value);
	}

	inline static int32_t get_offset_of__initialized_29() { return static_cast<int32_t>(offsetof(UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59, ____initialized_29)); }
	inline bool get__initialized_29() const { return ____initialized_29; }
	inline bool* get_address_of__initialized_29() { return &____initialized_29; }
	inline void set__initialized_29(bool value)
	{
		____initialized_29 = value;
	}
};


// Tobii.XR.UIHighlightAtGaze
struct UIHighlightAtGaze_t8E5928A9329AA5E470E20EA5B93409A21EEC0EF6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Color Tobii.XR.UIHighlightAtGaze::HighlightColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___HighlightColor_4;
	// System.Single Tobii.XR.UIHighlightAtGaze::AnimationTime
	float ___AnimationTime_5;
	// UnityEngine.UI.Graphic Tobii.XR.UIHighlightAtGaze::_graphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ____graphic_6;
	// UnityEngine.Color Tobii.XR.UIHighlightAtGaze::_originalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ____originalColor_7;
	// UnityEngine.Color Tobii.XR.UIHighlightAtGaze::_targetColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ____targetColor_8;

public:
	inline static int32_t get_offset_of_HighlightColor_4() { return static_cast<int32_t>(offsetof(UIHighlightAtGaze_t8E5928A9329AA5E470E20EA5B93409A21EEC0EF6, ___HighlightColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_HighlightColor_4() const { return ___HighlightColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_HighlightColor_4() { return &___HighlightColor_4; }
	inline void set_HighlightColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___HighlightColor_4 = value;
	}

	inline static int32_t get_offset_of_AnimationTime_5() { return static_cast<int32_t>(offsetof(UIHighlightAtGaze_t8E5928A9329AA5E470E20EA5B93409A21EEC0EF6, ___AnimationTime_5)); }
	inline float get_AnimationTime_5() const { return ___AnimationTime_5; }
	inline float* get_address_of_AnimationTime_5() { return &___AnimationTime_5; }
	inline void set_AnimationTime_5(float value)
	{
		___AnimationTime_5 = value;
	}

	inline static int32_t get_offset_of__graphic_6() { return static_cast<int32_t>(offsetof(UIHighlightAtGaze_t8E5928A9329AA5E470E20EA5B93409A21EEC0EF6, ____graphic_6)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get__graphic_6() const { return ____graphic_6; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of__graphic_6() { return &____graphic_6; }
	inline void set__graphic_6(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		____graphic_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____graphic_6), (void*)value);
	}

	inline static int32_t get_offset_of__originalColor_7() { return static_cast<int32_t>(offsetof(UIHighlightAtGaze_t8E5928A9329AA5E470E20EA5B93409A21EEC0EF6, ____originalColor_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get__originalColor_7() const { return ____originalColor_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of__originalColor_7() { return &____originalColor_7; }
	inline void set__originalColor_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		____originalColor_7 = value;
	}

	inline static int32_t get_offset_of__targetColor_8() { return static_cast<int32_t>(offsetof(UIHighlightAtGaze_t8E5928A9329AA5E470E20EA5B93409A21EEC0EF6, ____targetColor_8)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get__targetColor_8() const { return ____targetColor_8; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of__targetColor_8() { return &____targetColor_8; }
	inline void set__targetColor_8(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		____targetColor_8 = value;
	}
};


// Tobii.XR.UITouchpadGazeButton
struct UITouchpadGazeButton_t3A308EBB536DF4924AFB84B203E0048273DF092A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Tobii.XR.UIButtonEvent Tobii.XR.UITouchpadGazeButton::OnButtonClicked
	UIButtonEvent_t6ACDD055C471804447D38E6EA0D042A57A243B1A * ___OnButtonClicked_4;
	// Tobii.XR.ButtonState Tobii.XR.UITouchpadGazeButton::_currentButtonState
	int32_t ____currentButtonState_7;
	// System.Boolean Tobii.XR.UITouchpadGazeButton::_hasFocus
	bool ____hasFocus_8;
	// Tobii.XR.UIGazeButtonGraphics Tobii.XR.UITouchpadGazeButton::_uiGazeButtonGraphics
	UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3 * ____uiGazeButtonGraphics_9;

public:
	inline static int32_t get_offset_of_OnButtonClicked_4() { return static_cast<int32_t>(offsetof(UITouchpadGazeButton_t3A308EBB536DF4924AFB84B203E0048273DF092A, ___OnButtonClicked_4)); }
	inline UIButtonEvent_t6ACDD055C471804447D38E6EA0D042A57A243B1A * get_OnButtonClicked_4() const { return ___OnButtonClicked_4; }
	inline UIButtonEvent_t6ACDD055C471804447D38E6EA0D042A57A243B1A ** get_address_of_OnButtonClicked_4() { return &___OnButtonClicked_4; }
	inline void set_OnButtonClicked_4(UIButtonEvent_t6ACDD055C471804447D38E6EA0D042A57A243B1A * value)
	{
		___OnButtonClicked_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnButtonClicked_4), (void*)value);
	}

	inline static int32_t get_offset_of__currentButtonState_7() { return static_cast<int32_t>(offsetof(UITouchpadGazeButton_t3A308EBB536DF4924AFB84B203E0048273DF092A, ____currentButtonState_7)); }
	inline int32_t get__currentButtonState_7() const { return ____currentButtonState_7; }
	inline int32_t* get_address_of__currentButtonState_7() { return &____currentButtonState_7; }
	inline void set__currentButtonState_7(int32_t value)
	{
		____currentButtonState_7 = value;
	}

	inline static int32_t get_offset_of__hasFocus_8() { return static_cast<int32_t>(offsetof(UITouchpadGazeButton_t3A308EBB536DF4924AFB84B203E0048273DF092A, ____hasFocus_8)); }
	inline bool get__hasFocus_8() const { return ____hasFocus_8; }
	inline bool* get_address_of__hasFocus_8() { return &____hasFocus_8; }
	inline void set__hasFocus_8(bool value)
	{
		____hasFocus_8 = value;
	}

	inline static int32_t get_offset_of__uiGazeButtonGraphics_9() { return static_cast<int32_t>(offsetof(UITouchpadGazeButton_t3A308EBB536DF4924AFB84B203E0048273DF092A, ____uiGazeButtonGraphics_9)); }
	inline UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3 * get__uiGazeButtonGraphics_9() const { return ____uiGazeButtonGraphics_9; }
	inline UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3 ** get_address_of__uiGazeButtonGraphics_9() { return &____uiGazeButtonGraphics_9; }
	inline void set__uiGazeButtonGraphics_9(UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3 * value)
	{
		____uiGazeButtonGraphics_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____uiGazeButtonGraphics_9), (void*)value);
	}
};


// Tobii.XR.UITouchpadGazeSlider
struct UITouchpadGazeSlider_t92A4881810F3381D4454AD18E58E6D65F52AF7B3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Tobii.XR.UISliderEvent Tobii.XR.UITouchpadGazeSlider::OnSliderValueChanged
	UISliderEvent_t36D445D0583DF9594EF697A1EE85A07EE10DA88D * ___OnSliderValueChanged_4;
	// System.Int32 Tobii.XR.UITouchpadGazeSlider::_value
	int32_t ____value_5;
	// System.Single Tobii.XR.UITouchpadGazeSlider::_touchPadMultiplier
	float ____touchPadMultiplier_6;
	// System.Int32 Tobii.XR.UITouchpadGazeSlider::_minValue
	int32_t ____minValue_7;
	// System.Int32 Tobii.XR.UITouchpadGazeSlider::_maxValue
	int32_t ____maxValue_8;
	// System.Single Tobii.XR.UITouchpadGazeSlider::_hapticStrength
	float ____hapticStrength_9;
	// System.Boolean Tobii.XR.UITouchpadGazeSlider::_hasFocus
	bool ____hasFocus_12;
	// System.Boolean Tobii.XR.UITouchpadGazeSlider::_debugHasBeenLogged
	bool ____debugHasBeenLogged_13;
	// System.Single Tobii.XR.UITouchpadGazeSlider::_padXLastFrame
	float ____padXLastFrame_14;
	// System.Int32 Tobii.XR.UITouchpadGazeSlider::_currentStep
	int32_t ____currentStep_15;
	// System.Int32 Tobii.XR.UITouchpadGazeSlider::_stepsToMove
	int32_t ____stepsToMove_16;
	// System.Single Tobii.XR.UITouchpadGazeSlider::_incrementedMoveAmount
	float ____incrementedMoveAmount_17;
	// System.Single Tobii.XR.UITouchpadGazeSlider::_sizePerStep
	float ____sizePerStep_18;
	// Tobii.XR.UIGazeSliderGraphics Tobii.XR.UITouchpadGazeSlider::_sliderGraphics
	UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * ____sliderGraphics_19;
	// System.Single Tobii.XR.UITouchpadGazeSlider::_sliderFillAmount
	float ____sliderFillAmount_20;

public:
	inline static int32_t get_offset_of_OnSliderValueChanged_4() { return static_cast<int32_t>(offsetof(UITouchpadGazeSlider_t92A4881810F3381D4454AD18E58E6D65F52AF7B3, ___OnSliderValueChanged_4)); }
	inline UISliderEvent_t36D445D0583DF9594EF697A1EE85A07EE10DA88D * get_OnSliderValueChanged_4() const { return ___OnSliderValueChanged_4; }
	inline UISliderEvent_t36D445D0583DF9594EF697A1EE85A07EE10DA88D ** get_address_of_OnSliderValueChanged_4() { return &___OnSliderValueChanged_4; }
	inline void set_OnSliderValueChanged_4(UISliderEvent_t36D445D0583DF9594EF697A1EE85A07EE10DA88D * value)
	{
		___OnSliderValueChanged_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSliderValueChanged_4), (void*)value);
	}

	inline static int32_t get_offset_of__value_5() { return static_cast<int32_t>(offsetof(UITouchpadGazeSlider_t92A4881810F3381D4454AD18E58E6D65F52AF7B3, ____value_5)); }
	inline int32_t get__value_5() const { return ____value_5; }
	inline int32_t* get_address_of__value_5() { return &____value_5; }
	inline void set__value_5(int32_t value)
	{
		____value_5 = value;
	}

	inline static int32_t get_offset_of__touchPadMultiplier_6() { return static_cast<int32_t>(offsetof(UITouchpadGazeSlider_t92A4881810F3381D4454AD18E58E6D65F52AF7B3, ____touchPadMultiplier_6)); }
	inline float get__touchPadMultiplier_6() const { return ____touchPadMultiplier_6; }
	inline float* get_address_of__touchPadMultiplier_6() { return &____touchPadMultiplier_6; }
	inline void set__touchPadMultiplier_6(float value)
	{
		____touchPadMultiplier_6 = value;
	}

	inline static int32_t get_offset_of__minValue_7() { return static_cast<int32_t>(offsetof(UITouchpadGazeSlider_t92A4881810F3381D4454AD18E58E6D65F52AF7B3, ____minValue_7)); }
	inline int32_t get__minValue_7() const { return ____minValue_7; }
	inline int32_t* get_address_of__minValue_7() { return &____minValue_7; }
	inline void set__minValue_7(int32_t value)
	{
		____minValue_7 = value;
	}

	inline static int32_t get_offset_of__maxValue_8() { return static_cast<int32_t>(offsetof(UITouchpadGazeSlider_t92A4881810F3381D4454AD18E58E6D65F52AF7B3, ____maxValue_8)); }
	inline int32_t get__maxValue_8() const { return ____maxValue_8; }
	inline int32_t* get_address_of__maxValue_8() { return &____maxValue_8; }
	inline void set__maxValue_8(int32_t value)
	{
		____maxValue_8 = value;
	}

	inline static int32_t get_offset_of__hapticStrength_9() { return static_cast<int32_t>(offsetof(UITouchpadGazeSlider_t92A4881810F3381D4454AD18E58E6D65F52AF7B3, ____hapticStrength_9)); }
	inline float get__hapticStrength_9() const { return ____hapticStrength_9; }
	inline float* get_address_of__hapticStrength_9() { return &____hapticStrength_9; }
	inline void set__hapticStrength_9(float value)
	{
		____hapticStrength_9 = value;
	}

	inline static int32_t get_offset_of__hasFocus_12() { return static_cast<int32_t>(offsetof(UITouchpadGazeSlider_t92A4881810F3381D4454AD18E58E6D65F52AF7B3, ____hasFocus_12)); }
	inline bool get__hasFocus_12() const { return ____hasFocus_12; }
	inline bool* get_address_of__hasFocus_12() { return &____hasFocus_12; }
	inline void set__hasFocus_12(bool value)
	{
		____hasFocus_12 = value;
	}

	inline static int32_t get_offset_of__debugHasBeenLogged_13() { return static_cast<int32_t>(offsetof(UITouchpadGazeSlider_t92A4881810F3381D4454AD18E58E6D65F52AF7B3, ____debugHasBeenLogged_13)); }
	inline bool get__debugHasBeenLogged_13() const { return ____debugHasBeenLogged_13; }
	inline bool* get_address_of__debugHasBeenLogged_13() { return &____debugHasBeenLogged_13; }
	inline void set__debugHasBeenLogged_13(bool value)
	{
		____debugHasBeenLogged_13 = value;
	}

	inline static int32_t get_offset_of__padXLastFrame_14() { return static_cast<int32_t>(offsetof(UITouchpadGazeSlider_t92A4881810F3381D4454AD18E58E6D65F52AF7B3, ____padXLastFrame_14)); }
	inline float get__padXLastFrame_14() const { return ____padXLastFrame_14; }
	inline float* get_address_of__padXLastFrame_14() { return &____padXLastFrame_14; }
	inline void set__padXLastFrame_14(float value)
	{
		____padXLastFrame_14 = value;
	}

	inline static int32_t get_offset_of__currentStep_15() { return static_cast<int32_t>(offsetof(UITouchpadGazeSlider_t92A4881810F3381D4454AD18E58E6D65F52AF7B3, ____currentStep_15)); }
	inline int32_t get__currentStep_15() const { return ____currentStep_15; }
	inline int32_t* get_address_of__currentStep_15() { return &____currentStep_15; }
	inline void set__currentStep_15(int32_t value)
	{
		____currentStep_15 = value;
	}

	inline static int32_t get_offset_of__stepsToMove_16() { return static_cast<int32_t>(offsetof(UITouchpadGazeSlider_t92A4881810F3381D4454AD18E58E6D65F52AF7B3, ____stepsToMove_16)); }
	inline int32_t get__stepsToMove_16() const { return ____stepsToMove_16; }
	inline int32_t* get_address_of__stepsToMove_16() { return &____stepsToMove_16; }
	inline void set__stepsToMove_16(int32_t value)
	{
		____stepsToMove_16 = value;
	}

	inline static int32_t get_offset_of__incrementedMoveAmount_17() { return static_cast<int32_t>(offsetof(UITouchpadGazeSlider_t92A4881810F3381D4454AD18E58E6D65F52AF7B3, ____incrementedMoveAmount_17)); }
	inline float get__incrementedMoveAmount_17() const { return ____incrementedMoveAmount_17; }
	inline float* get_address_of__incrementedMoveAmount_17() { return &____incrementedMoveAmount_17; }
	inline void set__incrementedMoveAmount_17(float value)
	{
		____incrementedMoveAmount_17 = value;
	}

	inline static int32_t get_offset_of__sizePerStep_18() { return static_cast<int32_t>(offsetof(UITouchpadGazeSlider_t92A4881810F3381D4454AD18E58E6D65F52AF7B3, ____sizePerStep_18)); }
	inline float get__sizePerStep_18() const { return ____sizePerStep_18; }
	inline float* get_address_of__sizePerStep_18() { return &____sizePerStep_18; }
	inline void set__sizePerStep_18(float value)
	{
		____sizePerStep_18 = value;
	}

	inline static int32_t get_offset_of__sliderGraphics_19() { return static_cast<int32_t>(offsetof(UITouchpadGazeSlider_t92A4881810F3381D4454AD18E58E6D65F52AF7B3, ____sliderGraphics_19)); }
	inline UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * get__sliderGraphics_19() const { return ____sliderGraphics_19; }
	inline UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 ** get_address_of__sliderGraphics_19() { return &____sliderGraphics_19; }
	inline void set__sliderGraphics_19(UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * value)
	{
		____sliderGraphics_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sliderGraphics_19), (void*)value);
	}

	inline static int32_t get_offset_of__sliderFillAmount_20() { return static_cast<int32_t>(offsetof(UITouchpadGazeSlider_t92A4881810F3381D4454AD18E58E6D65F52AF7B3, ____sliderFillAmount_20)); }
	inline float get__sliderFillAmount_20() const { return ____sliderFillAmount_20; }
	inline float* get_address_of__sliderFillAmount_20() { return &____sliderFillAmount_20; }
	inline void set__sliderFillAmount_20(float value)
	{
		____sliderFillAmount_20 = value;
	}
};


// Tobii.XR.UITouchpadGazeToggleButton
struct UITouchpadGazeToggleButton_t47CD31E42D965D1D0A084EF01FA40A171AB3FC31  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Tobii.XR.UIToggleEvent Tobii.XR.UITouchpadGazeToggleButton::OnButtonToggled
	UIToggleEvent_t3025F2607AD11E28D3936621C944D224B4FCF15B * ___OnButtonToggled_4;
	// System.Boolean Tobii.XR.UITouchpadGazeToggleButton::_isToggledOn
	bool ____isToggledOn_5;
	// System.Boolean Tobii.XR.UITouchpadGazeToggleButton::_hasFocus
	bool ____hasFocus_7;
	// System.Boolean Tobii.XR.UITouchpadGazeToggleButton::_buttonPressed
	bool ____buttonPressed_8;
	// Tobii.XR.UIGazeToggleButtonGraphics Tobii.XR.UITouchpadGazeToggleButton::_uiGazeToggleButtonGraphics
	UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * ____uiGazeToggleButtonGraphics_9;
	// System.Boolean Tobii.XR.UITouchpadGazeToggleButton::_initialized
	bool ____initialized_10;

public:
	inline static int32_t get_offset_of_OnButtonToggled_4() { return static_cast<int32_t>(offsetof(UITouchpadGazeToggleButton_t47CD31E42D965D1D0A084EF01FA40A171AB3FC31, ___OnButtonToggled_4)); }
	inline UIToggleEvent_t3025F2607AD11E28D3936621C944D224B4FCF15B * get_OnButtonToggled_4() const { return ___OnButtonToggled_4; }
	inline UIToggleEvent_t3025F2607AD11E28D3936621C944D224B4FCF15B ** get_address_of_OnButtonToggled_4() { return &___OnButtonToggled_4; }
	inline void set_OnButtonToggled_4(UIToggleEvent_t3025F2607AD11E28D3936621C944D224B4FCF15B * value)
	{
		___OnButtonToggled_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnButtonToggled_4), (void*)value);
	}

	inline static int32_t get_offset_of__isToggledOn_5() { return static_cast<int32_t>(offsetof(UITouchpadGazeToggleButton_t47CD31E42D965D1D0A084EF01FA40A171AB3FC31, ____isToggledOn_5)); }
	inline bool get__isToggledOn_5() const { return ____isToggledOn_5; }
	inline bool* get_address_of__isToggledOn_5() { return &____isToggledOn_5; }
	inline void set__isToggledOn_5(bool value)
	{
		____isToggledOn_5 = value;
	}

	inline static int32_t get_offset_of__hasFocus_7() { return static_cast<int32_t>(offsetof(UITouchpadGazeToggleButton_t47CD31E42D965D1D0A084EF01FA40A171AB3FC31, ____hasFocus_7)); }
	inline bool get__hasFocus_7() const { return ____hasFocus_7; }
	inline bool* get_address_of__hasFocus_7() { return &____hasFocus_7; }
	inline void set__hasFocus_7(bool value)
	{
		____hasFocus_7 = value;
	}

	inline static int32_t get_offset_of__buttonPressed_8() { return static_cast<int32_t>(offsetof(UITouchpadGazeToggleButton_t47CD31E42D965D1D0A084EF01FA40A171AB3FC31, ____buttonPressed_8)); }
	inline bool get__buttonPressed_8() const { return ____buttonPressed_8; }
	inline bool* get_address_of__buttonPressed_8() { return &____buttonPressed_8; }
	inline void set__buttonPressed_8(bool value)
	{
		____buttonPressed_8 = value;
	}

	inline static int32_t get_offset_of__uiGazeToggleButtonGraphics_9() { return static_cast<int32_t>(offsetof(UITouchpadGazeToggleButton_t47CD31E42D965D1D0A084EF01FA40A171AB3FC31, ____uiGazeToggleButtonGraphics_9)); }
	inline UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * get__uiGazeToggleButtonGraphics_9() const { return ____uiGazeToggleButtonGraphics_9; }
	inline UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 ** get_address_of__uiGazeToggleButtonGraphics_9() { return &____uiGazeToggleButtonGraphics_9; }
	inline void set__uiGazeToggleButtonGraphics_9(UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * value)
	{
		____uiGazeToggleButtonGraphics_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____uiGazeToggleButtonGraphics_9), (void*)value);
	}

	inline static int32_t get_offset_of__initialized_10() { return static_cast<int32_t>(offsetof(UITouchpadGazeToggleButton_t47CD31E42D965D1D0A084EF01FA40A171AB3FC31, ____initialized_10)); }
	inline bool get__initialized_10() const { return ____initialized_10; }
	inline bool* get_address_of__initialized_10() { return &____initialized_10; }
	inline void set__initialized_10(bool value)
	{
		____initialized_10 = value;
	}
};


// Tobii.XR.UITouchpadSwipeDetector
struct UITouchpadSwipeDetector_tF8D39854F9C2AEC5EB30A18490D8B5BDC24B1237  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Events.UnityEvent Tobii.XR.UITouchpadSwipeDetector::SwipeLeft
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___SwipeLeft_4;
	// UnityEngine.Events.UnityEvent Tobii.XR.UITouchpadSwipeDetector::SwipeRight
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___SwipeRight_5;
	// System.Single Tobii.XR.UITouchpadSwipeDetector::_padXLastFrame
	float ____padXLastFrame_9;
	// System.Single Tobii.XR.UITouchpadSwipeDetector::_incrementedDelta
	float ____incrementedDelta_10;
	// System.Boolean Tobii.XR.UITouchpadSwipeDetector::_hasFocus
	bool ____hasFocus_11;

public:
	inline static int32_t get_offset_of_SwipeLeft_4() { return static_cast<int32_t>(offsetof(UITouchpadSwipeDetector_tF8D39854F9C2AEC5EB30A18490D8B5BDC24B1237, ___SwipeLeft_4)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_SwipeLeft_4() const { return ___SwipeLeft_4; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_SwipeLeft_4() { return &___SwipeLeft_4; }
	inline void set_SwipeLeft_4(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___SwipeLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SwipeLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_SwipeRight_5() { return static_cast<int32_t>(offsetof(UITouchpadSwipeDetector_tF8D39854F9C2AEC5EB30A18490D8B5BDC24B1237, ___SwipeRight_5)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_SwipeRight_5() const { return ___SwipeRight_5; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_SwipeRight_5() { return &___SwipeRight_5; }
	inline void set_SwipeRight_5(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___SwipeRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SwipeRight_5), (void*)value);
	}

	inline static int32_t get_offset_of__padXLastFrame_9() { return static_cast<int32_t>(offsetof(UITouchpadSwipeDetector_tF8D39854F9C2AEC5EB30A18490D8B5BDC24B1237, ____padXLastFrame_9)); }
	inline float get__padXLastFrame_9() const { return ____padXLastFrame_9; }
	inline float* get_address_of__padXLastFrame_9() { return &____padXLastFrame_9; }
	inline void set__padXLastFrame_9(float value)
	{
		____padXLastFrame_9 = value;
	}

	inline static int32_t get_offset_of__incrementedDelta_10() { return static_cast<int32_t>(offsetof(UITouchpadSwipeDetector_tF8D39854F9C2AEC5EB30A18490D8B5BDC24B1237, ____incrementedDelta_10)); }
	inline float get__incrementedDelta_10() const { return ____incrementedDelta_10; }
	inline float* get_address_of__incrementedDelta_10() { return &____incrementedDelta_10; }
	inline void set__incrementedDelta_10(float value)
	{
		____incrementedDelta_10 = value;
	}

	inline static int32_t get_offset_of__hasFocus_11() { return static_cast<int32_t>(offsetof(UITouchpadSwipeDetector_tF8D39854F9C2AEC5EB30A18490D8B5BDC24B1237, ____hasFocus_11)); }
	inline bool get__hasFocus_11() const { return ____hasFocus_11; }
	inline bool* get_address_of__hasFocus_11() { return &____hasFocus_11; }
	inline void set__hasFocus_11(bool value)
	{
		____hasFocus_11 = value;
	}
};


// Tobii.XR.UITriggerDragDetector
struct UITriggerDragDetector_t5B95945A64025F5B6F9641C0C64FC5F53431C4B8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Events.UnityEvent Tobii.XR.UITriggerDragDetector::DragLeft
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___DragLeft_4;
	// UnityEngine.Events.UnityEvent Tobii.XR.UITriggerDragDetector::DragRight
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___DragRight_5;
	// System.Boolean Tobii.XR.UITriggerDragDetector::_hasFocus
	bool ____hasFocus_8;
	// System.Boolean Tobii.XR.UITriggerDragDetector::_buttonPressed
	bool ____buttonPressed_9;
	// System.Single Tobii.XR.UITriggerDragDetector::_xScaleLossy
	float ____xScaleLossy_10;
	// System.Single Tobii.XR.UITriggerDragDetector::_controllerMoveAmount
	float ____controllerMoveAmount_11;

public:
	inline static int32_t get_offset_of_DragLeft_4() { return static_cast<int32_t>(offsetof(UITriggerDragDetector_t5B95945A64025F5B6F9641C0C64FC5F53431C4B8, ___DragLeft_4)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_DragLeft_4() const { return ___DragLeft_4; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_DragLeft_4() { return &___DragLeft_4; }
	inline void set_DragLeft_4(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___DragLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DragLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_DragRight_5() { return static_cast<int32_t>(offsetof(UITriggerDragDetector_t5B95945A64025F5B6F9641C0C64FC5F53431C4B8, ___DragRight_5)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_DragRight_5() const { return ___DragRight_5; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_DragRight_5() { return &___DragRight_5; }
	inline void set_DragRight_5(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___DragRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DragRight_5), (void*)value);
	}

	inline static int32_t get_offset_of__hasFocus_8() { return static_cast<int32_t>(offsetof(UITriggerDragDetector_t5B95945A64025F5B6F9641C0C64FC5F53431C4B8, ____hasFocus_8)); }
	inline bool get__hasFocus_8() const { return ____hasFocus_8; }
	inline bool* get_address_of__hasFocus_8() { return &____hasFocus_8; }
	inline void set__hasFocus_8(bool value)
	{
		____hasFocus_8 = value;
	}

	inline static int32_t get_offset_of__buttonPressed_9() { return static_cast<int32_t>(offsetof(UITriggerDragDetector_t5B95945A64025F5B6F9641C0C64FC5F53431C4B8, ____buttonPressed_9)); }
	inline bool get__buttonPressed_9() const { return ____buttonPressed_9; }
	inline bool* get_address_of__buttonPressed_9() { return &____buttonPressed_9; }
	inline void set__buttonPressed_9(bool value)
	{
		____buttonPressed_9 = value;
	}

	inline static int32_t get_offset_of__xScaleLossy_10() { return static_cast<int32_t>(offsetof(UITriggerDragDetector_t5B95945A64025F5B6F9641C0C64FC5F53431C4B8, ____xScaleLossy_10)); }
	inline float get__xScaleLossy_10() const { return ____xScaleLossy_10; }
	inline float* get_address_of__xScaleLossy_10() { return &____xScaleLossy_10; }
	inline void set__xScaleLossy_10(float value)
	{
		____xScaleLossy_10 = value;
	}

	inline static int32_t get_offset_of__controllerMoveAmount_11() { return static_cast<int32_t>(offsetof(UITriggerDragDetector_t5B95945A64025F5B6F9641C0C64FC5F53431C4B8, ____controllerMoveAmount_11)); }
	inline float get__controllerMoveAmount_11() const { return ____controllerMoveAmount_11; }
	inline float* get_address_of__controllerMoveAmount_11() { return &____controllerMoveAmount_11; }
	inline void set__controllerMoveAmount_11(float value)
	{
		____controllerMoveAmount_11 = value;
	}
};


// Tobii.XR.UITriggerGazeButton
struct UITriggerGazeButton_t2554537E0895389690AB22BFAEF73BE3E89B483F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Tobii.XR.UIButtonEvent Tobii.XR.UITriggerGazeButton::OnButtonClicked
	UIButtonEvent_t6ACDD055C471804447D38E6EA0D042A57A243B1A * ___OnButtonClicked_4;
	// Tobii.XR.ButtonState Tobii.XR.UITriggerGazeButton::_currentButtonState
	int32_t ____currentButtonState_6;
	// System.Boolean Tobii.XR.UITriggerGazeButton::_hasFocus
	bool ____hasFocus_7;
	// Tobii.XR.UIGazeButtonGraphics Tobii.XR.UITriggerGazeButton::_uiGazeButtonGraphics
	UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3 * ____uiGazeButtonGraphics_8;

public:
	inline static int32_t get_offset_of_OnButtonClicked_4() { return static_cast<int32_t>(offsetof(UITriggerGazeButton_t2554537E0895389690AB22BFAEF73BE3E89B483F, ___OnButtonClicked_4)); }
	inline UIButtonEvent_t6ACDD055C471804447D38E6EA0D042A57A243B1A * get_OnButtonClicked_4() const { return ___OnButtonClicked_4; }
	inline UIButtonEvent_t6ACDD055C471804447D38E6EA0D042A57A243B1A ** get_address_of_OnButtonClicked_4() { return &___OnButtonClicked_4; }
	inline void set_OnButtonClicked_4(UIButtonEvent_t6ACDD055C471804447D38E6EA0D042A57A243B1A * value)
	{
		___OnButtonClicked_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnButtonClicked_4), (void*)value);
	}

	inline static int32_t get_offset_of__currentButtonState_6() { return static_cast<int32_t>(offsetof(UITriggerGazeButton_t2554537E0895389690AB22BFAEF73BE3E89B483F, ____currentButtonState_6)); }
	inline int32_t get__currentButtonState_6() const { return ____currentButtonState_6; }
	inline int32_t* get_address_of__currentButtonState_6() { return &____currentButtonState_6; }
	inline void set__currentButtonState_6(int32_t value)
	{
		____currentButtonState_6 = value;
	}

	inline static int32_t get_offset_of__hasFocus_7() { return static_cast<int32_t>(offsetof(UITriggerGazeButton_t2554537E0895389690AB22BFAEF73BE3E89B483F, ____hasFocus_7)); }
	inline bool get__hasFocus_7() const { return ____hasFocus_7; }
	inline bool* get_address_of__hasFocus_7() { return &____hasFocus_7; }
	inline void set__hasFocus_7(bool value)
	{
		____hasFocus_7 = value;
	}

	inline static int32_t get_offset_of__uiGazeButtonGraphics_8() { return static_cast<int32_t>(offsetof(UITriggerGazeButton_t2554537E0895389690AB22BFAEF73BE3E89B483F, ____uiGazeButtonGraphics_8)); }
	inline UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3 * get__uiGazeButtonGraphics_8() const { return ____uiGazeButtonGraphics_8; }
	inline UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3 ** get_address_of__uiGazeButtonGraphics_8() { return &____uiGazeButtonGraphics_8; }
	inline void set__uiGazeButtonGraphics_8(UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3 * value)
	{
		____uiGazeButtonGraphics_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____uiGazeButtonGraphics_8), (void*)value);
	}
};


// Tobii.XR.UITriggerGazeButtonWithHold
struct UITriggerGazeButtonWithHold_tA1C5EE28D3A9F40D8B285501369988CE21C3E6E5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Tobii.XR.UIButtonEvent Tobii.XR.UITriggerGazeButtonWithHold::OnButtonClicked
	UIButtonEvent_t6ACDD055C471804447D38E6EA0D042A57A243B1A * ___OnButtonClicked_4;
	// System.Single Tobii.XR.UITriggerGazeButtonWithHold::_minHoldTime
	float ____minHoldTime_5;
	// UnityEngine.UI.Image Tobii.XR.UITriggerGazeButtonWithHold::_buttonFillImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ____buttonFillImage_6;
	// Tobii.XR.ButtonState Tobii.XR.UITriggerGazeButtonWithHold::_currentButtonState
	int32_t ____currentButtonState_7;
	// System.Boolean Tobii.XR.UITriggerGazeButtonWithHold::_hasFocus
	bool ____hasFocus_8;
	// Tobii.XR.UIGazeButtonGraphics Tobii.XR.UITriggerGazeButtonWithHold::_uiGazeButtonGraphics
	UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3 * ____uiGazeButtonGraphics_9;
	// System.Single Tobii.XR.UITriggerGazeButtonWithHold::_currentHoldTime
	float ____currentHoldTime_10;
	// System.Boolean Tobii.XR.UITriggerGazeButtonWithHold::_holdTimerActive
	bool ____holdTimerActive_11;
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> Tobii.XR.UITriggerGazeButtonWithHold::_devices
	List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * ____devices_12;
	// System.Boolean Tobii.XR.UITriggerGazeButtonWithHold::_triggerIsDown
	bool ____triggerIsDown_13;

public:
	inline static int32_t get_offset_of_OnButtonClicked_4() { return static_cast<int32_t>(offsetof(UITriggerGazeButtonWithHold_tA1C5EE28D3A9F40D8B285501369988CE21C3E6E5, ___OnButtonClicked_4)); }
	inline UIButtonEvent_t6ACDD055C471804447D38E6EA0D042A57A243B1A * get_OnButtonClicked_4() const { return ___OnButtonClicked_4; }
	inline UIButtonEvent_t6ACDD055C471804447D38E6EA0D042A57A243B1A ** get_address_of_OnButtonClicked_4() { return &___OnButtonClicked_4; }
	inline void set_OnButtonClicked_4(UIButtonEvent_t6ACDD055C471804447D38E6EA0D042A57A243B1A * value)
	{
		___OnButtonClicked_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnButtonClicked_4), (void*)value);
	}

	inline static int32_t get_offset_of__minHoldTime_5() { return static_cast<int32_t>(offsetof(UITriggerGazeButtonWithHold_tA1C5EE28D3A9F40D8B285501369988CE21C3E6E5, ____minHoldTime_5)); }
	inline float get__minHoldTime_5() const { return ____minHoldTime_5; }
	inline float* get_address_of__minHoldTime_5() { return &____minHoldTime_5; }
	inline void set__minHoldTime_5(float value)
	{
		____minHoldTime_5 = value;
	}

	inline static int32_t get_offset_of__buttonFillImage_6() { return static_cast<int32_t>(offsetof(UITriggerGazeButtonWithHold_tA1C5EE28D3A9F40D8B285501369988CE21C3E6E5, ____buttonFillImage_6)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get__buttonFillImage_6() const { return ____buttonFillImage_6; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of__buttonFillImage_6() { return &____buttonFillImage_6; }
	inline void set__buttonFillImage_6(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		____buttonFillImage_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buttonFillImage_6), (void*)value);
	}

	inline static int32_t get_offset_of__currentButtonState_7() { return static_cast<int32_t>(offsetof(UITriggerGazeButtonWithHold_tA1C5EE28D3A9F40D8B285501369988CE21C3E6E5, ____currentButtonState_7)); }
	inline int32_t get__currentButtonState_7() const { return ____currentButtonState_7; }
	inline int32_t* get_address_of__currentButtonState_7() { return &____currentButtonState_7; }
	inline void set__currentButtonState_7(int32_t value)
	{
		____currentButtonState_7 = value;
	}

	inline static int32_t get_offset_of__hasFocus_8() { return static_cast<int32_t>(offsetof(UITriggerGazeButtonWithHold_tA1C5EE28D3A9F40D8B285501369988CE21C3E6E5, ____hasFocus_8)); }
	inline bool get__hasFocus_8() const { return ____hasFocus_8; }
	inline bool* get_address_of__hasFocus_8() { return &____hasFocus_8; }
	inline void set__hasFocus_8(bool value)
	{
		____hasFocus_8 = value;
	}

	inline static int32_t get_offset_of__uiGazeButtonGraphics_9() { return static_cast<int32_t>(offsetof(UITriggerGazeButtonWithHold_tA1C5EE28D3A9F40D8B285501369988CE21C3E6E5, ____uiGazeButtonGraphics_9)); }
	inline UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3 * get__uiGazeButtonGraphics_9() const { return ____uiGazeButtonGraphics_9; }
	inline UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3 ** get_address_of__uiGazeButtonGraphics_9() { return &____uiGazeButtonGraphics_9; }
	inline void set__uiGazeButtonGraphics_9(UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3 * value)
	{
		____uiGazeButtonGraphics_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____uiGazeButtonGraphics_9), (void*)value);
	}

	inline static int32_t get_offset_of__currentHoldTime_10() { return static_cast<int32_t>(offsetof(UITriggerGazeButtonWithHold_tA1C5EE28D3A9F40D8B285501369988CE21C3E6E5, ____currentHoldTime_10)); }
	inline float get__currentHoldTime_10() const { return ____currentHoldTime_10; }
	inline float* get_address_of__currentHoldTime_10() { return &____currentHoldTime_10; }
	inline void set__currentHoldTime_10(float value)
	{
		____currentHoldTime_10 = value;
	}

	inline static int32_t get_offset_of__holdTimerActive_11() { return static_cast<int32_t>(offsetof(UITriggerGazeButtonWithHold_tA1C5EE28D3A9F40D8B285501369988CE21C3E6E5, ____holdTimerActive_11)); }
	inline bool get__holdTimerActive_11() const { return ____holdTimerActive_11; }
	inline bool* get_address_of__holdTimerActive_11() { return &____holdTimerActive_11; }
	inline void set__holdTimerActive_11(bool value)
	{
		____holdTimerActive_11 = value;
	}

	inline static int32_t get_offset_of__devices_12() { return static_cast<int32_t>(offsetof(UITriggerGazeButtonWithHold_tA1C5EE28D3A9F40D8B285501369988CE21C3E6E5, ____devices_12)); }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * get__devices_12() const { return ____devices_12; }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F ** get_address_of__devices_12() { return &____devices_12; }
	inline void set__devices_12(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * value)
	{
		____devices_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____devices_12), (void*)value);
	}

	inline static int32_t get_offset_of__triggerIsDown_13() { return static_cast<int32_t>(offsetof(UITriggerGazeButtonWithHold_tA1C5EE28D3A9F40D8B285501369988CE21C3E6E5, ____triggerIsDown_13)); }
	inline bool get__triggerIsDown_13() const { return ____triggerIsDown_13; }
	inline bool* get_address_of__triggerIsDown_13() { return &____triggerIsDown_13; }
	inline void set__triggerIsDown_13(bool value)
	{
		____triggerIsDown_13 = value;
	}
};


// Tobii.XR.UITriggerGazeSlider
struct UITriggerGazeSlider_t0A8BB5E0FD17F213EDA17FB7FDBB192FA2C5A08E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Tobii.XR.UISliderEvent Tobii.XR.UITriggerGazeSlider::OnSliderValueChanged
	UISliderEvent_t36D445D0583DF9594EF697A1EE85A07EE10DA88D * ___OnSliderValueChanged_4;
	// System.Int32 Tobii.XR.UITriggerGazeSlider::_value
	int32_t ____value_5;
	// System.Single Tobii.XR.UITriggerGazeSlider::_controllerMovementMultiplier
	float ____controllerMovementMultiplier_6;
	// System.Int32 Tobii.XR.UITriggerGazeSlider::_minValue
	int32_t ____minValue_7;
	// System.Int32 Tobii.XR.UITriggerGazeSlider::_maxValue
	int32_t ____maxValue_8;
	// System.Single Tobii.XR.UITriggerGazeSlider::_hapticStrength
	float ____hapticStrength_9;
	// System.Boolean Tobii.XR.UITriggerGazeSlider::_debugHasBeenLogged
	bool ____debugHasBeenLogged_11;
	// System.Int32 Tobii.XR.UITriggerGazeSlider::_currentStep
	int32_t ____currentStep_12;
	// System.Int32 Tobii.XR.UITriggerGazeSlider::_stepsToMove
	int32_t ____stepsToMove_13;
	// System.Single Tobii.XR.UITriggerGazeSlider::_incrementedMoveAmount
	float ____incrementedMoveAmount_14;
	// System.Single Tobii.XR.UITriggerGazeSlider::_sizePerStep
	float ____sizePerStep_15;
	// System.Boolean Tobii.XR.UITriggerGazeSlider::_hasFocus
	bool ____hasFocus_16;
	// System.Boolean Tobii.XR.UITriggerGazeSlider::_operatingSlider
	bool ____operatingSlider_17;
	// System.Single Tobii.XR.UITriggerGazeSlider::_xScaleLossy
	float ____xScaleLossy_18;
	// Tobii.XR.UIGazeSliderGraphics Tobii.XR.UITriggerGazeSlider::_sliderGraphics
	UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * ____sliderGraphics_19;
	// System.Single Tobii.XR.UITriggerGazeSlider::_sliderFillAmount
	float ____sliderFillAmount_20;

public:
	inline static int32_t get_offset_of_OnSliderValueChanged_4() { return static_cast<int32_t>(offsetof(UITriggerGazeSlider_t0A8BB5E0FD17F213EDA17FB7FDBB192FA2C5A08E, ___OnSliderValueChanged_4)); }
	inline UISliderEvent_t36D445D0583DF9594EF697A1EE85A07EE10DA88D * get_OnSliderValueChanged_4() const { return ___OnSliderValueChanged_4; }
	inline UISliderEvent_t36D445D0583DF9594EF697A1EE85A07EE10DA88D ** get_address_of_OnSliderValueChanged_4() { return &___OnSliderValueChanged_4; }
	inline void set_OnSliderValueChanged_4(UISliderEvent_t36D445D0583DF9594EF697A1EE85A07EE10DA88D * value)
	{
		___OnSliderValueChanged_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSliderValueChanged_4), (void*)value);
	}

	inline static int32_t get_offset_of__value_5() { return static_cast<int32_t>(offsetof(UITriggerGazeSlider_t0A8BB5E0FD17F213EDA17FB7FDBB192FA2C5A08E, ____value_5)); }
	inline int32_t get__value_5() const { return ____value_5; }
	inline int32_t* get_address_of__value_5() { return &____value_5; }
	inline void set__value_5(int32_t value)
	{
		____value_5 = value;
	}

	inline static int32_t get_offset_of__controllerMovementMultiplier_6() { return static_cast<int32_t>(offsetof(UITriggerGazeSlider_t0A8BB5E0FD17F213EDA17FB7FDBB192FA2C5A08E, ____controllerMovementMultiplier_6)); }
	inline float get__controllerMovementMultiplier_6() const { return ____controllerMovementMultiplier_6; }
	inline float* get_address_of__controllerMovementMultiplier_6() { return &____controllerMovementMultiplier_6; }
	inline void set__controllerMovementMultiplier_6(float value)
	{
		____controllerMovementMultiplier_6 = value;
	}

	inline static int32_t get_offset_of__minValue_7() { return static_cast<int32_t>(offsetof(UITriggerGazeSlider_t0A8BB5E0FD17F213EDA17FB7FDBB192FA2C5A08E, ____minValue_7)); }
	inline int32_t get__minValue_7() const { return ____minValue_7; }
	inline int32_t* get_address_of__minValue_7() { return &____minValue_7; }
	inline void set__minValue_7(int32_t value)
	{
		____minValue_7 = value;
	}

	inline static int32_t get_offset_of__maxValue_8() { return static_cast<int32_t>(offsetof(UITriggerGazeSlider_t0A8BB5E0FD17F213EDA17FB7FDBB192FA2C5A08E, ____maxValue_8)); }
	inline int32_t get__maxValue_8() const { return ____maxValue_8; }
	inline int32_t* get_address_of__maxValue_8() { return &____maxValue_8; }
	inline void set__maxValue_8(int32_t value)
	{
		____maxValue_8 = value;
	}

	inline static int32_t get_offset_of__hapticStrength_9() { return static_cast<int32_t>(offsetof(UITriggerGazeSlider_t0A8BB5E0FD17F213EDA17FB7FDBB192FA2C5A08E, ____hapticStrength_9)); }
	inline float get__hapticStrength_9() const { return ____hapticStrength_9; }
	inline float* get_address_of__hapticStrength_9() { return &____hapticStrength_9; }
	inline void set__hapticStrength_9(float value)
	{
		____hapticStrength_9 = value;
	}

	inline static int32_t get_offset_of__debugHasBeenLogged_11() { return static_cast<int32_t>(offsetof(UITriggerGazeSlider_t0A8BB5E0FD17F213EDA17FB7FDBB192FA2C5A08E, ____debugHasBeenLogged_11)); }
	inline bool get__debugHasBeenLogged_11() const { return ____debugHasBeenLogged_11; }
	inline bool* get_address_of__debugHasBeenLogged_11() { return &____debugHasBeenLogged_11; }
	inline void set__debugHasBeenLogged_11(bool value)
	{
		____debugHasBeenLogged_11 = value;
	}

	inline static int32_t get_offset_of__currentStep_12() { return static_cast<int32_t>(offsetof(UITriggerGazeSlider_t0A8BB5E0FD17F213EDA17FB7FDBB192FA2C5A08E, ____currentStep_12)); }
	inline int32_t get__currentStep_12() const { return ____currentStep_12; }
	inline int32_t* get_address_of__currentStep_12() { return &____currentStep_12; }
	inline void set__currentStep_12(int32_t value)
	{
		____currentStep_12 = value;
	}

	inline static int32_t get_offset_of__stepsToMove_13() { return static_cast<int32_t>(offsetof(UITriggerGazeSlider_t0A8BB5E0FD17F213EDA17FB7FDBB192FA2C5A08E, ____stepsToMove_13)); }
	inline int32_t get__stepsToMove_13() const { return ____stepsToMove_13; }
	inline int32_t* get_address_of__stepsToMove_13() { return &____stepsToMove_13; }
	inline void set__stepsToMove_13(int32_t value)
	{
		____stepsToMove_13 = value;
	}

	inline static int32_t get_offset_of__incrementedMoveAmount_14() { return static_cast<int32_t>(offsetof(UITriggerGazeSlider_t0A8BB5E0FD17F213EDA17FB7FDBB192FA2C5A08E, ____incrementedMoveAmount_14)); }
	inline float get__incrementedMoveAmount_14() const { return ____incrementedMoveAmount_14; }
	inline float* get_address_of__incrementedMoveAmount_14() { return &____incrementedMoveAmount_14; }
	inline void set__incrementedMoveAmount_14(float value)
	{
		____incrementedMoveAmount_14 = value;
	}

	inline static int32_t get_offset_of__sizePerStep_15() { return static_cast<int32_t>(offsetof(UITriggerGazeSlider_t0A8BB5E0FD17F213EDA17FB7FDBB192FA2C5A08E, ____sizePerStep_15)); }
	inline float get__sizePerStep_15() const { return ____sizePerStep_15; }
	inline float* get_address_of__sizePerStep_15() { return &____sizePerStep_15; }
	inline void set__sizePerStep_15(float value)
	{
		____sizePerStep_15 = value;
	}

	inline static int32_t get_offset_of__hasFocus_16() { return static_cast<int32_t>(offsetof(UITriggerGazeSlider_t0A8BB5E0FD17F213EDA17FB7FDBB192FA2C5A08E, ____hasFocus_16)); }
	inline bool get__hasFocus_16() const { return ____hasFocus_16; }
	inline bool* get_address_of__hasFocus_16() { return &____hasFocus_16; }
	inline void set__hasFocus_16(bool value)
	{
		____hasFocus_16 = value;
	}

	inline static int32_t get_offset_of__operatingSlider_17() { return static_cast<int32_t>(offsetof(UITriggerGazeSlider_t0A8BB5E0FD17F213EDA17FB7FDBB192FA2C5A08E, ____operatingSlider_17)); }
	inline bool get__operatingSlider_17() const { return ____operatingSlider_17; }
	inline bool* get_address_of__operatingSlider_17() { return &____operatingSlider_17; }
	inline void set__operatingSlider_17(bool value)
	{
		____operatingSlider_17 = value;
	}

	inline static int32_t get_offset_of__xScaleLossy_18() { return static_cast<int32_t>(offsetof(UITriggerGazeSlider_t0A8BB5E0FD17F213EDA17FB7FDBB192FA2C5A08E, ____xScaleLossy_18)); }
	inline float get__xScaleLossy_18() const { return ____xScaleLossy_18; }
	inline float* get_address_of__xScaleLossy_18() { return &____xScaleLossy_18; }
	inline void set__xScaleLossy_18(float value)
	{
		____xScaleLossy_18 = value;
	}

	inline static int32_t get_offset_of__sliderGraphics_19() { return static_cast<int32_t>(offsetof(UITriggerGazeSlider_t0A8BB5E0FD17F213EDA17FB7FDBB192FA2C5A08E, ____sliderGraphics_19)); }
	inline UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * get__sliderGraphics_19() const { return ____sliderGraphics_19; }
	inline UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 ** get_address_of__sliderGraphics_19() { return &____sliderGraphics_19; }
	inline void set__sliderGraphics_19(UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * value)
	{
		____sliderGraphics_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sliderGraphics_19), (void*)value);
	}

	inline static int32_t get_offset_of__sliderFillAmount_20() { return static_cast<int32_t>(offsetof(UITriggerGazeSlider_t0A8BB5E0FD17F213EDA17FB7FDBB192FA2C5A08E, ____sliderFillAmount_20)); }
	inline float get__sliderFillAmount_20() const { return ____sliderFillAmount_20; }
	inline float* get_address_of__sliderFillAmount_20() { return &____sliderFillAmount_20; }
	inline void set__sliderFillAmount_20(float value)
	{
		____sliderFillAmount_20 = value;
	}
};


// Tobii.XR.UITriggerGazeToggleButton
struct UITriggerGazeToggleButton_t84661EDC6F01AC3F57A499DE2B60F8CCA0E0C462  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Tobii.XR.UIToggleEvent Tobii.XR.UITriggerGazeToggleButton::OnButtonToggled
	UIToggleEvent_t3025F2607AD11E28D3936621C944D224B4FCF15B * ___OnButtonToggled_4;
	// System.Boolean Tobii.XR.UITriggerGazeToggleButton::_isToggledOn
	bool ____isToggledOn_5;
	// System.Boolean Tobii.XR.UITriggerGazeToggleButton::_hasFocus
	bool ____hasFocus_8;
	// System.Boolean Tobii.XR.UITriggerGazeToggleButton::_buttonPressed
	bool ____buttonPressed_9;
	// Tobii.XR.UIGazeToggleButtonGraphics Tobii.XR.UITriggerGazeToggleButton::_uiGazeToggleButtonGraphics
	UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * ____uiGazeToggleButtonGraphics_10;
	// System.Boolean Tobii.XR.UITriggerGazeToggleButton::_initialized
	bool ____initialized_11;

public:
	inline static int32_t get_offset_of_OnButtonToggled_4() { return static_cast<int32_t>(offsetof(UITriggerGazeToggleButton_t84661EDC6F01AC3F57A499DE2B60F8CCA0E0C462, ___OnButtonToggled_4)); }
	inline UIToggleEvent_t3025F2607AD11E28D3936621C944D224B4FCF15B * get_OnButtonToggled_4() const { return ___OnButtonToggled_4; }
	inline UIToggleEvent_t3025F2607AD11E28D3936621C944D224B4FCF15B ** get_address_of_OnButtonToggled_4() { return &___OnButtonToggled_4; }
	inline void set_OnButtonToggled_4(UIToggleEvent_t3025F2607AD11E28D3936621C944D224B4FCF15B * value)
	{
		___OnButtonToggled_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnButtonToggled_4), (void*)value);
	}

	inline static int32_t get_offset_of__isToggledOn_5() { return static_cast<int32_t>(offsetof(UITriggerGazeToggleButton_t84661EDC6F01AC3F57A499DE2B60F8CCA0E0C462, ____isToggledOn_5)); }
	inline bool get__isToggledOn_5() const { return ____isToggledOn_5; }
	inline bool* get_address_of__isToggledOn_5() { return &____isToggledOn_5; }
	inline void set__isToggledOn_5(bool value)
	{
		____isToggledOn_5 = value;
	}

	inline static int32_t get_offset_of__hasFocus_8() { return static_cast<int32_t>(offsetof(UITriggerGazeToggleButton_t84661EDC6F01AC3F57A499DE2B60F8CCA0E0C462, ____hasFocus_8)); }
	inline bool get__hasFocus_8() const { return ____hasFocus_8; }
	inline bool* get_address_of__hasFocus_8() { return &____hasFocus_8; }
	inline void set__hasFocus_8(bool value)
	{
		____hasFocus_8 = value;
	}

	inline static int32_t get_offset_of__buttonPressed_9() { return static_cast<int32_t>(offsetof(UITriggerGazeToggleButton_t84661EDC6F01AC3F57A499DE2B60F8CCA0E0C462, ____buttonPressed_9)); }
	inline bool get__buttonPressed_9() const { return ____buttonPressed_9; }
	inline bool* get_address_of__buttonPressed_9() { return &____buttonPressed_9; }
	inline void set__buttonPressed_9(bool value)
	{
		____buttonPressed_9 = value;
	}

	inline static int32_t get_offset_of__uiGazeToggleButtonGraphics_10() { return static_cast<int32_t>(offsetof(UITriggerGazeToggleButton_t84661EDC6F01AC3F57A499DE2B60F8CCA0E0C462, ____uiGazeToggleButtonGraphics_10)); }
	inline UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * get__uiGazeToggleButtonGraphics_10() const { return ____uiGazeToggleButtonGraphics_10; }
	inline UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 ** get_address_of__uiGazeToggleButtonGraphics_10() { return &____uiGazeToggleButtonGraphics_10; }
	inline void set__uiGazeToggleButtonGraphics_10(UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * value)
	{
		____uiGazeToggleButtonGraphics_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____uiGazeToggleButtonGraphics_10), (void*)value);
	}

	inline static int32_t get_offset_of__initialized_11() { return static_cast<int32_t>(offsetof(UITriggerGazeToggleButton_t84661EDC6F01AC3F57A499DE2B60F8CCA0E0C462, ____initialized_11)); }
	inline bool get__initialized_11() const { return ____initialized_11; }
	inline bool* get_address_of__initialized_11() { return &____initialized_11; }
	inline void set__initialized_11(bool value)
	{
		____initialized_11 = value;
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t42061B4CA43487DD8ECD8C3AACCEF783FA081FF0  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Assembly_t * m_Items[1];

public:
	inline Assembly_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Assembly_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Assembly_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Assembly_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Assembly_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Assembly_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mCA84157864A199574AD0B7F3083F99B54DC1F98C_gshared (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_m51DA29A5CB10D532C42135ADA3270F6E695B9364_gshared (RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_FirstOrDefault_TisRuntimeObject_mEA30C68B8D8C7D44DF6690A8FC79E4A48A09C6F9_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::SelectMany<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Collections.Generic.IEnumerable`1<!!1>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_SelectMany_TisRuntimeObject_TisRuntimeObject_mA9FB30A3B43F7494F50724CDB8A1319B62633395_gshared (RuntimeObject* ___source0, Func_2_tD457CA07229B6835F9D0AB141D4F1A7455A8AF29 * ___selector1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// !0 System.Func`1<System.Object>::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_gshared (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.ScriptableObject::CreateInstance<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ScriptableObject_CreateInstance_TisRuntimeObject_mACD826EE1088E1006234E254924A7067CD467A5F_gshared (const RuntimeMethod* method);
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m2A4FE889FB540EA198F7757D17DC2290461E5EE9_gshared (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Tobii.G2OM.FocusedCandidate>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0529F0D5B1BA587113A1E74322AD526D1C8867BB_gshared (List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Func`2<Tobii.XR.TobiiXR_Settings/ProviderElement,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mFB895CE4A4CE2D3F4954E8AC101F92C0896FB4E0_gshared (Func_2_tA94719DE56CE149024C3C6AD70662A042EAF6C71 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<Tobii.XR.TobiiXR_Settings/ProviderElement,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisProviderElement_t76AE55D58DAD3043AE5CE90FE6B06F6C474697E9_TisRuntimeObject_mCD0CBBE70441E48F690B83A1C104A1B57DA8E211_gshared (RuntimeObject* ___source0, Func_2_tA94719DE56CE149024C3C6AD70662A042EAF6C71 * ___selector1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_mC0F1DA980E0433D70A6CF9DD7CD1942BB7FE87C0_gshared (RuntimeObject* ___source0, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector1, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_FirstOrDefault_TisRuntimeObject_mEA8E5753D70A4AA5ABF983D5FE3BACC1537B3ECE_gshared (RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Tobii.XR.TobiiXR_Settings/ProviderElement>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m2D0945B0A5D9457CD045D4DB2DACB55D6727F9A2_gshared (List_1_t047270E2141D972A607E0D91E0E16FD0FFFC2D07 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Tobii.XR.TobiiXR_Settings/ProviderElement>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m5F2125A910D0551B1D0A871848A833DA8EF773C6_gshared (List_1_t047270E2141D972A607E0D91E0E16FD0FFFC2D07 * __this, ProviderElement_t76AE55D58DAD3043AE5CE90FE6B06F6C474697E9  ___item0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mD87552C18A41196B69A62A366C8238FC246B151A_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2__ctor_mA20F7BCCA4DE93E18BD588DD8D59E064ED9C6389_gshared (UnityEvent_2_t528947688904F26DFB16C3AFF468E62DF205DC60 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2__ctor_mABD52D059C6A3D5D33B542AB06A381BCE1C4DF28_gshared (UnityEvent_2_tD47463D1388FE0395585FD2FC6019F50DC5C530F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m73C0FE7D4CDD8627332257E8503F2E9862E33C3E_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, RuntimeObject * ___arg00, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Int32>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_Invoke_mEB95A202876DED5F08B031E7E5E49746CBD6A0E5_gshared (UnityEvent_2_t528947688904F26DFB16C3AFF468E62DF205DC60 * __this, RuntimeObject * ___arg00, int32_t ___arg11, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Boolean>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_Invoke_mB466CB8D7EE9159034DA23B0918BC819FB51BAF3_gshared (UnityEvent_2_tD47463D1388FE0395585FD2FC6019F50DC5C530F * __this, RuntimeObject * ___arg00, bool ___arg11, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m301E51804C88F4CDA1665B126A03BC15123C2BB1_gshared (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Resources_Load_TisRuntimeObject_m39B6A35CFE684CD1FFF77873E20D7297B36A55E8_gshared (String_t* ___path0, const RuntimeMethod* method);

// System.Void Tobii.XR.Internal.AssemblyUtils/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_mA27A29A516241160DC9DF6E4E7E95FECA3BF30F9 (U3CU3Ec__DisplayClass0_0_t8AA428BBDE450BAEDAF50A6FE80DB09E6FE06571 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.Type> Tobii.XR.Internal.AssemblyUtils::EyetrackingProviderTypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AssemblyUtils_EyetrackingProviderTypes_m79FDB082C375DDDFF1345DFFFB946C929B5EDBD4 (const RuntimeMethod* method);
// System.Void System.Func`2<System.Type,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mF99B731B7FE71291198AC579A27977DAFAEE528D (Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mCA84157864A199574AD0B7F3083F99B54DC1F98C_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Type>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisType_t_m2A0B85DA7F086A9F38AE3CBF6F6DB181B2A86753 (RuntimeObject* ___source0, Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 *, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m51DA29A5CB10D532C42135ADA3270F6E695B9364_gshared)(___source0, ___predicate1, method);
}
// !!0 System.Linq.Enumerable::FirstOrDefault<System.Type>(System.Collections.Generic.IEnumerable`1<!!0>)
inline Type_t * Enumerable_FirstOrDefault_TisType_t_mB2DD58F1158C4877353C4DF1F486FC9D97794727 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  Type_t * (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_mEA30C68B8D8C7D44DF6690A8FC79E4A48A09C6F9_gshared)(___source0, method);
}
// System.Void Tobii.XR.Internal.AssemblyUtils/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m6E794A471B51088955C3B912937813F300339AFD (U3CU3Ec__DisplayClass1_0_tB8AFD562969053C15173A4FB08AD7412A6D911A0 * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.AppDomain System.AppDomain::get_CurrentDomain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A * AppDomain_get_CurrentDomain_mC2FE307811914289CBBDEFEFF6175FCE2E96A55E (const RuntimeMethod* method);
// System.Reflection.Assembly[] System.AppDomain::GetAssemblies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssemblyU5BU5D_t42061B4CA43487DD8ECD8C3AACCEF783FA081FF0* AppDomain_GetAssemblies_m7397BD0461B4D6BA76AE0974DE9FBEDAF70AEBFD (AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A * __this, const RuntimeMethod* method);
// System.Void System.Func`2<System.Reflection.Assembly,System.Collections.Generic.IEnumerable`1<System.Type>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mF525E1BFCBF8F3108DEAE75F57915F8E5F8F6906 (Func_2_tE0DBF080012BEFCAB3A265240B5CD35BD3519412 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tE0DBF080012BEFCAB3A265240B5CD35BD3519412 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::SelectMany<System.Reflection.Assembly,System.Type>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Collections.Generic.IEnumerable`1<!!1>>)
inline RuntimeObject* Enumerable_SelectMany_TisAssembly_t_TisType_t_m714BE3CD2D51FDBC0AE1C1A383B08D53E587CADC (RuntimeObject* ___source0, Func_2_tE0DBF080012BEFCAB3A265240B5CD35BD3519412 * ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tE0DBF080012BEFCAB3A265240B5CD35BD3519412 *, const RuntimeMethod*))Enumerable_SelectMany_TisRuntimeObject_TisRuntimeObject_mA9FB30A3B43F7494F50724CDB8A1319B62633395_gshared)(___source0, ___selector1, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Attribute System.Attribute::GetCustomAttribute(System.Reflection.MemberInfo,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * Attribute_GetCustomAttribute_mC3098F23886E5D9E7E8083DE6E80B5D2A136FC25 (MemberInfo_t * ___element0, Type_t * ___attributeType1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m5BB06692D9A48A3FEEB102881A86417DE6DA5027 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared)(__this, ___key0, method);
}
// System.Type Tobii.XR.Internal.AssemblyUtils::EyetrackingProviderType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * AssemblyUtils_EyetrackingProviderType_m5435DA7C082293513F0AF581A4269512EE928567 (String_t* ___typeName0, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
inline RuntimeObject * Enumerable_FirstOrDefault_TisRuntimeObject_mEA30C68B8D8C7D44DF6690A8FC79E4A48A09C6F9 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_mEA30C68B8D8C7D44DF6690A8FC79E4A48A09C6F9_gshared)(___source0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Item(!0)
inline String_t* Dictionary_2_get_Item_mFCD5E71429358EE225039B602674518740D30141 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// !0 System.Func`1<Tobii.XR.Internal.TobiiEulaFile>::Invoke()
inline TobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466 * Func_1_Invoke_m7008E359360830F80BC6ED46103A57A0480C942E (Func_1_t260F34DDA6149F57AC12F143882952B9B8673B6A * __this, const RuntimeMethod* method)
{
	return ((  TobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466 * (*) (Func_1_t260F34DDA6149F57AC12F143882952B9B8673B6A *, const RuntimeMethod*))Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Boolean Tobii.XR.Internal.TobiiEulaFile::IsEulaAccepted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TobiiEulaFile_IsEulaAccepted_mA26F0FC64B26F2AFA842D039754947B2EF4409A1_inline (TobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.ScriptableObject::CreateInstance<Tobii.XR.Internal.TobiiEulaFile>()
inline TobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466 * ScriptableObject_CreateInstance_TisTobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466_m83E128068266AE53287AE6976427CD363421C9BD (const RuntimeMethod* method)
{
	return ((  TobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466 * (*) (const RuntimeMethod*))ScriptableObject_CreateInstance_TisRuntimeObject_mACD826EE1088E1006234E254924A7067CD467A5F_gshared)(method);
}
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063 (ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * __this, const RuntimeMethod* method);
// System.Void System.Func`1<Tobii.XR.Internal.TobiiEulaFile>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mD168B39FC1925BF2254BC1BE0C5135E9CCDF7686 (Func_1_t260F34DDA6149F57AC12F143882952B9B8673B6A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t260F34DDA6149F57AC12F143882952B9B8673B6A *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m2A4FE889FB540EA198F7757D17DC2290461E5EE9_gshared)(__this, ___object0, ___method1, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// Tobii.XR.TobiiXR/TobiiXRInternal Tobii.XR.TobiiXR::get_Internal()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD * TobiiXR_get_Internal_m032E70B662616FA297C5904142C2213B97834C79_inline (const RuntimeMethod* method);
// Tobii.G2OM.G2OM Tobii.XR.TobiiXR/TobiiXRInternal::get_G2OM()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C * TobiiXRInternal_get_G2OM_m5C7F8E6CA9D0498B721C4899CFD49AE2107D968A_inline (TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Tobii.G2OM.FocusedCandidate>::.ctor()
inline void List_1__ctor_m0529F0D5B1BA587113A1E74322AD526D1C8867BB (List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C *, const RuntimeMethod*))List_1__ctor_m0529F0D5B1BA587113A1E74322AD526D1C8867BB_gshared)(__this, method);
}
// System.Collections.Generic.List`1<Tobii.G2OM.FocusedCandidate> Tobii.G2OM.G2OM::get_GazeFocusedObjects()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C * G2OM_get_GazeFocusedObjects_mCC8E75B3D0A877B8E999F238EF0DF616AB8D274B_inline (G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C * __this, const RuntimeMethod* method);
// Tobii.XR.IEyeTrackingProvider Tobii.XR.TobiiXR/TobiiXRInternal::get_Provider()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TobiiXRInternal_get_Provider_m07DAA2344CD8F0DC6E15E3D75489BE9578619F6C_inline (TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD * __this, const RuntimeMethod* method);
// System.Boolean Tobii.XR.TobiiXR::get_IsRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TobiiXR_get_IsRunning_m23502EC59626C34AD597F2E6777BAB485BAD35E5 (const RuntimeMethod* method);
// System.Void Tobii.XR.TobiiXR::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TobiiXR_Stop_m5D6EF0ECE0F1C85E6B3C7BACBCFD474D9B6F0832 (const RuntimeMethod* method);
// System.Boolean Tobii.XR.Internal.TobiiEula::IsEulaAccepted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TobiiEula_IsEulaAccepted_m9B801A4A39621FD4BF9871223E487650D5977989 (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void Tobii.XR.TobiiXR_Settings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TobiiXR_Settings__ctor_m34440F34C01DB5F95ED866FDA368A63ED9487400 (TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0 * __this, const RuntimeMethod* method);
// System.Void Tobii.XR.TobiiXR/TobiiXRInternal::set_Settings(Tobii.XR.TobiiXR_Settings)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TobiiXRInternal_set_Settings_m7DE46915ADF4B54D37AF20782BC8D8D50D1F676C_inline (TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD * __this, TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_Unicode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_Unicode_mB0C6AE1F91373CEB8A5BC5466F6B8F92C0A398B9 (const RuntimeMethod* method);
// System.Byte[] UnityEngine.TextAsset::get_bytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* TextAsset_get_bytes_m5F15438DABBBAAF7434D53B6778A97A498C1940F (TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Void Tobii.XR.TobiiProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TobiiProvider__ctor_m1FC62AE5F9EAE995D0A4E1D5C4B742A640C4ECC9 (TobiiProvider_tD45A100799E1CF76E55DBE531F3B1D064727C6AB * __this, const RuntimeMethod* method);
// System.Boolean Tobii.XR.TobiiProvider::InitializeWithLicense(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TobiiProvider_InitializeWithLicense_m82F1E35F1FB699F8F52FCE405BFA02A98906C11B (TobiiProvider_tD45A100799E1CF76E55DBE531F3B1D064727C6AB * __this, String_t* ___licenseKey0, bool ___enableAdvanced1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean Tobii.XR.TobiiProvider::get_HasValidOcumenLicense()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TobiiProvider_get_HasValidOcumenLicense_mC83B0B9612C3BEE41A72225F931D7DDA5C4BB4CE (TobiiProvider_tD45A100799E1CF76E55DBE531F3B1D064727C6AB * __this, const RuntimeMethod* method);
// System.Void Tobii.XR.TobiiXRAdvanced::.ctor(Tobii.XR.TobiiProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TobiiXRAdvanced__ctor_m67A35EC18D6D2D73970F37BD05B51291D5A47A11 (TobiiXRAdvanced_tD89ECFBC056BC287F4A99F38CAD8804962868C74 * __this, TobiiProvider_tD45A100799E1CF76E55DBE531F3B1D064727C6AB * ___provider0, const RuntimeMethod* method);
// System.Void Tobii.XR.TobiiXR/TobiiXRInternal::set_Provider(Tobii.XR.IEyeTrackingProvider)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TobiiXRInternal_set_Provider_m2A33EB6E402AEFC61C5D516BE1AE55790854935B_inline (TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// Tobii.XR.IEyeTrackingProvider Tobii.XR.TobiiXR_Settings::get_EyeTrackingProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TobiiXR_Settings_get_EyeTrackingProvider_m935E1651AEFA842955C24282543AD75C6A2FF230 (TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0 * __this, const RuntimeMethod* method);
// System.Void Tobii.XR.NoseDirectionProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoseDirectionProvider__ctor_m4034F1A67250F9B1AB1D11E19AF4DE2BE34EBB61 (NoseDirectionProvider_t390567955750C154B13CD90437312E9A6EF7859B * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// Tobii.G2OM.G2OM Tobii.XR.TobiiXR_Settings::get_G2OM()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C * TobiiXR_Settings_get_G2OM_m7E33F91F0087382E37BB47A561FB5623911BD7F7_inline (TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0 * __this, const RuntimeMethod* method);
// System.Void Tobii.XR.TobiiXR/TobiiXRInternal::set_G2OM(Tobii.G2OM.G2OM)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TobiiXRInternal_set_G2OM_m8318A9FB4FD936B1E3E99CA396B10305BE9D6210_inline (TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD * __this, G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C * ___value0, const RuntimeMethod* method);
// System.Void Tobii.G2OM.G2OM_Description::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void G2OM_Description__ctor_mA17739FD04B984F3F6A14F277415421273D1E8F7 (G2OM_Description_tDDC3E7F8747B6FC42E6B44F4302D67374D28F2DB * __this, const RuntimeMethod* method);
// Tobii.G2OM.G2OM Tobii.G2OM.G2OM::Create(Tobii.G2OM.G2OM_Description)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C * G2OM_Create_m05896AB723E3055BB7A95264064C56C6EFF22C5B (G2OM_Description_tDDC3E7F8747B6FC42E6B44F4302D67374D28F2DB * ___description0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Tobii.XR.Internal.TobiiXR_Lifecycle>()
inline TobiiXR_Lifecycle_t5A45FF952AADCB1A985E3D365599A048F5142195 * GameObject_AddComponent_TisTobiiXR_Lifecycle_t5A45FF952AADCB1A985E3D365599A048F5142195_mF53ABD3C38E75BE9F52A2F3AD531E40062D59EA4 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  TobiiXR_Lifecycle_t5A45FF952AADCB1A985E3D365599A048F5142195 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Void Tobii.G2OM.G2OM::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void G2OM_Destroy_mF71BC3363C4702D18EB5E4664D8020C7C2D44449 (G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void Tobii.XR.EyeTrackingDataHelper::CopyAndTransformGazeData(Tobii.XR.TobiiXR_EyeTrackingData,Tobii.XR.TobiiXR_EyeTrackingData,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EyeTrackingDataHelper_CopyAndTransformGazeData_m5F16455CD58F2C01D2B17C8A4B39D3740ED258E2 (TobiiXR_EyeTrackingData_t77A57D23997EA5B3B365ABDD60221EFB27BD72EA * ___src0, TobiiXR_EyeTrackingData_t77A57D23997EA5B3B365ABDD60221EFB27BD72EA * ___dest1, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___transformMatrix2, const RuntimeMethod* method);
// Tobii.XR.EyeTrackingFilterBase Tobii.XR.TobiiXR/TobiiXRInternal::get_Filter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EyeTrackingFilterBase_t898096B000FCA3A953F1A9BC81D2648D8CD3C66C * TobiiXRInternal_get_Filter_m26E857D8E8F2BEF62353F06F20698340AFDA2FFB (TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyVector(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Matrix4x4_MultiplyVector_m88C4BE23EB0B45BB701514AF3E1CA5A857F8212C (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector0, const RuntimeMethod* method);
// Tobii.G2OM.G2OM_DeviceData Tobii.XR.TobiiXR::CreateG2OMData(Tobii.XR.TobiiXR_EyeTrackingData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR G2OM_DeviceData_t89D8C181AD591B39B1DB1F185A0252ACCF616F14  TobiiXR_CreateG2OMData_m350B87FB8DDADA2C3248C71A42E4C7DE48F15AB6 (TobiiXR_EyeTrackingData_t77A57D23997EA5B3B365ABDD60221EFB27BD72EA * ___data0, const RuntimeMethod* method);
// System.Void Tobii.G2OM.G2OM::Tick(Tobii.G2OM.G2OM_DeviceData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void G2OM_Tick_m8CFFB902FA6305285F141FCF85BAAE440CCAE12E (G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C * __this, G2OM_DeviceData_t89D8C181AD591B39B1DB1F185A0252ACCF616F14  ___deviceData0, const RuntimeMethod* method);
// System.Byte Tobii.G2OM.G2OM_ExtensionMethods::ToByte(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t G2OM_ExtensionMethods_ToByte_m9F6BF5ADFF7FFEE00E444B180D3A752743D3A914 (bool ___b0, const RuntimeMethod* method);
// Tobii.G2OM.G2OM_Ray Tobii.G2OM.G2OM_UnityExtensionMethods::CreateRay(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR G2OM_Ray_t5B49A5A55B51DA9DF39338656E6841A0BD844FB9  G2OM_UnityExtensionMethods_CreateRay_m6FB164055DD7C1891C9B42E12B610CE06B6B5D30 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rayOrigin0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rayDirection1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50 (const RuntimeMethod* method);
// Tobii.G2OM.G2OM_Vector3 Tobii.G2OM.G2OM_UnityExtensionMethods::AsG2OMVector3(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D  G2OM_UnityExtensionMethods_AsG2OMVector3_m285727854FC4760794F7B4EA667B3F3C0EA9DB06 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44 (const RuntimeMethod* method);
// System.Void Tobii.XR.TobiiXR/TobiiXRInternal::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TobiiXRInternal__ctor_mEE195D7AB67BD58B59B863C6144C18071DFE419E (TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD * __this, const RuntimeMethod* method);
// System.Void Tobii.XR.TobiiXR_EyeTrackingData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TobiiXR_EyeTrackingData__ctor_m32665213224589BADDE8E4A9E424C8188005BB28 (TobiiXR_EyeTrackingData_t77A57D23997EA5B3B365ABDD60221EFB27BD72EA * __this, const RuntimeMethod* method);
// System.Boolean Tobii.XR.TobiiXR::Start(Tobii.XR.TobiiXR_Settings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TobiiXR_Start_mB3C5E46DAF061A6E7F7742119A6306C7ADC44213 (TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0 * ___settings0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Application::add_quitting(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_add_quitting_mB3FABD4514AA9FED23136D80BF59FDCE00D0F9B7 (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// Tobii.XR.IEyeTrackingProvider Tobii.XR.TobiiXR_Settings::GetProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TobiiXR_Settings_GetProvider_mC626B008298B525C593E56769F2FB050144F8020 (TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0 * __this, const RuntimeMethod* method);
// System.Void System.Func`2<Tobii.XR.TobiiXR_Settings/ProviderElement,System.Type>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mD7D590149A2A911A966A7D1E031658803A962FF6 (Func_2_tD834A382C7BC9720A3941F056FF6626757F128C1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tD834A382C7BC9720A3941F056FF6626757F128C1 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mFB895CE4A4CE2D3F4954E8AC101F92C0896FB4E0_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<Tobii.XR.TobiiXR_Settings/ProviderElement,System.Type>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_Select_TisProviderElement_t76AE55D58DAD3043AE5CE90FE6B06F6C474697E9_TisType_t_mDE5A5E00BCBB24B5E759302251C87FCC6E3B1188 (RuntimeObject* ___source0, Func_2_tD834A382C7BC9720A3941F056FF6626757F128C1 * ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tD834A382C7BC9720A3941F056FF6626757F128C1 *, const RuntimeMethod*))Enumerable_Select_TisProviderElement_t76AE55D58DAD3043AE5CE90FE6B06F6C474697E9_TisRuntimeObject_mCD0CBBE70441E48F690B83A1C104A1B57DA8E211_gshared)(___source0, ___selector1, method);
}
// System.Void System.Func`2<System.Type,Tobii.XR.IEyeTrackingProvider>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m6AC59D19A3B5879023B89F3EB96AC21D1F244F9F (Func_2_t37CB4832DBF1755273858A77BAAC6B4B50B9444D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t37CB4832DBF1755273858A77BAAC6B4B50B9444D *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Type,Tobii.XR.IEyeTrackingProvider>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_Select_TisType_t_TisIEyeTrackingProvider_t04D6D65DC709128E4BE6CCF69F52197434C02F73_m9DCEBD222FCB4C3512642BDB084248722E4EF79C (RuntimeObject* ___source0, Func_2_t37CB4832DBF1755273858A77BAAC6B4B50B9444D * ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t37CB4832DBF1755273858A77BAAC6B4B50B9444D *, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_mC0F1DA980E0433D70A6CF9DD7CD1942BB7FE87C0_gshared)(___source0, ___selector1, method);
}
// System.Void System.Func`2<Tobii.XR.IEyeTrackingProvider,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mBBC58743DEEE7E47F68AA3544FF0092BC5F79EC3 (Func_2_t0D121E24665C7C6EBDEE662FD349B058C314168D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t0D121E24665C7C6EBDEE662FD349B058C314168D *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mCA84157864A199574AD0B7F3083F99B54DC1F98C_gshared)(__this, ___object0, ___method1, method);
}
// !!0 System.Linq.Enumerable::FirstOrDefault<Tobii.XR.IEyeTrackingProvider>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
inline RuntimeObject* Enumerable_FirstOrDefault_TisIEyeTrackingProvider_t04D6D65DC709128E4BE6CCF69F52197434C02F73_m6A2990A123D1A2AA3557FE683206B00DE9F054AB (RuntimeObject* ___source0, Func_2_t0D121E24665C7C6EBDEE662FD349B058C314168D * ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t0D121E24665C7C6EBDEE662FD349B058C314168D *, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_mEA8E5753D70A4AA5ABF983D5FE3BACC1537B3ECE_gshared)(___source0, ___predicate1, method);
}
// System.Object System.Activator::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Activator_CreateInstance_m1BACAB5F4FBF138CCCB537DDCB0683A2AC064295 (Type_t * ___type0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Tobii.XR.TobiiXR_Settings/ProviderElement>::.ctor()
inline void List_1__ctor_m2D0945B0A5D9457CD045D4DB2DACB55D6727F9A2 (List_1_t047270E2141D972A607E0D91E0E16FD0FFFC2D07 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t047270E2141D972A607E0D91E0E16FD0FFFC2D07 *, const RuntimeMethod*))List_1__ctor_m2D0945B0A5D9457CD045D4DB2DACB55D6727F9A2_gshared)(__this, method);
}
// Tobii.XR.TobiiXR_Settings/ProviderElement Tobii.XR.TobiiXR_Settings/ProviderElement::FromProviderType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProviderElement_t76AE55D58DAD3043AE5CE90FE6B06F6C474697E9  ProviderElement_FromProviderType_m2D998802F34D2E0B3801C5713BC0950F3AB726E7 (Type_t * ___type0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Tobii.XR.TobiiXR_Settings/ProviderElement>::Add(!0)
inline void List_1_Add_m5F2125A910D0551B1D0A871848A833DA8EF773C6 (List_1_t047270E2141D972A607E0D91E0E16FD0FFFC2D07 * __this, ProviderElement_t76AE55D58DAD3043AE5CE90FE6B06F6C474697E9  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t047270E2141D972A607E0D91E0E16FD0FFFC2D07 *, ProviderElement_t76AE55D58DAD3043AE5CE90FE6B06F6C474697E9 , const RuntimeMethod*))List_1_Add_m5F2125A910D0551B1D0A871848A833DA8EF773C6_gshared)(__this, ___item0, method);
}
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  LayerMask_op_Implicit_mC7EE32122D2A4786D3C00B93E41604B71BF1397C (int32_t ___intVal0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4 (const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.GameObject>::.ctor()
inline void UnityEvent_1__ctor_mFEC498EC5642F0C80769E4D2E08EA2E3E4D3D0EB (UnityEvent_1_t1DC2DB931FE9E53AEC9A04F4DE9B4F7B469BC78E * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t1DC2DB931FE9E53AEC9A04F4DE9B4F7B469BC78E *, const RuntimeMethod*))UnityEvent_1__ctor_mD87552C18A41196B69A62A366C8238FC246B151A_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_m5FF0476C9886FD8A3E6BA82BBE34B896CA279413 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___routine0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Behaviour::get_isActiveAndEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_isActiveAndEnabled_mDD843C0271D492C1E08E0F8DEE8B6F1CFA951BFA (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator Tobii.XR.UIGazeButtonGraphics::AnimateButton(System.Single,UnityEngine.AnimationCurve,Tobii.XR.ButtonState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UIGazeButtonGraphics_AnimateButton_m5E29681D44675B2F3E59140D26CFBE2D2413EDF4 (UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3 * __this, float ___duration0, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___animationCurve1, int32_t ___currentButtonState2, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void Tobii.XR.UIGazeButtonGraphics/<AnimateButton>d__20::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateButtonU3Ed__20__ctor_m0F3C28678D03D04DBA71FDC8A852190538A8A52E (U3CAnimateButtonU3Ed__20_t206BE52250D8631429CA487BD86A828BD76754A6 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// UnityEngine.RectTransform UnityEngine.UI.Graphic::get_rectTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * Graphic_get_rectTransform_m87D5A808474C6B71649CBB153DEBF5F268189EFF (Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, float ___value0, const RuntimeMethod* method);
// System.Void Tobii.XR.UIGazeSliderGraphics::UpdateHandlePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGazeSliderGraphics_UpdateHandlePosition_m83A3AE5EC18F99EE50FAE36827045272AA57C051 (UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.Int32::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m5398ED0B6625B75CAF70C63B3CF2CE47D3C1B184 (int32_t* __this, String_t* ___format0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.UI.Image::get_fillAmount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Image_get_fillAmount_mA6F275C1167931E2F166EA85058EF181D8008B09_inline (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Collections.IEnumerator Tobii.XR.UIGazeSliderGraphics::AnimateHandle(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UIGazeSliderGraphics_AnimateHandle_m9B66C931B10AE5E7E78D1021AAB30A8E1EC1837A (UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * __this, bool ___hasFocus0, const RuntimeMethod* method);
// System.Collections.IEnumerator Tobii.XR.UIGazeSliderGraphics::AnimateVisualFeedback(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UIGazeSliderGraphics_AnimateVisualFeedback_mB143A22ECFB8EB18529009755185B9578E4CC1AF (UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * __this, bool ___hasFocus0, const RuntimeMethod* method);
// System.Void Tobii.XR.UIGazeSliderGraphics/<AnimateVisualFeedback>d__32::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVisualFeedbackU3Ed__32__ctor_m84F0C2C4B55FBA800F70A40F223235F5C4FC3A0A (U3CAnimateVisualFeedbackU3Ed__32_tAE9021EC3BD7C7D1730454554D4D341065B43175 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void Tobii.XR.UIGazeSliderGraphics/<AnimateHandle>d__33::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateHandleU3Ed__33__ctor_mC2DBA88FBC4CD02EEB845387943B57AFDFDC6D3C (U3CAnimateHandleU3Ed__33_t25309B59592FBF6C583EA1A1A89E51814130219F * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void Tobii.XR.UIGazeToggleButtonGraphics::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGazeToggleButtonGraphics_Initialize_mDD2998A63D7EA4F88DE78CE9DB34B1F30303E70C (UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator Tobii.XR.UIGazeToggleButtonGraphics::MoveKnob(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UIGazeToggleButtonGraphics_MoveKnob_mD6D3FA882DBF5DFC6C4496CDD35CBFE404786FF6 (UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * __this, bool ___isToggledOn0, const RuntimeMethod* method);
// System.Collections.IEnumerator Tobii.XR.UIGazeToggleButtonGraphics::AnimateVisualFeedback(System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UIGazeToggleButtonGraphics_AnimateVisualFeedback_m18140194EE610C84C1366EF9B61B48C9315B22BC (UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * __this, bool ___hasFocus0, bool ___isToggledOn1, bool ___isButtonPressed2, const RuntimeMethod* method);
// System.Void Tobii.XR.UIGazeToggleButtonGraphics/<AnimateVisualFeedback>d__31::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVisualFeedbackU3Ed__31__ctor_m3558178848775E69F07F3B7C332FBA6C4082B949 (U3CAnimateVisualFeedbackU3Ed__31_t07D3E601DC366CDB016FA37DE08D53A461AB2E7E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void Tobii.XR.UIGazeToggleButtonGraphics/<MoveKnob>d__33::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveKnobU3Ed__33__ctor_mDFB617F7BA66952FFCB6B3DBDD16373DBEBE6F31 (U3CMoveKnobU3Ed__33_tE58824844149E1E88D502B3178B56C9A60997966 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Graphic>()
inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * Component_GetComponent_TisGraphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_mC2B96FBBFDBEB7FC16A23436F3C7A3C2740CAAA1 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_Lerp_mC986D7F29103536908D76BD8FC59AA11DC33C197 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___a0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8 (const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`2<UnityEngine.GameObject,System.Int32>::.ctor()
inline void UnityEvent_2__ctor_mAC7F8CF59475A3EAD20EC4DB1FA8FBE86578E9BB (UnityEvent_2_tB328963BE2F2851746B8F3A3DFDD18751B2637E5 * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_tB328963BE2F2851746B8F3A3DFDD18751B2637E5 *, const RuntimeMethod*))UnityEvent_2__ctor_mA20F7BCCA4DE93E18BD588DD8D59E064ED9C6389_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`2<UnityEngine.GameObject,System.Boolean>::.ctor()
inline void UnityEvent_2__ctor_m15AD3364487BCDF358770B0A3394D4A6A151D60F (UnityEvent_2_tECE314F182CE3F2DC54078795CE06100AA0F8967 * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_tECE314F182CE3F2DC54078795CE06100AA0F8967 *, const RuntimeMethod*))UnityEvent_2__ctor_mABD52D059C6A3D5D33B542AB06A381BCE1C4DF28_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<Tobii.XR.UIGazeButtonGraphics>()
inline UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3 * Component_GetComponent_TisUIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3_m4EA0B70811CC9A42F1C754D2F89EA074D0B35B2E (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void Tobii.XR.UIButtonEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIButtonEvent__ctor_mB08326F417481FDC04FE370FC90AE7DF7F997EAE (UIButtonEvent_t6ACDD055C471804447D38E6EA0D042A57A243B1A * __this, const RuntimeMethod* method);
// Tobii.XR.ControllerManager Tobii.XR.ControllerManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C * ControllerManager_get_Instance_mCCB8E5F1F32355FE08FF4FA8586941951592A250 (const RuntimeMethod* method);
// System.Boolean Tobii.XR.ControllerManager::GetButtonPressDown(Tobii.XR.ControllerButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ControllerManager_GetButtonPressDown_mD85B5B10B50103C22823F47B178744810DAC4D4C (ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C * __this, int32_t ___button0, const RuntimeMethod* method);
// System.Void Tobii.XR.UITouchpadGazeButton::UpdateState(Tobii.XR.ButtonState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITouchpadGazeButton_UpdateState_mC5C79B4A5C0D44DFCD80A81B21F1C4656AEDF2E8 (UITouchpadGazeButton_t3A308EBB536DF4924AFB84B203E0048273DF092A * __this, int32_t ___newState0, const RuntimeMethod* method);
// System.Boolean Tobii.XR.ControllerManager::GetButtonPressUp(Tobii.XR.ControllerButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ControllerManager_GetButtonPressUp_m9287E156E57F4916F09C4B0745CE810DEB2E7383 (ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C * __this, int32_t ___button0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.GameObject>::Invoke(!0)
inline void UnityEvent_1_Invoke_m2905EEB7C8C104A9BC6500F3BB559F14A86CB376 (UnityEvent_1_t1DC2DB931FE9E53AEC9A04F4DE9B4F7B469BC78E * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t1DC2DB931FE9E53AEC9A04F4DE9B4F7B469BC78E *, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))UnityEvent_1_Invoke_m73C0FE7D4CDD8627332257E8503F2E9862E33C3E_gshared)(__this, ___arg00, method);
}
// System.Void Tobii.XR.ControllerManager::TriggerHapticPulse(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerManager_TriggerHapticPulse_m2F471DAC20A5A36BAFCE2D0F1952B6278E84EC69 (ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C * __this, float ___hapticStrength0, const RuntimeMethod* method);
// System.Void Tobii.XR.UIGazeButtonGraphics::AnimateButtonPress(Tobii.XR.ButtonState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGazeButtonGraphics_AnimateButtonPress_m707446E12689DB713E2F98282394D35084B287AF (UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3 * __this, int32_t ___currentButtonState0, const RuntimeMethod* method);
// System.Void Tobii.XR.UIGazeButtonGraphics::AnimateButtonVisualFeedback(Tobii.XR.ButtonState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGazeButtonGraphics_AnimateButtonVisualFeedback_mF6CAFB0B6894EAE85053866CCFBF6C5D42E03E7B (UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3 * __this, int32_t ___currentButtonState0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mathf_Approximately_mC2A3F657E3FD0CCAD4A4936CEE2F67D624A2AA55 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`2<UnityEngine.GameObject,System.Int32>::Invoke(!0,!1)
inline void UnityEvent_2_Invoke_mB9C23C9CF956F0CCBE6C295112BC8F4C9A4EDA3B (UnityEvent_2_tB328963BE2F2851746B8F3A3DFDD18751B2637E5 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___arg00, int32_t ___arg11, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_tB328963BE2F2851746B8F3A3DFDD18751B2637E5 *, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, int32_t, const RuntimeMethod*))UnityEvent_2_Invoke_mEB95A202876DED5F08B031E7E5E49746CBD6A0E5_gshared)(__this, ___arg00, ___arg11, method);
}
// !!0 UnityEngine.Component::GetComponent<Tobii.XR.UIGazeSliderGraphics>()
inline UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * Component_GetComponent_TisUIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9_m05202FD41E43B29E57ECEDEAF05C4ABC1DDCB268 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void Tobii.XR.UISliderEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISliderEvent__ctor_m350DD9A08910831DDCE3F16793B8F43C2133E5C8 (UISliderEvent_t36D445D0583DF9594EF697A1EE85A07EE10DA88D * __this, const RuntimeMethod* method);
// System.Boolean Tobii.XR.UITouchpadGazeSlider::SliderValueOutsideBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UITouchpadGazeSlider_SliderValueOutsideBounds_mD044709BF737A0168FE78C2577F0E69CE693AB6A (UITouchpadGazeSlider_t92A4881810F3381D4454AD18E58E6D65F52AF7B3 * __this, const RuntimeMethod* method);
// System.Void Tobii.XR.UITouchpadGazeSlider::HandleInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITouchpadGazeSlider_HandleInput_m9E3385FB3D7ACD7F9AAFE04CAA1BE6EE13420DCE (UITouchpadGazeSlider_t92A4881810F3381D4454AD18E58E6D65F52AF7B3 * __this, const RuntimeMethod* method);
// System.Boolean Tobii.XR.ControllerManager::GetButtonTouchDown(Tobii.XR.ControllerButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ControllerManager_GetButtonTouchDown_mF7460B8AEEA3969CB1E99E60E8A02048CD1EE293 (ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C * __this, int32_t ___button0, const RuntimeMethod* method);
// UnityEngine.Vector2 Tobii.XR.ControllerManager::GetTouchpadAxis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ControllerManager_GetTouchpadAxis_mD50B8BC58333173201DFA3D348F97A37FC87B51F (ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C * __this, const RuntimeMethod* method);
// System.Void Tobii.XR.UIGazeSliderGraphics::StartHandleAnimation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGazeSliderGraphics_StartHandleAnimation_m2617B55EDFACDDB0E39607A1E50633872EBA38BA (UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * __this, bool ___isTouching0, const RuntimeMethod* method);
// System.Boolean Tobii.XR.ControllerManager::GetButtonTouch(Tobii.XR.ControllerButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ControllerManager_GetButtonTouch_m71CC30DD933DF6CB3A28AFD7A50AF70E42E4CD98 (ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C * __this, int32_t ___button0, const RuntimeMethod* method);
// System.Void Tobii.XR.UITouchpadGazeSlider::UpdateSlider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITouchpadGazeSlider_UpdateSlider_mCD0C91944362F9EA461E5DE503B1C7D7F0FFA64E (UITouchpadGazeSlider_t92A4881810F3381D4454AD18E58E6D65F52AF7B3 * __this, const RuntimeMethod* method);
// System.Boolean Tobii.XR.ControllerManager::GetButtonTouchUp(Tobii.XR.ControllerButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ControllerManager_GetButtonTouchUp_mAF322FB64A563FB59BA9CE77F271E3CF87D526BC (ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C * __this, int32_t ___button0, const RuntimeMethod* method);
// System.Boolean Tobii.XR.UITouchpadGazeSlider::TryingToSlideOutsideOfScope()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UITouchpadGazeSlider_TryingToSlideOutsideOfScope_mD2F0CA17C52760660652CAF866DBADB201EA0EBC (UITouchpadGazeSlider_t92A4881810F3381D4454AD18E58E6D65F52AF7B3 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method);
// System.Void Tobii.XR.UIGazeSliderGraphics::SetFillAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGazeSliderGraphics_SetFillAmount_m2267EFADA619E564314254EBD039EF5749AEECA4 (UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * __this, float ___amount0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// System.Void Tobii.XR.UITouchpadGazeSlider::set_Value(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITouchpadGazeSlider_set_Value_m9BAABF437005AF24AC069A18744721AA440F5DC0 (UITouchpadGazeSlider_t92A4881810F3381D4454AD18E58E6D65F52AF7B3 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 Tobii.XR.UITouchpadGazeSlider::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UITouchpadGazeSlider_get_Value_mFDFE1A87B1824FC8F164F5209BB889944A1CC3D4_inline (UITouchpadGazeSlider_t92A4881810F3381D4454AD18E58E6D65F52AF7B3 * __this, const RuntimeMethod* method);
// System.Void Tobii.XR.UIGazeSliderGraphics::UpdateValueText(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGazeSliderGraphics_UpdateValueText_m4E15273691EEB69BE31038F64DB35DD7FB2F895B (UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogErrorFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogErrorFormat_mDBF43684A22EAAB187285C9B4174C9555DB11E83 (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void Tobii.XR.UIGazeSliderGraphics::StartVisualFeedbackAnimation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGazeSliderGraphics_StartVisualFeedbackAnimation_mE1D2D8EE687238FEBF3671FC5E6528665EF210BE (UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * __this, bool ___hasFocus0, const RuntimeMethod* method);
// System.Boolean Tobii.XR.UITouchpadGazeToggleButton::get_IsToggledOn()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UITouchpadGazeToggleButton_get_IsToggledOn_m6D62BD2CF17D699D7DAD8852D0626DBFE2CFED57_inline (UITouchpadGazeToggleButton_t47CD31E42D965D1D0A084EF01FA40A171AB3FC31 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`2<UnityEngine.GameObject,System.Boolean>::Invoke(!0,!1)
inline void UnityEvent_2_Invoke_m3CA0A236B3D5729DADE146B720B9B52DA0B07D6D (UnityEvent_2_tECE314F182CE3F2DC54078795CE06100AA0F8967 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___arg00, bool ___arg11, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_tECE314F182CE3F2DC54078795CE06100AA0F8967 *, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, bool, const RuntimeMethod*))UnityEvent_2_Invoke_mB466CB8D7EE9159034DA23B0918BC819FB51BAF3_gshared)(__this, ___arg00, ___arg11, method);
}
// System.Void Tobii.XR.UITouchpadGazeToggleButton::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITouchpadGazeToggleButton_Initialize_mDBE77A19D7FC92595302F47670692F5C8D75A4D7 (UITouchpadGazeToggleButton_t47CD31E42D965D1D0A084EF01FA40A171AB3FC31 * __this, const RuntimeMethod* method);
// System.Void Tobii.XR.UITouchpadGazeToggleButton::OnPressedDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITouchpadGazeToggleButton_OnPressedDown_m23546930BC2E7D0259CC4E71701A1446F3FDE5BC (UITouchpadGazeToggleButton_t47CD31E42D965D1D0A084EF01FA40A171AB3FC31 * __this, const RuntimeMethod* method);
// System.Void Tobii.XR.UITouchpadGazeToggleButton::Toggle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITouchpadGazeToggleButton_Toggle_m777CC2AC1F687E6E09448BEE18B2CD5A67022ADB (UITouchpadGazeToggleButton_t47CD31E42D965D1D0A084EF01FA40A171AB3FC31 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Tobii.XR.UIGazeToggleButtonGraphics>()
inline UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * Component_GetComponent_TisUIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59_mF5A28883054A0C0B04D6E5B827C2389852E41FBF (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void Tobii.XR.UIToggleEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIToggleEvent__ctor_mE812914B131AF422EF11A3C9ACCA859B5FFF5DA5 (UIToggleEvent_t3025F2607AD11E28D3936621C944D224B4FCF15B * __this, const RuntimeMethod* method);
// System.Void Tobii.XR.UIGazeToggleButtonGraphics::StartVisualFeedbackAnimation(System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGazeToggleButtonGraphics_StartVisualFeedbackAnimation_mC9D119CEFD1A933CB90D66F43403B6F90235A8EB (UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * __this, bool ___hasFocus0, bool ___isToggledOn1, bool ___isButtonPressed2, const RuntimeMethod* method);
// System.Void Tobii.XR.UITouchpadGazeToggleButton::set_IsToggledOn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITouchpadGazeToggleButton_set_IsToggledOn_mB2456A049EBBF5EDE7255EDE5EB9BBCA29412F1B (UITouchpadGazeToggleButton_t47CD31E42D965D1D0A084EF01FA40A171AB3FC31 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Tobii.XR.UIGazeToggleButtonGraphics::StartKnobAnimation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGazeToggleButtonGraphics_StartKnobAnimation_m93884528628AAFA7F2C75DB45D4AE8513DD9A930 (UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * __this, bool ___isToggledOn0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent__ctor_m98D9C5A59898546B23A45388CFACA25F52A9E5A6 (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, const RuntimeMethod* method);
// System.Void Tobii.XR.UITouchpadSwipeDetector::CheckForSwipe(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITouchpadSwipeDetector_CheckForSwipe_m63F5A1C2431DA2BB7E4226D449058A08B758873E (UITouchpadSwipeDetector_tF8D39854F9C2AEC5EB30A18490D8B5BDC24B1237 * __this, float ___padXCurrentFrame0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5 (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_lossyScale_m469A16F93F135C1E4D5955C7EBDB893D1892A331 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void Tobii.XR.UITriggerDragDetector::CheckForTriggerDragEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITriggerDragDetector_CheckForTriggerDragEvent_mB57AAB4069FF41740F0DFF4EC51B17DAB4638818 (UITriggerDragDetector_t5B95945A64025F5B6F9641C0C64FC5F53431C4B8 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Tobii.XR.UITriggerDragDetector::GetRelativeControllerMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  UITriggerDragDetector_GetRelativeControllerMovement_m6E99A3147CD2F9AFD40D3A848E96859B89903B9E (UITriggerDragDetector_t5B95945A64025F5B6F9641C0C64FC5F53431C4B8 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Tobii.XR.ControllerManager::get_Velocity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ControllerManager_get_Velocity_m445F035834607667B7C956F1746E9E2B737CB890_inline (ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformVector(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_InverseTransformVector_mAE27324FC01E136CF80D1A414AC10BA7616024C4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void Tobii.XR.UITriggerGazeButton::UpdateState(Tobii.XR.ButtonState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITriggerGazeButton_UpdateState_m4269ABDEECDA94E85635CFF1A3DDE40219B04F78 (UITriggerGazeButton_t2554537E0895389690AB22BFAEF73BE3E89B483F * __this, int32_t ___newState0, const RuntimeMethod* method);
// System.Boolean Tobii.XR.ControllerManager::GetButtonPress(Tobii.XR.ControllerButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ControllerManager_GetButtonPress_m27E4327C628C64D804E87464464BE073A4340E15 (ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C * __this, int32_t ___button0, const RuntimeMethod* method);
// System.Boolean Tobii.XR.ControllerManager::AnyTriggerHeld()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ControllerManager_AnyTriggerHeld_m0753DA072A77BA9C7D04649F83D095E1C981A5C2 (ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C * __this, const RuntimeMethod* method);
// System.Void Tobii.XR.UITriggerGazeButtonWithHold::UpdateState(Tobii.XR.ButtonState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITriggerGazeButtonWithHold_UpdateState_m628F56B442232094EFE2B345A780E2F00E78874B (UITriggerGazeButtonWithHold_tA1C5EE28D3A9F40D8B285501369988CE21C3E6E5 * __this, int32_t ___newState0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::.ctor()
inline void List_1__ctor_m301E51804C88F4CDA1665B126A03BC15123C2BB1 (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F *, const RuntimeMethod*))List_1__ctor_m301E51804C88F4CDA1665B126A03BC15123C2BB1_gshared)(__this, method);
}
// System.Boolean Tobii.XR.UITriggerGazeSlider::SliderValueOutsideBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UITriggerGazeSlider_SliderValueOutsideBounds_mE2A9F2D7A6A6082101DCBEDD3EC39DB170F9B6EA (UITriggerGazeSlider_t0A8BB5E0FD17F213EDA17FB7FDBB192FA2C5A08E * __this, const RuntimeMethod* method);
// System.Void Tobii.XR.UITriggerGazeSlider::HandleInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITriggerGazeSlider_HandleInput_m65FAA2BD4BF4979D0EAF3A48F83A85D474C6682D (UITriggerGazeSlider_t0A8BB5E0FD17F213EDA17FB7FDBB192FA2C5A08E * __this, const RuntimeMethod* method);
// System.Void Tobii.XR.UITriggerGazeSlider::UpdateSlider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITriggerGazeSlider_UpdateSlider_mDC1AFB2240451AB1E5078DC1B5DB4E55B42A11B7 (UITriggerGazeSlider_t0A8BB5E0FD17F213EDA17FB7FDBB192FA2C5A08E * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Tobii.XR.UITriggerGazeSlider::GetRelativeControllerMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  UITriggerGazeSlider_GetRelativeControllerMovement_mD8D7E9A7AC285B2C8EC782F5934E6CAB66DF94FE (UITriggerGazeSlider_t0A8BB5E0FD17F213EDA17FB7FDBB192FA2C5A08E * __this, const RuntimeMethod* method);
// System.Boolean Tobii.XR.UITriggerGazeSlider::TryingToDragOutsideOfScope()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UITriggerGazeSlider_TryingToDragOutsideOfScope_m65A81194CBF5FE4F69A9ACCD04C65DB632ADF76E (UITriggerGazeSlider_t0A8BB5E0FD17F213EDA17FB7FDBB192FA2C5A08E * __this, const RuntimeMethod* method);
// System.Void Tobii.XR.UITriggerGazeSlider::set_Value(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITriggerGazeSlider_set_Value_m1A353BD18E4197DF9EAA836DD4399A3B62996578 (UITriggerGazeSlider_t0A8BB5E0FD17F213EDA17FB7FDBB192FA2C5A08E * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 Tobii.XR.UITriggerGazeSlider::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UITriggerGazeSlider_get_Value_mF5BA2ADCB66AFCCE9D35CEB3177BA3BA5AA71B7C_inline (UITriggerGazeSlider_t0A8BB5E0FD17F213EDA17FB7FDBB192FA2C5A08E * __this, const RuntimeMethod* method);
// System.Boolean Tobii.XR.UITriggerGazeToggleButton::get_IsToggledOn()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UITriggerGazeToggleButton_get_IsToggledOn_m0AC0DC002D99955D2F9F65D690929058A72CDCF6_inline (UITriggerGazeToggleButton_t84661EDC6F01AC3F57A499DE2B60F8CCA0E0C462 * __this, const RuntimeMethod* method);
// System.Void Tobii.XR.UITriggerGazeToggleButton::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITriggerGazeToggleButton_Initialize_m51BD1A02D53124C392B7AF8C3B12AFB28D669183 (UITriggerGazeToggleButton_t84661EDC6F01AC3F57A499DE2B60F8CCA0E0C462 * __this, const RuntimeMethod* method);
// System.Void Tobii.XR.UITriggerGazeToggleButton::OnPressedDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITriggerGazeToggleButton_OnPressedDown_m9E086897AFC82D65B8596FAB05EFD269BE7D1405 (UITriggerGazeToggleButton_t84661EDC6F01AC3F57A499DE2B60F8CCA0E0C462 * __this, const RuntimeMethod* method);
// System.Void Tobii.XR.UITriggerGazeToggleButton::Toggle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITriggerGazeToggleButton_Toggle_m91F8F78D75AFAA032E9FFA97AD06110176CC8EFF (UITriggerGazeToggleButton_t84661EDC6F01AC3F57A499DE2B60F8CCA0E0C462 * __this, const RuntimeMethod* method);
// System.Void Tobii.XR.UITriggerGazeToggleButton::set_IsToggledOn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITriggerGazeToggleButton_set_IsToggledOn_mC6EDD120D7925033F525845E8CDDA0ED5FFDEFBB (UITriggerGazeToggleButton_t84661EDC6F01AC3F57A499DE2B60F8CCA0E0C462 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Tobii.XR.Internal.AssemblyUtils/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1B50D574C76E2654021D36AD9D42B58D585AF283 (U3CU3Ec_tBC16F7556FA087545272E36FD9D2790DE039B327 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsClass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsClass_m2D39ED0DAFC534D527F8B019DA8B90859A7CA787 (Type_t * __this, const RuntimeMethod* method);
// System.Void Tobii.XR.Internal.TobiiEulaFile/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF44E2483745B1DE9BDF0C99F0D5D233B01B66EBF (U3CU3Ec_tCDA4616F789EF10766F6EE525B2FE845C62B4EC3 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::Load<Tobii.XR.Internal.TobiiEulaFile>(System.String)
inline TobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466 * Resources_Load_TisTobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466_mB14A47319ED839FECE0ADF05ECF86BB0476E1501 (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  TobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466 * (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_m39B6A35CFE684CD1FFF77873E20D7297B36A55E8_gshared)(___path0, method);
}
// Tobii.XR.TobiiXR_Settings Tobii.XR.TobiiXR/TobiiXRInternal::get_Settings()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0 * TobiiXRInternal_get_Settings_m354235BA058A474F6A31D75242258848511D5D24_inline (TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD * __this, const RuntimeMethod* method);
// System.Void Tobii.XR.Internal.TobiiXR_Lifecycle/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFBBE00F0269CEF96B8E800D8003F3F757D08DB13 (U3CU3Ec_tCF809EE280FCA8E46728688925705891BCE185DB * __this, const RuntimeMethod* method);
// System.Void Tobii.XR.TobiiXR_Settings/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5B4F6D431A50EAC510CF657134A7FE794F3804B4 (U3CU3Ec_tB863BCE9690BD07ADCB7EC7104291B12AEC27562 * __this, const RuntimeMethod* method);
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.String Tobii.XR.Internal.AssemblyUtils::GetCachedDisplayNameFor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AssemblyUtils_GetCachedDisplayNameFor_m168F2D648E85341FB99D9B5C1EFBE9A62C9DABD1 (String_t* ___providerTypeName0, const RuntimeMethod* method);
// System.String Tobii.XR.TobiiXR_Settings/ProviderElement::get_DisplayName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ProviderElement_get_DisplayName_m2DA54327F8B059944CBEA3CF1695B2FF9F08F67F (ProviderElement_t76AE55D58DAD3043AE5CE90FE6B06F6C474697E9 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, float ___time0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// Tobii.XR.UIGazeToggleButtonGraphics/VisualStateColors Tobii.XR.UIGazeToggleButtonGraphics::GetStateColors(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualStateColors_t977B626B553DECF2FCA446AB601620C118B1EDA9  UIGazeToggleButtonGraphics_GetStateColors_mCF8EFF01F31BA249B5C881A2DFAA6AB44393DB03 (UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * __this, bool ___isToggledOn0, bool ___isButtonPressed1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Type Tobii.XR.Internal.AssemblyUtils::EyetrackingProviderType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * AssemblyUtils_EyetrackingProviderType_m5435DA7C082293513F0AF581A4269512EE928567 (String_t* ___typeName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssemblyUtils_tA96C6CB138EFA919A345672B154FEFEEFE702552_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisType_t_mB2DD58F1158C4877353C4DF1F486FC9D97794727_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisType_t_m2A0B85DA7F086A9F38AE3CBF6F6DB181B2A86753_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mF99B731B7FE71291198AC579A27977DAFAEE528D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_U3CEyetrackingProviderTypeU3Eb__0_mB363C9C42D94B49EBF24696684215FCB05E8D02B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_t8AA428BBDE450BAEDAF50A6FE80DB09E6FE06571_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass0_0_t8AA428BBDE450BAEDAF50A6FE80DB09E6FE06571 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass0_0_t8AA428BBDE450BAEDAF50A6FE80DB09E6FE06571 * L_0 = (U3CU3Ec__DisplayClass0_0_t8AA428BBDE450BAEDAF50A6FE80DB09E6FE06571 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass0_0_t8AA428BBDE450BAEDAF50A6FE80DB09E6FE06571_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass0_0__ctor_mA27A29A516241160DC9DF6E4E7E95FECA3BF30F9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass0_0_t8AA428BBDE450BAEDAF50A6FE80DB09E6FE06571 * L_1 = V_0;
		String_t* L_2 = ___typeName0;
		NullCheck(L_1);
		L_1->set_typeName_0(L_2);
		// return EyetrackingProviderTypes().Where(t => t.FullName == typeName).FirstOrDefault();
		IL2CPP_RUNTIME_CLASS_INIT(AssemblyUtils_tA96C6CB138EFA919A345672B154FEFEEFE702552_il2cpp_TypeInfo_var);
		RuntimeObject* L_3;
		L_3 = AssemblyUtils_EyetrackingProviderTypes_m79FDB082C375DDDFF1345DFFFB946C929B5EDBD4(/*hidden argument*/NULL);
		U3CU3Ec__DisplayClass0_0_t8AA428BBDE450BAEDAF50A6FE80DB09E6FE06571 * L_4 = V_0;
		Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * L_5 = (Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 *)il2cpp_codegen_object_new(Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5_il2cpp_TypeInfo_var);
		Func_2__ctor_mF99B731B7FE71291198AC579A27977DAFAEE528D(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass0_0_U3CEyetrackingProviderTypeU3Eb__0_mB363C9C42D94B49EBF24696684215FCB05E8D02B_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mF99B731B7FE71291198AC579A27977DAFAEE528D_RuntimeMethod_var);
		RuntimeObject* L_6;
		L_6 = Enumerable_Where_TisType_t_m2A0B85DA7F086A9F38AE3CBF6F6DB181B2A86753(L_3, L_5, /*hidden argument*/Enumerable_Where_TisType_t_m2A0B85DA7F086A9F38AE3CBF6F6DB181B2A86753_RuntimeMethod_var);
		Type_t * L_7;
		L_7 = Enumerable_FirstOrDefault_TisType_t_mB2DD58F1158C4877353C4DF1F486FC9D97794727(L_6, /*hidden argument*/Enumerable_FirstOrDefault_TisType_t_mB2DD58F1158C4877353C4DF1F486FC9D97794727_RuntimeMethod_var);
		return L_7;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Type> Tobii.XR.Internal.AssemblyUtils::EyetrackingProviderTypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AssemblyUtils_EyetrackingProviderTypes_m79FDB082C375DDDFF1345DFFFB946C929B5EDBD4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SelectMany_TisAssembly_t_TisType_t_m714BE3CD2D51FDBC0AE1C1A383B08D53E587CADC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisType_t_m2A0B85DA7F086A9F38AE3CBF6F6DB181B2A86753_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mF525E1BFCBF8F3108DEAE75F57915F8E5F8F6906_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mF99B731B7FE71291198AC579A27977DAFAEE528D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tE0DBF080012BEFCAB3A265240B5CD35BD3519412_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEyeTrackingProvider_t04D6D65DC709128E4BE6CCF69F52197434C02F73_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CEyetrackingProviderTypesU3Eb__1_0_m7FA8598F590E4CD6279E6FC5CC41AA2CAA97B08D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_U3CEyetrackingProviderTypesU3Eb__1_m6F6286E3A64283423378899EE3D35C1BB5712E2C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_tB8AFD562969053C15173A4FB08AD7412A6D911A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tBC16F7556FA087545272E36FD9D2790DE039B327_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass1_0_tB8AFD562969053C15173A4FB08AD7412A6D911A0 * V_0 = NULL;
	Func_2_tE0DBF080012BEFCAB3A265240B5CD35BD3519412 * G_B2_0 = NULL;
	AssemblyU5BU5D_t42061B4CA43487DD8ECD8C3AACCEF783FA081FF0* G_B2_1 = NULL;
	Func_2_tE0DBF080012BEFCAB3A265240B5CD35BD3519412 * G_B1_0 = NULL;
	AssemblyU5BU5D_t42061B4CA43487DD8ECD8C3AACCEF783FA081FF0* G_B1_1 = NULL;
	{
		U3CU3Ec__DisplayClass1_0_tB8AFD562969053C15173A4FB08AD7412A6D911A0 * L_0 = (U3CU3Ec__DisplayClass1_0_tB8AFD562969053C15173A4FB08AD7412A6D911A0 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass1_0_tB8AFD562969053C15173A4FB08AD7412A6D911A0_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass1_0__ctor_m6E794A471B51088955C3B912937813F300339AFD(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// var type = typeof(IEyeTrackingProvider);
		U3CU3Ec__DisplayClass1_0_tB8AFD562969053C15173A4FB08AD7412A6D911A0 * L_1 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (IEyeTrackingProvider_t04D6D65DC709128E4BE6CCF69F52197434C02F73_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->set_type_0(L_3);
		// var types = (AppDomain.CurrentDomain.GetAssemblies().SelectMany(s => s.GetTypes()).Where(p => type.IsAssignableFrom(p) && p.IsClass));
		AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A * L_4;
		L_4 = AppDomain_get_CurrentDomain_mC2FE307811914289CBBDEFEFF6175FCE2E96A55E(/*hidden argument*/NULL);
		NullCheck(L_4);
		AssemblyU5BU5D_t42061B4CA43487DD8ECD8C3AACCEF783FA081FF0* L_5;
		L_5 = AppDomain_GetAssemblies_m7397BD0461B4D6BA76AE0974DE9FBEDAF70AEBFD(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tBC16F7556FA087545272E36FD9D2790DE039B327_il2cpp_TypeInfo_var);
		Func_2_tE0DBF080012BEFCAB3A265240B5CD35BD3519412 * L_6 = ((U3CU3Ec_tBC16F7556FA087545272E36FD9D2790DE039B327_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBC16F7556FA087545272E36FD9D2790DE039B327_il2cpp_TypeInfo_var))->get_U3CU3E9__1_0_1();
		Func_2_tE0DBF080012BEFCAB3A265240B5CD35BD3519412 * L_7 = L_6;
		G_B1_0 = L_7;
		G_B1_1 = L_5;
		if (L_7)
		{
			G_B2_0 = L_7;
			G_B2_1 = L_5;
			goto IL_003f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tBC16F7556FA087545272E36FD9D2790DE039B327_il2cpp_TypeInfo_var);
		U3CU3Ec_tBC16F7556FA087545272E36FD9D2790DE039B327 * L_8 = ((U3CU3Ec_tBC16F7556FA087545272E36FD9D2790DE039B327_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBC16F7556FA087545272E36FD9D2790DE039B327_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_tE0DBF080012BEFCAB3A265240B5CD35BD3519412 * L_9 = (Func_2_tE0DBF080012BEFCAB3A265240B5CD35BD3519412 *)il2cpp_codegen_object_new(Func_2_tE0DBF080012BEFCAB3A265240B5CD35BD3519412_il2cpp_TypeInfo_var);
		Func_2__ctor_mF525E1BFCBF8F3108DEAE75F57915F8E5F8F6906(L_9, L_8, (intptr_t)((intptr_t)U3CU3Ec_U3CEyetrackingProviderTypesU3Eb__1_0_m7FA8598F590E4CD6279E6FC5CC41AA2CAA97B08D_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mF525E1BFCBF8F3108DEAE75F57915F8E5F8F6906_RuntimeMethod_var);
		Func_2_tE0DBF080012BEFCAB3A265240B5CD35BD3519412 * L_10 = L_9;
		((U3CU3Ec_tBC16F7556FA087545272E36FD9D2790DE039B327_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBC16F7556FA087545272E36FD9D2790DE039B327_il2cpp_TypeInfo_var))->set_U3CU3E9__1_0_1(L_10);
		G_B2_0 = L_10;
		G_B2_1 = G_B1_1;
	}

IL_003f:
	{
		RuntimeObject* L_11;
		L_11 = Enumerable_SelectMany_TisAssembly_t_TisType_t_m714BE3CD2D51FDBC0AE1C1A383B08D53E587CADC((RuntimeObject*)(RuntimeObject*)G_B2_1, G_B2_0, /*hidden argument*/Enumerable_SelectMany_TisAssembly_t_TisType_t_m714BE3CD2D51FDBC0AE1C1A383B08D53E587CADC_RuntimeMethod_var);
		U3CU3Ec__DisplayClass1_0_tB8AFD562969053C15173A4FB08AD7412A6D911A0 * L_12 = V_0;
		Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * L_13 = (Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 *)il2cpp_codegen_object_new(Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5_il2cpp_TypeInfo_var);
		Func_2__ctor_mF99B731B7FE71291198AC579A27977DAFAEE528D(L_13, L_12, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass1_0_U3CEyetrackingProviderTypesU3Eb__1_m6F6286E3A64283423378899EE3D35C1BB5712E2C_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mF99B731B7FE71291198AC579A27977DAFAEE528D_RuntimeMethod_var);
		RuntimeObject* L_14;
		L_14 = Enumerable_Where_TisType_t_m2A0B85DA7F086A9F38AE3CBF6F6DB181B2A86753(L_11, L_13, /*hidden argument*/Enumerable_Where_TisType_t_m2A0B85DA7F086A9F38AE3CBF6F6DB181B2A86753_RuntimeMethod_var);
		// return types;
		return L_14;
	}
}
// System.String Tobii.XR.Internal.AssemblyUtils::GetProviderCompilerFlag(Tobii.XR.IEyeTrackingProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AssemblyUtils_GetProviderCompilerFlag_mE7F17157EA3235A3108099B288917DA88FFDC749 (RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompilerFlagAttribute_t723232B1FDEB871FC8C6FB74D41A3B23C5158F53_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompilerFlagAttribute_t723232B1FDEB871FC8C6FB74D41A3B23C5158F53_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CompilerFlagAttribute_t723232B1FDEB871FC8C6FB74D41A3B23C5158F53 * V_0 = NULL;
	{
		// var attribute = Attribute.GetCustomAttribute(provider.GetType(), typeof(CompilerFlagAttribute)) as CompilerFlagAttribute;
		RuntimeObject* L_0 = ___provider0;
		NullCheck(L_0);
		Type_t * L_1;
		L_1 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_0, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (CompilerFlagAttribute_t723232B1FDEB871FC8C6FB74D41A3B23C5158F53_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_2, /*hidden argument*/NULL);
		Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * L_4;
		L_4 = Attribute_GetCustomAttribute_mC3098F23886E5D9E7E8083DE6E80B5D2A136FC25(L_1, L_3, /*hidden argument*/NULL);
		V_0 = ((CompilerFlagAttribute_t723232B1FDEB871FC8C6FB74D41A3B23C5158F53 *)IsInstClass((RuntimeObject*)L_4, CompilerFlagAttribute_t723232B1FDEB871FC8C6FB74D41A3B23C5158F53_il2cpp_TypeInfo_var));
		// if(attribute == null) return null;
		CompilerFlagAttribute_t723232B1FDEB871FC8C6FB74D41A3B23C5158F53 * L_5 = V_0;
		if (L_5)
		{
			goto IL_0020;
		}
	}
	{
		// if(attribute == null) return null;
		return (String_t*)NULL;
	}

IL_0020:
	{
		// return attribute.Flag;
		CompilerFlagAttribute_t723232B1FDEB871FC8C6FB74D41A3B23C5158F53 * L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7 = L_6->get_Flag_0();
		return L_7;
	}
}
// System.String Tobii.XR.Internal.AssemblyUtils::GetCachedDisplayNameFor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AssemblyUtils_GetCachedDisplayNameFor_m168F2D648E85341FB99D9B5C1EFBE9A62C9DABD1 (String_t* ___providerTypeName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssemblyUtils_tA96C6CB138EFA919A345672B154FEFEEFE702552_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m5BB06692D9A48A3FEEB102881A86417DE6DA5027_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mFCD5E71429358EE225039B602674518740D30141_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisRuntimeObject_mEA30C68B8D8C7D44DF6690A8FC79E4A48A09C6F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProviderDisplayNameAttribute_t009EAE95225D051706217867F249D54A91DBFB5D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProviderDisplayNameAttribute_t009EAE95225D051706217867F249D54A91DBFB5D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D54E959817188DBAD9E65FA3DB55F06B70F5E3C);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	ProviderDisplayNameAttribute_t009EAE95225D051706217867F249D54A91DBFB5D * V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* G_B6_0 = NULL;
	{
		// if (!_cachedProviderDisplayNames.ContainsKey(providerTypeName))
		IL2CPP_RUNTIME_CLASS_INIT(AssemblyUtils_tA96C6CB138EFA919A345672B154FEFEEFE702552_il2cpp_TypeInfo_var);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_0 = ((AssemblyUtils_tA96C6CB138EFA919A345672B154FEFEEFE702552_StaticFields*)il2cpp_codegen_static_fields_for(AssemblyUtils_tA96C6CB138EFA919A345672B154FEFEEFE702552_il2cpp_TypeInfo_var))->get__cachedProviderDisplayNames_0();
		String_t* L_1 = ___providerTypeName0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m5BB06692D9A48A3FEEB102881A86417DE6DA5027(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m5BB06692D9A48A3FEEB102881A86417DE6DA5027_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_005d;
		}
	}
	{
		// var providerType = EyetrackingProviderType(providerTypeName);
		String_t* L_3 = ___providerTypeName0;
		IL2CPP_RUNTIME_CLASS_INIT(AssemblyUtils_tA96C6CB138EFA919A345672B154FEFEEFE702552_il2cpp_TypeInfo_var);
		Type_t * L_4;
		L_4 = AssemblyUtils_EyetrackingProviderType_m5435DA7C082293513F0AF581A4269512EE928567(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// if (providerType == null) return "Unknown";
		Type_t * L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_5, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0023;
		}
	}
	{
		// if (providerType == null) return "Unknown";
		return _stringLiteral5D54E959817188DBAD9E65FA3DB55F06B70F5E3C;
	}

IL_0023:
	{
		// var attribute = providerType.GetCustomAttributes(typeof(ProviderDisplayNameAttribute), false).FirstOrDefault() as ProviderDisplayNameAttribute;
		Type_t * L_7 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_8 = { reinterpret_cast<intptr_t> (ProviderDisplayNameAttribute_t009EAE95225D051706217867F249D54A91DBFB5D_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9;
		L_9 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10;
		L_10 = VirtFuncInvoker2< ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Type_t *, bool >::Invoke(12 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_7, L_9, (bool)0);
		RuntimeObject * L_11;
		L_11 = Enumerable_FirstOrDefault_TisRuntimeObject_mEA30C68B8D8C7D44DF6690A8FC79E4A48A09C6F9((RuntimeObject*)(RuntimeObject*)L_10, /*hidden argument*/Enumerable_FirstOrDefault_TisRuntimeObject_mEA30C68B8D8C7D44DF6690A8FC79E4A48A09C6F9_RuntimeMethod_var);
		V_1 = ((ProviderDisplayNameAttribute_t009EAE95225D051706217867F249D54A91DBFB5D *)IsInstClass((RuntimeObject*)L_11, ProviderDisplayNameAttribute_t009EAE95225D051706217867F249D54A91DBFB5D_il2cpp_TypeInfo_var));
		// var displayName = attribute != null ? attribute.Name : providerType.FullName;
		ProviderDisplayNameAttribute_t009EAE95225D051706217867F249D54A91DBFB5D * L_12 = V_1;
		if (L_12)
		{
			goto IL_004a;
		}
	}
	{
		Type_t * L_13 = V_0;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Type::get_FullName() */, L_13);
		G_B6_0 = L_14;
		goto IL_0050;
	}

IL_004a:
	{
		ProviderDisplayNameAttribute_t009EAE95225D051706217867F249D54A91DBFB5D * L_15 = V_1;
		NullCheck(L_15);
		String_t* L_16 = L_15->get_Name_0();
		G_B6_0 = L_16;
	}

IL_0050:
	{
		V_2 = G_B6_0;
		// _cachedProviderDisplayNames[providerTypeName] = displayName;
		IL2CPP_RUNTIME_CLASS_INIT(AssemblyUtils_tA96C6CB138EFA919A345672B154FEFEEFE702552_il2cpp_TypeInfo_var);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_17 = ((AssemblyUtils_tA96C6CB138EFA919A345672B154FEFEEFE702552_StaticFields*)il2cpp_codegen_static_fields_for(AssemblyUtils_tA96C6CB138EFA919A345672B154FEFEEFE702552_il2cpp_TypeInfo_var))->get__cachedProviderDisplayNames_0();
		String_t* L_18 = ___providerTypeName0;
		String_t* L_19 = V_2;
		NullCheck(L_17);
		Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668(L_17, L_18, L_19, /*hidden argument*/Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var);
	}

IL_005d:
	{
		// return _cachedProviderDisplayNames[providerTypeName];
		IL2CPP_RUNTIME_CLASS_INIT(AssemblyUtils_tA96C6CB138EFA919A345672B154FEFEEFE702552_il2cpp_TypeInfo_var);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_20 = ((AssemblyUtils_tA96C6CB138EFA919A345672B154FEFEEFE702552_StaticFields*)il2cpp_codegen_static_fields_for(AssemblyUtils_tA96C6CB138EFA919A345672B154FEFEEFE702552_il2cpp_TypeInfo_var))->get__cachedProviderDisplayNames_0();
		String_t* L_21 = ___providerTypeName0;
		NullCheck(L_20);
		String_t* L_22;
		L_22 = Dictionary_2_get_Item_mFCD5E71429358EE225039B602674518740D30141(L_20, L_21, /*hidden argument*/Dictionary_2_get_Item_mFCD5E71429358EE225039B602674518740D30141_RuntimeMethod_var);
		return L_22;
	}
}
// System.Void Tobii.XR.Internal.AssemblyUtils::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyUtils__cctor_mB4C283AE7C3CA2859393189F38124F00DD3308C4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssemblyUtils_tA96C6CB138EFA919A345672B154FEFEEFE702552_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static Dictionary<string, string> _cachedProviderDisplayNames = new Dictionary<string, string>();
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_0 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)il2cpp_codegen_object_new(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666(L_0, /*hidden argument*/Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		((AssemblyUtils_tA96C6CB138EFA919A345672B154FEFEEFE702552_StaticFields*)il2cpp_codegen_static_fields_for(AssemblyUtils_tA96C6CB138EFA919A345672B154FEFEEFE702552_il2cpp_TypeInfo_var))->set__cachedProviderDisplayNames_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Tobii.XR.Internal.TobiiEula::IsEulaAccepted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TobiiEula_IsEulaAccepted_m9B801A4A39621FD4BF9871223E487650D5977989 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_Invoke_m7008E359360830F80BC6ED46103A57A0480C942E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TobiiEula_t556736868F1DED17A9E7BBE39E2EB3C457318850_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(_eulaFile == null) _eulaFile = TobiiEulaFile.LoadEulaFile();
		TobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466 * L_0 = ((TobiiEula_t556736868F1DED17A9E7BBE39E2EB3C457318850_StaticFields*)il2cpp_codegen_static_fields_for(TobiiEula_t556736868F1DED17A9E7BBE39E2EB3C457318850_il2cpp_TypeInfo_var))->get__eulaFile_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// if(_eulaFile == null) _eulaFile = TobiiEulaFile.LoadEulaFile();
		IL2CPP_RUNTIME_CLASS_INIT(TobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466_il2cpp_TypeInfo_var);
		Func_1_t260F34DDA6149F57AC12F143882952B9B8673B6A * L_2 = ((TobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466_StaticFields*)il2cpp_codegen_static_fields_for(TobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466_il2cpp_TypeInfo_var))->get_LoadEulaFile_6();
		NullCheck(L_2);
		TobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466 * L_3;
		L_3 = Func_1_Invoke_m7008E359360830F80BC6ED46103A57A0480C942E(L_2, /*hidden argument*/Func_1_Invoke_m7008E359360830F80BC6ED46103A57A0480C942E_RuntimeMethod_var);
		((TobiiEula_t556736868F1DED17A9E7BBE39E2EB3C457318850_StaticFields*)il2cpp_codegen_static_fields_for(TobiiEula_t556736868F1DED17A9E7BBE39E2EB3C457318850_il2cpp_TypeInfo_var))->set__eulaFile_0(L_3);
	}

IL_001c:
	{
		// if (_eulaFile != null)
		TobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466 * L_4 = ((TobiiEula_t556736868F1DED17A9E7BBE39E2EB3C457318850_StaticFields*)il2cpp_codegen_static_fields_for(TobiiEula_t556736868F1DED17A9E7BBE39E2EB3C457318850_il2cpp_TypeInfo_var))->get__eulaFile_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		// return _eulaFile.IsEulaAccepted();
		TobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466 * L_6 = ((TobiiEula_t556736868F1DED17A9E7BBE39E2EB3C457318850_StaticFields*)il2cpp_codegen_static_fields_for(TobiiEula_t556736868F1DED17A9E7BBE39E2EB3C457318850_il2cpp_TypeInfo_var))->get__eulaFile_0();
		NullCheck(L_6);
		bool L_7;
		L_7 = TobiiEulaFile_IsEulaAccepted_mA26F0FC64B26F2AFA842D039754947B2EF4409A1_inline(L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0034:
	{
		// return false;
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Tobii.XR.Internal.TobiiEulaFile Tobii.XR.Internal.TobiiEulaFile::CreateEulaFile(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466 * TobiiEulaFile_CreateEulaFile_m6E609E3258B8C1FBD3BD7E664C2079C758AC8571 (bool* ___resourceExists0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_Invoke_m7008E359360830F80BC6ED46103A57A0480C942E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_CreateInstance_TisTobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466_m83E128068266AE53287AE6976427CD363421C9BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466 * V_0 = NULL;
	TobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466 * G_B3_0 = NULL;
	{
		// var eulaFile = LoadEulaFile != null ? LoadEulaFile() : null;
		IL2CPP_RUNTIME_CLASS_INIT(TobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466_il2cpp_TypeInfo_var);
		Func_1_t260F34DDA6149F57AC12F143882952B9B8673B6A * L_0 = ((TobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466_StaticFields*)il2cpp_codegen_static_fields_for(TobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466_il2cpp_TypeInfo_var))->get_LoadEulaFile_6();
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		G_B3_0 = ((TobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466 *)(NULL));
		goto IL_0014;
	}

IL_000a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(TobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466_il2cpp_TypeInfo_var);
		Func_1_t260F34DDA6149F57AC12F143882952B9B8673B6A * L_1 = ((TobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466_StaticFields*)il2cpp_codegen_static_fields_for(TobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466_il2cpp_TypeInfo_var))->get_LoadEulaFile_6();
		NullCheck(L_1);
		TobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466 * L_2;
		L_2 = Func_1_Invoke_m7008E359360830F80BC6ED46103A57A0480C942E(L_1, /*hidden argument*/Func_1_Invoke_m7008E359360830F80BC6ED46103A57A0480C942E_RuntimeMethod_var);
		G_B3_0 = L_2;
	}

IL_0014:
	{
		V_0 = G_B3_0;
		// resourceExists = eulaFile != null;
		bool* L_3 = ___resourceExists0;
		TobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		*((int8_t*)L_3) = (int8_t)L_5;
		// return resourceExists ? eulaFile : ScriptableObject.CreateInstance<TobiiEulaFile>();
		bool* L_6 = ___resourceExists0;
		int32_t L_7 = *((uint8_t*)L_6);
		if (L_7)
		{
			goto IL_0028;
		}
	}
	{
		TobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466 * L_8;
		L_8 = ScriptableObject_CreateInstance_TisTobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466_m83E128068266AE53287AE6976427CD363421C9BD(/*hidden argument*/ScriptableObject_CreateInstance_TisTobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466_m83E128068266AE53287AE6976427CD363421C9BD_RuntimeMethod_var);
		return L_8;
	}

IL_0028:
	{
		TobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466 * L_9 = V_0;
		return L_9;
	}
}
// System.Boolean Tobii.XR.Internal.TobiiEulaFile::IsEulaAccepted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TobiiEulaFile_IsEulaAccepted_mA26F0FC64B26F2AFA842D039754947B2EF4409A1 (TobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466 * __this, const RuntimeMethod* method)
{
	{
		// return _tobiiSDKEulaAccepted;
		bool L_0 = __this->get__tobiiSDKEulaAccepted_4();
		return L_0;
	}
}
// System.Void Tobii.XR.Internal.TobiiEulaFile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TobiiEulaFile__ctor_mDCFC690BFDE9381FA234799C083D967D05EA6F5B (TobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466 * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Tobii.XR.Internal.TobiiEulaFile::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TobiiEulaFile__cctor_m8F956C065C4A1EA5573E5478DA43198D5F59CD12 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_mD168B39FC1925BF2254BC1BE0C5135E9CCDF7686_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t260F34DDA6149F57AC12F143882952B9B8673B6A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__6_0_m9E919CE5E3AEB9E2CDAD9BBDA7EDFC233AB4D8BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tCDA4616F789EF10766F6EE525B2FE845C62B4EC3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly string TobiiEulaFilePath = typeof(TobiiEulaFile).Name;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (TobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_1);
		((TobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466_StaticFields*)il2cpp_codegen_static_fields_for(TobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466_il2cpp_TypeInfo_var))->set_TobiiEulaFilePath_5(L_2);
		// public static Func<TobiiEulaFile> LoadEulaFile = () => Resources.Load<TobiiEulaFile>(TobiiEulaFilePath);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCDA4616F789EF10766F6EE525B2FE845C62B4EC3_il2cpp_TypeInfo_var);
		U3CU3Ec_tCDA4616F789EF10766F6EE525B2FE845C62B4EC3 * L_3 = ((U3CU3Ec_tCDA4616F789EF10766F6EE525B2FE845C62B4EC3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCDA4616F789EF10766F6EE525B2FE845C62B4EC3_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_1_t260F34DDA6149F57AC12F143882952B9B8673B6A * L_4 = (Func_1_t260F34DDA6149F57AC12F143882952B9B8673B6A *)il2cpp_codegen_object_new(Func_1_t260F34DDA6149F57AC12F143882952B9B8673B6A_il2cpp_TypeInfo_var);
		Func_1__ctor_mD168B39FC1925BF2254BC1BE0C5135E9CCDF7686(L_4, L_3, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__6_0_m9E919CE5E3AEB9E2CDAD9BBDA7EDFC233AB4D8BD_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_mD168B39FC1925BF2254BC1BE0C5135E9CCDF7686_RuntimeMethod_var);
		((TobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466_StaticFields*)il2cpp_codegen_static_fields_for(TobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466_il2cpp_TypeInfo_var))->set_LoadEulaFile_6(L_4);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Tobii.XR.TobiiXR_EyeTrackingData Tobii.XR.TobiiXR::GetEyeTrackingData(Tobii.XR.TobiiXR_TrackingSpace)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TobiiXR_EyeTrackingData_t77A57D23997EA5B3B365ABDD60221EFB27BD72EA * TobiiXR_GetEyeTrackingData_m86E3934E2BFDE85FF95A2C156531420635058D21 (int32_t ___trackingSpace0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___trackingSpace0;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_1 = ___trackingSpace0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_000f;
		}
	}
	{
		goto IL_0015;
	}

IL_0009:
	{
		// return _eyeTrackingDataLocal;
		IL2CPP_RUNTIME_CLASS_INIT(TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_il2cpp_TypeInfo_var);
		TobiiXR_EyeTrackingData_t77A57D23997EA5B3B365ABDD60221EFB27BD72EA * L_2 = ((TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_StaticFields*)il2cpp_codegen_static_fields_for(TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_il2cpp_TypeInfo_var))->get__eyeTrackingDataLocal_2();
		return L_2;
	}

IL_000f:
	{
		// return _eyeTrackingDataWorld;
		IL2CPP_RUNTIME_CLASS_INIT(TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_il2cpp_TypeInfo_var);
		TobiiXR_EyeTrackingData_t77A57D23997EA5B3B365ABDD60221EFB27BD72EA * L_3 = ((TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_StaticFields*)il2cpp_codegen_static_fields_for(TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_il2cpp_TypeInfo_var))->get__eyeTrackingDataWorld_3();
		return L_3;
	}

IL_0015:
	{
		// throw new System.Exception("Unknown tracking space: " + trackingSpace);
		RuntimeObject * L_4 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TobiiXR_TrackingSpace_tA891CDDE8FE1FA340B247836C82693CF4AE93098_il2cpp_TypeInfo_var)), (&___trackingSpace0));
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		___trackingSpace0 = *(int32_t*)UnBox(L_4);
		String_t* L_6;
		L_6 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8EE0C01A5CD0425C36280F9FE180B556D21A50D1)), L_5, /*hidden argument*/NULL);
		Exception_t * L_7 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_7, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TobiiXR_GetEyeTrackingData_m86E3934E2BFDE85FF95A2C156531420635058D21_RuntimeMethod_var)));
	}
}
// System.Collections.Generic.List`1<Tobii.G2OM.FocusedCandidate> Tobii.XR.TobiiXR::get_FocusedObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C * TobiiXR_get_FocusedObjects_mF58992BD4B8E398EB78BA28AB77522692B6984F1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0529F0D5B1BA587113A1E74322AD526D1C8867BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Internal.G2OM == null) return new List<FocusedCandidate>();
		IL2CPP_RUNTIME_CLASS_INIT(TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_il2cpp_TypeInfo_var);
		TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD * L_0;
		L_0 = TobiiXR_get_Internal_m032E70B662616FA297C5904142C2213B97834C79_inline(/*hidden argument*/NULL);
		NullCheck(L_0);
		G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C * L_1;
		L_1 = TobiiXRInternal_get_G2OM_m5C7F8E6CA9D0498B721C4899CFD49AE2107D968A_inline(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		// if (Internal.G2OM == null) return new List<FocusedCandidate>();
		List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C * L_2 = (List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C *)il2cpp_codegen_object_new(List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C_il2cpp_TypeInfo_var);
		List_1__ctor_m0529F0D5B1BA587113A1E74322AD526D1C8867BB(L_2, /*hidden argument*/List_1__ctor_m0529F0D5B1BA587113A1E74322AD526D1C8867BB_RuntimeMethod_var);
		return L_2;
	}

IL_0012:
	{
		// return Internal.G2OM.GazeFocusedObjects;
		IL2CPP_RUNTIME_CLASS_INIT(TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_il2cpp_TypeInfo_var);
		TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD * L_3;
		L_3 = TobiiXR_get_Internal_m032E70B662616FA297C5904142C2213B97834C79_inline(/*hidden argument*/NULL);
		NullCheck(L_3);
		G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C * L_4;
		L_4 = TobiiXRInternal_get_G2OM_m5C7F8E6CA9D0498B721C4899CFD49AE2107D968A_inline(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C * L_5;
		L_5 = G2OM_get_GazeFocusedObjects_mCC8E75B3D0A877B8E999F238EF0DF616AB8D274B_inline(L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Boolean Tobii.XR.TobiiXR::get_IsRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TobiiXR_get_IsRunning_m23502EC59626C34AD597F2E6777BAB485BAD35E5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return Internal.Provider != null; }
		IL2CPP_RUNTIME_CLASS_INIT(TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_il2cpp_TypeInfo_var);
		TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD * L_0;
		L_0 = TobiiXR_get_Internal_m032E70B662616FA297C5904142C2213B97834C79_inline(/*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = TobiiXRInternal_get_Provider_m07DAA2344CD8F0DC6E15E3D75489BE9578619F6C_inline(L_0, /*hidden argument*/NULL);
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.Boolean Tobii.XR.TobiiXR::Start(Tobii.XR.TobiiXR_Settings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TobiiXR_Start_mB3C5E46DAF061A6E7F7742119A6306C7ADC44213 (TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0 * ___settings0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&G2OM_Clear_m48E4F43C0E2A2CDC1561AE39EA38FDEC49382E66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&G2OM_Description_tDDC3E7F8747B6FC42E6B44F4302D67374D28F2DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisTobiiXR_Lifecycle_t5A45FF952AADCB1A985E3D365599A048F5142195_mF53ABD3C38E75BE9F52A2F3AD531E40062D59EA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoseDirectionProvider_t390567955750C154B13CD90437312E9A6EF7859B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TobiiProvider_tD45A100799E1CF76E55DBE531F3B1D064727C6AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TobiiXRAdvanced_tD89ECFBC056BC287F4A99F38CAD8804962868C74_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TobiiXR_Stop_m5D6EF0ECE0F1C85E6B3C7BACBCFD474D9B6F0832_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TobiiXR_Tick_m28D9E7F49EA879B767BB4CBBF4971C5EAE940CFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CB31F09837C5C148A125E752A0CD574CB0AF391);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1BE39779F1A6C99420526073195C1896499BD17E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56C5A3C9094F519DF6BBADC5014B3B9B0C721DFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6144B56578C5988A983BEA4A285805EA9DFCF3BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8CB7CAD4AF4DD11A8E631AFC7CD80394E0E43B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AA30B8838A092B1BEF4E45FEECB34ED8E916FC9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9757C8C79C623E91A33A44121BF0A8E71780698A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC92E67FAE80124BBE133E64B83039E7A1A54C1BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC9D5AF54BBED103B0E2129D59B32C171FC818A99);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBCF8744FADF32F40692AB98D5D5EB63DA905545);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF71EC8637E6650DB082BA534ED8C799612E620ED);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	TobiiProvider_tD45A100799E1CF76E55DBE531F3B1D064727C6AB * V_1 = NULL;
	TobiiProvider_tD45A100799E1CF76E55DBE531F3B1D064727C6AB * V_2 = NULL;
	{
		// if (IsRunning) Stop();
		IL2CPP_RUNTIME_CLASS_INIT(TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = TobiiXR_get_IsRunning_m23502EC59626C34AD597F2E6777BAB485BAD35E5(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		// if (IsRunning) Stop();
		IL2CPP_RUNTIME_CLASS_INIT(TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_il2cpp_TypeInfo_var);
		TobiiXR_Stop_m5D6EF0ECE0F1C85E6B3C7BACBCFD474D9B6F0832(/*hidden argument*/NULL);
	}

IL_000c:
	{
		// if (!TobiiEula.IsEulaAccepted())
		bool L_1;
		L_1 = TobiiEula_IsEulaAccepted_m9B801A4A39621FD4BF9871223E487650D5977989(/*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		// Debug.LogWarning(
		//     "You need to accept Tobii Software Development License Agreement to use Tobii XR Unity SDK.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral9757C8C79C623E91A33A44121BF0A8E71780698A, /*hidden argument*/NULL);
	}

IL_001d:
	{
		// if (settings == null)
		TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0 * L_2 = ___settings0;
		if (L_2)
		{
			goto IL_0027;
		}
	}
	{
		// settings = new TobiiXR_Settings();
		TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0 * L_3 = (TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0 *)il2cpp_codegen_object_new(TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0_il2cpp_TypeInfo_var);
		TobiiXR_Settings__ctor_m34440F34C01DB5F95ED866FDA368A63ED9487400(L_3, /*hidden argument*/NULL);
		___settings0 = L_3;
	}

IL_0027:
	{
		// Internal.Settings = settings;
		IL2CPP_RUNTIME_CLASS_INIT(TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_il2cpp_TypeInfo_var);
		TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD * L_4;
		L_4 = TobiiXR_get_Internal_m032E70B662616FA297C5904142C2213B97834C79_inline(/*hidden argument*/NULL);
		TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0 * L_5 = ___settings0;
		NullCheck(L_4);
		TobiiXRInternal_set_Settings_m7DE46915ADF4B54D37AF20782BC8D8D50D1F676C_inline(L_4, L_5, /*hidden argument*/NULL);
		// string licenseKey = null;
		V_0 = (String_t*)NULL;
		// if (settings.LicenseAsset != null) // Prioritize asset
		TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0 * L_6 = ___settings0;
		NullCheck(L_6);
		TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * L_7 = L_6->get_LicenseAsset_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_7, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0064;
		}
	}
	{
		// Debug.Log("Using license asset from settings");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralC9D5AF54BBED103B0E2129D59B32C171FC818A99, /*hidden argument*/NULL);
		// licenseKey = Encoding.Unicode.GetString(settings.LicenseAsset.bytes);
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_9;
		L_9 = Encoding_get_Unicode_mB0C6AE1F91373CEB8A5BC5466F6B8F92C0A398B9(/*hidden argument*/NULL);
		TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0 * L_10 = ___settings0;
		NullCheck(L_10);
		TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * L_11 = L_10->get_LicenseAsset_10();
		NullCheck(L_11);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12;
		L_12 = TextAsset_get_bytes_m5F15438DABBBAAF7434D53B6778A97A498C1940F(L_11, /*hidden argument*/NULL);
		NullCheck(L_9);
		String_t* L_13;
		L_13 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(31 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_9, L_12);
		V_0 = L_13;
		// }
		goto IL_0082;
	}

IL_0064:
	{
		// else if (!string.IsNullOrEmpty(settings.OcumenLicense)) // Second priority is license as text
		TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0 * L_14 = ___settings0;
		NullCheck(L_14);
		String_t* L_15 = L_14->get_OcumenLicense_9();
		bool L_16;
		L_16 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_15, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_0082;
		}
	}
	{
		// Debug.Log("Using license string from settings");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralF71EC8637E6650DB082BA534ED8C799612E620ED, /*hidden argument*/NULL);
		// licenseKey = settings.OcumenLicense;
		TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0 * L_17 = ___settings0;
		NullCheck(L_17);
		String_t* L_18 = L_17->get_OcumenLicense_9();
		V_0 = L_18;
	}

IL_0082:
	{
		// if (settings.AdvancedEnabled)
		TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0 * L_19 = ___settings0;
		NullCheck(L_19);
		bool L_20 = L_19->get_AdvancedEnabled_8();
		if (!L_20)
		{
			goto IL_00fc;
		}
	}
	{
		// Debug.Log("Advanced eye tracking enabled so TobiiXR will use Tobii provider for eye tracking.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral8AA30B8838A092B1BEF4E45FEECB34ED8E916FC9, /*hidden argument*/NULL);
		// if (string.IsNullOrEmpty(licenseKey))
		String_t* L_21 = V_0;
		bool L_22;
		L_22 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00a7;
		}
	}
	{
		// throw new System.Exception("An Ocumen license is required to use the advanced API. Read more about Ocumen here: https://vr.tobii.com/sdk/solutions/tobii-ocumen/");
		Exception_t * L_23 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral30E176393A3DD2060A60BC132F0F38B14418E45B)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TobiiXR_Start_mB3C5E46DAF061A6E7F7742119A6306C7ADC44213_RuntimeMethod_var)));
	}

IL_00a7:
	{
		// var provider = new TobiiProvider();
		TobiiProvider_tD45A100799E1CF76E55DBE531F3B1D064727C6AB * L_24 = (TobiiProvider_tD45A100799E1CF76E55DBE531F3B1D064727C6AB *)il2cpp_codegen_object_new(TobiiProvider_tD45A100799E1CF76E55DBE531F3B1D064727C6AB_il2cpp_TypeInfo_var);
		TobiiProvider__ctor_m1FC62AE5F9EAE995D0A4E1D5C4B742A640C4ECC9(L_24, /*hidden argument*/NULL);
		V_1 = L_24;
		// if (!provider.InitializeWithLicense(licenseKey, true))
		TobiiProvider_tD45A100799E1CF76E55DBE531F3B1D064727C6AB * L_25 = V_1;
		String_t* L_26 = V_0;
		NullCheck(L_25);
		bool L_27;
		L_27 = TobiiProvider_InitializeWithLicense_m82F1E35F1FB699F8F52FCE405BFA02A98906C11B(L_25, L_26, (bool)1, /*hidden argument*/NULL);
		if (L_27)
		{
			goto IL_00c3;
		}
	}
	{
		// Debug.LogError("Failed to connect to a supported eye tracker. TobiiXR will NOT be available.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral0CB31F09837C5C148A125E752A0CD574CB0AF391, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_00c3:
	{
		// if (provider.HasValidOcumenLicense)
		TobiiProvider_tD45A100799E1CF76E55DBE531F3B1D064727C6AB * L_28 = V_1;
		NullCheck(L_28);
		bool L_29;
		L_29 = TobiiProvider_get_HasValidOcumenLicense_mC83B0B9612C3BEE41A72225F931D7DDA5C4BB4CE(L_28, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_00e2;
		}
	}
	{
		// Debug.Log("Ocumen license valid");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral56C5A3C9094F519DF6BBADC5014B3B9B0C721DFA, /*hidden argument*/NULL);
		// _advanced = new TobiiXRAdvanced(provider);
		TobiiProvider_tD45A100799E1CF76E55DBE531F3B1D064727C6AB * L_30 = V_1;
		TobiiXRAdvanced_tD89ECFBC056BC287F4A99F38CAD8804962868C74 * L_31 = (TobiiXRAdvanced_tD89ECFBC056BC287F4A99F38CAD8804962868C74 *)il2cpp_codegen_object_new(TobiiXRAdvanced_tD89ECFBC056BC287F4A99F38CAD8804962868C74_il2cpp_TypeInfo_var);
		TobiiXRAdvanced__ctor_m67A35EC18D6D2D73970F37BD05B51291D5A47A11(L_31, L_30, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_il2cpp_TypeInfo_var);
		((TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_StaticFields*)il2cpp_codegen_static_fields_for(TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_il2cpp_TypeInfo_var))->set__advanced_4(L_31);
		// }
		goto IL_00ec;
	}

IL_00e2:
	{
		// Debug.LogError("Ocumen license INVALID. Advanced API will NOT be available.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral6144B56578C5988A983BEA4A285805EA9DFCF3BE, /*hidden argument*/NULL);
	}

IL_00ec:
	{
		// Internal.Provider = provider;
		IL2CPP_RUNTIME_CLASS_INIT(TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_il2cpp_TypeInfo_var);
		TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD * L_32;
		L_32 = TobiiXR_get_Internal_m032E70B662616FA297C5904142C2213B97834C79_inline(/*hidden argument*/NULL);
		TobiiProvider_tD45A100799E1CF76E55DBE531F3B1D064727C6AB * L_33 = V_1;
		NullCheck(L_32);
		TobiiXRInternal_set_Provider_m2A33EB6E402AEFC61C5D516BE1AE55790854935B_inline(L_32, L_33, /*hidden argument*/NULL);
		// }
		goto IL_019e;
	}

IL_00fc:
	{
		// else if (!string.IsNullOrEmpty(licenseKey))
		String_t* L_34 = V_0;
		bool L_35;
		L_35 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_34, /*hidden argument*/NULL);
		if (L_35)
		{
			goto IL_0137;
		}
	}
	{
		// Debug.Log("An explicit license was provided so TobiiXR will use Tobii provider for eye tracking.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral1BE39779F1A6C99420526073195C1896499BD17E, /*hidden argument*/NULL);
		// var provider = new TobiiProvider();
		TobiiProvider_tD45A100799E1CF76E55DBE531F3B1D064727C6AB * L_36 = (TobiiProvider_tD45A100799E1CF76E55DBE531F3B1D064727C6AB *)il2cpp_codegen_object_new(TobiiProvider_tD45A100799E1CF76E55DBE531F3B1D064727C6AB_il2cpp_TypeInfo_var);
		TobiiProvider__ctor_m1FC62AE5F9EAE995D0A4E1D5C4B742A640C4ECC9(L_36, /*hidden argument*/NULL);
		V_2 = L_36;
		// if (!provider.InitializeWithLicense(licenseKey, false))
		TobiiProvider_tD45A100799E1CF76E55DBE531F3B1D064727C6AB * L_37 = V_2;
		String_t* L_38 = V_0;
		NullCheck(L_37);
		bool L_39;
		L_39 = TobiiProvider_InitializeWithLicense_m82F1E35F1FB699F8F52FCE405BFA02A98906C11B(L_37, L_38, (bool)0, /*hidden argument*/NULL);
		if (L_39)
		{
			goto IL_012a;
		}
	}
	{
		// Debug.LogError("Failed to connect to a supported eye tracker. TobiiXR will NOT be available.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral0CB31F09837C5C148A125E752A0CD574CB0AF391, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_012a:
	{
		// Internal.Provider = provider;
		IL2CPP_RUNTIME_CLASS_INIT(TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_il2cpp_TypeInfo_var);
		TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD * L_40;
		L_40 = TobiiXR_get_Internal_m032E70B662616FA297C5904142C2213B97834C79_inline(/*hidden argument*/NULL);
		TobiiProvider_tD45A100799E1CF76E55DBE531F3B1D064727C6AB * L_41 = V_2;
		NullCheck(L_40);
		TobiiXRInternal_set_Provider_m2A33EB6E402AEFC61C5D516BE1AE55790854935B_inline(L_40, L_41, /*hidden argument*/NULL);
		// }
		goto IL_019e;
	}

IL_0137:
	{
		// Internal.Provider = settings.EyeTrackingProvider;
		IL2CPP_RUNTIME_CLASS_INIT(TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_il2cpp_TypeInfo_var);
		TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD * L_42;
		L_42 = TobiiXR_get_Internal_m032E70B662616FA297C5904142C2213B97834C79_inline(/*hidden argument*/NULL);
		TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0 * L_43 = ___settings0;
		NullCheck(L_43);
		RuntimeObject* L_44;
		L_44 = TobiiXR_Settings_get_EyeTrackingProvider_m935E1651AEFA842955C24282543AD75C6A2FF230(L_43, /*hidden argument*/NULL);
		NullCheck(L_42);
		TobiiXRInternal_set_Provider_m2A33EB6E402AEFC61C5D516BE1AE55790854935B_inline(L_42, L_44, /*hidden argument*/NULL);
		// if (Internal.Provider == null)
		TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD * L_45;
		L_45 = TobiiXR_get_Internal_m032E70B662616FA297C5904142C2213B97834C79_inline(/*hidden argument*/NULL);
		NullCheck(L_45);
		RuntimeObject* L_46;
		L_46 = TobiiXRInternal_get_Provider_m07DAA2344CD8F0DC6E15E3D75489BE9578619F6C_inline(L_45, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0185;
		}
	}
	{
		// Internal.Provider = new NoseDirectionProvider();
		IL2CPP_RUNTIME_CLASS_INIT(TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_il2cpp_TypeInfo_var);
		TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD * L_47;
		L_47 = TobiiXR_get_Internal_m032E70B662616FA297C5904142C2213B97834C79_inline(/*hidden argument*/NULL);
		NoseDirectionProvider_t390567955750C154B13CD90437312E9A6EF7859B * L_48 = (NoseDirectionProvider_t390567955750C154B13CD90437312E9A6EF7859B *)il2cpp_codegen_object_new(NoseDirectionProvider_t390567955750C154B13CD90437312E9A6EF7859B_il2cpp_TypeInfo_var);
		NoseDirectionProvider__ctor_m4034F1A67250F9B1AB1D11E19AF4DE2BE34EBB61(L_48, /*hidden argument*/NULL);
		NullCheck(L_47);
		TobiiXRInternal_set_Provider_m2A33EB6E402AEFC61C5D516BE1AE55790854935B_inline(L_47, L_48, /*hidden argument*/NULL);
		// Debug.LogWarning(string.Format("All configured providers failed. Using ({0}) as fallback.",
		//     Internal.Provider.GetType().Name));
		TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD * L_49;
		L_49 = TobiiXR_get_Internal_m032E70B662616FA297C5904142C2213B97834C79_inline(/*hidden argument*/NULL);
		NullCheck(L_49);
		RuntimeObject* L_50;
		L_50 = TobiiXRInternal_get_Provider_m07DAA2344CD8F0DC6E15E3D75489BE9578619F6C_inline(L_49, /*hidden argument*/NULL);
		NullCheck(L_50);
		Type_t * L_51;
		L_51 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_50, /*hidden argument*/NULL);
		NullCheck(L_51);
		String_t* L_52;
		L_52 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_51);
		String_t* L_53;
		L_53 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralC92E67FAE80124BBE133E64B83039E7A1A54C1BE, L_52, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_53, /*hidden argument*/NULL);
	}

IL_0185:
	{
		// Debug.Log(string.Format("Starting TobiiXR with ({0}) as provider for eye tracking.",
		//     Internal.Provider));
		IL2CPP_RUNTIME_CLASS_INIT(TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_il2cpp_TypeInfo_var);
		TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD * L_54;
		L_54 = TobiiXR_get_Internal_m032E70B662616FA297C5904142C2213B97834C79_inline(/*hidden argument*/NULL);
		NullCheck(L_54);
		RuntimeObject* L_55;
		L_55 = TobiiXRInternal_get_Provider_m07DAA2344CD8F0DC6E15E3D75489BE9578619F6C_inline(L_54, /*hidden argument*/NULL);
		String_t* L_56;
		L_56 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral7F8CB7CAD4AF4DD11A8E631AFC7CD80394E0E43B, L_55, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_56, /*hidden argument*/NULL);
	}

IL_019e:
	{
		// if (settings.G2OM != null)
		TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0 * L_57 = ___settings0;
		NullCheck(L_57);
		G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C * L_58;
		L_58 = TobiiXR_Settings_get_G2OM_m7E33F91F0087382E37BB47A561FB5623911BD7F7_inline(L_57, /*hidden argument*/NULL);
		if (!L_58)
		{
			goto IL_01b8;
		}
	}
	{
		// Internal.G2OM = settings.G2OM;
		IL2CPP_RUNTIME_CLASS_INIT(TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_il2cpp_TypeInfo_var);
		TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD * L_59;
		L_59 = TobiiXR_get_Internal_m032E70B662616FA297C5904142C2213B97834C79_inline(/*hidden argument*/NULL);
		TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0 * L_60 = ___settings0;
		NullCheck(L_60);
		G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C * L_61;
		L_61 = TobiiXR_Settings_get_G2OM_m7E33F91F0087382E37BB47A561FB5623911BD7F7_inline(L_60, /*hidden argument*/NULL);
		NullCheck(L_59);
		TobiiXRInternal_set_G2OM_m8318A9FB4FD936B1E3E99CA396B10305BE9D6210_inline(L_59, L_61, /*hidden argument*/NULL);
		// }
		goto IL_01e4;
	}

IL_01b8:
	{
		// Internal.G2OM = G2OM.Create(new G2OM_Description
		// {
		//     LayerMask = settings.LayerMask,
		//     HowLongToKeepCandidatesInSeconds = settings.HowLongToKeepCandidatesInSeconds
		// });
		IL2CPP_RUNTIME_CLASS_INIT(TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_il2cpp_TypeInfo_var);
		TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD * L_62;
		L_62 = TobiiXR_get_Internal_m032E70B662616FA297C5904142C2213B97834C79_inline(/*hidden argument*/NULL);
		G2OM_Description_tDDC3E7F8747B6FC42E6B44F4302D67374D28F2DB * L_63 = (G2OM_Description_tDDC3E7F8747B6FC42E6B44F4302D67374D28F2DB *)il2cpp_codegen_object_new(G2OM_Description_tDDC3E7F8747B6FC42E6B44F4302D67374D28F2DB_il2cpp_TypeInfo_var);
		G2OM_Description__ctor_mA17739FD04B984F3F6A14F277415421273D1E8F7(L_63, /*hidden argument*/NULL);
		G2OM_Description_tDDC3E7F8747B6FC42E6B44F4302D67374D28F2DB * L_64 = L_63;
		TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0 * L_65 = ___settings0;
		NullCheck(L_65);
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_66 = L_65->get_LayerMask_6();
		NullCheck(L_64);
		L_64->set_LayerMask_1(L_66);
		G2OM_Description_tDDC3E7F8747B6FC42E6B44F4302D67374D28F2DB * L_67 = L_64;
		TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0 * L_68 = ___settings0;
		NullCheck(L_68);
		float L_69 = L_68->get_HowLongToKeepCandidatesInSeconds_7();
		NullCheck(L_67);
		L_67->set_HowLongToKeepCandidatesInSeconds_0(L_69);
		G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C * L_70;
		L_70 = G2OM_Create_m05896AB723E3055BB7A95264064C56C6EFF22C5B(L_67, /*hidden argument*/NULL);
		NullCheck(L_62);
		TobiiXRInternal_set_G2OM_m8318A9FB4FD936B1E3E99CA396B10305BE9D6210_inline(L_62, L_70, /*hidden argument*/NULL);
	}

IL_01e4:
	{
		// _updaterGameObject = new GameObject("TobiiXR Updater");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_71 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_71, _stringLiteralCBCF8744FADF32F40692AB98D5D5EB63DA905545, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_il2cpp_TypeInfo_var);
		((TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_StaticFields*)il2cpp_codegen_static_fields_for(TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_il2cpp_TypeInfo_var))->set__updaterGameObject_1(L_71);
		// var updater = _updaterGameObject.AddComponent<TobiiXR_Lifecycle>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_72 = ((TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_StaticFields*)il2cpp_codegen_static_fields_for(TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_il2cpp_TypeInfo_var))->get__updaterGameObject_1();
		NullCheck(L_72);
		TobiiXR_Lifecycle_t5A45FF952AADCB1A985E3D365599A048F5142195 * L_73;
		L_73 = GameObject_AddComponent_TisTobiiXR_Lifecycle_t5A45FF952AADCB1A985E3D365599A048F5142195_mF53ABD3C38E75BE9F52A2F3AD531E40062D59EA4(L_72, /*hidden argument*/GameObject_AddComponent_TisTobiiXR_Lifecycle_t5A45FF952AADCB1A985E3D365599A048F5142195_mF53ABD3C38E75BE9F52A2F3AD531E40062D59EA4_RuntimeMethod_var);
		// updater.OnUpdateAction += Tick;
		TobiiXR_Lifecycle_t5A45FF952AADCB1A985E3D365599A048F5142195 * L_74 = L_73;
		TobiiXR_Lifecycle_t5A45FF952AADCB1A985E3D365599A048F5142195 * L_75 = L_74;
		NullCheck(L_75);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_76 = L_75->get_OnUpdateAction_5();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_77 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_77, NULL, (intptr_t)((intptr_t)TobiiXR_Tick_m28D9E7F49EA879B767BB4CBBF4971C5EAE940CFB_RuntimeMethod_var), /*hidden argument*/NULL);
		Delegate_t * L_78;
		L_78 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_76, L_77, /*hidden argument*/NULL);
		NullCheck(L_75);
		L_75->set_OnUpdateAction_5(((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_78, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var)));
		// updater.OnDisableAction += Internal.G2OM.Clear;
		TobiiXR_Lifecycle_t5A45FF952AADCB1A985E3D365599A048F5142195 * L_79 = L_74;
		TobiiXR_Lifecycle_t5A45FF952AADCB1A985E3D365599A048F5142195 * L_80 = L_79;
		NullCheck(L_80);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_81 = L_80->get_OnDisableAction_6();
		TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD * L_82;
		L_82 = TobiiXR_get_Internal_m032E70B662616FA297C5904142C2213B97834C79_inline(/*hidden argument*/NULL);
		NullCheck(L_82);
		G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C * L_83;
		L_83 = TobiiXRInternal_get_G2OM_m5C7F8E6CA9D0498B721C4899CFD49AE2107D968A_inline(L_82, /*hidden argument*/NULL);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_84 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_84, L_83, (intptr_t)((intptr_t)G2OM_Clear_m48E4F43C0E2A2CDC1561AE39EA38FDEC49382E66_RuntimeMethod_var), /*hidden argument*/NULL);
		Delegate_t * L_85;
		L_85 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_81, L_84, /*hidden argument*/NULL);
		NullCheck(L_80);
		L_80->set_OnDisableAction_6(((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_85, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var)));
		// updater.OnApplicationQuitAction += Stop;
		TobiiXR_Lifecycle_t5A45FF952AADCB1A985E3D365599A048F5142195 * L_86 = L_79;
		NullCheck(L_86);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_87 = L_86->get_OnApplicationQuitAction_4();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_88 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_88, NULL, (intptr_t)((intptr_t)TobiiXR_Stop_m5D6EF0ECE0F1C85E6B3C7BACBCFD474D9B6F0832_RuntimeMethod_var), /*hidden argument*/NULL);
		Delegate_t * L_89;
		L_89 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_87, L_88, /*hidden argument*/NULL);
		NullCheck(L_86);
		L_86->set_OnApplicationQuitAction_4(((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_89, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var)));
		// return true;
		return (bool)1;
	}
}
// System.Void Tobii.XR.TobiiXR::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TobiiXR_Stop_m5D6EF0ECE0F1C85E6B3C7BACBCFD474D9B6F0832 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEyeTrackingProvider_t04D6D65DC709128E4BE6CCF69F52197434C02F73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!IsRunning) return;
		IL2CPP_RUNTIME_CLASS_INIT(TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = TobiiXR_get_IsRunning_m23502EC59626C34AD597F2E6777BAB485BAD35E5(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// if (!IsRunning) return;
		return;
	}

IL_0008:
	{
		// Internal.G2OM.Destroy();
		IL2CPP_RUNTIME_CLASS_INIT(TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_il2cpp_TypeInfo_var);
		TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD * L_1;
		L_1 = TobiiXR_get_Internal_m032E70B662616FA297C5904142C2213B97834C79_inline(/*hidden argument*/NULL);
		NullCheck(L_1);
		G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C * L_2;
		L_2 = TobiiXRInternal_get_G2OM_m5C7F8E6CA9D0498B721C4899CFD49AE2107D968A_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		G2OM_Destroy_mF71BC3363C4702D18EB5E4664D8020C7C2D44449(L_2, /*hidden argument*/NULL);
		// Internal.Provider.Destroy();
		TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD * L_3;
		L_3 = TobiiXR_get_Internal_m032E70B662616FA297C5904142C2213B97834C79_inline(/*hidden argument*/NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = TobiiXRInternal_get_Provider_m07DAA2344CD8F0DC6E15E3D75489BE9578619F6C_inline(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		InterfaceActionInvoker0::Invoke(4 /* System.Void Tobii.XR.IEyeTrackingProvider::Destroy() */, IEyeTrackingProvider_t04D6D65DC709128E4BE6CCF69F52197434C02F73_il2cpp_TypeInfo_var, L_4);
		// if (_updaterGameObject != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = ((TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_StaticFields*)il2cpp_codegen_static_fields_for(TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_il2cpp_TypeInfo_var))->get__updaterGameObject_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0042;
		}
	}
	{
		// Object.Destroy(_updaterGameObject.gameObject);
		IL2CPP_RUNTIME_CLASS_INIT(TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = ((TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_StaticFields*)il2cpp_codegen_static_fields_for(TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_il2cpp_TypeInfo_var))->get__updaterGameObject_1();
		NullCheck(L_7);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_8, /*hidden argument*/NULL);
	}

IL_0042:
	{
		// _updaterGameObject = null;
		IL2CPP_RUNTIME_CLASS_INIT(TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_il2cpp_TypeInfo_var);
		((TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_StaticFields*)il2cpp_codegen_static_fields_for(TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_il2cpp_TypeInfo_var))->set__updaterGameObject_1((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
		// _advanced = null;
		((TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_StaticFields*)il2cpp_codegen_static_fields_for(TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_il2cpp_TypeInfo_var))->set__advanced_4((TobiiXRAdvanced_tD89ECFBC056BC287F4A99F38CAD8804962868C74 *)NULL);
		// Internal.G2OM = null;
		TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD * L_9;
		L_9 = TobiiXR_get_Internal_m032E70B662616FA297C5904142C2213B97834C79_inline(/*hidden argument*/NULL);
		NullCheck(L_9);
		TobiiXRInternal_set_G2OM_m8318A9FB4FD936B1E3E99CA396B10305BE9D6210_inline(L_9, (G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C *)NULL, /*hidden argument*/NULL);
		// Internal.Provider = null;
		TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD * L_10;
		L_10 = TobiiXR_get_Internal_m032E70B662616FA297C5904142C2213B97834C79_inline(/*hidden argument*/NULL);
		NullCheck(L_10);
		TobiiXRInternal_set_Provider_m2A33EB6E402AEFC61C5D516BE1AE55790854935B_inline(L_10, (RuntimeObject*)NULL, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Tobii.XR.TobiiXR::Tick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TobiiXR_Tick_m28D9E7F49EA879B767BB4CBBF4971C5EAE940CFB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEyeTrackingProvider_t04D6D65DC709128E4BE6CCF69F52197434C02F73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	G2OM_DeviceData_t89D8C181AD591B39B1DB1F185A0252ACCF616F14  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Internal.Provider.Tick();
		IL2CPP_RUNTIME_CLASS_INIT(TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_il2cpp_TypeInfo_var);
		TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD * L_0;
		L_0 = TobiiXR_get_Internal_m032E70B662616FA297C5904142C2213B97834C79_inline(/*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = TobiiXRInternal_get_Provider_m07DAA2344CD8F0DC6E15E3D75489BE9578619F6C_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(3 /* System.Void Tobii.XR.IEyeTrackingProvider::Tick() */, IEyeTrackingProvider_t04D6D65DC709128E4BE6CCF69F52197434C02F73_il2cpp_TypeInfo_var, L_1);
		// Internal.Provider.GetEyeTrackingDataLocal(_eyeTrackingDataLocal);
		TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD * L_2;
		L_2 = TobiiXR_get_Internal_m032E70B662616FA297C5904142C2213B97834C79_inline(/*hidden argument*/NULL);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = TobiiXRInternal_get_Provider_m07DAA2344CD8F0DC6E15E3D75489BE9578619F6C_inline(L_2, /*hidden argument*/NULL);
		TobiiXR_EyeTrackingData_t77A57D23997EA5B3B365ABDD60221EFB27BD72EA * L_4 = ((TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_StaticFields*)il2cpp_codegen_static_fields_for(TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_il2cpp_TypeInfo_var))->get__eyeTrackingDataLocal_2();
		NullCheck(L_3);
		InterfaceActionInvoker1< TobiiXR_EyeTrackingData_t77A57D23997EA5B3B365ABDD60221EFB27BD72EA * >::Invoke(0 /* System.Void Tobii.XR.IEyeTrackingProvider::GetEyeTrackingDataLocal(Tobii.XR.TobiiXR_EyeTrackingData) */, IEyeTrackingProvider_t04D6D65DC709128E4BE6CCF69F52197434C02F73_il2cpp_TypeInfo_var, L_3, L_4);
		// EyeTrackingDataHelper.CopyAndTransformGazeData(_eyeTrackingDataLocal, _eyeTrackingDataWorld,
		//     Internal.Provider.LocalToWorldMatrix);
		TobiiXR_EyeTrackingData_t77A57D23997EA5B3B365ABDD60221EFB27BD72EA * L_5 = ((TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_StaticFields*)il2cpp_codegen_static_fields_for(TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_il2cpp_TypeInfo_var))->get__eyeTrackingDataLocal_2();
		TobiiXR_EyeTrackingData_t77A57D23997EA5B3B365ABDD60221EFB27BD72EA * L_6 = ((TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_StaticFields*)il2cpp_codegen_static_fields_for(TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_il2cpp_TypeInfo_var))->get__eyeTrackingDataWorld_3();
		TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD * L_7;
		L_7 = TobiiXR_get_Internal_m032E70B662616FA297C5904142C2213B97834C79_inline(/*hidden argument*/NULL);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = TobiiXRInternal_get_Provider_m07DAA2344CD8F0DC6E15E3D75489BE9578619F6C_inline(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_9;
		L_9 = InterfaceFuncInvoker0< Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  >::Invoke(1 /* UnityEngine.Matrix4x4 Tobii.XR.IEyeTrackingProvider::get_LocalToWorldMatrix() */, IEyeTrackingProvider_t04D6D65DC709128E4BE6CCF69F52197434C02F73_il2cpp_TypeInfo_var, L_8);
		EyeTrackingDataHelper_CopyAndTransformGazeData_m5F16455CD58F2C01D2B17C8A4B39D3740ED258E2(L_5, L_6, L_9, /*hidden argument*/NULL);
		// if (Internal.Filter != null && Internal.Filter.enabled)
		TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD * L_10;
		L_10 = TobiiXR_get_Internal_m032E70B662616FA297C5904142C2213B97834C79_inline(/*hidden argument*/NULL);
		NullCheck(L_10);
		EyeTrackingFilterBase_t898096B000FCA3A953F1A9BC81D2648D8CD3C66C * L_11;
		L_11 = TobiiXRInternal_get_Filter_m26E857D8E8F2BEF62353F06F20698340AFDA2FFB(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_11, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_00af;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_il2cpp_TypeInfo_var);
		TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD * L_13;
		L_13 = TobiiXR_get_Internal_m032E70B662616FA297C5904142C2213B97834C79_inline(/*hidden argument*/NULL);
		NullCheck(L_13);
		EyeTrackingFilterBase_t898096B000FCA3A953F1A9BC81D2648D8CD3C66C * L_14;
		L_14 = TobiiXRInternal_get_Filter_m26E857D8E8F2BEF62353F06F20698340AFDA2FFB(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		bool L_15;
		L_15 = Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800(L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_00af;
		}
	}
	{
		// var worldForward = Internal.Provider.LocalToWorldMatrix.MultiplyVector(Vector3.forward);
		IL2CPP_RUNTIME_CLASS_INIT(TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_il2cpp_TypeInfo_var);
		TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD * L_16;
		L_16 = TobiiXR_get_Internal_m032E70B662616FA297C5904142C2213B97834C79_inline(/*hidden argument*/NULL);
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = TobiiXRInternal_get_Provider_m07DAA2344CD8F0DC6E15E3D75489BE9578619F6C_inline(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_18;
		L_18 = InterfaceFuncInvoker0< Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  >::Invoke(1 /* UnityEngine.Matrix4x4 Tobii.XR.IEyeTrackingProvider::get_LocalToWorldMatrix() */, IEyeTrackingProvider_t04D6D65DC709128E4BE6CCF69F52197434C02F73_il2cpp_TypeInfo_var, L_17);
		V_2 = L_18;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Matrix4x4_MultiplyVector_m88C4BE23EB0B45BB701514AF3E1CA5A857F8212C((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_2), L_19, /*hidden argument*/NULL);
		V_1 = L_20;
		// Internal.Filter.Filter(_eyeTrackingDataLocal, Vector3.forward);
		TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD * L_21;
		L_21 = TobiiXR_get_Internal_m032E70B662616FA297C5904142C2213B97834C79_inline(/*hidden argument*/NULL);
		NullCheck(L_21);
		EyeTrackingFilterBase_t898096B000FCA3A953F1A9BC81D2648D8CD3C66C * L_22;
		L_22 = TobiiXRInternal_get_Filter_m26E857D8E8F2BEF62353F06F20698340AFDA2FFB(L_21, /*hidden argument*/NULL);
		TobiiXR_EyeTrackingData_t77A57D23997EA5B3B365ABDD60221EFB27BD72EA * L_23 = ((TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_StaticFields*)il2cpp_codegen_static_fields_for(TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_il2cpp_TypeInfo_var))->get__eyeTrackingDataLocal_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		NullCheck(L_22);
		VirtActionInvoker2< TobiiXR_EyeTrackingData_t77A57D23997EA5B3B365ABDD60221EFB27BD72EA *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(4 /* System.Void Tobii.XR.EyeTrackingFilterBase::Filter(Tobii.XR.TobiiXR_EyeTrackingData,UnityEngine.Vector3) */, L_22, L_23, L_24);
		// Internal.Filter.Filter(_eyeTrackingDataWorld, worldForward);
		TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD * L_25;
		L_25 = TobiiXR_get_Internal_m032E70B662616FA297C5904142C2213B97834C79_inline(/*hidden argument*/NULL);
		NullCheck(L_25);
		EyeTrackingFilterBase_t898096B000FCA3A953F1A9BC81D2648D8CD3C66C * L_26;
		L_26 = TobiiXRInternal_get_Filter_m26E857D8E8F2BEF62353F06F20698340AFDA2FFB(L_25, /*hidden argument*/NULL);
		TobiiXR_EyeTrackingData_t77A57D23997EA5B3B365ABDD60221EFB27BD72EA * L_27 = ((TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_StaticFields*)il2cpp_codegen_static_fields_for(TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_il2cpp_TypeInfo_var))->get__eyeTrackingDataWorld_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28 = V_1;
		NullCheck(L_26);
		VirtActionInvoker2< TobiiXR_EyeTrackingData_t77A57D23997EA5B3B365ABDD60221EFB27BD72EA *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(4 /* System.Void Tobii.XR.EyeTrackingFilterBase::Filter(Tobii.XR.TobiiXR_EyeTrackingData,UnityEngine.Vector3) */, L_26, L_27, L_28);
	}

IL_00af:
	{
		// var g2omData = CreateG2OMData(_eyeTrackingDataWorld);
		IL2CPP_RUNTIME_CLASS_INIT(TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_il2cpp_TypeInfo_var);
		TobiiXR_EyeTrackingData_t77A57D23997EA5B3B365ABDD60221EFB27BD72EA * L_29 = ((TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_StaticFields*)il2cpp_codegen_static_fields_for(TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_il2cpp_TypeInfo_var))->get__eyeTrackingDataWorld_3();
		G2OM_DeviceData_t89D8C181AD591B39B1DB1F185A0252ACCF616F14  L_30;
		L_30 = TobiiXR_CreateG2OMData_m350B87FB8DDADA2C3248C71A42E4C7DE48F15AB6(L_29, /*hidden argument*/NULL);
		V_0 = L_30;
		// Internal.G2OM.Tick(g2omData);
		TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD * L_31;
		L_31 = TobiiXR_get_Internal_m032E70B662616FA297C5904142C2213B97834C79_inline(/*hidden argument*/NULL);
		NullCheck(L_31);
		G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C * L_32;
		L_32 = TobiiXRInternal_get_G2OM_m5C7F8E6CA9D0498B721C4899CFD49AE2107D968A_inline(L_31, /*hidden argument*/NULL);
		G2OM_DeviceData_t89D8C181AD591B39B1DB1F185A0252ACCF616F14  L_33 = V_0;
		NullCheck(L_32);
		G2OM_Tick_m8CFFB902FA6305285F141FCF85BAAE440CCAE12E(L_32, L_33, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Tobii.G2OM.G2OM_DeviceData Tobii.XR.TobiiXR::CreateG2OMData(Tobii.XR.TobiiXR_EyeTrackingData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR G2OM_DeviceData_t89D8C181AD591B39B1DB1F185A0252ACCF616F14  TobiiXR_CreateG2OMData_m350B87FB8DDADA2C3248C71A42E4C7DE48F15AB6 (TobiiXR_EyeTrackingData_t77A57D23997EA5B3B365ABDD60221EFB27BD72EA * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEyeTrackingProvider_t04D6D65DC709128E4BE6CCF69F52197434C02F73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_0;
	memset((&V_0), 0, sizeof(V_0));
	G2OM_DeviceData_t89D8C181AD591B39B1DB1F185A0252ACCF616F14  V_1;
	memset((&V_1), 0, sizeof(V_1));
	G2OM_GazeRay_t58E094CB5E4078AB25F3A3857BF5049FF04342EA  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var t = Internal.Provider.LocalToWorldMatrix;
		IL2CPP_RUNTIME_CLASS_INIT(TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_il2cpp_TypeInfo_var);
		TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD * L_0;
		L_0 = TobiiXR_get_Internal_m032E70B662616FA297C5904142C2213B97834C79_inline(/*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = TobiiXRInternal_get_Provider_m07DAA2344CD8F0DC6E15E3D75489BE9578619F6C_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_2;
		L_2 = InterfaceFuncInvoker0< Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  >::Invoke(1 /* UnityEngine.Matrix4x4 Tobii.XR.IEyeTrackingProvider::get_LocalToWorldMatrix() */, IEyeTrackingProvider_t04D6D65DC709128E4BE6CCF69F52197434C02F73_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
		// return new G2OM_DeviceData
		// {
		//     timestamp = data.Timestamp,
		//     gaze_ray_world_space = new G2OM_GazeRay
		//     {
		//         is_valid = data.GazeRay.IsValid.ToByte(),
		//         ray = G2OM_UnityExtensionMethods.CreateRay(data.GazeRay.Origin, data.GazeRay.Direction),
		//     },
		//     camera_up_direction_world_space = t.MultiplyVector(Vector3.up).AsG2OMVector3(),
		//     camera_right_direction_world_space = t.MultiplyVector(Vector3.right).AsG2OMVector3()
		// };
		il2cpp_codegen_initobj((&V_1), sizeof(G2OM_DeviceData_t89D8C181AD591B39B1DB1F185A0252ACCF616F14 ));
		TobiiXR_EyeTrackingData_t77A57D23997EA5B3B365ABDD60221EFB27BD72EA * L_3 = ___data0;
		NullCheck(L_3);
		float L_4 = L_3->get_Timestamp_0();
		(&V_1)->set_timestamp_0(L_4);
		il2cpp_codegen_initobj((&V_2), sizeof(G2OM_GazeRay_t58E094CB5E4078AB25F3A3857BF5049FF04342EA ));
		TobiiXR_EyeTrackingData_t77A57D23997EA5B3B365ABDD60221EFB27BD72EA * L_5 = ___data0;
		NullCheck(L_5);
		TobiiXR_GazeRay_t0A6DF5B77C70D0342D4C3DBCF5936AAAA9107D32 * L_6 = L_5->get_address_of_GazeRay_3();
		bool L_7 = L_6->get_IsValid_1();
		uint8_t L_8;
		L_8 = G2OM_ExtensionMethods_ToByte_m9F6BF5ADFF7FFEE00E444B180D3A752743D3A914(L_7, /*hidden argument*/NULL);
		(&V_2)->set_is_valid_1(L_8);
		TobiiXR_EyeTrackingData_t77A57D23997EA5B3B365ABDD60221EFB27BD72EA * L_9 = ___data0;
		NullCheck(L_9);
		TobiiXR_GazeRay_t0A6DF5B77C70D0342D4C3DBCF5936AAAA9107D32 * L_10 = L_9->get_address_of_GazeRay_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = L_10->get_Origin_2();
		TobiiXR_EyeTrackingData_t77A57D23997EA5B3B365ABDD60221EFB27BD72EA * L_12 = ___data0;
		NullCheck(L_12);
		TobiiXR_GazeRay_t0A6DF5B77C70D0342D4C3DBCF5936AAAA9107D32 * L_13 = L_12->get_address_of_GazeRay_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = L_13->get_Direction_0();
		G2OM_Ray_t5B49A5A55B51DA9DF39338656E6841A0BD844FB9  L_15;
		L_15 = G2OM_UnityExtensionMethods_CreateRay_m6FB164055DD7C1891C9B42E12B610CE06B6B5D30(L_11, L_14, /*hidden argument*/NULL);
		(&V_2)->set_ray_0(L_15);
		G2OM_GazeRay_t58E094CB5E4078AB25F3A3857BF5049FF04342EA  L_16 = V_2;
		(&V_1)->set_gaze_ray_world_space_1(L_16);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Matrix4x4_MultiplyVector_m88C4BE23EB0B45BB701514AF3E1CA5A857F8212C((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), L_17, /*hidden argument*/NULL);
		G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D  L_19;
		L_19 = G2OM_UnityExtensionMethods_AsG2OMVector3_m285727854FC4760794F7B4EA667B3F3C0EA9DB06(L_18, /*hidden argument*/NULL);
		(&V_1)->set_camera_up_direction_world_space_2(L_19);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Matrix4x4_MultiplyVector_m88C4BE23EB0B45BB701514AF3E1CA5A857F8212C((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), L_20, /*hidden argument*/NULL);
		G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D  L_22;
		L_22 = G2OM_UnityExtensionMethods_AsG2OMVector3_m285727854FC4760794F7B4EA667B3F3C0EA9DB06(L_21, /*hidden argument*/NULL);
		(&V_1)->set_camera_right_direction_world_space_3(L_22);
		G2OM_DeviceData_t89D8C181AD591B39B1DB1F185A0252ACCF616F14  L_23 = V_1;
		return L_23;
	}
}
// Tobii.XR.TobiiXR/TobiiXRInternal Tobii.XR.TobiiXR::get_Internal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD * TobiiXR_get_Internal_m032E70B662616FA297C5904142C2213B97834C79 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return _internal; }
		IL2CPP_RUNTIME_CLASS_INIT(TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_il2cpp_TypeInfo_var);
		TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD * L_0 = ((TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_StaticFields*)il2cpp_codegen_static_fields_for(TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_il2cpp_TypeInfo_var))->get__internal_0();
		return L_0;
	}
}
// Tobii.XR.TobiiXRAdvanced Tobii.XR.TobiiXR::get_Advanced()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TobiiXRAdvanced_tD89ECFBC056BC287F4A99F38CAD8804962868C74 * TobiiXR_get_Advanced_m70F7980B221AB61463DFB02BB01B4D1B0A4BBD83 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE97065529319EF6A0A6EA02D3B2EA5B2BD58B71D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_advanced == null)
		IL2CPP_RUNTIME_CLASS_INIT(TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_il2cpp_TypeInfo_var);
		TobiiXRAdvanced_tD89ECFBC056BC287F4A99F38CAD8804962868C74 * L_0 = ((TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_StaticFields*)il2cpp_codegen_static_fields_for(TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_il2cpp_TypeInfo_var))->get__advanced_4();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		// Debug.LogError("An attempt was made to access TobiiXR Advanced without having initialized it");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralE97065529319EF6A0A6EA02D3B2EA5B2BD58B71D, /*hidden argument*/NULL);
	}

IL_0011:
	{
		// return _advanced;
		IL2CPP_RUNTIME_CLASS_INIT(TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_il2cpp_TypeInfo_var);
		TobiiXRAdvanced_tD89ECFBC056BC287F4A99F38CAD8804962868C74 * L_1 = ((TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_StaticFields*)il2cpp_codegen_static_fields_for(TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_il2cpp_TypeInfo_var))->get__advanced_4();
		return L_1;
	}
}
// System.Void Tobii.XR.TobiiXR::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TobiiXR__cctor_mA451D1B84280A60ED35B11B8A97434B52CC8839F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TobiiXR_EyeTrackingData_t77A57D23997EA5B3B365ABDD60221EFB27BD72EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly TobiiXRInternal _internal = new TobiiXRInternal();
		TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD * L_0 = (TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD *)il2cpp_codegen_object_new(TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD_il2cpp_TypeInfo_var);
		TobiiXRInternal__ctor_mEE195D7AB67BD58B59B863C6144C18071DFE419E(L_0, /*hidden argument*/NULL);
		((TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_StaticFields*)il2cpp_codegen_static_fields_for(TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_il2cpp_TypeInfo_var))->set__internal_0(L_0);
		// private static readonly TobiiXR_EyeTrackingData _eyeTrackingDataLocal = new TobiiXR_EyeTrackingData();
		TobiiXR_EyeTrackingData_t77A57D23997EA5B3B365ABDD60221EFB27BD72EA * L_1 = (TobiiXR_EyeTrackingData_t77A57D23997EA5B3B365ABDD60221EFB27BD72EA *)il2cpp_codegen_object_new(TobiiXR_EyeTrackingData_t77A57D23997EA5B3B365ABDD60221EFB27BD72EA_il2cpp_TypeInfo_var);
		TobiiXR_EyeTrackingData__ctor_m32665213224589BADDE8E4A9E424C8188005BB28(L_1, /*hidden argument*/NULL);
		((TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_StaticFields*)il2cpp_codegen_static_fields_for(TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_il2cpp_TypeInfo_var))->set__eyeTrackingDataLocal_2(L_1);
		// private static readonly TobiiXR_EyeTrackingData _eyeTrackingDataWorld = new TobiiXR_EyeTrackingData();
		TobiiXR_EyeTrackingData_t77A57D23997EA5B3B365ABDD60221EFB27BD72EA * L_2 = (TobiiXR_EyeTrackingData_t77A57D23997EA5B3B365ABDD60221EFB27BD72EA *)il2cpp_codegen_object_new(TobiiXR_EyeTrackingData_t77A57D23997EA5B3B365ABDD60221EFB27BD72EA_il2cpp_TypeInfo_var);
		TobiiXR_EyeTrackingData__ctor_m32665213224589BADDE8E4A9E424C8188005BB28(L_2, /*hidden argument*/NULL);
		((TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_StaticFields*)il2cpp_codegen_static_fields_for(TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_il2cpp_TypeInfo_var))->set__eyeTrackingDataWorld_3(L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TobiiXR_Initializer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TobiiXR_Initializer_Awake_mA93FF86752C2777AC7DD549009A25DC0805AE3D2 (TobiiXR_Initializer_t6E6B5AF7DF774175B1F4BD7B27E636E4489D8286 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TobiiXR.Start(Settings);
		TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0 * L_0 = __this->get_Settings_4();
		IL2CPP_RUNTIME_CLASS_INIT(TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = TobiiXR_Start_mB3C5E46DAF061A6E7F7742119A6306C7ADC44213(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TobiiXR_Initializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TobiiXR_Initializer__ctor_m612B60283814D175F1B34EE826099142D881EB7D (TobiiXR_Initializer_t6E6B5AF7DF774175B1F4BD7B27E636E4489D8286 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Tobii.XR.Internal.TobiiXR_Lifecycle::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TobiiXR_Lifecycle_Awake_m6B7442E0DDD363BEEAD3AB98AD039AD2E606FE24 (TobiiXR_Lifecycle_t5A45FF952AADCB1A985E3D365599A048F5142195 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TobiiXR_Lifecycle_OnQuitting_mE4E207F08156F52D4E034152552776E06CFF606B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.quitting += OnQuitting;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_0, __this, (intptr_t)((intptr_t)TobiiXR_Lifecycle_OnQuitting_mE4E207F08156F52D4E034152552776E06CFF606B_RuntimeMethod_var), /*hidden argument*/NULL);
		Application_add_quitting_mB3FABD4514AA9FED23136D80BF59FDCE00D0F9B7(L_0, /*hidden argument*/NULL);
		// DontDestroyOnLoad(this);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Tobii.XR.Internal.TobiiXR_Lifecycle::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TobiiXR_Lifecycle_OnDisable_mD302A1F874A74DE7069EC21B86B8E3A123097FFE (TobiiXR_Lifecycle_t5A45FF952AADCB1A985E3D365599A048F5142195 * __this, const RuntimeMethod* method)
{
	{
		// OnDisableAction.Invoke();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnDisableAction_6();
		NullCheck(L_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Tobii.XR.Internal.TobiiXR_Lifecycle::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TobiiXR_Lifecycle_Update_m23C15FCD22E52EB075DC60DE3B65B245FD004469 (TobiiXR_Lifecycle_t5A45FF952AADCB1A985E3D365599A048F5142195 * __this, const RuntimeMethod* method)
{
	{
		// OnUpdateAction.Invoke();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnUpdateAction_5();
		NullCheck(L_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Tobii.XR.Internal.TobiiXR_Lifecycle::OnQuitting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TobiiXR_Lifecycle_OnQuitting_mE4E207F08156F52D4E034152552776E06CFF606B (TobiiXR_Lifecycle_t5A45FF952AADCB1A985E3D365599A048F5142195 * __this, const RuntimeMethod* method)
{
	{
		// OnApplicationQuitAction.Invoke();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnApplicationQuitAction_4();
		NullCheck(L_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Tobii.XR.Internal.TobiiXR_Lifecycle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TobiiXR_Lifecycle__ctor_m7929FAC5E934235658A6C1F1ADB914DF5C49097E (TobiiXR_Lifecycle_t5A45FF952AADCB1A985E3D365599A048F5142195 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__7_0_m5AAA90722319D81046F03D378DC8C4803F199138_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__7_1_mB1A3837B0BEFB757FF17E6F20201A382A500FF46_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__7_2_m7994086901B229011858E7170DAB71D8DFF57999_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tCF809EE280FCA8E46728688925705891BCE185DB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B2_0 = NULL;
	TobiiXR_Lifecycle_t5A45FF952AADCB1A985E3D365599A048F5142195 * G_B2_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B1_0 = NULL;
	TobiiXR_Lifecycle_t5A45FF952AADCB1A985E3D365599A048F5142195 * G_B1_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B4_0 = NULL;
	TobiiXR_Lifecycle_t5A45FF952AADCB1A985E3D365599A048F5142195 * G_B4_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B3_0 = NULL;
	TobiiXR_Lifecycle_t5A45FF952AADCB1A985E3D365599A048F5142195 * G_B3_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B6_0 = NULL;
	TobiiXR_Lifecycle_t5A45FF952AADCB1A985E3D365599A048F5142195 * G_B6_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B5_0 = NULL;
	TobiiXR_Lifecycle_t5A45FF952AADCB1A985E3D365599A048F5142195 * G_B5_1 = NULL;
	{
		// public Action OnApplicationQuitAction = delegate { };
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCF809EE280FCA8E46728688925705891BCE185DB_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((U3CU3Ec_tCF809EE280FCA8E46728688925705891BCE185DB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCF809EE280FCA8E46728688925705891BCE185DB_il2cpp_TypeInfo_var))->get_U3CU3E9__7_0_1();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCF809EE280FCA8E46728688925705891BCE185DB_il2cpp_TypeInfo_var);
		U3CU3Ec_tCF809EE280FCA8E46728688925705891BCE185DB * L_2 = ((U3CU3Ec_tCF809EE280FCA8E46728688925705891BCE185DB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCF809EE280FCA8E46728688925705891BCE185DB_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_3, L_2, (intptr_t)((intptr_t)U3CU3Ec_U3C_ctorU3Eb__7_0_m5AAA90722319D81046F03D378DC8C4803F199138_RuntimeMethod_var), /*hidden argument*/NULL);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_4 = L_3;
		((U3CU3Ec_tCF809EE280FCA8E46728688925705891BCE185DB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCF809EE280FCA8E46728688925705891BCE185DB_il2cpp_TypeInfo_var))->set_U3CU3E9__7_0_1(L_4);
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
	}

IL_0020:
	{
		NullCheck(G_B2_1);
		G_B2_1->set_OnApplicationQuitAction_4(G_B2_0);
		// public Action OnUpdateAction = delegate { };
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCF809EE280FCA8E46728688925705891BCE185DB_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5 = ((U3CU3Ec_tCF809EE280FCA8E46728688925705891BCE185DB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCF809EE280FCA8E46728688925705891BCE185DB_il2cpp_TypeInfo_var))->get_U3CU3E9__7_1_2();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = L_5;
		G_B3_0 = L_6;
		G_B3_1 = __this;
		if (L_6)
		{
			G_B4_0 = L_6;
			G_B4_1 = __this;
			goto IL_0045;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCF809EE280FCA8E46728688925705891BCE185DB_il2cpp_TypeInfo_var);
		U3CU3Ec_tCF809EE280FCA8E46728688925705891BCE185DB * L_7 = ((U3CU3Ec_tCF809EE280FCA8E46728688925705891BCE185DB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCF809EE280FCA8E46728688925705891BCE185DB_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_8, L_7, (intptr_t)((intptr_t)U3CU3Ec_U3C_ctorU3Eb__7_1_mB1A3837B0BEFB757FF17E6F20201A382A500FF46_RuntimeMethod_var), /*hidden argument*/NULL);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = L_8;
		((U3CU3Ec_tCF809EE280FCA8E46728688925705891BCE185DB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCF809EE280FCA8E46728688925705891BCE185DB_il2cpp_TypeInfo_var))->set_U3CU3E9__7_1_2(L_9);
		G_B4_0 = L_9;
		G_B4_1 = G_B3_1;
	}

IL_0045:
	{
		NullCheck(G_B4_1);
		G_B4_1->set_OnUpdateAction_5(G_B4_0);
		// public Action OnDisableAction = delegate { };
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCF809EE280FCA8E46728688925705891BCE185DB_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = ((U3CU3Ec_tCF809EE280FCA8E46728688925705891BCE185DB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCF809EE280FCA8E46728688925705891BCE185DB_il2cpp_TypeInfo_var))->get_U3CU3E9__7_2_3();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_11 = L_10;
		G_B5_0 = L_11;
		G_B5_1 = __this;
		if (L_11)
		{
			G_B6_0 = L_11;
			G_B6_1 = __this;
			goto IL_006a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCF809EE280FCA8E46728688925705891BCE185DB_il2cpp_TypeInfo_var);
		U3CU3Ec_tCF809EE280FCA8E46728688925705891BCE185DB * L_12 = ((U3CU3Ec_tCF809EE280FCA8E46728688925705891BCE185DB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCF809EE280FCA8E46728688925705891BCE185DB_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_13 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_13, L_12, (intptr_t)((intptr_t)U3CU3Ec_U3C_ctorU3Eb__7_2_m7994086901B229011858E7170DAB71D8DFF57999_RuntimeMethod_var), /*hidden argument*/NULL);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_14 = L_13;
		((U3CU3Ec_tCF809EE280FCA8E46728688925705891BCE185DB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCF809EE280FCA8E46728688925705891BCE185DB_il2cpp_TypeInfo_var))->set_U3CU3E9__7_2_3(L_14);
		G_B6_0 = L_14;
		G_B6_1 = G_B5_1;
	}

IL_006a:
	{
		NullCheck(G_B6_1);
		G_B6_1->set_OnDisableAction_6(G_B6_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Tobii.XR.IEyeTrackingProvider Tobii.XR.TobiiXR_Settings::get_EyeTrackingProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TobiiXR_Settings_get_EyeTrackingProvider_m935E1651AEFA842955C24282543AD75C6A2FF230 (TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0 * __this, const RuntimeMethod* method)
{
	{
		// if (_eyeTrackingProvider != null) return _eyeTrackingProvider;
		RuntimeObject* L_0 = __this->get__eyeTrackingProvider_1();
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// if (_eyeTrackingProvider != null) return _eyeTrackingProvider;
		RuntimeObject* L_1 = __this->get__eyeTrackingProvider_1();
		return L_1;
	}

IL_000f:
	{
		// _eyeTrackingProvider = GetProvider();
		RuntimeObject* L_2;
		L_2 = TobiiXR_Settings_GetProvider_mC626B008298B525C593E56769F2FB050144F8020(__this, /*hidden argument*/NULL);
		__this->set__eyeTrackingProvider_1(L_2);
		// return _eyeTrackingProvider;
		RuntimeObject* L_3 = __this->get__eyeTrackingProvider_1();
		return L_3;
	}
}
// System.Void Tobii.XR.TobiiXR_Settings::set_EyeTrackingProvider(Tobii.XR.IEyeTrackingProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TobiiXR_Settings_set_EyeTrackingProvider_m9166DC576C37F6F9C14D68D02F865076866B4DBD (TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// _eyeTrackingProvider = value;
		RuntimeObject* L_0 = ___value0;
		__this->set__eyeTrackingProvider_1(L_0);
		// }
		return;
	}
}
// Tobii.G2OM.G2OM Tobii.XR.TobiiXR_Settings::get_G2OM()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C * TobiiXR_Settings_get_G2OM_m7E33F91F0087382E37BB47A561FB5623911BD7F7 (TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0 * __this, const RuntimeMethod* method)
{
	{
		// public Tobii.G2OM.G2OM G2OM { get; set; }
		G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C * L_0 = __this->get_U3CG2OMU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Tobii.XR.TobiiXR_Settings::set_G2OM(Tobii.G2OM.G2OM)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TobiiXR_Settings_set_G2OM_m9852C116AD4B9A5EBF01AC16729730276E33E50D (TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0 * __this, G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C * ___value0, const RuntimeMethod* method)
{
	{
		// public Tobii.G2OM.G2OM G2OM { get; set; }
		G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C * L_0 = ___value0;
		__this->set_U3CG2OMU3Ek__BackingField_2(L_0);
		return;
	}
}
// Tobii.XR.IEyeTrackingProvider Tobii.XR.TobiiXR_Settings::GetProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TobiiXR_Settings_GetProvider_mC626B008298B525C593E56769F2FB050144F8020 (TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisIEyeTrackingProvider_t04D6D65DC709128E4BE6CCF69F52197434C02F73_m6A2990A123D1A2AA3557FE683206B00DE9F054AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisProviderElement_t76AE55D58DAD3043AE5CE90FE6B06F6C474697E9_TisType_t_mDE5A5E00BCBB24B5E759302251C87FCC6E3B1188_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisType_t_TisIEyeTrackingProvider_t04D6D65DC709128E4BE6CCF69F52197434C02F73_m9DCEBD222FCB4C3512642BDB084248722E4EF79C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisType_t_m2A0B85DA7F086A9F38AE3CBF6F6DB181B2A86753_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m6AC59D19A3B5879023B89F3EB96AC21D1F244F9F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mBBC58743DEEE7E47F68AA3544FF0092BC5F79EC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mD7D590149A2A911A966A7D1E031658803A962FF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mF99B731B7FE71291198AC579A27977DAFAEE528D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t0D121E24665C7C6EBDEE662FD349B058C314168D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t37CB4832DBF1755273858A77BAAC6B4B50B9444D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tD834A382C7BC9720A3941F056FF6626757F128C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TobiiXR_Settings_GetProviderFrom_m38E09C04C3FB68D785BFDEDEEDAC1FF2BF7E8ED7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetProviderU3Eb__18_0_m3AD5BA8B1C76D17AE2C1F93E3F5DF8F00477F6F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetProviderU3Eb__18_1_m7A2FD166742E05AF9CDD8244B378BCC9441BA979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetProviderU3Eb__18_2_m0EA4774C2078DCB7A9AFFEEC7D6CFC9F900D0B91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB863BCE9690BD07ADCB7EC7104291B12AEC27562_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t047270E2141D972A607E0D91E0E16FD0FFFC2D07 * G_B3_0 = NULL;
	Func_2_tD834A382C7BC9720A3941F056FF6626757F128C1 * G_B5_0 = NULL;
	List_1_t047270E2141D972A607E0D91E0E16FD0FFFC2D07 * G_B5_1 = NULL;
	Func_2_tD834A382C7BC9720A3941F056FF6626757F128C1 * G_B4_0 = NULL;
	List_1_t047270E2141D972A607E0D91E0E16FD0FFFC2D07 * G_B4_1 = NULL;
	Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * G_B7_0 = NULL;
	RuntimeObject* G_B7_1 = NULL;
	Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * G_B6_0 = NULL;
	RuntimeObject* G_B6_1 = NULL;
	Func_2_t0D121E24665C7C6EBDEE662FD349B058C314168D * G_B9_0 = NULL;
	RuntimeObject* G_B9_1 = NULL;
	Func_2_t0D121E24665C7C6EBDEE662FD349B058C314168D * G_B8_0 = NULL;
	RuntimeObject* G_B8_1 = NULL;
	{
		// var eyeTrackingProviders = _platform == RuntimePlatform.Android ? AndroidEyeTrackingProviders : StandaloneEyeTrackingProviders;
		IL2CPP_RUNTIME_CLASS_INIT(TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0_il2cpp_TypeInfo_var);
		int32_t L_0 = ((TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0_StaticFields*)il2cpp_codegen_static_fields_for(TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0_il2cpp_TypeInfo_var))->get__platform_0();
		if ((((int32_t)L_0) == ((int32_t)((int32_t)11))))
		{
			goto IL_0011;
		}
	}
	{
		List_1_t047270E2141D972A607E0D91E0E16FD0FFFC2D07 * L_1 = __this->get_StandaloneEyeTrackingProviders_4();
		G_B3_0 = L_1;
		goto IL_0017;
	}

IL_0011:
	{
		List_1_t047270E2141D972A607E0D91E0E16FD0FFFC2D07 * L_2 = __this->get_AndroidEyeTrackingProviders_5();
		G_B3_0 = L_2;
	}

IL_0017:
	{
		// var providerResult = eyeTrackingProviders
		//     .Select(element => AssemblyUtils.EyetrackingProviderType(element.TypeName))
		//     .Where(type => type != null)
		//     .Select(GetProviderFrom)
		//     .FirstOrDefault(provider => provider.Initialize());
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB863BCE9690BD07ADCB7EC7104291B12AEC27562_il2cpp_TypeInfo_var);
		Func_2_tD834A382C7BC9720A3941F056FF6626757F128C1 * L_3 = ((U3CU3Ec_tB863BCE9690BD07ADCB7EC7104291B12AEC27562_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB863BCE9690BD07ADCB7EC7104291B12AEC27562_il2cpp_TypeInfo_var))->get_U3CU3E9__18_0_1();
		Func_2_tD834A382C7BC9720A3941F056FF6626757F128C1 * L_4 = L_3;
		G_B4_0 = L_4;
		G_B4_1 = G_B3_0;
		if (L_4)
		{
			G_B5_0 = L_4;
			G_B5_1 = G_B3_0;
			goto IL_0036;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB863BCE9690BD07ADCB7EC7104291B12AEC27562_il2cpp_TypeInfo_var);
		U3CU3Ec_tB863BCE9690BD07ADCB7EC7104291B12AEC27562 * L_5 = ((U3CU3Ec_tB863BCE9690BD07ADCB7EC7104291B12AEC27562_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB863BCE9690BD07ADCB7EC7104291B12AEC27562_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_tD834A382C7BC9720A3941F056FF6626757F128C1 * L_6 = (Func_2_tD834A382C7BC9720A3941F056FF6626757F128C1 *)il2cpp_codegen_object_new(Func_2_tD834A382C7BC9720A3941F056FF6626757F128C1_il2cpp_TypeInfo_var);
		Func_2__ctor_mD7D590149A2A911A966A7D1E031658803A962FF6(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec_U3CGetProviderU3Eb__18_0_m3AD5BA8B1C76D17AE2C1F93E3F5DF8F00477F6F8_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mD7D590149A2A911A966A7D1E031658803A962FF6_RuntimeMethod_var);
		Func_2_tD834A382C7BC9720A3941F056FF6626757F128C1 * L_7 = L_6;
		((U3CU3Ec_tB863BCE9690BD07ADCB7EC7104291B12AEC27562_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB863BCE9690BD07ADCB7EC7104291B12AEC27562_il2cpp_TypeInfo_var))->set_U3CU3E9__18_0_1(L_7);
		G_B5_0 = L_7;
		G_B5_1 = G_B4_1;
	}

IL_0036:
	{
		RuntimeObject* L_8;
		L_8 = Enumerable_Select_TisProviderElement_t76AE55D58DAD3043AE5CE90FE6B06F6C474697E9_TisType_t_mDE5A5E00BCBB24B5E759302251C87FCC6E3B1188(G_B5_1, G_B5_0, /*hidden argument*/Enumerable_Select_TisProviderElement_t76AE55D58DAD3043AE5CE90FE6B06F6C474697E9_TisType_t_mDE5A5E00BCBB24B5E759302251C87FCC6E3B1188_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB863BCE9690BD07ADCB7EC7104291B12AEC27562_il2cpp_TypeInfo_var);
		Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * L_9 = ((U3CU3Ec_tB863BCE9690BD07ADCB7EC7104291B12AEC27562_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB863BCE9690BD07ADCB7EC7104291B12AEC27562_il2cpp_TypeInfo_var))->get_U3CU3E9__18_1_2();
		Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * L_10 = L_9;
		G_B6_0 = L_10;
		G_B6_1 = L_8;
		if (L_10)
		{
			G_B7_0 = L_10;
			G_B7_1 = L_8;
			goto IL_005a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB863BCE9690BD07ADCB7EC7104291B12AEC27562_il2cpp_TypeInfo_var);
		U3CU3Ec_tB863BCE9690BD07ADCB7EC7104291B12AEC27562 * L_11 = ((U3CU3Ec_tB863BCE9690BD07ADCB7EC7104291B12AEC27562_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB863BCE9690BD07ADCB7EC7104291B12AEC27562_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * L_12 = (Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 *)il2cpp_codegen_object_new(Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5_il2cpp_TypeInfo_var);
		Func_2__ctor_mF99B731B7FE71291198AC579A27977DAFAEE528D(L_12, L_11, (intptr_t)((intptr_t)U3CU3Ec_U3CGetProviderU3Eb__18_1_m7A2FD166742E05AF9CDD8244B378BCC9441BA979_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mF99B731B7FE71291198AC579A27977DAFAEE528D_RuntimeMethod_var);
		Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * L_13 = L_12;
		((U3CU3Ec_tB863BCE9690BD07ADCB7EC7104291B12AEC27562_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB863BCE9690BD07ADCB7EC7104291B12AEC27562_il2cpp_TypeInfo_var))->set_U3CU3E9__18_1_2(L_13);
		G_B7_0 = L_13;
		G_B7_1 = G_B6_1;
	}

IL_005a:
	{
		RuntimeObject* L_14;
		L_14 = Enumerable_Where_TisType_t_m2A0B85DA7F086A9F38AE3CBF6F6DB181B2A86753(G_B7_1, G_B7_0, /*hidden argument*/Enumerable_Where_TisType_t_m2A0B85DA7F086A9F38AE3CBF6F6DB181B2A86753_RuntimeMethod_var);
		Func_2_t37CB4832DBF1755273858A77BAAC6B4B50B9444D * L_15 = (Func_2_t37CB4832DBF1755273858A77BAAC6B4B50B9444D *)il2cpp_codegen_object_new(Func_2_t37CB4832DBF1755273858A77BAAC6B4B50B9444D_il2cpp_TypeInfo_var);
		Func_2__ctor_m6AC59D19A3B5879023B89F3EB96AC21D1F244F9F(L_15, NULL, (intptr_t)((intptr_t)TobiiXR_Settings_GetProviderFrom_m38E09C04C3FB68D785BFDEDEEDAC1FF2BF7E8ED7_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m6AC59D19A3B5879023B89F3EB96AC21D1F244F9F_RuntimeMethod_var);
		RuntimeObject* L_16;
		L_16 = Enumerable_Select_TisType_t_TisIEyeTrackingProvider_t04D6D65DC709128E4BE6CCF69F52197434C02F73_m9DCEBD222FCB4C3512642BDB084248722E4EF79C(L_14, L_15, /*hidden argument*/Enumerable_Select_TisType_t_TisIEyeTrackingProvider_t04D6D65DC709128E4BE6CCF69F52197434C02F73_m9DCEBD222FCB4C3512642BDB084248722E4EF79C_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB863BCE9690BD07ADCB7EC7104291B12AEC27562_il2cpp_TypeInfo_var);
		Func_2_t0D121E24665C7C6EBDEE662FD349B058C314168D * L_17 = ((U3CU3Ec_tB863BCE9690BD07ADCB7EC7104291B12AEC27562_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB863BCE9690BD07ADCB7EC7104291B12AEC27562_il2cpp_TypeInfo_var))->get_U3CU3E9__18_2_3();
		Func_2_t0D121E24665C7C6EBDEE662FD349B058C314168D * L_18 = L_17;
		G_B8_0 = L_18;
		G_B8_1 = L_16;
		if (L_18)
		{
			G_B9_0 = L_18;
			G_B9_1 = L_16;
			goto IL_008f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB863BCE9690BD07ADCB7EC7104291B12AEC27562_il2cpp_TypeInfo_var);
		U3CU3Ec_tB863BCE9690BD07ADCB7EC7104291B12AEC27562 * L_19 = ((U3CU3Ec_tB863BCE9690BD07ADCB7EC7104291B12AEC27562_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB863BCE9690BD07ADCB7EC7104291B12AEC27562_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t0D121E24665C7C6EBDEE662FD349B058C314168D * L_20 = (Func_2_t0D121E24665C7C6EBDEE662FD349B058C314168D *)il2cpp_codegen_object_new(Func_2_t0D121E24665C7C6EBDEE662FD349B058C314168D_il2cpp_TypeInfo_var);
		Func_2__ctor_mBBC58743DEEE7E47F68AA3544FF0092BC5F79EC3(L_20, L_19, (intptr_t)((intptr_t)U3CU3Ec_U3CGetProviderU3Eb__18_2_m0EA4774C2078DCB7A9AFFEEC7D6CFC9F900D0B91_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mBBC58743DEEE7E47F68AA3544FF0092BC5F79EC3_RuntimeMethod_var);
		Func_2_t0D121E24665C7C6EBDEE662FD349B058C314168D * L_21 = L_20;
		((U3CU3Ec_tB863BCE9690BD07ADCB7EC7104291B12AEC27562_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB863BCE9690BD07ADCB7EC7104291B12AEC27562_il2cpp_TypeInfo_var))->set_U3CU3E9__18_2_3(L_21);
		G_B9_0 = L_21;
		G_B9_1 = G_B8_1;
	}

IL_008f:
	{
		RuntimeObject* L_22;
		L_22 = Enumerable_FirstOrDefault_TisIEyeTrackingProvider_t04D6D65DC709128E4BE6CCF69F52197434C02F73_m6A2990A123D1A2AA3557FE683206B00DE9F054AB(G_B9_1, G_B9_0, /*hidden argument*/Enumerable_FirstOrDefault_TisIEyeTrackingProvider_t04D6D65DC709128E4BE6CCF69F52197434C02F73_m6A2990A123D1A2AA3557FE683206B00DE9F054AB_RuntimeMethod_var);
		// return providerResult;
		return L_22;
	}
}
// Tobii.XR.IEyeTrackingProvider Tobii.XR.TobiiXR_Settings::GetProviderFrom(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TobiiXR_Settings_GetProviderFrom_m38E09C04C3FB68D785BFDEDEEDAC1FF2BF7E8ED7 (Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEyeTrackingProvider_t04D6D65DC709128E4BE6CCF69F52197434C02F73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// if (type == null) return null;
		Type_t * L_0 = ___type0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_0, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		// if (type == null) return null;
		return (RuntimeObject*)NULL;
	}

IL_000b:
	{
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		// return Activator.CreateInstance(type) as IEyeTrackingProvider;
		Type_t * L_2 = ___type0;
		RuntimeObject * L_3;
		L_3 = Activator_CreateInstance_m1BACAB5F4FBF138CCCB537DDCB0683A2AC064295(L_2, /*hidden argument*/NULL);
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, IEyeTrackingProvider_t04D6D65DC709128E4BE6CCF69F52197434C02F73_il2cpp_TypeInfo_var));
		goto IL_001f;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001a;
		}
		throw e;
	}

CATCH_001a:
	{ // begin catch(System.Exception)
		// catch (Exception) { }
		// catch (Exception) { }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_001d;
	} // end catch (depth: 1)

IL_001d:
	{
		// return null;
		return (RuntimeObject*)NULL;
	}

IL_001f:
	{
		// }
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// System.Void Tobii.XR.TobiiXR_Settings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TobiiXR_Settings__ctor_m34440F34C01DB5F95ED866FDA368A63ED9487400 (TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HTCProvider_tA77301FB31503866101DB7CD5651306DB6B8096E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5F2125A910D0551B1D0A871848A833DA8EF773C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2D0945B0A5D9457CD045D4DB2DACB55D6727F9A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t047270E2141D972A607E0D91E0E16FD0FFFC2D07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseProvider_t7EFE808926569FDFC3E250262D425765658431A4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoseDirectionProvider_t390567955750C154B13CD90437312E9A6EF7859B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PicoXRProvider_tEB058C77E2E229098595476B6E58AEE27077D2C8_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TobiiProvider_tD45A100799E1CF76E55DBE531F3B1D064727C6AB_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<ProviderElement> StandaloneEyeTrackingProviders = new List<ProviderElement>
		// {
		//     ProviderElement.FromProviderType(typeof(HTCProvider)),
		//     ProviderElement.FromProviderType(typeof(TobiiProvider)),
		//     ProviderElement.FromProviderType(typeof(NoseDirectionProvider)),
		//     ProviderElement.FromProviderType(typeof(MouseProvider)),
		// };
		List_1_t047270E2141D972A607E0D91E0E16FD0FFFC2D07 * L_0 = (List_1_t047270E2141D972A607E0D91E0E16FD0FFFC2D07 *)il2cpp_codegen_object_new(List_1_t047270E2141D972A607E0D91E0E16FD0FFFC2D07_il2cpp_TypeInfo_var);
		List_1__ctor_m2D0945B0A5D9457CD045D4DB2DACB55D6727F9A2(L_0, /*hidden argument*/List_1__ctor_m2D0945B0A5D9457CD045D4DB2DACB55D6727F9A2_RuntimeMethod_var);
		List_1_t047270E2141D972A607E0D91E0E16FD0FFFC2D07 * L_1 = L_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (HTCProvider_tA77301FB31503866101DB7CD5651306DB6B8096E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_2, /*hidden argument*/NULL);
		ProviderElement_t76AE55D58DAD3043AE5CE90FE6B06F6C474697E9  L_4;
		L_4 = ProviderElement_FromProviderType_m2D998802F34D2E0B3801C5713BC0950F3AB726E7(L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		List_1_Add_m5F2125A910D0551B1D0A871848A833DA8EF773C6(L_1, L_4, /*hidden argument*/List_1_Add_m5F2125A910D0551B1D0A871848A833DA8EF773C6_RuntimeMethod_var);
		List_1_t047270E2141D972A607E0D91E0E16FD0FFFC2D07 * L_5 = L_1;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_6 = { reinterpret_cast<intptr_t> (TobiiProvider_tD45A100799E1CF76E55DBE531F3B1D064727C6AB_0_0_0_var) };
		Type_t * L_7;
		L_7 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_6, /*hidden argument*/NULL);
		ProviderElement_t76AE55D58DAD3043AE5CE90FE6B06F6C474697E9  L_8;
		L_8 = ProviderElement_FromProviderType_m2D998802F34D2E0B3801C5713BC0950F3AB726E7(L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		List_1_Add_m5F2125A910D0551B1D0A871848A833DA8EF773C6(L_5, L_8, /*hidden argument*/List_1_Add_m5F2125A910D0551B1D0A871848A833DA8EF773C6_RuntimeMethod_var);
		List_1_t047270E2141D972A607E0D91E0E16FD0FFFC2D07 * L_9 = L_5;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_10 = { reinterpret_cast<intptr_t> (NoseDirectionProvider_t390567955750C154B13CD90437312E9A6EF7859B_0_0_0_var) };
		Type_t * L_11;
		L_11 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_10, /*hidden argument*/NULL);
		ProviderElement_t76AE55D58DAD3043AE5CE90FE6B06F6C474697E9  L_12;
		L_12 = ProviderElement_FromProviderType_m2D998802F34D2E0B3801C5713BC0950F3AB726E7(L_11, /*hidden argument*/NULL);
		NullCheck(L_9);
		List_1_Add_m5F2125A910D0551B1D0A871848A833DA8EF773C6(L_9, L_12, /*hidden argument*/List_1_Add_m5F2125A910D0551B1D0A871848A833DA8EF773C6_RuntimeMethod_var);
		List_1_t047270E2141D972A607E0D91E0E16FD0FFFC2D07 * L_13 = L_9;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_14 = { reinterpret_cast<intptr_t> (MouseProvider_t7EFE808926569FDFC3E250262D425765658431A4_0_0_0_var) };
		Type_t * L_15;
		L_15 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_14, /*hidden argument*/NULL);
		ProviderElement_t76AE55D58DAD3043AE5CE90FE6B06F6C474697E9  L_16;
		L_16 = ProviderElement_FromProviderType_m2D998802F34D2E0B3801C5713BC0950F3AB726E7(L_15, /*hidden argument*/NULL);
		NullCheck(L_13);
		List_1_Add_m5F2125A910D0551B1D0A871848A833DA8EF773C6(L_13, L_16, /*hidden argument*/List_1_Add_m5F2125A910D0551B1D0A871848A833DA8EF773C6_RuntimeMethod_var);
		__this->set_StandaloneEyeTrackingProviders_4(L_13);
		// public List<ProviderElement> AndroidEyeTrackingProviders = new List<ProviderElement>
		// {
		//     ProviderElement.FromProviderType(typeof(TobiiProvider)),
		//     ProviderElement.FromProviderType(typeof(PicoXRProvider)),
		//     ProviderElement.FromProviderType(typeof(NoseDirectionProvider)),
		//     ProviderElement.FromProviderType(typeof(MouseProvider)),
		// };
		List_1_t047270E2141D972A607E0D91E0E16FD0FFFC2D07 * L_17 = (List_1_t047270E2141D972A607E0D91E0E16FD0FFFC2D07 *)il2cpp_codegen_object_new(List_1_t047270E2141D972A607E0D91E0E16FD0FFFC2D07_il2cpp_TypeInfo_var);
		List_1__ctor_m2D0945B0A5D9457CD045D4DB2DACB55D6727F9A2(L_17, /*hidden argument*/List_1__ctor_m2D0945B0A5D9457CD045D4DB2DACB55D6727F9A2_RuntimeMethod_var);
		List_1_t047270E2141D972A607E0D91E0E16FD0FFFC2D07 * L_18 = L_17;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_19 = { reinterpret_cast<intptr_t> (TobiiProvider_tD45A100799E1CF76E55DBE531F3B1D064727C6AB_0_0_0_var) };
		Type_t * L_20;
		L_20 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_19, /*hidden argument*/NULL);
		ProviderElement_t76AE55D58DAD3043AE5CE90FE6B06F6C474697E9  L_21;
		L_21 = ProviderElement_FromProviderType_m2D998802F34D2E0B3801C5713BC0950F3AB726E7(L_20, /*hidden argument*/NULL);
		NullCheck(L_18);
		List_1_Add_m5F2125A910D0551B1D0A871848A833DA8EF773C6(L_18, L_21, /*hidden argument*/List_1_Add_m5F2125A910D0551B1D0A871848A833DA8EF773C6_RuntimeMethod_var);
		List_1_t047270E2141D972A607E0D91E0E16FD0FFFC2D07 * L_22 = L_18;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_23 = { reinterpret_cast<intptr_t> (PicoXRProvider_tEB058C77E2E229098595476B6E58AEE27077D2C8_0_0_0_var) };
		Type_t * L_24;
		L_24 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_23, /*hidden argument*/NULL);
		ProviderElement_t76AE55D58DAD3043AE5CE90FE6B06F6C474697E9  L_25;
		L_25 = ProviderElement_FromProviderType_m2D998802F34D2E0B3801C5713BC0950F3AB726E7(L_24, /*hidden argument*/NULL);
		NullCheck(L_22);
		List_1_Add_m5F2125A910D0551B1D0A871848A833DA8EF773C6(L_22, L_25, /*hidden argument*/List_1_Add_m5F2125A910D0551B1D0A871848A833DA8EF773C6_RuntimeMethod_var);
		List_1_t047270E2141D972A607E0D91E0E16FD0FFFC2D07 * L_26 = L_22;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_27 = { reinterpret_cast<intptr_t> (NoseDirectionProvider_t390567955750C154B13CD90437312E9A6EF7859B_0_0_0_var) };
		Type_t * L_28;
		L_28 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_27, /*hidden argument*/NULL);
		ProviderElement_t76AE55D58DAD3043AE5CE90FE6B06F6C474697E9  L_29;
		L_29 = ProviderElement_FromProviderType_m2D998802F34D2E0B3801C5713BC0950F3AB726E7(L_28, /*hidden argument*/NULL);
		NullCheck(L_26);
		List_1_Add_m5F2125A910D0551B1D0A871848A833DA8EF773C6(L_26, L_29, /*hidden argument*/List_1_Add_m5F2125A910D0551B1D0A871848A833DA8EF773C6_RuntimeMethod_var);
		List_1_t047270E2141D972A607E0D91E0E16FD0FFFC2D07 * L_30 = L_26;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_31 = { reinterpret_cast<intptr_t> (MouseProvider_t7EFE808926569FDFC3E250262D425765658431A4_0_0_0_var) };
		Type_t * L_32;
		L_32 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_31, /*hidden argument*/NULL);
		ProviderElement_t76AE55D58DAD3043AE5CE90FE6B06F6C474697E9  L_33;
		L_33 = ProviderElement_FromProviderType_m2D998802F34D2E0B3801C5713BC0950F3AB726E7(L_32, /*hidden argument*/NULL);
		NullCheck(L_30);
		List_1_Add_m5F2125A910D0551B1D0A871848A833DA8EF773C6(L_30, L_33, /*hidden argument*/List_1_Add_m5F2125A910D0551B1D0A871848A833DA8EF773C6_RuntimeMethod_var);
		__this->set_AndroidEyeTrackingProviders_5(L_30);
		// public LayerMask LayerMask = G2OM_Description.DefaultLayerMask;
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_34;
		L_34 = LayerMask_op_Implicit_mC7EE32122D2A4786D3C00B93E41604B71BF1397C((-1), /*hidden argument*/NULL);
		__this->set_LayerMask_6(L_34);
		// public float HowLongToKeepCandidatesInSeconds = G2OM_Description.DefaultCandidateMemoryInSeconds;
		__this->set_HowLongToKeepCandidatesInSeconds_7((1.0f));
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Tobii.XR.TobiiXR_Settings::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TobiiXR_Settings__cctor_m7CCBCE822A9A021A25E1666FBA05F9FAAF68CDD4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly RuntimePlatform _platform = Application.platform;
		int32_t L_0;
		L_0 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		((TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0_StaticFields*)il2cpp_codegen_static_fields_for(TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0_il2cpp_TypeInfo_var))->set__platform_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Tobii.XR.UIButtonEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIButtonEvent__ctor_mB08326F417481FDC04FE370FC90AE7DF7F997EAE (UIButtonEvent_t6ACDD055C471804447D38E6EA0D042A57A243B1A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mFEC498EC5642F0C80769E4D2E08EA2E3E4D3D0EB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mFEC498EC5642F0C80769E4D2E08EA2E3E4D3D0EB(__this, /*hidden argument*/UnityEvent_1__ctor_mFEC498EC5642F0C80769E4D2E08EA2E3E4D3D0EB_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Tobii.XR.UIGazeButtonGraphics::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGazeButtonGraphics_Awake_m67ED097BBDDCAFB140F434B0FC92397343EB85E6 (UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _buttonRect = _buttonImage.GetComponent<RectTransform>();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0 = __this->get__buttonImage_4();
		NullCheck(L_0);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_1;
		L_1 = Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79(L_0, /*hidden argument*/Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		__this->set__buttonRect_16(L_1);
		// _buttonDefaultColor = _buttonImage.color;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_2 = __this->get__buttonImage_4();
		NullCheck(L_2);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3;
		L_3 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_2);
		__this->set__buttonDefaultColor_17(L_3);
		// _labelDefaultColor = _label.color;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get__label_5();
		NullCheck(L_4);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5;
		L_5 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_4);
		__this->set__labelDefaultColor_18(L_5);
		// _buttonDefaultScale = _buttonRect.localScale;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_6 = __this->get__buttonRect_16();
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_6, /*hidden argument*/NULL);
		__this->set__buttonDefaultScale_19(L_7);
		// }
		return;
	}
}
// System.Void Tobii.XR.UIGazeButtonGraphics::AnimateButtonPress(Tobii.XR.ButtonState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGazeButtonGraphics_AnimateButtonPress_m707446E12689DB713E2F98282394D35084B287AF (UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3 * __this, int32_t ___currentButtonState0, const RuntimeMethod* method)
{
	{
		// if (_buttonAnimationCoroutine != null)
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_0 = __this->get__buttonAnimationCoroutine_20();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// StopCoroutine(_buttonAnimationCoroutine);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1 = __this->get__buttonAnimationCoroutine_20();
		MonoBehaviour_StopCoroutine_m5FF0476C9886FD8A3E6BA82BBE34B896CA279413(__this, L_1, /*hidden argument*/NULL);
	}

IL_0014:
	{
		// if (!isActiveAndEnabled) return;
		bool L_2;
		L_2 = Behaviour_get_isActiveAndEnabled_mDD843C0271D492C1E08E0F8DEE8B6F1CFA951BFA(__this, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		// if (!isActiveAndEnabled) return;
		return;
	}

IL_001d:
	{
		// _buttonAnimationCoroutine = StartCoroutine(AnimateButton(_buttonPressDuration, _buttonPressAnimationCurve, currentButtonState));
		float L_3 = __this->get__buttonPressDuration_14();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_4 = __this->get__buttonPressAnimationCurve_15();
		int32_t L_5 = ___currentButtonState0;
		RuntimeObject* L_6;
		L_6 = UIGazeButtonGraphics_AnimateButton_m5E29681D44675B2F3E59140D26CFBE2D2413EDF4(__this, L_3, L_4, L_5, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_7;
		L_7 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_6, /*hidden argument*/NULL);
		__this->set__buttonAnimationCoroutine_20(L_7);
		// }
		return;
	}
}
// System.Void Tobii.XR.UIGazeButtonGraphics::AnimateButtonVisualFeedback(Tobii.XR.ButtonState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGazeButtonGraphics_AnimateButtonVisualFeedback_mF6CAFB0B6894EAE85053866CCFBF6C5D42E03E7B (UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3 * __this, int32_t ___currentButtonState0, const RuntimeMethod* method)
{
	{
		// if (_buttonAnimationCoroutine != null)
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_0 = __this->get__buttonAnimationCoroutine_20();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// StopCoroutine(_buttonAnimationCoroutine);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1 = __this->get__buttonAnimationCoroutine_20();
		MonoBehaviour_StopCoroutine_m5FF0476C9886FD8A3E6BA82BBE34B896CA279413(__this, L_1, /*hidden argument*/NULL);
	}

IL_0014:
	{
		// if (!isActiveAndEnabled) return;
		bool L_2;
		L_2 = Behaviour_get_isActiveAndEnabled_mDD843C0271D492C1E08E0F8DEE8B6F1CFA951BFA(__this, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		// if (!isActiveAndEnabled) return;
		return;
	}

IL_001d:
	{
		// _buttonAnimationCoroutine = StartCoroutine(AnimateButton(_visualFeedbackDuration, _visualFeedbackAnimationCurve, currentButtonState));
		float L_3 = __this->get__visualFeedbackDuration_9();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_4 = __this->get__visualFeedbackAnimationCurve_10();
		int32_t L_5 = ___currentButtonState0;
		RuntimeObject* L_6;
		L_6 = UIGazeButtonGraphics_AnimateButton_m5E29681D44675B2F3E59140D26CFBE2D2413EDF4(__this, L_3, L_4, L_5, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_7;
		L_7 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_6, /*hidden argument*/NULL);
		__this->set__buttonAnimationCoroutine_20(L_7);
		// }
		return;
	}
}
// System.Collections.IEnumerator Tobii.XR.UIGazeButtonGraphics::AnimateButton(System.Single,UnityEngine.AnimationCurve,Tobii.XR.ButtonState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UIGazeButtonGraphics_AnimateButton_m5E29681D44675B2F3E59140D26CFBE2D2413EDF4 (UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3 * __this, float ___duration0, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___animationCurve1, int32_t ___currentButtonState2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAnimateButtonU3Ed__20_t206BE52250D8631429CA487BD86A828BD76754A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CAnimateButtonU3Ed__20_t206BE52250D8631429CA487BD86A828BD76754A6 * L_0 = (U3CAnimateButtonU3Ed__20_t206BE52250D8631429CA487BD86A828BD76754A6 *)il2cpp_codegen_object_new(U3CAnimateButtonU3Ed__20_t206BE52250D8631429CA487BD86A828BD76754A6_il2cpp_TypeInfo_var);
		U3CAnimateButtonU3Ed__20__ctor_m0F3C28678D03D04DBA71FDC8A852190538A8A52E(L_0, 0, /*hidden argument*/NULL);
		U3CAnimateButtonU3Ed__20_t206BE52250D8631429CA487BD86A828BD76754A6 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CAnimateButtonU3Ed__20_t206BE52250D8631429CA487BD86A828BD76754A6 * L_2 = L_1;
		float L_3 = ___duration0;
		NullCheck(L_2);
		L_2->set_duration_4(L_3);
		U3CAnimateButtonU3Ed__20_t206BE52250D8631429CA487BD86A828BD76754A6 * L_4 = L_2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_5 = ___animationCurve1;
		NullCheck(L_4);
		L_4->set_animationCurve_5(L_5);
		U3CAnimateButtonU3Ed__20_t206BE52250D8631429CA487BD86A828BD76754A6 * L_6 = L_4;
		int32_t L_7 = ___currentButtonState2;
		NullCheck(L_6);
		L_6->set_currentButtonState_3(L_7);
		return L_6;
	}
}
// System.Void Tobii.XR.UIGazeButtonGraphics::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGazeButtonGraphics__ctor_m135B148A687D9A83D193C71CBEA5B8D629343518 (UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3 * __this, const RuntimeMethod* method)
{
	{
		// private float _buttonFocusScale = 1.05f;
		__this->set__buttonFocusScale_8((1.04999995f));
		// private float _visualFeedbackDuration = 0.2f;
		__this->set__visualFeedbackDuration_9((0.200000003f));
		// private float _buttonScaleOnPress = 0.95f;
		__this->set__buttonScaleOnPress_13((0.949999988f));
		// private float _buttonPressDuration = 0.1f;
		__this->set__buttonPressDuration_14((0.100000001f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Tobii.XR.UIGazeCollider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGazeCollider__ctor_m1EC1CC3B5E91EEE5B42614BAF3C1E3DD12888B18 (UIGazeCollider_tCB961420BFA37C9B3316A58369CD5D55B214FB85 * __this, const RuntimeMethod* method)
{
	{
		// private bool _adjustToDepth = true;
		__this->set__adjustToDepth_6((bool)1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Tobii.XR.UIGazeSliderGraphics::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGazeSliderGraphics_Awake_m73AE49051182B463C6E1A23AFB45CB6B3F7445B3 (UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// _handleRect = _handleImage.GetComponent<RectTransform>();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0 = __this->get__handleImage_6();
		NullCheck(L_0);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_1;
		L_1 = Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79(L_0, /*hidden argument*/Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		__this->set__handleRect_21(L_1);
		// _sliderWidth = _backgroundImage.GetComponent<RectTransform>().rect.width;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_2 = __this->get__backgroundImage_4();
		NullCheck(L_2);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_3;
		L_3 = Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79(L_2, /*hidden argument*/Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		NullCheck(L_3);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_4;
		L_4 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		float L_5;
		L_5 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), /*hidden argument*/NULL);
		__this->set__sliderWidth_22(L_5);
		// _sliderRect = _backgroundImage.rectTransform;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_6 = __this->get__backgroundImage_4();
		NullCheck(L_6);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_7;
		L_7 = Graphic_get_rectTransform_m87D5A808474C6B71649CBB153DEBF5F268189EFF(L_6, /*hidden argument*/NULL);
		__this->set__sliderRect_23(L_7);
		// _backgroundDefaultColor = _backgroundImage.color;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8 = __this->get__backgroundImage_4();
		NullCheck(L_8);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_9;
		L_9 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_8);
		__this->set__backgroundDefaultColor_24(L_9);
		// _fillDefaultColor = _fillImage.color;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_10 = __this->get__fillImage_5();
		NullCheck(L_10);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_11;
		L_11 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_10);
		__this->set__fillDefaultColor_25(L_11);
		// _handleDefaultColor = _handleImage.color;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_12 = __this->get__handleImage_6();
		NullCheck(L_12);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_13;
		L_13 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_12);
		__this->set__handleDefaultColor_26(L_13);
		// _labelDefaultColor = _label.color;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_14 = __this->get__label_8();
		NullCheck(L_14);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_15;
		L_15 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_14);
		__this->set__labelDefaultColor_27(L_15);
		// _defaultHandleScale = _handleRect.localScale;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_16 = __this->get__handleRect_21();
		NullCheck(L_16);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_16, /*hidden argument*/NULL);
		__this->set__defaultHandleScale_28(L_17);
		// _defaultSliderScale = _sliderRect.localScale;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_18 = __this->get__sliderRect_23();
		NullCheck(L_18);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_18, /*hidden argument*/NULL);
		__this->set__defaultSliderScale_29(L_19);
		// }
		return;
	}
}
// System.Void Tobii.XR.UIGazeSliderGraphics::SetFillAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGazeSliderGraphics_SetFillAmount_m2267EFADA619E564314254EBD039EF5749AEECA4 (UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * __this, float ___amount0, const RuntimeMethod* method)
{
	{
		// _fillImage.fillAmount = amount;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0 = __this->get__fillImage_5();
		float L_1 = ___amount0;
		NullCheck(L_0);
		Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C(L_0, L_1, /*hidden argument*/NULL);
		// UpdateHandlePosition();
		UIGazeSliderGraphics_UpdateHandlePosition_m83A3AE5EC18F99EE50FAE36827045272AA57C051(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Tobii.XR.UIGazeSliderGraphics::UpdateValueText(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGazeSliderGraphics_UpdateValueText_m4E15273691EEB69BE31038F64DB35DD7FB2F895B (UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD60316EE3ADB7B16A998DF8AE0D68C293F6622E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// _valueText.text = value.ToString("F" + NumberOfDecimals);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get__valueText_7();
		V_0 = 0;
		String_t* L_1;
		L_1 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralFD60316EE3ADB7B16A998DF8AE0D68C293F6622E, L_1, /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = Int32_ToString_m5398ED0B6625B75CAF70C63B3CF2CE47D3C1B184((int32_t*)(&___value0), L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		// }
		return;
	}
}
// System.Void Tobii.XR.UIGazeSliderGraphics::UpdateHandlePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGazeSliderGraphics_UpdateHandlePosition_m83A3AE5EC18F99EE50FAE36827045272AA57C051 (UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var handlePosition = _handleImage.transform.localPosition;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0 = __this->get__handleImage_6();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// handlePosition.x = -_sliderWidth / 2f + _fillImage.fillAmount * _sliderWidth;
		float L_3 = __this->get__sliderWidth_22();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get__fillImage_5();
		NullCheck(L_4);
		float L_5;
		L_5 = Image_get_fillAmount_mA6F275C1167931E2F166EA85058EF181D8008B09_inline(L_4, /*hidden argument*/NULL);
		float L_6 = __this->get__sliderWidth_22();
		(&V_0)->set_x_2(((float)il2cpp_codegen_add((float)((float)((float)((-L_3))/(float)(2.0f))), (float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_6)))));
		// _handleImage.transform.localPosition = handlePosition;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_7 = __this->get__handleImage_6();
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_7, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_0;
		NullCheck(L_8);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_8, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Tobii.XR.UIGazeSliderGraphics::StartHandleAnimation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGazeSliderGraphics_StartHandleAnimation_m2617B55EDFACDDB0E39607A1E50633872EBA38BA (UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * __this, bool ___isTouching0, const RuntimeMethod* method)
{
	{
		// if (_handleAnimationCoroutine != null)
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_0 = __this->get__handleAnimationCoroutine_20();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// StopCoroutine(_handleAnimationCoroutine);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1 = __this->get__handleAnimationCoroutine_20();
		MonoBehaviour_StopCoroutine_m5FF0476C9886FD8A3E6BA82BBE34B896CA279413(__this, L_1, /*hidden argument*/NULL);
	}

IL_0014:
	{
		// _handleAnimationCoroutine = StartCoroutine(AnimateHandle(isTouching));
		bool L_2 = ___isTouching0;
		RuntimeObject* L_3;
		L_3 = UIGazeSliderGraphics_AnimateHandle_m9B66C931B10AE5E7E78D1021AAB30A8E1EC1837A(__this, L_2, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_4;
		L_4 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_3, /*hidden argument*/NULL);
		__this->set__handleAnimationCoroutine_20(L_4);
		// }
		return;
	}
}
// System.Void Tobii.XR.UIGazeSliderGraphics::StartVisualFeedbackAnimation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGazeSliderGraphics_StartVisualFeedbackAnimation_mE1D2D8EE687238FEBF3671FC5E6528665EF210BE (UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * __this, bool ___hasFocus0, const RuntimeMethod* method)
{
	{
		// if (_visualFeedbackCoroutine != null)
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_0 = __this->get__visualFeedbackCoroutine_19();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// StopCoroutine(_visualFeedbackCoroutine);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1 = __this->get__visualFeedbackCoroutine_19();
		MonoBehaviour_StopCoroutine_m5FF0476C9886FD8A3E6BA82BBE34B896CA279413(__this, L_1, /*hidden argument*/NULL);
	}

IL_0014:
	{
		// _visualFeedbackCoroutine = StartCoroutine(AnimateVisualFeedback(hasFocus));
		bool L_2 = ___hasFocus0;
		RuntimeObject* L_3;
		L_3 = UIGazeSliderGraphics_AnimateVisualFeedback_mB143A22ECFB8EB18529009755185B9578E4CC1AF(__this, L_2, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_4;
		L_4 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_3, /*hidden argument*/NULL);
		__this->set__visualFeedbackCoroutine_19(L_4);
		// }
		return;
	}
}
// System.Collections.IEnumerator Tobii.XR.UIGazeSliderGraphics::AnimateVisualFeedback(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UIGazeSliderGraphics_AnimateVisualFeedback_mB143A22ECFB8EB18529009755185B9578E4CC1AF (UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * __this, bool ___hasFocus0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAnimateVisualFeedbackU3Ed__32_tAE9021EC3BD7C7D1730454554D4D341065B43175_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CAnimateVisualFeedbackU3Ed__32_tAE9021EC3BD7C7D1730454554D4D341065B43175 * L_0 = (U3CAnimateVisualFeedbackU3Ed__32_tAE9021EC3BD7C7D1730454554D4D341065B43175 *)il2cpp_codegen_object_new(U3CAnimateVisualFeedbackU3Ed__32_tAE9021EC3BD7C7D1730454554D4D341065B43175_il2cpp_TypeInfo_var);
		U3CAnimateVisualFeedbackU3Ed__32__ctor_m84F0C2C4B55FBA800F70A40F223235F5C4FC3A0A(L_0, 0, /*hidden argument*/NULL);
		U3CAnimateVisualFeedbackU3Ed__32_tAE9021EC3BD7C7D1730454554D4D341065B43175 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CAnimateVisualFeedbackU3Ed__32_tAE9021EC3BD7C7D1730454554D4D341065B43175 * L_2 = L_1;
		bool L_3 = ___hasFocus0;
		NullCheck(L_2);
		L_2->set_hasFocus_3(L_3);
		return L_2;
	}
}
// System.Collections.IEnumerator Tobii.XR.UIGazeSliderGraphics::AnimateHandle(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UIGazeSliderGraphics_AnimateHandle_m9B66C931B10AE5E7E78D1021AAB30A8E1EC1837A (UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * __this, bool ___hasFocus0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAnimateHandleU3Ed__33_t25309B59592FBF6C583EA1A1A89E51814130219F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CAnimateHandleU3Ed__33_t25309B59592FBF6C583EA1A1A89E51814130219F * L_0 = (U3CAnimateHandleU3Ed__33_t25309B59592FBF6C583EA1A1A89E51814130219F *)il2cpp_codegen_object_new(U3CAnimateHandleU3Ed__33_t25309B59592FBF6C583EA1A1A89E51814130219F_il2cpp_TypeInfo_var);
		U3CAnimateHandleU3Ed__33__ctor_mC2DBA88FBC4CD02EEB845387943B57AFDFDC6D3C(L_0, 0, /*hidden argument*/NULL);
		U3CAnimateHandleU3Ed__33_t25309B59592FBF6C583EA1A1A89E51814130219F * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CAnimateHandleU3Ed__33_t25309B59592FBF6C583EA1A1A89E51814130219F * L_2 = L_1;
		bool L_3 = ___hasFocus0;
		NullCheck(L_2);
		L_2->set_hasFocus_3(L_3);
		return L_2;
	}
}
// System.Void Tobii.XR.UIGazeSliderGraphics::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGazeSliderGraphics__ctor_mBF03F47E62E4B5A08FAFC4FC5181B712A698AFA5 (UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * __this, const RuntimeMethod* method)
{
	{
		// private float _sliderFocusScale = 1.03f;
		__this->set__sliderFocusScale_12((1.02999997f));
		// private float _visualFeedbackDuration = 0.2f;
		__this->set__visualFeedbackDuration_13((0.200000003f));
		// private float _handleAnimationDuration = 0.1f;
		__this->set__handleAnimationDuration_16((0.100000001f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Tobii.XR.UIGazeToggleButtonGraphics::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGazeToggleButtonGraphics_Awake_mCB8A63F87BACFA17563F97E563D37A28340A8789 (UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * __this, const RuntimeMethod* method)
{
	{
		// if (!_initialized)
		bool L_0 = __this->get__initialized_29();
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Initialize();
		UIGazeToggleButtonGraphics_Initialize_mDD2998A63D7EA4F88DE78CE9DB34B1F30303E70C(__this, /*hidden argument*/NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void Tobii.XR.UIGazeToggleButtonGraphics::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGazeToggleButtonGraphics_Initialize_mDD2998A63D7EA4F88DE78CE9DB34B1F30303E70C (UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _knobTransform = _knobImage.GetComponent<RectTransform>();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0 = __this->get__knobImage_8();
		NullCheck(L_0);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_1;
		L_1 = Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79(L_0, /*hidden argument*/Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		__this->set__knobTransform_24(L_1);
		// _knobDefaultScale = _knobTransform.localScale;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_2 = __this->get__knobTransform_24();
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_2, /*hidden argument*/NULL);
		__this->set__knobDefaultScale_25(L_3);
		// _buttonDefaultScale = _buttonTransform.localScale;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_4 = __this->get__buttonTransform_4();
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_4, /*hidden argument*/NULL);
		__this->set__buttonDefaultScale_26(L_5);
		// _initialized = true;
		__this->set__initialized_29((bool)1);
		// }
		return;
	}
}
// System.Void Tobii.XR.UIGazeToggleButtonGraphics::StartKnobAnimation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGazeToggleButtonGraphics_StartKnobAnimation_m93884528628AAFA7F2C75DB45D4AE8513DD9A930 (UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * __this, bool ___isToggledOn0, const RuntimeMethod* method)
{
	{
		// if (!_initialized)
		bool L_0 = __this->get__initialized_29();
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Initialize();
		UIGazeToggleButtonGraphics_Initialize_mDD2998A63D7EA4F88DE78CE9DB34B1F30303E70C(__this, /*hidden argument*/NULL);
	}

IL_000e:
	{
		// if (_knobMovementCoroutine != null)
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1 = __this->get__knobMovementCoroutine_28();
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// StopCoroutine(_knobMovementCoroutine);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_2 = __this->get__knobMovementCoroutine_28();
		MonoBehaviour_StopCoroutine_m5FF0476C9886FD8A3E6BA82BBE34B896CA279413(__this, L_2, /*hidden argument*/NULL);
	}

IL_0022:
	{
		// _knobMovementCoroutine = StartCoroutine(MoveKnob(isToggledOn));
		bool L_3 = ___isToggledOn0;
		RuntimeObject* L_4;
		L_4 = UIGazeToggleButtonGraphics_MoveKnob_mD6D3FA882DBF5DFC6C4496CDD35CBFE404786FF6(__this, L_3, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_5;
		L_5 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_4, /*hidden argument*/NULL);
		__this->set__knobMovementCoroutine_28(L_5);
		// }
		return;
	}
}
// System.Void Tobii.XR.UIGazeToggleButtonGraphics::StartVisualFeedbackAnimation(System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGazeToggleButtonGraphics_StartVisualFeedbackAnimation_mC9D119CEFD1A933CB90D66F43403B6F90235A8EB (UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * __this, bool ___hasFocus0, bool ___isToggledOn1, bool ___isButtonPressed2, const RuntimeMethod* method)
{
	{
		// if (!_initialized)
		bool L_0 = __this->get__initialized_29();
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Initialize();
		UIGazeToggleButtonGraphics_Initialize_mDD2998A63D7EA4F88DE78CE9DB34B1F30303E70C(__this, /*hidden argument*/NULL);
	}

IL_000e:
	{
		// if (_visualFeedbackCoroutine != null)
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1 = __this->get__visualFeedbackCoroutine_27();
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// StopCoroutine(_visualFeedbackCoroutine);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_2 = __this->get__visualFeedbackCoroutine_27();
		MonoBehaviour_StopCoroutine_m5FF0476C9886FD8A3E6BA82BBE34B896CA279413(__this, L_2, /*hidden argument*/NULL);
	}

IL_0022:
	{
		// _visualFeedbackCoroutine = StartCoroutine(AnimateVisualFeedback(hasFocus, isToggledOn, isButtonPressed));
		bool L_3 = ___hasFocus0;
		bool L_4 = ___isToggledOn1;
		bool L_5 = ___isButtonPressed2;
		RuntimeObject* L_6;
		L_6 = UIGazeToggleButtonGraphics_AnimateVisualFeedback_m18140194EE610C84C1366EF9B61B48C9315B22BC(__this, L_3, L_4, L_5, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_7;
		L_7 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_6, /*hidden argument*/NULL);
		__this->set__visualFeedbackCoroutine_27(L_7);
		// }
		return;
	}
}
// System.Collections.IEnumerator Tobii.XR.UIGazeToggleButtonGraphics::AnimateVisualFeedback(System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UIGazeToggleButtonGraphics_AnimateVisualFeedback_m18140194EE610C84C1366EF9B61B48C9315B22BC (UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * __this, bool ___hasFocus0, bool ___isToggledOn1, bool ___isButtonPressed2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAnimateVisualFeedbackU3Ed__31_t07D3E601DC366CDB016FA37DE08D53A461AB2E7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CAnimateVisualFeedbackU3Ed__31_t07D3E601DC366CDB016FA37DE08D53A461AB2E7E * L_0 = (U3CAnimateVisualFeedbackU3Ed__31_t07D3E601DC366CDB016FA37DE08D53A461AB2E7E *)il2cpp_codegen_object_new(U3CAnimateVisualFeedbackU3Ed__31_t07D3E601DC366CDB016FA37DE08D53A461AB2E7E_il2cpp_TypeInfo_var);
		U3CAnimateVisualFeedbackU3Ed__31__ctor_m3558178848775E69F07F3B7C332FBA6C4082B949(L_0, 0, /*hidden argument*/NULL);
		U3CAnimateVisualFeedbackU3Ed__31_t07D3E601DC366CDB016FA37DE08D53A461AB2E7E * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CAnimateVisualFeedbackU3Ed__31_t07D3E601DC366CDB016FA37DE08D53A461AB2E7E * L_2 = L_1;
		bool L_3 = ___hasFocus0;
		NullCheck(L_2);
		L_2->set_hasFocus_3(L_3);
		U3CAnimateVisualFeedbackU3Ed__31_t07D3E601DC366CDB016FA37DE08D53A461AB2E7E * L_4 = L_2;
		bool L_5 = ___isToggledOn1;
		NullCheck(L_4);
		L_4->set_isToggledOn_4(L_5);
		U3CAnimateVisualFeedbackU3Ed__31_t07D3E601DC366CDB016FA37DE08D53A461AB2E7E * L_6 = L_4;
		bool L_7 = ___isButtonPressed2;
		NullCheck(L_6);
		L_6->set_isButtonPressed_5(L_7);
		return L_6;
	}
}
// Tobii.XR.UIGazeToggleButtonGraphics/VisualStateColors Tobii.XR.UIGazeToggleButtonGraphics::GetStateColors(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualStateColors_t977B626B553DECF2FCA446AB601620C118B1EDA9  UIGazeToggleButtonGraphics_GetStateColors_mCF8EFF01F31BA249B5C881A2DFAA6AB44393DB03 (UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * __this, bool ___isToggledOn0, bool ___isButtonPressed1, const RuntimeMethod* method)
{
	{
		// if (isButtonPressed)
		bool L_0 = ___isButtonPressed1;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return _pressedDownColors;
		VisualStateColors_t977B626B553DECF2FCA446AB601620C118B1EDA9  L_1 = __this->get__pressedDownColors_17();
		return L_1;
	}

IL_000a:
	{
		// else if (isToggledOn)
		bool L_2 = ___isToggledOn0;
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		// return _toggledOnColors;
		VisualStateColors_t977B626B553DECF2FCA446AB601620C118B1EDA9  L_3 = __this->get__toggledOnColors_16();
		return L_3;
	}

IL_0014:
	{
		// return _toggledOffColors;
		VisualStateColors_t977B626B553DECF2FCA446AB601620C118B1EDA9  L_4 = __this->get__toggledOffColors_15();
		return L_4;
	}
}
// System.Collections.IEnumerator Tobii.XR.UIGazeToggleButtonGraphics::MoveKnob(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UIGazeToggleButtonGraphics_MoveKnob_mD6D3FA882DBF5DFC6C4496CDD35CBFE404786FF6 (UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * __this, bool ___isToggledOn0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CMoveKnobU3Ed__33_tE58824844149E1E88D502B3178B56C9A60997966_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CMoveKnobU3Ed__33_tE58824844149E1E88D502B3178B56C9A60997966 * L_0 = (U3CMoveKnobU3Ed__33_tE58824844149E1E88D502B3178B56C9A60997966 *)il2cpp_codegen_object_new(U3CMoveKnobU3Ed__33_tE58824844149E1E88D502B3178B56C9A60997966_il2cpp_TypeInfo_var);
		U3CMoveKnobU3Ed__33__ctor_mDFB617F7BA66952FFCB6B3DBDD16373DBEBE6F31(L_0, 0, /*hidden argument*/NULL);
		U3CMoveKnobU3Ed__33_tE58824844149E1E88D502B3178B56C9A60997966 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CMoveKnobU3Ed__33_tE58824844149E1E88D502B3178B56C9A60997966 * L_2 = L_1;
		bool L_3 = ___isToggledOn0;
		NullCheck(L_2);
		L_2->set_isToggledOn_3(L_3);
		return L_2;
	}
}
// System.Void Tobii.XR.UIGazeToggleButtonGraphics::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGazeToggleButtonGraphics__ctor_m8F94F2E64899D4E5397DB1C6F026DFCA935B43A0 (UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * __this, const RuntimeMethod* method)
{
	{
		// private float _buttonFocusScale = 1.05f;
		__this->set__buttonFocusScale_18((1.04999995f));
		// private float _knobFocusScale = 1.1f;
		__this->set__knobFocusScale_19((1.10000002f));
		// private float _focusAnimationDuration = 0.2f;
		__this->set__focusAnimationDuration_20((0.200000003f));
		// private float _toggleAnimationDuration = 0.1f;
		__this->set__toggleAnimationDuration_22((0.100000001f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Tobii.XR.UIHighlightAtGaze::GazeFocusChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIHighlightAtGaze_GazeFocusChanged_m70068578E71D94C8C106D7E8F8765FDD40DECC52 (UIHighlightAtGaze_t8E5928A9329AA5E470E20EA5B93409A21EEC0EF6 * __this, bool ___hasFocus0, const RuntimeMethod* method)
{
	{
		// if (hasFocus)
		bool L_0 = ___hasFocus0;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		// _targetColor = HighlightColor;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1 = __this->get_HighlightColor_4();
		__this->set__targetColor_8(L_1);
		// }
		return;
	}

IL_0010:
	{
		// _targetColor = _originalColor;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2 = __this->get__originalColor_7();
		__this->set__targetColor_8(L_2);
		// }
		return;
	}
}
// System.Void Tobii.XR.UIHighlightAtGaze::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIHighlightAtGaze_Start_mF9D8AA5D04E5EBD4E4755402BEE25B200826E3C4 (UIHighlightAtGaze_t8E5928A9329AA5E470E20EA5B93409A21EEC0EF6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisGraphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_mC2B96FBBFDBEB7FC16A23436F3C7A3C2740CAAA1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _graphic = GetComponent<Graphic>();
		Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * L_0;
		L_0 = Component_GetComponent_TisGraphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_mC2B96FBBFDBEB7FC16A23436F3C7A3C2740CAAA1(__this, /*hidden argument*/Component_GetComponent_TisGraphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_mC2B96FBBFDBEB7FC16A23436F3C7A3C2740CAAA1_RuntimeMethod_var);
		__this->set__graphic_6(L_0);
		// _originalColor = _graphic.color;
		Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * L_1 = __this->get__graphic_6();
		NullCheck(L_1);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		L_2 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_1);
		__this->set__originalColor_7(L_2);
		// _targetColor = _originalColor;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3 = __this->get__originalColor_7();
		__this->set__targetColor_8(L_3);
		// }
		return;
	}
}
// System.Void Tobii.XR.UIHighlightAtGaze::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIHighlightAtGaze_Update_mE8E7E487B28D83E2FBE23E8F12418DE3D251BD76 (UIHighlightAtGaze_t8E5928A9329AA5E470E20EA5B93409A21EEC0EF6 * __this, const RuntimeMethod* method)
{
	{
		// _graphic.color = Color.Lerp(_graphic.color, _targetColor, Time.deltaTime * (1 / AnimationTime));
		Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * L_0 = __this->get__graphic_6();
		Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * L_1 = __this->get__graphic_6();
		NullCheck(L_1);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		L_2 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_1);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3 = __this->get__targetColor_8();
		float L_4;
		L_4 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_5 = __this->get_AnimationTime_5();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6;
		L_6 = Color_Lerp_mC986D7F29103536908D76BD8FC59AA11DC33C197(L_2, L_3, ((float)il2cpp_codegen_multiply((float)L_4, (float)((float)((float)(1.0f)/(float)L_5)))), /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_6);
		// }
		return;
	}
}
// System.Void Tobii.XR.UIHighlightAtGaze::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIHighlightAtGaze__ctor_m74A800DE4795A488618F6D08AFFC45AA2AE95450 (UIHighlightAtGaze_t8E5928A9329AA5E470E20EA5B93409A21EEC0EF6 * __this, const RuntimeMethod* method)
{
	{
		// public Color HighlightColor = Color.red;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		__this->set_HighlightColor_4(L_0);
		// public float AnimationTime = 0.1f;
		__this->set_AnimationTime_5((0.100000001f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Tobii.XR.UISliderEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISliderEvent__ctor_m350DD9A08910831DDCE3F16793B8F43C2133E5C8 (UISliderEvent_t36D445D0583DF9594EF697A1EE85A07EE10DA88D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2__ctor_mAC7F8CF59475A3EAD20EC4DB1FA8FBE86578E9BB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_2__ctor_mAC7F8CF59475A3EAD20EC4DB1FA8FBE86578E9BB(__this, /*hidden argument*/UnityEvent_2__ctor_mAC7F8CF59475A3EAD20EC4DB1FA8FBE86578E9BB_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Tobii.XR.UIToggleEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIToggleEvent__ctor_mE812914B131AF422EF11A3C9ACCA859B5FFF5DA5 (UIToggleEvent_t3025F2607AD11E28D3936621C944D224B4FCF15B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2__ctor_m15AD3364487BCDF358770B0A3394D4A6A151D60F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_2__ctor_m15AD3364487BCDF358770B0A3394D4A6A151D60F(__this, /*hidden argument*/UnityEvent_2__ctor_m15AD3364487BCDF358770B0A3394D4A6A151D60F_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Tobii.XR.UITouchpadGazeButton::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITouchpadGazeButton_Start_mB9B0831A8B088D2BB313E281F57951EA43A3BABB (UITouchpadGazeButton_t3A308EBB536DF4924AFB84B203E0048273DF092A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisUIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3_m4EA0B70811CC9A42F1C754D2F89EA074D0B35B2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIButtonEvent_t6ACDD055C471804447D38E6EA0D042A57A243B1A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _uiGazeButtonGraphics = GetComponent<UIGazeButtonGraphics>();
		UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3 * L_0;
		L_0 = Component_GetComponent_TisUIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3_m4EA0B70811CC9A42F1C754D2F89EA074D0B35B2E(__this, /*hidden argument*/Component_GetComponent_TisUIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3_m4EA0B70811CC9A42F1C754D2F89EA074D0B35B2E_RuntimeMethod_var);
		__this->set__uiGazeButtonGraphics_9(L_0);
		// if (OnButtonClicked == null)
		UIButtonEvent_t6ACDD055C471804447D38E6EA0D042A57A243B1A * L_1 = __this->get_OnButtonClicked_4();
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		// OnButtonClicked = new UIButtonEvent();
		UIButtonEvent_t6ACDD055C471804447D38E6EA0D042A57A243B1A * L_2 = (UIButtonEvent_t6ACDD055C471804447D38E6EA0D042A57A243B1A *)il2cpp_codegen_object_new(UIButtonEvent_t6ACDD055C471804447D38E6EA0D042A57A243B1A_il2cpp_TypeInfo_var);
		UIButtonEvent__ctor_mB08326F417481FDC04FE370FC90AE7DF7F997EAE(L_2, /*hidden argument*/NULL);
		__this->set_OnButtonClicked_4(L_2);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Tobii.XR.UITouchpadGazeButton::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITouchpadGazeButton_Update_m2E70DD4600E6A7F64ECD5808AA3A2AC07011BEE2 (UITouchpadGazeButton_t3A308EBB536DF4924AFB84B203E0048273DF092A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m2905EEB7C8C104A9BC6500F3BB559F14A86CB376_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UITouchpadGazeButton_t3A308EBB536DF4924AFB84B203E0048273DF092A * G_B9_0 = NULL;
	UITouchpadGazeButton_t3A308EBB536DF4924AFB84B203E0048273DF092A * G_B8_0 = NULL;
	int32_t G_B10_0 = 0;
	UITouchpadGazeButton_t3A308EBB536DF4924AFB84B203E0048273DF092A * G_B10_1 = NULL;
	{
		// if (_currentButtonState == ButtonState.Focused &&
		//     ControllerManager.Instance.GetButtonPressDown(TouchpadButton))
		int32_t L_0 = __this->get__currentButtonState_7();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C_il2cpp_TypeInfo_var);
		ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C * L_1;
		L_1 = ControllerManager_get_Instance_mCCB8E5F1F32355FE08FF4FA8586941951592A250(/*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = ControllerManager_GetButtonPressDown_mD85B5B10B50103C22823F47B178744810DAC4D4C(L_1, 1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// UpdateState(ButtonState.PressedDown);
		UITouchpadGazeButton_UpdateState_mC5C79B4A5C0D44DFCD80A81B21F1C4656AEDF2E8(__this, 2, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001e:
	{
		// else if (_currentButtonState == ButtonState.PressedDown &&
		//          ControllerManager.Instance.GetButtonPressUp(TouchpadButton))
		int32_t L_3 = __this->get__currentButtonState_7();
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_006e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C_il2cpp_TypeInfo_var);
		ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C * L_4;
		L_4 = ControllerManager_get_Instance_mCCB8E5F1F32355FE08FF4FA8586941951592A250(/*hidden argument*/NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = ControllerManager_GetButtonPressUp_m9287E156E57F4916F09C4B0745CE810DEB2E7383(L_4, 1, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_006e;
		}
	}
	{
		// if (OnButtonClicked != null)
		UIButtonEvent_t6ACDD055C471804447D38E6EA0D042A57A243B1A * L_6 = __this->get_OnButtonClicked_4();
		if (!L_6)
		{
			goto IL_004d;
		}
	}
	{
		// OnButtonClicked.Invoke(gameObject);
		UIButtonEvent_t6ACDD055C471804447D38E6EA0D042A57A243B1A * L_7 = __this->get_OnButtonClicked_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		UnityEvent_1_Invoke_m2905EEB7C8C104A9BC6500F3BB559F14A86CB376(L_7, L_8, /*hidden argument*/UnityEvent_1_Invoke_m2905EEB7C8C104A9BC6500F3BB559F14A86CB376_RuntimeMethod_var);
	}

IL_004d:
	{
		// ControllerManager.Instance.TriggerHapticPulse(HapticStrength);
		IL2CPP_RUNTIME_CLASS_INIT(ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C_il2cpp_TypeInfo_var);
		ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C * L_9;
		L_9 = ControllerManager_get_Instance_mCCB8E5F1F32355FE08FF4FA8586941951592A250(/*hidden argument*/NULL);
		NullCheck(L_9);
		ControllerManager_TriggerHapticPulse_m2F471DAC20A5A36BAFCE2D0F1952B6278E84EC69(L_9, (0.100000001f), /*hidden argument*/NULL);
		// UpdateState(_hasFocus ? ButtonState.Focused : ButtonState.Idle);
		bool L_10 = __this->get__hasFocus_8();
		G_B8_0 = __this;
		if (L_10)
		{
			G_B9_0 = __this;
			goto IL_0068;
		}
	}
	{
		G_B10_0 = 0;
		G_B10_1 = G_B8_0;
		goto IL_0069;
	}

IL_0068:
	{
		G_B10_0 = 1;
		G_B10_1 = G_B9_0;
	}

IL_0069:
	{
		NullCheck(G_B10_1);
		UITouchpadGazeButton_UpdateState_mC5C79B4A5C0D44DFCD80A81B21F1C4656AEDF2E8(G_B10_1, G_B10_0, /*hidden argument*/NULL);
	}

IL_006e:
	{
		// }
		return;
	}
}
// System.Void Tobii.XR.UITouchpadGazeButton::UpdateState(Tobii.XR.ButtonState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITouchpadGazeButton_UpdateState_mC5C79B4A5C0D44DFCD80A81B21F1C4656AEDF2E8 (UITouchpadGazeButton_t3A308EBB536DF4924AFB84B203E0048273DF092A * __this, int32_t ___newState0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	{
		// var oldState = _currentButtonState;
		int32_t L_0 = __this->get__currentButtonState_7();
		V_0 = L_0;
		// _currentButtonState = newState;
		int32_t L_1 = ___newState0;
		__this->set__currentButtonState_7(L_1);
		// var buttonPressed = newState == ButtonState.PressedDown;
		int32_t L_2 = ___newState0;
		// var buttonClicked = (oldState == ButtonState.PressedDown && newState == ButtonState.Focused);
		int32_t L_3 = V_0;
		G_B1_0 = ((((int32_t)L_2) == ((int32_t)2))? 1 : 0);
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			G_B2_0 = ((((int32_t)L_2) == ((int32_t)2))? 1 : 0);
			goto IL_001c;
		}
	}
	{
		int32_t L_4 = ___newState0;
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)1))? 1 : 0);
		G_B3_1 = G_B1_0;
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_001d:
	{
		V_1 = (bool)G_B3_0;
		// if (buttonPressed || buttonClicked)
		bool L_5 = V_1;
		if (!((int32_t)((int32_t)G_B3_1|(int32_t)L_5)))
		{
			goto IL_0034;
		}
	}
	{
		// _uiGazeButtonGraphics.AnimateButtonPress(_currentButtonState);
		UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3 * L_6 = __this->get__uiGazeButtonGraphics_9();
		int32_t L_7 = __this->get__currentButtonState_7();
		NullCheck(L_6);
		UIGazeButtonGraphics_AnimateButtonPress_m707446E12689DB713E2F98282394D35084B287AF(L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0034:
	{
		// _uiGazeButtonGraphics.AnimateButtonVisualFeedback(_currentButtonState);
		UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3 * L_8 = __this->get__uiGazeButtonGraphics_9();
		int32_t L_9 = __this->get__currentButtonState_7();
		NullCheck(L_8);
		UIGazeButtonGraphics_AnimateButtonVisualFeedback_mF6CAFB0B6894EAE85053866CCFBF6C5D42E03E7B(L_8, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Tobii.XR.UITouchpadGazeButton::GazeFocusChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITouchpadGazeButton_GazeFocusChanged_m004A6A1CE7F375755B0CE1C5D49FC697A2B1F29F (UITouchpadGazeButton_t3A308EBB536DF4924AFB84B203E0048273DF092A * __this, bool ___hasFocus0, const RuntimeMethod* method)
{
	UITouchpadGazeButton_t3A308EBB536DF4924AFB84B203E0048273DF092A * G_B4_0 = NULL;
	UITouchpadGazeButton_t3A308EBB536DF4924AFB84B203E0048273DF092A * G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	UITouchpadGazeButton_t3A308EBB536DF4924AFB84B203E0048273DF092A * G_B5_1 = NULL;
	{
		// if (!enabled) return;
		bool L_0;
		L_0 = Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!enabled) return;
		return;
	}

IL_0009:
	{
		// _hasFocus = hasFocus;
		bool L_1 = ___hasFocus0;
		__this->set__hasFocus_8(L_1);
		// UpdateState(hasFocus ? ButtonState.Focused : ButtonState.Idle);
		bool L_2 = ___hasFocus0;
		G_B3_0 = __this;
		if (L_2)
		{
			G_B4_0 = __this;
			goto IL_0017;
		}
	}
	{
		G_B5_0 = 0;
		G_B5_1 = G_B3_0;
		goto IL_0018;
	}

IL_0017:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
	}

IL_0018:
	{
		NullCheck(G_B5_1);
		UITouchpadGazeButton_UpdateState_mC5C79B4A5C0D44DFCD80A81B21F1C4656AEDF2E8(G_B5_1, G_B5_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Tobii.XR.UITouchpadGazeButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITouchpadGazeButton__ctor_mFF56C69CC6E2146CC8146E9AE1FDADDE81A4C9FA (UITouchpadGazeButton_t3A308EBB536DF4924AFB84B203E0048273DF092A * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Tobii.XR.UITouchpadGazeSlider::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UITouchpadGazeSlider_get_Value_mFDFE1A87B1824FC8F164F5209BB889944A1CC3D4 (UITouchpadGazeSlider_t92A4881810F3381D4454AD18E58E6D65F52AF7B3 * __this, const RuntimeMethod* method)
{
	{
		// get { return _value; }
		int32_t L_0 = __this->get__value_5();
		return L_0;
	}
}
// System.Void Tobii.XR.UITouchpadGazeSlider::set_Value(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITouchpadGazeSlider_set_Value_m9BAABF437005AF24AC069A18744721AA440F5DC0 (UITouchpadGazeSlider_t92A4881810F3381D4454AD18E58E6D65F52AF7B3 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_mB9C23C9CF956F0CCBE6C295112BC8F4C9A4EDA3B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Mathf.Approximately(value, _value)) return;
		int32_t L_0 = ___value0;
		int32_t L_1 = __this->get__value_5();
		bool L_2;
		L_2 = Mathf_Approximately_mC2A3F657E3FD0CCAD4A4936CEE2F67D624A2AA55(((float)((float)L_0)), ((float)((float)L_1)), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0011;
		}
	}
	{
		// if (Mathf.Approximately(value, _value)) return;
		return;
	}

IL_0011:
	{
		// _value = value;
		int32_t L_3 = ___value0;
		__this->set__value_5(L_3);
		// if (OnSliderValueChanged != null)
		UISliderEvent_t36D445D0583DF9594EF697A1EE85A07EE10DA88D * L_4 = __this->get_OnSliderValueChanged_4();
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// OnSliderValueChanged.Invoke(gameObject, value);
		UISliderEvent_t36D445D0583DF9594EF697A1EE85A07EE10DA88D * L_5 = __this->get_OnSliderValueChanged_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		int32_t L_7 = ___value0;
		NullCheck(L_5);
		UnityEvent_2_Invoke_mB9C23C9CF956F0CCBE6C295112BC8F4C9A4EDA3B(L_5, L_6, L_7, /*hidden argument*/UnityEvent_2_Invoke_mB9C23C9CF956F0CCBE6C295112BC8F4C9A4EDA3B_RuntimeMethod_var);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void Tobii.XR.UITouchpadGazeSlider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITouchpadGazeSlider_Start_mE8983000C0D068C327E34F1F17638E15B76C1626 (UITouchpadGazeSlider_t92A4881810F3381D4454AD18E58E6D65F52AF7B3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisUIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9_m05202FD41E43B29E57ECEDEAF05C4ABC1DDCB268_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UISliderEvent_t36D445D0583DF9594EF697A1EE85A07EE10DA88D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _sliderGraphics = GetComponent<UIGazeSliderGraphics>();
		UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * L_0;
		L_0 = Component_GetComponent_TisUIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9_m05202FD41E43B29E57ECEDEAF05C4ABC1DDCB268(__this, /*hidden argument*/Component_GetComponent_TisUIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9_m05202FD41E43B29E57ECEDEAF05C4ABC1DDCB268_RuntimeMethod_var);
		__this->set__sliderGraphics_19(L_0);
		// if (OnSliderValueChanged == null)
		UISliderEvent_t36D445D0583DF9594EF697A1EE85A07EE10DA88D * L_1 = __this->get_OnSliderValueChanged_4();
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		// OnSliderValueChanged = new UISliderEvent();
		UISliderEvent_t36D445D0583DF9594EF697A1EE85A07EE10DA88D * L_2 = (UISliderEvent_t36D445D0583DF9594EF697A1EE85A07EE10DA88D *)il2cpp_codegen_object_new(UISliderEvent_t36D445D0583DF9594EF697A1EE85A07EE10DA88D_il2cpp_TypeInfo_var);
		UISliderEvent__ctor_m350DD9A08910831DDCE3F16793B8F43C2133E5C8(L_2, /*hidden argument*/NULL);
		__this->set_OnSliderValueChanged_4(L_2);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Tobii.XR.UITouchpadGazeSlider::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITouchpadGazeSlider_Update_mB8B829E9CD5249FCEC5910C38F7FD13549F1D100 (UITouchpadGazeSlider_t92A4881810F3381D4454AD18E58E6D65F52AF7B3 * __this, const RuntimeMethod* method)
{
	{
		// if (SliderValueOutsideBounds()) return;
		bool L_0;
		L_0 = UITouchpadGazeSlider_SliderValueOutsideBounds_mD044709BF737A0168FE78C2577F0E69CE693AB6A(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (SliderValueOutsideBounds()) return;
		return;
	}

IL_0009:
	{
		// if (!_hasFocus) return;
		bool L_1 = __this->get__hasFocus_12();
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		// if (!_hasFocus) return;
		return;
	}

IL_0012:
	{
		// HandleInput();
		UITouchpadGazeSlider_HandleInput_m9E3385FB3D7ACD7F9AAFE04CAA1BE6EE13420DCE(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Tobii.XR.UITouchpadGazeSlider::HandleInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITouchpadGazeSlider_HandleInput_m9E3385FB3D7ACD7F9AAFE04CAA1BE6EE13420DCE (UITouchpadGazeSlider_t92A4881810F3381D4454AD18E58E6D65F52AF7B3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ControllerManager.Instance.GetButtonTouchDown(TouchpadButton))
		IL2CPP_RUNTIME_CLASS_INIT(ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C_il2cpp_TypeInfo_var);
		ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C * L_0;
		L_0 = ControllerManager_get_Instance_mCCB8E5F1F32355FE08FF4FA8586941951592A250(/*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ControllerManager_GetButtonTouchDown_mF7460B8AEEA3969CB1E99E60E8A02048CD1EE293(L_0, 1, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		// _padXLastFrame = ControllerManager.Instance.GetTouchpadAxis().x;
		IL2CPP_RUNTIME_CLASS_INIT(ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C_il2cpp_TypeInfo_var);
		ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C * L_2;
		L_2 = ControllerManager_get_Instance_mCCB8E5F1F32355FE08FF4FA8586941951592A250(/*hidden argument*/NULL);
		NullCheck(L_2);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = ControllerManager_GetTouchpadAxis_mD50B8BC58333173201DFA3D348F97A37FC87B51F(L_2, /*hidden argument*/NULL);
		float L_4 = L_3.get_x_0();
		__this->set__padXLastFrame_14(L_4);
		// _sliderGraphics.StartHandleAnimation(true);
		UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * L_5 = __this->get__sliderGraphics_19();
		NullCheck(L_5);
		UIGazeSliderGraphics_StartHandleAnimation_m2617B55EDFACDDB0E39607A1E50633872EBA38BA(L_5, (bool)1, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_002f:
	{
		// if (ControllerManager.Instance.GetButtonTouch(TouchpadButton))
		IL2CPP_RUNTIME_CLASS_INIT(ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C_il2cpp_TypeInfo_var);
		ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C * L_6;
		L_6 = ControllerManager_get_Instance_mCCB8E5F1F32355FE08FF4FA8586941951592A250(/*hidden argument*/NULL);
		NullCheck(L_6);
		bool L_7;
		L_7 = ControllerManager_GetButtonTouch_m71CC30DD933DF6CB3A28AFD7A50AF70E42E4CD98(L_6, 1, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0042;
		}
	}
	{
		// UpdateSlider();
		UITouchpadGazeSlider_UpdateSlider_mCD0C91944362F9EA461E5DE503B1C7D7F0FFA64E(__this, /*hidden argument*/NULL);
	}

IL_0042:
	{
		// if (ControllerManager.Instance.GetButtonTouchUp(TouchpadButton))
		IL2CPP_RUNTIME_CLASS_INIT(ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C_il2cpp_TypeInfo_var);
		ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C * L_8;
		L_8 = ControllerManager_get_Instance_mCCB8E5F1F32355FE08FF4FA8586941951592A250(/*hidden argument*/NULL);
		NullCheck(L_8);
		bool L_9;
		L_9 = ControllerManager_GetButtonTouchUp_mAF322FB64A563FB59BA9CE77F271E3CF87D526BC(L_8, 1, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_005b;
		}
	}
	{
		// _sliderGraphics.StartHandleAnimation(false);
		UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * L_10 = __this->get__sliderGraphics_19();
		NullCheck(L_10);
		UIGazeSliderGraphics_StartHandleAnimation_m2617B55EDFACDDB0E39607A1E50633872EBA38BA(L_10, (bool)0, /*hidden argument*/NULL);
	}

IL_005b:
	{
		// }
		return;
	}
}
// System.Void Tobii.XR.UITouchpadGazeSlider::UpdateSlider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITouchpadGazeSlider_UpdateSlider_mCD0C91944362F9EA461E5DE503B1C7D7F0FFA64E (UITouchpadGazeSlider_t92A4881810F3381D4454AD18E58E6D65F52AF7B3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// var padXCurrentFrame = ControllerManager.Instance.GetTouchpadAxis().x;
		IL2CPP_RUNTIME_CLASS_INIT(ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C_il2cpp_TypeInfo_var);
		ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C * L_0;
		L_0 = ControllerManager_get_Instance_mCCB8E5F1F32355FE08FF4FA8586941951592A250(/*hidden argument*/NULL);
		NullCheck(L_0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = ControllerManager_GetTouchpadAxis_mD50B8BC58333173201DFA3D348F97A37FC87B51F(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_x_0();
		V_0 = L_2;
		// var padXDelta = padXCurrentFrame - _padXLastFrame;
		float L_3 = V_0;
		float L_4 = __this->get__padXLastFrame_14();
		V_1 = ((float)il2cpp_codegen_subtract((float)L_3, (float)L_4));
		// _incrementedMoveAmount += padXDelta * MultiplierToMatchTouchpadMovement * _touchPadMultiplier;
		float L_5 = __this->get__incrementedMoveAmount_17();
		float L_6 = V_1;
		float L_7 = __this->get__touchPadMultiplier_6();
		__this->set__incrementedMoveAmount_17(((float)il2cpp_codegen_add((float)L_5, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_6, (float)(0.5f))), (float)L_7)))));
		// if (TryingToSlideOutsideOfScope())
		bool L_8;
		L_8 = UITouchpadGazeSlider_TryingToSlideOutsideOfScope_mD2F0CA17C52760660652CAF866DBADB201EA0EBC(__this, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_004f;
		}
	}
	{
		// _incrementedMoveAmount = 0;
		__this->set__incrementedMoveAmount_17((0.0f));
		// _padXLastFrame = padXCurrentFrame;
		float L_9 = V_0;
		__this->set__padXLastFrame_14(L_9);
		// return;
		return;
	}

IL_004f:
	{
		// _sizePerStep = 1f / (_maxValue - _minValue);
		int32_t L_10 = __this->get__maxValue_8();
		int32_t L_11 = __this->get__minValue_7();
		__this->set__sizePerStep_18(((float)((float)(1.0f)/(float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)L_11)))))));
		// if (Mathf.Abs(_incrementedMoveAmount) > _sizePerStep)
		float L_12 = __this->get__incrementedMoveAmount_17();
		float L_13;
		L_13 = fabsf(L_12);
		float L_14 = __this->get__sizePerStep_18();
		if ((!(((float)L_13) > ((float)L_14))))
		{
			goto IL_00d8;
		}
	}
	{
		// _stepsToMove = (int) (_incrementedMoveAmount / _sizePerStep);
		float L_15 = __this->get__incrementedMoveAmount_17();
		float L_16 = __this->get__sizePerStep_18();
		__this->set__stepsToMove_16(il2cpp_codegen_cast_double_to_int<int32_t>(((float)((float)L_15/(float)L_16))));
		// _incrementedMoveAmount = 0;
		__this->set__incrementedMoveAmount_17((0.0f));
		// _currentStep = Mathf.Clamp(_currentStep + _stepsToMove, 0, _maxValue - _minValue);
		int32_t L_17 = __this->get__currentStep_15();
		int32_t L_18 = __this->get__stepsToMove_16();
		int32_t L_19 = __this->get__maxValue_8();
		int32_t L_20 = __this->get__minValue_7();
		int32_t L_21;
		L_21 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)L_18)), 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)L_20)), /*hidden argument*/NULL);
		__this->set__currentStep_15(L_21);
		// _stepsToMove = 0;
		__this->set__stepsToMove_16(0);
		// ControllerManager.Instance.TriggerHapticPulse(_hapticStrength);
		IL2CPP_RUNTIME_CLASS_INIT(ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C_il2cpp_TypeInfo_var);
		ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C * L_22;
		L_22 = ControllerManager_get_Instance_mCCB8E5F1F32355FE08FF4FA8586941951592A250(/*hidden argument*/NULL);
		float L_23 = __this->get__hapticStrength_9();
		NullCheck(L_22);
		ControllerManager_TriggerHapticPulse_m2F471DAC20A5A36BAFCE2D0F1952B6278E84EC69(L_22, L_23, /*hidden argument*/NULL);
	}

IL_00d8:
	{
		// _sliderFillAmount = _currentStep * _sizePerStep;
		int32_t L_24 = __this->get__currentStep_15();
		float L_25 = __this->get__sizePerStep_18();
		__this->set__sliderFillAmount_20(((float)il2cpp_codegen_multiply((float)((float)((float)L_24)), (float)L_25)));
		// _sliderGraphics.SetFillAmount(_sliderFillAmount);
		UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * L_26 = __this->get__sliderGraphics_19();
		float L_27 = __this->get__sliderFillAmount_20();
		NullCheck(L_26);
		UIGazeSliderGraphics_SetFillAmount_m2267EFADA619E564314254EBD039EF5749AEECA4(L_26, L_27, /*hidden argument*/NULL);
		// Value = (int) Mathf.Lerp(_minValue, _maxValue, _sliderFillAmount);
		int32_t L_28 = __this->get__minValue_7();
		int32_t L_29 = __this->get__maxValue_8();
		float L_30 = __this->get__sliderFillAmount_20();
		float L_31;
		L_31 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(((float)((float)L_28)), ((float)((float)L_29)), L_30, /*hidden argument*/NULL);
		UITouchpadGazeSlider_set_Value_m9BAABF437005AF24AC069A18744721AA440F5DC0(__this, il2cpp_codegen_cast_double_to_int<int32_t>(L_31), /*hidden argument*/NULL);
		// _sliderGraphics.UpdateValueText(Value);
		UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * L_32 = __this->get__sliderGraphics_19();
		int32_t L_33;
		L_33 = UITouchpadGazeSlider_get_Value_mFDFE1A87B1824FC8F164F5209BB889944A1CC3D4_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_32);
		UIGazeSliderGraphics_UpdateValueText_m4E15273691EEB69BE31038F64DB35DD7FB2F895B(L_32, L_33, /*hidden argument*/NULL);
		// _padXLastFrame = padXCurrentFrame;
		float L_34 = V_0;
		__this->set__padXLastFrame_14(L_34);
		// }
		return;
	}
}
// System.Boolean Tobii.XR.UITouchpadGazeSlider::TryingToSlideOutsideOfScope()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UITouchpadGazeSlider_TryingToSlideOutsideOfScope_mD2F0CA17C52760660652CAF866DBADB201EA0EBC (UITouchpadGazeSlider_t92A4881810F3381D4454AD18E58E6D65F52AF7B3 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// var movingRight = 0 < _incrementedMoveAmount;
		float L_0 = __this->get__incrementedMoveAmount_17();
		// var endOfSlider = _currentStep == _maxValue - _minValue;
		int32_t L_1 = __this->get__currentStep_15();
		int32_t L_2 = __this->get__maxValue_8();
		int32_t L_3 = __this->get__minValue_7();
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_3))))? 1 : 0);
		// var movingLeft = _incrementedMoveAmount < 0;
		float L_4 = __this->get__incrementedMoveAmount_17();
		V_1 = (bool)((((float)L_4) < ((float)(0.0f)))? 1 : 0);
		// var beginningOfSlider = _currentStep == 0;
		int32_t L_5 = __this->get__currentStep_15();
		V_2 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		// return (movingRight && endOfSlider) || (movingLeft && beginningOfSlider);
		bool L_6 = V_0;
		if (((int32_t)((int32_t)((((float)(0.0f)) < ((float)L_0))? 1 : 0)&(int32_t)L_6)))
		{
			goto IL_0043;
		}
	}
	{
		bool L_7 = V_1;
		bool L_8 = V_2;
		return (bool)((int32_t)((int32_t)L_7&(int32_t)L_8));
	}

IL_0043:
	{
		return (bool)1;
	}
}
// System.Boolean Tobii.XR.UITouchpadGazeSlider::SliderValueOutsideBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UITouchpadGazeSlider_SliderValueOutsideBounds_mD044709BF737A0168FE78C2577F0E69CE693AB6A (UITouchpadGazeSlider_t92A4881810F3381D4454AD18E58E6D65F52AF7B3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3550D924947D14C05AF4029FAE8CAF702E26DBCB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_maxValue <= _minValue)
		int32_t L_0 = __this->get__maxValue_8();
		int32_t L_1 = __this->get__minValue_7();
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0059;
		}
	}
	{
		// if (!_debugHasBeenLogged)
		bool L_2 = __this->get__debugHasBeenLogged_13();
		if (L_2)
		{
			goto IL_0057;
		}
	}
	{
		// Debug.LogErrorFormat("{0}'s maximum value ({1}) has to be bigger that the minimum value ({2})",
		//     gameObject.name, _maxValue, _minValue);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_4;
		int32_t L_8 = __this->get__maxValue_8();
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_10);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = L_7;
		int32_t L_12 = __this->get__minValue_7();
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_14);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_mDBF43684A22EAAB187285C9B4174C9555DB11E83(_stringLiteral3550D924947D14C05AF4029FAE8CAF702E26DBCB, L_11, /*hidden argument*/NULL);
		// _debugHasBeenLogged = true;
		__this->set__debugHasBeenLogged_13((bool)1);
	}

IL_0057:
	{
		// return true;
		return (bool)1;
	}

IL_0059:
	{
		// _debugHasBeenLogged = false;
		__this->set__debugHasBeenLogged_13((bool)0);
		// return false;
		return (bool)0;
	}
}
// System.Void Tobii.XR.UITouchpadGazeSlider::GazeFocusChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITouchpadGazeSlider_GazeFocusChanged_m519FDB42BDED543D8D008020927BCF6A0187765E (UITouchpadGazeSlider_t92A4881810F3381D4454AD18E58E6D65F52AF7B3 * __this, bool ___hasFocus0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!enabled) return;
		bool L_0;
		L_0 = Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!enabled) return;
		return;
	}

IL_0009:
	{
		// _hasFocus = hasFocus;
		bool L_1 = ___hasFocus0;
		__this->set__hasFocus_12(L_1);
		// if (hasFocus)
		bool L_2 = ___hasFocus0;
		if (!L_2)
		{
			goto IL_0043;
		}
	}
	{
		// _padXLastFrame = ControllerManager.Instance.GetTouchpadAxis().x;
		IL2CPP_RUNTIME_CLASS_INIT(ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C_il2cpp_TypeInfo_var);
		ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C * L_3;
		L_3 = ControllerManager_get_Instance_mCCB8E5F1F32355FE08FF4FA8586941951592A250(/*hidden argument*/NULL);
		NullCheck(L_3);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = ControllerManager_GetTouchpadAxis_mD50B8BC58333173201DFA3D348F97A37FC87B51F(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_x_0();
		__this->set__padXLastFrame_14(L_5);
		// if (ControllerManager.Instance.GetButtonTouch(TouchpadButton))
		ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C * L_6;
		L_6 = ControllerManager_get_Instance_mCCB8E5F1F32355FE08FF4FA8586941951592A250(/*hidden argument*/NULL);
		NullCheck(L_6);
		bool L_7;
		L_7 = ControllerManager_GetButtonTouch_m71CC30DD933DF6CB3A28AFD7A50AF70E42E4CD98(L_6, 1, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_004f;
		}
	}
	{
		// _sliderGraphics.StartHandleAnimation(true);
		UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * L_8 = __this->get__sliderGraphics_19();
		NullCheck(L_8);
		UIGazeSliderGraphics_StartHandleAnimation_m2617B55EDFACDDB0E39607A1E50633872EBA38BA(L_8, (bool)1, /*hidden argument*/NULL);
		// }
		goto IL_004f;
	}

IL_0043:
	{
		// _sliderGraphics.StartHandleAnimation(false);
		UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * L_9 = __this->get__sliderGraphics_19();
		NullCheck(L_9);
		UIGazeSliderGraphics_StartHandleAnimation_m2617B55EDFACDDB0E39607A1E50633872EBA38BA(L_9, (bool)0, /*hidden argument*/NULL);
	}

IL_004f:
	{
		// _sliderGraphics.StartVisualFeedbackAnimation(hasFocus);
		UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * L_10 = __this->get__sliderGraphics_19();
		bool L_11 = ___hasFocus0;
		NullCheck(L_10);
		UIGazeSliderGraphics_StartVisualFeedbackAnimation_mE1D2D8EE687238FEBF3671FC5E6528665EF210BE(L_10, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Tobii.XR.UITouchpadGazeSlider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITouchpadGazeSlider__ctor_mB5FA5B1DE0EF96A4CA2717E42C9A44908A5E31DA (UITouchpadGazeSlider_t92A4881810F3381D4454AD18E58E6D65F52AF7B3 * __this, const RuntimeMethod* method)
{
	{
		// private float _touchPadMultiplier = 1f;
		__this->set__touchPadMultiplier_6((1.0f));
		// private int _maxValue = 1;
		__this->set__maxValue_8(1);
		// private float _hapticStrength = 0.05f;
		__this->set__hapticStrength_9((0.0500000007f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Tobii.XR.UITouchpadGazeToggleButton::get_IsToggledOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UITouchpadGazeToggleButton_get_IsToggledOn_m6D62BD2CF17D699D7DAD8852D0626DBFE2CFED57 (UITouchpadGazeToggleButton_t47CD31E42D965D1D0A084EF01FA40A171AB3FC31 * __this, const RuntimeMethod* method)
{
	{
		// get { return _isToggledOn; }
		bool L_0 = __this->get__isToggledOn_5();
		return L_0;
	}
}
// System.Void Tobii.XR.UITouchpadGazeToggleButton::set_IsToggledOn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITouchpadGazeToggleButton_set_IsToggledOn_mB2456A049EBBF5EDE7255EDE5EB9BBCA29412F1B (UITouchpadGazeToggleButton_t47CD31E42D965D1D0A084EF01FA40A171AB3FC31 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_m3CA0A236B3D5729DADE146B720B9B52DA0B07D6D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value == IsToggledOn) return;
		bool L_0 = ___value0;
		bool L_1;
		L_1 = UITouchpadGazeToggleButton_get_IsToggledOn_m6D62BD2CF17D699D7DAD8852D0626DBFE2CFED57_inline(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		// if (value == IsToggledOn) return;
		return;
	}

IL_000a:
	{
		// _isToggledOn = value;
		bool L_2 = ___value0;
		__this->set__isToggledOn_5(L_2);
		// if (OnButtonToggled != null)
		UIToggleEvent_t3025F2607AD11E28D3936621C944D224B4FCF15B * L_3 = __this->get_OnButtonToggled_4();
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		// OnButtonToggled.Invoke(gameObject, value);
		UIToggleEvent_t3025F2607AD11E28D3936621C944D224B4FCF15B * L_4 = __this->get_OnButtonToggled_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		bool L_6 = ___value0;
		NullCheck(L_4);
		UnityEvent_2_Invoke_m3CA0A236B3D5729DADE146B720B9B52DA0B07D6D(L_4, L_5, L_6, /*hidden argument*/UnityEvent_2_Invoke_m3CA0A236B3D5729DADE146B720B9B52DA0B07D6D_RuntimeMethod_var);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void Tobii.XR.UITouchpadGazeToggleButton::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITouchpadGazeToggleButton_Awake_m88A0CAB69FE76F779B7CB44DF4DF48CADDB92F72 (UITouchpadGazeToggleButton_t47CD31E42D965D1D0A084EF01FA40A171AB3FC31 * __this, const RuntimeMethod* method)
{
	{
		// if (!_initialized)
		bool L_0 = __this->get__initialized_10();
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Initialize();
		UITouchpadGazeToggleButton_Initialize_mDBE77A19D7FC92595302F47670692F5C8D75A4D7(__this, /*hidden argument*/NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void Tobii.XR.UITouchpadGazeToggleButton::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITouchpadGazeToggleButton_Update_m24B556C826AE206F52B1B0049E6B838B78C0860D (UITouchpadGazeToggleButton_t47CD31E42D965D1D0A084EF01FA40A171AB3FC31 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ControllerManager.Instance.GetButtonPressDown(ControllerButton.Touchpad) && _hasFocus)
		IL2CPP_RUNTIME_CLASS_INIT(ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C_il2cpp_TypeInfo_var);
		ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C * L_0;
		L_0 = ControllerManager_get_Instance_mCCB8E5F1F32355FE08FF4FA8586941951592A250(/*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ControllerManager_GetButtonPressDown_mD85B5B10B50103C22823F47B178744810DAC4D4C(L_0, 1, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		bool L_2 = __this->get__hasFocus_7();
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// OnPressedDown();
		UITouchpadGazeToggleButton_OnPressedDown_m23546930BC2E7D0259CC4E71701A1446F3FDE5BC(__this, /*hidden argument*/NULL);
	}

IL_001b:
	{
		// if (ControllerManager.Instance.GetButtonPressUp(ControllerButton.Touchpad) && _buttonPressed)
		IL2CPP_RUNTIME_CLASS_INIT(ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C_il2cpp_TypeInfo_var);
		ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C * L_3;
		L_3 = ControllerManager_get_Instance_mCCB8E5F1F32355FE08FF4FA8586941951592A250(/*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = ControllerManager_GetButtonPressUp_m9287E156E57F4916F09C4B0745CE810DEB2E7383(L_3, 1, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		bool L_5 = __this->get__buttonPressed_8();
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		// Toggle();
		UITouchpadGazeToggleButton_Toggle_m777CC2AC1F687E6E09448BEE18B2CD5A67022ADB(__this, /*hidden argument*/NULL);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void Tobii.XR.UITouchpadGazeToggleButton::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITouchpadGazeToggleButton_Initialize_mDBE77A19D7FC92595302F47670692F5C8D75A4D7 (UITouchpadGazeToggleButton_t47CD31E42D965D1D0A084EF01FA40A171AB3FC31 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisUIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59_mF5A28883054A0C0B04D6E5B827C2389852E41FBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIToggleEvent_t3025F2607AD11E28D3936621C944D224B4FCF15B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _uiGazeToggleButtonGraphics = GetComponent<UIGazeToggleButtonGraphics>();
		UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * L_0;
		L_0 = Component_GetComponent_TisUIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59_mF5A28883054A0C0B04D6E5B827C2389852E41FBF(__this, /*hidden argument*/Component_GetComponent_TisUIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59_mF5A28883054A0C0B04D6E5B827C2389852E41FBF_RuntimeMethod_var);
		__this->set__uiGazeToggleButtonGraphics_9(L_0);
		// if (OnButtonToggled == null)
		UIToggleEvent_t3025F2607AD11E28D3936621C944D224B4FCF15B * L_1 = __this->get_OnButtonToggled_4();
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		// OnButtonToggled = new UIToggleEvent();
		UIToggleEvent_t3025F2607AD11E28D3936621C944D224B4FCF15B * L_2 = (UIToggleEvent_t3025F2607AD11E28D3936621C944D224B4FCF15B *)il2cpp_codegen_object_new(UIToggleEvent_t3025F2607AD11E28D3936621C944D224B4FCF15B_il2cpp_TypeInfo_var);
		UIToggleEvent__ctor_mE812914B131AF422EF11A3C9ACCA859B5FFF5DA5(L_2, /*hidden argument*/NULL);
		__this->set_OnButtonToggled_4(L_2);
	}

IL_001f:
	{
		// _initialized = true;
		__this->set__initialized_10((bool)1);
		// }
		return;
	}
}
// System.Void Tobii.XR.UITouchpadGazeToggleButton::OnPressedDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITouchpadGazeToggleButton_OnPressedDown_m23546930BC2E7D0259CC4E71701A1446F3FDE5BC (UITouchpadGazeToggleButton_t47CD31E42D965D1D0A084EF01FA40A171AB3FC31 * __this, const RuntimeMethod* method)
{
	{
		// _buttonPressed = true;
		__this->set__buttonPressed_8((bool)1);
		// _uiGazeToggleButtonGraphics.StartVisualFeedbackAnimation(_hasFocus, IsToggledOn, _buttonPressed);
		UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * L_0 = __this->get__uiGazeToggleButtonGraphics_9();
		bool L_1 = __this->get__hasFocus_7();
		bool L_2;
		L_2 = UITouchpadGazeToggleButton_get_IsToggledOn_m6D62BD2CF17D699D7DAD8852D0626DBFE2CFED57_inline(__this, /*hidden argument*/NULL);
		bool L_3 = __this->get__buttonPressed_8();
		NullCheck(L_0);
		UIGazeToggleButtonGraphics_StartVisualFeedbackAnimation_mC9D119CEFD1A933CB90D66F43403B6F90235A8EB(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Tobii.XR.UITouchpadGazeToggleButton::Toggle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITouchpadGazeToggleButton_Toggle_m777CC2AC1F687E6E09448BEE18B2CD5A67022ADB (UITouchpadGazeToggleButton_t47CD31E42D965D1D0A084EF01FA40A171AB3FC31 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!_initialized)
		bool L_0 = __this->get__initialized_10();
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Initialize();
		UITouchpadGazeToggleButton_Initialize_mDBE77A19D7FC92595302F47670692F5C8D75A4D7(__this, /*hidden argument*/NULL);
	}

IL_000e:
	{
		// _buttonPressed = false;
		__this->set__buttonPressed_8((bool)0);
		// IsToggledOn = !IsToggledOn;
		bool L_1;
		L_1 = UITouchpadGazeToggleButton_get_IsToggledOn_m6D62BD2CF17D699D7DAD8852D0626DBFE2CFED57_inline(__this, /*hidden argument*/NULL);
		UITouchpadGazeToggleButton_set_IsToggledOn_mB2456A049EBBF5EDE7255EDE5EB9BBCA29412F1B(__this, (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		// ControllerManager.Instance.TriggerHapticPulse(HapticStrength);
		IL2CPP_RUNTIME_CLASS_INIT(ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C_il2cpp_TypeInfo_var);
		ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C * L_2;
		L_2 = ControllerManager_get_Instance_mCCB8E5F1F32355FE08FF4FA8586941951592A250(/*hidden argument*/NULL);
		NullCheck(L_2);
		ControllerManager_TriggerHapticPulse_m2F471DAC20A5A36BAFCE2D0F1952B6278E84EC69(L_2, (0.100000001f), /*hidden argument*/NULL);
		// _uiGazeToggleButtonGraphics.StartVisualFeedbackAnimation(_hasFocus, IsToggledOn, _buttonPressed);
		UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * L_3 = __this->get__uiGazeToggleButtonGraphics_9();
		bool L_4 = __this->get__hasFocus_7();
		bool L_5;
		L_5 = UITouchpadGazeToggleButton_get_IsToggledOn_m6D62BD2CF17D699D7DAD8852D0626DBFE2CFED57_inline(__this, /*hidden argument*/NULL);
		bool L_6 = __this->get__buttonPressed_8();
		NullCheck(L_3);
		UIGazeToggleButtonGraphics_StartVisualFeedbackAnimation_mC9D119CEFD1A933CB90D66F43403B6F90235A8EB(L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		// _uiGazeToggleButtonGraphics.StartKnobAnimation(IsToggledOn);
		UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * L_7 = __this->get__uiGazeToggleButtonGraphics_9();
		bool L_8;
		L_8 = UITouchpadGazeToggleButton_get_IsToggledOn_m6D62BD2CF17D699D7DAD8852D0626DBFE2CFED57_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		UIGazeToggleButtonGraphics_StartKnobAnimation_m93884528628AAFA7F2C75DB45D4AE8513DD9A930(L_7, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Tobii.XR.UITouchpadGazeToggleButton::ToggleOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITouchpadGazeToggleButton_ToggleOff_m3D2B621F11CBDFC3ED58D4738EDD0CB9A8D94101 (UITouchpadGazeToggleButton_t47CD31E42D965D1D0A084EF01FA40A171AB3FC31 * __this, const RuntimeMethod* method)
{
	{
		// if (!IsToggledOn) return;
		bool L_0;
		L_0 = UITouchpadGazeToggleButton_get_IsToggledOn_m6D62BD2CF17D699D7DAD8852D0626DBFE2CFED57_inline(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!IsToggledOn) return;
		return;
	}

IL_0009:
	{
		// Toggle();
		UITouchpadGazeToggleButton_Toggle_m777CC2AC1F687E6E09448BEE18B2CD5A67022ADB(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Tobii.XR.UITouchpadGazeToggleButton::ToggleOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITouchpadGazeToggleButton_ToggleOn_m3893A46B66E6D65544166F45821BBA300D953708 (UITouchpadGazeToggleButton_t47CD31E42D965D1D0A084EF01FA40A171AB3FC31 * __this, const RuntimeMethod* method)
{
	{
		// if (IsToggledOn) return;
		bool L_0;
		L_0 = UITouchpadGazeToggleButton_get_IsToggledOn_m6D62BD2CF17D699D7DAD8852D0626DBFE2CFED57_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (IsToggledOn) return;
		return;
	}

IL_0009:
	{
		// Toggle();
		UITouchpadGazeToggleButton_Toggle_m777CC2AC1F687E6E09448BEE18B2CD5A67022ADB(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Tobii.XR.UITouchpadGazeToggleButton::GazeFocusChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITouchpadGazeToggleButton_GazeFocusChanged_mBE6C59B333FEA127EFE6CEBC34EF5856B7B69931 (UITouchpadGazeToggleButton_t47CD31E42D965D1D0A084EF01FA40A171AB3FC31 * __this, bool ___hasFocus0, const RuntimeMethod* method)
{
	{
		// if (!enabled) return;
		bool L_0;
		L_0 = Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!enabled) return;
		return;
	}

IL_0009:
	{
		// _hasFocus = hasFocus;
		bool L_1 = ___hasFocus0;
		__this->set__hasFocus_7(L_1);
		// if (_buttonPressed && !hasFocus)
		bool L_2 = __this->get__buttonPressed_8();
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		bool L_3 = ___hasFocus0;
		if (L_3)
		{
			goto IL_0022;
		}
	}
	{
		// _buttonPressed = false;
		__this->set__buttonPressed_8((bool)0);
	}

IL_0022:
	{
		// _uiGazeToggleButtonGraphics.StartVisualFeedbackAnimation(_hasFocus, IsToggledOn, _buttonPressed);
		UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * L_4 = __this->get__uiGazeToggleButtonGraphics_9();
		bool L_5 = __this->get__hasFocus_7();
		bool L_6;
		L_6 = UITouchpadGazeToggleButton_get_IsToggledOn_m6D62BD2CF17D699D7DAD8852D0626DBFE2CFED57_inline(__this, /*hidden argument*/NULL);
		bool L_7 = __this->get__buttonPressed_8();
		NullCheck(L_4);
		UIGazeToggleButtonGraphics_StartVisualFeedbackAnimation_mC9D119CEFD1A933CB90D66F43403B6F90235A8EB(L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Tobii.XR.UITouchpadGazeToggleButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITouchpadGazeToggleButton__ctor_mFCCC003FB8CA9C955377E0A62129FBE69FA80C33 (UITouchpadGazeToggleButton_t47CD31E42D965D1D0A084EF01FA40A171AB3FC31 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Tobii.XR.UITouchpadSwipeDetector::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITouchpadSwipeDetector_Start_m527BBEFB903784A756356296E0B37D0BCCACE23C (UITouchpadSwipeDetector_tF8D39854F9C2AEC5EB30A18490D8B5BDC24B1237 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (SwipeLeft == null)
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_0 = __this->get_SwipeLeft_4();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// SwipeLeft = new UnityEvent();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_1 = (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 *)il2cpp_codegen_object_new(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4_il2cpp_TypeInfo_var);
		UnityEvent__ctor_m98D9C5A59898546B23A45388CFACA25F52A9E5A6(L_1, /*hidden argument*/NULL);
		__this->set_SwipeLeft_4(L_1);
	}

IL_0013:
	{
		// if (SwipeRight == null)
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_2 = __this->get_SwipeRight_5();
		if (L_2)
		{
			goto IL_0026;
		}
	}
	{
		// SwipeRight = new UnityEvent();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_3 = (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 *)il2cpp_codegen_object_new(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4_il2cpp_TypeInfo_var);
		UnityEvent__ctor_m98D9C5A59898546B23A45388CFACA25F52A9E5A6(L_3, /*hidden argument*/NULL);
		__this->set_SwipeRight_5(L_3);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void Tobii.XR.UITouchpadSwipeDetector::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITouchpadSwipeDetector_Update_m0E64987FB4108644464BFC58B65B059EF354D3C4 (UITouchpadSwipeDetector_tF8D39854F9C2AEC5EB30A18490D8B5BDC24B1237 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if (!_hasFocus) return;
		bool L_0 = __this->get__hasFocus_11();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!_hasFocus) return;
		return;
	}

IL_0009:
	{
		// if (ControllerManager.Instance.GetButtonTouchDown(TouchpadButton))
		IL2CPP_RUNTIME_CLASS_INIT(ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C_il2cpp_TypeInfo_var);
		ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C * L_1;
		L_1 = ControllerManager_get_Instance_mCCB8E5F1F32355FE08FF4FA8586941951592A250(/*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = ControllerManager_GetButtonTouchDown_mF7460B8AEEA3969CB1E99E60E8A02048CD1EE293(L_1, 1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0037;
		}
	}
	{
		// _padXLastFrame = ControllerManager.Instance.GetTouchpadAxis().x;
		IL2CPP_RUNTIME_CLASS_INIT(ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C_il2cpp_TypeInfo_var);
		ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C * L_3;
		L_3 = ControllerManager_get_Instance_mCCB8E5F1F32355FE08FF4FA8586941951592A250(/*hidden argument*/NULL);
		NullCheck(L_3);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = ControllerManager_GetTouchpadAxis_mD50B8BC58333173201DFA3D348F97A37FC87B51F(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_x_0();
		__this->set__padXLastFrame_9(L_5);
		// _incrementedDelta = 0f;
		__this->set__incrementedDelta_10((0.0f));
		// return;
		return;
	}

IL_0037:
	{
		// if (ControllerManager.Instance.GetButtonTouch(TouchpadButton))
		IL2CPP_RUNTIME_CLASS_INIT(ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C_il2cpp_TypeInfo_var);
		ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C * L_6;
		L_6 = ControllerManager_get_Instance_mCCB8E5F1F32355FE08FF4FA8586941951592A250(/*hidden argument*/NULL);
		NullCheck(L_6);
		bool L_7;
		L_7 = ControllerManager_GetButtonTouch_m71CC30DD933DF6CB3A28AFD7A50AF70E42E4CD98(L_6, 1, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0062;
		}
	}
	{
		// var padXCurrentFrame = ControllerManager.Instance.GetTouchpadAxis().x;
		IL2CPP_RUNTIME_CLASS_INIT(ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C_il2cpp_TypeInfo_var);
		ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C * L_8;
		L_8 = ControllerManager_get_Instance_mCCB8E5F1F32355FE08FF4FA8586941951592A250(/*hidden argument*/NULL);
		NullCheck(L_8);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9;
		L_9 = ControllerManager_GetTouchpadAxis_mD50B8BC58333173201DFA3D348F97A37FC87B51F(L_8, /*hidden argument*/NULL);
		float L_10 = L_9.get_x_0();
		V_0 = L_10;
		// CheckForSwipe(padXCurrentFrame);
		float L_11 = V_0;
		UITouchpadSwipeDetector_CheckForSwipe_m63F5A1C2431DA2BB7E4226D449058A08B758873E(__this, L_11, /*hidden argument*/NULL);
		// _padXLastFrame = padXCurrentFrame;
		float L_12 = V_0;
		__this->set__padXLastFrame_9(L_12);
	}

IL_0062:
	{
		// }
		return;
	}
}
// System.Void Tobii.XR.UITouchpadSwipeDetector::CheckForSwipe(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITouchpadSwipeDetector_CheckForSwipe_m63F5A1C2431DA2BB7E4226D449058A08B758873E (UITouchpadSwipeDetector_tF8D39854F9C2AEC5EB30A18490D8B5BDC24B1237 * __this, float ___padXCurrentFrame0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// var padXDelta = padXCurrentFrame - _padXLastFrame;
		float L_0 = ___padXCurrentFrame0;
		float L_1 = __this->get__padXLastFrame_9();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_0, (float)L_1));
		// _incrementedDelta += padXDelta * MultiplierToMatchTouchpadMovement;
		float L_2 = __this->get__incrementedDelta_10();
		float L_3 = V_0;
		__this->set__incrementedDelta_10(((float)il2cpp_codegen_add((float)L_2, (float)((float)il2cpp_codegen_multiply((float)L_3, (float)(0.5f))))));
		// if (Mathf.Abs(_incrementedDelta) > TouchpadSwipeAmountToInvokeEvent)
		float L_4 = __this->get__incrementedDelta_10();
		float L_5;
		L_5 = fabsf(L_4);
		if ((!(((float)L_5) > ((float)(0.200000003f)))))
		{
			goto IL_007c;
		}
	}
	{
		// if (_incrementedDelta < 0)
		float L_6 = __this->get__incrementedDelta_10();
		if ((!(((float)L_6) < ((float)(0.0f)))))
		{
			goto IL_0051;
		}
	}
	{
		// if (SwipeLeft != null)
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_7 = __this->get_SwipeLeft_4();
		if (!L_7)
		{
			goto IL_0071;
		}
	}
	{
		// SwipeLeft.Invoke();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_8 = __this->get_SwipeLeft_4();
		NullCheck(L_8);
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(L_8, /*hidden argument*/NULL);
		// }
		goto IL_0071;
	}

IL_0051:
	{
		// else if (_incrementedDelta > 0)
		float L_9 = __this->get__incrementedDelta_10();
		if ((!(((float)L_9) > ((float)(0.0f)))))
		{
			goto IL_0071;
		}
	}
	{
		// if (SwipeRight != null)
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_10 = __this->get_SwipeRight_5();
		if (!L_10)
		{
			goto IL_0071;
		}
	}
	{
		// SwipeRight.Invoke();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_11 = __this->get_SwipeRight_5();
		NullCheck(L_11);
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(L_11, /*hidden argument*/NULL);
	}

IL_0071:
	{
		// _incrementedDelta = 0f;
		__this->set__incrementedDelta_10((0.0f));
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Void Tobii.XR.UITouchpadSwipeDetector::GazeFocusChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITouchpadSwipeDetector_GazeFocusChanged_m980CDCB786013EAB1420C39422F243F6EF2AC505 (UITouchpadSwipeDetector_tF8D39854F9C2AEC5EB30A18490D8B5BDC24B1237 * __this, bool ___hasFocus0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!enabled) return;
		bool L_0;
		L_0 = Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!enabled) return;
		return;
	}

IL_0009:
	{
		// _hasFocus = hasFocus;
		bool L_1 = ___hasFocus0;
		__this->set__hasFocus_11(L_1);
		// if (hasFocus)
		bool L_2 = ___hasFocus0;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		// _padXLastFrame = ControllerManager.Instance.GetTouchpadAxis().x;
		IL2CPP_RUNTIME_CLASS_INIT(ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C_il2cpp_TypeInfo_var);
		ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C * L_3;
		L_3 = ControllerManager_get_Instance_mCCB8E5F1F32355FE08FF4FA8586941951592A250(/*hidden argument*/NULL);
		NullCheck(L_3);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = ControllerManager_GetTouchpadAxis_mD50B8BC58333173201DFA3D348F97A37FC87B51F(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_x_0();
		__this->set__padXLastFrame_9(L_5);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void Tobii.XR.UITouchpadSwipeDetector::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITouchpadSwipeDetector__ctor_m20C6B8E1A4035A70772394BB2E2E72EE9B37841A (UITouchpadSwipeDetector_tF8D39854F9C2AEC5EB30A18490D8B5BDC24B1237 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Tobii.XR.UITriggerDragDetector::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITriggerDragDetector_Start_m686F57C18F6434D8C45EB7738FCC6F171B47CF3D (UITriggerDragDetector_t5B95945A64025F5B6F9641C0C64FC5F53431C4B8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (DragLeft == null)
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_0 = __this->get_DragLeft_4();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// DragLeft = new UnityEvent();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_1 = (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 *)il2cpp_codegen_object_new(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4_il2cpp_TypeInfo_var);
		UnityEvent__ctor_m98D9C5A59898546B23A45388CFACA25F52A9E5A6(L_1, /*hidden argument*/NULL);
		__this->set_DragLeft_4(L_1);
	}

IL_0013:
	{
		// if (DragRight == null)
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_2 = __this->get_DragRight_5();
		if (L_2)
		{
			goto IL_0026;
		}
	}
	{
		// DragRight = new UnityEvent();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_3 = (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 *)il2cpp_codegen_object_new(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4_il2cpp_TypeInfo_var);
		UnityEvent__ctor_m98D9C5A59898546B23A45388CFACA25F52A9E5A6(L_3, /*hidden argument*/NULL);
		__this->set_DragRight_5(L_3);
	}

IL_0026:
	{
		// _xScaleLossy = transform.lossyScale.x;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_lossyScale_m469A16F93F135C1E4D5955C7EBDB893D1892A331(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_x_2();
		__this->set__xScaleLossy_10(L_6);
		// }
		return;
	}
}
// System.Void Tobii.XR.UITriggerDragDetector::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITriggerDragDetector_Update_m3CE66CFA723E59A2E34621C68C6EB71E7405BB62 (UITriggerDragDetector_t5B95945A64025F5B6F9641C0C64FC5F53431C4B8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ControllerManager.Instance.GetButtonPressDown(TriggerButton) && _hasFocus)
		IL2CPP_RUNTIME_CLASS_INIT(ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C_il2cpp_TypeInfo_var);
		ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C * L_0;
		L_0 = ControllerManager_get_Instance_mCCB8E5F1F32355FE08FF4FA8586941951592A250(/*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ControllerManager_GetButtonPressDown_mD85B5B10B50103C22823F47B178744810DAC4D4C(L_0, 3, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		bool L_2 = __this->get__hasFocus_8();
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		// _buttonPressed = true;
		__this->set__buttonPressed_9((bool)1);
		// _controllerMoveAmount = 0f;
		__this->set__controllerMoveAmount_11((0.0f));
		// return;
		return;
	}

IL_0028:
	{
		// if (_buttonPressed)
		bool L_3 = __this->get__buttonPressed_9();
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		// CheckForTriggerDragEvent();
		UITriggerDragDetector_CheckForTriggerDragEvent_mB57AAB4069FF41740F0DFF4EC51B17DAB4638818(__this, /*hidden argument*/NULL);
	}

IL_0036:
	{
		// if (ControllerManager.Instance.GetButtonPressUp(TriggerButton))
		IL2CPP_RUNTIME_CLASS_INIT(ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C_il2cpp_TypeInfo_var);
		ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C * L_4;
		L_4 = ControllerManager_get_Instance_mCCB8E5F1F32355FE08FF4FA8586941951592A250(/*hidden argument*/NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = ControllerManager_GetButtonPressUp_m9287E156E57F4916F09C4B0745CE810DEB2E7383(L_4, 3, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_004a;
		}
	}
	{
		// _buttonPressed = false;
		__this->set__buttonPressed_9((bool)0);
	}

IL_004a:
	{
		// }
		return;
	}
}
// System.Void Tobii.XR.UITriggerDragDetector::CheckForTriggerDragEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITriggerDragDetector_CheckForTriggerDragEvent_mB57AAB4069FF41740F0DFF4EC51B17DAB4638818 (UITriggerDragDetector_t5B95945A64025F5B6F9641C0C64FC5F53431C4B8 * __this, const RuntimeMethod* method)
{
	{
		// _controllerMoveAmount += GetRelativeControllerMovement().x;
		float L_0 = __this->get__controllerMoveAmount_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = UITriggerDragDetector_GetRelativeControllerMovement_m6E99A3147CD2F9AFD40D3A848E96859B89903B9E(__this, /*hidden argument*/NULL);
		float L_2 = L_1.get_x_2();
		__this->set__controllerMoveAmount_11(((float)il2cpp_codegen_add((float)L_0, (float)L_2)));
		// if (Mathf.Abs(_controllerMoveAmount) > MoveAmountToInvokeDragEvent)
		float L_3 = __this->get__controllerMoveAmount_11();
		float L_4;
		L_4 = fabsf(L_3);
		if ((!(((float)L_4) > ((float)(0.0199999996f)))))
		{
			goto IL_0075;
		}
	}
	{
		// if (_controllerMoveAmount > 0)
		float L_5 = __this->get__controllerMoveAmount_11();
		if ((!(((float)L_5) > ((float)(0.0f)))))
		{
			goto IL_004a;
		}
	}
	{
		// if (DragRight != null)
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_6 = __this->get_DragRight_5();
		if (!L_6)
		{
			goto IL_004a;
		}
	}
	{
		// DragRight.Invoke();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_7 = __this->get_DragRight_5();
		NullCheck(L_7);
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(L_7, /*hidden argument*/NULL);
	}

IL_004a:
	{
		// if (_controllerMoveAmount < 0)
		float L_8 = __this->get__controllerMoveAmount_11();
		if ((!(((float)L_8) < ((float)(0.0f)))))
		{
			goto IL_006a;
		}
	}
	{
		// if (DragLeft != null)
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_9 = __this->get_DragLeft_4();
		if (!L_9)
		{
			goto IL_006a;
		}
	}
	{
		// DragLeft.Invoke();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_10 = __this->get_DragLeft_4();
		NullCheck(L_10);
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(L_10, /*hidden argument*/NULL);
	}

IL_006a:
	{
		// _controllerMoveAmount = 0f;
		__this->set__controllerMoveAmount_11((0.0f));
	}

IL_0075:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 Tobii.XR.UITriggerDragDetector::GetRelativeControllerMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  UITriggerDragDetector_GetRelativeControllerMovement_m6E99A3147CD2F9AFD40D3A848E96859B89903B9E (UITriggerDragDetector_t5B95945A64025F5B6F9641C0C64FC5F53431C4B8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return transform.InverseTransformVector(ControllerManager.Instance.Velocity) * _xScaleLossy *
		//        Time.deltaTime;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C_il2cpp_TypeInfo_var);
		ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C * L_1;
		L_1 = ControllerManager_get_Instance_mCCB8E5F1F32355FE08FF4FA8586941951592A250(/*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = ControllerManager_get_Velocity_m445F035834607667B7C956F1746E9E2B737CB890_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_InverseTransformVector_mAE27324FC01E136CF80D1A414AC10BA7616024C4(L_0, L_2, /*hidden argument*/NULL);
		float L_4 = __this->get__xScaleLossy_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_3, L_4, /*hidden argument*/NULL);
		float L_6;
		L_6 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Void Tobii.XR.UITriggerDragDetector::GazeFocusChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITriggerDragDetector_GazeFocusChanged_m758F534D135B5CF55DE00A9C8613A1439AA3D0AB (UITriggerDragDetector_t5B95945A64025F5B6F9641C0C64FC5F53431C4B8 * __this, bool ___hasFocus0, const RuntimeMethod* method)
{
	{
		// if (!enabled) return;
		bool L_0;
		L_0 = Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!enabled) return;
		return;
	}

IL_0009:
	{
		// _hasFocus = hasFocus;
		bool L_1 = ___hasFocus0;
		__this->set__hasFocus_8(L_1);
		// }
		return;
	}
}
// System.Void Tobii.XR.UITriggerDragDetector::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITriggerDragDetector__ctor_mA3A7AC43D79D5FBAF0417A84967C72ADBBE2ADD4 (UITriggerDragDetector_t5B95945A64025F5B6F9641C0C64FC5F53431C4B8 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Tobii.XR.UITriggerGazeButton::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITriggerGazeButton_Start_m59B532B06C7FDD591203504927EF2DB7909B4A77 (UITriggerGazeButton_t2554537E0895389690AB22BFAEF73BE3E89B483F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisUIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3_m4EA0B70811CC9A42F1C754D2F89EA074D0B35B2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIButtonEvent_t6ACDD055C471804447D38E6EA0D042A57A243B1A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _uiGazeButtonGraphics = GetComponent<UIGazeButtonGraphics>();
		UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3 * L_0;
		L_0 = Component_GetComponent_TisUIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3_m4EA0B70811CC9A42F1C754D2F89EA074D0B35B2E(__this, /*hidden argument*/Component_GetComponent_TisUIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3_m4EA0B70811CC9A42F1C754D2F89EA074D0B35B2E_RuntimeMethod_var);
		__this->set__uiGazeButtonGraphics_8(L_0);
		// if (OnButtonClicked == null)
		UIButtonEvent_t6ACDD055C471804447D38E6EA0D042A57A243B1A * L_1 = __this->get_OnButtonClicked_4();
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		// OnButtonClicked = new UIButtonEvent();
		UIButtonEvent_t6ACDD055C471804447D38E6EA0D042A57A243B1A * L_2 = (UIButtonEvent_t6ACDD055C471804447D38E6EA0D042A57A243B1A *)il2cpp_codegen_object_new(UIButtonEvent_t6ACDD055C471804447D38E6EA0D042A57A243B1A_il2cpp_TypeInfo_var);
		UIButtonEvent__ctor_mB08326F417481FDC04FE370FC90AE7DF7F997EAE(L_2, /*hidden argument*/NULL);
		__this->set_OnButtonClicked_4(L_2);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Tobii.XR.UITriggerGazeButton::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITriggerGazeButton_Update_m490A049D646A7F3CF9381DA36762B51FB1F2EB48 (UITriggerGazeButton_t2554537E0895389690AB22BFAEF73BE3E89B483F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m2905EEB7C8C104A9BC6500F3BB559F14A86CB376_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UITriggerGazeButton_t2554537E0895389690AB22BFAEF73BE3E89B483F * G_B10_0 = NULL;
	UITriggerGazeButton_t2554537E0895389690AB22BFAEF73BE3E89B483F * G_B9_0 = NULL;
	int32_t G_B11_0 = 0;
	UITriggerGazeButton_t2554537E0895389690AB22BFAEF73BE3E89B483F * G_B11_1 = NULL;
	{
		// if (_currentButtonState == ButtonState.Focused &&
		//     ControllerManager.Instance.GetButtonPressDown(ControllerButton.Trigger))
		int32_t L_0 = __this->get__currentButtonState_6();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C_il2cpp_TypeInfo_var);
		ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C * L_1;
		L_1 = ControllerManager_get_Instance_mCCB8E5F1F32355FE08FF4FA8586941951592A250(/*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = ControllerManager_GetButtonPressDown_mD85B5B10B50103C22823F47B178744810DAC4D4C(L_1, 3, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// UpdateState(ButtonState.PressedDown);
		UITriggerGazeButton_UpdateState_m4269ABDEECDA94E85635CFF1A3DDE40219B04F78(__this, 2, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001e:
	{
		// else if (ControllerManager.Instance.GetButtonPressUp(ControllerButton.Trigger))
		IL2CPP_RUNTIME_CLASS_INIT(ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C_il2cpp_TypeInfo_var);
		ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C * L_3;
		L_3 = ControllerManager_get_Instance_mCCB8E5F1F32355FE08FF4FA8586941951592A250(/*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = ControllerManager_GetButtonPressUp_m9287E156E57F4916F09C4B0745CE810DEB2E7383(L_3, 3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_006e;
		}
	}
	{
		// if (_currentButtonState == ButtonState.PressedDown)
		int32_t L_5 = __this->get__currentButtonState_6();
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_005c;
		}
	}
	{
		// if (OnButtonClicked != null)
		UIButtonEvent_t6ACDD055C471804447D38E6EA0D042A57A243B1A * L_6 = __this->get_OnButtonClicked_4();
		if (!L_6)
		{
			goto IL_004d;
		}
	}
	{
		// OnButtonClicked.Invoke(gameObject);
		UIButtonEvent_t6ACDD055C471804447D38E6EA0D042A57A243B1A * L_7 = __this->get_OnButtonClicked_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		UnityEvent_1_Invoke_m2905EEB7C8C104A9BC6500F3BB559F14A86CB376(L_7, L_8, /*hidden argument*/UnityEvent_1_Invoke_m2905EEB7C8C104A9BC6500F3BB559F14A86CB376_RuntimeMethod_var);
	}

IL_004d:
	{
		// ControllerManager.Instance.TriggerHapticPulse(HapticStrength);
		IL2CPP_RUNTIME_CLASS_INIT(ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C_il2cpp_TypeInfo_var);
		ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C * L_9;
		L_9 = ControllerManager_get_Instance_mCCB8E5F1F32355FE08FF4FA8586941951592A250(/*hidden argument*/NULL);
		NullCheck(L_9);
		ControllerManager_TriggerHapticPulse_m2F471DAC20A5A36BAFCE2D0F1952B6278E84EC69(L_9, (0.100000001f), /*hidden argument*/NULL);
	}

IL_005c:
	{
		// UpdateState(_hasFocus ? ButtonState.Focused : ButtonState.Idle);
		bool L_10 = __this->get__hasFocus_7();
		G_B9_0 = __this;
		if (L_10)
		{
			G_B10_0 = __this;
			goto IL_0068;
		}
	}
	{
		G_B11_0 = 0;
		G_B11_1 = G_B9_0;
		goto IL_0069;
	}

IL_0068:
	{
		G_B11_0 = 1;
		G_B11_1 = G_B10_0;
	}

IL_0069:
	{
		NullCheck(G_B11_1);
		UITriggerGazeButton_UpdateState_m4269ABDEECDA94E85635CFF1A3DDE40219B04F78(G_B11_1, G_B11_0, /*hidden argument*/NULL);
	}

IL_006e:
	{
		// }
		return;
	}
}
// System.Void Tobii.XR.UITriggerGazeButton::UpdateState(Tobii.XR.ButtonState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITriggerGazeButton_UpdateState_m4269ABDEECDA94E85635CFF1A3DDE40219B04F78 (UITriggerGazeButton_t2554537E0895389690AB22BFAEF73BE3E89B483F * __this, int32_t ___newState0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	{
		// var oldState = _currentButtonState;
		int32_t L_0 = __this->get__currentButtonState_6();
		V_0 = L_0;
		// _currentButtonState = newState;
		int32_t L_1 = ___newState0;
		__this->set__currentButtonState_6(L_1);
		// var buttonPressed = newState == ButtonState.PressedDown;
		int32_t L_2 = ___newState0;
		// var buttonClicked = (oldState == ButtonState.PressedDown && newState == ButtonState.Focused);
		int32_t L_3 = V_0;
		G_B1_0 = ((((int32_t)L_2) == ((int32_t)2))? 1 : 0);
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			G_B2_0 = ((((int32_t)L_2) == ((int32_t)2))? 1 : 0);
			goto IL_001c;
		}
	}
	{
		int32_t L_4 = ___newState0;
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)1))? 1 : 0);
		G_B3_1 = G_B1_0;
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_001d:
	{
		V_1 = (bool)G_B3_0;
		// if (buttonPressed || buttonClicked)
		bool L_5 = V_1;
		if (!((int32_t)((int32_t)G_B3_1|(int32_t)L_5)))
		{
			goto IL_0034;
		}
	}
	{
		// _uiGazeButtonGraphics.AnimateButtonPress(_currentButtonState);
		UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3 * L_6 = __this->get__uiGazeButtonGraphics_8();
		int32_t L_7 = __this->get__currentButtonState_6();
		NullCheck(L_6);
		UIGazeButtonGraphics_AnimateButtonPress_m707446E12689DB713E2F98282394D35084B287AF(L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0034:
	{
		// _uiGazeButtonGraphics.AnimateButtonVisualFeedback(_currentButtonState);
		UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3 * L_8 = __this->get__uiGazeButtonGraphics_8();
		int32_t L_9 = __this->get__currentButtonState_6();
		NullCheck(L_8);
		UIGazeButtonGraphics_AnimateButtonVisualFeedback_mF6CAFB0B6894EAE85053866CCFBF6C5D42E03E7B(L_8, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Tobii.XR.UITriggerGazeButton::GazeFocusChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITriggerGazeButton_GazeFocusChanged_mAA9E755BC2291053DC9B2E86633FDBCDAE45F8EA (UITriggerGazeButton_t2554537E0895389690AB22BFAEF73BE3E89B483F * __this, bool ___hasFocus0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UITriggerGazeButton_t2554537E0895389690AB22BFAEF73BE3E89B483F * G_B6_0 = NULL;
	UITriggerGazeButton_t2554537E0895389690AB22BFAEF73BE3E89B483F * G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	UITriggerGazeButton_t2554537E0895389690AB22BFAEF73BE3E89B483F * G_B7_1 = NULL;
	{
		// if (!enabled) return;
		bool L_0;
		L_0 = Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!enabled) return;
		return;
	}

IL_0009:
	{
		// _hasFocus = hasFocus;
		bool L_1 = ___hasFocus0;
		__this->set__hasFocus_7(L_1);
		// if (ControllerManager.Instance.GetButtonPress(ControllerButton.Trigger)) return;
		IL2CPP_RUNTIME_CLASS_INIT(ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C_il2cpp_TypeInfo_var);
		ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C * L_2;
		L_2 = ControllerManager_get_Instance_mCCB8E5F1F32355FE08FF4FA8586941951592A250(/*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = ControllerManager_GetButtonPress_m27E4327C628C64D804E87464464BE073A4340E15(L_2, 3, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// if (ControllerManager.Instance.GetButtonPress(ControllerButton.Trigger)) return;
		return;
	}

IL_001e:
	{
		// UpdateState(hasFocus ? ButtonState.Focused : ButtonState.Idle);
		bool L_4 = ___hasFocus0;
		G_B5_0 = __this;
		if (L_4)
		{
			G_B6_0 = __this;
			goto IL_0025;
		}
	}
	{
		G_B7_0 = 0;
		G_B7_1 = G_B5_0;
		goto IL_0026;
	}

IL_0025:
	{
		G_B7_0 = 1;
		G_B7_1 = G_B6_0;
	}

IL_0026:
	{
		NullCheck(G_B7_1);
		UITriggerGazeButton_UpdateState_m4269ABDEECDA94E85635CFF1A3DDE40219B04F78(G_B7_1, G_B7_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Tobii.XR.UITriggerGazeButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITriggerGazeButton__ctor_mB337CF9D112551A2EAFDD244BA93E1336F16A56D (UITriggerGazeButton_t2554537E0895389690AB22BFAEF73BE3E89B483F * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Tobii.XR.UITriggerGazeButtonWithHold::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITriggerGazeButtonWithHold_Start_m5A46C3C8A78DFCC0FD0BA42A30CD7A628D7889BE (UITriggerGazeButtonWithHold_tA1C5EE28D3A9F40D8B285501369988CE21C3E6E5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisUIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3_m4EA0B70811CC9A42F1C754D2F89EA074D0B35B2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIButtonEvent_t6ACDD055C471804447D38E6EA0D042A57A243B1A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _uiGazeButtonGraphics = GetComponent<UIGazeButtonGraphics>();
		UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3 * L_0;
		L_0 = Component_GetComponent_TisUIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3_m4EA0B70811CC9A42F1C754D2F89EA074D0B35B2E(__this, /*hidden argument*/Component_GetComponent_TisUIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3_m4EA0B70811CC9A42F1C754D2F89EA074D0B35B2E_RuntimeMethod_var);
		__this->set__uiGazeButtonGraphics_9(L_0);
		// if (OnButtonClicked == null)
		UIButtonEvent_t6ACDD055C471804447D38E6EA0D042A57A243B1A * L_1 = __this->get_OnButtonClicked_4();
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		// OnButtonClicked = new UIButtonEvent();
		UIButtonEvent_t6ACDD055C471804447D38E6EA0D042A57A243B1A * L_2 = (UIButtonEvent_t6ACDD055C471804447D38E6EA0D042A57A243B1A *)il2cpp_codegen_object_new(UIButtonEvent_t6ACDD055C471804447D38E6EA0D042A57A243B1A_il2cpp_TypeInfo_var);
		UIButtonEvent__ctor_mB08326F417481FDC04FE370FC90AE7DF7F997EAE(L_2, /*hidden argument*/NULL);
		__this->set_OnButtonClicked_4(L_2);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Tobii.XR.UITriggerGazeButtonWithHold::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITriggerGazeButtonWithHold_Update_m06F087D2942B96EA440FB1807D813EB9B59C858F (UITriggerGazeButtonWithHold_tA1C5EE28D3A9F40D8B285501369988CE21C3E6E5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m2905EEB7C8C104A9BC6500F3BB559F14A86CB376_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	UITriggerGazeButtonWithHold_tA1C5EE28D3A9F40D8B285501369988CE21C3E6E5 * G_B14_0 = NULL;
	UITriggerGazeButtonWithHold_tA1C5EE28D3A9F40D8B285501369988CE21C3E6E5 * G_B13_0 = NULL;
	int32_t G_B15_0 = 0;
	UITriggerGazeButtonWithHold_tA1C5EE28D3A9F40D8B285501369988CE21C3E6E5 * G_B15_1 = NULL;
	{
		// var anyTriggerDown = ControllerManager.Instance.AnyTriggerHeld();
		IL2CPP_RUNTIME_CLASS_INIT(ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C_il2cpp_TypeInfo_var);
		ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C * L_0;
		L_0 = ControllerManager_get_Instance_mCCB8E5F1F32355FE08FF4FA8586941951592A250(/*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ControllerManager_AnyTriggerHeld_m0753DA072A77BA9C7D04649F83D095E1C981A5C2(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// var triggerDownThisFrame = !_triggerIsDown && anyTriggerDown;
		bool L_2 = __this->get__triggerIsDown_13();
		bool L_3 = V_0;
		V_1 = (bool)((int32_t)((int32_t)((((int32_t)L_2) == ((int32_t)0))? 1 : 0)&(int32_t)L_3));
		// var triggerUpThisFrame = _triggerIsDown && !anyTriggerDown;
		bool L_4 = __this->get__triggerIsDown_13();
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		bool L_5 = V_0;
		G_B3_0 = ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		goto IL_0026;
	}

IL_0025:
	{
		G_B3_0 = 0;
	}

IL_0026:
	{
		V_2 = (bool)G_B3_0;
		// _triggerIsDown = anyTriggerDown;
		bool L_6 = V_0;
		__this->set__triggerIsDown_13(L_6);
		// if (_currentButtonState == ButtonState.Focused && triggerDownThisFrame)
		int32_t L_7 = __this->get__currentButtonState_7();
		bool L_8 = V_1;
		if (!((int32_t)((int32_t)((((int32_t)L_7) == ((int32_t)1))? 1 : 0)&(int32_t)L_8)))
		{
			goto IL_0069;
		}
	}
	{
		// UpdateState(ButtonState.PressedDown);
		UITriggerGazeButtonWithHold_UpdateState_m628F56B442232094EFE2B345A780E2F00E78874B(__this, 2, /*hidden argument*/NULL);
		// _holdTimerActive = true;
		__this->set__holdTimerActive_11((bool)1);
		// _currentHoldTime = 0;
		__this->set__currentHoldTime_10((0.0f));
		// _buttonFillImage.fillAmount = 0;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_9 = __this->get__buttonFillImage_6();
		NullCheck(L_9);
		Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C(L_9, (0.0f), /*hidden argument*/NULL);
		// }
		goto IL_00ef;
	}

IL_0069:
	{
		// else if (_currentHoldTime >= _minHoldTime || triggerUpThisFrame)
		float L_10 = __this->get__currentHoldTime_10();
		float L_11 = __this->get__minHoldTime_5();
		bool L_12 = V_2;
		if (!((int32_t)((int32_t)((((int32_t)((!(((float)L_10) >= ((float)L_11)))? 1 : 0)) == ((int32_t)0))? 1 : 0)|(int32_t)L_12)))
		{
			goto IL_00ef;
		}
	}
	{
		// if (_currentButtonState == ButtonState.PressedDown && _currentHoldTime >= _minHoldTime)
		int32_t L_13 = __this->get__currentButtonState_7();
		if ((!(((uint32_t)L_13) == ((uint32_t)2))))
		{
			goto IL_00c6;
		}
	}
	{
		float L_14 = __this->get__currentHoldTime_10();
		float L_15 = __this->get__minHoldTime_5();
		if ((!(((float)L_14) >= ((float)L_15))))
		{
			goto IL_00c6;
		}
	}
	{
		// if (OnButtonClicked != null)
		UIButtonEvent_t6ACDD055C471804447D38E6EA0D042A57A243B1A * L_16 = __this->get_OnButtonClicked_4();
		if (!L_16)
		{
			goto IL_00b5;
		}
	}
	{
		// OnButtonClicked.Invoke(gameObject);
		UIButtonEvent_t6ACDD055C471804447D38E6EA0D042A57A243B1A * L_17 = __this->get_OnButtonClicked_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18;
		L_18 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		UnityEvent_1_Invoke_m2905EEB7C8C104A9BC6500F3BB559F14A86CB376(L_17, L_18, /*hidden argument*/UnityEvent_1_Invoke_m2905EEB7C8C104A9BC6500F3BB559F14A86CB376_RuntimeMethod_var);
		// _holdTimerActive = false;
		__this->set__holdTimerActive_11((bool)0);
	}

IL_00b5:
	{
		// ControllerManager.Instance.TriggerHapticPulse(0.1f);
		IL2CPP_RUNTIME_CLASS_INIT(ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C_il2cpp_TypeInfo_var);
		ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C * L_19;
		L_19 = ControllerManager_get_Instance_mCCB8E5F1F32355FE08FF4FA8586941951592A250(/*hidden argument*/NULL);
		NullCheck(L_19);
		ControllerManager_TriggerHapticPulse_m2F471DAC20A5A36BAFCE2D0F1952B6278E84EC69(L_19, (0.100000001f), /*hidden argument*/NULL);
		// }
		goto IL_00dd;
	}

IL_00c6:
	{
		// _holdTimerActive = false;
		__this->set__holdTimerActive_11((bool)0);
		// _buttonFillImage.fillAmount = 0;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_20 = __this->get__buttonFillImage_6();
		NullCheck(L_20);
		Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C(L_20, (0.0f), /*hidden argument*/NULL);
	}

IL_00dd:
	{
		// UpdateState(_hasFocus ? ButtonState.Focused : ButtonState.Idle);
		bool L_21 = __this->get__hasFocus_8();
		G_B13_0 = __this;
		if (L_21)
		{
			G_B14_0 = __this;
			goto IL_00e9;
		}
	}
	{
		G_B15_0 = 0;
		G_B15_1 = G_B13_0;
		goto IL_00ea;
	}

IL_00e9:
	{
		G_B15_0 = 1;
		G_B15_1 = G_B14_0;
	}

IL_00ea:
	{
		NullCheck(G_B15_1);
		UITriggerGazeButtonWithHold_UpdateState_m628F56B442232094EFE2B345A780E2F00E78874B(G_B15_1, G_B15_0, /*hidden argument*/NULL);
	}

IL_00ef:
	{
		// if (_holdTimerActive)
		bool L_22 = __this->get__holdTimerActive_11();
		if (!L_22)
		{
			goto IL_0121;
		}
	}
	{
		// _currentHoldTime += Time.deltaTime;
		float L_23 = __this->get__currentHoldTime_10();
		float L_24;
		L_24 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set__currentHoldTime_10(((float)il2cpp_codegen_add((float)L_23, (float)L_24)));
		// _buttonFillImage.fillAmount = _currentHoldTime / _minHoldTime;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_25 = __this->get__buttonFillImage_6();
		float L_26 = __this->get__currentHoldTime_10();
		float L_27 = __this->get__minHoldTime_5();
		NullCheck(L_25);
		Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C(L_25, ((float)((float)L_26/(float)L_27)), /*hidden argument*/NULL);
	}

IL_0121:
	{
		// }
		return;
	}
}
// System.Void Tobii.XR.UITriggerGazeButtonWithHold::UpdateState(Tobii.XR.ButtonState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITriggerGazeButtonWithHold_UpdateState_m628F56B442232094EFE2B345A780E2F00E78874B (UITriggerGazeButtonWithHold_tA1C5EE28D3A9F40D8B285501369988CE21C3E6E5 * __this, int32_t ___newState0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	{
		// var oldState = _currentButtonState;
		int32_t L_0 = __this->get__currentButtonState_7();
		V_0 = L_0;
		// _currentButtonState = newState;
		int32_t L_1 = ___newState0;
		__this->set__currentButtonState_7(L_1);
		// var buttonPressed = newState == ButtonState.PressedDown;
		int32_t L_2 = ___newState0;
		// var buttonClicked = (oldState == ButtonState.PressedDown && newState == ButtonState.Focused);
		int32_t L_3 = V_0;
		G_B1_0 = ((((int32_t)L_2) == ((int32_t)2))? 1 : 0);
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			G_B2_0 = ((((int32_t)L_2) == ((int32_t)2))? 1 : 0);
			goto IL_001c;
		}
	}
	{
		int32_t L_4 = ___newState0;
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)1))? 1 : 0);
		G_B3_1 = G_B1_0;
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_001d:
	{
		V_1 = (bool)G_B3_0;
		// if (buttonPressed || buttonClicked)
		bool L_5 = V_1;
		if (!((int32_t)((int32_t)G_B3_1|(int32_t)L_5)))
		{
			goto IL_0034;
		}
	}
	{
		// _uiGazeButtonGraphics.AnimateButtonPress(_currentButtonState);
		UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3 * L_6 = __this->get__uiGazeButtonGraphics_9();
		int32_t L_7 = __this->get__currentButtonState_7();
		NullCheck(L_6);
		UIGazeButtonGraphics_AnimateButtonPress_m707446E12689DB713E2F98282394D35084B287AF(L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0034:
	{
		// _uiGazeButtonGraphics.AnimateButtonVisualFeedback(_currentButtonState);
		UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3 * L_8 = __this->get__uiGazeButtonGraphics_9();
		int32_t L_9 = __this->get__currentButtonState_7();
		NullCheck(L_8);
		UIGazeButtonGraphics_AnimateButtonVisualFeedback_mF6CAFB0B6894EAE85053866CCFBF6C5D42E03E7B(L_8, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Tobii.XR.UITriggerGazeButtonWithHold::GazeFocusChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITriggerGazeButtonWithHold_GazeFocusChanged_m0EFF9BBA34E05C18967788B6711189022B057BFC (UITriggerGazeButtonWithHold_tA1C5EE28D3A9F40D8B285501369988CE21C3E6E5 * __this, bool ___hasFocus0, const RuntimeMethod* method)
{
	UITriggerGazeButtonWithHold_tA1C5EE28D3A9F40D8B285501369988CE21C3E6E5 * G_B6_0 = NULL;
	UITriggerGazeButtonWithHold_tA1C5EE28D3A9F40D8B285501369988CE21C3E6E5 * G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	UITriggerGazeButtonWithHold_tA1C5EE28D3A9F40D8B285501369988CE21C3E6E5 * G_B7_1 = NULL;
	{
		// if (!enabled) return;
		bool L_0;
		L_0 = Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!enabled) return;
		return;
	}

IL_0009:
	{
		// _hasFocus = hasFocus;
		bool L_1 = ___hasFocus0;
		__this->set__hasFocus_8(L_1);
		// if (_triggerIsDown) return;
		bool L_2 = __this->get__triggerIsDown_13();
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// if (_triggerIsDown) return;
		return;
	}

IL_0019:
	{
		// UpdateState(hasFocus ? ButtonState.Focused : ButtonState.Idle);
		bool L_3 = ___hasFocus0;
		G_B5_0 = __this;
		if (L_3)
		{
			G_B6_0 = __this;
			goto IL_0020;
		}
	}
	{
		G_B7_0 = 0;
		G_B7_1 = G_B5_0;
		goto IL_0021;
	}

IL_0020:
	{
		G_B7_0 = 1;
		G_B7_1 = G_B6_0;
	}

IL_0021:
	{
		NullCheck(G_B7_1);
		UITriggerGazeButtonWithHold_UpdateState_m628F56B442232094EFE2B345A780E2F00E78874B(G_B7_1, G_B7_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Tobii.XR.UITriggerGazeButtonWithHold::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITriggerGazeButtonWithHold__ctor_m48E2D3B07E23CB87B2D0E68F7FB4C6B921D66C0E (UITriggerGazeButtonWithHold_tA1C5EE28D3A9F40D8B285501369988CE21C3E6E5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m301E51804C88F4CDA1665B126A03BC15123C2BB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly List<InputDevice> _devices = new List<InputDevice>();
		List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * L_0 = (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F *)il2cpp_codegen_object_new(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F_il2cpp_TypeInfo_var);
		List_1__ctor_m301E51804C88F4CDA1665B126A03BC15123C2BB1(L_0, /*hidden argument*/List_1__ctor_m301E51804C88F4CDA1665B126A03BC15123C2BB1_RuntimeMethod_var);
		__this->set__devices_12(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Tobii.XR.UITriggerGazeSlider::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UITriggerGazeSlider_get_Value_mF5BA2ADCB66AFCCE9D35CEB3177BA3BA5AA71B7C (UITriggerGazeSlider_t0A8BB5E0FD17F213EDA17FB7FDBB192FA2C5A08E * __this, const RuntimeMethod* method)
{
	{
		// get { return _value; }
		int32_t L_0 = __this->get__value_5();
		return L_0;
	}
}
// System.Void Tobii.XR.UITriggerGazeSlider::set_Value(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITriggerGazeSlider_set_Value_m1A353BD18E4197DF9EAA836DD4399A3B62996578 (UITriggerGazeSlider_t0A8BB5E0FD17F213EDA17FB7FDBB192FA2C5A08E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_mB9C23C9CF956F0CCBE6C295112BC8F4C9A4EDA3B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Mathf.Approximately(value, _value)) return;
		int32_t L_0 = ___value0;
		int32_t L_1 = __this->get__value_5();
		bool L_2;
		L_2 = Mathf_Approximately_mC2A3F657E3FD0CCAD4A4936CEE2F67D624A2AA55(((float)((float)L_0)), ((float)((float)L_1)), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0011;
		}
	}
	{
		// if (Mathf.Approximately(value, _value)) return;
		return;
	}

IL_0011:
	{
		// _value = value;
		int32_t L_3 = ___value0;
		__this->set__value_5(L_3);
		// if (OnSliderValueChanged != null)
		UISliderEvent_t36D445D0583DF9594EF697A1EE85A07EE10DA88D * L_4 = __this->get_OnSliderValueChanged_4();
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// OnSliderValueChanged.Invoke(gameObject, value);
		UISliderEvent_t36D445D0583DF9594EF697A1EE85A07EE10DA88D * L_5 = __this->get_OnSliderValueChanged_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		int32_t L_7 = ___value0;
		NullCheck(L_5);
		UnityEvent_2_Invoke_mB9C23C9CF956F0CCBE6C295112BC8F4C9A4EDA3B(L_5, L_6, L_7, /*hidden argument*/UnityEvent_2_Invoke_mB9C23C9CF956F0CCBE6C295112BC8F4C9A4EDA3B_RuntimeMethod_var);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void Tobii.XR.UITriggerGazeSlider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITriggerGazeSlider_Start_m8A5C37984C0AC911D6C7B212472BB0EF212160CA (UITriggerGazeSlider_t0A8BB5E0FD17F213EDA17FB7FDBB192FA2C5A08E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisUIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9_m05202FD41E43B29E57ECEDEAF05C4ABC1DDCB268_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UISliderEvent_t36D445D0583DF9594EF697A1EE85A07EE10DA88D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _sliderGraphics = GetComponent<UIGazeSliderGraphics>();
		UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * L_0;
		L_0 = Component_GetComponent_TisUIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9_m05202FD41E43B29E57ECEDEAF05C4ABC1DDCB268(__this, /*hidden argument*/Component_GetComponent_TisUIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9_m05202FD41E43B29E57ECEDEAF05C4ABC1DDCB268_RuntimeMethod_var);
		__this->set__sliderGraphics_19(L_0);
		// _xScaleLossy = transform.lossyScale.x;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_lossyScale_m469A16F93F135C1E4D5955C7EBDB893D1892A331(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		__this->set__xScaleLossy_18(L_3);
		// if (OnSliderValueChanged == null)
		UISliderEvent_t36D445D0583DF9594EF697A1EE85A07EE10DA88D * L_4 = __this->get_OnSliderValueChanged_4();
		if (L_4)
		{
			goto IL_0035;
		}
	}
	{
		// OnSliderValueChanged = new UISliderEvent();
		UISliderEvent_t36D445D0583DF9594EF697A1EE85A07EE10DA88D * L_5 = (UISliderEvent_t36D445D0583DF9594EF697A1EE85A07EE10DA88D *)il2cpp_codegen_object_new(UISliderEvent_t36D445D0583DF9594EF697A1EE85A07EE10DA88D_il2cpp_TypeInfo_var);
		UISliderEvent__ctor_m350DD9A08910831DDCE3F16793B8F43C2133E5C8(L_5, /*hidden argument*/NULL);
		__this->set_OnSliderValueChanged_4(L_5);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void Tobii.XR.UITriggerGazeSlider::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITriggerGazeSlider_Update_mB39AE3DF4075FA30C0035D114EC63937469ABFF0 (UITriggerGazeSlider_t0A8BB5E0FD17F213EDA17FB7FDBB192FA2C5A08E * __this, const RuntimeMethod* method)
{
	{
		// if (SliderValueOutsideBounds()) return;
		bool L_0;
		L_0 = UITriggerGazeSlider_SliderValueOutsideBounds_mE2A9F2D7A6A6082101DCBEDD3EC39DB170F9B6EA(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (SliderValueOutsideBounds()) return;
		return;
	}

IL_0009:
	{
		// HandleInput();
		UITriggerGazeSlider_HandleInput_m65FAA2BD4BF4979D0EAF3A48F83A85D474C6682D(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Tobii.XR.UITriggerGazeSlider::HandleInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITriggerGazeSlider_HandleInput_m65FAA2BD4BF4979D0EAF3A48F83A85D474C6682D (UITriggerGazeSlider_t0A8BB5E0FD17F213EDA17FB7FDBB192FA2C5A08E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ControllerManager.Instance.GetButtonPressDown(TriggerButton) && _hasFocus)
		IL2CPP_RUNTIME_CLASS_INIT(ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C_il2cpp_TypeInfo_var);
		ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C * L_0;
		L_0 = ControllerManager_get_Instance_mCCB8E5F1F32355FE08FF4FA8586941951592A250(/*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ControllerManager_GetButtonPressDown_mD85B5B10B50103C22823F47B178744810DAC4D4C(L_0, 3, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		bool L_2 = __this->get__hasFocus_16();
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		// _operatingSlider = true;
		__this->set__operatingSlider_17((bool)1);
		// _sliderGraphics.StartHandleAnimation(true);
		UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * L_3 = __this->get__sliderGraphics_19();
		NullCheck(L_3);
		UIGazeSliderGraphics_StartHandleAnimation_m2617B55EDFACDDB0E39607A1E50633872EBA38BA(L_3, (bool)1, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0029:
	{
		// if (_operatingSlider)
		bool L_4 = __this->get__operatingSlider_17();
		if (!L_4)
		{
			goto IL_0037;
		}
	}
	{
		// UpdateSlider();
		UITriggerGazeSlider_UpdateSlider_mDC1AFB2240451AB1E5078DC1B5DB4E55B42A11B7(__this, /*hidden argument*/NULL);
	}

IL_0037:
	{
		// if (ControllerManager.Instance.GetButtonPressUp(TriggerButton))
		IL2CPP_RUNTIME_CLASS_INIT(ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C_il2cpp_TypeInfo_var);
		ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C * L_5;
		L_5 = ControllerManager_get_Instance_mCCB8E5F1F32355FE08FF4FA8586941951592A250(/*hidden argument*/NULL);
		NullCheck(L_5);
		bool L_6;
		L_6 = ControllerManager_GetButtonPressUp_m9287E156E57F4916F09C4B0745CE810DEB2E7383(L_5, 3, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0068;
		}
	}
	{
		// _operatingSlider = false;
		__this->set__operatingSlider_17((bool)0);
		// _sliderGraphics.StartHandleAnimation(false);
		UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * L_7 = __this->get__sliderGraphics_19();
		NullCheck(L_7);
		UIGazeSliderGraphics_StartHandleAnimation_m2617B55EDFACDDB0E39607A1E50633872EBA38BA(L_7, (bool)0, /*hidden argument*/NULL);
		// _sliderGraphics.StartVisualFeedbackAnimation(_hasFocus);
		UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * L_8 = __this->get__sliderGraphics_19();
		bool L_9 = __this->get__hasFocus_16();
		NullCheck(L_8);
		UIGazeSliderGraphics_StartVisualFeedbackAnimation_mE1D2D8EE687238FEBF3671FC5E6528665EF210BE(L_8, L_9, /*hidden argument*/NULL);
	}

IL_0068:
	{
		// }
		return;
	}
}
// System.Void Tobii.XR.UITriggerGazeSlider::UpdateSlider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITriggerGazeSlider_UpdateSlider_mDC1AFB2240451AB1E5078DC1B5DB4E55B42A11B7 (UITriggerGazeSlider_t0A8BB5E0FD17F213EDA17FB7FDBB192FA2C5A08E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _incrementedMoveAmount += GetRelativeControllerMovement().x * _controllerMovementMultiplier;
		float L_0 = __this->get__incrementedMoveAmount_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = UITriggerGazeSlider_GetRelativeControllerMovement_mD8D7E9A7AC285B2C8EC782F5934E6CAB66DF94FE(__this, /*hidden argument*/NULL);
		float L_2 = L_1.get_x_2();
		float L_3 = __this->get__controllerMovementMultiplier_6();
		__this->set__incrementedMoveAmount_14(((float)il2cpp_codegen_add((float)L_0, (float)((float)il2cpp_codegen_multiply((float)L_2, (float)L_3)))));
		// if (TryingToDragOutsideOfScope())
		bool L_4;
		L_4 = UITriggerGazeSlider_TryingToDragOutsideOfScope_m65A81194CBF5FE4F69A9ACCD04C65DB632ADF76E(__this, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		// _incrementedMoveAmount = 0;
		__this->set__incrementedMoveAmount_14((0.0f));
		// return;
		return;
	}

IL_0033:
	{
		// _sizePerStep = 1f / (_maxValue - _minValue);
		int32_t L_5 = __this->get__maxValue_8();
		int32_t L_6 = __this->get__minValue_7();
		__this->set__sizePerStep_15(((float)((float)(1.0f)/(float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)L_6)))))));
		// if (Mathf.Abs(_incrementedMoveAmount) > _sizePerStep)
		float L_7 = __this->get__incrementedMoveAmount_14();
		float L_8;
		L_8 = fabsf(L_7);
		float L_9 = __this->get__sizePerStep_15();
		if ((!(((float)L_8) > ((float)L_9))))
		{
			goto IL_00bc;
		}
	}
	{
		// _stepsToMove = (int) (_incrementedMoveAmount / _sizePerStep);
		float L_10 = __this->get__incrementedMoveAmount_14();
		float L_11 = __this->get__sizePerStep_15();
		__this->set__stepsToMove_13(il2cpp_codegen_cast_double_to_int<int32_t>(((float)((float)L_10/(float)L_11))));
		// _incrementedMoveAmount = 0;
		__this->set__incrementedMoveAmount_14((0.0f));
		// _currentStep = Mathf.Clamp(_currentStep + _stepsToMove, 0, _maxValue - _minValue);
		int32_t L_12 = __this->get__currentStep_12();
		int32_t L_13 = __this->get__stepsToMove_13();
		int32_t L_14 = __this->get__maxValue_8();
		int32_t L_15 = __this->get__minValue_7();
		int32_t L_16;
		L_16 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)L_13)), 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)L_15)), /*hidden argument*/NULL);
		__this->set__currentStep_12(L_16);
		// _stepsToMove = 0;
		__this->set__stepsToMove_13(0);
		// ControllerManager.Instance.TriggerHapticPulse(_hapticStrength);
		IL2CPP_RUNTIME_CLASS_INIT(ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C_il2cpp_TypeInfo_var);
		ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C * L_17;
		L_17 = ControllerManager_get_Instance_mCCB8E5F1F32355FE08FF4FA8586941951592A250(/*hidden argument*/NULL);
		float L_18 = __this->get__hapticStrength_9();
		NullCheck(L_17);
		ControllerManager_TriggerHapticPulse_m2F471DAC20A5A36BAFCE2D0F1952B6278E84EC69(L_17, L_18, /*hidden argument*/NULL);
	}

IL_00bc:
	{
		// _sliderFillAmount = _currentStep * _sizePerStep;
		int32_t L_19 = __this->get__currentStep_12();
		float L_20 = __this->get__sizePerStep_15();
		__this->set__sliderFillAmount_20(((float)il2cpp_codegen_multiply((float)((float)((float)L_19)), (float)L_20)));
		// _sliderGraphics.SetFillAmount(_sliderFillAmount);
		UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * L_21 = __this->get__sliderGraphics_19();
		float L_22 = __this->get__sliderFillAmount_20();
		NullCheck(L_21);
		UIGazeSliderGraphics_SetFillAmount_m2267EFADA619E564314254EBD039EF5749AEECA4(L_21, L_22, /*hidden argument*/NULL);
		// Value = (int) Mathf.Lerp(_minValue, _maxValue, _sliderFillAmount);
		int32_t L_23 = __this->get__minValue_7();
		int32_t L_24 = __this->get__maxValue_8();
		float L_25 = __this->get__sliderFillAmount_20();
		float L_26;
		L_26 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(((float)((float)L_23)), ((float)((float)L_24)), L_25, /*hidden argument*/NULL);
		UITriggerGazeSlider_set_Value_m1A353BD18E4197DF9EAA836DD4399A3B62996578(__this, il2cpp_codegen_cast_double_to_int<int32_t>(L_26), /*hidden argument*/NULL);
		// _sliderGraphics.UpdateValueText(Value);
		UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * L_27 = __this->get__sliderGraphics_19();
		int32_t L_28;
		L_28 = UITriggerGazeSlider_get_Value_mF5BA2ADCB66AFCCE9D35CEB3177BA3BA5AA71B7C_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_27);
		UIGazeSliderGraphics_UpdateValueText_m4E15273691EEB69BE31038F64DB35DD7FB2F895B(L_27, L_28, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 Tobii.XR.UITriggerGazeSlider::GetRelativeControllerMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  UITriggerGazeSlider_GetRelativeControllerMovement_mD8D7E9A7AC285B2C8EC782F5934E6CAB66DF94FE (UITriggerGazeSlider_t0A8BB5E0FD17F213EDA17FB7FDBB192FA2C5A08E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return transform.InverseTransformVector(ControllerManager.Instance.Velocity) * _xScaleLossy *
		//        Time.deltaTime;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C_il2cpp_TypeInfo_var);
		ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C * L_1;
		L_1 = ControllerManager_get_Instance_mCCB8E5F1F32355FE08FF4FA8586941951592A250(/*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = ControllerManager_get_Velocity_m445F035834607667B7C956F1746E9E2B737CB890_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_InverseTransformVector_mAE27324FC01E136CF80D1A414AC10BA7616024C4(L_0, L_2, /*hidden argument*/NULL);
		float L_4 = __this->get__xScaleLossy_18();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_3, L_4, /*hidden argument*/NULL);
		float L_6;
		L_6 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Boolean Tobii.XR.UITriggerGazeSlider::TryingToDragOutsideOfScope()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UITriggerGazeSlider_TryingToDragOutsideOfScope_m65A81194CBF5FE4F69A9ACCD04C65DB632ADF76E (UITriggerGazeSlider_t0A8BB5E0FD17F213EDA17FB7FDBB192FA2C5A08E * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// var movingRight = 0 < _incrementedMoveAmount;
		float L_0 = __this->get__incrementedMoveAmount_14();
		// var endOfSlider = _currentStep == _maxValue - _minValue;
		int32_t L_1 = __this->get__currentStep_12();
		int32_t L_2 = __this->get__maxValue_8();
		int32_t L_3 = __this->get__minValue_7();
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_3))))? 1 : 0);
		// var movingLeft = _incrementedMoveAmount < 0;
		float L_4 = __this->get__incrementedMoveAmount_14();
		V_1 = (bool)((((float)L_4) < ((float)(0.0f)))? 1 : 0);
		// var beginningOfSlider = _currentStep == 0;
		int32_t L_5 = __this->get__currentStep_12();
		V_2 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		// return (movingRight && endOfSlider) || (movingLeft && beginningOfSlider);
		bool L_6 = V_0;
		if (((int32_t)((int32_t)((((float)(0.0f)) < ((float)L_0))? 1 : 0)&(int32_t)L_6)))
		{
			goto IL_0043;
		}
	}
	{
		bool L_7 = V_1;
		bool L_8 = V_2;
		return (bool)((int32_t)((int32_t)L_7&(int32_t)L_8));
	}

IL_0043:
	{
		return (bool)1;
	}
}
// System.Boolean Tobii.XR.UITriggerGazeSlider::SliderValueOutsideBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UITriggerGazeSlider_SliderValueOutsideBounds_mE2A9F2D7A6A6082101DCBEDD3EC39DB170F9B6EA (UITriggerGazeSlider_t0A8BB5E0FD17F213EDA17FB7FDBB192FA2C5A08E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3550D924947D14C05AF4029FAE8CAF702E26DBCB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_maxValue <= _minValue)
		int32_t L_0 = __this->get__maxValue_8();
		int32_t L_1 = __this->get__minValue_7();
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0059;
		}
	}
	{
		// if (!_debugHasBeenLogged)
		bool L_2 = __this->get__debugHasBeenLogged_11();
		if (L_2)
		{
			goto IL_0057;
		}
	}
	{
		// Debug.LogErrorFormat("{0}'s maximum value ({1}) has to be bigger that the minimum value ({2})",
		//     gameObject.name, _maxValue, _minValue);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_4;
		int32_t L_8 = __this->get__maxValue_8();
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_10);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = L_7;
		int32_t L_12 = __this->get__minValue_7();
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_14);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_mDBF43684A22EAAB187285C9B4174C9555DB11E83(_stringLiteral3550D924947D14C05AF4029FAE8CAF702E26DBCB, L_11, /*hidden argument*/NULL);
		// _debugHasBeenLogged = true;
		__this->set__debugHasBeenLogged_11((bool)1);
	}

IL_0057:
	{
		// return true;
		return (bool)1;
	}

IL_0059:
	{
		// _debugHasBeenLogged = false;
		__this->set__debugHasBeenLogged_11((bool)0);
		// return false;
		return (bool)0;
	}
}
// System.Void Tobii.XR.UITriggerGazeSlider::GazeFocusChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITriggerGazeSlider_GazeFocusChanged_m7F58480D8F22B7D82E979619C24AF54BDE6A3CF0 (UITriggerGazeSlider_t0A8BB5E0FD17F213EDA17FB7FDBB192FA2C5A08E * __this, bool ___hasFocus0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!enabled) return;
		bool L_0;
		L_0 = Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!enabled) return;
		return;
	}

IL_0009:
	{
		// _hasFocus = hasFocus;
		bool L_1 = ___hasFocus0;
		__this->set__hasFocus_16(L_1);
		// if (ControllerManager.Instance.GetButtonPress(TriggerButton)) return;
		IL2CPP_RUNTIME_CLASS_INIT(ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C_il2cpp_TypeInfo_var);
		ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C * L_2;
		L_2 = ControllerManager_get_Instance_mCCB8E5F1F32355FE08FF4FA8586941951592A250(/*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = ControllerManager_GetButtonPress_m27E4327C628C64D804E87464464BE073A4340E15(L_2, 3, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// if (ControllerManager.Instance.GetButtonPress(TriggerButton)) return;
		return;
	}

IL_001e:
	{
		// _sliderGraphics.StartVisualFeedbackAnimation(hasFocus);
		UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * L_4 = __this->get__sliderGraphics_19();
		bool L_5 = ___hasFocus0;
		NullCheck(L_4);
		UIGazeSliderGraphics_StartVisualFeedbackAnimation_mE1D2D8EE687238FEBF3671FC5E6528665EF210BE(L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Tobii.XR.UITriggerGazeSlider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITriggerGazeSlider__ctor_m3F35F832F69F2E9E2184D3C5C037371811EFDC41 (UITriggerGazeSlider_t0A8BB5E0FD17F213EDA17FB7FDBB192FA2C5A08E * __this, const RuntimeMethod* method)
{
	{
		// private float _controllerMovementMultiplier = 8f;
		__this->set__controllerMovementMultiplier_6((8.0f));
		// private int _maxValue = 1;
		__this->set__maxValue_8(1);
		// private float _hapticStrength = 0.05f;
		__this->set__hapticStrength_9((0.0500000007f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Tobii.XR.UITriggerGazeToggleButton::get_IsToggledOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UITriggerGazeToggleButton_get_IsToggledOn_m0AC0DC002D99955D2F9F65D690929058A72CDCF6 (UITriggerGazeToggleButton_t84661EDC6F01AC3F57A499DE2B60F8CCA0E0C462 * __this, const RuntimeMethod* method)
{
	{
		// get { return _isToggledOn; }
		bool L_0 = __this->get__isToggledOn_5();
		return L_0;
	}
}
// System.Void Tobii.XR.UITriggerGazeToggleButton::set_IsToggledOn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITriggerGazeToggleButton_set_IsToggledOn_mC6EDD120D7925033F525845E8CDDA0ED5FFDEFBB (UITriggerGazeToggleButton_t84661EDC6F01AC3F57A499DE2B60F8CCA0E0C462 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_m3CA0A236B3D5729DADE146B720B9B52DA0B07D6D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value == IsToggledOn) return;
		bool L_0 = ___value0;
		bool L_1;
		L_1 = UITriggerGazeToggleButton_get_IsToggledOn_m0AC0DC002D99955D2F9F65D690929058A72CDCF6_inline(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		// if (value == IsToggledOn) return;
		return;
	}

IL_000a:
	{
		// _isToggledOn = value;
		bool L_2 = ___value0;
		__this->set__isToggledOn_5(L_2);
		// if (OnButtonToggled != null)
		UIToggleEvent_t3025F2607AD11E28D3936621C944D224B4FCF15B * L_3 = __this->get_OnButtonToggled_4();
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		// OnButtonToggled.Invoke(gameObject, value);
		UIToggleEvent_t3025F2607AD11E28D3936621C944D224B4FCF15B * L_4 = __this->get_OnButtonToggled_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		bool L_6 = ___value0;
		NullCheck(L_4);
		UnityEvent_2_Invoke_m3CA0A236B3D5729DADE146B720B9B52DA0B07D6D(L_4, L_5, L_6, /*hidden argument*/UnityEvent_2_Invoke_m3CA0A236B3D5729DADE146B720B9B52DA0B07D6D_RuntimeMethod_var);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void Tobii.XR.UITriggerGazeToggleButton::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITriggerGazeToggleButton_Awake_m22052F30149065A5101343C925D15C0DF5E83BB5 (UITriggerGazeToggleButton_t84661EDC6F01AC3F57A499DE2B60F8CCA0E0C462 * __this, const RuntimeMethod* method)
{
	{
		// if (!_initialized)
		bool L_0 = __this->get__initialized_11();
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Initialize();
		UITriggerGazeToggleButton_Initialize_m51BD1A02D53124C392B7AF8C3B12AFB28D669183(__this, /*hidden argument*/NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void Tobii.XR.UITriggerGazeToggleButton::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITriggerGazeToggleButton_Update_mF56331BDB016144D6DA8823160A3F011EEE43890 (UITriggerGazeToggleButton_t84661EDC6F01AC3F57A499DE2B60F8CCA0E0C462 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ControllerManager.Instance.GetButtonPressDown(TriggerButton) && _hasFocus)
		IL2CPP_RUNTIME_CLASS_INIT(ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C_il2cpp_TypeInfo_var);
		ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C * L_0;
		L_0 = ControllerManager_get_Instance_mCCB8E5F1F32355FE08FF4FA8586941951592A250(/*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ControllerManager_GetButtonPressDown_mD85B5B10B50103C22823F47B178744810DAC4D4C(L_0, 3, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		bool L_2 = __this->get__hasFocus_8();
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// OnPressedDown();
		UITriggerGazeToggleButton_OnPressedDown_m9E086897AFC82D65B8596FAB05EFD269BE7D1405(__this, /*hidden argument*/NULL);
	}

IL_001b:
	{
		// if (ControllerManager.Instance.GetButtonPressUp(TriggerButton))
		IL2CPP_RUNTIME_CLASS_INIT(ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C_il2cpp_TypeInfo_var);
		ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C * L_3;
		L_3 = ControllerManager_get_Instance_mCCB8E5F1F32355FE08FF4FA8586941951592A250(/*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = ControllerManager_GetButtonPressUp_m9287E156E57F4916F09C4B0745CE810DEB2E7383(L_3, 3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0053;
		}
	}
	{
		// if (_buttonPressed)
		bool L_5 = __this->get__buttonPressed_9();
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		// Toggle();
		UITriggerGazeToggleButton_Toggle_m91F8F78D75AFAA032E9FFA97AD06110176CC8EFF(__this, /*hidden argument*/NULL);
	}

IL_0036:
	{
		// _uiGazeToggleButtonGraphics.StartVisualFeedbackAnimation(_hasFocus, _isToggledOn, _buttonPressed);
		UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * L_6 = __this->get__uiGazeToggleButtonGraphics_10();
		bool L_7 = __this->get__hasFocus_8();
		bool L_8 = __this->get__isToggledOn_5();
		bool L_9 = __this->get__buttonPressed_9();
		NullCheck(L_6);
		UIGazeToggleButtonGraphics_StartVisualFeedbackAnimation_mC9D119CEFD1A933CB90D66F43403B6F90235A8EB(L_6, L_7, L_8, L_9, /*hidden argument*/NULL);
	}

IL_0053:
	{
		// }
		return;
	}
}
// System.Void Tobii.XR.UITriggerGazeToggleButton::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITriggerGazeToggleButton_Initialize_m51BD1A02D53124C392B7AF8C3B12AFB28D669183 (UITriggerGazeToggleButton_t84661EDC6F01AC3F57A499DE2B60F8CCA0E0C462 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisUIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59_mF5A28883054A0C0B04D6E5B827C2389852E41FBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIToggleEvent_t3025F2607AD11E28D3936621C944D224B4FCF15B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _uiGazeToggleButtonGraphics = GetComponent<UIGazeToggleButtonGraphics>();
		UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * L_0;
		L_0 = Component_GetComponent_TisUIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59_mF5A28883054A0C0B04D6E5B827C2389852E41FBF(__this, /*hidden argument*/Component_GetComponent_TisUIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59_mF5A28883054A0C0B04D6E5B827C2389852E41FBF_RuntimeMethod_var);
		__this->set__uiGazeToggleButtonGraphics_10(L_0);
		// if (OnButtonToggled == null)
		UIToggleEvent_t3025F2607AD11E28D3936621C944D224B4FCF15B * L_1 = __this->get_OnButtonToggled_4();
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		// OnButtonToggled = new UIToggleEvent();
		UIToggleEvent_t3025F2607AD11E28D3936621C944D224B4FCF15B * L_2 = (UIToggleEvent_t3025F2607AD11E28D3936621C944D224B4FCF15B *)il2cpp_codegen_object_new(UIToggleEvent_t3025F2607AD11E28D3936621C944D224B4FCF15B_il2cpp_TypeInfo_var);
		UIToggleEvent__ctor_mE812914B131AF422EF11A3C9ACCA859B5FFF5DA5(L_2, /*hidden argument*/NULL);
		__this->set_OnButtonToggled_4(L_2);
	}

IL_001f:
	{
		// _initialized = true;
		__this->set__initialized_11((bool)1);
		// }
		return;
	}
}
// System.Void Tobii.XR.UITriggerGazeToggleButton::OnPressedDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITriggerGazeToggleButton_OnPressedDown_m9E086897AFC82D65B8596FAB05EFD269BE7D1405 (UITriggerGazeToggleButton_t84661EDC6F01AC3F57A499DE2B60F8CCA0E0C462 * __this, const RuntimeMethod* method)
{
	{
		// _buttonPressed = true;
		__this->set__buttonPressed_9((bool)1);
		// _uiGazeToggleButtonGraphics.StartVisualFeedbackAnimation(_hasFocus, _isToggledOn, _buttonPressed);
		UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * L_0 = __this->get__uiGazeToggleButtonGraphics_10();
		bool L_1 = __this->get__hasFocus_8();
		bool L_2 = __this->get__isToggledOn_5();
		bool L_3 = __this->get__buttonPressed_9();
		NullCheck(L_0);
		UIGazeToggleButtonGraphics_StartVisualFeedbackAnimation_mC9D119CEFD1A933CB90D66F43403B6F90235A8EB(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Tobii.XR.UITriggerGazeToggleButton::Toggle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITriggerGazeToggleButton_Toggle_m91F8F78D75AFAA032E9FFA97AD06110176CC8EFF (UITriggerGazeToggleButton_t84661EDC6F01AC3F57A499DE2B60F8CCA0E0C462 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!_initialized)
		bool L_0 = __this->get__initialized_11();
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Initialize();
		UITriggerGazeToggleButton_Initialize_m51BD1A02D53124C392B7AF8C3B12AFB28D669183(__this, /*hidden argument*/NULL);
	}

IL_000e:
	{
		// _buttonPressed = false;
		__this->set__buttonPressed_9((bool)0);
		// IsToggledOn = !IsToggledOn;
		bool L_1;
		L_1 = UITriggerGazeToggleButton_get_IsToggledOn_m0AC0DC002D99955D2F9F65D690929058A72CDCF6_inline(__this, /*hidden argument*/NULL);
		UITriggerGazeToggleButton_set_IsToggledOn_mC6EDD120D7925033F525845E8CDDA0ED5FFDEFBB(__this, (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		// ControllerManager.Instance.TriggerHapticPulse(HapticStrength);
		IL2CPP_RUNTIME_CLASS_INIT(ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C_il2cpp_TypeInfo_var);
		ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C * L_2;
		L_2 = ControllerManager_get_Instance_mCCB8E5F1F32355FE08FF4FA8586941951592A250(/*hidden argument*/NULL);
		NullCheck(L_2);
		ControllerManager_TriggerHapticPulse_m2F471DAC20A5A36BAFCE2D0F1952B6278E84EC69(L_2, (0.100000001f), /*hidden argument*/NULL);
		// _uiGazeToggleButtonGraphics.StartVisualFeedbackAnimation(_hasFocus, _isToggledOn, _buttonPressed);
		UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * L_3 = __this->get__uiGazeToggleButtonGraphics_10();
		bool L_4 = __this->get__hasFocus_8();
		bool L_5 = __this->get__isToggledOn_5();
		bool L_6 = __this->get__buttonPressed_9();
		NullCheck(L_3);
		UIGazeToggleButtonGraphics_StartVisualFeedbackAnimation_mC9D119CEFD1A933CB90D66F43403B6F90235A8EB(L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		// _uiGazeToggleButtonGraphics.StartKnobAnimation(IsToggledOn);
		UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * L_7 = __this->get__uiGazeToggleButtonGraphics_10();
		bool L_8;
		L_8 = UITriggerGazeToggleButton_get_IsToggledOn_m0AC0DC002D99955D2F9F65D690929058A72CDCF6_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		UIGazeToggleButtonGraphics_StartKnobAnimation_m93884528628AAFA7F2C75DB45D4AE8513DD9A930(L_7, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Tobii.XR.UITriggerGazeToggleButton::ToggleOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITriggerGazeToggleButton_ToggleOff_m34224F7ED09D23DDB4E738AE80759C75F45CE9BF (UITriggerGazeToggleButton_t84661EDC6F01AC3F57A499DE2B60F8CCA0E0C462 * __this, const RuntimeMethod* method)
{
	{
		// if (!IsToggledOn) return;
		bool L_0;
		L_0 = UITriggerGazeToggleButton_get_IsToggledOn_m0AC0DC002D99955D2F9F65D690929058A72CDCF6_inline(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!IsToggledOn) return;
		return;
	}

IL_0009:
	{
		// Toggle();
		UITriggerGazeToggleButton_Toggle_m91F8F78D75AFAA032E9FFA97AD06110176CC8EFF(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Tobii.XR.UITriggerGazeToggleButton::ToggleOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITriggerGazeToggleButton_ToggleOn_m6758D4F173A16BF3BC73124AD2E37A6CBDB9FD62 (UITriggerGazeToggleButton_t84661EDC6F01AC3F57A499DE2B60F8CCA0E0C462 * __this, const RuntimeMethod* method)
{
	{
		// if (IsToggledOn) return;
		bool L_0;
		L_0 = UITriggerGazeToggleButton_get_IsToggledOn_m0AC0DC002D99955D2F9F65D690929058A72CDCF6_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (IsToggledOn) return;
		return;
	}

IL_0009:
	{
		// Toggle();
		UITriggerGazeToggleButton_Toggle_m91F8F78D75AFAA032E9FFA97AD06110176CC8EFF(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Tobii.XR.UITriggerGazeToggleButton::GazeFocusChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITriggerGazeToggleButton_GazeFocusChanged_m7D6AD0BFD8EC9121CBC08AEAED31F1A3B844A77A (UITriggerGazeToggleButton_t84661EDC6F01AC3F57A499DE2B60F8CCA0E0C462 * __this, bool ___hasFocus0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!enabled) return;
		bool L_0;
		L_0 = Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!enabled) return;
		return;
	}

IL_0009:
	{
		// _hasFocus = hasFocus;
		bool L_1 = ___hasFocus0;
		__this->set__hasFocus_8(L_1);
		// if (ControllerManager.Instance.GetButtonPress(TriggerButton)) return;
		IL2CPP_RUNTIME_CLASS_INIT(ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C_il2cpp_TypeInfo_var);
		ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C * L_2;
		L_2 = ControllerManager_get_Instance_mCCB8E5F1F32355FE08FF4FA8586941951592A250(/*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = ControllerManager_GetButtonPress_m27E4327C628C64D804E87464464BE073A4340E15(L_2, 3, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// if (ControllerManager.Instance.GetButtonPress(TriggerButton)) return;
		return;
	}

IL_001e:
	{
		// _uiGazeToggleButtonGraphics.StartVisualFeedbackAnimation(_hasFocus, _isToggledOn, _buttonPressed);
		UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * L_4 = __this->get__uiGazeToggleButtonGraphics_10();
		bool L_5 = __this->get__hasFocus_8();
		bool L_6 = __this->get__isToggledOn_5();
		bool L_7 = __this->get__buttonPressed_9();
		NullCheck(L_4);
		UIGazeToggleButtonGraphics_StartVisualFeedbackAnimation_mC9D119CEFD1A933CB90D66F43403B6F90235A8EB(L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Tobii.XR.UITriggerGazeToggleButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITriggerGazeToggleButton__ctor_m21C04DB79A4A1875891A5D175FC8B60D1C047128 (UITriggerGazeToggleButton_t84661EDC6F01AC3F57A499DE2B60F8CCA0E0C462 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Tobii.XR.Internal.AssemblyUtils/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mCC030A4DA0E709733FFB41ABED3B5EE4D2DBDB68 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tBC16F7556FA087545272E36FD9D2790DE039B327_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tBC16F7556FA087545272E36FD9D2790DE039B327 * L_0 = (U3CU3Ec_tBC16F7556FA087545272E36FD9D2790DE039B327 *)il2cpp_codegen_object_new(U3CU3Ec_tBC16F7556FA087545272E36FD9D2790DE039B327_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m1B50D574C76E2654021D36AD9D42B58D585AF283(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tBC16F7556FA087545272E36FD9D2790DE039B327_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBC16F7556FA087545272E36FD9D2790DE039B327_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Tobii.XR.Internal.AssemblyUtils/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1B50D574C76E2654021D36AD9D42B58D585AF283 (U3CU3Ec_tBC16F7556FA087545272E36FD9D2790DE039B327 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Type> Tobii.XR.Internal.AssemblyUtils/<>c::<EyetrackingProviderTypes>b__1_0(System.Reflection.Assembly)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CEyetrackingProviderTypesU3Eb__1_0_m7FA8598F590E4CD6279E6FC5CC41AA2CAA97B08D (U3CU3Ec_tBC16F7556FA087545272E36FD9D2790DE039B327 * __this, Assembly_t * ___s0, const RuntimeMethod* method)
{
	{
		// var types = (AppDomain.CurrentDomain.GetAssemblies().SelectMany(s => s.GetTypes()).Where(p => type.IsAssignableFrom(p) && p.IsClass));
		Assembly_t * L_0 = ___s0;
		NullCheck(L_0);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_1;
		L_1 = VirtFuncInvoker0< TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(17 /* System.Type[] System.Reflection.Assembly::GetTypes() */, L_0);
		return (RuntimeObject*)L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Tobii.XR.Internal.AssemblyUtils/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_mA27A29A516241160DC9DF6E4E7E95FECA3BF30F9 (U3CU3Ec__DisplayClass0_0_t8AA428BBDE450BAEDAF50A6FE80DB09E6FE06571 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Tobii.XR.Internal.AssemblyUtils/<>c__DisplayClass0_0::<EyetrackingProviderType>b__0(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass0_0_U3CEyetrackingProviderTypeU3Eb__0_mB363C9C42D94B49EBF24696684215FCB05E8D02B (U3CU3Ec__DisplayClass0_0_t8AA428BBDE450BAEDAF50A6FE80DB09E6FE06571 * __this, Type_t * ___t0, const RuntimeMethod* method)
{
	{
		// return EyetrackingProviderTypes().Where(t => t.FullName == typeName).FirstOrDefault();
		Type_t * L_0 = ___t0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Type::get_FullName() */, L_0);
		String_t* L_2 = __this->get_typeName_0();
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Tobii.XR.Internal.AssemblyUtils/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m6E794A471B51088955C3B912937813F300339AFD (U3CU3Ec__DisplayClass1_0_tB8AFD562969053C15173A4FB08AD7412A6D911A0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Tobii.XR.Internal.AssemblyUtils/<>c__DisplayClass1_0::<EyetrackingProviderTypes>b__1(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass1_0_U3CEyetrackingProviderTypesU3Eb__1_m6F6286E3A64283423378899EE3D35C1BB5712E2C (U3CU3Ec__DisplayClass1_0_tB8AFD562969053C15173A4FB08AD7412A6D911A0 * __this, Type_t * ___p0, const RuntimeMethod* method)
{
	{
		// var types = (AppDomain.CurrentDomain.GetAssemblies().SelectMany(s => s.GetTypes()).Where(p => type.IsAssignableFrom(p) && p.IsClass));
		Type_t * L_0 = __this->get_type_0();
		Type_t * L_1 = ___p0;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtFuncInvoker1< bool, Type_t * >::Invoke(116 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		Type_t * L_3 = ___p0;
		NullCheck(L_3);
		bool L_4;
		L_4 = Type_get_IsClass_m2D39ED0DAFC534D527F8B019DA8B90859A7CA787(L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0015:
	{
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Tobii.XR.Internal.TobiiEulaFile/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m042BF00C9C805CF54DF431FD9FCAC826B56D12EB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tCDA4616F789EF10766F6EE525B2FE845C62B4EC3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tCDA4616F789EF10766F6EE525B2FE845C62B4EC3 * L_0 = (U3CU3Ec_tCDA4616F789EF10766F6EE525B2FE845C62B4EC3 *)il2cpp_codegen_object_new(U3CU3Ec_tCDA4616F789EF10766F6EE525B2FE845C62B4EC3_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mF44E2483745B1DE9BDF0C99F0D5D233B01B66EBF(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tCDA4616F789EF10766F6EE525B2FE845C62B4EC3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCDA4616F789EF10766F6EE525B2FE845C62B4EC3_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Tobii.XR.Internal.TobiiEulaFile/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF44E2483745B1DE9BDF0C99F0D5D233B01B66EBF (U3CU3Ec_tCDA4616F789EF10766F6EE525B2FE845C62B4EC3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Tobii.XR.Internal.TobiiEulaFile Tobii.XR.Internal.TobiiEulaFile/<>c::<.cctor>b__6_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466 * U3CU3Ec_U3C_cctorU3Eb__6_0_m9E919CE5E3AEB9E2CDAD9BBDA7EDFC233AB4D8BD (U3CU3Ec_tCDA4616F789EF10766F6EE525B2FE845C62B4EC3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisTobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466_mB14A47319ED839FECE0ADF05ECF86BB0476E1501_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Func<TobiiEulaFile> LoadEulaFile = () => Resources.Load<TobiiEulaFile>(TobiiEulaFilePath);
		IL2CPP_RUNTIME_CLASS_INIT(TobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466_il2cpp_TypeInfo_var);
		String_t* L_0 = ((TobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466_StaticFields*)il2cpp_codegen_static_fields_for(TobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466_il2cpp_TypeInfo_var))->get_TobiiEulaFilePath_5();
		TobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466 * L_1;
		L_1 = Resources_Load_TisTobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466_mB14A47319ED839FECE0ADF05ECF86BB0476E1501(L_0, /*hidden argument*/Resources_Load_TisTobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466_mB14A47319ED839FECE0ADF05ECF86BB0476E1501_RuntimeMethod_var);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Tobii.XR.TobiiXR_Settings Tobii.XR.TobiiXR/TobiiXRInternal::get_Settings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0 * TobiiXRInternal_get_Settings_m354235BA058A474F6A31D75242258848511D5D24 (TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD * __this, const RuntimeMethod* method)
{
	{
		// public TobiiXR_Settings Settings { get; internal set; }
		TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0 * L_0 = __this->get_U3CSettingsU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Tobii.XR.TobiiXR/TobiiXRInternal::set_Settings(Tobii.XR.TobiiXR_Settings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TobiiXRInternal_set_Settings_m7DE46915ADF4B54D37AF20782BC8D8D50D1F676C (TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD * __this, TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0 * ___value0, const RuntimeMethod* method)
{
	{
		// public TobiiXR_Settings Settings { get; internal set; }
		TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0 * L_0 = ___value0;
		__this->set_U3CSettingsU3Ek__BackingField_0(L_0);
		return;
	}
}
// Tobii.XR.IEyeTrackingProvider Tobii.XR.TobiiXR/TobiiXRInternal::get_Provider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TobiiXRInternal_get_Provider_m07DAA2344CD8F0DC6E15E3D75489BE9578619F6C (TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD * __this, const RuntimeMethod* method)
{
	{
		// public IEyeTrackingProvider Provider { get; set; }
		RuntimeObject* L_0 = __this->get_U3CProviderU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Tobii.XR.TobiiXR/TobiiXRInternal::set_Provider(Tobii.XR.IEyeTrackingProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TobiiXRInternal_set_Provider_m2A33EB6E402AEFC61C5D516BE1AE55790854935B (TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// public IEyeTrackingProvider Provider { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CProviderU3Ek__BackingField_1(L_0);
		return;
	}
}
// Tobii.G2OM.G2OM Tobii.XR.TobiiXR/TobiiXRInternal::get_G2OM()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C * TobiiXRInternal_get_G2OM_m5C7F8E6CA9D0498B721C4899CFD49AE2107D968A (TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD * __this, const RuntimeMethod* method)
{
	{
		// public G2OM G2OM { get; internal set; }
		G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C * L_0 = __this->get_U3CG2OMU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Tobii.XR.TobiiXR/TobiiXRInternal::set_G2OM(Tobii.G2OM.G2OM)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TobiiXRInternal_set_G2OM_m8318A9FB4FD936B1E3E99CA396B10305BE9D6210 (TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD * __this, G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C * ___value0, const RuntimeMethod* method)
{
	{
		// public G2OM G2OM { get; internal set; }
		G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C * L_0 = ___value0;
		__this->set_U3CG2OMU3Ek__BackingField_2(L_0);
		return;
	}
}
// Tobii.XR.EyeTrackingFilterBase Tobii.XR.TobiiXR/TobiiXRInternal::get_Filter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EyeTrackingFilterBase_t898096B000FCA3A953F1A9BC81D2648D8CD3C66C * TobiiXRInternal_get_Filter_m26E857D8E8F2BEF62353F06F20698340AFDA2FFB (TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD * __this, const RuntimeMethod* method)
{
	{
		// get { return Settings == null ? null : Settings.EyeTrackingFilter; }
		TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0 * L_0;
		L_0 = TobiiXRInternal_get_Settings_m354235BA058A474F6A31D75242258848511D5D24_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0 * L_1;
		L_1 = TobiiXRInternal_get_Settings_m354235BA058A474F6A31D75242258848511D5D24_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		EyeTrackingFilterBase_t898096B000FCA3A953F1A9BC81D2648D8CD3C66C * L_2 = L_1->get_EyeTrackingFilter_3();
		return L_2;
	}

IL_0014:
	{
		return (EyeTrackingFilterBase_t898096B000FCA3A953F1A9BC81D2648D8CD3C66C *)NULL;
	}
}
// System.Void Tobii.XR.TobiiXR/TobiiXRInternal::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TobiiXRInternal__ctor_mEE195D7AB67BD58B59B863C6144C18071DFE419E (TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Tobii.XR.Internal.TobiiXR_Lifecycle/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m106E3A84892AA9E3C78E04DB2A787A15A80A2BC8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tCF809EE280FCA8E46728688925705891BCE185DB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tCF809EE280FCA8E46728688925705891BCE185DB * L_0 = (U3CU3Ec_tCF809EE280FCA8E46728688925705891BCE185DB *)il2cpp_codegen_object_new(U3CU3Ec_tCF809EE280FCA8E46728688925705891BCE185DB_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mFBBE00F0269CEF96B8E800D8003F3F757D08DB13(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tCF809EE280FCA8E46728688925705891BCE185DB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCF809EE280FCA8E46728688925705891BCE185DB_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Tobii.XR.Internal.TobiiXR_Lifecycle/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFBBE00F0269CEF96B8E800D8003F3F757D08DB13 (U3CU3Ec_tCF809EE280FCA8E46728688925705891BCE185DB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Tobii.XR.Internal.TobiiXR_Lifecycle/<>c::<.ctor>b__7_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__7_0_m5AAA90722319D81046F03D378DC8C4803F199138 (U3CU3Ec_tCF809EE280FCA8E46728688925705891BCE185DB * __this, const RuntimeMethod* method)
{
	{
		// public Action OnApplicationQuitAction = delegate { };
		return;
	}
}
// System.Void Tobii.XR.Internal.TobiiXR_Lifecycle/<>c::<.ctor>b__7_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__7_1_mB1A3837B0BEFB757FF17E6F20201A382A500FF46 (U3CU3Ec_tCF809EE280FCA8E46728688925705891BCE185DB * __this, const RuntimeMethod* method)
{
	{
		// public Action OnUpdateAction = delegate { };
		return;
	}
}
// System.Void Tobii.XR.Internal.TobiiXR_Lifecycle/<>c::<.ctor>b__7_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__7_2_m7994086901B229011858E7170DAB71D8DFF57999 (U3CU3Ec_tCF809EE280FCA8E46728688925705891BCE185DB * __this, const RuntimeMethod* method)
{
	{
		// public Action OnDisableAction = delegate { };
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Tobii.XR.TobiiXR_Settings/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m27B0D53EF6E5834A41FBF2037F00D4AE43D317E3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB863BCE9690BD07ADCB7EC7104291B12AEC27562_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tB863BCE9690BD07ADCB7EC7104291B12AEC27562 * L_0 = (U3CU3Ec_tB863BCE9690BD07ADCB7EC7104291B12AEC27562 *)il2cpp_codegen_object_new(U3CU3Ec_tB863BCE9690BD07ADCB7EC7104291B12AEC27562_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m5B4F6D431A50EAC510CF657134A7FE794F3804B4(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tB863BCE9690BD07ADCB7EC7104291B12AEC27562_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB863BCE9690BD07ADCB7EC7104291B12AEC27562_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Tobii.XR.TobiiXR_Settings/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5B4F6D431A50EAC510CF657134A7FE794F3804B4 (U3CU3Ec_tB863BCE9690BD07ADCB7EC7104291B12AEC27562 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Type Tobii.XR.TobiiXR_Settings/<>c::<GetProvider>b__18_0(Tobii.XR.TobiiXR_Settings/ProviderElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * U3CU3Ec_U3CGetProviderU3Eb__18_0_m3AD5BA8B1C76D17AE2C1F93E3F5DF8F00477F6F8 (U3CU3Ec_tB863BCE9690BD07ADCB7EC7104291B12AEC27562 * __this, ProviderElement_t76AE55D58DAD3043AE5CE90FE6B06F6C474697E9  ___element0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssemblyUtils_tA96C6CB138EFA919A345672B154FEFEEFE702552_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// .Select(element => AssemblyUtils.EyetrackingProviderType(element.TypeName))
		ProviderElement_t76AE55D58DAD3043AE5CE90FE6B06F6C474697E9  L_0 = ___element0;
		String_t* L_1 = L_0.get_TypeName_1();
		IL2CPP_RUNTIME_CLASS_INIT(AssemblyUtils_tA96C6CB138EFA919A345672B154FEFEEFE702552_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = AssemblyUtils_EyetrackingProviderType_m5435DA7C082293513F0AF581A4269512EE928567(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Tobii.XR.TobiiXR_Settings/<>c::<GetProvider>b__18_1(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetProviderU3Eb__18_1_m7A2FD166742E05AF9CDD8244B378BCC9441BA979 (U3CU3Ec_tB863BCE9690BD07ADCB7EC7104291B12AEC27562 * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// .Where(type => type != null)
		Type_t * L_0 = ___type0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0(L_0, (Type_t *)NULL, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Tobii.XR.TobiiXR_Settings/<>c::<GetProvider>b__18_2(Tobii.XR.IEyeTrackingProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetProviderU3Eb__18_2_m0EA4774C2078DCB7A9AFFEEC7D6CFC9F900D0B91 (U3CU3Ec_tB863BCE9690BD07ADCB7EC7104291B12AEC27562 * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEyeTrackingProvider_t04D6D65DC709128E4BE6CCF69F52197434C02F73_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// .FirstOrDefault(provider => provider.Initialize());
		RuntimeObject* L_0 = ___provider0;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean Tobii.XR.IEyeTrackingProvider::Initialize() */, IEyeTrackingProvider_t04D6D65DC709128E4BE6CCF69F52197434C02F73_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Tobii.XR.TobiiXR_Settings/ProviderElement
IL2CPP_EXTERN_C void ProviderElement_t76AE55D58DAD3043AE5CE90FE6B06F6C474697E9_marshal_pinvoke(const ProviderElement_t76AE55D58DAD3043AE5CE90FE6B06F6C474697E9& unmarshaled, ProviderElement_t76AE55D58DAD3043AE5CE90FE6B06F6C474697E9_marshaled_pinvoke& marshaled)
{
	marshaled.____displayName_0 = il2cpp_codegen_marshal_string(unmarshaled.get__displayName_0());
	marshaled.___TypeName_1 = il2cpp_codegen_marshal_string(unmarshaled.get_TypeName_1());
}
IL2CPP_EXTERN_C void ProviderElement_t76AE55D58DAD3043AE5CE90FE6B06F6C474697E9_marshal_pinvoke_back(const ProviderElement_t76AE55D58DAD3043AE5CE90FE6B06F6C474697E9_marshaled_pinvoke& marshaled, ProviderElement_t76AE55D58DAD3043AE5CE90FE6B06F6C474697E9& unmarshaled)
{
	unmarshaled.set__displayName_0(il2cpp_codegen_marshal_string_result(marshaled.____displayName_0));
	unmarshaled.set_TypeName_1(il2cpp_codegen_marshal_string_result(marshaled.___TypeName_1));
}
// Conversion method for clean up from marshalling of: Tobii.XR.TobiiXR_Settings/ProviderElement
IL2CPP_EXTERN_C void ProviderElement_t76AE55D58DAD3043AE5CE90FE6B06F6C474697E9_marshal_pinvoke_cleanup(ProviderElement_t76AE55D58DAD3043AE5CE90FE6B06F6C474697E9_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.____displayName_0);
	marshaled.____displayName_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___TypeName_1);
	marshaled.___TypeName_1 = NULL;
}
// Conversion methods for marshalling of: Tobii.XR.TobiiXR_Settings/ProviderElement
IL2CPP_EXTERN_C void ProviderElement_t76AE55D58DAD3043AE5CE90FE6B06F6C474697E9_marshal_com(const ProviderElement_t76AE55D58DAD3043AE5CE90FE6B06F6C474697E9& unmarshaled, ProviderElement_t76AE55D58DAD3043AE5CE90FE6B06F6C474697E9_marshaled_com& marshaled)
{
	marshaled.____displayName_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get__displayName_0());
	marshaled.___TypeName_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_TypeName_1());
}
IL2CPP_EXTERN_C void ProviderElement_t76AE55D58DAD3043AE5CE90FE6B06F6C474697E9_marshal_com_back(const ProviderElement_t76AE55D58DAD3043AE5CE90FE6B06F6C474697E9_marshaled_com& marshaled, ProviderElement_t76AE55D58DAD3043AE5CE90FE6B06F6C474697E9& unmarshaled)
{
	unmarshaled.set__displayName_0(il2cpp_codegen_marshal_bstring_result(marshaled.____displayName_0));
	unmarshaled.set_TypeName_1(il2cpp_codegen_marshal_bstring_result(marshaled.___TypeName_1));
}
// Conversion method for clean up from marshalling of: Tobii.XR.TobiiXR_Settings/ProviderElement
IL2CPP_EXTERN_C void ProviderElement_t76AE55D58DAD3043AE5CE90FE6B06F6C474697E9_marshal_com_cleanup(ProviderElement_t76AE55D58DAD3043AE5CE90FE6B06F6C474697E9_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.____displayName_0);
	marshaled.____displayName_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___TypeName_1);
	marshaled.___TypeName_1 = NULL;
}
// System.String Tobii.XR.TobiiXR_Settings/ProviderElement::get_DisplayName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ProviderElement_get_DisplayName_m2DA54327F8B059944CBEA3CF1695B2FF9F08F67F (ProviderElement_t76AE55D58DAD3043AE5CE90FE6B06F6C474697E9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssemblyUtils_tA96C6CB138EFA919A345672B154FEFEEFE702552_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D54E959817188DBAD9E65FA3DB55F06B70F5E3C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!string.IsNullOrEmpty(_displayName)) return _displayName;
		String_t* L_0 = __this->get__displayName_0();
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		// if (!string.IsNullOrEmpty(_displayName)) return _displayName;
		String_t* L_2 = __this->get__displayName_0();
		return L_2;
	}

IL_0014:
	{
		// if (string.IsNullOrEmpty(TypeName)) return "Unknown";
		String_t* L_3 = __this->get_TypeName_1();
		bool L_4;
		L_4 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		// if (string.IsNullOrEmpty(TypeName)) return "Unknown";
		return _stringLiteral5D54E959817188DBAD9E65FA3DB55F06B70F5E3C;
	}

IL_0027:
	{
		// _displayName = AssemblyUtils.GetCachedDisplayNameFor(TypeName);
		String_t* L_5 = __this->get_TypeName_1();
		IL2CPP_RUNTIME_CLASS_INIT(AssemblyUtils_tA96C6CB138EFA919A345672B154FEFEEFE702552_il2cpp_TypeInfo_var);
		String_t* L_6;
		L_6 = AssemblyUtils_GetCachedDisplayNameFor_m168F2D648E85341FB99D9B5C1EFBE9A62C9DABD1(L_5, /*hidden argument*/NULL);
		__this->set__displayName_0(L_6);
		// return _displayName;
		String_t* L_7 = __this->get__displayName_0();
		return L_7;
	}
}
IL2CPP_EXTERN_C  String_t* ProviderElement_get_DisplayName_m2DA54327F8B059944CBEA3CF1695B2FF9F08F67F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ProviderElement_t76AE55D58DAD3043AE5CE90FE6B06F6C474697E9 * _thisAdjusted = reinterpret_cast<ProviderElement_t76AE55D58DAD3043AE5CE90FE6B06F6C474697E9 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ProviderElement_get_DisplayName_m2DA54327F8B059944CBEA3CF1695B2FF9F08F67F(_thisAdjusted, method);
	return _returnValue;
}
// Tobii.XR.TobiiXR_Settings/ProviderElement Tobii.XR.TobiiXR_Settings/ProviderElement::FromProviderType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProviderElement_t76AE55D58DAD3043AE5CE90FE6B06F6C474697E9  ProviderElement_FromProviderType_m2D998802F34D2E0B3801C5713BC0950F3AB726E7 (Type_t * ___type0, const RuntimeMethod* method)
{
	ProviderElement_t76AE55D58DAD3043AE5CE90FE6B06F6C474697E9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new ProviderElement
		// {
		//     TypeName = type.FullName,
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(ProviderElement_t76AE55D58DAD3043AE5CE90FE6B06F6C474697E9 ));
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Type::get_FullName() */, L_0);
		(&V_0)->set_TypeName_1(L_1);
		ProviderElement_t76AE55D58DAD3043AE5CE90FE6B06F6C474697E9  L_2 = V_0;
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Tobii.XR.UIGazeButtonGraphics/<AnimateButton>d__20::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateButtonU3Ed__20__ctor_m0F3C28678D03D04DBA71FDC8A852190538A8A52E (U3CAnimateButtonU3Ed__20_t206BE52250D8631429CA487BD86A828BD76754A6 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Tobii.XR.UIGazeButtonGraphics/<AnimateButton>d__20::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateButtonU3Ed__20_System_IDisposable_Dispose_mE87427CD3C426299D75B34B15E1339C8CFA52C6D (U3CAnimateButtonU3Ed__20_t206BE52250D8631429CA487BD86A828BD76754A6 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Tobii.XR.UIGazeButtonGraphics/<AnimateButton>d__20::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAnimateButtonU3Ed__20_MoveNext_mF9AF6EAC8C92B5F9D0071A2170F32B0931F4BE50 (U3CAnimateButtonU3Ed__20_t206BE52250D8631429CA487BD86A828BD76754A6 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3 * V_1 = NULL;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0191;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// var startBackgroundColor = _buttonImage.color;
		UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3 * L_4 = V_1;
		NullCheck(L_4);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_5 = L_4->get__buttonImage_4();
		NullCheck(L_5);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6;
		L_6 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_5);
		__this->set_U3CstartBackgroundColorU3E5__2_6(L_6);
		// var startLabelColor = _label.color;
		UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3 * L_7 = V_1;
		NullCheck(L_7);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_8 = L_7->get__label_5();
		NullCheck(L_8);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_9;
		L_9 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_8);
		__this->set_U3CstartLabelColorU3E5__3_7(L_9);
		// var startButtonScale = _buttonRect.localScale;
		UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3 * L_10 = V_1;
		NullCheck(L_10);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_11 = L_10->get__buttonRect_16();
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_11, /*hidden argument*/NULL);
		__this->set_U3CstartButtonScaleU3E5__4_8(L_12);
		// var endBackgroundColor = _buttonDefaultColor;
		UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3 * L_13 = V_1;
		NullCheck(L_13);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_14 = L_13->get__buttonDefaultColor_17();
		__this->set_U3CendBackgroundColorU3E5__5_9(L_14);
		// var endLabelColor = _labelDefaultColor;
		UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3 * L_15 = V_1;
		NullCheck(L_15);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_16 = L_15->get__labelDefaultColor_18();
		__this->set_U3CendLabelColorU3E5__6_10(L_16);
		// var endButtonScale = _buttonDefaultScale;
		UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3 * L_17 = V_1;
		NullCheck(L_17);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = L_17->get__buttonDefaultScale_19();
		__this->set_U3CendButtonScaleU3E5__7_11(L_18);
		int32_t L_19 = __this->get_currentButtonState_3();
		V_2 = L_19;
		int32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)1)))
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)2)))
		{
			goto IL_00ba;
		}
	}
	{
		goto IL_00e9;
	}

IL_0089:
	{
		// endBackgroundColor = _backgroundFocusColor;
		UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3 * L_22 = V_1;
		NullCheck(L_22);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_23 = L_22->get__backgroundFocusColor_6();
		__this->set_U3CendBackgroundColorU3E5__5_9(L_23);
		// endLabelColor = _labelFocusColor;
		UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3 * L_24 = V_1;
		NullCheck(L_24);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_25 = L_24->get__labelFocusColor_7();
		__this->set_U3CendLabelColorU3E5__6_10(L_25);
		// endButtonScale *= _buttonFocusScale;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26 = __this->get_U3CendButtonScaleU3E5__7_11();
		UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3 * L_27 = V_1;
		NullCheck(L_27);
		float L_28 = L_27->get__buttonFocusScale_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_26, L_28, /*hidden argument*/NULL);
		__this->set_U3CendButtonScaleU3E5__7_11(L_29);
		// break;
		goto IL_00e9;
	}

IL_00ba:
	{
		// endBackgroundColor = _backgroundPressColor;
		UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3 * L_30 = V_1;
		NullCheck(L_30);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_31 = L_30->get__backgroundPressColor_11();
		__this->set_U3CendBackgroundColorU3E5__5_9(L_31);
		// endLabelColor = _labelPressColor;
		UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3 * L_32 = V_1;
		NullCheck(L_32);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_33 = L_32->get__labelPressColor_12();
		__this->set_U3CendLabelColorU3E5__6_10(L_33);
		// endButtonScale *= _buttonScaleOnPress;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34 = __this->get_U3CendButtonScaleU3E5__7_11();
		UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3 * L_35 = V_1;
		NullCheck(L_35);
		float L_36 = L_35->get__buttonScaleOnPress_13();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		L_37 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_34, L_36, /*hidden argument*/NULL);
		__this->set_U3CendButtonScaleU3E5__7_11(L_37);
	}

IL_00e9:
	{
		// var progress = 0f;
		__this->set_U3CprogressU3E5__8_12((0.0f));
		goto IL_0198;
	}

IL_00f9:
	{
		// progress += Time.deltaTime * (1f / duration);
		float L_38 = __this->get_U3CprogressU3E5__8_12();
		float L_39;
		L_39 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_40 = __this->get_duration_4();
		__this->set_U3CprogressU3E5__8_12(((float)il2cpp_codegen_add((float)L_38, (float)((float)il2cpp_codegen_multiply((float)L_39, (float)((float)((float)(1.0f)/(float)L_40)))))));
		// var animationProgress = animationCurve.Evaluate(progress);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_41 = __this->get_animationCurve_5();
		float L_42 = __this->get_U3CprogressU3E5__8_12();
		NullCheck(L_41);
		float L_43;
		L_43 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_41, L_42, /*hidden argument*/NULL);
		V_3 = L_43;
		// _buttonRect.localScale = Vector3.Lerp(startButtonScale, endButtonScale, animationProgress);
		UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3 * L_44 = V_1;
		NullCheck(L_44);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_45 = L_44->get__buttonRect_16();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46 = __this->get_U3CstartButtonScaleU3E5__4_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47 = __this->get_U3CendButtonScaleU3E5__7_11();
		float L_48 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_49;
		L_49 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_46, L_47, L_48, /*hidden argument*/NULL);
		NullCheck(L_45);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_45, L_49, /*hidden argument*/NULL);
		// _buttonImage.color = Color.Lerp(startBackgroundColor, endBackgroundColor, animationProgress);
		UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3 * L_50 = V_1;
		NullCheck(L_50);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_51 = L_50->get__buttonImage_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_52 = __this->get_U3CstartBackgroundColorU3E5__2_6();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_53 = __this->get_U3CendBackgroundColorU3E5__5_9();
		float L_54 = V_3;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_55;
		L_55 = Color_Lerp_mC986D7F29103536908D76BD8FC59AA11DC33C197(L_52, L_53, L_54, /*hidden argument*/NULL);
		NullCheck(L_51);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_51, L_55);
		// _label.color = Color.Lerp(startLabelColor, endLabelColor, animationProgress);
		UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3 * L_56 = V_1;
		NullCheck(L_56);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_57 = L_56->get__label_5();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_58 = __this->get_U3CstartLabelColorU3E5__3_7();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_59 = __this->get_U3CendLabelColorU3E5__6_10();
		float L_60 = V_3;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_61;
		L_61 = Color_Lerp_mC986D7F29103536908D76BD8FC59AA11DC33C197(L_58, L_59, L_60, /*hidden argument*/NULL);
		NullCheck(L_57);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_57, L_61);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0191:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0198:
	{
		// while (progress < 1f)
		float L_62 = __this->get_U3CprogressU3E5__8_12();
		if ((((float)L_62) < ((float)(1.0f))))
		{
			goto IL_00f9;
		}
	}
	{
		// _buttonAnimationCoroutine = null;
		UIGazeButtonGraphics_t7341196C5973577F34B93294C8491D828ED526B3 * L_63 = V_1;
		NullCheck(L_63);
		L_63->set__buttonAnimationCoroutine_20((Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 *)NULL);
		// }
		return (bool)0;
	}
}
// System.Object Tobii.XR.UIGazeButtonGraphics/<AnimateButton>d__20::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAnimateButtonU3Ed__20_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m16823844635BFB350EF3C27AB77CC13953BB385E (U3CAnimateButtonU3Ed__20_t206BE52250D8631429CA487BD86A828BD76754A6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Tobii.XR.UIGazeButtonGraphics/<AnimateButton>d__20::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateButtonU3Ed__20_System_Collections_IEnumerator_Reset_mF5012BBE7B56971CE8566835D0F9BB6232E75C20 (U3CAnimateButtonU3Ed__20_t206BE52250D8631429CA487BD86A828BD76754A6 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAnimateButtonU3Ed__20_System_Collections_IEnumerator_Reset_mF5012BBE7B56971CE8566835D0F9BB6232E75C20_RuntimeMethod_var)));
	}
}
// System.Object Tobii.XR.UIGazeButtonGraphics/<AnimateButton>d__20::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAnimateButtonU3Ed__20_System_Collections_IEnumerator_get_Current_m33D1B9810298EBBB8346C59CD7A339C60085C0C6 (U3CAnimateButtonU3Ed__20_t206BE52250D8631429CA487BD86A828BD76754A6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Tobii.XR.UIGazeSliderGraphics/<AnimateHandle>d__33::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateHandleU3Ed__33__ctor_mC2DBA88FBC4CD02EEB845387943B57AFDFDC6D3C (U3CAnimateHandleU3Ed__33_t25309B59592FBF6C583EA1A1A89E51814130219F * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Tobii.XR.UIGazeSliderGraphics/<AnimateHandle>d__33::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateHandleU3Ed__33_System_IDisposable_Dispose_m65CEBE65BF4D79DEAB4E463AF6D27987F37425EC (U3CAnimateHandleU3Ed__33_t25309B59592FBF6C583EA1A1A89E51814130219F * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Tobii.XR.UIGazeSliderGraphics/<AnimateHandle>d__33::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAnimateHandleU3Ed__33_MoveNext_m30D829C252D53C66EA99F1C985D847C452330595 (U3CAnimateHandleU3Ed__33_t25309B59592FBF6C583EA1A1A89E51814130219F * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * V_1 = NULL;
	U3CAnimateHandleU3Ed__33_t25309B59592FBF6C583EA1A1A89E51814130219F * G_B5_0 = NULL;
	U3CAnimateHandleU3Ed__33_t25309B59592FBF6C583EA1A1A89E51814130219F * G_B4_0 = NULL;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	U3CAnimateHandleU3Ed__33_t25309B59592FBF6C583EA1A1A89E51814130219F * G_B6_1 = NULL;
	U3CAnimateHandleU3Ed__33_t25309B59592FBF6C583EA1A1A89E51814130219F * G_B8_0 = NULL;
	U3CAnimateHandleU3Ed__33_t25309B59592FBF6C583EA1A1A89E51814130219F * G_B7_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B9_0;
	memset((&G_B9_0), 0, sizeof(G_B9_0));
	U3CAnimateHandleU3Ed__33_t25309B59592FBF6C583EA1A1A89E51814130219F * G_B9_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0113;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// var startHandleColor = _handleImage.color;
		UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * L_4 = V_1;
		NullCheck(L_4);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_5 = L_4->get__handleImage_6();
		NullCheck(L_5);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6;
		L_6 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_5);
		__this->set_U3CstartHandleColorU3E5__2_4(L_6);
		// var startHandleScale = _handleRect.localScale;
		UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * L_7 = V_1;
		NullCheck(L_7);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_8 = L_7->get__handleRect_21();
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_8, /*hidden argument*/NULL);
		__this->set_U3CstartHandleScaleU3E5__3_5(L_9);
		// var endHandleColor = hasFocus ? _handleOnTouchColor : _handleDefaultColor;
		bool L_10 = __this->get_hasFocus_3();
		G_B4_0 = __this;
		if (L_10)
		{
			G_B5_0 = __this;
			goto IL_0054;
		}
	}
	{
		UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * L_11 = V_1;
		NullCheck(L_11);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_12 = L_11->get__handleDefaultColor_26();
		G_B6_0 = L_12;
		G_B6_1 = G_B4_0;
		goto IL_005a;
	}

IL_0054:
	{
		UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * L_13 = V_1;
		NullCheck(L_13);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_14 = L_13->get__handleOnTouchColor_15();
		G_B6_0 = L_14;
		G_B6_1 = G_B5_0;
	}

IL_005a:
	{
		NullCheck(G_B6_1);
		G_B6_1->set_U3CendHandleColorU3E5__4_6(G_B6_0);
		// var endHandleScale = hasFocus ? _defaultHandleScale : Vector3.zero;
		bool L_15 = __this->get_hasFocus_3();
		G_B7_0 = __this;
		if (L_15)
		{
			G_B8_0 = __this;
			goto IL_006f;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		G_B9_0 = L_16;
		G_B9_1 = G_B7_0;
		goto IL_0075;
	}

IL_006f:
	{
		UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * L_17 = V_1;
		NullCheck(L_17);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = L_17->get__defaultHandleScale_28();
		G_B9_0 = L_18;
		G_B9_1 = G_B8_0;
	}

IL_0075:
	{
		NullCheck(G_B9_1);
		G_B9_1->set_U3CendHandleScaleU3E5__5_7(G_B9_0);
		// var progress = 0f;
		__this->set_U3CprogressU3E5__6_8((0.0f));
		goto IL_011a;
	}

IL_008a:
	{
		// progress += Time.deltaTime * (1f / _handleAnimationDuration);
		float L_19 = __this->get_U3CprogressU3E5__6_8();
		float L_20;
		L_20 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * L_21 = V_1;
		NullCheck(L_21);
		float L_22 = L_21->get__handleAnimationDuration_16();
		__this->set_U3CprogressU3E5__6_8(((float)il2cpp_codegen_add((float)L_19, (float)((float)il2cpp_codegen_multiply((float)L_20, (float)((float)((float)(1.0f)/(float)L_22)))))));
		// _handleImage.color = Color.Lerp(startHandleColor, endHandleColor, _handleAnimationCurve.Evaluate(progress));
		UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * L_23 = V_1;
		NullCheck(L_23);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_24 = L_23->get__handleImage_6();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_25 = __this->get_U3CstartHandleColorU3E5__2_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_26 = __this->get_U3CendHandleColorU3E5__4_6();
		UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * L_27 = V_1;
		NullCheck(L_27);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_28 = L_27->get__handleAnimationCurve_17();
		float L_29 = __this->get_U3CprogressU3E5__6_8();
		NullCheck(L_28);
		float L_30;
		L_30 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_28, L_29, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_31;
		L_31 = Color_Lerp_mC986D7F29103536908D76BD8FC59AA11DC33C197(L_25, L_26, L_30, /*hidden argument*/NULL);
		NullCheck(L_24);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_24, L_31);
		// _handleRect.localScale = Vector3.Lerp(startHandleScale, endHandleScale, _handleAnimationCurve.Evaluate(progress));
		UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * L_32 = V_1;
		NullCheck(L_32);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_33 = L_32->get__handleRect_21();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34 = __this->get_U3CstartHandleScaleU3E5__3_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35 = __this->get_U3CendHandleScaleU3E5__5_7();
		UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * L_36 = V_1;
		NullCheck(L_36);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_37 = L_36->get__handleAnimationCurve_17();
		float L_38 = __this->get_U3CprogressU3E5__6_8();
		NullCheck(L_37);
		float L_39;
		L_39 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_37, L_38, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40;
		L_40 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_34, L_35, L_39, /*hidden argument*/NULL);
		NullCheck(L_33);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_33, L_40, /*hidden argument*/NULL);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0113:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_011a:
	{
		// while (progress < 1f)
		float L_41 = __this->get_U3CprogressU3E5__6_8();
		if ((((float)L_41) < ((float)(1.0f))))
		{
			goto IL_008a;
		}
	}
	{
		// _handleAnimationCoroutine = null;
		UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * L_42 = V_1;
		NullCheck(L_42);
		L_42->set__handleAnimationCoroutine_20((Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 *)NULL);
		// }
		return (bool)0;
	}
}
// System.Object Tobii.XR.UIGazeSliderGraphics/<AnimateHandle>d__33::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAnimateHandleU3Ed__33_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m48D9E35D44BF3DFA55E6B7C5214201C41D1B1028 (U3CAnimateHandleU3Ed__33_t25309B59592FBF6C583EA1A1A89E51814130219F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Tobii.XR.UIGazeSliderGraphics/<AnimateHandle>d__33::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateHandleU3Ed__33_System_Collections_IEnumerator_Reset_m4C0CD86D0A1F3C9E74ADF6B0E388A2F5AAA9F467 (U3CAnimateHandleU3Ed__33_t25309B59592FBF6C583EA1A1A89E51814130219F * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAnimateHandleU3Ed__33_System_Collections_IEnumerator_Reset_m4C0CD86D0A1F3C9E74ADF6B0E388A2F5AAA9F467_RuntimeMethod_var)));
	}
}
// System.Object Tobii.XR.UIGazeSliderGraphics/<AnimateHandle>d__33::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAnimateHandleU3Ed__33_System_Collections_IEnumerator_get_Current_m408E3FED8D115ED0A38A463303BA64EB9EDEB827 (U3CAnimateHandleU3Ed__33_t25309B59592FBF6C583EA1A1A89E51814130219F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Tobii.XR.UIGazeSliderGraphics/<AnimateVisualFeedback>d__32::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVisualFeedbackU3Ed__32__ctor_m84F0C2C4B55FBA800F70A40F223235F5C4FC3A0A (U3CAnimateVisualFeedbackU3Ed__32_tAE9021EC3BD7C7D1730454554D4D341065B43175 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Tobii.XR.UIGazeSliderGraphics/<AnimateVisualFeedback>d__32::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVisualFeedbackU3Ed__32_System_IDisposable_Dispose_m474EF23CB6A34BD73DC967901FC1E2AE7315A0BA (U3CAnimateVisualFeedbackU3Ed__32_tAE9021EC3BD7C7D1730454554D4D341065B43175 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Tobii.XR.UIGazeSliderGraphics/<AnimateVisualFeedback>d__32::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAnimateVisualFeedbackU3Ed__32_MoveNext_m1658A4F08B5A22321E5B65C097F7718BC52BC762 (U3CAnimateVisualFeedbackU3Ed__32_tAE9021EC3BD7C7D1730454554D4D341065B43175 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * V_1 = NULL;
	U3CAnimateVisualFeedbackU3Ed__32_tAE9021EC3BD7C7D1730454554D4D341065B43175 * G_B5_0 = NULL;
	U3CAnimateVisualFeedbackU3Ed__32_tAE9021EC3BD7C7D1730454554D4D341065B43175 * G_B4_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	U3CAnimateVisualFeedbackU3Ed__32_tAE9021EC3BD7C7D1730454554D4D341065B43175 * G_B6_1 = NULL;
	U3CAnimateVisualFeedbackU3Ed__32_tAE9021EC3BD7C7D1730454554D4D341065B43175 * G_B8_0 = NULL;
	U3CAnimateVisualFeedbackU3Ed__32_tAE9021EC3BD7C7D1730454554D4D341065B43175 * G_B7_0 = NULL;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  G_B9_0;
	memset((&G_B9_0), 0, sizeof(G_B9_0));
	U3CAnimateVisualFeedbackU3Ed__32_tAE9021EC3BD7C7D1730454554D4D341065B43175 * G_B9_1 = NULL;
	U3CAnimateVisualFeedbackU3Ed__32_tAE9021EC3BD7C7D1730454554D4D341065B43175 * G_B11_0 = NULL;
	U3CAnimateVisualFeedbackU3Ed__32_tAE9021EC3BD7C7D1730454554D4D341065B43175 * G_B10_0 = NULL;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  G_B12_0;
	memset((&G_B12_0), 0, sizeof(G_B12_0));
	U3CAnimateVisualFeedbackU3Ed__32_tAE9021EC3BD7C7D1730454554D4D341065B43175 * G_B12_1 = NULL;
	U3CAnimateVisualFeedbackU3Ed__32_tAE9021EC3BD7C7D1730454554D4D341065B43175 * G_B14_0 = NULL;
	U3CAnimateVisualFeedbackU3Ed__32_tAE9021EC3BD7C7D1730454554D4D341065B43175 * G_B13_0 = NULL;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  G_B15_0;
	memset((&G_B15_0), 0, sizeof(G_B15_0));
	U3CAnimateVisualFeedbackU3Ed__32_tAE9021EC3BD7C7D1730454554D4D341065B43175 * G_B15_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_01d3;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// var startSliderScale = _sliderRect.localScale;
		UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * L_4 = V_1;
		NullCheck(L_4);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_5 = L_4->get__sliderRect_23();
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_5, /*hidden argument*/NULL);
		__this->set_U3CstartSliderScaleU3E5__2_4(L_6);
		// var endSliderScale = hasFocus ? _defaultSliderScale * _sliderFocusScale : _defaultSliderScale;
		bool L_7 = __this->get_hasFocus_3();
		G_B4_0 = __this;
		if (L_7)
		{
			G_B5_0 = __this;
			goto IL_0043;
		}
	}
	{
		UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * L_8 = V_1;
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = L_8->get__defaultSliderScale_29();
		G_B6_0 = L_9;
		G_B6_1 = G_B4_0;
		goto IL_0054;
	}

IL_0043:
	{
		UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * L_10 = V_1;
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = L_10->get__defaultSliderScale_29();
		UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * L_12 = V_1;
		NullCheck(L_12);
		float L_13 = L_12->get__sliderFocusScale_12();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_11, L_13, /*hidden argument*/NULL);
		G_B6_0 = L_14;
		G_B6_1 = G_B5_0;
	}

IL_0054:
	{
		NullCheck(G_B6_1);
		G_B6_1->set_U3CendSliderScaleU3E5__3_5(G_B6_0);
		// var startFilledColor = _fillImage.color;
		UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * L_15 = V_1;
		NullCheck(L_15);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_16 = L_15->get__fillImage_5();
		NullCheck(L_16);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_17;
		L_17 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_16);
		__this->set_U3CstartFilledColorU3E5__4_6(L_17);
		// var startLabelColor = _label.color;
		UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * L_18 = V_1;
		NullCheck(L_18);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_19 = L_18->get__label_8();
		NullCheck(L_19);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_20;
		L_20 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_19);
		__this->set_U3CstartLabelColorU3E5__5_7(L_20);
		// var startBackgroundColor = _backgroundImage.color;
		UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * L_21 = V_1;
		NullCheck(L_21);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_22 = L_21->get__backgroundImage_4();
		NullCheck(L_22);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_23;
		L_23 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_22);
		__this->set_U3CstartBackgroundColorU3E5__6_8(L_23);
		// var endFilledColor = hasFocus ? _fillFocusColor : _fillDefaultColor;
		bool L_24 = __this->get_hasFocus_3();
		G_B7_0 = __this;
		if (L_24)
		{
			G_B8_0 = __this;
			goto IL_009d;
		}
	}
	{
		UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * L_25 = V_1;
		NullCheck(L_25);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_26 = L_25->get__fillDefaultColor_25();
		G_B9_0 = L_26;
		G_B9_1 = G_B7_0;
		goto IL_00a3;
	}

IL_009d:
	{
		UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * L_27 = V_1;
		NullCheck(L_27);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_28 = L_27->get__fillFocusColor_10();
		G_B9_0 = L_28;
		G_B9_1 = G_B8_0;
	}

IL_00a3:
	{
		NullCheck(G_B9_1);
		G_B9_1->set_U3CendFilledColorU3E5__7_9(G_B9_0);
		// var endLabelColor = hasFocus ? _labelFocusColor : _labelDefaultColor;
		bool L_29 = __this->get_hasFocus_3();
		G_B10_0 = __this;
		if (L_29)
		{
			G_B11_0 = __this;
			goto IL_00b9;
		}
	}
	{
		UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * L_30 = V_1;
		NullCheck(L_30);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_31 = L_30->get__labelDefaultColor_27();
		G_B12_0 = L_31;
		G_B12_1 = G_B10_0;
		goto IL_00bf;
	}

IL_00b9:
	{
		UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * L_32 = V_1;
		NullCheck(L_32);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_33 = L_32->get__labelFocusColor_11();
		G_B12_0 = L_33;
		G_B12_1 = G_B11_0;
	}

IL_00bf:
	{
		NullCheck(G_B12_1);
		G_B12_1->set_U3CendLabelColorU3E5__8_10(G_B12_0);
		// var endBackgroundColor = hasFocus ? _backgroundFocusColor : _backgroundDefaultColor;
		bool L_34 = __this->get_hasFocus_3();
		G_B13_0 = __this;
		if (L_34)
		{
			G_B14_0 = __this;
			goto IL_00d5;
		}
	}
	{
		UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * L_35 = V_1;
		NullCheck(L_35);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_36 = L_35->get__backgroundDefaultColor_24();
		G_B15_0 = L_36;
		G_B15_1 = G_B13_0;
		goto IL_00db;
	}

IL_00d5:
	{
		UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * L_37 = V_1;
		NullCheck(L_37);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_38 = L_37->get__backgroundFocusColor_9();
		G_B15_0 = L_38;
		G_B15_1 = G_B14_0;
	}

IL_00db:
	{
		NullCheck(G_B15_1);
		G_B15_1->set_U3CendBackgroundColorU3E5__9_11(G_B15_0);
		// var progress = 0f;
		__this->set_U3CprogressU3E5__10_12((0.0f));
		goto IL_01da;
	}

IL_00f0:
	{
		// progress += Time.deltaTime * (1f / _visualFeedbackDuration);
		float L_39 = __this->get_U3CprogressU3E5__10_12();
		float L_40;
		L_40 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * L_41 = V_1;
		NullCheck(L_41);
		float L_42 = L_41->get__visualFeedbackDuration_13();
		__this->set_U3CprogressU3E5__10_12(((float)il2cpp_codegen_add((float)L_39, (float)((float)il2cpp_codegen_multiply((float)L_40, (float)((float)((float)(1.0f)/(float)L_42)))))));
		// _sliderRect.localScale = Vector3.Lerp(startSliderScale, endSliderScale, _visualFeedbackAnimationCurve.Evaluate(progress));
		UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * L_43 = V_1;
		NullCheck(L_43);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_44 = L_43->get__sliderRect_23();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45 = __this->get_U3CstartSliderScaleU3E5__2_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46 = __this->get_U3CendSliderScaleU3E5__3_5();
		UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * L_47 = V_1;
		NullCheck(L_47);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_48 = L_47->get__visualFeedbackAnimationCurve_14();
		float L_49 = __this->get_U3CprogressU3E5__10_12();
		NullCheck(L_48);
		float L_50;
		L_50 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_48, L_49, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51;
		L_51 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_45, L_46, L_50, /*hidden argument*/NULL);
		NullCheck(L_44);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_44, L_51, /*hidden argument*/NULL);
		// _fillImage.color = Color.Lerp(startFilledColor, endFilledColor, _visualFeedbackAnimationCurve.Evaluate(progress));
		UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * L_52 = V_1;
		NullCheck(L_52);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_53 = L_52->get__fillImage_5();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_54 = __this->get_U3CstartFilledColorU3E5__4_6();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_55 = __this->get_U3CendFilledColorU3E5__7_9();
		UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * L_56 = V_1;
		NullCheck(L_56);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_57 = L_56->get__visualFeedbackAnimationCurve_14();
		float L_58 = __this->get_U3CprogressU3E5__10_12();
		NullCheck(L_57);
		float L_59;
		L_59 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_57, L_58, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_60;
		L_60 = Color_Lerp_mC986D7F29103536908D76BD8FC59AA11DC33C197(L_54, L_55, L_59, /*hidden argument*/NULL);
		NullCheck(L_53);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_53, L_60);
		// _backgroundImage.color = Color.Lerp(startBackgroundColor, endBackgroundColor, _visualFeedbackAnimationCurve.Evaluate(progress));
		UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * L_61 = V_1;
		NullCheck(L_61);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_62 = L_61->get__backgroundImage_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_63 = __this->get_U3CstartBackgroundColorU3E5__6_8();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_64 = __this->get_U3CendBackgroundColorU3E5__9_11();
		UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * L_65 = V_1;
		NullCheck(L_65);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_66 = L_65->get__visualFeedbackAnimationCurve_14();
		float L_67 = __this->get_U3CprogressU3E5__10_12();
		NullCheck(L_66);
		float L_68;
		L_68 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_66, L_67, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_69;
		L_69 = Color_Lerp_mC986D7F29103536908D76BD8FC59AA11DC33C197(L_63, L_64, L_68, /*hidden argument*/NULL);
		NullCheck(L_62);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_62, L_69);
		// _label.color = Color.Lerp(startLabelColor, endLabelColor, _visualFeedbackAnimationCurve.Evaluate(progress));
		UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * L_70 = V_1;
		NullCheck(L_70);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_71 = L_70->get__label_8();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_72 = __this->get_U3CstartLabelColorU3E5__5_7();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_73 = __this->get_U3CendLabelColorU3E5__8_10();
		UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * L_74 = V_1;
		NullCheck(L_74);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_75 = L_74->get__visualFeedbackAnimationCurve_14();
		float L_76 = __this->get_U3CprogressU3E5__10_12();
		NullCheck(L_75);
		float L_77;
		L_77 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_75, L_76, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_78;
		L_78 = Color_Lerp_mC986D7F29103536908D76BD8FC59AA11DC33C197(L_72, L_73, L_77, /*hidden argument*/NULL);
		NullCheck(L_71);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_71, L_78);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_01d3:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_01da:
	{
		// while (progress < 1f)
		float L_79 = __this->get_U3CprogressU3E5__10_12();
		if ((((float)L_79) < ((float)(1.0f))))
		{
			goto IL_00f0;
		}
	}
	{
		// _visualFeedbackCoroutine = null;
		UIGazeSliderGraphics_tBC623EBB322315A78552BB6F1668F8F2808D5EB9 * L_80 = V_1;
		NullCheck(L_80);
		L_80->set__visualFeedbackCoroutine_19((Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 *)NULL);
		// }
		return (bool)0;
	}
}
// System.Object Tobii.XR.UIGazeSliderGraphics/<AnimateVisualFeedback>d__32::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAnimateVisualFeedbackU3Ed__32_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5A1C9DE9786E658066761E7ECAB5D6E9AC277773 (U3CAnimateVisualFeedbackU3Ed__32_tAE9021EC3BD7C7D1730454554D4D341065B43175 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Tobii.XR.UIGazeSliderGraphics/<AnimateVisualFeedback>d__32::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVisualFeedbackU3Ed__32_System_Collections_IEnumerator_Reset_mB1148DA62314881BAB22C748B1A2D66971515764 (U3CAnimateVisualFeedbackU3Ed__32_tAE9021EC3BD7C7D1730454554D4D341065B43175 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAnimateVisualFeedbackU3Ed__32_System_Collections_IEnumerator_Reset_mB1148DA62314881BAB22C748B1A2D66971515764_RuntimeMethod_var)));
	}
}
// System.Object Tobii.XR.UIGazeSliderGraphics/<AnimateVisualFeedback>d__32::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAnimateVisualFeedbackU3Ed__32_System_Collections_IEnumerator_get_Current_mA5F25419950B633A158586900FCF81E0925C56EF (U3CAnimateVisualFeedbackU3Ed__32_tAE9021EC3BD7C7D1730454554D4D341065B43175 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Tobii.XR.UIGazeToggleButtonGraphics/<AnimateVisualFeedback>d__31::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVisualFeedbackU3Ed__31__ctor_m3558178848775E69F07F3B7C332FBA6C4082B949 (U3CAnimateVisualFeedbackU3Ed__31_t07D3E601DC366CDB016FA37DE08D53A461AB2E7E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Tobii.XR.UIGazeToggleButtonGraphics/<AnimateVisualFeedback>d__31::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVisualFeedbackU3Ed__31_System_IDisposable_Dispose_mCECE68864D4AB73D3AD0757C985998EA49CCF2EB (U3CAnimateVisualFeedbackU3Ed__31_t07D3E601DC366CDB016FA37DE08D53A461AB2E7E * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Tobii.XR.UIGazeToggleButtonGraphics/<AnimateVisualFeedback>d__31::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAnimateVisualFeedbackU3Ed__31_MoveNext_m8E779C9A4F13EC4E92BB654E2D9477B134B71B2D (U3CAnimateVisualFeedbackU3Ed__31_t07D3E601DC366CDB016FA37DE08D53A461AB2E7E * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * V_1 = NULL;
	VisualStateColors_t977B626B553DECF2FCA446AB601620C118B1EDA9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	U3CAnimateVisualFeedbackU3Ed__31_t07D3E601DC366CDB016FA37DE08D53A461AB2E7E * G_B5_0 = NULL;
	U3CAnimateVisualFeedbackU3Ed__31_t07D3E601DC366CDB016FA37DE08D53A461AB2E7E * G_B4_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	U3CAnimateVisualFeedbackU3Ed__31_t07D3E601DC366CDB016FA37DE08D53A461AB2E7E * G_B6_1 = NULL;
	U3CAnimateVisualFeedbackU3Ed__31_t07D3E601DC366CDB016FA37DE08D53A461AB2E7E * G_B8_0 = NULL;
	U3CAnimateVisualFeedbackU3Ed__31_t07D3E601DC366CDB016FA37DE08D53A461AB2E7E * G_B7_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B9_0;
	memset((&G_B9_0), 0, sizeof(G_B9_0));
	U3CAnimateVisualFeedbackU3Ed__31_t07D3E601DC366CDB016FA37DE08D53A461AB2E7E * G_B9_1 = NULL;
	U3CAnimateVisualFeedbackU3Ed__31_t07D3E601DC366CDB016FA37DE08D53A461AB2E7E * G_B11_0 = NULL;
	U3CAnimateVisualFeedbackU3Ed__31_t07D3E601DC366CDB016FA37DE08D53A461AB2E7E * G_B10_0 = NULL;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  G_B12_0;
	memset((&G_B12_0), 0, sizeof(G_B12_0));
	U3CAnimateVisualFeedbackU3Ed__31_t07D3E601DC366CDB016FA37DE08D53A461AB2E7E * G_B12_1 = NULL;
	U3CAnimateVisualFeedbackU3Ed__31_t07D3E601DC366CDB016FA37DE08D53A461AB2E7E * G_B14_0 = NULL;
	U3CAnimateVisualFeedbackU3Ed__31_t07D3E601DC366CDB016FA37DE08D53A461AB2E7E * G_B13_0 = NULL;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  G_B15_0;
	memset((&G_B15_0), 0, sizeof(G_B15_0));
	U3CAnimateVisualFeedbackU3Ed__31_t07D3E601DC366CDB016FA37DE08D53A461AB2E7E * G_B15_1 = NULL;
	U3CAnimateVisualFeedbackU3Ed__31_t07D3E601DC366CDB016FA37DE08D53A461AB2E7E * G_B17_0 = NULL;
	U3CAnimateVisualFeedbackU3Ed__31_t07D3E601DC366CDB016FA37DE08D53A461AB2E7E * G_B16_0 = NULL;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  G_B18_0;
	memset((&G_B18_0), 0, sizeof(G_B18_0));
	U3CAnimateVisualFeedbackU3Ed__31_t07D3E601DC366CDB016FA37DE08D53A461AB2E7E * G_B18_1 = NULL;
	U3CAnimateVisualFeedbackU3Ed__31_t07D3E601DC366CDB016FA37DE08D53A461AB2E7E * G_B20_0 = NULL;
	U3CAnimateVisualFeedbackU3Ed__31_t07D3E601DC366CDB016FA37DE08D53A461AB2E7E * G_B19_0 = NULL;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  G_B21_0;
	memset((&G_B21_0), 0, sizeof(G_B21_0));
	U3CAnimateVisualFeedbackU3Ed__31_t07D3E601DC366CDB016FA37DE08D53A461AB2E7E * G_B21_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0257;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// var startKnobScale = _knobTransform.localScale;
		UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * L_4 = V_1;
		NullCheck(L_4);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_5 = L_4->get__knobTransform_24();
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_5, /*hidden argument*/NULL);
		__this->set_U3CstartKnobScaleU3E5__2_6(L_6);
		// var endKnobScale = hasFocus ? _knobDefaultScale * _knobFocusScale : _knobDefaultScale;
		bool L_7 = __this->get_hasFocus_3();
		G_B4_0 = __this;
		if (L_7)
		{
			G_B5_0 = __this;
			goto IL_0043;
		}
	}
	{
		UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * L_8 = V_1;
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = L_8->get__knobDefaultScale_25();
		G_B6_0 = L_9;
		G_B6_1 = G_B4_0;
		goto IL_0054;
	}

IL_0043:
	{
		UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * L_10 = V_1;
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = L_10->get__knobDefaultScale_25();
		UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * L_12 = V_1;
		NullCheck(L_12);
		float L_13 = L_12->get__knobFocusScale_19();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_11, L_13, /*hidden argument*/NULL);
		G_B6_0 = L_14;
		G_B6_1 = G_B5_0;
	}

IL_0054:
	{
		NullCheck(G_B6_1);
		G_B6_1->set_U3CendKnobScaleU3E5__3_7(G_B6_0);
		// var startButtonScale = _buttonTransform.localScale;
		UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * L_15 = V_1;
		NullCheck(L_15);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_16 = L_15->get__buttonTransform_4();
		NullCheck(L_16);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_16, /*hidden argument*/NULL);
		__this->set_U3CstartButtonScaleU3E5__4_8(L_17);
		// var endButtonScale = hasFocus ? _buttonDefaultScale * _buttonFocusScale : _buttonDefaultScale;
		bool L_18 = __this->get_hasFocus_3();
		G_B7_0 = __this;
		if (L_18)
		{
			G_B8_0 = __this;
			goto IL_007b;
		}
	}
	{
		UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * L_19 = V_1;
		NullCheck(L_19);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = L_19->get__buttonDefaultScale_26();
		G_B9_0 = L_20;
		G_B9_1 = G_B7_0;
		goto IL_008c;
	}

IL_007b:
	{
		UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * L_21 = V_1;
		NullCheck(L_21);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = L_21->get__buttonDefaultScale_26();
		UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * L_23 = V_1;
		NullCheck(L_23);
		float L_24 = L_23->get__buttonFocusScale_18();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_22, L_24, /*hidden argument*/NULL);
		G_B9_0 = L_25;
		G_B9_1 = G_B8_0;
	}

IL_008c:
	{
		NullCheck(G_B9_1);
		G_B9_1->set_U3CendButtonScaleU3E5__5_9(G_B9_0);
		// var startKnobColor = _knobImage.color;
		UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * L_26 = V_1;
		NullCheck(L_26);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_27 = L_26->get__knobImage_8();
		NullCheck(L_27);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_28;
		L_28 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_27);
		__this->set_U3CstartKnobColorU3E5__6_10(L_28);
		// var endKnobColor = hasFocus ? _knobFocusColor : _knobDefaultColor;
		bool L_29 = __this->get_hasFocus_3();
		G_B10_0 = __this;
		if (L_29)
		{
			G_B11_0 = __this;
			goto IL_00b3;
		}
	}
	{
		UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * L_30 = V_1;
		NullCheck(L_30);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_31 = L_30->get__knobDefaultColor_11();
		G_B12_0 = L_31;
		G_B12_1 = G_B10_0;
		goto IL_00b9;
	}

IL_00b3:
	{
		UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * L_32 = V_1;
		NullCheck(L_32);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_33 = L_32->get__knobFocusColor_12();
		G_B12_0 = L_33;
		G_B12_1 = G_B11_0;
	}

IL_00b9:
	{
		NullCheck(G_B12_1);
		G_B12_1->set_U3CendKnobColorU3E5__7_11(G_B12_0);
		// var startLabelColor = _label.color;
		UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * L_34 = V_1;
		NullCheck(L_34);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_35 = L_34->get__label_5();
		NullCheck(L_35);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_36;
		L_36 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_35);
		__this->set_U3CstartLabelColorU3E5__8_12(L_36);
		// var endLabelColor = hasFocus ? _labelFocusColor : _labelDefaultColor;
		bool L_37 = __this->get_hasFocus_3();
		G_B13_0 = __this;
		if (L_37)
		{
			G_B14_0 = __this;
			goto IL_00e0;
		}
	}
	{
		UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * L_38 = V_1;
		NullCheck(L_38);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_39 = L_38->get__labelDefaultColor_13();
		G_B15_0 = L_39;
		G_B15_1 = G_B13_0;
		goto IL_00e6;
	}

IL_00e0:
	{
		UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * L_40 = V_1;
		NullCheck(L_40);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_41 = L_40->get__labelFocusColor_14();
		G_B15_0 = L_41;
		G_B15_1 = G_B14_0;
	}

IL_00e6:
	{
		NullCheck(G_B15_1);
		G_B15_1->set_U3CendLabelColorU3E5__9_13(G_B15_0);
		// var startBackgroundColor = _backgroundImage.color;
		UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * L_42 = V_1;
		NullCheck(L_42);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_43 = L_42->get__backgroundImage_6();
		NullCheck(L_43);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_44;
		L_44 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_43);
		__this->set_U3CstartBackgroundColorU3E5__10_14(L_44);
		// var startOutlineColor = _outlineImage.color;
		UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * L_45 = V_1;
		NullCheck(L_45);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_46 = L_45->get__outlineImage_7();
		NullCheck(L_46);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_47;
		L_47 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_46);
		__this->set_U3CstartOutlineColorU3E5__11_15(L_47);
		// var currentStateColors = GetStateColors(isToggledOn, isButtonPressed);
		UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * L_48 = V_1;
		bool L_49 = __this->get_isToggledOn_4();
		bool L_50 = __this->get_isButtonPressed_5();
		NullCheck(L_48);
		VisualStateColors_t977B626B553DECF2FCA446AB601620C118B1EDA9  L_51;
		L_51 = UIGazeToggleButtonGraphics_GetStateColors_mCF8EFF01F31BA249B5C881A2DFAA6AB44393DB03(L_48, L_49, L_50, /*hidden argument*/NULL);
		V_2 = L_51;
		// var endBackgroundColor = hasFocus ? currentStateColors.FocusBackgroundColor : currentStateColors.DefaultBackgroundColor;
		bool L_52 = __this->get_hasFocus_3();
		G_B16_0 = __this;
		if (L_52)
		{
			G_B17_0 = __this;
			goto IL_0131;
		}
	}
	{
		VisualStateColors_t977B626B553DECF2FCA446AB601620C118B1EDA9  L_53 = V_2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_54 = L_53.get_DefaultBackgroundColor_0();
		G_B18_0 = L_54;
		G_B18_1 = G_B16_0;
		goto IL_0137;
	}

IL_0131:
	{
		VisualStateColors_t977B626B553DECF2FCA446AB601620C118B1EDA9  L_55 = V_2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_56 = L_55.get_FocusBackgroundColor_1();
		G_B18_0 = L_56;
		G_B18_1 = G_B17_0;
	}

IL_0137:
	{
		NullCheck(G_B18_1);
		G_B18_1->set_U3CendBackgroundColorU3E5__12_16(G_B18_0);
		// var endOutlineColor = hasFocus ? currentStateColors.FocusOutlineColor : currentStateColors.DefaultOutlineColor;
		bool L_57 = __this->get_hasFocus_3();
		G_B19_0 = __this;
		if (L_57)
		{
			G_B20_0 = __this;
			goto IL_014d;
		}
	}
	{
		VisualStateColors_t977B626B553DECF2FCA446AB601620C118B1EDA9  L_58 = V_2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_59 = L_58.get_DefaultOutlineColor_2();
		G_B21_0 = L_59;
		G_B21_1 = G_B19_0;
		goto IL_0153;
	}

IL_014d:
	{
		VisualStateColors_t977B626B553DECF2FCA446AB601620C118B1EDA9  L_60 = V_2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_61 = L_60.get_FocusOutlineColor_3();
		G_B21_0 = L_61;
		G_B21_1 = G_B20_0;
	}

IL_0153:
	{
		NullCheck(G_B21_1);
		G_B21_1->set_U3CendOutlineColorU3E5__13_17(G_B21_0);
		// var progress = 0f;
		__this->set_U3CprogressU3E5__14_18((0.0f));
		goto IL_025e;
	}

IL_0168:
	{
		// progress += Time.deltaTime * (1f / _focusAnimationDuration);
		float L_62 = __this->get_U3CprogressU3E5__14_18();
		float L_63;
		L_63 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * L_64 = V_1;
		NullCheck(L_64);
		float L_65 = L_64->get__focusAnimationDuration_20();
		__this->set_U3CprogressU3E5__14_18(((float)il2cpp_codegen_add((float)L_62, (float)((float)il2cpp_codegen_multiply((float)L_63, (float)((float)((float)(1.0f)/(float)L_65)))))));
		// var animatedProgress = _focusAnimationCurve.Evaluate(progress);
		UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * L_66 = V_1;
		NullCheck(L_66);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_67 = L_66->get__focusAnimationCurve_21();
		float L_68 = __this->get_U3CprogressU3E5__14_18();
		NullCheck(L_67);
		float L_69;
		L_69 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_67, L_68, /*hidden argument*/NULL);
		V_3 = L_69;
		// _buttonTransform.localScale = Vector3.Lerp(startButtonScale, endButtonScale, animatedProgress);
		UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * L_70 = V_1;
		NullCheck(L_70);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_71 = L_70->get__buttonTransform_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_72 = __this->get_U3CstartButtonScaleU3E5__4_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_73 = __this->get_U3CendButtonScaleU3E5__5_9();
		float L_74 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_75;
		L_75 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_72, L_73, L_74, /*hidden argument*/NULL);
		NullCheck(L_71);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_71, L_75, /*hidden argument*/NULL);
		// _knobTransform.localScale = Vector3.Lerp(startKnobScale, endKnobScale, animatedProgress);
		UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * L_76 = V_1;
		NullCheck(L_76);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_77 = L_76->get__knobTransform_24();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_78 = __this->get_U3CstartKnobScaleU3E5__2_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_79 = __this->get_U3CendKnobScaleU3E5__3_7();
		float L_80 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_81;
		L_81 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_78, L_79, L_80, /*hidden argument*/NULL);
		NullCheck(L_77);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_77, L_81, /*hidden argument*/NULL);
		// _backgroundImage.color = Color.Lerp(startBackgroundColor, endBackgroundColor, animatedProgress);
		UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * L_82 = V_1;
		NullCheck(L_82);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_83 = L_82->get__backgroundImage_6();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_84 = __this->get_U3CstartBackgroundColorU3E5__10_14();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_85 = __this->get_U3CendBackgroundColorU3E5__12_16();
		float L_86 = V_3;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_87;
		L_87 = Color_Lerp_mC986D7F29103536908D76BD8FC59AA11DC33C197(L_84, L_85, L_86, /*hidden argument*/NULL);
		NullCheck(L_83);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_83, L_87);
		// _outlineImage.color = Color.Lerp(startOutlineColor, endOutlineColor, animatedProgress);
		UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * L_88 = V_1;
		NullCheck(L_88);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_89 = L_88->get__outlineImage_7();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_90 = __this->get_U3CstartOutlineColorU3E5__11_15();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_91 = __this->get_U3CendOutlineColorU3E5__13_17();
		float L_92 = V_3;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_93;
		L_93 = Color_Lerp_mC986D7F29103536908D76BD8FC59AA11DC33C197(L_90, L_91, L_92, /*hidden argument*/NULL);
		NullCheck(L_89);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_89, L_93);
		// _knobImage.color = Color.Lerp(startKnobColor, endKnobColor, animatedProgress);
		UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * L_94 = V_1;
		NullCheck(L_94);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_95 = L_94->get__knobImage_8();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_96 = __this->get_U3CstartKnobColorU3E5__6_10();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_97 = __this->get_U3CendKnobColorU3E5__7_11();
		float L_98 = V_3;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_99;
		L_99 = Color_Lerp_mC986D7F29103536908D76BD8FC59AA11DC33C197(L_96, L_97, L_98, /*hidden argument*/NULL);
		NullCheck(L_95);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_95, L_99);
		// _label.color = Color.Lerp(startLabelColor, endLabelColor, animatedProgress);
		UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * L_100 = V_1;
		NullCheck(L_100);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_101 = L_100->get__label_5();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_102 = __this->get_U3CstartLabelColorU3E5__8_12();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_103 = __this->get_U3CendLabelColorU3E5__9_13();
		float L_104 = V_3;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_105;
		L_105 = Color_Lerp_mC986D7F29103536908D76BD8FC59AA11DC33C197(L_102, L_103, L_104, /*hidden argument*/NULL);
		NullCheck(L_101);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_101, L_105);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0257:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_025e:
	{
		// while (progress < 1f)
		float L_106 = __this->get_U3CprogressU3E5__14_18();
		if ((((float)L_106) < ((float)(1.0f))))
		{
			goto IL_0168;
		}
	}
	{
		// _visualFeedbackCoroutine = null;
		UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * L_107 = V_1;
		NullCheck(L_107);
		L_107->set__visualFeedbackCoroutine_27((Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 *)NULL);
		// }
		return (bool)0;
	}
}
// System.Object Tobii.XR.UIGazeToggleButtonGraphics/<AnimateVisualFeedback>d__31::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAnimateVisualFeedbackU3Ed__31_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4EFB44259778BFB4A37DFC989D434C4F1EB855A0 (U3CAnimateVisualFeedbackU3Ed__31_t07D3E601DC366CDB016FA37DE08D53A461AB2E7E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Tobii.XR.UIGazeToggleButtonGraphics/<AnimateVisualFeedback>d__31::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVisualFeedbackU3Ed__31_System_Collections_IEnumerator_Reset_m1452E921ACD437F544A5A871DC2A34DD96426A60 (U3CAnimateVisualFeedbackU3Ed__31_t07D3E601DC366CDB016FA37DE08D53A461AB2E7E * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAnimateVisualFeedbackU3Ed__31_System_Collections_IEnumerator_Reset_m1452E921ACD437F544A5A871DC2A34DD96426A60_RuntimeMethod_var)));
	}
}
// System.Object Tobii.XR.UIGazeToggleButtonGraphics/<AnimateVisualFeedback>d__31::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAnimateVisualFeedbackU3Ed__31_System_Collections_IEnumerator_get_Current_mC47297E0955B598029337E2EE2F385CCB4A2D348 (U3CAnimateVisualFeedbackU3Ed__31_t07D3E601DC366CDB016FA37DE08D53A461AB2E7E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Tobii.XR.UIGazeToggleButtonGraphics/<MoveKnob>d__33::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveKnobU3Ed__33__ctor_mDFB617F7BA66952FFCB6B3DBDD16373DBEBE6F31 (U3CMoveKnobU3Ed__33_tE58824844149E1E88D502B3178B56C9A60997966 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Tobii.XR.UIGazeToggleButtonGraphics/<MoveKnob>d__33::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveKnobU3Ed__33_System_IDisposable_Dispose_m3D21678C35F0CF042C6CEB2580D270CA8A9ACA01 (U3CMoveKnobU3Ed__33_tE58824844149E1E88D502B3178B56C9A60997966 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Tobii.XR.UIGazeToggleButtonGraphics/<MoveKnob>d__33::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CMoveKnobU3Ed__33_MoveNext_m9E06510FB26530A35509EC22CD5AE705F77B200E (U3CMoveKnobU3Ed__33_tE58824844149E1E88D502B3178B56C9A60997966 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * V_1 = NULL;
	float V_2 = 0.0f;
	U3CMoveKnobU3Ed__33_tE58824844149E1E88D502B3178B56C9A60997966 * G_B5_0 = NULL;
	U3CMoveKnobU3Ed__33_tE58824844149E1E88D502B3178B56C9A60997966 * G_B4_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	U3CMoveKnobU3Ed__33_tE58824844149E1E88D502B3178B56C9A60997966 * G_B6_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00c3;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// var startPosition = _knobTransform.localPosition;
		UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * L_4 = V_1;
		NullCheck(L_4);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_5 = L_4->get__knobTransform_24();
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_5, /*hidden argument*/NULL);
		__this->set_U3CstartPositionU3E5__2_4(L_6);
		// var endPosition = isToggledOn ? _buttonOnPosition.localPosition : _buttonOffPosition.localPosition;
		bool L_7 = __this->get_isToggledOn_3();
		G_B4_0 = __this;
		if (L_7)
		{
			G_B5_0 = __this;
			goto IL_0048;
		}
	}
	{
		UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * L_8 = V_1;
		NullCheck(L_8);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_9 = L_8->get__buttonOffPosition_9();
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_9, /*hidden argument*/NULL);
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		goto IL_0053;
	}

IL_0048:
	{
		UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * L_11 = V_1;
		NullCheck(L_11);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_12 = L_11->get__buttonOnPosition_10();
		NullCheck(L_12);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_12, /*hidden argument*/NULL);
		G_B6_0 = L_13;
		G_B6_1 = G_B5_0;
	}

IL_0053:
	{
		NullCheck(G_B6_1);
		G_B6_1->set_U3CendPositionU3E5__3_5(G_B6_0);
		// var progress = 0f;
		__this->set_U3CprogressU3E5__4_6((0.0f));
		goto IL_00ca;
	}

IL_0065:
	{
		// progress += Time.deltaTime * (1f / _toggleAnimationDuration);
		float L_14 = __this->get_U3CprogressU3E5__4_6();
		float L_15;
		L_15 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * L_16 = V_1;
		NullCheck(L_16);
		float L_17 = L_16->get__toggleAnimationDuration_22();
		__this->set_U3CprogressU3E5__4_6(((float)il2cpp_codegen_add((float)L_14, (float)((float)il2cpp_codegen_multiply((float)L_15, (float)((float)((float)(1.0f)/(float)L_17)))))));
		// var animatedProgress = _toggleAnimationCurve.Evaluate(progress);
		UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * L_18 = V_1;
		NullCheck(L_18);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_19 = L_18->get__toggleAnimationCurve_23();
		float L_20 = __this->get_U3CprogressU3E5__4_6();
		NullCheck(L_19);
		float L_21;
		L_21 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_19, L_20, /*hidden argument*/NULL);
		V_2 = L_21;
		// _knobTransform.localPosition = Vector3.Lerp(startPosition, endPosition, animatedProgress);
		UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * L_22 = V_1;
		NullCheck(L_22);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_23 = L_22->get__knobTransform_24();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = __this->get_U3CstartPositionU3E5__2_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25 = __this->get_U3CendPositionU3E5__3_5();
		float L_26 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_24, L_25, L_26, /*hidden argument*/NULL);
		NullCheck(L_23);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_23, L_27, /*hidden argument*/NULL);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00c3:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00ca:
	{
		// while (progress < 1f)
		float L_28 = __this->get_U3CprogressU3E5__4_6();
		if ((((float)L_28) < ((float)(1.0f))))
		{
			goto IL_0065;
		}
	}
	{
		// _knobMovementCoroutine = null;
		UIGazeToggleButtonGraphics_t8E0BA86B50ED8D0AAD3EC4EA1DC5929486C69F59 * L_29 = V_1;
		NullCheck(L_29);
		L_29->set__knobMovementCoroutine_28((Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 *)NULL);
		// }
		return (bool)0;
	}
}
// System.Object Tobii.XR.UIGazeToggleButtonGraphics/<MoveKnob>d__33::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CMoveKnobU3Ed__33_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5D354E7DA5DDDDA1E861C8981281C17859D62740 (U3CMoveKnobU3Ed__33_tE58824844149E1E88D502B3178B56C9A60997966 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Tobii.XR.UIGazeToggleButtonGraphics/<MoveKnob>d__33::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveKnobU3Ed__33_System_Collections_IEnumerator_Reset_mC077DB8266FF6D6952502CC131D3305AA180BB76 (U3CMoveKnobU3Ed__33_tE58824844149E1E88D502B3178B56C9A60997966 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CMoveKnobU3Ed__33_System_Collections_IEnumerator_Reset_mC077DB8266FF6D6952502CC131D3305AA180BB76_RuntimeMethod_var)));
	}
}
// System.Object Tobii.XR.UIGazeToggleButtonGraphics/<MoveKnob>d__33::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CMoveKnobU3Ed__33_System_Collections_IEnumerator_get_Current_mCC9DFBC803392DA665183BDC25A780884785B549 (U3CMoveKnobU3Ed__33_tE58824844149E1E88D502B3178B56C9A60997966 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TobiiEulaFile_IsEulaAccepted_mA26F0FC64B26F2AFA842D039754947B2EF4409A1_inline (TobiiEulaFile_tAE111FBF16392D4AA6ACE02D9FDD3BA2DC497466 * __this, const RuntimeMethod* method)
{
	{
		// return _tobiiSDKEulaAccepted;
		bool L_0 = __this->get__tobiiSDKEulaAccepted_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD * TobiiXR_get_Internal_m032E70B662616FA297C5904142C2213B97834C79_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return _internal; }
		IL2CPP_RUNTIME_CLASS_INIT(TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_il2cpp_TypeInfo_var);
		TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD * L_0 = ((TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_StaticFields*)il2cpp_codegen_static_fields_for(TobiiXR_tEDA855C148BC2C373A40F4716D86018ED1CA8B03_il2cpp_TypeInfo_var))->get__internal_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C * TobiiXRInternal_get_G2OM_m5C7F8E6CA9D0498B721C4899CFD49AE2107D968A_inline (TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD * __this, const RuntimeMethod* method)
{
	{
		// public G2OM G2OM { get; internal set; }
		G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C * L_0 = __this->get_U3CG2OMU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C * G2OM_get_GazeFocusedObjects_mCC8E75B3D0A877B8E999F238EF0DF616AB8D274B_inline (G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C * __this, const RuntimeMethod* method)
{
	{
		// public List<FocusedCandidate> GazeFocusedObjects { get { return _gazeFocusedObjects; } }
		List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C * L_0 = __this->get__gazeFocusedObjects_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TobiiXRInternal_get_Provider_m07DAA2344CD8F0DC6E15E3D75489BE9578619F6C_inline (TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD * __this, const RuntimeMethod* method)
{
	{
		// public IEyeTrackingProvider Provider { get; set; }
		RuntimeObject* L_0 = __this->get_U3CProviderU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TobiiXRInternal_set_Settings_m7DE46915ADF4B54D37AF20782BC8D8D50D1F676C_inline (TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD * __this, TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0 * ___value0, const RuntimeMethod* method)
{
	{
		// public TobiiXR_Settings Settings { get; internal set; }
		TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0 * L_0 = ___value0;
		__this->set_U3CSettingsU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TobiiXRInternal_set_Provider_m2A33EB6E402AEFC61C5D516BE1AE55790854935B_inline (TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// public IEyeTrackingProvider Provider { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CProviderU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C * TobiiXR_Settings_get_G2OM_m7E33F91F0087382E37BB47A561FB5623911BD7F7_inline (TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0 * __this, const RuntimeMethod* method)
{
	{
		// public Tobii.G2OM.G2OM G2OM { get; set; }
		G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C * L_0 = __this->get_U3CG2OMU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TobiiXRInternal_set_G2OM_m8318A9FB4FD936B1E3E99CA396B10305BE9D6210_inline (TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD * __this, G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C * ___value0, const RuntimeMethod* method)
{
	{
		// public G2OM G2OM { get; internal set; }
		G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C * L_0 = ___value0;
		__this->set_U3CG2OMU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Image_get_fillAmount_mA6F275C1167931E2F166EA85058EF181D8008B09_inline (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, const RuntimeMethod* method)
{
	{
		// public float fillAmount { get { return m_FillAmount; } set { if (SetPropertyUtility.SetStruct(ref m_FillAmount, Mathf.Clamp01(value))) SetVerticesDirty(); } }
		float L_0 = __this->get_m_FillAmount_43();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UITouchpadGazeSlider_get_Value_mFDFE1A87B1824FC8F164F5209BB889944A1CC3D4_inline (UITouchpadGazeSlider_t92A4881810F3381D4454AD18E58E6D65F52AF7B3 * __this, const RuntimeMethod* method)
{
	{
		// get { return _value; }
		int32_t L_0 = __this->get__value_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UITouchpadGazeToggleButton_get_IsToggledOn_m6D62BD2CF17D699D7DAD8852D0626DBFE2CFED57_inline (UITouchpadGazeToggleButton_t47CD31E42D965D1D0A084EF01FA40A171AB3FC31 * __this, const RuntimeMethod* method)
{
	{
		// get { return _isToggledOn; }
		bool L_0 = __this->get__isToggledOn_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ControllerManager_get_Velocity_m445F035834607667B7C956F1746E9E2B737CB890_inline (ControllerManager_t4D1A56501D728CC8E4BC9516796BB35E0F04C43C * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Velocity => _velocity;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get__velocity_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UITriggerGazeSlider_get_Value_mF5BA2ADCB66AFCCE9D35CEB3177BA3BA5AA71B7C_inline (UITriggerGazeSlider_t0A8BB5E0FD17F213EDA17FB7FDBB192FA2C5A08E * __this, const RuntimeMethod* method)
{
	{
		// get { return _value; }
		int32_t L_0 = __this->get__value_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UITriggerGazeToggleButton_get_IsToggledOn_m0AC0DC002D99955D2F9F65D690929058A72CDCF6_inline (UITriggerGazeToggleButton_t84661EDC6F01AC3F57A499DE2B60F8CCA0E0C462 * __this, const RuntimeMethod* method)
{
	{
		// get { return _isToggledOn; }
		bool L_0 = __this->get__isToggledOn_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0 * TobiiXRInternal_get_Settings_m354235BA058A474F6A31D75242258848511D5D24_inline (TobiiXRInternal_t3F29A0B4191035F92B2C220DE64C875DBE2B61FD * __this, const RuntimeMethod* method)
{
	{
		// public TobiiXR_Settings Settings { get; internal set; }
		TobiiXR_Settings_tF241669D48C2B98A78804DFC6AEF87CB2A77BFC0 * L_0 = __this->get_U3CSettingsU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_0, /*hidden argument*/NULL);
		___t2 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___b1;
		float L_5 = L_4.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_x_2();
		float L_8 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___a0;
		float L_10 = L_9.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___b1;
		float L_12 = L_11.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ___a0;
		float L_14 = L_13.get_y_3();
		float L_15 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = ___a0;
		float L_17 = L_16.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = ___b1;
		float L_19 = L_18.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = ___a0;
		float L_21 = L_20.get_z_4();
		float L_22 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_23), ((float)il2cpp_codegen_add((float)L_3, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), (float)L_8)))), ((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)), (float)L_15)))), ((float)il2cpp_codegen_add((float)L_17, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_19, (float)L_21)), (float)L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
