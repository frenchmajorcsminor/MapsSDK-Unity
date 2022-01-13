#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>
struct SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2;
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>
struct SubsystemWithProvider_3_t646DFCE31181130FB557E4AFA37198CF3170977F;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.XR.ARSubsystems.ConfigurationChooser
struct ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4;
// UnityEngine.XR.ARSubsystems.DefaultConfigurationChooser
struct DefaultConfigurationChooser_tC3488EB08C98156663D851D9F0F0AD9294D4613F;
// System.String
struct String_t;
// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9;
// System.Type
struct Type_t;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor
struct XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider
struct Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A;

IL2CPP_EXTERN_C RuntimeClass* DefaultConfigurationChooser_tC3488EB08C98156663D851D9F0F0AD9294D4613F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemWithProvider_3__ctor_mD3D1B91DF52028332010B72032C7E8388C99CEA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemWithProvider_3_get_provider_m6804A0C76FB5F7C9925F2153F33A7E44BBD95F0E_RuntimeMethod_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t1A5F46CB58C39FA8C3A1BEF72944AB765466DF6C 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.XR.ARSubsystems.ConfigurationChooser
struct ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4  : public RuntimeObject
{
public:

public:
};


// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider
struct SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E  : public RuntimeObject
{
public:
	// System.String UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<providerType>k__BackingField
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<subsystemTypeOverride>k__BackingField
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E, ___U3CproviderTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CproviderTypeU3Ek__BackingField_1() const { return ___U3CproviderTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CproviderTypeU3Ek__BackingField_1() { return &___U3CproviderTypeU3Ek__BackingField_1; }
	inline void set_U3CproviderTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CproviderTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E, ___U3CsubsystemTypeOverrideU3Ek__BackingField_2)); }
	inline Type_t * get_U3CsubsystemTypeOverrideU3Ek__BackingField_2() const { return ___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline Type_t ** get_address_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return &___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline void set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(Type_t * value)
	{
		___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)value);
	}
};


// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemProvider::m_Running
	bool ___m_Running_0;

public:
	inline static int32_t get_offset_of_m_Running_0() { return static_cast<int32_t>(offsetof(SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9, ___m_Running_0)); }
	inline bool get_m_Running_0() const { return ___m_Running_0; }
	inline bool* get_address_of_m_Running_0() { return &___m_Running_0; }
	inline void set_m_Running_0(bool value)
	{
		___m_Running_0 = value;
	}
};


// UnityEngine.SubsystemsImplementation.SubsystemWithProvider
struct SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<running>k__BackingField
	bool ___U3CrunningU3Ek__BackingField_0;
	// UnityEngine.SubsystemsImplementation.SubsystemProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<providerBase>k__BackingField
	SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9 * ___U3CproviderBaseU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CrunningU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E, ___U3CrunningU3Ek__BackingField_0)); }
	inline bool get_U3CrunningU3Ek__BackingField_0() const { return ___U3CrunningU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CrunningU3Ek__BackingField_0() { return &___U3CrunningU3Ek__BackingField_0; }
	inline void set_U3CrunningU3Ek__BackingField_0(bool value)
	{
		___U3CrunningU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CproviderBaseU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E, ___U3CproviderBaseU3Ek__BackingField_1)); }
	inline SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9 * get_U3CproviderBaseU3Ek__BackingField_1() const { return ___U3CproviderBaseU3Ek__BackingField_1; }
	inline SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9 ** get_address_of_U3CproviderBaseU3Ek__BackingField_1() { return &___U3CproviderBaseU3Ek__BackingField_1; }
	inline void set_U3CproviderBaseU3Ek__BackingField_1(SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9 * value)
	{
		___U3CproviderBaseU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderBaseU3Ek__BackingField_1), (void*)value);
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

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>
struct SubsystemDescriptorWithProvider_2_tE9888364F17DF110619D7238068EB1EC98053AE5  : public SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E
{
public:

public:
};


// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>
struct SubsystemProvider_1_tFA56F133FD9BCE90A1C4C7D15FFE2571963D8DE4  : public SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9
{
public:

public:
};


// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>
struct SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2  : public SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E
{
public:
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	RuntimeObject * ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	RuntimeObject * ___U3CproviderU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2, ___U3CsubsystemDescriptorU3Ek__BackingField_2)); }
	inline RuntimeObject * get_U3CsubsystemDescriptorU3Ek__BackingField_2() const { return ___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline RuntimeObject ** get_address_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return &___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline void set_U3CsubsystemDescriptorU3Ek__BackingField_2(RuntimeObject * value)
	{
		___U3CsubsystemDescriptorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemDescriptorU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2, ___U3CproviderU3Ek__BackingField_3)); }
	inline RuntimeObject * get_U3CproviderU3Ek__BackingField_3() const { return ___U3CproviderU3Ek__BackingField_3; }
	inline RuntimeObject ** get_address_of_U3CproviderU3Ek__BackingField_3() { return &___U3CproviderU3Ek__BackingField_3; }
	inline void set_U3CproviderU3Ek__BackingField_3(RuntimeObject * value)
	{
		___U3CproviderU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderU3Ek__BackingField_3), (void*)value);
	}
};


// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>
struct SubsystemWithProvider_3_t646DFCE31181130FB557E4AFA37198CF3170977F  : public SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E
{
public:
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C * ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * ___U3CproviderU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t646DFCE31181130FB557E4AFA37198CF3170977F, ___U3CsubsystemDescriptorU3Ek__BackingField_2)); }
	inline XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C * get_U3CsubsystemDescriptorU3Ek__BackingField_2() const { return ___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C ** get_address_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return &___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline void set_U3CsubsystemDescriptorU3Ek__BackingField_2(XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C * value)
	{
		___U3CsubsystemDescriptorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemDescriptorU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t646DFCE31181130FB557E4AFA37198CF3170977F, ___U3CproviderU3Ek__BackingField_3)); }
	inline Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * get_U3CproviderU3Ek__BackingField_3() const { return ___U3CproviderU3Ek__BackingField_3; }
	inline Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A ** get_address_of_U3CproviderU3Ek__BackingField_3() { return &___U3CproviderU3Ek__BackingField_3; }
	inline void set_U3CproviderU3Ek__BackingField_3(Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * value)
	{
		___U3CproviderU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderU3Ek__BackingField_3), (void*)value);
	}
};


// UnityEngine.XR.ARSubsystems.DefaultConfigurationChooser
struct DefaultConfigurationChooser_tC3488EB08C98156663D851D9F0F0AD9294D4613F  : public ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4
{
public:

public:
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


// UnityEngine.XR.ARSubsystems.NotTrackingReason
struct NotTrackingReason_t853CA5527FA4E156B45DD1BD3E3E978C78BC49A9 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.NotTrackingReason::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NotTrackingReason_t853CA5527FA4E156B45DD1BD3E3E978C78BC49A9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackingState
struct TrackingState_tB6996ED0D52D2A17DFACC90800705B81D370FC38 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_tB6996ED0D52D2A17DFACC90800705B81D370FC38, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD  : public SubsystemWithProvider_3_t646DFCE31181130FB557E4AFA37198CF3170977F
{
public:
	// UnityEngine.XR.ARSubsystems.ConfigurationChooser UnityEngine.XR.ARSubsystems.XRSessionSubsystem::m_DefaultConfigurationChooser
	ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4 * ___m_DefaultConfigurationChooser_4;
	// UnityEngine.XR.ARSubsystems.ConfigurationChooser UnityEngine.XR.ARSubsystems.XRSessionSubsystem::m_ConfigurationChooser
	ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4 * ___m_ConfigurationChooser_5;

public:
	inline static int32_t get_offset_of_m_DefaultConfigurationChooser_4() { return static_cast<int32_t>(offsetof(XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD, ___m_DefaultConfigurationChooser_4)); }
	inline ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4 * get_m_DefaultConfigurationChooser_4() const { return ___m_DefaultConfigurationChooser_4; }
	inline ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4 ** get_address_of_m_DefaultConfigurationChooser_4() { return &___m_DefaultConfigurationChooser_4; }
	inline void set_m_DefaultConfigurationChooser_4(ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4 * value)
	{
		___m_DefaultConfigurationChooser_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefaultConfigurationChooser_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_ConfigurationChooser_5() { return static_cast<int32_t>(offsetof(XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD, ___m_ConfigurationChooser_5)); }
	inline ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4 * get_m_ConfigurationChooser_5() const { return ___m_ConfigurationChooser_5; }
	inline ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4 ** get_address_of_m_ConfigurationChooser_5() { return &___m_ConfigurationChooser_5; }
	inline void set_m_ConfigurationChooser_5(ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4 * value)
	{
		___m_ConfigurationChooser_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ConfigurationChooser_5), (void*)value);
	}
};


// UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor
struct XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C  : public SubsystemDescriptorWithProvider_2_tE9888364F17DF110619D7238068EB1EC98053AE5
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider
struct Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A  : public SubsystemProvider_1_tFA56F133FD9BCE90A1C4C7D15FFE2571963D8DE4
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemWithProvider_3__ctor_m547D656ED6A22E04230EE777D2EB7A68BA51212F_gshared (SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2 * __this, const RuntimeMethod* method);
// !2 UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>::get_provider()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * SubsystemWithProvider_3_get_provider_m1C17796ABB973D3A5F6B1C31B84298C076AA7E1B_gshared_inline (SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.ConfigurationChooser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationChooser__ctor_mDD8DB2D97E4DD5B6CC29809BBFDDDEA149A1150A (ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.DefaultConfigurationChooser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultConfigurationChooser__ctor_m01D5B274BA5A7C81A20C94A920681CAE8466A4BC (DefaultConfigurationChooser_tC3488EB08C98156663D851D9F0F0AD9294D4613F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>::.ctor()
inline void SubsystemWithProvider_3__ctor_mD3D1B91DF52028332010B72032C7E8388C99CEA4 (SubsystemWithProvider_3_t646DFCE31181130FB557E4AFA37198CF3170977F * __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemWithProvider_3_t646DFCE31181130FB557E4AFA37198CF3170977F *, const RuntimeMethod*))SubsystemWithProvider_3__ctor_m547D656ED6A22E04230EE777D2EB7A68BA51212F_gshared)(__this, method);
}
// !2 UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>::get_provider()
inline Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * SubsystemWithProvider_3_get_provider_m6804A0C76FB5F7C9925F2153F33A7E44BBD95F0E_inline (SubsystemWithProvider_3_t646DFCE31181130FB557E4AFA37198CF3170977F * __this, const RuntimeMethod* method)
{
	return ((  Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * (*) (SubsystemWithProvider_3_t646DFCE31181130FB557E4AFA37198CF3170977F *, const RuntimeMethod*))SubsystemWithProvider_3_get_provider_m1C17796ABB973D3A5F6B1C31B84298C076AA7E1B_gshared_inline)(__this, method);
}
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
// System.Void UnityEngine.XR.ARSubsystems.ConfigurationChooser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationChooser__ctor_mDD8DB2D97E4DD5B6CC29809BBFDDDEA149A1150A (ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4 * __this, const RuntimeMethod* method)
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
// System.Void UnityEngine.XR.ARSubsystems.DefaultConfigurationChooser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultConfigurationChooser__ctor_m01D5B274BA5A7C81A20C94A920681CAE8466A4BC (DefaultConfigurationChooser_tC3488EB08C98156663D851D9F0F0AD9294D4613F * __this, const RuntimeMethod* method)
{
	{
		ConfigurationChooser__ctor_mDD8DB2D97E4DD5B6CC29809BBFDDDEA149A1150A(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystem__ctor_m8485F39F339764D3FCA4FD0E1D77ADE16CAE1676 (XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultConfigurationChooser_tC3488EB08C98156663D851D9F0F0AD9294D4613F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3__ctor_mD3D1B91DF52028332010B72032C7E8388C99CEA4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ConfigurationChooser m_DefaultConfigurationChooser = new DefaultConfigurationChooser();
		DefaultConfigurationChooser_tC3488EB08C98156663D851D9F0F0AD9294D4613F * L_0 = (DefaultConfigurationChooser_tC3488EB08C98156663D851D9F0F0AD9294D4613F *)il2cpp_codegen_object_new(DefaultConfigurationChooser_tC3488EB08C98156663D851D9F0F0AD9294D4613F_il2cpp_TypeInfo_var);
		DefaultConfigurationChooser__ctor_m01D5B274BA5A7C81A20C94A920681CAE8466A4BC(L_0, /*hidden argument*/NULL);
		__this->set_m_DefaultConfigurationChooser_4(L_0);
		// public XRSessionSubsystem()
		SubsystemWithProvider_3__ctor_mD3D1B91DF52028332010B72032C7E8388C99CEA4(__this, /*hidden argument*/SubsystemWithProvider_3__ctor_mD3D1B91DF52028332010B72032C7E8388C99CEA4_RuntimeMethod_var);
		// m_ConfigurationChooser = m_DefaultConfigurationChooser;
		ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4 * L_1 = __this->get_m_DefaultConfigurationChooser_4();
		__this->set_m_ConfigurationChooser_5(L_1);
		// }
		return;
	}
}
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRSessionSubsystem::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSessionSubsystem_get_trackingState_m65EE2B0335117F7508AC8A82DB81421AC88AC687 (XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m6804A0C76FB5F7C9925F2153F33A7E44BBD95F0E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TrackingState trackingState => provider.trackingState;
		Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m6804A0C76FB5F7C9925F2153F33A7E44BBD95F0E_inline(__this, /*hidden argument*/SubsystemWithProvider_3_get_provider_m6804A0C76FB5F7C9925F2153F33A7E44BBD95F0E_RuntimeMethod_var);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(8 /* UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_trackingState() */, L_0);
		return L_1;
	}
}
// UnityEngine.XR.ARSubsystems.NotTrackingReason UnityEngine.XR.ARSubsystems.XRSessionSubsystem::get_notTrackingReason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSessionSubsystem_get_notTrackingReason_m2FB94CC40A6732E380A9713537C13D1067EC8928 (XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m6804A0C76FB5F7C9925F2153F33A7E44BBD95F0E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public NotTrackingReason notTrackingReason => provider.notTrackingReason;
		Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m6804A0C76FB5F7C9925F2153F33A7E44BBD95F0E_inline(__this, /*hidden argument*/SubsystemWithProvider_3_get_provider_m6804A0C76FB5F7C9925F2153F33A7E44BBD95F0E_RuntimeMethod_var);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(9 /* UnityEngine.XR.ARSubsystems.NotTrackingReason UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_notTrackingReason() */, L_0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Start_m2A20FC49495EFF34A01887ABF28338FD2511C97A (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, const RuntimeMethod* method)
{
	{
		// public override void Start() {}
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Stop_mC3937DB37B165BFDB925D51BDFB63DBAE14E5CE6 (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, const RuntimeMethod* method)
{
	{
		// public override void Stop() {}
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Destroy_m91FDA48A481008AB6F408823ACFA4E51B6710F17 (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, const RuntimeMethod* method)
{
	{
		// public override void Destroy() { }
		return;
	}
}
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Provider_get_trackingState_m3E9021C49EADF2BE9853FD13A23650CE5237A2BF (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, const RuntimeMethod* method)
{
	{
		// public virtual TrackingState trackingState => TrackingState.None;
		return (int32_t)(0);
	}
}
// UnityEngine.XR.ARSubsystems.NotTrackingReason UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_notTrackingReason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Provider_get_notTrackingReason_mD6C96A5620A1DD87BCB86710E9460A41C5B18F66 (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, const RuntimeMethod* method)
{
	{
		// public virtual NotTrackingReason notTrackingReason => NotTrackingReason.Unsupported;
		return (int32_t)(6);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * SubsystemWithProvider_3_get_provider_m1C17796ABB973D3A5F6B1C31B84298C076AA7E1B_gshared_inline (SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CproviderU3Ek__BackingField_3();
		return (RuntimeObject *)L_0;
	}
}
