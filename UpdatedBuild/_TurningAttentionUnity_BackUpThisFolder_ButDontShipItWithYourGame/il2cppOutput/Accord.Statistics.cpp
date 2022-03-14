#include "pch-cpp.hpp"

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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// Accord.Statistics.Testing.HypothesisTest`1<Accord.Statistics.Distributions.Univariate.FDistribution>
struct HypothesisTest_1_t88DF8117C6EC56E8F7F89ACB05C869AB5E08609A;
// Accord.Statistics.Testing.HypothesisTest`1<System.Object>
struct HypothesisTest_1_t8A13560E73DFB728B4249AC122D5C2D6D5248C05;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// Accord.Statistics.Distributions.DistributionBase
struct DistributionBase_t91525D27124E3E2592FB73101538DFE8969C59E3;
// Accord.Statistics.Distributions.Univariate.FDistribution
struct FDistribution_tB7E523FB42251AEF0DD0A978C7FD924B1F44B751;
// Accord.Statistics.Testing.FTest
struct FTest_tBADEC1B0592B891A8FF31F68DA8941A6176CD1B4;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.NotImplementedException
struct NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// Accord.Statistics.Distributions.Univariate.UnivariateContinuousDistribution
struct UnivariateContinuousDistribution_t446251C5E060A8F7E27FA73DB51112E74CC42D52;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;

IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FDistribution_tB7E523FB42251AEF0DD0A978C7FD924B1F44B751_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B;
IL2CPP_EXTERN_C String_t* _stringLiteral063E8C4565ED95F98E074B3982F11DF199CE97FF;
IL2CPP_EXTERN_C String_t* _stringLiteral1569B882AEC8890A2ADC74E456E4029D492EF56C;
IL2CPP_EXTERN_C String_t* _stringLiteral4AAA5AC46AA6735D23306EC0A3B80DE5357215CA;
IL2CPP_EXTERN_C String_t* _stringLiteralA985CBDEAFBFBA8D1316CC4E11260F2F627E60D2;
IL2CPP_EXTERN_C String_t* _stringLiteralCBABB42B80EBFA22AF32535DF3E5E7EFADD85AD0;
IL2CPP_EXTERN_C String_t* _stringLiteralD2EB07B4A1AFB21FC3987FBF15BA0CB4084C2633;
IL2CPP_EXTERN_C String_t* _stringLiteralD6F0F20BF78CCB476D13FBCEA46E8F34952610CB;
IL2CPP_EXTERN_C String_t* _stringLiteralEEB83F9F4FCD70F6BB27B2AEF91991EB0093ED12;
IL2CPP_EXTERN_C String_t* _stringLiteralFF5B8843CF2AEE9ED550015E07C17CE0A498851A;
IL2CPP_EXTERN_C const RuntimeMethod* FDistribution__ctor_mE98A9614212841B3981C14550F51F3BFA55583AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FTest_StatisticToPValue_m1D1EEEA7C7291C3D28568ED160FE2A0C906DDB21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HypothesisTest_1__ctor_m5158C544919B83B4DA0992BAD5AA7F6FFC29BDDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HypothesisTest_1_get_StatisticDistribution_m5F2CBB6856F581DAFC776A355F00BAA4CC552F41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HypothesisTest_1_get_Statistic_mCAB6A934A05938A91B95320BAA9F11B0E638C520_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HypothesisTest_1_get_Tail_m488C5C1773A665A2D28040346EAE84860E0D755A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HypothesisTest_1_set_PValue_mB066F966629C83167A9CBC42C7FDB131A0E1FC18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HypothesisTest_1_set_StatisticDistribution_m5077FBE04349809C60FD7EFBB91BE1390FFB14F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HypothesisTest_1_set_Statistic_m564D338B2EFD38D0FDCCDF237A37E80811ABF0B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HypothesisTest_1_set_Tail_mA6C447FF2D02CAEC7C0926024CEACC76D2EBD533_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnivariateContinuousDistribution_ComplementaryDistributionFunction_mBEC0D3AC7F0A8FC6AF390D7F22C594348615F80D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnivariateContinuousDistribution_DistributionFunction_m8E60CD0E897B8B69A804B05D36997A8DA5F52CE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnivariateContinuousDistribution_InnerDistributionFunction_mA7DCFD2E7E8DE953FE839CA8F401B2609A07F0DE_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t8546742A7CE63A1A32D670BD9C1D0ADEA95DB5CE 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// Accord.Statistics.Distributions.DistributionBase
struct DistributionBase_t91525D27124E3E2592FB73101538DFE8969C59E3  : public RuntimeObject
{
public:

public:
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


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// Accord.DoubleRange
struct DoubleRange_t35ED6CD8C06E5A91FCF12E55C7A89A4EE411646D 
{
public:
	// System.Double Accord.DoubleRange::min
	double ___min_0;
	// System.Double Accord.DoubleRange::max
	double ___max_1;

public:
	inline static int32_t get_offset_of_min_0() { return static_cast<int32_t>(offsetof(DoubleRange_t35ED6CD8C06E5A91FCF12E55C7A89A4EE411646D, ___min_0)); }
	inline double get_min_0() const { return ___min_0; }
	inline double* get_address_of_min_0() { return &___min_0; }
	inline void set_min_0(double value)
	{
		___min_0 = value;
	}

	inline static int32_t get_offset_of_max_1() { return static_cast<int32_t>(offsetof(DoubleRange_t35ED6CD8C06E5A91FCF12E55C7A89A4EE411646D, ___max_1)); }
	inline double get_max_1() const { return ___max_1; }
	inline double* get_address_of_max_1() { return &___max_1; }
	inline void set_max_1(double value)
	{
		___max_1 = value;
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


// Accord.Statistics.Distributions.Univariate.UnivariateContinuousDistribution
struct UnivariateContinuousDistribution_t446251C5E060A8F7E27FA73DB51112E74CC42D52  : public DistributionBase_t91525D27124E3E2592FB73101538DFE8969C59E3
{
public:

public:
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


// Accord.Statistics.Testing.DistributionTail
struct DistributionTail_tCA0B933F3CC06E24422240468366AE7BED5E08B1 
{
public:
	// System.Int32 Accord.Statistics.Testing.DistributionTail::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DistributionTail_tCA0B933F3CC06E24422240468366AE7BED5E08B1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// Accord.Statistics.Distributions.Univariate.FDistribution
struct FDistribution_tB7E523FB42251AEF0DD0A978C7FD924B1F44B751  : public UnivariateContinuousDistribution_t446251C5E060A8F7E27FA73DB51112E74CC42D52
{
public:
	// System.Int32 Accord.Statistics.Distributions.Univariate.FDistribution::d1
	int32_t ___d1_0;
	// System.Int32 Accord.Statistics.Distributions.Univariate.FDistribution::d2
	int32_t ___d2_1;
	// System.Double Accord.Statistics.Distributions.Univariate.FDistribution::b
	double ___b_2;

public:
	inline static int32_t get_offset_of_d1_0() { return static_cast<int32_t>(offsetof(FDistribution_tB7E523FB42251AEF0DD0A978C7FD924B1F44B751, ___d1_0)); }
	inline int32_t get_d1_0() const { return ___d1_0; }
	inline int32_t* get_address_of_d1_0() { return &___d1_0; }
	inline void set_d1_0(int32_t value)
	{
		___d1_0 = value;
	}

	inline static int32_t get_offset_of_d2_1() { return static_cast<int32_t>(offsetof(FDistribution_tB7E523FB42251AEF0DD0A978C7FD924B1F44B751, ___d2_1)); }
	inline int32_t get_d2_1() const { return ___d2_1; }
	inline int32_t* get_address_of_d2_1() { return &___d2_1; }
	inline void set_d2_1(int32_t value)
	{
		___d2_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(FDistribution_tB7E523FB42251AEF0DD0A978C7FD924B1F44B751, ___b_2)); }
	inline double get_b_2() const { return ___b_2; }
	inline double* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(double value)
	{
		___b_2 = value;
	}
};


// Accord.Statistics.Testing.TwoSampleHypothesis
struct TwoSampleHypothesis_t5ADD3DE7C839CF483A694C46C101C593BE094185 
{
public:
	// System.Int32 Accord.Statistics.Testing.TwoSampleHypothesis::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TwoSampleHypothesis_t5ADD3DE7C839CF483A694C46C101C593BE094185, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Accord.Statistics.Testing.HypothesisTest`1<Accord.Statistics.Distributions.Univariate.FDistribution>
struct HypothesisTest_1_t88DF8117C6EC56E8F7F89ACB05C869AB5E08609A  : public RuntimeObject
{
public:
	// System.Double Accord.Statistics.Testing.HypothesisTest`1::alpha
	double ___alpha_0;
	// TDistribution Accord.Statistics.Testing.HypothesisTest`1::<StatisticDistribution>k__BackingField
	FDistribution_tB7E523FB42251AEF0DD0A978C7FD924B1F44B751 * ___U3CStatisticDistributionU3Ek__BackingField_1;
	// System.Double Accord.Statistics.Testing.HypothesisTest`1::<PValue>k__BackingField
	double ___U3CPValueU3Ek__BackingField_2;
	// System.Double Accord.Statistics.Testing.HypothesisTest`1::<Statistic>k__BackingField
	double ___U3CStatisticU3Ek__BackingField_3;
	// Accord.Statistics.Testing.DistributionTail Accord.Statistics.Testing.HypothesisTest`1::<Tail>k__BackingField
	int32_t ___U3CTailU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_alpha_0() { return static_cast<int32_t>(offsetof(HypothesisTest_1_t88DF8117C6EC56E8F7F89ACB05C869AB5E08609A, ___alpha_0)); }
	inline double get_alpha_0() const { return ___alpha_0; }
	inline double* get_address_of_alpha_0() { return &___alpha_0; }
	inline void set_alpha_0(double value)
	{
		___alpha_0 = value;
	}

	inline static int32_t get_offset_of_U3CStatisticDistributionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(HypothesisTest_1_t88DF8117C6EC56E8F7F89ACB05C869AB5E08609A, ___U3CStatisticDistributionU3Ek__BackingField_1)); }
	inline FDistribution_tB7E523FB42251AEF0DD0A978C7FD924B1F44B751 * get_U3CStatisticDistributionU3Ek__BackingField_1() const { return ___U3CStatisticDistributionU3Ek__BackingField_1; }
	inline FDistribution_tB7E523FB42251AEF0DD0A978C7FD924B1F44B751 ** get_address_of_U3CStatisticDistributionU3Ek__BackingField_1() { return &___U3CStatisticDistributionU3Ek__BackingField_1; }
	inline void set_U3CStatisticDistributionU3Ek__BackingField_1(FDistribution_tB7E523FB42251AEF0DD0A978C7FD924B1F44B751 * value)
	{
		___U3CStatisticDistributionU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CStatisticDistributionU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPValueU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(HypothesisTest_1_t88DF8117C6EC56E8F7F89ACB05C869AB5E08609A, ___U3CPValueU3Ek__BackingField_2)); }
	inline double get_U3CPValueU3Ek__BackingField_2() const { return ___U3CPValueU3Ek__BackingField_2; }
	inline double* get_address_of_U3CPValueU3Ek__BackingField_2() { return &___U3CPValueU3Ek__BackingField_2; }
	inline void set_U3CPValueU3Ek__BackingField_2(double value)
	{
		___U3CPValueU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CStatisticU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(HypothesisTest_1_t88DF8117C6EC56E8F7F89ACB05C869AB5E08609A, ___U3CStatisticU3Ek__BackingField_3)); }
	inline double get_U3CStatisticU3Ek__BackingField_3() const { return ___U3CStatisticU3Ek__BackingField_3; }
	inline double* get_address_of_U3CStatisticU3Ek__BackingField_3() { return &___U3CStatisticU3Ek__BackingField_3; }
	inline void set_U3CStatisticU3Ek__BackingField_3(double value)
	{
		___U3CStatisticU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CTailU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(HypothesisTest_1_t88DF8117C6EC56E8F7F89ACB05C869AB5E08609A, ___U3CTailU3Ek__BackingField_4)); }
	inline int32_t get_U3CTailU3Ek__BackingField_4() const { return ___U3CTailU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CTailU3Ek__BackingField_4() { return &___U3CTailU3Ek__BackingField_4; }
	inline void set_U3CTailU3Ek__BackingField_4(int32_t value)
	{
		___U3CTailU3Ek__BackingField_4 = value;
	}
};


// Accord.Statistics.Testing.HypothesisTest`1<System.Object>
struct HypothesisTest_1_t8A13560E73DFB728B4249AC122D5C2D6D5248C05  : public RuntimeObject
{
public:
	// System.Double Accord.Statistics.Testing.HypothesisTest`1::alpha
	double ___alpha_0;
	// TDistribution Accord.Statistics.Testing.HypothesisTest`1::<StatisticDistribution>k__BackingField
	RuntimeObject * ___U3CStatisticDistributionU3Ek__BackingField_1;
	// System.Double Accord.Statistics.Testing.HypothesisTest`1::<PValue>k__BackingField
	double ___U3CPValueU3Ek__BackingField_2;
	// System.Double Accord.Statistics.Testing.HypothesisTest`1::<Statistic>k__BackingField
	double ___U3CStatisticU3Ek__BackingField_3;
	// Accord.Statistics.Testing.DistributionTail Accord.Statistics.Testing.HypothesisTest`1::<Tail>k__BackingField
	int32_t ___U3CTailU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_alpha_0() { return static_cast<int32_t>(offsetof(HypothesisTest_1_t8A13560E73DFB728B4249AC122D5C2D6D5248C05, ___alpha_0)); }
	inline double get_alpha_0() const { return ___alpha_0; }
	inline double* get_address_of_alpha_0() { return &___alpha_0; }
	inline void set_alpha_0(double value)
	{
		___alpha_0 = value;
	}

	inline static int32_t get_offset_of_U3CStatisticDistributionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(HypothesisTest_1_t8A13560E73DFB728B4249AC122D5C2D6D5248C05, ___U3CStatisticDistributionU3Ek__BackingField_1)); }
	inline RuntimeObject * get_U3CStatisticDistributionU3Ek__BackingField_1() const { return ___U3CStatisticDistributionU3Ek__BackingField_1; }
	inline RuntimeObject ** get_address_of_U3CStatisticDistributionU3Ek__BackingField_1() { return &___U3CStatisticDistributionU3Ek__BackingField_1; }
	inline void set_U3CStatisticDistributionU3Ek__BackingField_1(RuntimeObject * value)
	{
		___U3CStatisticDistributionU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CStatisticDistributionU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPValueU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(HypothesisTest_1_t8A13560E73DFB728B4249AC122D5C2D6D5248C05, ___U3CPValueU3Ek__BackingField_2)); }
	inline double get_U3CPValueU3Ek__BackingField_2() const { return ___U3CPValueU3Ek__BackingField_2; }
	inline double* get_address_of_U3CPValueU3Ek__BackingField_2() { return &___U3CPValueU3Ek__BackingField_2; }
	inline void set_U3CPValueU3Ek__BackingField_2(double value)
	{
		___U3CPValueU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CStatisticU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(HypothesisTest_1_t8A13560E73DFB728B4249AC122D5C2D6D5248C05, ___U3CStatisticU3Ek__BackingField_3)); }
	inline double get_U3CStatisticU3Ek__BackingField_3() const { return ___U3CStatisticU3Ek__BackingField_3; }
	inline double* get_address_of_U3CStatisticU3Ek__BackingField_3() { return &___U3CStatisticU3Ek__BackingField_3; }
	inline void set_U3CStatisticU3Ek__BackingField_3(double value)
	{
		___U3CStatisticU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CTailU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(HypothesisTest_1_t8A13560E73DFB728B4249AC122D5C2D6D5248C05, ___U3CTailU3Ek__BackingField_4)); }
	inline int32_t get_U3CTailU3Ek__BackingField_4() const { return ___U3CTailU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CTailU3Ek__BackingField_4() { return &___U3CTailU3Ek__BackingField_4; }
	inline void set_U3CTailU3Ek__BackingField_4(int32_t value)
	{
		___U3CTailU3Ek__BackingField_4 = value;
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// Accord.Statistics.Testing.FTest
struct FTest_tBADEC1B0592B891A8FF31F68DA8941A6176CD1B4  : public HypothesisTest_1_t88DF8117C6EC56E8F7F89ACB05C869AB5E08609A
{
public:
	// Accord.Statistics.Testing.TwoSampleHypothesis Accord.Statistics.Testing.FTest::<Hypothesis>k__BackingField
	int32_t ___U3CHypothesisU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CHypothesisU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(FTest_tBADEC1B0592B891A8FF31F68DA8941A6176CD1B4, ___U3CHypothesisU3Ek__BackingField_5)); }
	inline int32_t get_U3CHypothesisU3Ek__BackingField_5() const { return ___U3CHypothesisU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CHypothesisU3Ek__BackingField_5() { return &___U3CHypothesisU3Ek__BackingField_5; }
	inline void set_U3CHypothesisU3Ek__BackingField_5(int32_t value)
	{
		___U3CHypothesisU3Ek__BackingField_5 = value;
	}
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.NotImplementedException
struct NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void Accord.Statistics.Testing.HypothesisTest`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HypothesisTest_1__ctor_mCBA5E3A52FEDC1F7F778B8032476CFD0A999F59E_gshared (HypothesisTest_1_t8A13560E73DFB728B4249AC122D5C2D6D5248C05 * __this, const RuntimeMethod* method);
// System.Void Accord.Statistics.Testing.HypothesisTest`1<System.Object>::set_Statistic(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HypothesisTest_1_set_Statistic_mB3EAC218F1D865222532086CE28E243662678B35_gshared_inline (HypothesisTest_1_t8A13560E73DFB728B4249AC122D5C2D6D5248C05 * __this, double ___value0, const RuntimeMethod* method);
// System.Void Accord.Statistics.Testing.HypothesisTest`1<System.Object>::set_StatisticDistribution(TDistribution)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HypothesisTest_1_set_StatisticDistribution_mF21C31DFF21F5408EECF50D2A787F6D2690BEE60_gshared_inline (HypothesisTest_1_t8A13560E73DFB728B4249AC122D5C2D6D5248C05 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Void Accord.Statistics.Testing.HypothesisTest`1<System.Object>::set_Tail(Accord.Statistics.Testing.DistributionTail)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HypothesisTest_1_set_Tail_mB9C0CB044EE0DA447E309B645AED7E047CF7311D_gshared_inline (HypothesisTest_1_t8A13560E73DFB728B4249AC122D5C2D6D5248C05 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Double Accord.Statistics.Testing.HypothesisTest`1<System.Object>::get_Statistic()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double HypothesisTest_1_get_Statistic_m1C2402F4DDD7A01AEF2E1A07F30454FCA7936F53_gshared_inline (HypothesisTest_1_t8A13560E73DFB728B4249AC122D5C2D6D5248C05 * __this, const RuntimeMethod* method);
// System.Void Accord.Statistics.Testing.HypothesisTest`1<System.Object>::set_PValue(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HypothesisTest_1_set_PValue_m6D1565E6AD913D933EB4C6887822B82033374B2C_gshared_inline (HypothesisTest_1_t8A13560E73DFB728B4249AC122D5C2D6D5248C05 * __this, double ___value0, const RuntimeMethod* method);
// Accord.Statistics.Testing.DistributionTail Accord.Statistics.Testing.HypothesisTest`1<System.Object>::get_Tail()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HypothesisTest_1_get_Tail_m1F42BEC20D3425DE5C27628FE0C27C37B4551B1D_gshared_inline (HypothesisTest_1_t8A13560E73DFB728B4249AC122D5C2D6D5248C05 * __this, const RuntimeMethod* method);
// TDistribution Accord.Statistics.Testing.HypothesisTest`1<System.Object>::get_StatisticDistribution()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * HypothesisTest_1_get_StatisticDistribution_m0778DC3974770FFEC3A06B3B9975F76AFF0DAF12_gshared_inline (HypothesisTest_1_t8A13560E73DFB728B4249AC122D5C2D6D5248C05 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Accord.Statistics.Distributions.Univariate.FDistribution::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FDistribution__ctor_mE98A9614212841B3981C14550F51F3BFA55583AF (FDistribution_tB7E523FB42251AEF0DD0A978C7FD924B1F44B751 * __this, int32_t ___degrees10, int32_t ___degrees21, const RuntimeMethod* method);
// System.Void Accord.Statistics.Distributions.Univariate.UnivariateContinuousDistribution::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnivariateContinuousDistribution__ctor_m728252DABCE88801DC7D16B0F95C92D8FA5A9BC2 (UnivariateContinuousDistribution_t446251C5E060A8F7E27FA73DB51112E74CC42D52 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005 (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.Double Accord.Math.Beta::Function(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Beta_Function_m17E3BEBCF8D9BA1900F7280666A4A2F5563456DB (double ___a0, double ___b1, const RuntimeMethod* method);
// System.Void Accord.DoubleRange::.ctor(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoubleRange__ctor_m78B4297FE58266FD4F4FAFF32166239E41CA5830 (DoubleRange_t35ED6CD8C06E5A91FCF12E55C7A89A4EE411646D * __this, double ___min0, double ___max1, const RuntimeMethod* method);
// System.Double Accord.Math.Beta::Incomplete(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Beta_Incomplete_m4B05199F7E638416CB34809329BB448B36861034 (double ___a0, double ___b1, double ___x2, const RuntimeMethod* method);
// System.String System.Int32::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m246774E1922012AE787EB97743F42CB798B70CD8 (int32_t* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void Accord.Statistics.Testing.HypothesisTest`1<Accord.Statistics.Distributions.Univariate.FDistribution>::.ctor()
inline void HypothesisTest_1__ctor_m5158C544919B83B4DA0992BAD5AA7F6FFC29BDDF (HypothesisTest_1_t88DF8117C6EC56E8F7F89ACB05C869AB5E08609A * __this, const RuntimeMethod* method)
{
	((  void (*) (HypothesisTest_1_t88DF8117C6EC56E8F7F89ACB05C869AB5E08609A *, const RuntimeMethod*))HypothesisTest_1__ctor_mCBA5E3A52FEDC1F7F778B8032476CFD0A999F59E_gshared)(__this, method);
}
// System.Void Accord.Statistics.Testing.FTest::Compute(System.Double,System.Int32,System.Int32,Accord.Statistics.Testing.TwoSampleHypothesis)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FTest_Compute_m45D5B48976B18024BE0C8BE2B356CADF1A6B2169 (FTest_tBADEC1B0592B891A8FF31F68DA8941A6176CD1B4 * __this, double ___statistic0, int32_t ___d11, int32_t ___d22, int32_t ___alternate3, const RuntimeMethod* method);
// System.Void Accord.Statistics.Testing.HypothesisTest`1<Accord.Statistics.Distributions.Univariate.FDistribution>::set_Statistic(System.Double)
inline void HypothesisTest_1_set_Statistic_m564D338B2EFD38D0FDCCDF237A37E80811ABF0B7_inline (HypothesisTest_1_t88DF8117C6EC56E8F7F89ACB05C869AB5E08609A * __this, double ___value0, const RuntimeMethod* method)
{
	((  void (*) (HypothesisTest_1_t88DF8117C6EC56E8F7F89ACB05C869AB5E08609A *, double, const RuntimeMethod*))HypothesisTest_1_set_Statistic_mB3EAC218F1D865222532086CE28E243662678B35_gshared_inline)(__this, ___value0, method);
}
// System.Void Accord.Statistics.Testing.HypothesisTest`1<Accord.Statistics.Distributions.Univariate.FDistribution>::set_StatisticDistribution(TDistribution)
inline void HypothesisTest_1_set_StatisticDistribution_m5077FBE04349809C60FD7EFBB91BE1390FFB14F0_inline (HypothesisTest_1_t88DF8117C6EC56E8F7F89ACB05C869AB5E08609A * __this, FDistribution_tB7E523FB42251AEF0DD0A978C7FD924B1F44B751 * ___value0, const RuntimeMethod* method)
{
	((  void (*) (HypothesisTest_1_t88DF8117C6EC56E8F7F89ACB05C869AB5E08609A *, FDistribution_tB7E523FB42251AEF0DD0A978C7FD924B1F44B751 *, const RuntimeMethod*))HypothesisTest_1_set_StatisticDistribution_mF21C31DFF21F5408EECF50D2A787F6D2690BEE60_gshared_inline)(__this, ___value0, method);
}
// System.Void Accord.Statistics.Testing.FTest::set_Hypothesis(Accord.Statistics.Testing.TwoSampleHypothesis)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FTest_set_Hypothesis_mDDFB4E1A96C68BBD54B6EADEA5F169BBFFE06126_inline (FTest_tBADEC1B0592B891A8FF31F68DA8941A6176CD1B4 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Accord.Statistics.Testing.HypothesisTest`1<Accord.Statistics.Distributions.Univariate.FDistribution>::set_Tail(Accord.Statistics.Testing.DistributionTail)
inline void HypothesisTest_1_set_Tail_mA6C447FF2D02CAEC7C0926024CEACC76D2EBD533_inline (HypothesisTest_1_t88DF8117C6EC56E8F7F89ACB05C869AB5E08609A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (HypothesisTest_1_t88DF8117C6EC56E8F7F89ACB05C869AB5E08609A *, int32_t, const RuntimeMethod*))HypothesisTest_1_set_Tail_mB9C0CB044EE0DA447E309B645AED7E047CF7311D_gshared_inline)(__this, ___value0, method);
}
// System.Double Accord.Statistics.Testing.HypothesisTest`1<Accord.Statistics.Distributions.Univariate.FDistribution>::get_Statistic()
inline double HypothesisTest_1_get_Statistic_mCAB6A934A05938A91B95320BAA9F11B0E638C520_inline (HypothesisTest_1_t88DF8117C6EC56E8F7F89ACB05C869AB5E08609A * __this, const RuntimeMethod* method)
{
	return ((  double (*) (HypothesisTest_1_t88DF8117C6EC56E8F7F89ACB05C869AB5E08609A *, const RuntimeMethod*))HypothesisTest_1_get_Statistic_m1C2402F4DDD7A01AEF2E1A07F30454FCA7936F53_gshared_inline)(__this, method);
}
// System.Void Accord.Statistics.Testing.HypothesisTest`1<Accord.Statistics.Distributions.Univariate.FDistribution>::set_PValue(System.Double)
inline void HypothesisTest_1_set_PValue_mB066F966629C83167A9CBC42C7FDB131A0E1FC18_inline (HypothesisTest_1_t88DF8117C6EC56E8F7F89ACB05C869AB5E08609A * __this, double ___value0, const RuntimeMethod* method)
{
	((  void (*) (HypothesisTest_1_t88DF8117C6EC56E8F7F89ACB05C869AB5E08609A *, double, const RuntimeMethod*))HypothesisTest_1_set_PValue_m6D1565E6AD913D933EB4C6887822B82033374B2C_gshared_inline)(__this, ___value0, method);
}
// System.Boolean System.Double::IsNaN(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_IsNaN_m94415C98C2D7DCAA32A82E1911AC13958AAD4347 (double ___d0, const RuntimeMethod* method);
// System.Void System.Diagnostics.Trace::TraceWarning(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Trace_TraceWarning_mE63DDF83DE3F94FA44BDFD5EF2370C1512247EA0 (String_t* ___message0, const RuntimeMethod* method);
// Accord.Statistics.Testing.DistributionTail Accord.Statistics.Testing.HypothesisTest`1<Accord.Statistics.Distributions.Univariate.FDistribution>::get_Tail()
inline int32_t HypothesisTest_1_get_Tail_m488C5C1773A665A2D28040346EAE84860E0D755A_inline (HypothesisTest_1_t88DF8117C6EC56E8F7F89ACB05C869AB5E08609A * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HypothesisTest_1_t88DF8117C6EC56E8F7F89ACB05C869AB5E08609A *, const RuntimeMethod*))HypothesisTest_1_get_Tail_m1F42BEC20D3425DE5C27628FE0C27C37B4551B1D_gshared_inline)(__this, method);
}
// TDistribution Accord.Statistics.Testing.HypothesisTest`1<Accord.Statistics.Distributions.Univariate.FDistribution>::get_StatisticDistribution()
inline FDistribution_tB7E523FB42251AEF0DD0A978C7FD924B1F44B751 * HypothesisTest_1_get_StatisticDistribution_m5F2CBB6856F581DAFC776A355F00BAA4CC552F41_inline (HypothesisTest_1_t88DF8117C6EC56E8F7F89ACB05C869AB5E08609A * __this, const RuntimeMethod* method)
{
	return ((  FDistribution_tB7E523FB42251AEF0DD0A978C7FD924B1F44B751 * (*) (HypothesisTest_1_t88DF8117C6EC56E8F7F89ACB05C869AB5E08609A *, const RuntimeMethod*))HypothesisTest_1_get_StatisticDistribution_m0778DC3974770FFEC3A06B3B9975F76AFF0DAF12_gshared_inline)(__this, method);
}
// System.Void System.InvalidOperationException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m26BD2B620B5FBFA4376C16011C60E18A2EDC8E96 (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, const RuntimeMethod* method);
// System.Void Accord.Statistics.Distributions.DistributionBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistributionBase__ctor_m2A32DC565DE20E3BD526BF04EAD7BCC880F2C445 (DistributionBase_t91525D27124E3E2592FB73101538DFE8969C59E3 * __this, const RuntimeMethod* method);
// System.Double Accord.DoubleRange::get_Min()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double DoubleRange_get_Min_m4D1CF382319A77CC4C87D1E7777AE2963B1767B1_inline (DoubleRange_t35ED6CD8C06E5A91FCF12E55C7A89A4EE411646D * __this, const RuntimeMethod* method);
// System.Boolean System.Double::IsNegativeInfinity(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_IsNegativeInfinity_mC1D75A4899CED3409270190F7DC1042001C668D7 (double ___d0, const RuntimeMethod* method);
// System.Double Accord.DoubleRange::get_Max()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double DoubleRange_get_Max_m3B318075AF7EA3A68C89AA16AB698E4582E3973A_inline (DoubleRange_t35ED6CD8C06E5A91FCF12E55C7A89A4EE411646D * __this, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83 (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * __this, const RuntimeMethod* method);
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
// System.String Accord.Statistics.Distributions.DistributionBase::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DistributionBase_ToString_m1BCF83373EA4E4377C53F3BE75B795E73FBAFF44 (DistributionBase_t91525D27124E3E2592FB73101538DFE8969C59E3 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0;
		L_0 = VirtFuncInvoker2< String_t*, String_t*, RuntimeObject* >::Invoke(5 /* System.String Accord.Statistics.Distributions.DistributionBase::ToString(System.String,System.IFormatProvider) */, __this, (String_t*)NULL, (RuntimeObject*)NULL);
		return L_0;
	}
}
// System.Void Accord.Statistics.Distributions.DistributionBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistributionBase__ctor_m2A32DC565DE20E3BD526BF04EAD7BCC880F2C445 (DistributionBase_t91525D27124E3E2592FB73101538DFE8969C59E3 * __this, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Accord.Statistics.Distributions.Univariate.FDistribution::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FDistribution__ctor_m360D510267773311A1860A6566A7A0E372EBBC50 (FDistribution_tB7E523FB42251AEF0DD0A978C7FD924B1F44B751 * __this, const RuntimeMethod* method)
{
	{
		FDistribution__ctor_mE98A9614212841B3981C14550F51F3BFA55583AF(__this, 1, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Accord.Statistics.Distributions.Univariate.FDistribution::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FDistribution__ctor_mE98A9614212841B3981C14550F51F3BFA55583AF (FDistribution_tB7E523FB42251AEF0DD0A978C7FD924B1F44B751 * __this, int32_t ___degrees10, int32_t ___degrees21, const RuntimeMethod* method)
{
	{
		UnivariateContinuousDistribution__ctor_m728252DABCE88801DC7D16B0F95C92D8FA5A9BC2(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___degrees10;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_1 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFF5B8843CF2AEE9ED550015E07C17CE0A498851A)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA985CBDEAFBFBA8D1316CC4E11260F2F627E60D2)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FDistribution__ctor_mE98A9614212841B3981C14550F51F3BFA55583AF_RuntimeMethod_var)));
	}

IL_001a:
	{
		int32_t L_2 = ___degrees21;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_3 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFF5B8843CF2AEE9ED550015E07C17CE0A498851A)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA985CBDEAFBFBA8D1316CC4E11260F2F627E60D2)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FDistribution__ctor_mE98A9614212841B3981C14550F51F3BFA55583AF_RuntimeMethod_var)));
	}

IL_002e:
	{
		int32_t L_4 = ___degrees10;
		__this->set_d1_0(L_4);
		int32_t L_5 = ___degrees21;
		__this->set_d2_1(L_5);
		int32_t L_6 = ___degrees10;
		int32_t L_7 = ___degrees21;
		double L_8;
		L_8 = Beta_Function_m17E3BEBCF8D9BA1900F7280666A4A2F5563456DB(((double)il2cpp_codegen_multiply((double)((double)((double)L_6)), (double)(0.5))), ((double)il2cpp_codegen_multiply((double)((double)((double)L_7)), (double)(0.5))), /*hidden argument*/NULL);
		__this->set_b_2(L_8);
		return;
	}
}
// Accord.DoubleRange Accord.Statistics.Distributions.Univariate.FDistribution::get_Support()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleRange_t35ED6CD8C06E5A91FCF12E55C7A89A4EE411646D  FDistribution_get_Support_m902931FB6DD084E2324F0E71465CD6D1F54ABA09 (FDistribution_tB7E523FB42251AEF0DD0A978C7FD924B1F44B751 * __this, const RuntimeMethod* method)
{
	{
		DoubleRange_t35ED6CD8C06E5A91FCF12E55C7A89A4EE411646D  L_0;
		memset((&L_0), 0, sizeof(L_0));
		DoubleRange__ctor_m78B4297FE58266FD4F4FAFF32166239E41CA5830((&L_0), (0.0), (std::numeric_limits<double>::infinity()), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Double Accord.Statistics.Distributions.Univariate.FDistribution::InnerDistributionFunction(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double FDistribution_InnerDistributionFunction_m02B5FB874EBE58354AE37D25FDF98E54A35CE807 (FDistribution_tB7E523FB42251AEF0DD0A978C7FD924B1F44B751 * __this, double ___x0, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	{
		int32_t L_0 = __this->get_d1_0();
		double L_1 = ___x0;
		int32_t L_2 = __this->get_d1_0();
		double L_3 = ___x0;
		int32_t L_4 = __this->get_d2_1();
		V_0 = ((double)((double)((double)il2cpp_codegen_multiply((double)((double)((double)L_0)), (double)L_1))/(double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)((double)((double)L_2)), (double)L_3)), (double)((double)((double)L_4))))));
		int32_t L_5 = __this->get_d1_0();
		int32_t L_6 = __this->get_d2_1();
		double L_7 = V_0;
		double L_8;
		L_8 = Beta_Incomplete_m4B05199F7E638416CB34809329BB448B36861034(((double)il2cpp_codegen_multiply((double)((double)((double)L_5)), (double)(0.5))), ((double)il2cpp_codegen_multiply((double)((double)((double)L_6)), (double)(0.5))), L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Double Accord.Statistics.Distributions.Univariate.FDistribution::InnerComplementaryDistributionFunction(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double FDistribution_InnerComplementaryDistributionFunction_m1F43E617EB5E25B1B9946A54BCB53C00FF50AB86 (FDistribution_tB7E523FB42251AEF0DD0A978C7FD924B1F44B751 * __this, double ___x0, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	{
		int32_t L_0 = __this->get_d2_1();
		int32_t L_1 = __this->get_d2_1();
		int32_t L_2 = __this->get_d1_0();
		double L_3 = ___x0;
		V_0 = ((double)((double)((double)((double)L_0))/(double)((double)il2cpp_codegen_add((double)((double)((double)L_1)), (double)((double)il2cpp_codegen_multiply((double)((double)((double)L_2)), (double)L_3))))));
		int32_t L_4 = __this->get_d2_1();
		int32_t L_5 = __this->get_d1_0();
		double L_6 = V_0;
		double L_7;
		L_7 = Beta_Incomplete_m4B05199F7E638416CB34809329BB448B36861034(((double)il2cpp_codegen_multiply((double)((double)((double)L_4)), (double)(0.5))), ((double)il2cpp_codegen_multiply((double)((double)((double)L_5)), (double)(0.5))), L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Object Accord.Statistics.Distributions.Univariate.FDistribution::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * FDistribution_Clone_m8918BF66066055C4107A5860C7870A92B8881F98 (FDistribution_tB7E523FB42251AEF0DD0A978C7FD924B1F44B751 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FDistribution_tB7E523FB42251AEF0DD0A978C7FD924B1F44B751_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_d1_0();
		int32_t L_1 = __this->get_d2_1();
		FDistribution_tB7E523FB42251AEF0DD0A978C7FD924B1F44B751 * L_2 = (FDistribution_tB7E523FB42251AEF0DD0A978C7FD924B1F44B751 *)il2cpp_codegen_object_new(FDistribution_tB7E523FB42251AEF0DD0A978C7FD924B1F44B751_il2cpp_TypeInfo_var);
		FDistribution__ctor_mE98A9614212841B3981C14550F51F3BFA55583AF(L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String Accord.Statistics.Distributions.Univariate.FDistribution::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FDistribution_ToString_m2AE9D02BB1A332123E5FC242F347D770AB75CC20 (FDistribution_tB7E523FB42251AEF0DD0A978C7FD924B1F44B751 * __this, String_t* ___format0, RuntimeObject* ___formatProvider1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4AAA5AC46AA6735D23306EC0A3B80DE5357215CA);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t* L_0 = __this->get_address_of_d1_0();
		String_t* L_1 = ___format0;
		RuntimeObject* L_2 = ___formatProvider1;
		String_t* L_3;
		L_3 = Int32_ToString_m246774E1922012AE787EB97743F42CB798B70CD8((int32_t*)L_0, L_1, L_2, /*hidden argument*/NULL);
		int32_t* L_4 = __this->get_address_of_d2_1();
		String_t* L_5 = ___format0;
		RuntimeObject* L_6 = ___formatProvider1;
		String_t* L_7;
		L_7 = Int32_ToString_m246774E1922012AE787EB97743F42CB798B70CD8((int32_t*)L_4, L_5, L_6, /*hidden argument*/NULL);
		String_t* L_8;
		L_8 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral4AAA5AC46AA6735D23306EC0A3B80DE5357215CA, L_3, L_7, /*hidden argument*/NULL);
		return L_8;
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
// System.Void Accord.Statistics.Testing.FTest::set_Hypothesis(Accord.Statistics.Testing.TwoSampleHypothesis)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FTest_set_Hypothesis_mDDFB4E1A96C68BBD54B6EADEA5F169BBFFE06126 (FTest_tBADEC1B0592B891A8FF31F68DA8941A6176CD1B4 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CHypothesisU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Void Accord.Statistics.Testing.FTest::.ctor(System.Double,System.Double,System.Int32,System.Int32,Accord.Statistics.Testing.TwoSampleHypothesis)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FTest__ctor_mB307E4EC64EBBFCD13D088EE4EAE7A3E4F4BD96D (FTest_tBADEC1B0592B891A8FF31F68DA8941A6176CD1B4 * __this, double ___var10, double ___var21, int32_t ___d12, int32_t ___d23, int32_t ___alternate4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HypothesisTest_1__ctor_m5158C544919B83B4DA0992BAD5AA7F6FFC29BDDF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HypothesisTest_1__ctor_m5158C544919B83B4DA0992BAD5AA7F6FFC29BDDF(__this, /*hidden argument*/HypothesisTest_1__ctor_m5158C544919B83B4DA0992BAD5AA7F6FFC29BDDF_RuntimeMethod_var);
		double L_0 = ___var10;
		double L_1 = ___var21;
		int32_t L_2 = ___d12;
		int32_t L_3 = ___d23;
		int32_t L_4 = ___alternate4;
		FTest_Compute_m45D5B48976B18024BE0C8BE2B356CADF1A6B2169(__this, ((double)((double)L_0/(double)L_1)), L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Accord.Statistics.Testing.FTest::Compute(System.Double,System.Int32,System.Int32,Accord.Statistics.Testing.TwoSampleHypothesis)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FTest_Compute_m45D5B48976B18024BE0C8BE2B356CADF1A6B2169 (FTest_tBADEC1B0592B891A8FF31F68DA8941A6176CD1B4 * __this, double ___statistic0, int32_t ___d11, int32_t ___d22, int32_t ___alternate3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FDistribution_tB7E523FB42251AEF0DD0A978C7FD924B1F44B751_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HypothesisTest_1_get_Statistic_mCAB6A934A05938A91B95320BAA9F11B0E638C520_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HypothesisTest_1_set_PValue_mB066F966629C83167A9CBC42C7FDB131A0E1FC18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HypothesisTest_1_set_StatisticDistribution_m5077FBE04349809C60FD7EFBB91BE1390FFB14F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HypothesisTest_1_set_Statistic_m564D338B2EFD38D0FDCCDF237A37E80811ABF0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HypothesisTest_1_set_Tail_mA6C447FF2D02CAEC7C0926024CEACC76D2EBD533_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___statistic0;
		HypothesisTest_1_set_Statistic_m564D338B2EFD38D0FDCCDF237A37E80811ABF0B7_inline(__this, L_0, /*hidden argument*/HypothesisTest_1_set_Statistic_m564D338B2EFD38D0FDCCDF237A37E80811ABF0B7_RuntimeMethod_var);
		int32_t L_1 = ___d11;
		int32_t L_2 = ___d22;
		FDistribution_tB7E523FB42251AEF0DD0A978C7FD924B1F44B751 * L_3 = (FDistribution_tB7E523FB42251AEF0DD0A978C7FD924B1F44B751 *)il2cpp_codegen_object_new(FDistribution_tB7E523FB42251AEF0DD0A978C7FD924B1F44B751_il2cpp_TypeInfo_var);
		FDistribution__ctor_mE98A9614212841B3981C14550F51F3BFA55583AF(L_3, L_1, L_2, /*hidden argument*/NULL);
		HypothesisTest_1_set_StatisticDistribution_m5077FBE04349809C60FD7EFBB91BE1390FFB14F0_inline(__this, L_3, /*hidden argument*/HypothesisTest_1_set_StatisticDistribution_m5077FBE04349809C60FD7EFBB91BE1390FFB14F0_RuntimeMethod_var);
		int32_t L_4 = ___alternate3;
		FTest_set_Hypothesis_mDDFB4E1A96C68BBD54B6EADEA5F169BBFFE06126_inline(__this, L_4, /*hidden argument*/NULL);
		int32_t L_5 = ___alternate3;
		HypothesisTest_1_set_Tail_mA6C447FF2D02CAEC7C0926024CEACC76D2EBD533_inline(__this, L_5, /*hidden argument*/HypothesisTest_1_set_Tail_mA6C447FF2D02CAEC7C0926024CEACC76D2EBD533_RuntimeMethod_var);
		double L_6;
		L_6 = HypothesisTest_1_get_Statistic_mCAB6A934A05938A91B95320BAA9F11B0E638C520_inline(__this, /*hidden argument*/HypothesisTest_1_get_Statistic_mCAB6A934A05938A91B95320BAA9F11B0E638C520_RuntimeMethod_var);
		double L_7;
		L_7 = VirtFuncInvoker1< double, double >::Invoke(8 /* System.Double Accord.Statistics.Testing.HypothesisTest`1<Accord.Statistics.Distributions.Univariate.FDistribution>::StatisticToPValue(System.Double) */, __this, L_6);
		HypothesisTest_1_set_PValue_mB066F966629C83167A9CBC42C7FDB131A0E1FC18_inline(__this, L_7, /*hidden argument*/HypothesisTest_1_set_PValue_mB066F966629C83167A9CBC42C7FDB131A0E1FC18_RuntimeMethod_var);
		VirtActionInvoker0::Invoke(9 /* System.Void Accord.Statistics.Testing.HypothesisTest`1<Accord.Statistics.Distributions.Univariate.FDistribution>::OnSizeChanged() */, __this);
		return;
	}
}
// System.Void Accord.Statistics.Testing.FTest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FTest__ctor_m8F2B5D609DBE0AEF2BD4855AFDC9161B1DABE0AF (FTest_tBADEC1B0592B891A8FF31F68DA8941A6176CD1B4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HypothesisTest_1__ctor_m5158C544919B83B4DA0992BAD5AA7F6FFC29BDDF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HypothesisTest_1__ctor_m5158C544919B83B4DA0992BAD5AA7F6FFC29BDDF(__this, /*hidden argument*/HypothesisTest_1__ctor_m5158C544919B83B4DA0992BAD5AA7F6FFC29BDDF_RuntimeMethod_var);
		return;
	}
}
// System.Double Accord.Statistics.Testing.FTest::StatisticToPValue(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double FTest_StatisticToPValue_m1D1EEEA7C7291C3D28568ED160FE2A0C906DDB21 (FTest_tBADEC1B0592B891A8FF31F68DA8941A6176CD1B4 * __this, double ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HypothesisTest_1_get_StatisticDistribution_m5F2CBB6856F581DAFC776A355F00BAA4CC552F41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HypothesisTest_1_get_Statistic_mCAB6A934A05938A91B95320BAA9F11B0E638C520_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HypothesisTest_1_get_Tail_m488C5C1773A665A2D28040346EAE84860E0D755A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6F0F20BF78CCB476D13FBCEA46E8F34952610CB);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	int32_t V_1 = 0;
	{
		double L_0;
		L_0 = HypothesisTest_1_get_Statistic_mCAB6A934A05938A91B95320BAA9F11B0E638C520_inline(__this, /*hidden argument*/HypothesisTest_1_get_Statistic_mCAB6A934A05938A91B95320BAA9F11B0E638C520_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Double_IsNaN_m94415C98C2D7DCAA32A82E1911AC13958AAD4347(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Trace_TraceWarning_mE63DDF83DE3F94FA44BDFD5EF2370C1512247EA0(_stringLiteralD6F0F20BF78CCB476D13FBCEA46E8F34952610CB, /*hidden argument*/NULL);
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0021:
	{
		int32_t L_2;
		L_2 = HypothesisTest_1_get_Tail_m488C5C1773A665A2D28040346EAE84860E0D755A_inline(__this, /*hidden argument*/HypothesisTest_1_get_Tail_m488C5C1773A665A2D28040346EAE84860E0D755A_RuntimeMethod_var);
		V_1 = L_2;
		int32_t L_3 = V_1;
		switch (L_3)
		{
			case 0:
			{
				goto IL_003c;
			}
			case 1:
			{
				goto IL_005a;
			}
			case 2:
			{
				goto IL_0069;
			}
		}
	}
	{
		goto IL_0078;
	}

IL_003c:
	{
		FDistribution_tB7E523FB42251AEF0DD0A978C7FD924B1F44B751 * L_4;
		L_4 = HypothesisTest_1_get_StatisticDistribution_m5F2CBB6856F581DAFC776A355F00BAA4CC552F41_inline(__this, /*hidden argument*/HypothesisTest_1_get_StatisticDistribution_m5F2CBB6856F581DAFC776A355F00BAA4CC552F41_RuntimeMethod_var);
		double L_5 = ___x0;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = fabs(L_5);
		NullCheck(L_4);
		double L_7;
		L_7 = VirtFuncInvoker1< double, double >::Invoke(9 /* System.Double Accord.Statistics.Distributions.Univariate.UnivariateContinuousDistribution::DistributionFunction(System.Double) */, L_4, L_6);
		V_0 = ((double)il2cpp_codegen_multiply((double)(2.0), (double)L_7));
		goto IL_007e;
	}

IL_005a:
	{
		FDistribution_tB7E523FB42251AEF0DD0A978C7FD924B1F44B751 * L_8;
		L_8 = HypothesisTest_1_get_StatisticDistribution_m5F2CBB6856F581DAFC776A355F00BAA4CC552F41_inline(__this, /*hidden argument*/HypothesisTest_1_get_StatisticDistribution_m5F2CBB6856F581DAFC776A355F00BAA4CC552F41_RuntimeMethod_var);
		double L_9 = ___x0;
		NullCheck(L_8);
		double L_10;
		L_10 = VirtFuncInvoker1< double, double >::Invoke(11 /* System.Double Accord.Statistics.Distributions.Univariate.UnivariateContinuousDistribution::ComplementaryDistributionFunction(System.Double) */, L_8, L_9);
		V_0 = L_10;
		goto IL_007e;
	}

IL_0069:
	{
		FDistribution_tB7E523FB42251AEF0DD0A978C7FD924B1F44B751 * L_11;
		L_11 = HypothesisTest_1_get_StatisticDistribution_m5F2CBB6856F581DAFC776A355F00BAA4CC552F41_inline(__this, /*hidden argument*/HypothesisTest_1_get_StatisticDistribution_m5F2CBB6856F581DAFC776A355F00BAA4CC552F41_RuntimeMethod_var);
		double L_12 = ___x0;
		NullCheck(L_11);
		double L_13;
		L_13 = VirtFuncInvoker1< double, double >::Invoke(9 /* System.Double Accord.Statistics.Distributions.Univariate.UnivariateContinuousDistribution::DistributionFunction(System.Double) */, L_11, L_12);
		V_0 = L_13;
		goto IL_007e;
	}

IL_0078:
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_14 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m26BD2B620B5FBFA4376C16011C60E18A2EDC8E96(L_14, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FTest_StatisticToPValue_m1D1EEEA7C7291C3D28568ED160FE2A0C906DDB21_RuntimeMethod_var)));
	}

IL_007e:
	{
		double L_15 = V_0;
		return L_15;
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
// System.Void Accord.Statistics.Distributions.Univariate.UnivariateContinuousDistribution::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnivariateContinuousDistribution__ctor_m728252DABCE88801DC7D16B0F95C92D8FA5A9BC2 (UnivariateContinuousDistribution_t446251C5E060A8F7E27FA73DB51112E74CC42D52 * __this, const RuntimeMethod* method)
{
	{
		DistributionBase__ctor_m2A32DC565DE20E3BD526BF04EAD7BCC880F2C445(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Double Accord.Statistics.Distributions.Univariate.UnivariateContinuousDistribution::DistributionFunction(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double UnivariateContinuousDistribution_DistributionFunction_m8E60CD0E897B8B69A804B05D36997A8DA5F52CE0 (UnivariateContinuousDistribution_t446251C5E060A8F7E27FA73DB51112E74CC42D52 * __this, double ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2EB07B4A1AFB21FC3987FBF15BA0CB4084C2633);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	DoubleRange_t35ED6CD8C06E5A91FCF12E55C7A89A4EE411646D  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		double L_0 = ___x0;
		IL2CPP_RUNTIME_CLASS_INIT(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Double_IsNaN_m94415C98C2D7DCAA32A82E1911AC13958AAD4347(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_2 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral063E8C4565ED95F98E074B3982F11DF199CE97FF)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnivariateContinuousDistribution_DistributionFunction_m8E60CD0E897B8B69A804B05D36997A8DA5F52CE0_RuntimeMethod_var)));
	}

IL_0018:
	{
		DoubleRange_t35ED6CD8C06E5A91FCF12E55C7A89A4EE411646D  L_3;
		L_3 = VirtFuncInvoker0< DoubleRange_t35ED6CD8C06E5A91FCF12E55C7A89A4EE411646D  >::Invoke(8 /* Accord.DoubleRange Accord.Statistics.Distributions.Univariate.UnivariateContinuousDistribution::get_Support() */, __this);
		V_1 = L_3;
		double L_4;
		L_4 = DoubleRange_get_Min_m4D1CF382319A77CC4C87D1E7777AE2963B1767B1_inline((DoubleRange_t35ED6CD8C06E5A91FCF12E55C7A89A4EE411646D *)(&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Double_IsNegativeInfinity_mC1D75A4899CED3409270190F7DC1042001C668D7(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		double L_6 = ___x0;
		IL2CPP_RUNTIME_CLASS_INIT(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Double_IsNegativeInfinity_mC1D75A4899CED3409270190F7DC1042001C668D7(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_003f;
		}
	}
	{
		return (0.0);
	}

IL_003f:
	{
		double L_8 = ___x0;
		DoubleRange_t35ED6CD8C06E5A91FCF12E55C7A89A4EE411646D  L_9;
		L_9 = VirtFuncInvoker0< DoubleRange_t35ED6CD8C06E5A91FCF12E55C7A89A4EE411646D  >::Invoke(8 /* Accord.DoubleRange Accord.Statistics.Distributions.Univariate.UnivariateContinuousDistribution::get_Support() */, __this);
		V_1 = L_9;
		double L_10;
		L_10 = DoubleRange_get_Min_m4D1CF382319A77CC4C87D1E7777AE2963B1767B1_inline((DoubleRange_t35ED6CD8C06E5A91FCF12E55C7A89A4EE411646D *)(&V_1), /*hidden argument*/NULL);
		if ((!(((double)L_8) < ((double)L_10))))
		{
			goto IL_005a;
		}
	}
	{
		return (0.0);
	}

IL_005a:
	{
		double L_11 = ___x0;
		DoubleRange_t35ED6CD8C06E5A91FCF12E55C7A89A4EE411646D  L_12;
		L_12 = VirtFuncInvoker0< DoubleRange_t35ED6CD8C06E5A91FCF12E55C7A89A4EE411646D  >::Invoke(8 /* Accord.DoubleRange Accord.Statistics.Distributions.Univariate.UnivariateContinuousDistribution::get_Support() */, __this);
		V_1 = L_12;
		double L_13;
		L_13 = DoubleRange_get_Max_m3B318075AF7EA3A68C89AA16AB698E4582E3973A_inline((DoubleRange_t35ED6CD8C06E5A91FCF12E55C7A89A4EE411646D *)(&V_1), /*hidden argument*/NULL);
		if ((!(((double)L_11) >= ((double)L_13))))
		{
			goto IL_0075;
		}
	}
	{
		return (1.0);
	}

IL_0075:
	{
		double L_14 = ___x0;
		double L_15;
		L_15 = VirtFuncInvoker1< double, double >::Invoke(10 /* System.Double Accord.Statistics.Distributions.Univariate.UnivariateContinuousDistribution::InnerDistributionFunction(System.Double) */, __this, L_14);
		V_0 = L_15;
		double L_16 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Double_IsNaN_m94415C98C2D7DCAA32A82E1911AC13958AAD4347(L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0090;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_18 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCBABB42B80EBFA22AF32535DF3E5E7EFADD85AD0)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnivariateContinuousDistribution_DistributionFunction_m8E60CD0E897B8B69A804B05D36997A8DA5F52CE0_RuntimeMethod_var)));
	}

IL_0090:
	{
		double L_19 = V_0;
		if ((((double)L_19) < ((double)(0.0))))
		{
			goto IL_00a8;
		}
	}
	{
		double L_20 = V_0;
		if ((!(((double)L_20) > ((double)(1.0)))))
		{
			goto IL_00b3;
		}
	}

IL_00a8:
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_21 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_21, _stringLiteralD2EB07B4A1AFB21FC3987FBF15BA0CB4084C2633, /*hidden argument*/NULL);
	}

IL_00b3:
	{
		double L_22 = V_0;
		return L_22;
	}
}
// System.Double Accord.Statistics.Distributions.Univariate.UnivariateContinuousDistribution::InnerDistributionFunction(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double UnivariateContinuousDistribution_InnerDistributionFunction_mA7DCFD2E7E8DE953FE839CA8F401B2609A07F0DE (UnivariateContinuousDistribution_t446251C5E060A8F7E27FA73DB51112E74CC42D52 * __this, double ___x0, const RuntimeMethod* method)
{
	{
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_0 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnivariateContinuousDistribution_InnerDistributionFunction_mA7DCFD2E7E8DE953FE839CA8F401B2609A07F0DE_RuntimeMethod_var)));
	}
}
// System.Double Accord.Statistics.Distributions.Univariate.UnivariateContinuousDistribution::ComplementaryDistributionFunction(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double UnivariateContinuousDistribution_ComplementaryDistributionFunction_mBEC0D3AC7F0A8FC6AF390D7F22C594348615F80D (UnivariateContinuousDistribution_t446251C5E060A8F7E27FA73DB51112E74CC42D52 * __this, double ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEEB83F9F4FCD70F6BB27B2AEF91991EB0093ED12);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	DoubleRange_t35ED6CD8C06E5A91FCF12E55C7A89A4EE411646D  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		double L_0 = ___x0;
		IL2CPP_RUNTIME_CLASS_INIT(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Double_IsNaN_m94415C98C2D7DCAA32A82E1911AC13958AAD4347(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_2 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral063E8C4565ED95F98E074B3982F11DF199CE97FF)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnivariateContinuousDistribution_ComplementaryDistributionFunction_mBEC0D3AC7F0A8FC6AF390D7F22C594348615F80D_RuntimeMethod_var)));
	}

IL_0018:
	{
		DoubleRange_t35ED6CD8C06E5A91FCF12E55C7A89A4EE411646D  L_3;
		L_3 = VirtFuncInvoker0< DoubleRange_t35ED6CD8C06E5A91FCF12E55C7A89A4EE411646D  >::Invoke(8 /* Accord.DoubleRange Accord.Statistics.Distributions.Univariate.UnivariateContinuousDistribution::get_Support() */, __this);
		V_1 = L_3;
		double L_4;
		L_4 = DoubleRange_get_Min_m4D1CF382319A77CC4C87D1E7777AE2963B1767B1_inline((DoubleRange_t35ED6CD8C06E5A91FCF12E55C7A89A4EE411646D *)(&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Double_IsNegativeInfinity_mC1D75A4899CED3409270190F7DC1042001C668D7(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		double L_6 = ___x0;
		IL2CPP_RUNTIME_CLASS_INIT(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Double_IsNegativeInfinity_mC1D75A4899CED3409270190F7DC1042001C668D7(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_003f;
		}
	}
	{
		return (1.0);
	}

IL_003f:
	{
		double L_8 = ___x0;
		DoubleRange_t35ED6CD8C06E5A91FCF12E55C7A89A4EE411646D  L_9;
		L_9 = VirtFuncInvoker0< DoubleRange_t35ED6CD8C06E5A91FCF12E55C7A89A4EE411646D  >::Invoke(8 /* Accord.DoubleRange Accord.Statistics.Distributions.Univariate.UnivariateContinuousDistribution::get_Support() */, __this);
		V_1 = L_9;
		double L_10;
		L_10 = DoubleRange_get_Min_m4D1CF382319A77CC4C87D1E7777AE2963B1767B1_inline((DoubleRange_t35ED6CD8C06E5A91FCF12E55C7A89A4EE411646D *)(&V_1), /*hidden argument*/NULL);
		if ((!(((double)L_8) < ((double)L_10))))
		{
			goto IL_005a;
		}
	}
	{
		return (1.0);
	}

IL_005a:
	{
		double L_11 = ___x0;
		DoubleRange_t35ED6CD8C06E5A91FCF12E55C7A89A4EE411646D  L_12;
		L_12 = VirtFuncInvoker0< DoubleRange_t35ED6CD8C06E5A91FCF12E55C7A89A4EE411646D  >::Invoke(8 /* Accord.DoubleRange Accord.Statistics.Distributions.Univariate.UnivariateContinuousDistribution::get_Support() */, __this);
		V_1 = L_12;
		double L_13;
		L_13 = DoubleRange_get_Max_m3B318075AF7EA3A68C89AA16AB698E4582E3973A_inline((DoubleRange_t35ED6CD8C06E5A91FCF12E55C7A89A4EE411646D *)(&V_1), /*hidden argument*/NULL);
		if ((!(((double)L_11) >= ((double)L_13))))
		{
			goto IL_0075;
		}
	}
	{
		return (0.0);
	}

IL_0075:
	{
		double L_14 = ___x0;
		double L_15;
		L_15 = VirtFuncInvoker1< double, double >::Invoke(12 /* System.Double Accord.Statistics.Distributions.Univariate.UnivariateContinuousDistribution::InnerComplementaryDistributionFunction(System.Double) */, __this, L_14);
		V_0 = L_15;
		double L_16 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Double_IsNaN_m94415C98C2D7DCAA32A82E1911AC13958AAD4347(L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0090;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_18 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1569B882AEC8890A2ADC74E456E4029D492EF56C)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnivariateContinuousDistribution_ComplementaryDistributionFunction_mBEC0D3AC7F0A8FC6AF390D7F22C594348615F80D_RuntimeMethod_var)));
	}

IL_0090:
	{
		double L_19 = V_0;
		if ((((double)L_19) < ((double)(0.0))))
		{
			goto IL_00a8;
		}
	}
	{
		double L_20 = V_0;
		if ((!(((double)L_20) > ((double)(1.0)))))
		{
			goto IL_00b3;
		}
	}

IL_00a8:
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_21 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_21, _stringLiteralEEB83F9F4FCD70F6BB27B2AEF91991EB0093ED12, /*hidden argument*/NULL);
	}

IL_00b3:
	{
		double L_22 = V_0;
		return L_22;
	}
}
// System.Double Accord.Statistics.Distributions.Univariate.UnivariateContinuousDistribution::InnerComplementaryDistributionFunction(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double UnivariateContinuousDistribution_InnerComplementaryDistributionFunction_mB25FDBEDE40F96D1334BE1AF5EE91764491C9DC3 (UnivariateContinuousDistribution_t446251C5E060A8F7E27FA73DB51112E74CC42D52 * __this, double ___x0, const RuntimeMethod* method)
{
	{
		double L_0 = ___x0;
		double L_1;
		L_1 = VirtFuncInvoker1< double, double >::Invoke(9 /* System.Double Accord.Statistics.Distributions.Univariate.UnivariateContinuousDistribution::DistributionFunction(System.Double) */, __this, L_0);
		return ((double)il2cpp_codegen_subtract((double)(1.0), (double)L_1));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FTest_set_Hypothesis_mDDFB4E1A96C68BBD54B6EADEA5F169BBFFE06126_inline (FTest_tBADEC1B0592B891A8FF31F68DA8941A6176CD1B4 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CHypothesisU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double DoubleRange_get_Min_m4D1CF382319A77CC4C87D1E7777AE2963B1767B1_inline (DoubleRange_t35ED6CD8C06E5A91FCF12E55C7A89A4EE411646D * __this, const RuntimeMethod* method)
{
	{
		double L_0 = __this->get_min_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double DoubleRange_get_Max_m3B318075AF7EA3A68C89AA16AB698E4582E3973A_inline (DoubleRange_t35ED6CD8C06E5A91FCF12E55C7A89A4EE411646D * __this, const RuntimeMethod* method)
{
	{
		double L_0 = __this->get_max_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HypothesisTest_1_set_Statistic_mB3EAC218F1D865222532086CE28E243662678B35_gshared_inline (HypothesisTest_1_t8A13560E73DFB728B4249AC122D5C2D6D5248C05 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		double L_0 = ___value0;
		__this->set_U3CStatisticU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HypothesisTest_1_set_StatisticDistribution_mF21C31DFF21F5408EECF50D2A787F6D2690BEE60_gshared_inline (HypothesisTest_1_t8A13560E73DFB728B4249AC122D5C2D6D5248C05 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CStatisticDistributionU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HypothesisTest_1_set_Tail_mB9C0CB044EE0DA447E309B645AED7E047CF7311D_gshared_inline (HypothesisTest_1_t8A13560E73DFB728B4249AC122D5C2D6D5248C05 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CTailU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double HypothesisTest_1_get_Statistic_m1C2402F4DDD7A01AEF2E1A07F30454FCA7936F53_gshared_inline (HypothesisTest_1_t8A13560E73DFB728B4249AC122D5C2D6D5248C05 * __this, const RuntimeMethod* method)
{
	{
		double L_0 = (double)__this->get_U3CStatisticU3Ek__BackingField_3();
		return (double)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HypothesisTest_1_set_PValue_m6D1565E6AD913D933EB4C6887822B82033374B2C_gshared_inline (HypothesisTest_1_t8A13560E73DFB728B4249AC122D5C2D6D5248C05 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		double L_0 = ___value0;
		__this->set_U3CPValueU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HypothesisTest_1_get_Tail_m1F42BEC20D3425DE5C27628FE0C27C37B4551B1D_gshared_inline (HypothesisTest_1_t8A13560E73DFB728B4249AC122D5C2D6D5248C05 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_U3CTailU3Ek__BackingField_4();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * HypothesisTest_1_get_StatisticDistribution_m0778DC3974770FFEC3A06B3B9975F76AFF0DAF12_gshared_inline (HypothesisTest_1_t8A13560E73DFB728B4249AC122D5C2D6D5248C05 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CStatisticDistributionU3Ek__BackingField_1();
		return (RuntimeObject *)L_0;
	}
}
