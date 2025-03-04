﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>
struct Dictionary_2_tCB5016B391E19ADB305776AB4375FCED878EF0B0;
// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`3<System.String,UnityEngine.Transform,System.String>
struct Func_3_t25039A52ED82957816F93C2D9CF335791DA6FCFD;
// System.Collections.Generic.IDictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct IDictionary_2_tE1D9779639EBD0189C4C74E3070B04A04F90255E;
// System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer>
struct IEnumerator_1_tC9FA14D796332E73D1660C2B2626F21D7EC4389E;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct IMixedRealityGestureHandler_1_tD33A8A4091BF925FD940E4A7AA06E5CE33D03236;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Quaternion>
struct IMixedRealityGestureHandler_1_t8151883E328274CF85A74C35341D5AC02DF9F9F5;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector2>
struct IMixedRealityGestureHandler_1_tB0C3A869E039A3B53F0F65C4C10A1C622980C7D8;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector3>
struct IMixedRealityGestureHandler_1_tE3CDEDF0C9351399E27448C9B2AB1C87F11B7FFB;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct IMixedRealityInputHandler_1_tC82285C8535A08BA83533A10B3C3CCCBA8483953;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Quaternion>
struct IMixedRealityInputHandler_1_t89D0440F2F0DE20B938EF5E51392792C74511E97;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<System.Single>
struct IMixedRealityInputHandler_1_tB31BDB88FAD4219715C166B49EB8B015909FFA1F;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector2>
struct IMixedRealityInputHandler_1_t12545A125839F95E4B01E255AFD8E7897118FF3F;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector3>
struct IMixedRealityInputHandler_1_t6F09834DD7B19091E1ED8594F7610C6BDD8AC63F;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Collections.Generic.IDictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>>
struct InputEventData_1_t03651600101A901771C241588D9401D9E466D779;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Input.HandMeshInfo>
struct InputEventData_1_tB79F7140EE0E13A566F61C25F0CBC35E52135A75;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct InputEventData_1_tCC0938E22E808EE51312F8D480E225522F26CF28;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Quaternion>
struct InputEventData_1_tBE137B5127162FEBFFDFE7F6ED8BEE73A3969646;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Single>
struct InputEventData_1_t0537B6B07E4ABB5C85E144AF838FF76463759E3E;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector2>
struct InputEventData_1_t92F237401150131C650E068132364E4714AFE903;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector3>
struct InputEventData_1_t62E6DA80533CB6FF5006FD3E02EB52A3FADFB900;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>
struct KeyCollection_t402F617D254E9B4B9CF577E70904CFCD0A3A7580;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>
struct List_1_tCF73D85564F723B069954841E508160856ED5DE0;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
struct List_1_t75FFBEBE24171F12D0459DE4BA90E0FD3E22A60E;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct SourcePoseEventData_1_tA97A232897516DFA3A41013CD2865BE9068B04BD;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Quaternion>
struct SourcePoseEventData_1_tAC3DE05E45010F0569ABBE17F2C120F4E13518D2;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.TrackingState>
struct SourcePoseEventData_1_t279FAFBF5A63CBB50D189E71E915323C055FDA22;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector2>
struct SourcePoseEventData_1_t80C46DBD53C9C9645B0164A3091F71C84CE7D25D;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector3>
struct SourcePoseEventData_1_t4CC18A361F416AEE6542A9B09E9D8FF174DF3CB0;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>
struct ValueCollection_t69FD1E77BAEB40BD00DAA5BFD524F361DDF82274;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>[]
struct EntryU5BU5D_t84CED8CFF7E739FE5FD2849C50A56608B3C3C4D6;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[]
struct IMixedRealityPointerU5BU5D_t878EB1C38193E537833123AD7BCBE635AA402AF9;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.LayerMask[]
struct LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F;
// Microsoft.MixedReality.Toolkit.Physics.RayStep[]
struct RayStepU5BU5D_t3414C621E03C24B384171E375117034E14C9F871;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E;
// Microsoft.MixedReality.Toolkit.Input.BaseGenericInputSource
struct BaseGenericInputSource_t2C53C81AABEABD940B6C53D893C0AB19301845A9;
// UnityEngine.EventSystems.BaseInput
struct BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924;
// Microsoft.MixedReality.Toolkit.Physics.BaseRayStabilizer
struct BaseRayStabilizer_t58B050CF1A58AAA5697D78780C43520C1AA7B0F3;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Microsoft.MixedReality.Toolkit.Input.DictationEventData
struct DictationEventData_t8CFAB3BF256A7952C07C0CD8C7D4489905A1AC82;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C;
// System.Exception
struct Exception_t;
// Microsoft.MixedReality.Toolkit.Input.FocusEventData
struct FocusEventData_t9F3F2249C05BBF9D98A7BD4B12506BDC36E7F041;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Microsoft.MixedReality.Toolkit.Input.GazeProvider
struct GazeProvider_t2BB12BA2FA0ECEE3BEA51CC14F92FE1A440009CE;
// Microsoft.MixedReality.Toolkit.Physics.GazeStabilizer
struct GazeStabilizer_tC802B37FA69C0A74D0CC5213F5CA533BF5160CB6;
// Microsoft.MixedReality.Toolkit.Input.GenericPointer
struct GenericPointer_t2D74A2BA9CBADA588374101900F39C9B4220A2C5;
// Microsoft.MixedReality.Toolkit.Input.HandMeshInfo
struct HandMeshInfo_t5F66D6B1E5ACF397857A6D91987346246E967909;
// Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData
struct HandTrackingInputEventData_t2CAF86D0E0AD87D5996CDB42C70A69861FFB5BF8;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// Microsoft.MixedReality.Toolkit.Physics.IBaseRayStabilizer
struct IBaseRayStabilizer_tB3F8153A7DDE2A1BE1F5F3973BEF46B84CD9E94D;
// Microsoft.MixedReality.Toolkit.Input.ICursorModifier
struct ICursorModifier_t54A1B360E5BE648154E3C3BE55D8B69C71CC6ADF;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler
struct IMixedRealityBaseInputHandler_tE42BCDC34EE335B690D9CFE6870D3C885FE78FF5;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController
struct IMixedRealityController_t9DF42B7F8473A665550A9D9312A6447A84D45032;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityCursor
struct IMixedRealityCursor_t6542E114D538D3BE982C31EF45E2BF9DFE4CE3E2;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler
struct IMixedRealityDictationHandler_t82798460DB68D9F039EB23AE836CBB58BCA1A598;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusChangedHandler
struct IMixedRealityFocusChangedHandler_tE3E0C008AE8AFC59995B69A967A17F0E72DEDEE6;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler
struct IMixedRealityFocusHandler_t35178AAB6E5D36E0436292B9427140F5E7774726;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler
struct IMixedRealityGestureHandler_t2AF9AF385BB59D19DA456667F689097049F120E8;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointHandler
struct IMixedRealityHandJointHandler_tF1903D3D19B50C0187B188BBDF69549CBEB1708E;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandMeshHandler
struct IMixedRealityHandMeshHandler_t6EB348D7EFC07EA32CD9B24C410F4D39C1265CF4;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputActionHandler
struct IMixedRealityInputActionHandler_t99B8222621D02B580431670344F7E93CB8693D10;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler
struct IMixedRealityInputHandler_tE7D2CE8FEAB3A804FC71F58C4F943E1B3EA1FB51;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource
struct IMixedRealityInputSource_tE6457AEF35F0C8DEF02DE5D4F3D3BE0376F57F65;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t0F2E23FCBB07AD0BC4108E1F90D94B8EBB6C8892;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer
struct IMixedRealityPointer_t822DC75FC5FE312C7B336AD3EEE3A2C624A5EA0A;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler
struct IMixedRealityPointerHandler_tD7A6A13C115758DE0D0DF7C0371B1A643B08F01A;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler
struct IMixedRealitySourcePoseHandler_tC2137C3AC6C9B64C2135118585F3B8824709FBBF;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourceStateHandler
struct IMixedRealitySourceStateHandler_tD727B4D4A674872A44EBFD0D77D96E541365DD1B;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealitySpeechHandler
struct IMixedRealitySpeechHandler_t66BC42AC0B95413148789EBA7474B8B0FC07D0A9;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler
struct IMixedRealityTouchHandler_tA3E82909534351087EDFA8B4572A92680B524DFA;
// Microsoft.MixedReality.Toolkit.Input.IPointerResult
struct IPointerResult_t20C98C183E91C32A3C515890458911A22D7AD468;
// Microsoft.MixedReality.Toolkit.Input.InputEventData
struct InputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7;
// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener
struct InputSystemGlobalHandlerListener_t7626F4B8931C8C8AABDC1B0FBC54E86EF67584D5;
// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener
struct InputSystemGlobalListener_t3C3B05F5289CFC04036EB6158B24859F969250BD;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule
struct MixedRealityInputModule_t574B111D4EE14DF45FD03659EB6D4FA1FCDB5F61;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData
struct MixedRealityPointerEventData_tAB2BBE5FC804ED0060813BEBC6D1866F3795E602;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Microsoft.MixedReality.Toolkit.Input.SourceStateEventData
struct SourceStateEventData_t69DA69CF3D8292B514A438C9AA3F1C0DA4A1F70A;
// Microsoft.MixedReality.Toolkit.Input.SpeechEventData
struct SpeechEventData_tF39C472B089E67439FD259C5939D8C0F60F66548;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitUntil
struct WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21;
// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter
struct SimpleCoroutineAwaiter_tC457780E69748E91DD44509C87CDD5DE74E87B2A;
// Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer
struct InternalGazePointer_t5FD72E3EF2FD019DACE01F68467E178E1D617598;
// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<>c
struct U3CU3Ec_tBAE32D5B0DA26C4B975A203181ABCC03F745703A;
// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<>c
struct U3CU3Ec_t5E1E7C2705DC71CED32F326A0D0EDE6498075716;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16
struct U3Cget_ActiveMixedRealityPointersU3Ed__16_t5849695544400F58C2B6233E979A98A2ABFA366D;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData
struct PointerData_t961238F7F343E720C726AACF3A25940C344E9595;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c
struct U3CU3Ec_t738602F83F328AD6B4BE4BEE3436DDB566A8F3DA;
// Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable/<>c
struct U3CU3Ec_tC3C72E1104F73BBEC60830726FCD3332E25CEC19;
// UnityEngine.EventSystems.PointerInputModule/MouseState
struct MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;

IL2CPP_EXTERN_C RuntimeClass* CoreServices_t9EE794F39C54151DD16EC86D9F7B1FB2D5D2FF96_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityDictationHandler_t82798460DB68D9F039EB23AE836CBB58BCA1A598_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityEventSystem_t0406E51EB205B83BBECF95AE9DE1E79ACBB12D56_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityFocusChangedHandler_tE3E0C008AE8AFC59995B69A967A17F0E72DEDEE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityFocusHandler_t35178AAB6E5D36E0436292B9427140F5E7774726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityGestureHandler_1_t8151883E328274CF85A74C35341D5AC02DF9F9F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityGestureHandler_1_tB0C3A869E039A3B53F0F65C4C10A1C622980C7D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityGestureHandler_1_tD33A8A4091BF925FD940E4A7AA06E5CE33D03236_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityGestureHandler_1_tE3CDEDF0C9351399E27448C9B2AB1C87F11B7FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityGestureHandler_t2AF9AF385BB59D19DA456667F689097049F120E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityHandJointHandler_tF1903D3D19B50C0187B188BBDF69549CBEB1708E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityHandMeshHandler_t6EB348D7EFC07EA32CD9B24C410F4D39C1265CF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputActionHandler_t99B8222621D02B580431670344F7E93CB8693D10_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputHandler_1_t12545A125839F95E4B01E255AFD8E7897118FF3F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputHandler_1_t6F09834DD7B19091E1ED8594F7610C6BDD8AC63F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputHandler_1_t89D0440F2F0DE20B938EF5E51392792C74511E97_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputHandler_1_tB31BDB88FAD4219715C166B49EB8B015909FFA1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputHandler_1_tC82285C8535A08BA83533A10B3C3CCCBA8483953_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputHandler_tE7D2CE8FEAB3A804FC71F58C4F943E1B3EA1FB51_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputSystem_t0F2E23FCBB07AD0BC4108E1F90D94B8EBB6C8892_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityPointerHandler_tD7A6A13C115758DE0D0DF7C0371B1A643B08F01A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealitySourcePoseHandler_tC2137C3AC6C9B64C2135118585F3B8824709FBBF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealitySourceStateHandler_tD727B4D4A674872A44EBFD0D77D96E541365DD1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealitySpeechHandler_t66BC42AC0B95413148789EBA7474B8B0FC07D0A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityTouchHandler_tA3E82909534351087EDFA8B4572A92680B524DFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalGazePointer_t5FD72E3EF2FD019DACE01F68467E178E1D617598_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityPlayspace_tB042F3BBDAE40F837EADC2D954C495B575DFE3C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimpleCoroutineAwaiter_tC457780E69748E91DD44509C87CDD5DE74E87B2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t5E1E7C2705DC71CED32F326A0D0EDE6498075716_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t738602F83F328AD6B4BE4BEE3436DDB566A8F3DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tBAE32D5B0DA26C4B975A203181ABCC03F745703A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tC3C72E1104F73BBEC60830726FCD3332E25CEC19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cget_ActiveMixedRealityPointersU3Ed__16_t5849695544400F58C2B6233E979A98A2ABFA366D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral033695E8FCCB2AD8ED3D6CA47B0D7673411B3701;
IL2CPP_EXTERN_C String_t* _stringLiteral193EAB9F1EC19468783C52A94D9B84DF6D5BEE4F;
IL2CPP_EXTERN_C String_t* _stringLiteral8646EE7CB5D6509C0ECF1B9EA3BEB8B77A6CB742;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tC457780E69748E91DD44509C87CDD5DE74E87B2A_TisU3CEnsureInputSystemValidU3Ed__4_t5957B42D80E6383DCAA61D84E56ABB26A6A110DA_m37FCB768D1B6DB6B35AD596C8B93D19B2E6F6E2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tC457780E69748E91DD44509C87CDD5DE74E87B2A_TisU3CEnsureInputSystemValidU3Ed__4_tC0875EF4C80B5618E53ED236FC804960EABC8CD8_m4B95E8C936F9E6A54CF21F2C49A44DECA7CCE9C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__2_t356707D26D0C2F68AA6A184ABE199B7170D68915_m12DD9AFE05F205887533A7E1A8A737F5AA2D1C47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__2_tD6C955B38EB1A50FFA586D07CE43BAF8F4F824AB_m32B442736012487FD75779435A2352A36DFD47E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_mE8DAF982558B09E161097CE7F3FBAE1F8EB32B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m00166CDB9ACB209A0978F31A563DCE66194D7E3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m1B4FE1C295A7050C419E855320CCC8BB2B7A9921_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m6277D9088F35FEBB00854B400A50D5738D368C38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisDictationEventData_t8CFAB3BF256A7952C07C0CD8C7D4489905A1AC82_m357ACFCEE0793A378A78AAD8A526DC8CC5604AE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisFocusEventData_t9F3F2249C05BBF9D98A7BD4B12506BDC36E7F041_m50F3158009D9D9C30EDA746D6FEF186A0E4A3599_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisHandTrackingInputEventData_t2CAF86D0E0AD87D5996CDB42C70A69861FFB5BF8_m75C5BBCD2BF09D48F54E23E7013039FDC837511B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisInputEventData_1_t03651600101A901771C241588D9401D9E466D779_mB6DDDF5FB7856BEAF734656BFBD38E8F33671B2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisInputEventData_1_t0537B6B07E4ABB5C85E144AF838FF76463759E3E_m91AFF61C1A2850DB0A62E0E533B50CE345FD7758_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisInputEventData_1_t62E6DA80533CB6FF5006FD3E02EB52A3FADFB900_m671764AA603B1E35D1BFC0098684E24A7809FFFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisInputEventData_1_t92F237401150131C650E068132364E4714AFE903_mF3B4B57CC8C38AF6147E09CC7CAAFFB663A6DAD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisInputEventData_1_tB79F7140EE0E13A566F61C25F0CBC35E52135A75_m422D6C1A4F7920DA15F4C9BEEF707695478C8FF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisInputEventData_1_tBE137B5127162FEBFFDFE7F6ED8BEE73A3969646_m25E3F40E5D3B9154BE42629565BF0D633127422A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisInputEventData_1_tCC0938E22E808EE51312F8D480E225522F26CF28_m4E46348EE1A9317620BABB6A77DCF694BE4F179C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisInputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7_mBEDC7A18A8EA2D53031F73EEE321D3D40366F563_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_tAB2BBE5FC804ED0060813BEBC6D1866F3795E602_m358486C871749435720ECB518BC86C21D67B716E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t279FAFBF5A63CBB50D189E71E915323C055FDA22_m42C5E7816341B0485D5170A310F466EF48C9CE6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t4CC18A361F416AEE6542A9B09E9D8FF174DF3CB0_mB25036FAE9655FE10D21A9BC178D4557AB2267C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t80C46DBD53C9C9645B0164A3091F71C84CE7D25D_m275CEF667687F25345E1202A7E2FD75EDA0CBD08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_tA97A232897516DFA3A41013CD2865BE9068B04BD_m81B913C81443C08947EF035A77D644E0DE15DAE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_tAC3DE05E45010F0569ABBE17F2C120F4E13518D2_m98976A97309BD7DC81F1370A43D08FD07D60A6D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisSourceStateEventData_t69DA69CF3D8292B514A438C9AA3F1C0DA4A1F70A_m1158D1EF56847A5F85086AE8C44EA2376A4678E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisSpeechEventData_tF39C472B089E67439FD259C5939D8C0F60F66548_m2D0B1E16659F2D60F479574338FFC9D58799C031_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m5781E012CAD465D20D5EA8CF45694487B8AFE9DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CEnsureInputSystemValidU3Eb__4_0_m7D559319DA610D4F27C333F3F87867DF9F66DE46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CEnsureInputSystemValidU3Eb__4_0_mBBE93F7974BFB722C252E4B59D547181C0DB787D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cget_ActiveMixedRealityPointersU3Ed__16_System_Collections_IEnumerator_Reset_m8F81DD6B34FE82140D44D252BF081537492F5D03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityObjectExtensions_IsNull_TisIMixedRealityGestureHandler_t2AF9AF385BB59D19DA456667F689097049F120E8_m2C8CBF29499A7CF413582F8189D00DF9A0EFE9CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_t99B8222621D02B580431670344F7E93CB8693D10_mF97259E6D002B5F855DEA2C610FB5CAF9EBE2F40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityObjectExtensions_IsNull_TisIMixedRealityInputHandler_tE7D2CE8FEAB3A804FC71F58C4F943E1B3EA1FB51_m24A7B0C9E24CCE4E14F091A1CEA8A50A93DEA342_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityObjectExtensions_IsNull_TisIMixedRealitySpeechHandler_t66BC42AC0B95413148789EBA7474B8B0FC07D0A9_m6D8E3C5FE25417E8ADF0C4A0D43F75FB1345D221_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F;
struct RayStepU5BU5D_t3414C621E03C24B384171E375117034E14C9F871;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>
struct Dictionary_2_tCB5016B391E19ADB305776AB4375FCED878EF0B0  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t84CED8CFF7E739FE5FD2849C50A56608B3C3C4D6* ___entries_1;
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
	KeyCollection_t402F617D254E9B4B9CF577E70904CFCD0A3A7580 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t69FD1E77BAEB40BD00DAA5BFD524F361DDF82274 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tCB5016B391E19ADB305776AB4375FCED878EF0B0, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tCB5016B391E19ADB305776AB4375FCED878EF0B0, ___entries_1)); }
	inline EntryU5BU5D_t84CED8CFF7E739FE5FD2849C50A56608B3C3C4D6* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t84CED8CFF7E739FE5FD2849C50A56608B3C3C4D6** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t84CED8CFF7E739FE5FD2849C50A56608B3C3C4D6* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tCB5016B391E19ADB305776AB4375FCED878EF0B0, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tCB5016B391E19ADB305776AB4375FCED878EF0B0, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tCB5016B391E19ADB305776AB4375FCED878EF0B0, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tCB5016B391E19ADB305776AB4375FCED878EF0B0, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tCB5016B391E19ADB305776AB4375FCED878EF0B0, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tCB5016B391E19ADB305776AB4375FCED878EF0B0, ___keys_7)); }
	inline KeyCollection_t402F617D254E9B4B9CF577E70904CFCD0A3A7580 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t402F617D254E9B4B9CF577E70904CFCD0A3A7580 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t402F617D254E9B4B9CF577E70904CFCD0A3A7580 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tCB5016B391E19ADB305776AB4375FCED878EF0B0, ___values_8)); }
	inline ValueCollection_t69FD1E77BAEB40BD00DAA5BFD524F361DDF82274 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t69FD1E77BAEB40BD00DAA5BFD524F361DDF82274 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t69FD1E77BAEB40BD00DAA5BFD524F361DDF82274 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tCB5016B391E19ADB305776AB4375FCED878EF0B0, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// Microsoft.MixedReality.Toolkit.Physics.BaseRayStabilizer
struct BaseRayStabilizer_t58B050CF1A58AAA5697D78780C43520C1AA7B0F3  : public RuntimeObject
{
public:

public:
};


// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7  : public RuntimeObject
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

// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter
struct SimpleCoroutineAwaiter_tC457780E69748E91DD44509C87CDD5DE74E87B2A  : public RuntimeObject
{
public:
	// System.Exception Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter::exception
	Exception_t * ___exception_0;
	// System.Action Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter::continuation
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation_1;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter::<IsCompleted>k__BackingField
	bool ___U3CIsCompletedU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_exception_0() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_tC457780E69748E91DD44509C87CDD5DE74E87B2A, ___exception_0)); }
	inline Exception_t * get_exception_0() const { return ___exception_0; }
	inline Exception_t ** get_address_of_exception_0() { return &___exception_0; }
	inline void set_exception_0(Exception_t * value)
	{
		___exception_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___exception_0), (void*)value);
	}

	inline static int32_t get_offset_of_continuation_1() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_tC457780E69748E91DD44509C87CDD5DE74E87B2A, ___continuation_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_continuation_1() const { return ___continuation_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_continuation_1() { return &___continuation_1; }
	inline void set_continuation_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___continuation_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continuation_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsCompletedU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_tC457780E69748E91DD44509C87CDD5DE74E87B2A, ___U3CIsCompletedU3Ek__BackingField_2)); }
	inline bool get_U3CIsCompletedU3Ek__BackingField_2() const { return ___U3CIsCompletedU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CIsCompletedU3Ek__BackingField_2() { return &___U3CIsCompletedU3Ek__BackingField_2; }
	inline void set_U3CIsCompletedU3Ek__BackingField_2(bool value)
	{
		___U3CIsCompletedU3Ek__BackingField_2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<>c
struct U3CU3Ec_tBAE32D5B0DA26C4B975A203181ABCC03F745703A  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tBAE32D5B0DA26C4B975A203181ABCC03F745703A_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<>c Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<>c::<>9
	U3CU3Ec_tBAE32D5B0DA26C4B975A203181ABCC03F745703A * ___U3CU3E9_0;
	// System.Func`1<System.Boolean> Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<>c::<>9__4_0
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___U3CU3E9__4_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tBAE32D5B0DA26C4B975A203181ABCC03F745703A_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tBAE32D5B0DA26C4B975A203181ABCC03F745703A * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tBAE32D5B0DA26C4B975A203181ABCC03F745703A ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tBAE32D5B0DA26C4B975A203181ABCC03F745703A * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__4_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tBAE32D5B0DA26C4B975A203181ABCC03F745703A_StaticFields, ___U3CU3E9__4_0_1)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_U3CU3E9__4_0_1() const { return ___U3CU3E9__4_0_1; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_U3CU3E9__4_0_1() { return &___U3CU3E9__4_0_1; }
	inline void set_U3CU3E9__4_0_1(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___U3CU3E9__4_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__4_0_1), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<>c
struct U3CU3Ec_t5E1E7C2705DC71CED32F326A0D0EDE6498075716  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t5E1E7C2705DC71CED32F326A0D0EDE6498075716_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<>c Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<>c::<>9
	U3CU3Ec_t5E1E7C2705DC71CED32F326A0D0EDE6498075716 * ___U3CU3E9_0;
	// System.Func`1<System.Boolean> Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<>c::<>9__4_0
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___U3CU3E9__4_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5E1E7C2705DC71CED32F326A0D0EDE6498075716_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t5E1E7C2705DC71CED32F326A0D0EDE6498075716 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t5E1E7C2705DC71CED32F326A0D0EDE6498075716 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t5E1E7C2705DC71CED32F326A0D0EDE6498075716 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__4_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5E1E7C2705DC71CED32F326A0D0EDE6498075716_StaticFields, ___U3CU3E9__4_0_1)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_U3CU3E9__4_0_1() const { return ___U3CU3E9__4_0_1; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_U3CU3E9__4_0_1() { return &___U3CU3E9__4_0_1; }
	inline void set_U3CU3E9__4_0_1(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___U3CU3E9__4_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__4_0_1), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c
struct U3CU3Ec_t738602F83F328AD6B4BE4BEE3436DDB566A8F3DA  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t738602F83F328AD6B4BE4BEE3436DDB566A8F3DA_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<>9
	U3CU3Ec_t738602F83F328AD6B4BE4BEE3436DDB566A8F3DA * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t738602F83F328AD6B4BE4BEE3436DDB566A8F3DA_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t738602F83F328AD6B4BE4BEE3436DDB566A8F3DA * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t738602F83F328AD6B4BE4BEE3436DDB566A8F3DA ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t738602F83F328AD6B4BE4BEE3436DDB566A8F3DA * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable/<>c
struct U3CU3Ec_tC3C72E1104F73BBEC60830726FCD3332E25CEC19  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tC3C72E1104F73BBEC60830726FCD3332E25CEC19_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable/<>c Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable/<>c::<>9
	U3CU3Ec_tC3C72E1104F73BBEC60830726FCD3332E25CEC19 * ___U3CU3E9_0;
	// System.Func`3<System.String,UnityEngine.Transform,System.String> Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable/<>c::<>9__25_0
	Func_3_t25039A52ED82957816F93C2D9CF335791DA6FCFD * ___U3CU3E9__25_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC3C72E1104F73BBEC60830726FCD3332E25CEC19_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tC3C72E1104F73BBEC60830726FCD3332E25CEC19 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tC3C72E1104F73BBEC60830726FCD3332E25CEC19 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tC3C72E1104F73BBEC60830726FCD3332E25CEC19 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC3C72E1104F73BBEC60830726FCD3332E25CEC19_StaticFields, ___U3CU3E9__25_0_1)); }
	inline Func_3_t25039A52ED82957816F93C2D9CF335791DA6FCFD * get_U3CU3E9__25_0_1() const { return ___U3CU3E9__25_0_1; }
	inline Func_3_t25039A52ED82957816F93C2D9CF335791DA6FCFD ** get_address_of_U3CU3E9__25_0_1() { return &___U3CU3E9__25_0_1; }
	inline void set_U3CU3E9__25_0_1(Func_3_t25039A52ED82957816F93C2D9CF335791DA6FCFD * value)
	{
		___U3CU3E9__25_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_0_1), (void*)value);
	}
};


// UnityEngine.EventSystems.PointerInputModule/MouseState
struct MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState> UnityEngine.EventSystems.PointerInputModule/MouseState::m_TrackedButtons
	List_1_t75FFBEBE24171F12D0459DE4BA90E0FD3E22A60E * ___m_TrackedButtons_0;

public:
	inline static int32_t get_offset_of_m_TrackedButtons_0() { return static_cast<int32_t>(offsetof(MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1, ___m_TrackedButtons_0)); }
	inline List_1_t75FFBEBE24171F12D0459DE4BA90E0FD3E22A60E * get_m_TrackedButtons_0() const { return ___m_TrackedButtons_0; }
	inline List_1_t75FFBEBE24171F12D0459DE4BA90E0FD3E22A60E ** get_address_of_m_TrackedButtons_0() { return &___m_TrackedButtons_0; }
	inline void set_m_TrackedButtons_0(List_1_t75FFBEBE24171F12D0459DE4BA90E0FD3E22A60E * value)
	{
		___m_TrackedButtons_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedButtons_0), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>
struct KeyValuePair_2_t122D8D0845EF16384D2BB12F00D692E3D4480521 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	PointerData_t961238F7F343E720C726AACF3A25940C344E9595 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t122D8D0845EF16384D2BB12F00D692E3D4480521, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t122D8D0845EF16384D2BB12F00D692E3D4480521, ___value_1)); }
	inline PointerData_t961238F7F343E720C726AACF3A25940C344E9595 * get_value_1() const { return ___value_1; }
	inline PointerData_t961238F7F343E720C726AACF3A25940C344E9595 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(PointerData_t961238F7F343E720C726AACF3A25940C344E9595 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Nullable`1<System.Boolean>
struct Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateMachine_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_defaultContextAction_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultContextAction_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E  : public AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E, ___m_EventSystem_1)); }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
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


// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
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


// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C, ___m_task_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshaled_pinvoke
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshaled_com
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
};

// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
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


// UnityEngine.WaitUntil
struct WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// System.Func`1<System.Boolean> UnityEngine.WaitUntil::m_Predicate
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___m_Predicate_0;

public:
	inline static int32_t get_offset_of_m_Predicate_0() { return static_cast<int32_t>(offsetof(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21, ___m_Predicate_0)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_m_Predicate_0() const { return ___m_Predicate_0; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_m_Predicate_0() { return &___m_Predicate_0; }
	inline void set_m_Predicate_0(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___m_Predicate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Predicate_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD, ___m_task_2)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
struct Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C, ___dictionary_0)); }
	inline Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C, ___current_3)); }
	inline KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>
struct Enumerator_tCC5D2E22B90EB083C4B938DEABCCEAB66363BE1D 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tCB5016B391E19ADB305776AB4375FCED878EF0B0 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t122D8D0845EF16384D2BB12F00D692E3D4480521  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tCC5D2E22B90EB083C4B938DEABCCEAB66363BE1D, ___dictionary_0)); }
	inline Dictionary_2_tCB5016B391E19ADB305776AB4375FCED878EF0B0 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tCB5016B391E19ADB305776AB4375FCED878EF0B0 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tCB5016B391E19ADB305776AB4375FCED878EF0B0 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tCC5D2E22B90EB083C4B938DEABCCEAB66363BE1D, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tCC5D2E22B90EB083C4B938DEABCCEAB66363BE1D, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tCC5D2E22B90EB083C4B938DEABCCEAB66363BE1D, ___current_3)); }
	inline KeyValuePair_2_t122D8D0845EF16384D2BB12F00D692E3D4480521  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t122D8D0845EF16384D2BB12F00D692E3D4480521 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t122D8D0845EF16384D2BB12F00D692E3D4480521  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tCC5D2E22B90EB083C4B938DEABCCEAB66363BE1D, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Nullable`1<UnityEngine.Vector3>
struct Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 
{
public:
	// T System.Nullable`1::value
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258, ___value_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_value_0() const { return ___value_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 
{
public:
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_synchronizationContext_0() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_synchronizationContext_0)); }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * get_m_synchronizationContext_0() const { return ___m_synchronizationContext_0; }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 ** get_address_of_m_synchronizationContext_0() { return &___m_synchronizationContext_0; }
	inline void set_m_synchronizationContext_0(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * value)
	{
		___m_synchronizationContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_synchronizationContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_task_2)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_2() const { return ___m_task_2; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshaled_pinvoke
{
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke ___m_coreState_1;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshaled_com
{
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com ___m_coreState_1;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;
};

// Microsoft.MixedReality.Toolkit.Utilities.AxisType
struct AxisType_t928CD1C842DAB47933B336290C91FEED7FB074E8 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AxisType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisType_t928CD1C842DAB47933B336290C91FEED7FB074E8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// Microsoft.MixedReality.Toolkit.Input.FocusEventData
struct FocusEventData_t9F3F2249C05BBF9D98A7BD4B12506BDC36E7F041  : public BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.FocusEventData::<Pointer>k__BackingField
	RuntimeObject* ___U3CPointerU3Ek__BackingField_2;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.FocusEventData::<OldFocusedObject>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3COldFocusedObjectU3Ek__BackingField_3;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.FocusEventData::<NewFocusedObject>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CNewFocusedObjectU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CPointerU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(FocusEventData_t9F3F2249C05BBF9D98A7BD4B12506BDC36E7F041, ___U3CPointerU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CPointerU3Ek__BackingField_2() const { return ___U3CPointerU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CPointerU3Ek__BackingField_2() { return &___U3CPointerU3Ek__BackingField_2; }
	inline void set_U3CPointerU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CPointerU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPointerU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3COldFocusedObjectU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(FocusEventData_t9F3F2249C05BBF9D98A7BD4B12506BDC36E7F041, ___U3COldFocusedObjectU3Ek__BackingField_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3COldFocusedObjectU3Ek__BackingField_3() const { return ___U3COldFocusedObjectU3Ek__BackingField_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3COldFocusedObjectU3Ek__BackingField_3() { return &___U3COldFocusedObjectU3Ek__BackingField_3; }
	inline void set_U3COldFocusedObjectU3Ek__BackingField_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3COldFocusedObjectU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COldFocusedObjectU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNewFocusedObjectU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(FocusEventData_t9F3F2249C05BBF9D98A7BD4B12506BDC36E7F041, ___U3CNewFocusedObjectU3Ek__BackingField_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CNewFocusedObjectU3Ek__BackingField_4() const { return ___U3CNewFocusedObjectU3Ek__BackingField_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CNewFocusedObjectU3Ek__BackingField_4() { return &___U3CNewFocusedObjectU3Ek__BackingField_4; }
	inline void set_U3CNewFocusedObjectU3Ek__BackingField_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CNewFocusedObjectU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNewFocusedObjectU3Ek__BackingField_4), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Handedness
struct Handedness_t5EDD2AF69A2693CD60CD846C35B0729DF0AFF9BE 
{
public:
	// System.Byte Microsoft.MixedReality.Toolkit.Utilities.Handedness::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Handedness_t5EDD2AF69A2693CD60CD846C35B0729DF0AFF9BE, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputSourceType
struct InputSourceType_tDA4F8519764D5878F552E157FAE95348E94F7CEF 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputSourceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputSourceType_tDA4F8519764D5878F552E157FAE95348E94F7CEF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Profiling.LowLevel.MarkerFlags
struct MarkerFlags_t4A8B5185BAD24803CE9A57187867CB93451AA9E8 
{
public:
	// System.UInt16 Unity.Profiling.LowLevel.MarkerFlags::value__
	uint16_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MarkerFlags_t4A8B5185BAD24803CE9A57187867CB93451AA9E8, ___value___2)); }
	inline uint16_t get_value___2() const { return ___value___2; }
	inline uint16_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint16_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose
struct MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_1;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_2;

public:
	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8, ___position_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_1() const { return ___position_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_1 = value;
	}

	inline static int32_t get_offset_of_rotation_2() { return static_cast<int32_t>(offsetof(MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8, ___rotation_2)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_2() const { return ___rotation_2; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_2() { return &___rotation_2; }
	inline void set_rotation_2(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_2 = value;
	}
};

struct MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::<ZeroIdentity>k__BackingField
	MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8  ___U3CZeroIdentityU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CZeroIdentityU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8_StaticFields, ___U3CZeroIdentityU3Ek__BackingField_0)); }
	inline MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8  get_U3CZeroIdentityU3Ek__BackingField_0() const { return ___U3CZeroIdentityU3Ek__BackingField_0; }
	inline MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8 * get_address_of_U3CZeroIdentityU3Ek__BackingField_0() { return &___U3CZeroIdentityU3Ek__BackingField_0; }
	inline void set_U3CZeroIdentityU3Ek__BackingField_0(MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8  value)
	{
		___U3CZeroIdentityU3Ek__BackingField_0 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit
struct MixedRealityRaycastHit_t29E02292EFEC344EEF179FC59666C655A8213D1A 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::point
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point_0;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normal_1;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::barycentricCoordinate
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___barycentricCoordinate_2;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::distance
	float ___distance_3;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::triangleIndex
	int32_t ___triangleIndex_4;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::textureCoord
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___textureCoord_5;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::textureCoord2
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___textureCoord2_6;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::transform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform_7;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::lightmapCoord
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lightmapCoord_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::raycastValid
	bool ___raycastValid_9;
	// UnityEngine.Collider Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::collider
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___collider_10;

public:
	inline static int32_t get_offset_of_point_0() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_t29E02292EFEC344EEF179FC59666C655A8213D1A, ___point_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_point_0() const { return ___point_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_point_0() { return &___point_0; }
	inline void set_point_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___point_0 = value;
	}

	inline static int32_t get_offset_of_normal_1() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_t29E02292EFEC344EEF179FC59666C655A8213D1A, ___normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_normal_1() const { return ___normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_normal_1() { return &___normal_1; }
	inline void set_normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___normal_1 = value;
	}

	inline static int32_t get_offset_of_barycentricCoordinate_2() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_t29E02292EFEC344EEF179FC59666C655A8213D1A, ___barycentricCoordinate_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_barycentricCoordinate_2() const { return ___barycentricCoordinate_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_barycentricCoordinate_2() { return &___barycentricCoordinate_2; }
	inline void set_barycentricCoordinate_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___barycentricCoordinate_2 = value;
	}

	inline static int32_t get_offset_of_distance_3() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_t29E02292EFEC344EEF179FC59666C655A8213D1A, ___distance_3)); }
	inline float get_distance_3() const { return ___distance_3; }
	inline float* get_address_of_distance_3() { return &___distance_3; }
	inline void set_distance_3(float value)
	{
		___distance_3 = value;
	}

	inline static int32_t get_offset_of_triangleIndex_4() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_t29E02292EFEC344EEF179FC59666C655A8213D1A, ___triangleIndex_4)); }
	inline int32_t get_triangleIndex_4() const { return ___triangleIndex_4; }
	inline int32_t* get_address_of_triangleIndex_4() { return &___triangleIndex_4; }
	inline void set_triangleIndex_4(int32_t value)
	{
		___triangleIndex_4 = value;
	}

	inline static int32_t get_offset_of_textureCoord_5() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_t29E02292EFEC344EEF179FC59666C655A8213D1A, ___textureCoord_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_textureCoord_5() const { return ___textureCoord_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_textureCoord_5() { return &___textureCoord_5; }
	inline void set_textureCoord_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___textureCoord_5 = value;
	}

	inline static int32_t get_offset_of_textureCoord2_6() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_t29E02292EFEC344EEF179FC59666C655A8213D1A, ___textureCoord2_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_textureCoord2_6() const { return ___textureCoord2_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_textureCoord2_6() { return &___textureCoord2_6; }
	inline void set_textureCoord2_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___textureCoord2_6 = value;
	}

	inline static int32_t get_offset_of_transform_7() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_t29E02292EFEC344EEF179FC59666C655A8213D1A, ___transform_7)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_transform_7() const { return ___transform_7; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_transform_7() { return &___transform_7; }
	inline void set_transform_7(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___transform_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transform_7), (void*)value);
	}

	inline static int32_t get_offset_of_lightmapCoord_8() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_t29E02292EFEC344EEF179FC59666C655A8213D1A, ___lightmapCoord_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_lightmapCoord_8() const { return ___lightmapCoord_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_lightmapCoord_8() { return &___lightmapCoord_8; }
	inline void set_lightmapCoord_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___lightmapCoord_8 = value;
	}

	inline static int32_t get_offset_of_raycastValid_9() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_t29E02292EFEC344EEF179FC59666C655A8213D1A, ___raycastValid_9)); }
	inline bool get_raycastValid_9() const { return ___raycastValid_9; }
	inline bool* get_address_of_raycastValid_9() { return &___raycastValid_9; }
	inline void set_raycastValid_9(bool value)
	{
		___raycastValid_9 = value;
	}

	inline static int32_t get_offset_of_collider_10() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_t29E02292EFEC344EEF179FC59666C655A8213D1A, ___collider_10)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get_collider_10() const { return ___collider_10; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of_collider_10() { return &___collider_10; }
	inline void set_collider_10(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		___collider_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___collider_10), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit
struct MixedRealityRaycastHit_t29E02292EFEC344EEF179FC59666C655A8213D1A_marshaled_pinvoke
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normal_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___barycentricCoordinate_2;
	float ___distance_3;
	int32_t ___triangleIndex_4;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___textureCoord_5;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___textureCoord2_6;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform_7;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lightmapCoord_8;
	int32_t ___raycastValid_9;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___collider_10;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit
struct MixedRealityRaycastHit_t29E02292EFEC344EEF179FC59666C655A8213D1A_marshaled_com
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normal_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___barycentricCoordinate_2;
	float ___distance_3;
	int32_t ___triangleIndex_4;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___textureCoord_5;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___textureCoord2_6;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform_7;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lightmapCoord_8;
	int32_t ___raycastValid_9;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___collider_10;
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.Ray
struct Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Origin_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Direction_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Direction_1 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Physics.RayStep
struct RayStep_tDD523966EB857DFE1FA64A404F585D84E78FAE8A 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::<Origin>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3COriginU3Ek__BackingField_3;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::<Terminus>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CTerminusU3Ek__BackingField_4;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::<Direction>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CDirectionU3Ek__BackingField_5;
	// System.Single Microsoft.MixedReality.Toolkit.Physics.RayStep::<Length>k__BackingField
	float ___U3CLengthU3Ek__BackingField_6;
	// System.Single Microsoft.MixedReality.Toolkit.Physics.RayStep::epsilon
	float ___epsilon_7;

public:
	inline static int32_t get_offset_of_U3COriginU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RayStep_tDD523966EB857DFE1FA64A404F585D84E78FAE8A, ___U3COriginU3Ek__BackingField_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3COriginU3Ek__BackingField_3() const { return ___U3COriginU3Ek__BackingField_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3COriginU3Ek__BackingField_3() { return &___U3COriginU3Ek__BackingField_3; }
	inline void set_U3COriginU3Ek__BackingField_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3COriginU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CTerminusU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(RayStep_tDD523966EB857DFE1FA64A404F585D84E78FAE8A, ___U3CTerminusU3Ek__BackingField_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CTerminusU3Ek__BackingField_4() const { return ___U3CTerminusU3Ek__BackingField_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CTerminusU3Ek__BackingField_4() { return &___U3CTerminusU3Ek__BackingField_4; }
	inline void set_U3CTerminusU3Ek__BackingField_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CTerminusU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CDirectionU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(RayStep_tDD523966EB857DFE1FA64A404F585D84E78FAE8A, ___U3CDirectionU3Ek__BackingField_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CDirectionU3Ek__BackingField_5() const { return ___U3CDirectionU3Ek__BackingField_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CDirectionU3Ek__BackingField_5() { return &___U3CDirectionU3Ek__BackingField_5; }
	inline void set_U3CDirectionU3Ek__BackingField_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CDirectionU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CLengthU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(RayStep_tDD523966EB857DFE1FA64A404F585D84E78FAE8A, ___U3CLengthU3Ek__BackingField_6)); }
	inline float get_U3CLengthU3Ek__BackingField_6() const { return ___U3CLengthU3Ek__BackingField_6; }
	inline float* get_address_of_U3CLengthU3Ek__BackingField_6() { return &___U3CLengthU3Ek__BackingField_6; }
	inline void set_U3CLengthU3Ek__BackingField_6(float value)
	{
		___U3CLengthU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_epsilon_7() { return static_cast<int32_t>(offsetof(RayStep_tDD523966EB857DFE1FA64A404F585D84E78FAE8A, ___epsilon_7)); }
	inline float get_epsilon_7() const { return ___epsilon_7; }
	inline float* get_address_of_epsilon_7() { return &___epsilon_7; }
	inline void set_epsilon_7(float value)
	{
		___epsilon_7 = value;
	}
};

struct RayStep_tDD523966EB857DFE1FA64A404F585D84E78FAE8A_StaticFields
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::dist
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___dist_0;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::dir
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___dir_1;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::pos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos_2;

public:
	inline static int32_t get_offset_of_dist_0() { return static_cast<int32_t>(offsetof(RayStep_tDD523966EB857DFE1FA64A404F585D84E78FAE8A_StaticFields, ___dist_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_dist_0() const { return ___dist_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_dist_0() { return &___dist_0; }
	inline void set_dist_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___dist_0 = value;
	}

	inline static int32_t get_offset_of_dir_1() { return static_cast<int32_t>(offsetof(RayStep_tDD523966EB857DFE1FA64A404F585D84E78FAE8A_StaticFields, ___dir_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_dir_1() const { return ___dir_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_dir_1() { return &___dir_1; }
	inline void set_dir_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___dir_1 = value;
	}

	inline static int32_t get_offset_of_pos_2() { return static_cast<int32_t>(offsetof(RayStep_tDD523966EB857DFE1FA64A404F585D84E78FAE8A_StaticFields, ___pos_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_pos_2() const { return ___pos_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_pos_2() { return &___pos_2; }
	inline void set_pos_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___pos_2 = value;
	}
};


// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___m_GameObject_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___module_1)); }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_1), (void*)value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldPosition_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldNormal_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___screenPosition_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___screenPosition_9 = value;
	}

	inline static int32_t get_offset_of_displayIndex_10() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___displayIndex_10)); }
	inline int32_t get_displayIndex_10() const { return ___displayIndex_10; }
	inline int32_t* get_address_of_displayIndex_10() { return &___displayIndex_10; }
	inline void set_displayIndex_10(int32_t value)
	{
		___displayIndex_10 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_pinvoke
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_com
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel
struct RecognitionConfidenceLevel_tA2C6A65714C682760B3F9CA43CF57EFBC39A8B44 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RecognitionConfidenceLevel_tA2C6A65714C682760B3F9CA43CF57EFBC39A8B44, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Physics.SceneQueryType
struct SceneQueryType_tB449CAB8ED82FC6E12C7BAEB7BC74666074628B2 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Physics.SceneQueryType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SceneQueryType_tB449CAB8ED82FC6E12C7BAEB7BC74666074628B2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_28;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_33;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_28() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_28)); }
	inline RuntimeObject * get_m_continuationObject_28() const { return ___m_continuationObject_28; }
	inline RuntimeObject ** get_address_of_m_continuationObject_28() { return &___m_continuationObject_28; }
	inline void set_m_continuationObject_28(RuntimeObject * value)
	{
		___m_continuationObject_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_33() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_33)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_33() const { return ___m_contingentProperties_33; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_33() { return &___m_contingentProperties_33; }
	inline void set_m_contingentProperties_33(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_33), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_29;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_30;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_31;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_32;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_34;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_35;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_36;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_37;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_38;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_39;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_29() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_29)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_29() const { return ___s_taskCompletionSentinel_29; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_29() { return &___s_taskCompletionSentinel_29; }
	inline void set_s_taskCompletionSentinel_29(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_29), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_30() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_30)); }
	inline bool get_s_asyncDebuggingEnabled_30() const { return ___s_asyncDebuggingEnabled_30; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_30() { return &___s_asyncDebuggingEnabled_30; }
	inline void set_s_asyncDebuggingEnabled_30(bool value)
	{
		___s_asyncDebuggingEnabled_30 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_31() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_31)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_31() const { return ___s_currentActiveTasks_31; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_31() { return &___s_currentActiveTasks_31; }
	inline void set_s_currentActiveTasks_31(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_31), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_32() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_32)); }
	inline RuntimeObject * get_s_activeTasksLock_32() const { return ___s_activeTasksLock_32; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_32() { return &___s_activeTasksLock_32; }
	inline void set_s_activeTasksLock_32(RuntimeObject * value)
	{
		___s_activeTasksLock_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_32), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_34() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_34)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_34() const { return ___s_taskCancelCallback_34; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_34() { return &___s_taskCancelCallback_34; }
	inline void set_s_taskCancelCallback_34(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_34), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_35() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_35)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_35() const { return ___s_createContingentProperties_35; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_35() { return &___s_createContingentProperties_35; }
	inline void set_s_createContingentProperties_35(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_35), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_36() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_36)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_36() const { return ___s_completedTask_36; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_36() { return &___s_completedTask_36; }
	inline void set_s_completedTask_36(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_37() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_37)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_37() const { return ___s_IsExceptionObservedByParentPredicate_37; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_37() { return &___s_IsExceptionObservedByParentPredicate_37; }
	inline void set_s_IsExceptionObservedByParentPredicate_37(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_37), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_38() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_38)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_38() const { return ___s_ecCallback_38; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_38() { return &___s_ecCallback_38; }
	inline void set_s_ecCallback_38(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_38), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_39() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_39)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_39() const { return ___s_IsTaskContinuationNullPredicate_39; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_39() { return &___s_IsTaskContinuationNullPredicate_39; }
	inline void set_s_IsTaskContinuationNullPredicate_39(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_39), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_0)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_2)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};


// Microsoft.MixedReality.Toolkit.TrackingState
struct TrackingState_tBABC1057955FBD9FB728F25AD69D45AA0F6E3E96 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_tBABC1057955FBD9FB728F25AD69D45AA0F6E3E96, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventSystems.PointerEventData/FramePressState
struct FramePressState_t4BB461B7704D7F72519B36A0C8B3370AB302E7A7 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData/FramePressState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FramePressState_t4BB461B7704D7F72519B36A0C8B3370AB302E7A7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventSystems.PointerEventData/InputButton
struct InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData/InputButton::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Profiling.ProfilerMarker/AutoScope
struct AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker/AutoScope::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B 
{
public:
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;

public:
	inline static int32_t get_offset_of_m_builder_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B, ___m_builder_1)); }
	inline AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  get_m_builder_1() const { return ___m_builder_1; }
	inline AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD * get_address_of_m_builder_1() { return &___m_builder_1; }
	inline void set_m_builder_1(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  value)
	{
		___m_builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}
};

struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___s_cachedCompleted_0;

public:
	inline static int32_t get_offset_of_s_cachedCompleted_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_StaticFields, ___s_cachedCompleted_0)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_s_cachedCompleted_0() const { return ___s_cachedCompleted_0; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_s_cachedCompleted_0() { return &___s_cachedCompleted_0; }
	inline void set_s_cachedCompleted_0(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___s_cachedCompleted_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedCompleted_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_marshaled_com
{
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;
};

// Microsoft.MixedReality.Toolkit.Input.BaseGenericInputSource
struct BaseGenericInputSource_t2C53C81AABEABD940B6C53D893C0AB19301845A9  : public RuntimeObject
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.BaseGenericInputSource::<SourceId>k__BackingField
	uint32_t ___U3CSourceIdU3Ek__BackingField_0;
	// System.String Microsoft.MixedReality.Toolkit.Input.BaseGenericInputSource::<SourceName>k__BackingField
	String_t* ___U3CSourceNameU3Ek__BackingField_1;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[] Microsoft.MixedReality.Toolkit.Input.BaseGenericInputSource::<Pointers>k__BackingField
	IMixedRealityPointerU5BU5D_t878EB1C38193E537833123AD7BCBE635AA402AF9* ___U3CPointersU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.Input.InputSourceType Microsoft.MixedReality.Toolkit.Input.BaseGenericInputSource::<SourceType>k__BackingField
	int32_t ___U3CSourceTypeU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CSourceIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BaseGenericInputSource_t2C53C81AABEABD940B6C53D893C0AB19301845A9, ___U3CSourceIdU3Ek__BackingField_0)); }
	inline uint32_t get_U3CSourceIdU3Ek__BackingField_0() const { return ___U3CSourceIdU3Ek__BackingField_0; }
	inline uint32_t* get_address_of_U3CSourceIdU3Ek__BackingField_0() { return &___U3CSourceIdU3Ek__BackingField_0; }
	inline void set_U3CSourceIdU3Ek__BackingField_0(uint32_t value)
	{
		___U3CSourceIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CSourceNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseGenericInputSource_t2C53C81AABEABD940B6C53D893C0AB19301845A9, ___U3CSourceNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CSourceNameU3Ek__BackingField_1() const { return ___U3CSourceNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CSourceNameU3Ek__BackingField_1() { return &___U3CSourceNameU3Ek__BackingField_1; }
	inline void set_U3CSourceNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CSourceNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSourceNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPointersU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseGenericInputSource_t2C53C81AABEABD940B6C53D893C0AB19301845A9, ___U3CPointersU3Ek__BackingField_2)); }
	inline IMixedRealityPointerU5BU5D_t878EB1C38193E537833123AD7BCBE635AA402AF9* get_U3CPointersU3Ek__BackingField_2() const { return ___U3CPointersU3Ek__BackingField_2; }
	inline IMixedRealityPointerU5BU5D_t878EB1C38193E537833123AD7BCBE635AA402AF9** get_address_of_U3CPointersU3Ek__BackingField_2() { return &___U3CPointersU3Ek__BackingField_2; }
	inline void set_U3CPointersU3Ek__BackingField_2(IMixedRealityPointerU5BU5D_t878EB1C38193E537833123AD7BCBE635AA402AF9* value)
	{
		___U3CPointersU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPointersU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSourceTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseGenericInputSource_t2C53C81AABEABD940B6C53D893C0AB19301845A9, ___U3CSourceTypeU3Ek__BackingField_3)); }
	inline int32_t get_U3CSourceTypeU3Ek__BackingField_3() const { return ___U3CSourceTypeU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CSourceTypeU3Ek__BackingField_3() { return &___U3CSourceTypeU3Ek__BackingField_3; }
	inline void set_U3CSourceTypeU3Ek__BackingField_3(int32_t value)
	{
		___U3CSourceTypeU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.GenericPointer
struct GenericPointer_t2D74A2BA9CBADA588374101900F39C9B4220A2C5  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController Microsoft.MixedReality.Toolkit.Input.GenericPointer::controller
	RuntimeObject* ___controller_0;
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.GenericPointer::<PointerId>k__BackingField
	uint32_t ___U3CPointerIdU3Ek__BackingField_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.GenericPointer::<PointerName>k__BackingField
	String_t* ___U3CPointerNameU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.GenericPointer::inputSourceParent
	RuntimeObject* ___inputSourceParent_3;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityCursor Microsoft.MixedReality.Toolkit.Input.GenericPointer::<BaseCursor>k__BackingField
	RuntimeObject* ___U3CBaseCursorU3Ek__BackingField_4;
	// Microsoft.MixedReality.Toolkit.Input.ICursorModifier Microsoft.MixedReality.Toolkit.Input.GenericPointer::<CursorModifier>k__BackingField
	RuntimeObject* ___U3CCursorModifierU3Ek__BackingField_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.GenericPointer::isInteractionEnabled
	bool ___isInteractionEnabled_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.GenericPointer::<IsActive>k__BackingField
	bool ___U3CIsActiveU3Ek__BackingField_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.GenericPointer::<IsFocusLocked>k__BackingField
	bool ___U3CIsFocusLockedU3Ek__BackingField_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.GenericPointer::<IsTargetPositionLockedOnFocusLock>k__BackingField
	bool ___U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_9;
	// System.Single Microsoft.MixedReality.Toolkit.Input.GenericPointer::<PointerExtent>k__BackingField
	float ___U3CPointerExtentU3Ek__BackingField_10;
	// Microsoft.MixedReality.Toolkit.Physics.RayStep[] Microsoft.MixedReality.Toolkit.Input.GenericPointer::<Rays>k__BackingField
	RayStepU5BU5D_t3414C621E03C24B384171E375117034E14C9F871* ___U3CRaysU3Ek__BackingField_11;
	// UnityEngine.LayerMask[] Microsoft.MixedReality.Toolkit.Input.GenericPointer::<PrioritizedLayerMasksOverride>k__BackingField
	LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* ___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_12;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler Microsoft.MixedReality.Toolkit.Input.GenericPointer::<FocusTarget>k__BackingField
	RuntimeObject* ___U3CFocusTargetU3Ek__BackingField_13;
	// Microsoft.MixedReality.Toolkit.Input.IPointerResult Microsoft.MixedReality.Toolkit.Input.GenericPointer::<Result>k__BackingField
	RuntimeObject* ___U3CResultU3Ek__BackingField_14;
	// Microsoft.MixedReality.Toolkit.Physics.IBaseRayStabilizer Microsoft.MixedReality.Toolkit.Input.GenericPointer::<RayStabilizer>k__BackingField
	RuntimeObject* ___U3CRayStabilizerU3Ek__BackingField_15;
	// Microsoft.MixedReality.Toolkit.Physics.SceneQueryType Microsoft.MixedReality.Toolkit.Input.GenericPointer::<SceneQueryType>k__BackingField
	int32_t ___U3CSceneQueryTypeU3Ek__BackingField_16;
	// System.Single Microsoft.MixedReality.Toolkit.Input.GenericPointer::<SphereCastRadius>k__BackingField
	float ___U3CSphereCastRadiusU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_controller_0() { return static_cast<int32_t>(offsetof(GenericPointer_t2D74A2BA9CBADA588374101900F39C9B4220A2C5, ___controller_0)); }
	inline RuntimeObject* get_controller_0() const { return ___controller_0; }
	inline RuntimeObject** get_address_of_controller_0() { return &___controller_0; }
	inline void set_controller_0(RuntimeObject* value)
	{
		___controller_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controller_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPointerIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(GenericPointer_t2D74A2BA9CBADA588374101900F39C9B4220A2C5, ___U3CPointerIdU3Ek__BackingField_1)); }
	inline uint32_t get_U3CPointerIdU3Ek__BackingField_1() const { return ___U3CPointerIdU3Ek__BackingField_1; }
	inline uint32_t* get_address_of_U3CPointerIdU3Ek__BackingField_1() { return &___U3CPointerIdU3Ek__BackingField_1; }
	inline void set_U3CPointerIdU3Ek__BackingField_1(uint32_t value)
	{
		___U3CPointerIdU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CPointerNameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(GenericPointer_t2D74A2BA9CBADA588374101900F39C9B4220A2C5, ___U3CPointerNameU3Ek__BackingField_2)); }
	inline String_t* get_U3CPointerNameU3Ek__BackingField_2() const { return ___U3CPointerNameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CPointerNameU3Ek__BackingField_2() { return &___U3CPointerNameU3Ek__BackingField_2; }
	inline void set_U3CPointerNameU3Ek__BackingField_2(String_t* value)
	{
		___U3CPointerNameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPointerNameU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_inputSourceParent_3() { return static_cast<int32_t>(offsetof(GenericPointer_t2D74A2BA9CBADA588374101900F39C9B4220A2C5, ___inputSourceParent_3)); }
	inline RuntimeObject* get_inputSourceParent_3() const { return ___inputSourceParent_3; }
	inline RuntimeObject** get_address_of_inputSourceParent_3() { return &___inputSourceParent_3; }
	inline void set_inputSourceParent_3(RuntimeObject* value)
	{
		___inputSourceParent_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputSourceParent_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBaseCursorU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(GenericPointer_t2D74A2BA9CBADA588374101900F39C9B4220A2C5, ___U3CBaseCursorU3Ek__BackingField_4)); }
	inline RuntimeObject* get_U3CBaseCursorU3Ek__BackingField_4() const { return ___U3CBaseCursorU3Ek__BackingField_4; }
	inline RuntimeObject** get_address_of_U3CBaseCursorU3Ek__BackingField_4() { return &___U3CBaseCursorU3Ek__BackingField_4; }
	inline void set_U3CBaseCursorU3Ek__BackingField_4(RuntimeObject* value)
	{
		___U3CBaseCursorU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBaseCursorU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCursorModifierU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(GenericPointer_t2D74A2BA9CBADA588374101900F39C9B4220A2C5, ___U3CCursorModifierU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CCursorModifierU3Ek__BackingField_5() const { return ___U3CCursorModifierU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CCursorModifierU3Ek__BackingField_5() { return &___U3CCursorModifierU3Ek__BackingField_5; }
	inline void set_U3CCursorModifierU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CCursorModifierU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCursorModifierU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_isInteractionEnabled_6() { return static_cast<int32_t>(offsetof(GenericPointer_t2D74A2BA9CBADA588374101900F39C9B4220A2C5, ___isInteractionEnabled_6)); }
	inline bool get_isInteractionEnabled_6() const { return ___isInteractionEnabled_6; }
	inline bool* get_address_of_isInteractionEnabled_6() { return &___isInteractionEnabled_6; }
	inline void set_isInteractionEnabled_6(bool value)
	{
		___isInteractionEnabled_6 = value;
	}

	inline static int32_t get_offset_of_U3CIsActiveU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(GenericPointer_t2D74A2BA9CBADA588374101900F39C9B4220A2C5, ___U3CIsActiveU3Ek__BackingField_7)); }
	inline bool get_U3CIsActiveU3Ek__BackingField_7() const { return ___U3CIsActiveU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CIsActiveU3Ek__BackingField_7() { return &___U3CIsActiveU3Ek__BackingField_7; }
	inline void set_U3CIsActiveU3Ek__BackingField_7(bool value)
	{
		___U3CIsActiveU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CIsFocusLockedU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(GenericPointer_t2D74A2BA9CBADA588374101900F39C9B4220A2C5, ___U3CIsFocusLockedU3Ek__BackingField_8)); }
	inline bool get_U3CIsFocusLockedU3Ek__BackingField_8() const { return ___U3CIsFocusLockedU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CIsFocusLockedU3Ek__BackingField_8() { return &___U3CIsFocusLockedU3Ek__BackingField_8; }
	inline void set_U3CIsFocusLockedU3Ek__BackingField_8(bool value)
	{
		___U3CIsFocusLockedU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(GenericPointer_t2D74A2BA9CBADA588374101900F39C9B4220A2C5, ___U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_9)); }
	inline bool get_U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_9() const { return ___U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_9() { return &___U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_9; }
	inline void set_U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_9(bool value)
	{
		___U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CPointerExtentU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(GenericPointer_t2D74A2BA9CBADA588374101900F39C9B4220A2C5, ___U3CPointerExtentU3Ek__BackingField_10)); }
	inline float get_U3CPointerExtentU3Ek__BackingField_10() const { return ___U3CPointerExtentU3Ek__BackingField_10; }
	inline float* get_address_of_U3CPointerExtentU3Ek__BackingField_10() { return &___U3CPointerExtentU3Ek__BackingField_10; }
	inline void set_U3CPointerExtentU3Ek__BackingField_10(float value)
	{
		___U3CPointerExtentU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CRaysU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(GenericPointer_t2D74A2BA9CBADA588374101900F39C9B4220A2C5, ___U3CRaysU3Ek__BackingField_11)); }
	inline RayStepU5BU5D_t3414C621E03C24B384171E375117034E14C9F871* get_U3CRaysU3Ek__BackingField_11() const { return ___U3CRaysU3Ek__BackingField_11; }
	inline RayStepU5BU5D_t3414C621E03C24B384171E375117034E14C9F871** get_address_of_U3CRaysU3Ek__BackingField_11() { return &___U3CRaysU3Ek__BackingField_11; }
	inline void set_U3CRaysU3Ek__BackingField_11(RayStepU5BU5D_t3414C621E03C24B384171E375117034E14C9F871* value)
	{
		___U3CRaysU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRaysU3Ek__BackingField_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(GenericPointer_t2D74A2BA9CBADA588374101900F39C9B4220A2C5, ___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_12)); }
	inline LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* get_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_12() const { return ___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_12; }
	inline LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F** get_address_of_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_12() { return &___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_12; }
	inline void set_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_12(LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* value)
	{
		___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFocusTargetU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(GenericPointer_t2D74A2BA9CBADA588374101900F39C9B4220A2C5, ___U3CFocusTargetU3Ek__BackingField_13)); }
	inline RuntimeObject* get_U3CFocusTargetU3Ek__BackingField_13() const { return ___U3CFocusTargetU3Ek__BackingField_13; }
	inline RuntimeObject** get_address_of_U3CFocusTargetU3Ek__BackingField_13() { return &___U3CFocusTargetU3Ek__BackingField_13; }
	inline void set_U3CFocusTargetU3Ek__BackingField_13(RuntimeObject* value)
	{
		___U3CFocusTargetU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFocusTargetU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResultU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(GenericPointer_t2D74A2BA9CBADA588374101900F39C9B4220A2C5, ___U3CResultU3Ek__BackingField_14)); }
	inline RuntimeObject* get_U3CResultU3Ek__BackingField_14() const { return ___U3CResultU3Ek__BackingField_14; }
	inline RuntimeObject** get_address_of_U3CResultU3Ek__BackingField_14() { return &___U3CResultU3Ek__BackingField_14; }
	inline void set_U3CResultU3Ek__BackingField_14(RuntimeObject* value)
	{
		___U3CResultU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResultU3Ek__BackingField_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRayStabilizerU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(GenericPointer_t2D74A2BA9CBADA588374101900F39C9B4220A2C5, ___U3CRayStabilizerU3Ek__BackingField_15)); }
	inline RuntimeObject* get_U3CRayStabilizerU3Ek__BackingField_15() const { return ___U3CRayStabilizerU3Ek__BackingField_15; }
	inline RuntimeObject** get_address_of_U3CRayStabilizerU3Ek__BackingField_15() { return &___U3CRayStabilizerU3Ek__BackingField_15; }
	inline void set_U3CRayStabilizerU3Ek__BackingField_15(RuntimeObject* value)
	{
		___U3CRayStabilizerU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRayStabilizerU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSceneQueryTypeU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(GenericPointer_t2D74A2BA9CBADA588374101900F39C9B4220A2C5, ___U3CSceneQueryTypeU3Ek__BackingField_16)); }
	inline int32_t get_U3CSceneQueryTypeU3Ek__BackingField_16() const { return ___U3CSceneQueryTypeU3Ek__BackingField_16; }
	inline int32_t* get_address_of_U3CSceneQueryTypeU3Ek__BackingField_16() { return &___U3CSceneQueryTypeU3Ek__BackingField_16; }
	inline void set_U3CSceneQueryTypeU3Ek__BackingField_16(int32_t value)
	{
		___U3CSceneQueryTypeU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CSphereCastRadiusU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(GenericPointer_t2D74A2BA9CBADA588374101900F39C9B4220A2C5, ___U3CSphereCastRadiusU3Ek__BackingField_17)); }
	inline float get_U3CSphereCastRadiusU3Ek__BackingField_17() const { return ___U3CSphereCastRadiusU3Ek__BackingField_17; }
	inline float* get_address_of_U3CSphereCastRadiusU3Ek__BackingField_17() { return &___U3CSphereCastRadiusU3Ek__BackingField_17; }
	inline void set_U3CSphereCastRadiusU3Ek__BackingField_17(float value)
	{
		___U3CSphereCastRadiusU3Ek__BackingField_17 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58 
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::id
	uint32_t ___id_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::description
	String_t* ___description_2;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::axisConstraint
	int32_t ___axisConstraint_3;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58, ___id_1)); }
	inline uint32_t get_id_1() const { return ___id_1; }
	inline uint32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(uint32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_description_2() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58, ___description_2)); }
	inline String_t* get_description_2() const { return ___description_2; }
	inline String_t** get_address_of_description_2() { return &___description_2; }
	inline void set_description_2(String_t* value)
	{
		___description_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_2), (void*)value);
	}

	inline static int32_t get_offset_of_axisConstraint_3() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58, ___axisConstraint_3)); }
	inline int32_t get_axisConstraint_3() const { return ___axisConstraint_3; }
	inline int32_t* get_address_of_axisConstraint_3() { return &___axisConstraint_3; }
	inline void set_axisConstraint_3(int32_t value)
	{
		___axisConstraint_3 = value;
	}
};

struct MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::<None>k__BackingField
	MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58  ___U3CNoneU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNoneU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58_StaticFields, ___U3CNoneU3Ek__BackingField_0)); }
	inline MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58  get_U3CNoneU3Ek__BackingField_0() const { return ___U3CNoneU3Ek__BackingField_0; }
	inline MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58 * get_address_of_U3CNoneU3Ek__BackingField_0() { return &___U3CNoneU3Ek__BackingField_0; }
	inline void set_U3CNoneU3Ek__BackingField_0(MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58  value)
	{
		___U3CNoneU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CNoneU3Ek__BackingField_0))->___description_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58_marshaled_pinvoke
{
	uint32_t ___id_1;
	char* ___description_2;
	int32_t ___axisConstraint_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58_marshaled_com
{
	uint32_t ___id_1;
	Il2CppChar* ___description_2;
	int32_t ___axisConstraint_3;
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

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954  : public BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerEnterU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___m_PointerPress_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerPress_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClastPressU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrawPointerPressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerDragU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerClickU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerClickU3Ek__BackingField_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerClickU3Ek__BackingField_7() const { return ___U3CpointerClickU3Ek__BackingField_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerClickU3Ek__BackingField_7() { return &___U3CpointerClickU3Ek__BackingField_7; }
	inline void set_U3CpointerClickU3Ek__BackingField_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerClickU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerClickU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerCurrentRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerCurrentRaycastU3Ek__BackingField_8() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_8(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerPressRaycastU3Ek__BackingField_9)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerPressRaycastU3Ek__BackingField_9() const { return ___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return &___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_9(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_hovered_10() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___hovered_10)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_hovered_10() const { return ___hovered_10; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_hovered_10() { return &___hovered_10; }
	inline void set_hovered_10(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___hovered_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hovered_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CeligibleForClickU3Ek__BackingField_11)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_11() const { return ___U3CeligibleForClickU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_11() { return &___U3CeligibleForClickU3Ek__BackingField_11; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_11(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerIdU3Ek__BackingField_12)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_12() const { return ___U3CpointerIdU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_12() { return &___U3CpointerIdU3Ek__BackingField_12; }
	inline void set_U3CpointerIdU3Ek__BackingField_12(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpositionU3Ek__BackingField_13)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpositionU3Ek__BackingField_13() const { return ___U3CpositionU3Ek__BackingField_13; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpositionU3Ek__BackingField_13() { return &___U3CpositionU3Ek__BackingField_13; }
	inline void set_U3CpositionU3Ek__BackingField_13(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpositionU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdeltaU3Ek__BackingField_14)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CdeltaU3Ek__BackingField_14() const { return ___U3CdeltaU3Ek__BackingField_14; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CdeltaU3Ek__BackingField_14() { return &___U3CdeltaU3Ek__BackingField_14; }
	inline void set_U3CdeltaU3Ek__BackingField_14(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CdeltaU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpressPositionU3Ek__BackingField_15)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpressPositionU3Ek__BackingField_15() const { return ___U3CpressPositionU3Ek__BackingField_15; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpressPositionU3Ek__BackingField_15() { return &___U3CpressPositionU3Ek__BackingField_15; }
	inline void set_U3CpressPositionU3Ek__BackingField_15(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpressPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldPositionU3Ek__BackingField_16)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldPositionU3Ek__BackingField_16() const { return ___U3CworldPositionU3Ek__BackingField_16; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldPositionU3Ek__BackingField_16() { return &___U3CworldPositionU3Ek__BackingField_16; }
	inline void set_U3CworldPositionU3Ek__BackingField_16(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldPositionU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldNormalU3Ek__BackingField_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldNormalU3Ek__BackingField_17() const { return ___U3CworldNormalU3Ek__BackingField_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldNormalU3Ek__BackingField_17() { return &___U3CworldNormalU3Ek__BackingField_17; }
	inline void set_U3CworldNormalU3Ek__BackingField_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldNormalU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickTimeU3Ek__BackingField_18)); }
	inline float get_U3CclickTimeU3Ek__BackingField_18() const { return ___U3CclickTimeU3Ek__BackingField_18; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_18() { return &___U3CclickTimeU3Ek__BackingField_18; }
	inline void set_U3CclickTimeU3Ek__BackingField_18(float value)
	{
		___U3CclickTimeU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickCountU3Ek__BackingField_19)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_19() const { return ___U3CclickCountU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_19() { return &___U3CclickCountU3Ek__BackingField_19; }
	inline void set_U3CclickCountU3Ek__BackingField_19(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CscrollDeltaU3Ek__BackingField_20)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CscrollDeltaU3Ek__BackingField_20() const { return ___U3CscrollDeltaU3Ek__BackingField_20; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CscrollDeltaU3Ek__BackingField_20() { return &___U3CscrollDeltaU3Ek__BackingField_20; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_20(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CuseDragThresholdU3Ek__BackingField_21)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_21() const { return ___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_21() { return &___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_21(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdraggingU3Ek__BackingField_22)); }
	inline bool get_U3CdraggingU3Ek__BackingField_22() const { return ___U3CdraggingU3Ek__BackingField_22; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_22() { return &___U3CdraggingU3Ek__BackingField_22; }
	inline void set_U3CdraggingU3Ek__BackingField_22(bool value)
	{
		___U3CdraggingU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CbuttonU3Ek__BackingField_23)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_23() const { return ___U3CbuttonU3Ek__BackingField_23; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_23() { return &___U3CbuttonU3Ek__BackingField_23; }
	inline void set_U3CbuttonU3Ek__BackingField_23(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_23 = value;
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<Start>d__2
struct U3CStartU3Ed__2_tD6C955B38EB1A50FFA586D07CE43BAF8F4F824AB 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<Start>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<Start>d__2::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<Start>d__2::<>4__this
	InputSystemGlobalHandlerListener_t7626F4B8931C8C8AABDC1B0FBC54E86EF67584D5 * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<Start>d__2::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_tD6C955B38EB1A50FFA586D07CE43BAF8F4F824AB, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_tD6C955B38EB1A50FFA586D07CE43BAF8F4F824AB, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_tD6C955B38EB1A50FFA586D07CE43BAF8F4F824AB, ___U3CU3E4__this_2)); }
	inline InputSystemGlobalHandlerListener_t7626F4B8931C8C8AABDC1B0FBC54E86EF67584D5 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline InputSystemGlobalHandlerListener_t7626F4B8931C8C8AABDC1B0FBC54E86EF67584D5 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(InputSystemGlobalHandlerListener_t7626F4B8931C8C8AABDC1B0FBC54E86EF67584D5 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_tD6C955B38EB1A50FFA586D07CE43BAF8F4F824AB, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<Start>d__2
struct U3CStartU3Ed__2_t356707D26D0C2F68AA6A184ABE199B7170D68915 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<Start>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<Start>d__2::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<Start>d__2::<>4__this
	InputSystemGlobalListener_t3C3B05F5289CFC04036EB6158B24859F969250BD * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<Start>d__2::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t356707D26D0C2F68AA6A184ABE199B7170D68915, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t356707D26D0C2F68AA6A184ABE199B7170D68915, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t356707D26D0C2F68AA6A184ABE199B7170D68915, ___U3CU3E4__this_2)); }
	inline InputSystemGlobalListener_t3C3B05F5289CFC04036EB6158B24859F969250BD * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline InputSystemGlobalListener_t3C3B05F5289CFC04036EB6158B24859F969250BD ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(InputSystemGlobalListener_t3C3B05F5289CFC04036EB6158B24859F969250BD * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t356707D26D0C2F68AA6A184ABE199B7170D68915, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16
struct U3Cget_ActiveMixedRealityPointersU3Ed__16_t5849695544400F58C2B6233E979A98A2ABFA366D  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::<>4__this
	MixedRealityInputModule_t574B111D4EE14DF45FD03659EB6D4FA1FCDB5F61 * ___U3CU3E4__this_3;
	// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::<>7__wrap1
	Enumerator_tCC5D2E22B90EB083C4B938DEABCCEAB66363BE1D  ___U3CU3E7__wrap1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3Cget_ActiveMixedRealityPointersU3Ed__16_t5849695544400F58C2B6233E979A98A2ABFA366D, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3Cget_ActiveMixedRealityPointersU3Ed__16_t5849695544400F58C2B6233E979A98A2ABFA366D, ___U3CU3E2__current_1)); }
	inline RuntimeObject* get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject* value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3Cget_ActiveMixedRealityPointersU3Ed__16_t5849695544400F58C2B6233E979A98A2ABFA366D, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3Cget_ActiveMixedRealityPointersU3Ed__16_t5849695544400F58C2B6233E979A98A2ABFA366D, ___U3CU3E4__this_3)); }
	inline MixedRealityInputModule_t574B111D4EE14DF45FD03659EB6D4FA1FCDB5F61 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline MixedRealityInputModule_t574B111D4EE14DF45FD03659EB6D4FA1FCDB5F61 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(MixedRealityInputModule_t574B111D4EE14DF45FD03659EB6D4FA1FCDB5F61 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_4() { return static_cast<int32_t>(offsetof(U3Cget_ActiveMixedRealityPointersU3Ed__16_t5849695544400F58C2B6233E979A98A2ABFA366D, ___U3CU3E7__wrap1_4)); }
	inline Enumerator_tCC5D2E22B90EB083C4B938DEABCCEAB66363BE1D  get_U3CU3E7__wrap1_4() const { return ___U3CU3E7__wrap1_4; }
	inline Enumerator_tCC5D2E22B90EB083C4B938DEABCCEAB66363BE1D * get_address_of_U3CU3E7__wrap1_4() { return &___U3CU3E7__wrap1_4; }
	inline void set_U3CU3E7__wrap1_4(Enumerator_tCC5D2E22B90EB083C4B938DEABCCEAB66363BE1D  value)
	{
		___U3CU3E7__wrap1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_4))->___dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3E7__wrap1_4))->___current_3))->___value_1), (void*)NULL);
		#endif
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData
struct PointerData_t961238F7F343E720C726AACF3A25940C344E9595  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData::pointer
	RuntimeObject* ___pointer_0;
	// System.Nullable`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData::lastMousePoint3d
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___lastMousePoint3d_1;
	// UnityEngine.EventSystems.PointerEventData/FramePressState Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData::nextPressState
	int32_t ___nextPressState_2;
	// UnityEngine.EventSystems.PointerInputModule/MouseState Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData::mouseState
	MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 * ___mouseState_3;
	// UnityEngine.EventSystems.PointerEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData::eventDataLeft
	PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventDataLeft_4;
	// UnityEngine.EventSystems.PointerEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData::eventDataMiddle
	PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventDataMiddle_5;
	// UnityEngine.EventSystems.PointerEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData::eventDataRight
	PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventDataRight_6;

public:
	inline static int32_t get_offset_of_pointer_0() { return static_cast<int32_t>(offsetof(PointerData_t961238F7F343E720C726AACF3A25940C344E9595, ___pointer_0)); }
	inline RuntimeObject* get_pointer_0() const { return ___pointer_0; }
	inline RuntimeObject** get_address_of_pointer_0() { return &___pointer_0; }
	inline void set_pointer_0(RuntimeObject* value)
	{
		___pointer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointer_0), (void*)value);
	}

	inline static int32_t get_offset_of_lastMousePoint3d_1() { return static_cast<int32_t>(offsetof(PointerData_t961238F7F343E720C726AACF3A25940C344E9595, ___lastMousePoint3d_1)); }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  get_lastMousePoint3d_1() const { return ___lastMousePoint3d_1; }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * get_address_of_lastMousePoint3d_1() { return &___lastMousePoint3d_1; }
	inline void set_lastMousePoint3d_1(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  value)
	{
		___lastMousePoint3d_1 = value;
	}

	inline static int32_t get_offset_of_nextPressState_2() { return static_cast<int32_t>(offsetof(PointerData_t961238F7F343E720C726AACF3A25940C344E9595, ___nextPressState_2)); }
	inline int32_t get_nextPressState_2() const { return ___nextPressState_2; }
	inline int32_t* get_address_of_nextPressState_2() { return &___nextPressState_2; }
	inline void set_nextPressState_2(int32_t value)
	{
		___nextPressState_2 = value;
	}

	inline static int32_t get_offset_of_mouseState_3() { return static_cast<int32_t>(offsetof(PointerData_t961238F7F343E720C726AACF3A25940C344E9595, ___mouseState_3)); }
	inline MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 * get_mouseState_3() const { return ___mouseState_3; }
	inline MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 ** get_address_of_mouseState_3() { return &___mouseState_3; }
	inline void set_mouseState_3(MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 * value)
	{
		___mouseState_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mouseState_3), (void*)value);
	}

	inline static int32_t get_offset_of_eventDataLeft_4() { return static_cast<int32_t>(offsetof(PointerData_t961238F7F343E720C726AACF3A25940C344E9595, ___eventDataLeft_4)); }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * get_eventDataLeft_4() const { return ___eventDataLeft_4; }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 ** get_address_of_eventDataLeft_4() { return &___eventDataLeft_4; }
	inline void set_eventDataLeft_4(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * value)
	{
		___eventDataLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventDataLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_eventDataMiddle_5() { return static_cast<int32_t>(offsetof(PointerData_t961238F7F343E720C726AACF3A25940C344E9595, ___eventDataMiddle_5)); }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * get_eventDataMiddle_5() const { return ___eventDataMiddle_5; }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 ** get_address_of_eventDataMiddle_5() { return &___eventDataMiddle_5; }
	inline void set_eventDataMiddle_5(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * value)
	{
		___eventDataMiddle_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventDataMiddle_5), (void*)value);
	}

	inline static int32_t get_offset_of_eventDataRight_6() { return static_cast<int32_t>(offsetof(PointerData_t961238F7F343E720C726AACF3A25940C344E9595, ___eventDataRight_6)); }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * get_eventDataRight_6() const { return ___eventDataRight_6; }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 ** get_address_of_eventDataRight_6() { return &___eventDataRight_6; }
	inline void set_eventDataRight_6(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * value)
	{
		___eventDataRight_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventDataRight_6), (void*)value);
	}
};


// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.BaseInputEventData
struct BaseInputEventData_t02276CD97E92BD7C275FAE85C4B30C0055814224  : public BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E
{
public:
	// System.DateTime Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<EventTime>k__BackingField
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___U3CEventTimeU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<InputSource>k__BackingField
	RuntimeObject* ___U3CInputSourceU3Ek__BackingField_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<MixedRealityInputAction>k__BackingField
	MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58  ___U3CMixedRealityInputActionU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CEventTimeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseInputEventData_t02276CD97E92BD7C275FAE85C4B30C0055814224, ___U3CEventTimeU3Ek__BackingField_2)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_U3CEventTimeU3Ek__BackingField_2() const { return ___U3CEventTimeU3Ek__BackingField_2; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_U3CEventTimeU3Ek__BackingField_2() { return &___U3CEventTimeU3Ek__BackingField_2; }
	inline void set_U3CEventTimeU3Ek__BackingField_2(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___U3CEventTimeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CInputSourceU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseInputEventData_t02276CD97E92BD7C275FAE85C4B30C0055814224, ___U3CInputSourceU3Ek__BackingField_3)); }
	inline RuntimeObject* get_U3CInputSourceU3Ek__BackingField_3() const { return ___U3CInputSourceU3Ek__BackingField_3; }
	inline RuntimeObject** get_address_of_U3CInputSourceU3Ek__BackingField_3() { return &___U3CInputSourceU3Ek__BackingField_3; }
	inline void set_U3CInputSourceU3Ek__BackingField_3(RuntimeObject* value)
	{
		___U3CInputSourceU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInputSourceU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMixedRealityInputActionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BaseInputEventData_t02276CD97E92BD7C275FAE85C4B30C0055814224, ___U3CMixedRealityInputActionU3Ek__BackingField_4)); }
	inline MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58  get_U3CMixedRealityInputActionU3Ek__BackingField_4() const { return ___U3CMixedRealityInputActionU3Ek__BackingField_4; }
	inline MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58 * get_address_of_U3CMixedRealityInputActionU3Ek__BackingField_4() { return &___U3CMixedRealityInputActionU3Ek__BackingField_4; }
	inline void set_U3CMixedRealityInputActionU3Ek__BackingField_4(MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58  value)
	{
		___U3CMixedRealityInputActionU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CMixedRealityInputActionU3Ek__BackingField_4))->___description_2), (void*)NULL);
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.SpeechCommands
struct SpeechCommands_t6848CDB150ACFF172B4681EE5C4FB006CFFC9F1B 
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Input.SpeechCommands::localizationKey
	String_t* ___localizationKey_0;
	// System.String Microsoft.MixedReality.Toolkit.Input.SpeechCommands::localizedKeyword
	String_t* ___localizedKeyword_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.SpeechCommands::keyword
	String_t* ___keyword_2;
	// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.SpeechCommands::keyCode
	int32_t ___keyCode_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.SpeechCommands::action
	MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58  ___action_4;

public:
	inline static int32_t get_offset_of_localizationKey_0() { return static_cast<int32_t>(offsetof(SpeechCommands_t6848CDB150ACFF172B4681EE5C4FB006CFFC9F1B, ___localizationKey_0)); }
	inline String_t* get_localizationKey_0() const { return ___localizationKey_0; }
	inline String_t** get_address_of_localizationKey_0() { return &___localizationKey_0; }
	inline void set_localizationKey_0(String_t* value)
	{
		___localizationKey_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localizationKey_0), (void*)value);
	}

	inline static int32_t get_offset_of_localizedKeyword_1() { return static_cast<int32_t>(offsetof(SpeechCommands_t6848CDB150ACFF172B4681EE5C4FB006CFFC9F1B, ___localizedKeyword_1)); }
	inline String_t* get_localizedKeyword_1() const { return ___localizedKeyword_1; }
	inline String_t** get_address_of_localizedKeyword_1() { return &___localizedKeyword_1; }
	inline void set_localizedKeyword_1(String_t* value)
	{
		___localizedKeyword_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localizedKeyword_1), (void*)value);
	}

	inline static int32_t get_offset_of_keyword_2() { return static_cast<int32_t>(offsetof(SpeechCommands_t6848CDB150ACFF172B4681EE5C4FB006CFFC9F1B, ___keyword_2)); }
	inline String_t* get_keyword_2() const { return ___keyword_2; }
	inline String_t** get_address_of_keyword_2() { return &___keyword_2; }
	inline void set_keyword_2(String_t* value)
	{
		___keyword_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyword_2), (void*)value);
	}

	inline static int32_t get_offset_of_keyCode_3() { return static_cast<int32_t>(offsetof(SpeechCommands_t6848CDB150ACFF172B4681EE5C4FB006CFFC9F1B, ___keyCode_3)); }
	inline int32_t get_keyCode_3() const { return ___keyCode_3; }
	inline int32_t* get_address_of_keyCode_3() { return &___keyCode_3; }
	inline void set_keyCode_3(int32_t value)
	{
		___keyCode_3 = value;
	}

	inline static int32_t get_offset_of_action_4() { return static_cast<int32_t>(offsetof(SpeechCommands_t6848CDB150ACFF172B4681EE5C4FB006CFFC9F1B, ___action_4)); }
	inline MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58  get_action_4() const { return ___action_4; }
	inline MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58 * get_address_of_action_4() { return &___action_4; }
	inline void set_action_4(MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58  value)
	{
		___action_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___action_4))->___description_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.SpeechCommands
struct SpeechCommands_t6848CDB150ACFF172B4681EE5C4FB006CFFC9F1B_marshaled_pinvoke
{
	char* ___localizationKey_0;
	char* ___localizedKeyword_1;
	char* ___keyword_2;
	int32_t ___keyCode_3;
	MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58_marshaled_pinvoke ___action_4;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.SpeechCommands
struct SpeechCommands_t6848CDB150ACFF172B4681EE5C4FB006CFFC9F1B_marshaled_com
{
	Il2CppChar* ___localizationKey_0;
	Il2CppChar* ___localizedKeyword_1;
	Il2CppChar* ___keyword_2;
	int32_t ___keyCode_3;
	MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58_marshaled_com ___action_4;
};

// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer
struct InternalGazePointer_t5FD72E3EF2FD019DACE01F68467E178E1D617598  : public GenericPointer_t2D74A2BA9CBADA588374101900F39C9B4220A2C5
{
public:
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::gazeTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___gazeTransform_18;
	// Microsoft.MixedReality.Toolkit.Physics.BaseRayStabilizer Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::stabilizer
	BaseRayStabilizer_t58B050CF1A58AAA5697D78780C43520C1AA7B0F3 * ___stabilizer_19;
	// Microsoft.MixedReality.Toolkit.Input.GazeProvider Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::gazeProvider
	GazeProvider_t2BB12BA2FA0ECEE3BEA51CC14F92FE1A440009CE * ___gazeProvider_20;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::<Controller>k__BackingField
	RuntimeObject* ___U3CControllerU3Ek__BackingField_21;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::<InputSourceParent>k__BackingField
	RuntimeObject* ___U3CInputSourceParentU3Ek__BackingField_22;
	// System.Single Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::pointerExtent
	float ___pointerExtent_23;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::isDown
	bool ___isDown_24;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::currentInputSource
	RuntimeObject* ___currentInputSource_25;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::currentHandedness
	uint8_t ___currentHandedness_26;

public:
	inline static int32_t get_offset_of_gazeTransform_18() { return static_cast<int32_t>(offsetof(InternalGazePointer_t5FD72E3EF2FD019DACE01F68467E178E1D617598, ___gazeTransform_18)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_gazeTransform_18() const { return ___gazeTransform_18; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_gazeTransform_18() { return &___gazeTransform_18; }
	inline void set_gazeTransform_18(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___gazeTransform_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gazeTransform_18), (void*)value);
	}

	inline static int32_t get_offset_of_stabilizer_19() { return static_cast<int32_t>(offsetof(InternalGazePointer_t5FD72E3EF2FD019DACE01F68467E178E1D617598, ___stabilizer_19)); }
	inline BaseRayStabilizer_t58B050CF1A58AAA5697D78780C43520C1AA7B0F3 * get_stabilizer_19() const { return ___stabilizer_19; }
	inline BaseRayStabilizer_t58B050CF1A58AAA5697D78780C43520C1AA7B0F3 ** get_address_of_stabilizer_19() { return &___stabilizer_19; }
	inline void set_stabilizer_19(BaseRayStabilizer_t58B050CF1A58AAA5697D78780C43520C1AA7B0F3 * value)
	{
		___stabilizer_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stabilizer_19), (void*)value);
	}

	inline static int32_t get_offset_of_gazeProvider_20() { return static_cast<int32_t>(offsetof(InternalGazePointer_t5FD72E3EF2FD019DACE01F68467E178E1D617598, ___gazeProvider_20)); }
	inline GazeProvider_t2BB12BA2FA0ECEE3BEA51CC14F92FE1A440009CE * get_gazeProvider_20() const { return ___gazeProvider_20; }
	inline GazeProvider_t2BB12BA2FA0ECEE3BEA51CC14F92FE1A440009CE ** get_address_of_gazeProvider_20() { return &___gazeProvider_20; }
	inline void set_gazeProvider_20(GazeProvider_t2BB12BA2FA0ECEE3BEA51CC14F92FE1A440009CE * value)
	{
		___gazeProvider_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gazeProvider_20), (void*)value);
	}

	inline static int32_t get_offset_of_U3CControllerU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(InternalGazePointer_t5FD72E3EF2FD019DACE01F68467E178E1D617598, ___U3CControllerU3Ek__BackingField_21)); }
	inline RuntimeObject* get_U3CControllerU3Ek__BackingField_21() const { return ___U3CControllerU3Ek__BackingField_21; }
	inline RuntimeObject** get_address_of_U3CControllerU3Ek__BackingField_21() { return &___U3CControllerU3Ek__BackingField_21; }
	inline void set_U3CControllerU3Ek__BackingField_21(RuntimeObject* value)
	{
		___U3CControllerU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CControllerU3Ek__BackingField_21), (void*)value);
	}

	inline static int32_t get_offset_of_U3CInputSourceParentU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(InternalGazePointer_t5FD72E3EF2FD019DACE01F68467E178E1D617598, ___U3CInputSourceParentU3Ek__BackingField_22)); }
	inline RuntimeObject* get_U3CInputSourceParentU3Ek__BackingField_22() const { return ___U3CInputSourceParentU3Ek__BackingField_22; }
	inline RuntimeObject** get_address_of_U3CInputSourceParentU3Ek__BackingField_22() { return &___U3CInputSourceParentU3Ek__BackingField_22; }
	inline void set_U3CInputSourceParentU3Ek__BackingField_22(RuntimeObject* value)
	{
		___U3CInputSourceParentU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInputSourceParentU3Ek__BackingField_22), (void*)value);
	}

	inline static int32_t get_offset_of_pointerExtent_23() { return static_cast<int32_t>(offsetof(InternalGazePointer_t5FD72E3EF2FD019DACE01F68467E178E1D617598, ___pointerExtent_23)); }
	inline float get_pointerExtent_23() const { return ___pointerExtent_23; }
	inline float* get_address_of_pointerExtent_23() { return &___pointerExtent_23; }
	inline void set_pointerExtent_23(float value)
	{
		___pointerExtent_23 = value;
	}

	inline static int32_t get_offset_of_isDown_24() { return static_cast<int32_t>(offsetof(InternalGazePointer_t5FD72E3EF2FD019DACE01F68467E178E1D617598, ___isDown_24)); }
	inline bool get_isDown_24() const { return ___isDown_24; }
	inline bool* get_address_of_isDown_24() { return &___isDown_24; }
	inline void set_isDown_24(bool value)
	{
		___isDown_24 = value;
	}

	inline static int32_t get_offset_of_currentInputSource_25() { return static_cast<int32_t>(offsetof(InternalGazePointer_t5FD72E3EF2FD019DACE01F68467E178E1D617598, ___currentInputSource_25)); }
	inline RuntimeObject* get_currentInputSource_25() const { return ___currentInputSource_25; }
	inline RuntimeObject** get_address_of_currentInputSource_25() { return &___currentInputSource_25; }
	inline void set_currentInputSource_25(RuntimeObject* value)
	{
		___currentInputSource_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentInputSource_25), (void*)value);
	}

	inline static int32_t get_offset_of_currentHandedness_26() { return static_cast<int32_t>(offsetof(InternalGazePointer_t5FD72E3EF2FD019DACE01F68467E178E1D617598, ___currentHandedness_26)); }
	inline uint8_t get_currentHandedness_26() const { return ___currentHandedness_26; }
	inline uint8_t* get_address_of_currentHandedness_26() { return &___currentHandedness_26; }
	inline void set_currentHandedness_26(uint8_t value)
	{
		___currentHandedness_26 = value;
	}
};

struct InternalGazePointer_t5FD72E3EF2FD019DACE01F68467E178E1D617598_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::OnPreSceneQueryPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnPreSceneQueryPerfMarker_27;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::OnPostSceneQueryPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnPostSceneQueryPerfMarker_28;

public:
	inline static int32_t get_offset_of_OnPreSceneQueryPerfMarker_27() { return static_cast<int32_t>(offsetof(InternalGazePointer_t5FD72E3EF2FD019DACE01F68467E178E1D617598_StaticFields, ___OnPreSceneQueryPerfMarker_27)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnPreSceneQueryPerfMarker_27() const { return ___OnPreSceneQueryPerfMarker_27; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnPreSceneQueryPerfMarker_27() { return &___OnPreSceneQueryPerfMarker_27; }
	inline void set_OnPreSceneQueryPerfMarker_27(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnPreSceneQueryPerfMarker_27 = value;
	}

	inline static int32_t get_offset_of_OnPostSceneQueryPerfMarker_28() { return static_cast<int32_t>(offsetof(InternalGazePointer_t5FD72E3EF2FD019DACE01F68467E178E1D617598_StaticFields, ___OnPostSceneQueryPerfMarker_28)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnPostSceneQueryPerfMarker_28() const { return ___OnPostSceneQueryPerfMarker_28; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnPostSceneQueryPerfMarker_28() { return &___OnPostSceneQueryPerfMarker_28; }
	inline void set_OnPostSceneQueryPerfMarker_28(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnPostSceneQueryPerfMarker_28 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<EnsureInputSystemValid>d__4
struct U3CEnsureInputSystemValidU3Ed__4_tC0875EF4C80B5618E53ED236FC804960EABC8CD8 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<EnsureInputSystemValid>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<EnsureInputSystemValid>d__4::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// System.Object Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<EnsureInputSystemValid>d__4::<>u__1
	RuntimeObject * ___U3CU3Eu__1_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CEnsureInputSystemValidU3Ed__4_tC0875EF4C80B5618E53ED236FC804960EABC8CD8, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CEnsureInputSystemValidU3Ed__4_tC0875EF4C80B5618E53ED236FC804960EABC8CD8, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_2() { return static_cast<int32_t>(offsetof(U3CEnsureInputSystemValidU3Ed__4_tC0875EF4C80B5618E53ED236FC804960EABC8CD8, ___U3CU3Eu__1_2)); }
	inline RuntimeObject * get_U3CU3Eu__1_2() const { return ___U3CU3Eu__1_2; }
	inline RuntimeObject ** get_address_of_U3CU3Eu__1_2() { return &___U3CU3Eu__1_2; }
	inline void set_U3CU3Eu__1_2(RuntimeObject * value)
	{
		___U3CU3Eu__1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Eu__1_2), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<EnsureInputSystemValid>d__4
struct U3CEnsureInputSystemValidU3Ed__4_t5957B42D80E6383DCAA61D84E56ABB26A6A110DA 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<EnsureInputSystemValid>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<EnsureInputSystemValid>d__4::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// System.Object Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<EnsureInputSystemValid>d__4::<>u__1
	RuntimeObject * ___U3CU3Eu__1_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CEnsureInputSystemValidU3Ed__4_t5957B42D80E6383DCAA61D84E56ABB26A6A110DA, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CEnsureInputSystemValidU3Ed__4_t5957B42D80E6383DCAA61D84E56ABB26A6A110DA, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_2() { return static_cast<int32_t>(offsetof(U3CEnsureInputSystemValidU3Ed__4_t5957B42D80E6383DCAA61D84E56ABB26A6A110DA, ___U3CU3Eu__1_2)); }
	inline RuntimeObject * get_U3CU3Eu__1_2() const { return ___U3CU3Eu__1_2; }
	inline RuntimeObject ** get_address_of_U3CU3Eu__1_2() { return &___U3CU3Eu__1_2; }
	inline void set_U3CU3Eu__1_2(RuntimeObject * value)
	{
		___U3CU3Eu__1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Eu__1_2), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.DictationEventData
struct DictationEventData_t8CFAB3BF256A7952C07C0CD8C7D4489905A1AC82  : public BaseInputEventData_t02276CD97E92BD7C275FAE85C4B30C0055814224
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Input.DictationEventData::<DictationResult>k__BackingField
	String_t* ___U3CDictationResultU3Ek__BackingField_5;
	// UnityEngine.AudioClip Microsoft.MixedReality.Toolkit.Input.DictationEventData::<DictationAudioClip>k__BackingField
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___U3CDictationAudioClipU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CDictationResultU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(DictationEventData_t8CFAB3BF256A7952C07C0CD8C7D4489905A1AC82, ___U3CDictationResultU3Ek__BackingField_5)); }
	inline String_t* get_U3CDictationResultU3Ek__BackingField_5() const { return ___U3CDictationResultU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CDictationResultU3Ek__BackingField_5() { return &___U3CDictationResultU3Ek__BackingField_5; }
	inline void set_U3CDictationResultU3Ek__BackingField_5(String_t* value)
	{
		___U3CDictationResultU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDictationResultU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDictationAudioClipU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(DictationEventData_t8CFAB3BF256A7952C07C0CD8C7D4489905A1AC82, ___U3CDictationAudioClipU3Ek__BackingField_6)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_U3CDictationAudioClipU3Ek__BackingField_6() const { return ___U3CDictationAudioClipU3Ek__BackingField_6; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_U3CDictationAudioClipU3Ek__BackingField_6() { return &___U3CDictationAudioClipU3Ek__BackingField_6; }
	inline void set_U3CDictationAudioClipU3Ek__BackingField_6(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___U3CDictationAudioClipU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDictationAudioClipU3Ek__BackingField_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputEventData
struct InputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7  : public BaseInputEventData_t02276CD97E92BD7C275FAE85C4B30C0055814224
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.InputEventData::<Handedness>k__BackingField
	uint8_t ___U3CHandednessU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CHandednessU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(InputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7, ___U3CHandednessU3Ek__BackingField_5)); }
	inline uint8_t get_U3CHandednessU3Ek__BackingField_5() const { return ___U3CHandednessU3Ek__BackingField_5; }
	inline uint8_t* get_address_of_U3CHandednessU3Ek__BackingField_5() { return &___U3CHandednessU3Ek__BackingField_5; }
	inline void set_U3CHandednessU3Ek__BackingField_5(uint8_t value)
	{
		___U3CHandednessU3Ek__BackingField_5 = value;
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.SourceStateEventData
struct SourceStateEventData_t69DA69CF3D8292B514A438C9AA3F1C0DA4A1F70A  : public BaseInputEventData_t02276CD97E92BD7C275FAE85C4B30C0055814224
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController Microsoft.MixedReality.Toolkit.Input.SourceStateEventData::<Controller>k__BackingField
	RuntimeObject* ___U3CControllerU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CControllerU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(SourceStateEventData_t69DA69CF3D8292B514A438C9AA3F1C0DA4A1F70A, ___U3CControllerU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CControllerU3Ek__BackingField_5() const { return ___U3CControllerU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CControllerU3Ek__BackingField_5() { return &___U3CControllerU3Ek__BackingField_5; }
	inline void set_U3CControllerU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CControllerU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CControllerU3Ek__BackingField_5), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.SpeechEventData
struct SpeechEventData_tF39C472B089E67439FD259C5939D8C0F60F66548  : public BaseInputEventData_t02276CD97E92BD7C275FAE85C4B30C0055814224
{
public:
	// System.TimeSpan Microsoft.MixedReality.Toolkit.Input.SpeechEventData::<PhraseDuration>k__BackingField
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___U3CPhraseDurationU3Ek__BackingField_5;
	// System.DateTime Microsoft.MixedReality.Toolkit.Input.SpeechEventData::<PhraseStartTime>k__BackingField
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___U3CPhraseStartTimeU3Ek__BackingField_6;
	// Microsoft.MixedReality.Toolkit.Input.SpeechCommands Microsoft.MixedReality.Toolkit.Input.SpeechEventData::<Command>k__BackingField
	SpeechCommands_t6848CDB150ACFF172B4681EE5C4FB006CFFC9F1B  ___U3CCommandU3Ek__BackingField_7;
	// Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel Microsoft.MixedReality.Toolkit.Input.SpeechEventData::<Confidence>k__BackingField
	int32_t ___U3CConfidenceU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CPhraseDurationU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(SpeechEventData_tF39C472B089E67439FD259C5939D8C0F60F66548, ___U3CPhraseDurationU3Ek__BackingField_5)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_U3CPhraseDurationU3Ek__BackingField_5() const { return ___U3CPhraseDurationU3Ek__BackingField_5; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_U3CPhraseDurationU3Ek__BackingField_5() { return &___U3CPhraseDurationU3Ek__BackingField_5; }
	inline void set_U3CPhraseDurationU3Ek__BackingField_5(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___U3CPhraseDurationU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CPhraseStartTimeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SpeechEventData_tF39C472B089E67439FD259C5939D8C0F60F66548, ___U3CPhraseStartTimeU3Ek__BackingField_6)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_U3CPhraseStartTimeU3Ek__BackingField_6() const { return ___U3CPhraseStartTimeU3Ek__BackingField_6; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_U3CPhraseStartTimeU3Ek__BackingField_6() { return &___U3CPhraseStartTimeU3Ek__BackingField_6; }
	inline void set_U3CPhraseStartTimeU3Ek__BackingField_6(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___U3CPhraseStartTimeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CCommandU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(SpeechEventData_tF39C472B089E67439FD259C5939D8C0F60F66548, ___U3CCommandU3Ek__BackingField_7)); }
	inline SpeechCommands_t6848CDB150ACFF172B4681EE5C4FB006CFFC9F1B  get_U3CCommandU3Ek__BackingField_7() const { return ___U3CCommandU3Ek__BackingField_7; }
	inline SpeechCommands_t6848CDB150ACFF172B4681EE5C4FB006CFFC9F1B * get_address_of_U3CCommandU3Ek__BackingField_7() { return &___U3CCommandU3Ek__BackingField_7; }
	inline void set_U3CCommandU3Ek__BackingField_7(SpeechCommands_t6848CDB150ACFF172B4681EE5C4FB006CFFC9F1B  value)
	{
		___U3CCommandU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CCommandU3Ek__BackingField_7))->___localizationKey_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CCommandU3Ek__BackingField_7))->___localizedKeyword_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CCommandU3Ek__BackingField_7))->___keyword_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CCommandU3Ek__BackingField_7))->___action_4))->___description_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CConfidenceU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(SpeechEventData_tF39C472B089E67439FD259C5939D8C0F60F66548, ___U3CConfidenceU3Ek__BackingField_8)); }
	inline int32_t get_U3CConfidenceU3Ek__BackingField_8() const { return ___U3CConfidenceU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CConfidenceU3Ek__BackingField_8() { return &___U3CConfidenceU3Ek__BackingField_8; }
	inline void set_U3CConfidenceU3Ek__BackingField_8(int32_t value)
	{
		___U3CConfidenceU3Ek__BackingField_8 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Collections.Generic.IDictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>>
struct InputEventData_1_t03651600101A901771C241588D9401D9E466D779  : public InputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.InputEventData`1::<InputData>k__BackingField
	RuntimeObject* ___U3CInputDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CInputDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(InputEventData_1_t03651600101A901771C241588D9401D9E466D779, ___U3CInputDataU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CInputDataU3Ek__BackingField_6() const { return ___U3CInputDataU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CInputDataU3Ek__BackingField_6() { return &___U3CInputDataU3Ek__BackingField_6; }
	inline void set_U3CInputDataU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CInputDataU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInputDataU3Ek__BackingField_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Input.HandMeshInfo>
struct InputEventData_1_tB79F7140EE0E13A566F61C25F0CBC35E52135A75  : public InputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.InputEventData`1::<InputData>k__BackingField
	HandMeshInfo_t5F66D6B1E5ACF397857A6D91987346246E967909 * ___U3CInputDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CInputDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(InputEventData_1_tB79F7140EE0E13A566F61C25F0CBC35E52135A75, ___U3CInputDataU3Ek__BackingField_6)); }
	inline HandMeshInfo_t5F66D6B1E5ACF397857A6D91987346246E967909 * get_U3CInputDataU3Ek__BackingField_6() const { return ___U3CInputDataU3Ek__BackingField_6; }
	inline HandMeshInfo_t5F66D6B1E5ACF397857A6D91987346246E967909 ** get_address_of_U3CInputDataU3Ek__BackingField_6() { return &___U3CInputDataU3Ek__BackingField_6; }
	inline void set_U3CInputDataU3Ek__BackingField_6(HandMeshInfo_t5F66D6B1E5ACF397857A6D91987346246E967909 * value)
	{
		___U3CInputDataU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInputDataU3Ek__BackingField_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct InputEventData_1_tCC0938E22E808EE51312F8D480E225522F26CF28  : public InputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.InputEventData`1::<InputData>k__BackingField
	MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8  ___U3CInputDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CInputDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(InputEventData_1_tCC0938E22E808EE51312F8D480E225522F26CF28, ___U3CInputDataU3Ek__BackingField_6)); }
	inline MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8  get_U3CInputDataU3Ek__BackingField_6() const { return ___U3CInputDataU3Ek__BackingField_6; }
	inline MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8 * get_address_of_U3CInputDataU3Ek__BackingField_6() { return &___U3CInputDataU3Ek__BackingField_6; }
	inline void set_U3CInputDataU3Ek__BackingField_6(MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8  value)
	{
		___U3CInputDataU3Ek__BackingField_6 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Quaternion>
struct InputEventData_1_tBE137B5127162FEBFFDFE7F6ED8BEE73A3969646  : public InputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.InputEventData`1::<InputData>k__BackingField
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3CInputDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CInputDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(InputEventData_1_tBE137B5127162FEBFFDFE7F6ED8BEE73A3969646, ___U3CInputDataU3Ek__BackingField_6)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_U3CInputDataU3Ek__BackingField_6() const { return ___U3CInputDataU3Ek__BackingField_6; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_U3CInputDataU3Ek__BackingField_6() { return &___U3CInputDataU3Ek__BackingField_6; }
	inline void set_U3CInputDataU3Ek__BackingField_6(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___U3CInputDataU3Ek__BackingField_6 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Single>
struct InputEventData_1_t0537B6B07E4ABB5C85E144AF838FF76463759E3E  : public InputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.InputEventData`1::<InputData>k__BackingField
	float ___U3CInputDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CInputDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(InputEventData_1_t0537B6B07E4ABB5C85E144AF838FF76463759E3E, ___U3CInputDataU3Ek__BackingField_6)); }
	inline float get_U3CInputDataU3Ek__BackingField_6() const { return ___U3CInputDataU3Ek__BackingField_6; }
	inline float* get_address_of_U3CInputDataU3Ek__BackingField_6() { return &___U3CInputDataU3Ek__BackingField_6; }
	inline void set_U3CInputDataU3Ek__BackingField_6(float value)
	{
		___U3CInputDataU3Ek__BackingField_6 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector2>
struct InputEventData_1_t92F237401150131C650E068132364E4714AFE903  : public InputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.InputEventData`1::<InputData>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CInputDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CInputDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(InputEventData_1_t92F237401150131C650E068132364E4714AFE903, ___U3CInputDataU3Ek__BackingField_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CInputDataU3Ek__BackingField_6() const { return ___U3CInputDataU3Ek__BackingField_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CInputDataU3Ek__BackingField_6() { return &___U3CInputDataU3Ek__BackingField_6; }
	inline void set_U3CInputDataU3Ek__BackingField_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CInputDataU3Ek__BackingField_6 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector3>
struct InputEventData_1_t62E6DA80533CB6FF5006FD3E02EB52A3FADFB900  : public InputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.InputEventData`1::<InputData>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CInputDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CInputDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(InputEventData_1_t62E6DA80533CB6FF5006FD3E02EB52A3FADFB900, ___U3CInputDataU3Ek__BackingField_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CInputDataU3Ek__BackingField_6() const { return ___U3CInputDataU3Ek__BackingField_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CInputDataU3Ek__BackingField_6() { return &___U3CInputDataU3Ek__BackingField_6; }
	inline void set_U3CInputDataU3Ek__BackingField_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CInputDataU3Ek__BackingField_6 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct SourcePoseEventData_1_tA97A232897516DFA3A41013CD2865BE9068B04BD  : public SourceStateEventData_t69DA69CF3D8292B514A438C9AA3F1C0DA4A1F70A
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1::<SourceData>k__BackingField
	MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8  ___U3CSourceDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CSourceDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SourcePoseEventData_1_tA97A232897516DFA3A41013CD2865BE9068B04BD, ___U3CSourceDataU3Ek__BackingField_6)); }
	inline MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8  get_U3CSourceDataU3Ek__BackingField_6() const { return ___U3CSourceDataU3Ek__BackingField_6; }
	inline MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8 * get_address_of_U3CSourceDataU3Ek__BackingField_6() { return &___U3CSourceDataU3Ek__BackingField_6; }
	inline void set_U3CSourceDataU3Ek__BackingField_6(MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8  value)
	{
		___U3CSourceDataU3Ek__BackingField_6 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Quaternion>
struct SourcePoseEventData_1_tAC3DE05E45010F0569ABBE17F2C120F4E13518D2  : public SourceStateEventData_t69DA69CF3D8292B514A438C9AA3F1C0DA4A1F70A
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1::<SourceData>k__BackingField
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3CSourceDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CSourceDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SourcePoseEventData_1_tAC3DE05E45010F0569ABBE17F2C120F4E13518D2, ___U3CSourceDataU3Ek__BackingField_6)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_U3CSourceDataU3Ek__BackingField_6() const { return ___U3CSourceDataU3Ek__BackingField_6; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_U3CSourceDataU3Ek__BackingField_6() { return &___U3CSourceDataU3Ek__BackingField_6; }
	inline void set_U3CSourceDataU3Ek__BackingField_6(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___U3CSourceDataU3Ek__BackingField_6 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.TrackingState>
struct SourcePoseEventData_1_t279FAFBF5A63CBB50D189E71E915323C055FDA22  : public SourceStateEventData_t69DA69CF3D8292B514A438C9AA3F1C0DA4A1F70A
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1::<SourceData>k__BackingField
	int32_t ___U3CSourceDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CSourceDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SourcePoseEventData_1_t279FAFBF5A63CBB50D189E71E915323C055FDA22, ___U3CSourceDataU3Ek__BackingField_6)); }
	inline int32_t get_U3CSourceDataU3Ek__BackingField_6() const { return ___U3CSourceDataU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CSourceDataU3Ek__BackingField_6() { return &___U3CSourceDataU3Ek__BackingField_6; }
	inline void set_U3CSourceDataU3Ek__BackingField_6(int32_t value)
	{
		___U3CSourceDataU3Ek__BackingField_6 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector2>
struct SourcePoseEventData_1_t80C46DBD53C9C9645B0164A3091F71C84CE7D25D  : public SourceStateEventData_t69DA69CF3D8292B514A438C9AA3F1C0DA4A1F70A
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1::<SourceData>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CSourceDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CSourceDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SourcePoseEventData_1_t80C46DBD53C9C9645B0164A3091F71C84CE7D25D, ___U3CSourceDataU3Ek__BackingField_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CSourceDataU3Ek__BackingField_6() const { return ___U3CSourceDataU3Ek__BackingField_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CSourceDataU3Ek__BackingField_6() { return &___U3CSourceDataU3Ek__BackingField_6; }
	inline void set_U3CSourceDataU3Ek__BackingField_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CSourceDataU3Ek__BackingField_6 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector3>
struct SourcePoseEventData_1_t4CC18A361F416AEE6542A9B09E9D8FF174DF3CB0  : public SourceStateEventData_t69DA69CF3D8292B514A438C9AA3F1C0DA4A1F70A
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1::<SourceData>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CSourceDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CSourceDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SourcePoseEventData_1_t4CC18A361F416AEE6542A9B09E9D8FF174DF3CB0, ___U3CSourceDataU3Ek__BackingField_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CSourceDataU3Ek__BackingField_6() const { return ___U3CSourceDataU3Ek__BackingField_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CSourceDataU3Ek__BackingField_6() { return &___U3CSourceDataU3Ek__BackingField_6; }
	inline void set_U3CSourceDataU3Ek__BackingField_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CSourceDataU3Ek__BackingField_6 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener
struct InputSystemGlobalHandlerListener_t7626F4B8931C8C8AABDC1B0FBC54E86EF67584D5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener::lateInitialize
	bool ___lateInitialize_4;

public:
	inline static int32_t get_offset_of_lateInitialize_4() { return static_cast<int32_t>(offsetof(InputSystemGlobalHandlerListener_t7626F4B8931C8C8AABDC1B0FBC54E86EF67584D5, ___lateInitialize_4)); }
	inline bool get_lateInitialize_4() const { return ___lateInitialize_4; }
	inline bool* get_address_of_lateInitialize_4() { return &___lateInitialize_4; }
	inline void set_lateInitialize_4(bool value)
	{
		___lateInitialize_4 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener
struct InputSystemGlobalListener_t3C3B05F5289CFC04036EB6158B24859F969250BD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener::lateInitialize
	bool ___lateInitialize_4;

public:
	inline static int32_t get_offset_of_lateInitialize_4() { return static_cast<int32_t>(offsetof(InputSystemGlobalListener_t3C3B05F5289CFC04036EB6158B24859F969250BD, ___lateInitialize_4)); }
	inline bool get_lateInitialize_4() const { return ___lateInitialize_4; }
	inline bool* get_address_of_lateInitialize_4() { return &___lateInitialize_4; }
	inline void set_lateInitialize_4(bool value)
	{
		___lateInitialize_4 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData
struct MixedRealityPointerEventData_tAB2BBE5FC804ED0060813BEBC6D1866F3795E602  : public InputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData::<Pointer>k__BackingField
	RuntimeObject* ___U3CPointerU3Ek__BackingField_6;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData::<Count>k__BackingField
	int32_t ___U3CCountU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CPointerU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(MixedRealityPointerEventData_tAB2BBE5FC804ED0060813BEBC6D1866F3795E602, ___U3CPointerU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CPointerU3Ek__BackingField_6() const { return ___U3CPointerU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CPointerU3Ek__BackingField_6() { return &___U3CPointerU3Ek__BackingField_6; }
	inline void set_U3CPointerU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CPointerU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPointerU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCountU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(MixedRealityPointerEventData_tAB2BBE5FC804ED0060813BEBC6D1866F3795E602, ___U3CCountU3Ek__BackingField_7)); }
	inline int32_t get_U3CCountU3Ek__BackingField_7() const { return ___U3CCountU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CCountU3Ek__BackingField_7() { return &___U3CCountU3Ek__BackingField_7; }
	inline void set_U3CCountU3Ek__BackingField_7(int32_t value)
	{
		___U3CCountU3Ek__BackingField_7 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.BaseInputModule::m_RaycastResultCache
	List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * ___m_RaycastResultCache_4;
	// UnityEngine.EventSystems.AxisEventData UnityEngine.EventSystems.BaseInputModule::m_AxisEventData
	AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E * ___m_AxisEventData_5;
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::m_EventSystem
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___m_EventSystem_6;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::m_BaseEventData
	BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___m_BaseEventData_7;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_InputOverride
	BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * ___m_InputOverride_8;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_DefaultInput
	BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * ___m_DefaultInput_9;

public:
	inline static int32_t get_offset_of_m_RaycastResultCache_4() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_RaycastResultCache_4)); }
	inline List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * get_m_RaycastResultCache_4() const { return ___m_RaycastResultCache_4; }
	inline List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 ** get_address_of_m_RaycastResultCache_4() { return &___m_RaycastResultCache_4; }
	inline void set_m_RaycastResultCache_4(List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * value)
	{
		___m_RaycastResultCache_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RaycastResultCache_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_AxisEventData_5() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_AxisEventData_5)); }
	inline AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E * get_m_AxisEventData_5() const { return ___m_AxisEventData_5; }
	inline AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E ** get_address_of_m_AxisEventData_5() { return &___m_AxisEventData_5; }
	inline void set_m_AxisEventData_5(AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E * value)
	{
		___m_AxisEventData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AxisEventData_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_EventSystem_6() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_EventSystem_6)); }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * get_m_EventSystem_6() const { return ___m_EventSystem_6; }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C ** get_address_of_m_EventSystem_6() { return &___m_EventSystem_6; }
	inline void set_m_EventSystem_6(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * value)
	{
		___m_EventSystem_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_BaseEventData_7() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_BaseEventData_7)); }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * get_m_BaseEventData_7() const { return ___m_BaseEventData_7; }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E ** get_address_of_m_BaseEventData_7() { return &___m_BaseEventData_7; }
	inline void set_m_BaseEventData_7(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * value)
	{
		___m_BaseEventData_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BaseEventData_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputOverride_8() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_InputOverride_8)); }
	inline BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * get_m_InputOverride_8() const { return ___m_InputOverride_8; }
	inline BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D ** get_address_of_m_InputOverride_8() { return &___m_InputOverride_8; }
	inline void set_m_InputOverride_8(BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * value)
	{
		___m_InputOverride_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputOverride_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_DefaultInput_9() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_DefaultInput_9)); }
	inline BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * get_m_DefaultInput_9() const { return ___m_DefaultInput_9; }
	inline BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D ** get_address_of_m_DefaultInput_9() { return &___m_DefaultInput_9; }
	inline void set_m_DefaultInput_9(BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * value)
	{
		___m_DefaultInput_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefaultInput_9), (void*)value);
	}
};


// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___m_DummyData_13;

public:
	inline static int32_t get_offset_of_m_SystemInputModules_4() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_SystemInputModules_4)); }
	inline List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * get_m_SystemInputModules_4() const { return ___m_SystemInputModules_4; }
	inline List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 ** get_address_of_m_SystemInputModules_4() { return &___m_SystemInputModules_4; }
	inline void set_m_SystemInputModules_4(List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * value)
	{
		___m_SystemInputModules_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SystemInputModules_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentInputModule_5() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_CurrentInputModule_5)); }
	inline BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * get_m_CurrentInputModule_5() const { return ___m_CurrentInputModule_5; }
	inline BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 ** get_address_of_m_CurrentInputModule_5() { return &___m_CurrentInputModule_5; }
	inline void set_m_CurrentInputModule_5(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * value)
	{
		___m_CurrentInputModule_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentInputModule_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_FirstSelected_7() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_FirstSelected_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_FirstSelected_7() const { return ___m_FirstSelected_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_FirstSelected_7() { return &___m_FirstSelected_7; }
	inline void set_m_FirstSelected_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_FirstSelected_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FirstSelected_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_sendNavigationEvents_8() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_sendNavigationEvents_8)); }
	inline bool get_m_sendNavigationEvents_8() const { return ___m_sendNavigationEvents_8; }
	inline bool* get_address_of_m_sendNavigationEvents_8() { return &___m_sendNavigationEvents_8; }
	inline void set_m_sendNavigationEvents_8(bool value)
	{
		___m_sendNavigationEvents_8 = value;
	}

	inline static int32_t get_offset_of_m_DragThreshold_9() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_DragThreshold_9)); }
	inline int32_t get_m_DragThreshold_9() const { return ___m_DragThreshold_9; }
	inline int32_t* get_address_of_m_DragThreshold_9() { return &___m_DragThreshold_9; }
	inline void set_m_DragThreshold_9(int32_t value)
	{
		___m_DragThreshold_9 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelected_10() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_CurrentSelected_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_CurrentSelected_10() const { return ___m_CurrentSelected_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_CurrentSelected_10() { return &___m_CurrentSelected_10; }
	inline void set_m_CurrentSelected_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_CurrentSelected_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentSelected_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_HasFocus_11() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_HasFocus_11)); }
	inline bool get_m_HasFocus_11() const { return ___m_HasFocus_11; }
	inline bool* get_address_of_m_HasFocus_11() { return &___m_HasFocus_11; }
	inline void set_m_HasFocus_11(bool value)
	{
		___m_HasFocus_11 = value;
	}

	inline static int32_t get_offset_of_m_SelectionGuard_12() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_SelectionGuard_12)); }
	inline bool get_m_SelectionGuard_12() const { return ___m_SelectionGuard_12; }
	inline bool* get_address_of_m_SelectionGuard_12() { return &___m_SelectionGuard_12; }
	inline void set_m_SelectionGuard_12(bool value)
	{
		___m_SelectionGuard_12 = value;
	}

	inline static int32_t get_offset_of_m_DummyData_13() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_DummyData_13)); }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * get_m_DummyData_13() const { return ___m_DummyData_13; }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E ** get_address_of_m_DummyData_13() { return &___m_DummyData_13; }
	inline void set_m_DummyData_13(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * value)
	{
		___m_DummyData_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DummyData_13), (void*)value);
	}
};

struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * ___s_RaycastComparer_14;

public:
	inline static int32_t get_offset_of_m_EventSystems_6() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields, ___m_EventSystems_6)); }
	inline List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * get_m_EventSystems_6() const { return ___m_EventSystems_6; }
	inline List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 ** get_address_of_m_EventSystems_6() { return &___m_EventSystems_6; }
	inline void set_m_EventSystems_6(List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * value)
	{
		___m_EventSystems_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystems_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_RaycastComparer_14() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields, ___s_RaycastComparer_14)); }
	inline Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * get_s_RaycastComparer_14() const { return ___s_RaycastComparer_14; }
	inline Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 ** get_address_of_s_RaycastComparer_14() { return &___s_RaycastComparer_14; }
	inline void set_s_RaycastComparer_14(Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * value)
	{
		___s_RaycastComparer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RaycastComparer_14), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.GazeProvider
struct GazeProvider_t2BB12BA2FA0ECEE3BEA51CC14F92FE1A440009CE  : public InputSystemGlobalHandlerListener_t7626F4B8931C8C8AABDC1B0FBC54E86EF67584D5
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.GazeProvider::lockCursorWhenFocusLocked
	bool ___lockCursorWhenFocusLocked_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.GazeProvider::setCursorInvisibleWhenFocusLocked
	bool ___setCursorInvisibleWhenFocusLocked_8;
	// System.Single Microsoft.MixedReality.Toolkit.Input.GazeProvider::maxGazeCollisionDistance
	float ___maxGazeCollisionDistance_9;
	// UnityEngine.LayerMask[] Microsoft.MixedReality.Toolkit.Input.GazeProvider::raycastLayerMasks
	LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* ___raycastLayerMasks_10;
	// Microsoft.MixedReality.Toolkit.Physics.GazeStabilizer Microsoft.MixedReality.Toolkit.Input.GazeProvider::stabilizer
	GazeStabilizer_tC802B37FA69C0A74D0CC5213F5CA533BF5160CB6 * ___stabilizer_11;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Input.GazeProvider::gazeTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___gazeTransform_12;
	// System.Single Microsoft.MixedReality.Toolkit.Input.GazeProvider::minHeadVelocityThreshold
	float ___minHeadVelocityThreshold_13;
	// System.Single Microsoft.MixedReality.Toolkit.Input.GazeProvider::maxHeadVelocityThreshold
	float ___maxHeadVelocityThreshold_14;
	// Microsoft.MixedReality.Toolkit.Input.BaseGenericInputSource Microsoft.MixedReality.Toolkit.Input.GazeProvider::gazeInputSource
	BaseGenericInputSource_t2C53C81AABEABD940B6C53D893C0AB19301845A9 * ___gazeInputSource_15;
	// Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer Microsoft.MixedReality.Toolkit.Input.GazeProvider::gazePointer
	InternalGazePointer_t5FD72E3EF2FD019DACE01F68467E178E1D617598 * ___gazePointer_16;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.GazeProvider::<GazeCursorPrefab>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CGazeCursorPrefabU3Ek__BackingField_17;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.GazeProvider::<GazeTarget>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CGazeTargetU3Ek__BackingField_18;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit Microsoft.MixedReality.Toolkit.Input.GazeProvider::<HitInfo>k__BackingField
	MixedRealityRaycastHit_t29E02292EFEC344EEF179FC59666C655A8213D1A  ___U3CHitInfoU3Ek__BackingField_19;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.GazeProvider::<HitPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CHitPositionU3Ek__BackingField_20;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.GazeProvider::<HitNormal>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CHitNormalU3Ek__BackingField_21;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.GazeProvider::<HeadVelocity>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CHeadVelocityU3Ek__BackingField_22;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.GazeProvider::<HeadMovementDirection>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CHeadMovementDirectionU3Ek__BackingField_23;
	// System.Single Microsoft.MixedReality.Toolkit.Input.GazeProvider::lastHitDistance
	float ___lastHitDistance_24;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.GazeProvider::delayInitialization
	bool ___delayInitialization_25;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.GazeProvider::lastHeadPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lastHeadPosition_26;
	// System.Nullable`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.Input.GazeProvider::overrideHeadPosition
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___overrideHeadPosition_27;
	// System.Nullable`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.Input.GazeProvider::overrideHeadForward
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___overrideHeadForward_28;
	// System.DateTime Microsoft.MixedReality.Toolkit.Input.GazeProvider::latestEyeTrackingUpdate
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___latestEyeTrackingUpdate_33;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.Input.GazeProvider::<IsEyeCalibrationValid>k__BackingField
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___U3CIsEyeCalibrationValidU3Ek__BackingField_35;
	// UnityEngine.Ray Microsoft.MixedReality.Toolkit.Input.GazeProvider::<LatestEyeGaze>k__BackingField
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___U3CLatestEyeGazeU3Ek__BackingField_36;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.GazeProvider::<IsEyeTrackingEnabled>k__BackingField
	bool ___U3CIsEyeTrackingEnabledU3Ek__BackingField_37;
	// System.DateTime Microsoft.MixedReality.Toolkit.Input.GazeProvider::<Timestamp>k__BackingField
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___U3CTimestampU3Ek__BackingField_38;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.GazeProvider::<UseHeadGazeOverride>k__BackingField
	bool ___U3CUseHeadGazeOverrideU3Ek__BackingField_39;

public:
	inline static int32_t get_offset_of_lockCursorWhenFocusLocked_7() { return static_cast<int32_t>(offsetof(GazeProvider_t2BB12BA2FA0ECEE3BEA51CC14F92FE1A440009CE, ___lockCursorWhenFocusLocked_7)); }
	inline bool get_lockCursorWhenFocusLocked_7() const { return ___lockCursorWhenFocusLocked_7; }
	inline bool* get_address_of_lockCursorWhenFocusLocked_7() { return &___lockCursorWhenFocusLocked_7; }
	inline void set_lockCursorWhenFocusLocked_7(bool value)
	{
		___lockCursorWhenFocusLocked_7 = value;
	}

	inline static int32_t get_offset_of_setCursorInvisibleWhenFocusLocked_8() { return static_cast<int32_t>(offsetof(GazeProvider_t2BB12BA2FA0ECEE3BEA51CC14F92FE1A440009CE, ___setCursorInvisibleWhenFocusLocked_8)); }
	inline bool get_setCursorInvisibleWhenFocusLocked_8() const { return ___setCursorInvisibleWhenFocusLocked_8; }
	inline bool* get_address_of_setCursorInvisibleWhenFocusLocked_8() { return &___setCursorInvisibleWhenFocusLocked_8; }
	inline void set_setCursorInvisibleWhenFocusLocked_8(bool value)
	{
		___setCursorInvisibleWhenFocusLocked_8 = value;
	}

	inline static int32_t get_offset_of_maxGazeCollisionDistance_9() { return static_cast<int32_t>(offsetof(GazeProvider_t2BB12BA2FA0ECEE3BEA51CC14F92FE1A440009CE, ___maxGazeCollisionDistance_9)); }
	inline float get_maxGazeCollisionDistance_9() const { return ___maxGazeCollisionDistance_9; }
	inline float* get_address_of_maxGazeCollisionDistance_9() { return &___maxGazeCollisionDistance_9; }
	inline void set_maxGazeCollisionDistance_9(float value)
	{
		___maxGazeCollisionDistance_9 = value;
	}

	inline static int32_t get_offset_of_raycastLayerMasks_10() { return static_cast<int32_t>(offsetof(GazeProvider_t2BB12BA2FA0ECEE3BEA51CC14F92FE1A440009CE, ___raycastLayerMasks_10)); }
	inline LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* get_raycastLayerMasks_10() const { return ___raycastLayerMasks_10; }
	inline LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F** get_address_of_raycastLayerMasks_10() { return &___raycastLayerMasks_10; }
	inline void set_raycastLayerMasks_10(LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* value)
	{
		___raycastLayerMasks_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___raycastLayerMasks_10), (void*)value);
	}

	inline static int32_t get_offset_of_stabilizer_11() { return static_cast<int32_t>(offsetof(GazeProvider_t2BB12BA2FA0ECEE3BEA51CC14F92FE1A440009CE, ___stabilizer_11)); }
	inline GazeStabilizer_tC802B37FA69C0A74D0CC5213F5CA533BF5160CB6 * get_stabilizer_11() const { return ___stabilizer_11; }
	inline GazeStabilizer_tC802B37FA69C0A74D0CC5213F5CA533BF5160CB6 ** get_address_of_stabilizer_11() { return &___stabilizer_11; }
	inline void set_stabilizer_11(GazeStabilizer_tC802B37FA69C0A74D0CC5213F5CA533BF5160CB6 * value)
	{
		___stabilizer_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stabilizer_11), (void*)value);
	}

	inline static int32_t get_offset_of_gazeTransform_12() { return static_cast<int32_t>(offsetof(GazeProvider_t2BB12BA2FA0ECEE3BEA51CC14F92FE1A440009CE, ___gazeTransform_12)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_gazeTransform_12() const { return ___gazeTransform_12; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_gazeTransform_12() { return &___gazeTransform_12; }
	inline void set_gazeTransform_12(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___gazeTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gazeTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_minHeadVelocityThreshold_13() { return static_cast<int32_t>(offsetof(GazeProvider_t2BB12BA2FA0ECEE3BEA51CC14F92FE1A440009CE, ___minHeadVelocityThreshold_13)); }
	inline float get_minHeadVelocityThreshold_13() const { return ___minHeadVelocityThreshold_13; }
	inline float* get_address_of_minHeadVelocityThreshold_13() { return &___minHeadVelocityThreshold_13; }
	inline void set_minHeadVelocityThreshold_13(float value)
	{
		___minHeadVelocityThreshold_13 = value;
	}

	inline static int32_t get_offset_of_maxHeadVelocityThreshold_14() { return static_cast<int32_t>(offsetof(GazeProvider_t2BB12BA2FA0ECEE3BEA51CC14F92FE1A440009CE, ___maxHeadVelocityThreshold_14)); }
	inline float get_maxHeadVelocityThreshold_14() const { return ___maxHeadVelocityThreshold_14; }
	inline float* get_address_of_maxHeadVelocityThreshold_14() { return &___maxHeadVelocityThreshold_14; }
	inline void set_maxHeadVelocityThreshold_14(float value)
	{
		___maxHeadVelocityThreshold_14 = value;
	}

	inline static int32_t get_offset_of_gazeInputSource_15() { return static_cast<int32_t>(offsetof(GazeProvider_t2BB12BA2FA0ECEE3BEA51CC14F92FE1A440009CE, ___gazeInputSource_15)); }
	inline BaseGenericInputSource_t2C53C81AABEABD940B6C53D893C0AB19301845A9 * get_gazeInputSource_15() const { return ___gazeInputSource_15; }
	inline BaseGenericInputSource_t2C53C81AABEABD940B6C53D893C0AB19301845A9 ** get_address_of_gazeInputSource_15() { return &___gazeInputSource_15; }
	inline void set_gazeInputSource_15(BaseGenericInputSource_t2C53C81AABEABD940B6C53D893C0AB19301845A9 * value)
	{
		___gazeInputSource_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gazeInputSource_15), (void*)value);
	}

	inline static int32_t get_offset_of_gazePointer_16() { return static_cast<int32_t>(offsetof(GazeProvider_t2BB12BA2FA0ECEE3BEA51CC14F92FE1A440009CE, ___gazePointer_16)); }
	inline InternalGazePointer_t5FD72E3EF2FD019DACE01F68467E178E1D617598 * get_gazePointer_16() const { return ___gazePointer_16; }
	inline InternalGazePointer_t5FD72E3EF2FD019DACE01F68467E178E1D617598 ** get_address_of_gazePointer_16() { return &___gazePointer_16; }
	inline void set_gazePointer_16(InternalGazePointer_t5FD72E3EF2FD019DACE01F68467E178E1D617598 * value)
	{
		___gazePointer_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gazePointer_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGazeCursorPrefabU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(GazeProvider_t2BB12BA2FA0ECEE3BEA51CC14F92FE1A440009CE, ___U3CGazeCursorPrefabU3Ek__BackingField_17)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CGazeCursorPrefabU3Ek__BackingField_17() const { return ___U3CGazeCursorPrefabU3Ek__BackingField_17; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CGazeCursorPrefabU3Ek__BackingField_17() { return &___U3CGazeCursorPrefabU3Ek__BackingField_17; }
	inline void set_U3CGazeCursorPrefabU3Ek__BackingField_17(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CGazeCursorPrefabU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGazeCursorPrefabU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGazeTargetU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(GazeProvider_t2BB12BA2FA0ECEE3BEA51CC14F92FE1A440009CE, ___U3CGazeTargetU3Ek__BackingField_18)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CGazeTargetU3Ek__BackingField_18() const { return ___U3CGazeTargetU3Ek__BackingField_18; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CGazeTargetU3Ek__BackingField_18() { return &___U3CGazeTargetU3Ek__BackingField_18; }
	inline void set_U3CGazeTargetU3Ek__BackingField_18(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CGazeTargetU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGazeTargetU3Ek__BackingField_18), (void*)value);
	}

	inline static int32_t get_offset_of_U3CHitInfoU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(GazeProvider_t2BB12BA2FA0ECEE3BEA51CC14F92FE1A440009CE, ___U3CHitInfoU3Ek__BackingField_19)); }
	inline MixedRealityRaycastHit_t29E02292EFEC344EEF179FC59666C655A8213D1A  get_U3CHitInfoU3Ek__BackingField_19() const { return ___U3CHitInfoU3Ek__BackingField_19; }
	inline MixedRealityRaycastHit_t29E02292EFEC344EEF179FC59666C655A8213D1A * get_address_of_U3CHitInfoU3Ek__BackingField_19() { return &___U3CHitInfoU3Ek__BackingField_19; }
	inline void set_U3CHitInfoU3Ek__BackingField_19(MixedRealityRaycastHit_t29E02292EFEC344EEF179FC59666C655A8213D1A  value)
	{
		___U3CHitInfoU3Ek__BackingField_19 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CHitInfoU3Ek__BackingField_19))->___transform_7), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CHitInfoU3Ek__BackingField_19))->___collider_10), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CHitPositionU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(GazeProvider_t2BB12BA2FA0ECEE3BEA51CC14F92FE1A440009CE, ___U3CHitPositionU3Ek__BackingField_20)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CHitPositionU3Ek__BackingField_20() const { return ___U3CHitPositionU3Ek__BackingField_20; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CHitPositionU3Ek__BackingField_20() { return &___U3CHitPositionU3Ek__BackingField_20; }
	inline void set_U3CHitPositionU3Ek__BackingField_20(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CHitPositionU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CHitNormalU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(GazeProvider_t2BB12BA2FA0ECEE3BEA51CC14F92FE1A440009CE, ___U3CHitNormalU3Ek__BackingField_21)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CHitNormalU3Ek__BackingField_21() const { return ___U3CHitNormalU3Ek__BackingField_21; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CHitNormalU3Ek__BackingField_21() { return &___U3CHitNormalU3Ek__BackingField_21; }
	inline void set_U3CHitNormalU3Ek__BackingField_21(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CHitNormalU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CHeadVelocityU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(GazeProvider_t2BB12BA2FA0ECEE3BEA51CC14F92FE1A440009CE, ___U3CHeadVelocityU3Ek__BackingField_22)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CHeadVelocityU3Ek__BackingField_22() const { return ___U3CHeadVelocityU3Ek__BackingField_22; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CHeadVelocityU3Ek__BackingField_22() { return &___U3CHeadVelocityU3Ek__BackingField_22; }
	inline void set_U3CHeadVelocityU3Ek__BackingField_22(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CHeadVelocityU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CHeadMovementDirectionU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(GazeProvider_t2BB12BA2FA0ECEE3BEA51CC14F92FE1A440009CE, ___U3CHeadMovementDirectionU3Ek__BackingField_23)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CHeadMovementDirectionU3Ek__BackingField_23() const { return ___U3CHeadMovementDirectionU3Ek__BackingField_23; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CHeadMovementDirectionU3Ek__BackingField_23() { return &___U3CHeadMovementDirectionU3Ek__BackingField_23; }
	inline void set_U3CHeadMovementDirectionU3Ek__BackingField_23(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CHeadMovementDirectionU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_lastHitDistance_24() { return static_cast<int32_t>(offsetof(GazeProvider_t2BB12BA2FA0ECEE3BEA51CC14F92FE1A440009CE, ___lastHitDistance_24)); }
	inline float get_lastHitDistance_24() const { return ___lastHitDistance_24; }
	inline float* get_address_of_lastHitDistance_24() { return &___lastHitDistance_24; }
	inline void set_lastHitDistance_24(float value)
	{
		___lastHitDistance_24 = value;
	}

	inline static int32_t get_offset_of_delayInitialization_25() { return static_cast<int32_t>(offsetof(GazeProvider_t2BB12BA2FA0ECEE3BEA51CC14F92FE1A440009CE, ___delayInitialization_25)); }
	inline bool get_delayInitialization_25() const { return ___delayInitialization_25; }
	inline bool* get_address_of_delayInitialization_25() { return &___delayInitialization_25; }
	inline void set_delayInitialization_25(bool value)
	{
		___delayInitialization_25 = value;
	}

	inline static int32_t get_offset_of_lastHeadPosition_26() { return static_cast<int32_t>(offsetof(GazeProvider_t2BB12BA2FA0ECEE3BEA51CC14F92FE1A440009CE, ___lastHeadPosition_26)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_lastHeadPosition_26() const { return ___lastHeadPosition_26; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_lastHeadPosition_26() { return &___lastHeadPosition_26; }
	inline void set_lastHeadPosition_26(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___lastHeadPosition_26 = value;
	}

	inline static int32_t get_offset_of_overrideHeadPosition_27() { return static_cast<int32_t>(offsetof(GazeProvider_t2BB12BA2FA0ECEE3BEA51CC14F92FE1A440009CE, ___overrideHeadPosition_27)); }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  get_overrideHeadPosition_27() const { return ___overrideHeadPosition_27; }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * get_address_of_overrideHeadPosition_27() { return &___overrideHeadPosition_27; }
	inline void set_overrideHeadPosition_27(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  value)
	{
		___overrideHeadPosition_27 = value;
	}

	inline static int32_t get_offset_of_overrideHeadForward_28() { return static_cast<int32_t>(offsetof(GazeProvider_t2BB12BA2FA0ECEE3BEA51CC14F92FE1A440009CE, ___overrideHeadForward_28)); }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  get_overrideHeadForward_28() const { return ___overrideHeadForward_28; }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * get_address_of_overrideHeadForward_28() { return &___overrideHeadForward_28; }
	inline void set_overrideHeadForward_28(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  value)
	{
		___overrideHeadForward_28 = value;
	}

	inline static int32_t get_offset_of_latestEyeTrackingUpdate_33() { return static_cast<int32_t>(offsetof(GazeProvider_t2BB12BA2FA0ECEE3BEA51CC14F92FE1A440009CE, ___latestEyeTrackingUpdate_33)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_latestEyeTrackingUpdate_33() const { return ___latestEyeTrackingUpdate_33; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_latestEyeTrackingUpdate_33() { return &___latestEyeTrackingUpdate_33; }
	inline void set_latestEyeTrackingUpdate_33(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___latestEyeTrackingUpdate_33 = value;
	}

	inline static int32_t get_offset_of_U3CIsEyeCalibrationValidU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(GazeProvider_t2BB12BA2FA0ECEE3BEA51CC14F92FE1A440009CE, ___U3CIsEyeCalibrationValidU3Ek__BackingField_35)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_U3CIsEyeCalibrationValidU3Ek__BackingField_35() const { return ___U3CIsEyeCalibrationValidU3Ek__BackingField_35; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_U3CIsEyeCalibrationValidU3Ek__BackingField_35() { return &___U3CIsEyeCalibrationValidU3Ek__BackingField_35; }
	inline void set_U3CIsEyeCalibrationValidU3Ek__BackingField_35(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___U3CIsEyeCalibrationValidU3Ek__BackingField_35 = value;
	}

	inline static int32_t get_offset_of_U3CLatestEyeGazeU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(GazeProvider_t2BB12BA2FA0ECEE3BEA51CC14F92FE1A440009CE, ___U3CLatestEyeGazeU3Ek__BackingField_36)); }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  get_U3CLatestEyeGazeU3Ek__BackingField_36() const { return ___U3CLatestEyeGazeU3Ek__BackingField_36; }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * get_address_of_U3CLatestEyeGazeU3Ek__BackingField_36() { return &___U3CLatestEyeGazeU3Ek__BackingField_36; }
	inline void set_U3CLatestEyeGazeU3Ek__BackingField_36(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  value)
	{
		___U3CLatestEyeGazeU3Ek__BackingField_36 = value;
	}

	inline static int32_t get_offset_of_U3CIsEyeTrackingEnabledU3Ek__BackingField_37() { return static_cast<int32_t>(offsetof(GazeProvider_t2BB12BA2FA0ECEE3BEA51CC14F92FE1A440009CE, ___U3CIsEyeTrackingEnabledU3Ek__BackingField_37)); }
	inline bool get_U3CIsEyeTrackingEnabledU3Ek__BackingField_37() const { return ___U3CIsEyeTrackingEnabledU3Ek__BackingField_37; }
	inline bool* get_address_of_U3CIsEyeTrackingEnabledU3Ek__BackingField_37() { return &___U3CIsEyeTrackingEnabledU3Ek__BackingField_37; }
	inline void set_U3CIsEyeTrackingEnabledU3Ek__BackingField_37(bool value)
	{
		___U3CIsEyeTrackingEnabledU3Ek__BackingField_37 = value;
	}

	inline static int32_t get_offset_of_U3CTimestampU3Ek__BackingField_38() { return static_cast<int32_t>(offsetof(GazeProvider_t2BB12BA2FA0ECEE3BEA51CC14F92FE1A440009CE, ___U3CTimestampU3Ek__BackingField_38)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_U3CTimestampU3Ek__BackingField_38() const { return ___U3CTimestampU3Ek__BackingField_38; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_U3CTimestampU3Ek__BackingField_38() { return &___U3CTimestampU3Ek__BackingField_38; }
	inline void set_U3CTimestampU3Ek__BackingField_38(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___U3CTimestampU3Ek__BackingField_38 = value;
	}

	inline static int32_t get_offset_of_U3CUseHeadGazeOverrideU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(GazeProvider_t2BB12BA2FA0ECEE3BEA51CC14F92FE1A440009CE, ___U3CUseHeadGazeOverrideU3Ek__BackingField_39)); }
	inline bool get_U3CUseHeadGazeOverrideU3Ek__BackingField_39() const { return ___U3CUseHeadGazeOverrideU3Ek__BackingField_39; }
	inline bool* get_address_of_U3CUseHeadGazeOverrideU3Ek__BackingField_39() { return &___U3CUseHeadGazeOverrideU3Ek__BackingField_39; }
	inline void set_U3CUseHeadGazeOverrideU3Ek__BackingField_39(bool value)
	{
		___U3CUseHeadGazeOverrideU3Ek__BackingField_39 = value;
	}
};

struct GazeProvider_t2BB12BA2FA0ECEE3BEA51CC14F92FE1A440009CE_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.GazeProvider::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_29;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.GazeProvider::LateUpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___LateUpdatePerfMarker_30;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.GazeProvider::InitializeGazePointerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___InitializeGazePointerPerfMarker_31;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.GazeProvider::RaiseSourceDetectedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseSourceDetectedPerfMarker_32;
	// System.Single Microsoft.MixedReality.Toolkit.Input.GazeProvider::maxEyeTrackingTimeoutInSeconds
	float ___maxEyeTrackingTimeoutInSeconds_34;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_29() { return static_cast<int32_t>(offsetof(GazeProvider_t2BB12BA2FA0ECEE3BEA51CC14F92FE1A440009CE_StaticFields, ___UpdatePerfMarker_29)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_29() const { return ___UpdatePerfMarker_29; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_29() { return &___UpdatePerfMarker_29; }
	inline void set_UpdatePerfMarker_29(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_29 = value;
	}

	inline static int32_t get_offset_of_LateUpdatePerfMarker_30() { return static_cast<int32_t>(offsetof(GazeProvider_t2BB12BA2FA0ECEE3BEA51CC14F92FE1A440009CE_StaticFields, ___LateUpdatePerfMarker_30)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_LateUpdatePerfMarker_30() const { return ___LateUpdatePerfMarker_30; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_LateUpdatePerfMarker_30() { return &___LateUpdatePerfMarker_30; }
	inline void set_LateUpdatePerfMarker_30(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___LateUpdatePerfMarker_30 = value;
	}

	inline static int32_t get_offset_of_InitializeGazePointerPerfMarker_31() { return static_cast<int32_t>(offsetof(GazeProvider_t2BB12BA2FA0ECEE3BEA51CC14F92FE1A440009CE_StaticFields, ___InitializeGazePointerPerfMarker_31)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_InitializeGazePointerPerfMarker_31() const { return ___InitializeGazePointerPerfMarker_31; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_InitializeGazePointerPerfMarker_31() { return &___InitializeGazePointerPerfMarker_31; }
	inline void set_InitializeGazePointerPerfMarker_31(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___InitializeGazePointerPerfMarker_31 = value;
	}

	inline static int32_t get_offset_of_RaiseSourceDetectedPerfMarker_32() { return static_cast<int32_t>(offsetof(GazeProvider_t2BB12BA2FA0ECEE3BEA51CC14F92FE1A440009CE_StaticFields, ___RaiseSourceDetectedPerfMarker_32)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseSourceDetectedPerfMarker_32() const { return ___RaiseSourceDetectedPerfMarker_32; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseSourceDetectedPerfMarker_32() { return &___RaiseSourceDetectedPerfMarker_32; }
	inline void set_RaiseSourceDetectedPerfMarker_32(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseSourceDetectedPerfMarker_32 = value;
	}

	inline static int32_t get_offset_of_maxEyeTrackingTimeoutInSeconds_34() { return static_cast<int32_t>(offsetof(GazeProvider_t2BB12BA2FA0ECEE3BEA51CC14F92FE1A440009CE_StaticFields, ___maxEyeTrackingTimeoutInSeconds_34)); }
	inline float get_maxEyeTrackingTimeoutInSeconds_34() const { return ___maxEyeTrackingTimeoutInSeconds_34; }
	inline float* get_address_of_maxEyeTrackingTimeoutInSeconds_34() { return &___maxEyeTrackingTimeoutInSeconds_34; }
	inline void set_maxEyeTrackingTimeoutInSeconds_34(float value)
	{
		___maxEyeTrackingTimeoutInSeconds_34 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData
struct HandTrackingInputEventData_t2CAF86D0E0AD87D5996CDB42C70A69861FFB5BF8  : public InputEventData_1_t62E6DA80533CB6FF5006FD3E02EB52A3FADFB900
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData::<Controller>k__BackingField
	RuntimeObject* ___U3CControllerU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CControllerU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(HandTrackingInputEventData_t2CAF86D0E0AD87D5996CDB42C70A69861FFB5BF8, ___U3CControllerU3Ek__BackingField_7)); }
	inline RuntimeObject* get_U3CControllerU3Ek__BackingField_7() const { return ___U3CControllerU3Ek__BackingField_7; }
	inline RuntimeObject** get_address_of_U3CControllerU3Ek__BackingField_7() { return &___U3CControllerU3Ek__BackingField_7; }
	inline void set_U3CControllerU3Ek__BackingField_7(RuntimeObject* value)
	{
		___U3CControllerU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CControllerU3Ek__BackingField_7), (void*)value);
	}
};


// UnityEngine.EventSystems.PointerInputModule
struct PointerInputModule_tD7460503C6A4E1060914FFD213535AEF6AE2F421  : public BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData> UnityEngine.EventSystems.PointerInputModule::m_PointerData
	Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8 * ___m_PointerData_14;
	// UnityEngine.EventSystems.PointerInputModule/MouseState UnityEngine.EventSystems.PointerInputModule::m_MouseState
	MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 * ___m_MouseState_15;

public:
	inline static int32_t get_offset_of_m_PointerData_14() { return static_cast<int32_t>(offsetof(PointerInputModule_tD7460503C6A4E1060914FFD213535AEF6AE2F421, ___m_PointerData_14)); }
	inline Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8 * get_m_PointerData_14() const { return ___m_PointerData_14; }
	inline Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8 ** get_address_of_m_PointerData_14() { return &___m_PointerData_14; }
	inline void set_m_PointerData_14(Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8 * value)
	{
		___m_PointerData_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerData_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_MouseState_15() { return static_cast<int32_t>(offsetof(PointerInputModule_tD7460503C6A4E1060914FFD213535AEF6AE2F421, ___m_MouseState_15)); }
	inline MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 * get_m_MouseState_15() const { return ___m_MouseState_15; }
	inline MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 ** get_address_of_m_MouseState_15() { return &___m_MouseState_15; }
	inline void set_m_MouseState_15(MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 * value)
	{
		___m_MouseState_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MouseState_15), (void*)value);
	}
};


// UnityEngine.EventSystems.StandaloneInputModule
struct StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD  : public PointerInputModule_tD7460503C6A4E1060914FFD213535AEF6AE2F421
{
public:
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_PrevActionTime
	float ___m_PrevActionTime_16;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_LastMoveVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_LastMoveVector_17;
	// System.Int32 UnityEngine.EventSystems.StandaloneInputModule::m_ConsecutiveMoveCount
	int32_t ___m_ConsecutiveMoveCount_18;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_LastMousePosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_LastMousePosition_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_MousePosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_MousePosition_20;
	// UnityEngine.GameObject UnityEngine.EventSystems.StandaloneInputModule::m_CurrentFocusedGameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_CurrentFocusedGameObject_21;
	// UnityEngine.EventSystems.PointerEventData UnityEngine.EventSystems.StandaloneInputModule::m_InputPointerEvent
	PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___m_InputPointerEvent_22;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_HorizontalAxis
	String_t* ___m_HorizontalAxis_23;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_VerticalAxis
	String_t* ___m_VerticalAxis_24;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_SubmitButton
	String_t* ___m_SubmitButton_25;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_CancelButton
	String_t* ___m_CancelButton_26;
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_InputActionsPerSecond
	float ___m_InputActionsPerSecond_27;
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_RepeatDelay
	float ___m_RepeatDelay_28;
	// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::m_ForceModuleActive
	bool ___m_ForceModuleActive_29;

public:
	inline static int32_t get_offset_of_m_PrevActionTime_16() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_PrevActionTime_16)); }
	inline float get_m_PrevActionTime_16() const { return ___m_PrevActionTime_16; }
	inline float* get_address_of_m_PrevActionTime_16() { return &___m_PrevActionTime_16; }
	inline void set_m_PrevActionTime_16(float value)
	{
		___m_PrevActionTime_16 = value;
	}

	inline static int32_t get_offset_of_m_LastMoveVector_17() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_LastMoveVector_17)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_LastMoveVector_17() const { return ___m_LastMoveVector_17; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_LastMoveVector_17() { return &___m_LastMoveVector_17; }
	inline void set_m_LastMoveVector_17(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_LastMoveVector_17 = value;
	}

	inline static int32_t get_offset_of_m_ConsecutiveMoveCount_18() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_ConsecutiveMoveCount_18)); }
	inline int32_t get_m_ConsecutiveMoveCount_18() const { return ___m_ConsecutiveMoveCount_18; }
	inline int32_t* get_address_of_m_ConsecutiveMoveCount_18() { return &___m_ConsecutiveMoveCount_18; }
	inline void set_m_ConsecutiveMoveCount_18(int32_t value)
	{
		___m_ConsecutiveMoveCount_18 = value;
	}

	inline static int32_t get_offset_of_m_LastMousePosition_19() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_LastMousePosition_19)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_LastMousePosition_19() const { return ___m_LastMousePosition_19; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_LastMousePosition_19() { return &___m_LastMousePosition_19; }
	inline void set_m_LastMousePosition_19(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_LastMousePosition_19 = value;
	}

	inline static int32_t get_offset_of_m_MousePosition_20() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_MousePosition_20)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_MousePosition_20() const { return ___m_MousePosition_20; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_MousePosition_20() { return &___m_MousePosition_20; }
	inline void set_m_MousePosition_20(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_MousePosition_20 = value;
	}

	inline static int32_t get_offset_of_m_CurrentFocusedGameObject_21() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_CurrentFocusedGameObject_21)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_CurrentFocusedGameObject_21() const { return ___m_CurrentFocusedGameObject_21; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_CurrentFocusedGameObject_21() { return &___m_CurrentFocusedGameObject_21; }
	inline void set_m_CurrentFocusedGameObject_21(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_CurrentFocusedGameObject_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentFocusedGameObject_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputPointerEvent_22() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_InputPointerEvent_22)); }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * get_m_InputPointerEvent_22() const { return ___m_InputPointerEvent_22; }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 ** get_address_of_m_InputPointerEvent_22() { return &___m_InputPointerEvent_22; }
	inline void set_m_InputPointerEvent_22(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * value)
	{
		___m_InputPointerEvent_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputPointerEvent_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_HorizontalAxis_23() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_HorizontalAxis_23)); }
	inline String_t* get_m_HorizontalAxis_23() const { return ___m_HorizontalAxis_23; }
	inline String_t** get_address_of_m_HorizontalAxis_23() { return &___m_HorizontalAxis_23; }
	inline void set_m_HorizontalAxis_23(String_t* value)
	{
		___m_HorizontalAxis_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HorizontalAxis_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_VerticalAxis_24() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_VerticalAxis_24)); }
	inline String_t* get_m_VerticalAxis_24() const { return ___m_VerticalAxis_24; }
	inline String_t** get_address_of_m_VerticalAxis_24() { return &___m_VerticalAxis_24; }
	inline void set_m_VerticalAxis_24(String_t* value)
	{
		___m_VerticalAxis_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VerticalAxis_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_SubmitButton_25() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_SubmitButton_25)); }
	inline String_t* get_m_SubmitButton_25() const { return ___m_SubmitButton_25; }
	inline String_t** get_address_of_m_SubmitButton_25() { return &___m_SubmitButton_25; }
	inline void set_m_SubmitButton_25(String_t* value)
	{
		___m_SubmitButton_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SubmitButton_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_CancelButton_26() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_CancelButton_26)); }
	inline String_t* get_m_CancelButton_26() const { return ___m_CancelButton_26; }
	inline String_t** get_address_of_m_CancelButton_26() { return &___m_CancelButton_26; }
	inline void set_m_CancelButton_26(String_t* value)
	{
		___m_CancelButton_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CancelButton_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputActionsPerSecond_27() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_InputActionsPerSecond_27)); }
	inline float get_m_InputActionsPerSecond_27() const { return ___m_InputActionsPerSecond_27; }
	inline float* get_address_of_m_InputActionsPerSecond_27() { return &___m_InputActionsPerSecond_27; }
	inline void set_m_InputActionsPerSecond_27(float value)
	{
		___m_InputActionsPerSecond_27 = value;
	}

	inline static int32_t get_offset_of_m_RepeatDelay_28() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_RepeatDelay_28)); }
	inline float get_m_RepeatDelay_28() const { return ___m_RepeatDelay_28; }
	inline float* get_address_of_m_RepeatDelay_28() { return &___m_RepeatDelay_28; }
	inline void set_m_RepeatDelay_28(float value)
	{
		___m_RepeatDelay_28 = value;
	}

	inline static int32_t get_offset_of_m_ForceModuleActive_29() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_ForceModuleActive_29)); }
	inline bool get_m_ForceModuleActive_29() const { return ___m_ForceModuleActive_29; }
	inline bool* get_address_of_m_ForceModuleActive_29() { return &___m_ForceModuleActive_29; }
	inline void set_m_ForceModuleActive_29(bool value)
	{
		___m_ForceModuleActive_29 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule
struct MixedRealityInputModule_t574B111D4EE14DF45FD03659EB6D4FA1FCDB5F61  : public StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule::pointerDataToUpdate
	Dictionary_2_tCB5016B391E19ADB305776AB4375FCED878EF0B0 * ___pointerDataToUpdate_30;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule::pointerDataToRemove
	List_1_tCF73D85564F723B069954841E508160856ED5DE0 * ___pointerDataToRemove_31;
	// UnityEngine.Camera Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule::<RaycastCamera>k__BackingField
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___U3CRaycastCameraU3Ek__BackingField_32;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule::<ManualInitializationRequired>k__BackingField
	bool ___U3CManualInitializationRequiredU3Ek__BackingField_33;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule::<ProcessPaused>k__BackingField
	bool ___U3CProcessPausedU3Ek__BackingField_34;

public:
	inline static int32_t get_offset_of_pointerDataToUpdate_30() { return static_cast<int32_t>(offsetof(MixedRealityInputModule_t574B111D4EE14DF45FD03659EB6D4FA1FCDB5F61, ___pointerDataToUpdate_30)); }
	inline Dictionary_2_tCB5016B391E19ADB305776AB4375FCED878EF0B0 * get_pointerDataToUpdate_30() const { return ___pointerDataToUpdate_30; }
	inline Dictionary_2_tCB5016B391E19ADB305776AB4375FCED878EF0B0 ** get_address_of_pointerDataToUpdate_30() { return &___pointerDataToUpdate_30; }
	inline void set_pointerDataToUpdate_30(Dictionary_2_tCB5016B391E19ADB305776AB4375FCED878EF0B0 * value)
	{
		___pointerDataToUpdate_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerDataToUpdate_30), (void*)value);
	}

	inline static int32_t get_offset_of_pointerDataToRemove_31() { return static_cast<int32_t>(offsetof(MixedRealityInputModule_t574B111D4EE14DF45FD03659EB6D4FA1FCDB5F61, ___pointerDataToRemove_31)); }
	inline List_1_tCF73D85564F723B069954841E508160856ED5DE0 * get_pointerDataToRemove_31() const { return ___pointerDataToRemove_31; }
	inline List_1_tCF73D85564F723B069954841E508160856ED5DE0 ** get_address_of_pointerDataToRemove_31() { return &___pointerDataToRemove_31; }
	inline void set_pointerDataToRemove_31(List_1_tCF73D85564F723B069954841E508160856ED5DE0 * value)
	{
		___pointerDataToRemove_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerDataToRemove_31), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRaycastCameraU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(MixedRealityInputModule_t574B111D4EE14DF45FD03659EB6D4FA1FCDB5F61, ___U3CRaycastCameraU3Ek__BackingField_32)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_U3CRaycastCameraU3Ek__BackingField_32() const { return ___U3CRaycastCameraU3Ek__BackingField_32; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_U3CRaycastCameraU3Ek__BackingField_32() { return &___U3CRaycastCameraU3Ek__BackingField_32; }
	inline void set_U3CRaycastCameraU3Ek__BackingField_32(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___U3CRaycastCameraU3Ek__BackingField_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRaycastCameraU3Ek__BackingField_32), (void*)value);
	}

	inline static int32_t get_offset_of_U3CManualInitializationRequiredU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(MixedRealityInputModule_t574B111D4EE14DF45FD03659EB6D4FA1FCDB5F61, ___U3CManualInitializationRequiredU3Ek__BackingField_33)); }
	inline bool get_U3CManualInitializationRequiredU3Ek__BackingField_33() const { return ___U3CManualInitializationRequiredU3Ek__BackingField_33; }
	inline bool* get_address_of_U3CManualInitializationRequiredU3Ek__BackingField_33() { return &___U3CManualInitializationRequiredU3Ek__BackingField_33; }
	inline void set_U3CManualInitializationRequiredU3Ek__BackingField_33(bool value)
	{
		___U3CManualInitializationRequiredU3Ek__BackingField_33 = value;
	}

	inline static int32_t get_offset_of_U3CProcessPausedU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(MixedRealityInputModule_t574B111D4EE14DF45FD03659EB6D4FA1FCDB5F61, ___U3CProcessPausedU3Ek__BackingField_34)); }
	inline bool get_U3CProcessPausedU3Ek__BackingField_34() const { return ___U3CProcessPausedU3Ek__BackingField_34; }
	inline bool* get_address_of_U3CProcessPausedU3Ek__BackingField_34() { return &___U3CProcessPausedU3Ek__BackingField_34; }
	inline void set_U3CProcessPausedU3Ek__BackingField_34(bool value)
	{
		___U3CProcessPausedU3Ek__BackingField_34 = value;
	}
};

struct MixedRealityInputModule_t574B111D4EE14DF45FD03659EB6D4FA1FCDB5F61_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule::ProcessPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ProcessPerfMarker_35;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule::ProcessMrtkPointerLostPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ProcessMrtkPointerLostPerfMarker_36;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule::GetMousePointerEventDataPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___GetMousePointerEventDataPerfMarker_37;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule::UpdateMousePointerEventDataPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateMousePointerEventDataPerfMarker_38;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule::ResetMousePointerEventDataPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ResetMousePointerEventDataPerfMarker_39;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule::OnSourceDetectedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnSourceDetectedPerfMarker_40;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule::OnSourceLostPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnSourceLostPerfMarker_41;

public:
	inline static int32_t get_offset_of_ProcessPerfMarker_35() { return static_cast<int32_t>(offsetof(MixedRealityInputModule_t574B111D4EE14DF45FD03659EB6D4FA1FCDB5F61_StaticFields, ___ProcessPerfMarker_35)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ProcessPerfMarker_35() const { return ___ProcessPerfMarker_35; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ProcessPerfMarker_35() { return &___ProcessPerfMarker_35; }
	inline void set_ProcessPerfMarker_35(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ProcessPerfMarker_35 = value;
	}

	inline static int32_t get_offset_of_ProcessMrtkPointerLostPerfMarker_36() { return static_cast<int32_t>(offsetof(MixedRealityInputModule_t574B111D4EE14DF45FD03659EB6D4FA1FCDB5F61_StaticFields, ___ProcessMrtkPointerLostPerfMarker_36)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ProcessMrtkPointerLostPerfMarker_36() const { return ___ProcessMrtkPointerLostPerfMarker_36; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ProcessMrtkPointerLostPerfMarker_36() { return &___ProcessMrtkPointerLostPerfMarker_36; }
	inline void set_ProcessMrtkPointerLostPerfMarker_36(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ProcessMrtkPointerLostPerfMarker_36 = value;
	}

	inline static int32_t get_offset_of_GetMousePointerEventDataPerfMarker_37() { return static_cast<int32_t>(offsetof(MixedRealityInputModule_t574B111D4EE14DF45FD03659EB6D4FA1FCDB5F61_StaticFields, ___GetMousePointerEventDataPerfMarker_37)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_GetMousePointerEventDataPerfMarker_37() const { return ___GetMousePointerEventDataPerfMarker_37; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_GetMousePointerEventDataPerfMarker_37() { return &___GetMousePointerEventDataPerfMarker_37; }
	inline void set_GetMousePointerEventDataPerfMarker_37(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___GetMousePointerEventDataPerfMarker_37 = value;
	}

	inline static int32_t get_offset_of_UpdateMousePointerEventDataPerfMarker_38() { return static_cast<int32_t>(offsetof(MixedRealityInputModule_t574B111D4EE14DF45FD03659EB6D4FA1FCDB5F61_StaticFields, ___UpdateMousePointerEventDataPerfMarker_38)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateMousePointerEventDataPerfMarker_38() const { return ___UpdateMousePointerEventDataPerfMarker_38; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateMousePointerEventDataPerfMarker_38() { return &___UpdateMousePointerEventDataPerfMarker_38; }
	inline void set_UpdateMousePointerEventDataPerfMarker_38(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateMousePointerEventDataPerfMarker_38 = value;
	}

	inline static int32_t get_offset_of_ResetMousePointerEventDataPerfMarker_39() { return static_cast<int32_t>(offsetof(MixedRealityInputModule_t574B111D4EE14DF45FD03659EB6D4FA1FCDB5F61_StaticFields, ___ResetMousePointerEventDataPerfMarker_39)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ResetMousePointerEventDataPerfMarker_39() const { return ___ResetMousePointerEventDataPerfMarker_39; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ResetMousePointerEventDataPerfMarker_39() { return &___ResetMousePointerEventDataPerfMarker_39; }
	inline void set_ResetMousePointerEventDataPerfMarker_39(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ResetMousePointerEventDataPerfMarker_39 = value;
	}

	inline static int32_t get_offset_of_OnSourceDetectedPerfMarker_40() { return static_cast<int32_t>(offsetof(MixedRealityInputModule_t574B111D4EE14DF45FD03659EB6D4FA1FCDB5F61_StaticFields, ___OnSourceDetectedPerfMarker_40)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnSourceDetectedPerfMarker_40() const { return ___OnSourceDetectedPerfMarker_40; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnSourceDetectedPerfMarker_40() { return &___OnSourceDetectedPerfMarker_40; }
	inline void set_OnSourceDetectedPerfMarker_40(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnSourceDetectedPerfMarker_40 = value;
	}

	inline static int32_t get_offset_of_OnSourceLostPerfMarker_41() { return static_cast<int32_t>(offsetof(MixedRealityInputModule_t574B111D4EE14DF45FD03659EB6D4FA1FCDB5F61_StaticFields, ___OnSourceLostPerfMarker_41)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnSourceLostPerfMarker_41() const { return ___OnSourceLostPerfMarker_41; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnSourceLostPerfMarker_41() { return &___OnSourceLostPerfMarker_41; }
	inline void set_OnSourceLostPerfMarker_41(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnSourceLostPerfMarker_41 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.LayerMask[]
struct LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  m_Items[1];

public:
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		m_Items[index] = value;
	}
};
// Microsoft.MixedReality.Toolkit.Physics.RayStep[]
struct RayStepU5BU5D_t3414C621E03C24B384171E375117034E14C9F871  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RayStep_tDD523966EB857DFE1FA64A404F585D84E78FAE8A  m_Items[1];

public:
	inline RayStep_tDD523966EB857DFE1FA64A404F585D84E78FAE8A  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RayStep_tDD523966EB857DFE1FA64A404F585D84E78FAE8A * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RayStep_tDD523966EB857DFE1FA64A404F585D84E78FAE8A  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RayStep_tDD523966EB857DFE1FA64A404F585D84E78FAE8A  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RayStep_tDD523966EB857DFE1FA64A404F585D84E78FAE8A * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RayStep_tDD523966EB857DFE1FA64A404F585D84E78FAE8A  value)
	{
		m_Items[index] = value;
	}
};


// System.Boolean System.Nullable`1<UnityEngine.Vector3>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_gshared_inline (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<UnityEngine.Vector3>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B_gshared (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_gshared (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitOnCompleted<System.Object,Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<EnsureInputSystemValid>d__4>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3CEnsureInputSystemValidU3Ed__4_tC0875EF4C80B5618E53ED236FC804960EABC8CD8_m223F3BC869E662C16744A04A7FB7FDA362DCEA49_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, RuntimeObject ** ___awaiter0, U3CEnsureInputSystemValidU3Ed__4_tC0875EF4C80B5618E53ED236FC804960EABC8CD8 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<Start>d__2>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__2_tD6C955B38EB1A50FFA586D07CE43BAF8F4F824AB_m32B442736012487FD75779435A2352A36DFD47E9_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CStartU3Ed__2_tD6C955B38EB1A50FFA586D07CE43BAF8F4F824AB * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitOnCompleted<System.Object,Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<EnsureInputSystemValid>d__4>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3CEnsureInputSystemValidU3Ed__4_t5957B42D80E6383DCAA61D84E56ABB26A6A110DA_m415EC76C37DCC53869BEFB997B9311C503D41F9B_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, RuntimeObject ** ___awaiter0, U3CEnsureInputSystemValidU3Ed__4_t5957B42D80E6383DCAA61D84E56ABB26A6A110DA * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<Start>d__2>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__2_t356707D26D0C2F68AA6A184ABE199B7170D68915_m12DD9AFE05F205887533A7E1A8A737F5AA2D1C47_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CStartU3Ed__2_t356707D26D0C2F68AA6A184ABE199B7170D68915 * ___stateMachine1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C  Dictionary_2_GetEnumerator_m17437D82A5AF502166F10DD12B5C5830DDB95444_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  Enumerator_get_Current_mE5033FC555E7BC63DDC919B903A8A305C3AADBEB_gshared_inline (Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_mC1E2EFCF98529D0550A547CF87C6EAB6821741BF_gshared_inline (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mEEAA9A380252BB2F9B2403853F4C00F2F643ADC4_gshared (Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m7567E65C01E35A09AD2AD4814D708A8E76469D31_gshared (Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C * __this, const RuntimeMethod* method);
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<System.Object>(UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.UnityObjectExtensions::IsNull<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityObjectExtensions_IsNull_TisRuntimeObject_mC56F2309ABF901C0540382A06CFDE2F7B912B5BD_gshared (RuntimeObject * ___interface0, const RuntimeMethod* method);

// System.Void Microsoft.MixedReality.Toolkit.Input.GenericPointer::.ctor(System.String,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericPointer__ctor_mB04E34CAAE7557E036880C0F3943B001887441E3 (GenericPointer_t2D74A2BA9CBADA588374101900F39C9B4220A2C5 * __this, String_t* ___pointerName0, RuntimeObject* ___inputSourceParent1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.GenericPointer::set_PrioritizedLayerMasksOverride(UnityEngine.LayerMask[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GenericPointer_set_PrioritizedLayerMasksOverride_mBE1F77B73EDCF92B7E6A854662AD38DCCB94FCCE_inline (GenericPointer_t2D74A2BA9CBADA588374101900F39C9B4220A2C5 * __this, LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.GenericPointer::set_IsInteractionEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericPointer_set_IsInteractionEnabled_m2EABD0DA332BFD75F2247EE354126C1E58234FA8 (GenericPointer_t2D74A2BA9CBADA588374101900F39C9B4220A2C5 * __this, bool ___value0, const RuntimeMethod* method);
// Unity.Profiling.ProfilerMarker/AutoScope Unity.Profiling.ProfilerMarker::Auto()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.GazeProvider::get_IsEyeTrackingEnabledAndValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GazeProvider_get_IsEyeTrackingEnabledAndValid_m930230572752B6F0B0C743E48BC9D194EF176D07 (GazeProvider_t2BB12BA2FA0ECEE3BEA51CC14F92FE1A440009CE * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseGenericInputSource::set_SourceType(Microsoft.MixedReality.Toolkit.Input.InputSourceType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseGenericInputSource_set_SourceType_m3108402D6C3E3176E7D1537CF3C95C8B589FA922_inline (BaseGenericInputSource_t2C53C81AABEABD940B6C53D893C0AB19301845A9 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Ray Microsoft.MixedReality.Toolkit.Input.GazeProvider::get_LatestEyeGaze()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  GazeProvider_get_LatestEyeGaze_mA4398E6DE76CCB7CB32A5D52391563ABBB9013C5_inline (GazeProvider_t2BB12BA2FA0ECEE3BEA51CC14F92FE1A440009CE * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Ray_get_origin_m0C1B2BFF99CDF5231AC29AC031C161F55B53C1D0 (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Ray_get_direction_m2B31F86F19B64474A901B28D3808011AE7A13EFC (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.GazeProvider::get_UseHeadGazeOverride()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GazeProvider_get_UseHeadGazeOverride_mAB00CEBDC3E34FF24C318674C3B20169A81DB000_inline (GazeProvider_t2BB12BA2FA0ECEE3BEA51CC14F92FE1A440009CE * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<UnityEngine.Vector3>::get_HasValue()
inline bool Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_inline (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *, const RuntimeMethod*))Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<UnityEngine.Vector3>::get_Value()
inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * __this, const RuntimeMethod* method)
{
	return ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *, const RuntimeMethod*))Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  MixedRealityPlayspace_InverseTransformPoint_m5B972D5A142C5C9E15863D88DF87AB8C207CC163 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::InverseTransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  MixedRealityPlayspace_InverseTransformDirection_m3A760FA0F189D2F4B41FB3DEEA467A63772DE44F (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldDirection0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  MixedRealityPlayspace_TransformPoint_m7BED771C7462B4F30B55BD4899753209E7035077 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localPosition0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::TransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  MixedRealityPlayspace_TransformDirection_mFA0B09CFA5D79FAC7F6C17685BAAB65D3BB5C2A8 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localDirection0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Physics.RayStep[] Microsoft.MixedReality.Toolkit.Input.GenericPointer::get_Rays()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RayStepU5BU5D_t3414C621E03C24B384171E375117034E14C9F871* GenericPointer_get_Rays_m2A2A78170E7E1623B5422A22FD6C0785FDB51F4D_inline (GenericPointer_t2D74A2BA9CBADA588374101900F39C9B4220A2C5 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Physics.RayStep::UpdateRayStep(UnityEngine.Vector3&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RayStep_UpdateRayStep_m8405360336BED7EE99E62C05499FEFAE3E856A55 (RayStep_tDD523966EB857DFE1FA64A404F585D84E78FAE8A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___origin0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___terminus1, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::get_Origin()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RayStep_get_Origin_mF092B32DA45F09691CD13C850B8695B57BA73D7A_inline (RayStep_tDD523966EB857DFE1FA64A404F585D84E78FAE8A * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::get_Direction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RayStep_get_Direction_m30554C81FC20D5DA3CB243343E16836DB3659B02_inline (RayStep_tDD523966EB857DFE1FA64A404F585D84E78FAE8A * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline (float ___d0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider::set_HitPosition(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GazeProvider_set_HitPosition_mFC8DD2412D3DE3B7FE1F1FA36D39F809EB858B01_inline (GazeProvider_t2BB12BA2FA0ECEE3BEA51CC14F92FE1A440009CE * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::Dispose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.CoreServices::get_InputSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_get_InputSystem_m12A0174735CF9D34E818B5B78075DFB277CDB164 (const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::get_None()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58  MixedRealityInputAction_get_None_mFC3FA7679A1909B645EC4A1193841640E491CE7A_inline (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker::.ctor(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1DF6B30FDEEE802E4C2D0077BF260022AED7C291 (U3CU3Ec_tBAE32D5B0DA26C4B975A203181ABCC03F745703A * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9 (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.WaitUntil::.ctor(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitUntil__ctor_m4D825CB1C0570631514BFF24AEF1FB17D646C76F (WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * __this, Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___predicate0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions::GetAwaiter(UnityEngine.WaitUntil)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_tC457780E69748E91DD44509C87CDD5DE74E87B2A * AwaiterExtensions_GetAwaiter_mCDB81F65332A33C16D44E535218CD84B0CB91AB0 (WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * ___instruction0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SimpleCoroutineAwaiter_get_IsCompleted_m33374A3B036EAA2C2FD8C9622619A5FE43A0805D_inline (SimpleCoroutineAwaiter_tC457780E69748E91DD44509C87CDD5DE74E87B2A * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitOnCompleted<Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter,Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<EnsureInputSystemValid>d__4>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tC457780E69748E91DD44509C87CDD5DE74E87B2A_TisU3CEnsureInputSystemValidU3Ed__4_tC0875EF4C80B5618E53ED236FC804960EABC8CD8_m4B95E8C936F9E6A54CF21F2C49A44DECA7CCE9C8 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, SimpleCoroutineAwaiter_tC457780E69748E91DD44509C87CDD5DE74E87B2A ** ___awaiter0, U3CEnsureInputSystemValidU3Ed__4_tC0875EF4C80B5618E53ED236FC804960EABC8CD8 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, SimpleCoroutineAwaiter_tC457780E69748E91DD44509C87CDD5DE74E87B2A **, U3CEnsureInputSystemValidU3Ed__4_tC0875EF4C80B5618E53ED236FC804960EABC8CD8 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3CEnsureInputSystemValidU3Ed__4_tC0875EF4C80B5618E53ED236FC804960EABC8CD8_m223F3BC869E662C16744A04A7FB7FDA362DCEA49_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCoroutineAwaiter_GetResult_m004A1C6CFC8858DE017FC884B6EC6BDD950AA47A (SimpleCoroutineAwaiter_tC457780E69748E91DD44509C87CDD5DE74E87B2A * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<EnsureInputSystemValid>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnsureInputSystemValidU3Ed__4_MoveNext_m86A5FBF9B99F120D4F3F59AA7D962A52E11FF1C7 (U3CEnsureInputSystemValidU3Ed__4_tC0875EF4C80B5618E53ED236FC804960EABC8CD8 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<EnsureInputSystemValid>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnsureInputSystemValidU3Ed__4_SetStateMachine_mCF0060C22C6BDBA954F3C11A52B1EEF1AA1CADA5 (U3CEnsureInputSystemValidU3Ed__4_tC0875EF4C80B5618E53ED236FC804960EABC8CD8 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener::EnsureInputSystemValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * InputSystemGlobalHandlerListener_EnsureInputSystemValid_m1D04EA8E9E2076DB8D37653B2BC966368E031D3B (InputSystemGlobalHandlerListener_t7626F4B8931C8C8AABDC1B0FBC54E86EF67584D5 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<Start>d__2>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__2_tD6C955B38EB1A50FFA586D07CE43BAF8F4F824AB_m32B442736012487FD75779435A2352A36DFD47E9 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CStartU3Ed__2_tD6C955B38EB1A50FFA586D07CE43BAF8F4F824AB * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CStartU3Ed__2_tD6C955B38EB1A50FFA586D07CE43BAF8F4F824AB *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__2_tD6C955B38EB1A50FFA586D07CE43BAF8F4F824AB_m32B442736012487FD75779435A2352A36DFD47E9_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330 (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<Start>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_MoveNext_mABC4E130C7566A501F7D40AC8E7545812303D336 (U3CStartU3Ed__2_tD6C955B38EB1A50FFA586D07CE43BAF8F4F824AB * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<Start>d__2::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_SetStateMachine_mA0F8619CCB4F8E11D0DAF03E51A551A35DBC26CF (U3CStartU3Ed__2_tD6C955B38EB1A50FFA586D07CE43BAF8F4F824AB * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m074E724F9440AE327A7D7451CCA997EA12EA1EF2 (U3CU3Ec_t5E1E7C2705DC71CED32F326A0D0EDE6498075716 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitOnCompleted<Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter,Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<EnsureInputSystemValid>d__4>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tC457780E69748E91DD44509C87CDD5DE74E87B2A_TisU3CEnsureInputSystemValidU3Ed__4_t5957B42D80E6383DCAA61D84E56ABB26A6A110DA_m37FCB768D1B6DB6B35AD596C8B93D19B2E6F6E2A (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, SimpleCoroutineAwaiter_tC457780E69748E91DD44509C87CDD5DE74E87B2A ** ___awaiter0, U3CEnsureInputSystemValidU3Ed__4_t5957B42D80E6383DCAA61D84E56ABB26A6A110DA * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, SimpleCoroutineAwaiter_tC457780E69748E91DD44509C87CDD5DE74E87B2A **, U3CEnsureInputSystemValidU3Ed__4_t5957B42D80E6383DCAA61D84E56ABB26A6A110DA *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3CEnsureInputSystemValidU3Ed__4_t5957B42D80E6383DCAA61D84E56ABB26A6A110DA_m415EC76C37DCC53869BEFB997B9311C503D41F9B_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<EnsureInputSystemValid>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnsureInputSystemValidU3Ed__4_MoveNext_mE731B05072D07C72C7F86479E7E5D4D2CDEB89DD (U3CEnsureInputSystemValidU3Ed__4_t5957B42D80E6383DCAA61D84E56ABB26A6A110DA * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<EnsureInputSystemValid>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnsureInputSystemValidU3Ed__4_SetStateMachine_mE7700C402013A49F06A5B83BCC6A97A6A252F148 (U3CEnsureInputSystemValidU3Ed__4_t5957B42D80E6383DCAA61D84E56ABB26A6A110DA * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener::EnsureInputSystemValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * InputSystemGlobalListener_EnsureInputSystemValid_m307682E5E1D4C04A885C1F836C592174A1707EFE (InputSystemGlobalListener_t3C3B05F5289CFC04036EB6158B24859F969250BD * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<Start>d__2>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__2_t356707D26D0C2F68AA6A184ABE199B7170D68915_m12DD9AFE05F205887533A7E1A8A737F5AA2D1C47 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CStartU3Ed__2_t356707D26D0C2F68AA6A184ABE199B7170D68915 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CStartU3Ed__2_t356707D26D0C2F68AA6A184ABE199B7170D68915 *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__2_t356707D26D0C2F68AA6A184ABE199B7170D68915_m12DD9AFE05F205887533A7E1A8A737F5AA2D1C47_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<Start>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_MoveNext_mEAE7FF74F4EA1250DE3FD8E864FAE7A9EDF75F7D (U3CStartU3Ed__2_t356707D26D0C2F68AA6A184ABE199B7170D68915 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<Start>d__2::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_SetStateMachine_m7F83559E38762A9090087188C67FE938E9E074D0 (U3CStartU3Ed__2_t356707D26D0C2F68AA6A184ABE199B7170D68915 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ActiveMixedRealityPointersU3Ed__16_U3CU3Em__Finally1_m51A93D3EFE115D4710EE100531EFBBB69C058D59 (U3Cget_ActiveMixedRealityPointersU3Ed__16_t5849695544400F58C2B6233E979A98A2ABFA366D * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>::GetEnumerator()
inline Enumerator_tCC5D2E22B90EB083C4B938DEABCCEAB66363BE1D  Dictionary_2_GetEnumerator_mE8DAF982558B09E161097CE7F3FBAE1F8EB32B90 (Dictionary_2_tCB5016B391E19ADB305776AB4375FCED878EF0B0 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tCC5D2E22B90EB083C4B938DEABCCEAB66363BE1D  (*) (Dictionary_2_tCB5016B391E19ADB305776AB4375FCED878EF0B0 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_m17437D82A5AF502166F10DD12B5C5830DDB95444_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>::get_Current()
inline KeyValuePair_2_t122D8D0845EF16384D2BB12F00D692E3D4480521  Enumerator_get_Current_m6277D9088F35FEBB00854B400A50D5738D368C38_inline (Enumerator_tCC5D2E22B90EB083C4B938DEABCCEAB66363BE1D * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t122D8D0845EF16384D2BB12F00D692E3D4480521  (*) (Enumerator_tCC5D2E22B90EB083C4B938DEABCCEAB66363BE1D *, const RuntimeMethod*))Enumerator_get_Current_mE5033FC555E7BC63DDC919B903A8A305C3AADBEB_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>::get_Value()
inline PointerData_t961238F7F343E720C726AACF3A25940C344E9595 * KeyValuePair_2_get_Value_m5781E012CAD465D20D5EA8CF45694487B8AFE9DB_inline (KeyValuePair_2_t122D8D0845EF16384D2BB12F00D692E3D4480521 * __this, const RuntimeMethod* method)
{
	return ((  PointerData_t961238F7F343E720C726AACF3A25940C344E9595 * (*) (KeyValuePair_2_t122D8D0845EF16384D2BB12F00D692E3D4480521 *, const RuntimeMethod*))KeyValuePair_2_get_Value_mC1E2EFCF98529D0550A547CF87C6EAB6821741BF_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>::MoveNext()
inline bool Enumerator_MoveNext_m1B4FE1C295A7050C419E855320CCC8BB2B7A9921 (Enumerator_tCC5D2E22B90EB083C4B938DEABCCEAB66363BE1D * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tCC5D2E22B90EB083C4B938DEABCCEAB66363BE1D *, const RuntimeMethod*))Enumerator_MoveNext_mEEAA9A380252BB2F9B2403853F4C00F2F643ADC4_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ActiveMixedRealityPointersU3Ed__16_System_IDisposable_Dispose_mB8ED4D83307D021B4FA100597F41B978FE85A7E5 (U3Cget_ActiveMixedRealityPointersU3Ed__16_t5849695544400F58C2B6233E979A98A2ABFA366D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>::Dispose()
inline void Enumerator_Dispose_m00166CDB9ACB209A0978F31A563DCE66194D7E3D (Enumerator_tCC5D2E22B90EB083C4B938DEABCCEAB66363BE1D * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tCC5D2E22B90EB083C4B938DEABCCEAB66363BE1D *, const RuntimeMethod*))Enumerator_Dispose_m7567E65C01E35A09AD2AD4814D708A8E76469D31_gshared)(__this, method);
}
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ActiveMixedRealityPointersU3Ed__16__ctor_mF9914CCBA1A6B13E085DCD5EB0B1EB7EEC83205B (U3Cget_ActiveMixedRealityPointersU3Ed__16_t5849695544400F58C2B6233E979A98A2ABFA366D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::System.Collections.Generic.IEnumerable<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ActiveMixedRealityPointersU3Ed__16_System_Collections_Generic_IEnumerableU3CMicrosoft_MixedReality_Toolkit_Input_IMixedRealityPointerU3E_GetEnumerator_m86F958A72E935BDFFE75DA25A3509ED9AE46EB60 (U3Cget_ActiveMixedRealityPointersU3Ed__16_t5849695544400F58C2B6233E979A98A2ABFA366D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.PointerInputModule/MouseState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseState__ctor_m16EF8D45AF8A178368547BD1CE4FBF9DBC563605 (MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.PointerEventData::.ctor(UnityEngine.EventSystems.EventSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventData__ctor_m3A877590C20995B4F549C6923BBE2B0901A684F2 (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___eventSystem0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m998C2230B2C5E7FAEF1CD1C7BCC71962A400AECF (U3CU3Ec_t738602F83F328AD6B4BE4BEE3436DDB566A8F3DA * __this, const RuntimeMethod* method);
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.SourceStateEventData>(UnityEngine.EventSystems.BaseEventData)
inline SourceStateEventData_t69DA69CF3D8292B514A438C9AA3F1C0DA4A1F70A * ExecuteEvents_ValidateEventData_TisSourceStateEventData_t69DA69CF3D8292B514A438C9AA3F1C0DA4A1F70A_m1158D1EF56847A5F85086AE8C44EA2376A4678E5 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  SourceStateEventData_t69DA69CF3D8292B514A438C9AA3F1C0DA4A1F70A * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.TrackingState>>(UnityEngine.EventSystems.BaseEventData)
inline SourcePoseEventData_1_t279FAFBF5A63CBB50D189E71E915323C055FDA22 * ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t279FAFBF5A63CBB50D189E71E915323C055FDA22_m42C5E7816341B0485D5170A310F466EF48C9CE6D (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  SourcePoseEventData_1_t279FAFBF5A63CBB50D189E71E915323C055FDA22 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector2>>(UnityEngine.EventSystems.BaseEventData)
inline SourcePoseEventData_1_t80C46DBD53C9C9645B0164A3091F71C84CE7D25D * ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t80C46DBD53C9C9645B0164A3091F71C84CE7D25D_m275CEF667687F25345E1202A7E2FD75EDA0CBD08 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  SourcePoseEventData_1_t80C46DBD53C9C9645B0164A3091F71C84CE7D25D * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector3>>(UnityEngine.EventSystems.BaseEventData)
inline SourcePoseEventData_1_t4CC18A361F416AEE6542A9B09E9D8FF174DF3CB0 * ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t4CC18A361F416AEE6542A9B09E9D8FF174DF3CB0_mB25036FAE9655FE10D21A9BC178D4557AB2267C3 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  SourcePoseEventData_1_t4CC18A361F416AEE6542A9B09E9D8FF174DF3CB0 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Quaternion>>(UnityEngine.EventSystems.BaseEventData)
inline SourcePoseEventData_1_tAC3DE05E45010F0569ABBE17F2C120F4E13518D2 * ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_tAC3DE05E45010F0569ABBE17F2C120F4E13518D2_m98976A97309BD7DC81F1370A43D08FD07D60A6D2 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  SourcePoseEventData_1_tAC3DE05E45010F0569ABBE17F2C120F4E13518D2 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>>(UnityEngine.EventSystems.BaseEventData)
inline SourcePoseEventData_1_tA97A232897516DFA3A41013CD2865BE9068B04BD * ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_tA97A232897516DFA3A41013CD2865BE9068B04BD_m81B913C81443C08947EF035A77D644E0DE15DAE2 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  SourcePoseEventData_1_tA97A232897516DFA3A41013CD2865BE9068B04BD * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.FocusEventData>(UnityEngine.EventSystems.BaseEventData)
inline FocusEventData_t9F3F2249C05BBF9D98A7BD4B12506BDC36E7F041 * ExecuteEvents_ValidateEventData_TisFocusEventData_t9F3F2249C05BBF9D98A7BD4B12506BDC36E7F041_m50F3158009D9D9C30EDA746D6FEF186A0E4A3599 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  FocusEventData_t9F3F2249C05BBF9D98A7BD4B12506BDC36E7F041 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData>(UnityEngine.EventSystems.BaseEventData)
inline MixedRealityPointerEventData_tAB2BBE5FC804ED0060813BEBC6D1866F3795E602 * ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_tAB2BBE5FC804ED0060813BEBC6D1866F3795E602_m358486C871749435720ECB518BC86C21D67B716E (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  MixedRealityPointerEventData_tAB2BBE5FC804ED0060813BEBC6D1866F3795E602 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.InputEventData>(UnityEngine.EventSystems.BaseEventData)
inline InputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7 * ExecuteEvents_ValidateEventData_TisInputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7_mBEDC7A18A8EA2D53031F73EEE321D3D40366F563 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  InputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.UnityObjectExtensions::IsNull<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler>(!!0)
inline bool UnityObjectExtensions_IsNull_TisIMixedRealityInputHandler_tE7D2CE8FEAB3A804FC71F58C4F943E1B3EA1FB51_m24A7B0C9E24CCE4E14F091A1CEA8A50A93DEA342 (RuntimeObject* ___interface0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))UnityObjectExtensions_IsNull_TisRuntimeObject_mC56F2309ABF901C0540382A06CFDE2F7B912B5BD_gshared)(___interface0, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.UnityObjectExtensions::IsNull<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputActionHandler>(!!0)
inline bool UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_t99B8222621D02B580431670344F7E93CB8693D10_mF97259E6D002B5F855DEA2C610FB5CAF9EBE2F40 (RuntimeObject* ___interface0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))UnityObjectExtensions_IsNull_TisRuntimeObject_mC56F2309ABF901C0540382A06CFDE2F7B912B5BD_gshared)(___interface0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Single>>(UnityEngine.EventSystems.BaseEventData)
inline InputEventData_1_t0537B6B07E4ABB5C85E144AF838FF76463759E3E * ExecuteEvents_ValidateEventData_TisInputEventData_1_t0537B6B07E4ABB5C85E144AF838FF76463759E3E_m91AFF61C1A2850DB0A62E0E533B50CE345FD7758 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  InputEventData_1_t0537B6B07E4ABB5C85E144AF838FF76463759E3E * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector2>>(UnityEngine.EventSystems.BaseEventData)
inline InputEventData_1_t92F237401150131C650E068132364E4714AFE903 * ExecuteEvents_ValidateEventData_TisInputEventData_1_t92F237401150131C650E068132364E4714AFE903_mF3B4B57CC8C38AF6147E09CC7CAAFFB663A6DAD5 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  InputEventData_1_t92F237401150131C650E068132364E4714AFE903 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector3>>(UnityEngine.EventSystems.BaseEventData)
inline InputEventData_1_t62E6DA80533CB6FF5006FD3E02EB52A3FADFB900 * ExecuteEvents_ValidateEventData_TisInputEventData_1_t62E6DA80533CB6FF5006FD3E02EB52A3FADFB900_m671764AA603B1E35D1BFC0098684E24A7809FFFF (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  InputEventData_1_t62E6DA80533CB6FF5006FD3E02EB52A3FADFB900 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Quaternion>>(UnityEngine.EventSystems.BaseEventData)
inline InputEventData_1_tBE137B5127162FEBFFDFE7F6ED8BEE73A3969646 * ExecuteEvents_ValidateEventData_TisInputEventData_1_tBE137B5127162FEBFFDFE7F6ED8BEE73A3969646_m25E3F40E5D3B9154BE42629565BF0D633127422A (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  InputEventData_1_tBE137B5127162FEBFFDFE7F6ED8BEE73A3969646 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>>(UnityEngine.EventSystems.BaseEventData)
inline InputEventData_1_tCC0938E22E808EE51312F8D480E225522F26CF28 * ExecuteEvents_ValidateEventData_TisInputEventData_1_tCC0938E22E808EE51312F8D480E225522F26CF28_m4E46348EE1A9317620BABB6A77DCF694BE4F179C (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  InputEventData_1_tCC0938E22E808EE51312F8D480E225522F26CF28 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.UnityObjectExtensions::IsNull<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler>(!!0)
inline bool UnityObjectExtensions_IsNull_TisIMixedRealityGestureHandler_t2AF9AF385BB59D19DA456667F689097049F120E8_m2C8CBF29499A7CF413582F8189D00DF9A0EFE9CD (RuntimeObject* ___interface0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))UnityObjectExtensions_IsNull_TisRuntimeObject_mC56F2309ABF901C0540382A06CFDE2F7B912B5BD_gshared)(___interface0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.SpeechEventData>(UnityEngine.EventSystems.BaseEventData)
inline SpeechEventData_tF39C472B089E67439FD259C5939D8C0F60F66548 * ExecuteEvents_ValidateEventData_TisSpeechEventData_tF39C472B089E67439FD259C5939D8C0F60F66548_m2D0B1E16659F2D60F479574338FFC9D58799C031 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  SpeechEventData_tF39C472B089E67439FD259C5939D8C0F60F66548 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.UnityObjectExtensions::IsNull<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySpeechHandler>(!!0)
inline bool UnityObjectExtensions_IsNull_TisIMixedRealitySpeechHandler_t66BC42AC0B95413148789EBA7474B8B0FC07D0A9_m6D8E3C5FE25417E8ADF0C4A0D43F75FB1345D221 (RuntimeObject* ___interface0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))UnityObjectExtensions_IsNull_TisRuntimeObject_mC56F2309ABF901C0540382A06CFDE2F7B912B5BD_gshared)(___interface0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.DictationEventData>(UnityEngine.EventSystems.BaseEventData)
inline DictationEventData_t8CFAB3BF256A7952C07C0CD8C7D4489905A1AC82 * ExecuteEvents_ValidateEventData_TisDictationEventData_t8CFAB3BF256A7952C07C0CD8C7D4489905A1AC82_m357ACFCEE0793A378A78AAD8A526DC8CC5604AE1 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  DictationEventData_t8CFAB3BF256A7952C07C0CD8C7D4489905A1AC82 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Collections.Generic.IDictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>>>(UnityEngine.EventSystems.BaseEventData)
inline InputEventData_1_t03651600101A901771C241588D9401D9E466D779 * ExecuteEvents_ValidateEventData_TisInputEventData_1_t03651600101A901771C241588D9401D9E466D779_mB6DDDF5FB7856BEAF734656BFBD38E8F33671B2E (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  InputEventData_1_t03651600101A901771C241588D9401D9E466D779 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Input.HandMeshInfo>>(UnityEngine.EventSystems.BaseEventData)
inline InputEventData_1_tB79F7140EE0E13A566F61C25F0CBC35E52135A75 * ExecuteEvents_ValidateEventData_TisInputEventData_1_tB79F7140EE0E13A566F61C25F0CBC35E52135A75_m422D6C1A4F7920DA15F4C9BEEF707695478C8FF0 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  InputEventData_1_tB79F7140EE0E13A566F61C25F0CBC35E52135A75 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData>(UnityEngine.EventSystems.BaseEventData)
inline HandTrackingInputEventData_t2CAF86D0E0AD87D5996CDB42C70A69861FFB5BF8 * ExecuteEvents_ValidateEventData_TisHandTrackingInputEventData_t2CAF86D0E0AD87D5996CDB42C70A69861FFB5BF8_m75C5BBCD2BF09D48F54E23E7013039FDC837511B (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  HandTrackingInputEventData_t2CAF86D0E0AD87D5996CDB42C70A69861FFB5BF8 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3A23D9F7447227540EBD1B2DAC93B9DAE350CEB6 (U3CU3Ec_tC3C72E1104F73BBEC60830726FCD3332E25CEC19 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::.ctor(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_m4131730A501F687FF95B2963EABAC7844C6B9859_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_EndSample_m0435B2EE7963614F3D154A83D44269FE4D1A85B0 (intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.IntPtr Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::CreateMarker(System.String,System.UInt16,Unity.Profiling.LowLevel.MarkerFlags,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ProfilerUnsafeUtility_CreateMarker_m419027084C68545B765B9345949D8BFCB96C51AD (String_t* ___name0, uint16_t ___categoryId1, uint16_t ___flags2, int32_t ___metadataCount3, const RuntimeMethod* method);
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::BeginSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_BeginSample_m1B2CAD1BC7C7C390514317A8D51FB798D4622AE4 (intptr_t ___markerPtr0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::.ctor(Microsoft.MixedReality.Toolkit.Input.GazeProvider,System.String,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,UnityEngine.LayerMask[],System.Single,UnityEngine.Transform,Microsoft.MixedReality.Toolkit.Physics.BaseRayStabilizer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalGazePointer__ctor_m875AFC6A001883D6B092F3464F0AE5504FCCFB7E (InternalGazePointer_t5FD72E3EF2FD019DACE01F68467E178E1D617598 * __this, GazeProvider_t2BB12BA2FA0ECEE3BEA51CC14F92FE1A440009CE * ___gazeProvider0, String_t* ___pointerName1, RuntimeObject* ___inputSourceParent2, LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* ___raycastLayerMasks3, float ___pointerExtent4, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___gazeTransform5, BaseRayStabilizer_t58B050CF1A58AAA5697D78780C43520C1AA7B0F3 * ___stabilizer6, const RuntimeMethod* method)
{
	{
		// : base(pointerName, inputSourceParent)
		String_t* L_0 = ___pointerName1;
		RuntimeObject* L_1 = ___inputSourceParent2;
		GenericPointer__ctor_mB04E34CAAE7557E036880C0F3943B001887441E3(__this, L_0, L_1, /*hidden argument*/NULL);
		// this.gazeProvider = gazeProvider;
		GazeProvider_t2BB12BA2FA0ECEE3BEA51CC14F92FE1A440009CE * L_2 = ___gazeProvider0;
		__this->set_gazeProvider_20(L_2);
		// PrioritizedLayerMasksOverride = raycastLayerMasks;
		LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* L_3 = ___raycastLayerMasks3;
		GenericPointer_set_PrioritizedLayerMasksOverride_mBE1F77B73EDCF92B7E6A854662AD38DCCB94FCCE_inline(__this, L_3, /*hidden argument*/NULL);
		// this.pointerExtent = pointerExtent;
		float L_4 = ___pointerExtent4;
		__this->set_pointerExtent_23(L_4);
		// this.gazeTransform = gazeTransform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = ___gazeTransform5;
		__this->set_gazeTransform_18(L_5);
		// this.stabilizer = stabilizer;
		BaseRayStabilizer_t58B050CF1A58AAA5697D78780C43520C1AA7B0F3 * L_6 = ___stabilizer6;
		__this->set_stabilizer_19(L_6);
		// IsInteractionEnabled = true;
		GenericPointer_set_IsInteractionEnabled_m2EABD0DA332BFD75F2247EE354126C1E58234FA8(__this, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::get_Controller()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InternalGazePointer_get_Controller_m4D3EE69F242F665BD90E5C283E02F76B479A5353 (InternalGazePointer_t5FD72E3EF2FD019DACE01F68467E178E1D617598 * __this, const RuntimeMethod* method)
{
	{
		// public override IMixedRealityController Controller { get; set; }
		RuntimeObject* L_0 = __this->get_U3CControllerU3Ek__BackingField_21();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::set_Controller(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalGazePointer_set_Controller_m77896D6AE12CA7BD7E76DCEAECEFE0F2849143EB (InternalGazePointer_t5FD72E3EF2FD019DACE01F68467E178E1D617598 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// public override IMixedRealityController Controller { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CControllerU3Ek__BackingField_21(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::get_InputSourceParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InternalGazePointer_get_InputSourceParent_mF4BEB3C84C0FA7BD1EF108AA9BB94442D0E5D71C (InternalGazePointer_t5FD72E3EF2FD019DACE01F68467E178E1D617598 * __this, const RuntimeMethod* method)
{
	{
		// public override IMixedRealityInputSource InputSourceParent { get; protected set; }
		RuntimeObject* L_0 = __this->get_U3CInputSourceParentU3Ek__BackingField_22();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::set_InputSourceParent(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalGazePointer_set_InputSourceParent_m27D1C357F3068C8A9DDB7EC1CDE5CE0927DA2C56 (InternalGazePointer_t5FD72E3EF2FD019DACE01F68467E178E1D617598 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// public override IMixedRealityInputSource InputSourceParent { get; protected set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CInputSourceParentU3Ek__BackingField_22(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::get_PointerExtent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InternalGazePointer_get_PointerExtent_m6E4152E9845463B4F1FC353CF9F0A53C93F4183F (InternalGazePointer_t5FD72E3EF2FD019DACE01F68467E178E1D617598 * __this, const RuntimeMethod* method)
{
	{
		// get => pointerExtent;
		float L_0 = __this->get_pointerExtent_23();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::set_PointerExtent(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalGazePointer_set_PointerExtent_m8CDF79127751BDF1E07DEAB9C603924B08D571F0 (InternalGazePointer_t5FD72E3EF2FD019DACE01F68467E178E1D617598 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => pointerExtent = value;
		float L_0 = ___value0;
		__this->set_pointerExtent_23(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::SetGazeInputSourceParent(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalGazePointer_SetGazeInputSourceParent_mD039B84F4CA6F3C5E1CFCC097E350130CA592718 (InternalGazePointer_t5FD72E3EF2FD019DACE01F68467E178E1D617598 * __this, RuntimeObject* ___gazeInputSource0, const RuntimeMethod* method)
{
	{
		// InputSourceParent = gazeInputSource;
		RuntimeObject* L_0 = ___gazeInputSource0;
		VirtActionInvoker1< RuntimeObject* >::Invoke(43 /* System.Void Microsoft.MixedReality.Toolkit.Input.GenericPointer::set_InputSourceParent(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource) */, __this, L_0);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::OnPreSceneQuery()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalGazePointer_OnPreSceneQuery_m4DCF1378CDDD78EA420A0089E211A1160CA6D5D2 (InternalGazePointer_t5FD72E3EF2FD019DACE01F68467E178E1D617598 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalGazePointer_t5FD72E3EF2FD019DACE01F68467E178E1D617598_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityPlayspace_tB042F3BBDAE40F837EADC2D954C495B575DFE3C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// using (OnPreSceneQueryPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(InternalGazePointer_t5FD72E3EF2FD019DACE01F68467E178E1D617598_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((InternalGazePointer_t5FD72E3EF2FD019DACE01F68467E178E1D617598_StaticFields*)il2cpp_codegen_static_fields_for(InternalGazePointer_t5FD72E3EF2FD019DACE01F68467E178E1D617598_il2cpp_TypeInfo_var))->get_OnPreSceneQueryPerfMarker_27();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// if (gazeProvider.IsEyeTrackingEnabledAndValid)
			GazeProvider_t2BB12BA2FA0ECEE3BEA51CC14F92FE1A440009CE * L_2 = __this->get_gazeProvider_20();
			NullCheck(L_2);
			bool L_3;
			L_3 = GazeProvider_get_IsEyeTrackingEnabledAndValid_m930230572752B6F0B0C743E48BC9D194EF176D07(L_2, /*hidden argument*/NULL);
			if (!L_3)
			{
				goto IL_005b;
			}
		}

IL_001b:
		{
			// gazeProvider.gazeInputSource.SourceType = InputSourceType.Eyes;
			GazeProvider_t2BB12BA2FA0ECEE3BEA51CC14F92FE1A440009CE * L_4 = __this->get_gazeProvider_20();
			NullCheck(L_4);
			BaseGenericInputSource_t2C53C81AABEABD940B6C53D893C0AB19301845A9 * L_5 = L_4->get_gazeInputSource_15();
			NullCheck(L_5);
			BaseGenericInputSource_set_SourceType_m3108402D6C3E3176E7D1537CF3C95C8B589FA922_inline(L_5, 5, /*hidden argument*/NULL);
			// newGazeOrigin = gazeProvider.LatestEyeGaze.origin;
			GazeProvider_t2BB12BA2FA0ECEE3BEA51CC14F92FE1A440009CE * L_6 = __this->get_gazeProvider_20();
			NullCheck(L_6);
			Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_7;
			L_7 = GazeProvider_get_LatestEyeGaze_mA4398E6DE76CCB7CB32A5D52391563ABBB9013C5_inline(L_6, /*hidden argument*/NULL);
			V_5 = L_7;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
			L_8 = Ray_get_origin_m0C1B2BFF99CDF5231AC29AC031C161F55B53C1D0((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_5), /*hidden argument*/NULL);
			V_2 = L_8;
			// newGazeNormal = gazeProvider.LatestEyeGaze.direction;
			GazeProvider_t2BB12BA2FA0ECEE3BEA51CC14F92FE1A440009CE * L_9 = __this->get_gazeProvider_20();
			NullCheck(L_9);
			Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_10;
			L_10 = GazeProvider_get_LatestEyeGaze_mA4398E6DE76CCB7CB32A5D52391563ABBB9013C5_inline(L_9, /*hidden argument*/NULL);
			V_5 = L_10;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
			L_11 = Ray_get_direction_m2B31F86F19B64474A901B28D3808011AE7A13EFC((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_5), /*hidden argument*/NULL);
			V_3 = L_11;
			// }
			goto IL_0145;
		}

IL_005b:
		{
			// gazeProvider.gazeInputSource.SourceType = InputSourceType.Head;
			GazeProvider_t2BB12BA2FA0ECEE3BEA51CC14F92FE1A440009CE * L_12 = __this->get_gazeProvider_20();
			NullCheck(L_12);
			BaseGenericInputSource_t2C53C81AABEABD940B6C53D893C0AB19301845A9 * L_13 = L_12->get_gazeInputSource_15();
			NullCheck(L_13);
			BaseGenericInputSource_set_SourceType_m3108402D6C3E3176E7D1537CF3C95C8B589FA922_inline(L_13, 4, /*hidden argument*/NULL);
			// if (gazeProvider.UseHeadGazeOverride && gazeProvider.overrideHeadPosition.HasValue && gazeProvider.overrideHeadForward.HasValue)
			GazeProvider_t2BB12BA2FA0ECEE3BEA51CC14F92FE1A440009CE * L_14 = __this->get_gazeProvider_20();
			NullCheck(L_14);
			bool L_15;
			L_15 = GazeProvider_get_UseHeadGazeOverride_mAB00CEBDC3E34FF24C318674C3B20169A81DB000_inline(L_14, /*hidden argument*/NULL);
			if (!L_15)
			{
				goto IL_00e3;
			}
		}

IL_0079:
		{
			GazeProvider_t2BB12BA2FA0ECEE3BEA51CC14F92FE1A440009CE * L_16 = __this->get_gazeProvider_20();
			NullCheck(L_16);
			Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * L_17 = L_16->get_address_of_overrideHeadPosition_27();
			bool L_18;
			L_18 = Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_inline((Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)L_17, /*hidden argument*/Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_RuntimeMethod_var);
			if (!L_18)
			{
				goto IL_00e3;
			}
		}

IL_008b:
		{
			GazeProvider_t2BB12BA2FA0ECEE3BEA51CC14F92FE1A440009CE * L_19 = __this->get_gazeProvider_20();
			NullCheck(L_19);
			Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * L_20 = L_19->get_address_of_overrideHeadForward_28();
			bool L_21;
			L_21 = Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_inline((Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)L_20, /*hidden argument*/Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_RuntimeMethod_var);
			if (!L_21)
			{
				goto IL_00e3;
			}
		}

IL_009d:
		{
			// newGazeOrigin = gazeProvider.overrideHeadPosition.Value;
			GazeProvider_t2BB12BA2FA0ECEE3BEA51CC14F92FE1A440009CE * L_22 = __this->get_gazeProvider_20();
			NullCheck(L_22);
			Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * L_23 = L_22->get_address_of_overrideHeadPosition_27();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
			L_24 = Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B((Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)L_23, /*hidden argument*/Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B_RuntimeMethod_var);
			V_2 = L_24;
			// newGazeNormal = gazeProvider.overrideHeadForward.Value;
			GazeProvider_t2BB12BA2FA0ECEE3BEA51CC14F92FE1A440009CE * L_25 = __this->get_gazeProvider_20();
			NullCheck(L_25);
			Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * L_26 = L_25->get_address_of_overrideHeadForward_28();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
			L_27 = Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B((Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)L_26, /*hidden argument*/Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B_RuntimeMethod_var);
			V_3 = L_27;
			// gazeProvider.overrideHeadPosition = null;
			GazeProvider_t2BB12BA2FA0ECEE3BEA51CC14F92FE1A440009CE * L_28 = __this->get_gazeProvider_20();
			NullCheck(L_28);
			Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * L_29 = L_28->get_address_of_overrideHeadPosition_27();
			il2cpp_codegen_initobj(L_29, sizeof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 ));
			// gazeProvider.overrideHeadForward = null;
			GazeProvider_t2BB12BA2FA0ECEE3BEA51CC14F92FE1A440009CE * L_30 = __this->get_gazeProvider_20();
			NullCheck(L_30);
			Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * L_31 = L_30->get_address_of_overrideHeadForward_28();
			il2cpp_codegen_initobj(L_31, sizeof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 ));
			// }
			goto IL_00fb;
		}

IL_00e3:
		{
			// newGazeOrigin = gazeTransform.position;
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32 = __this->get_gazeTransform_18();
			NullCheck(L_32);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
			L_33 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_32, /*hidden argument*/NULL);
			V_2 = L_33;
			// newGazeNormal = gazeTransform.forward;
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_34 = __this->get_gazeTransform_18();
			NullCheck(L_34);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
			L_35 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_34, /*hidden argument*/NULL);
			V_3 = L_35;
		}

IL_00fb:
		{
			// if (stabilizer != null)
			BaseRayStabilizer_t58B050CF1A58AAA5697D78780C43520C1AA7B0F3 * L_36 = __this->get_stabilizer_19();
			if (!L_36)
			{
				goto IL_0145;
			}
		}

IL_0103:
		{
			// stabilizer.UpdateStability(MixedRealityPlayspace.InverseTransformPoint(newGazeOrigin), MixedRealityPlayspace.InverseTransformDirection(newGazeNormal));
			BaseRayStabilizer_t58B050CF1A58AAA5697D78780C43520C1AA7B0F3 * L_37 = __this->get_stabilizer_19();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPlayspace_tB042F3BBDAE40F837EADC2D954C495B575DFE3C0_il2cpp_TypeInfo_var);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
			L_39 = MixedRealityPlayspace_InverseTransformPoint_m5B972D5A142C5C9E15863D88DF87AB8C207CC163(L_38, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40 = V_3;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
			L_41 = MixedRealityPlayspace_InverseTransformDirection_m3A760FA0F189D2F4B41FB3DEEA467A63772DE44F(L_40, /*hidden argument*/NULL);
			NullCheck(L_37);
			VirtActionInvoker2< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(13 /* System.Void Microsoft.MixedReality.Toolkit.Physics.BaseRayStabilizer::UpdateStability(UnityEngine.Vector3,UnityEngine.Vector3) */, L_37, L_39, L_41);
			// newGazeOrigin = MixedRealityPlayspace.TransformPoint(stabilizer.StablePosition);
			BaseRayStabilizer_t58B050CF1A58AAA5697D78780C43520C1AA7B0F3 * L_42 = __this->get_stabilizer_19();
			NullCheck(L_42);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43;
			L_43 = VirtFuncInvoker0< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(9 /* UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.BaseRayStabilizer::get_StablePosition() */, L_42);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44;
			L_44 = MixedRealityPlayspace_TransformPoint_m7BED771C7462B4F30B55BD4899753209E7035077(L_43, /*hidden argument*/NULL);
			V_2 = L_44;
			// newGazeNormal = MixedRealityPlayspace.TransformDirection(stabilizer.StableRay.direction);
			BaseRayStabilizer_t58B050CF1A58AAA5697D78780C43520C1AA7B0F3 * L_45 = __this->get_stabilizer_19();
			NullCheck(L_45);
			Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_46;
			L_46 = VirtFuncInvoker0< Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  >::Invoke(11 /* UnityEngine.Ray Microsoft.MixedReality.Toolkit.Physics.BaseRayStabilizer::get_StableRay() */, L_45);
			V_5 = L_46;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47;
			L_47 = Ray_get_direction_m2B31F86F19B64474A901B28D3808011AE7A13EFC((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_5), /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48;
			L_48 = MixedRealityPlayspace_TransformDirection_mFA0B09CFA5D79FAC7F6C17685BAAB65D3BB5C2A8(L_47, /*hidden argument*/NULL);
			V_3 = L_48;
		}

IL_0145:
		{
			// Vector3 endPoint = newGazeOrigin + (newGazeNormal * pointerExtent);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_49 = V_2;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50 = V_3;
			float L_51 = __this->get_pointerExtent_23();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52;
			L_52 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_50, L_51, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_53;
			L_53 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_49, L_52, /*hidden argument*/NULL);
			V_4 = L_53;
			// Rays[0].UpdateRayStep(ref newGazeOrigin, ref endPoint);
			RayStepU5BU5D_t3414C621E03C24B384171E375117034E14C9F871* L_54;
			L_54 = GenericPointer_get_Rays_m2A2A78170E7E1623B5422A22FD6C0785FDB51F4D_inline(__this, /*hidden argument*/NULL);
			NullCheck(L_54);
			RayStep_UpdateRayStep_m8405360336BED7EE99E62C05499FEFAE3E856A55((RayStep_tDD523966EB857DFE1FA64A404F585D84E78FAE8A *)((L_54)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_4), /*hidden argument*/NULL);
			// gazeProvider.HitPosition = Rays[0].Origin + (gazeProvider.lastHitDistance * Rays[0].Direction);
			GazeProvider_t2BB12BA2FA0ECEE3BEA51CC14F92FE1A440009CE * L_55 = __this->get_gazeProvider_20();
			RayStepU5BU5D_t3414C621E03C24B384171E375117034E14C9F871* L_56;
			L_56 = GenericPointer_get_Rays_m2A2A78170E7E1623B5422A22FD6C0785FDB51F4D_inline(__this, /*hidden argument*/NULL);
			NullCheck(L_56);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57;
			L_57 = RayStep_get_Origin_mF092B32DA45F09691CD13C850B8695B57BA73D7A_inline((RayStep_tDD523966EB857DFE1FA64A404F585D84E78FAE8A *)((L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
			GazeProvider_t2BB12BA2FA0ECEE3BEA51CC14F92FE1A440009CE * L_58 = __this->get_gazeProvider_20();
			NullCheck(L_58);
			float L_59 = L_58->get_lastHitDistance_24();
			RayStepU5BU5D_t3414C621E03C24B384171E375117034E14C9F871* L_60;
			L_60 = GenericPointer_get_Rays_m2A2A78170E7E1623B5422A22FD6C0785FDB51F4D_inline(__this, /*hidden argument*/NULL);
			NullCheck(L_60);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_61;
			L_61 = RayStep_get_Direction_m30554C81FC20D5DA3CB243343E16836DB3659B02_inline((RayStep_tDD523966EB857DFE1FA64A404F585D84E78FAE8A *)((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_62;
			L_62 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline(L_59, L_61, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_63;
			L_63 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_57, L_62, /*hidden argument*/NULL);
			NullCheck(L_55);
			GazeProvider_set_HitPosition_mFC8DD2412D3DE3B7FE1F1FA36D39F809EB858B01_inline(L_55, L_63, /*hidden argument*/NULL);
			// }
			IL2CPP_LEAVE(0x1C0, FINALLY_01b2);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01b2;
	}

FINALLY_01b2:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(434)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(434)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1C0, IL_01c0)
	}

IL_01c0:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::OnPostSceneQuery()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalGazePointer_OnPostSceneQuery_m24788B59A0A82EFC195A0A26DDD407D6DD6B1619 (InternalGazePointer_t5FD72E3EF2FD019DACE01F68467E178E1D617598 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_t9EE794F39C54151DD16EC86D9F7B1FB2D5D2FF96_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t0F2E23FCBB07AD0BC4108E1F90D94B8EBB6C8892_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalGazePointer_t5FD72E3EF2FD019DACE01F68467E178E1D617598_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// using (OnPostSceneQueryPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(InternalGazePointer_t5FD72E3EF2FD019DACE01F68467E178E1D617598_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((InternalGazePointer_t5FD72E3EF2FD019DACE01F68467E178E1D617598_StaticFields*)il2cpp_codegen_static_fields_for(InternalGazePointer_t5FD72E3EF2FD019DACE01F68467E178E1D617598_il2cpp_TypeInfo_var))->get_OnPostSceneQueryPerfMarker_28();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// if (isDown)
			bool L_2 = __this->get_isDown_24();
			if (!L_2)
			{
				goto IL_0032;
			}
		}

IL_0016:
		{
			// CoreServices.InputSystem.RaisePointerDragged(this, MixedRealityInputAction.None, currentHandedness, currentInputSource);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t9EE794F39C54151DD16EC86D9F7B1FB2D5D2FF96_il2cpp_TypeInfo_var);
			RuntimeObject* L_3;
			L_3 = CoreServices_get_InputSystem_m12A0174735CF9D34E818B5B78075DFB277CDB164(/*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58_il2cpp_TypeInfo_var);
			MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58  L_4;
			L_4 = MixedRealityInputAction_get_None_mFC3FA7679A1909B645EC4A1193841640E491CE7A_inline(/*hidden argument*/NULL);
			uint8_t L_5 = __this->get_currentHandedness_26();
			RuntimeObject* L_6 = __this->get_currentInputSource_25();
			NullCheck(L_3);
			InterfaceActionInvoker4< RuntimeObject*, MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58 , uint8_t, RuntimeObject* >::Invoke(36 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePointerDragged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource) */, IMixedRealityInputSystem_t0F2E23FCBB07AD0BC4108E1F90D94B8EBB6C8892_il2cpp_TypeInfo_var, L_3, __this, L_4, L_5, L_6);
		}

IL_0032:
		{
			// }
			IL2CPP_LEAVE(0x42, FINALLY_0034);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0034;
	}

FINALLY_0034:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(52)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(52)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x42, IL_0042)
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::OnPreCurrentPointerTargetChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalGazePointer_OnPreCurrentPointerTargetChange_mE5AA2419914F7A525921D21842B21FD4D1C91842 (InternalGazePointer_t5FD72E3EF2FD019DACE01F68467E178E1D617598 * __this, const RuntimeMethod* method)
{
	{
		// public override void OnPreCurrentPointerTargetChange() { }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  InternalGazePointer_get_Position_m271F48B949C60F102869AF5DFA9C3CEB719BAD16 (InternalGazePointer_t5FD72E3EF2FD019DACE01F68467E178E1D617598 * __this, const RuntimeMethod* method)
{
	{
		// public override Vector3 Position => gazeTransform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_gazeTransform_18();
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::get_Rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  InternalGazePointer_get_Rotation_m37278688FCDF4A09EDD8A1CA6E5167FB3870747E (InternalGazePointer_t5FD72E3EF2FD019DACE01F68467E178E1D617598 * __this, const RuntimeMethod* method)
{
	{
		// public override Quaternion Rotation => gazeTransform.rotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_gazeTransform_18();
		NullCheck(L_0);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1;
		L_1 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalGazePointer_Reset_mBAABC28BE0C070C34C3F1C273507C5FD77C11994 (InternalGazePointer_t5FD72E3EF2FD019DACE01F68467E178E1D617598 * __this, const RuntimeMethod* method)
{
	{
		// Controller = null;
		VirtActionInvoker1< RuntimeObject* >::Invoke(41 /* System.Void Microsoft.MixedReality.Toolkit.Input.GenericPointer::set_Controller(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController) */, __this, (RuntimeObject*)NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::RaisePointerDown(Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalGazePointer_RaisePointerDown_m67211D7FF96C44A4ABE228016BBF2AD0DEA1F49F (InternalGazePointer_t5FD72E3EF2FD019DACE01F68467E178E1D617598 * __this, MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58  ___mixedRealityInputAction0, uint8_t ___handedness1, RuntimeObject* ___inputSource2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_t9EE794F39C54151DD16EC86D9F7B1FB2D5D2FF96_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t0F2E23FCBB07AD0BC4108E1F90D94B8EBB6C8892_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// isDown = true;
		__this->set_isDown_24((bool)1);
		// currentHandedness = handedness;
		uint8_t L_0 = ___handedness1;
		__this->set_currentHandedness_26(L_0);
		// currentInputSource = inputSource;
		RuntimeObject* L_1 = ___inputSource2;
		__this->set_currentInputSource_25(L_1);
		// CoreServices.InputSystem?.RaisePointerDown(this, mixedRealityInputAction, handedness, inputSource);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t9EE794F39C54151DD16EC86D9F7B1FB2D5D2FF96_il2cpp_TypeInfo_var);
		RuntimeObject* L_2;
		L_2 = CoreServices_get_InputSystem_m12A0174735CF9D34E818B5B78075DFB277CDB164(/*hidden argument*/NULL);
		RuntimeObject* L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_001f;
		}
	}
	{
		return;
	}

IL_001f:
	{
		MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58  L_4 = ___mixedRealityInputAction0;
		uint8_t L_5 = ___handedness1;
		RuntimeObject* L_6 = ___inputSource2;
		NullCheck(G_B2_0);
		InterfaceActionInvoker4< RuntimeObject*, MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58 , uint8_t, RuntimeObject* >::Invoke(35 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePointerDown(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource) */, IMixedRealityInputSystem_t0F2E23FCBB07AD0BC4108E1F90D94B8EBB6C8892_il2cpp_TypeInfo_var, G_B2_0, __this, L_4, L_5, L_6);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::RaisePointerUp(Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalGazePointer_RaisePointerUp_m43CE33B72EE4500CF27807195877DC3FE04442BB (InternalGazePointer_t5FD72E3EF2FD019DACE01F68467E178E1D617598 * __this, MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58  ___mixedRealityInputAction0, uint8_t ___handedness1, RuntimeObject* ___inputSource2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_t9EE794F39C54151DD16EC86D9F7B1FB2D5D2FF96_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t0F2E23FCBB07AD0BC4108E1F90D94B8EBB6C8892_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	{
		// isDown = false;
		__this->set_isDown_24((bool)0);
		// currentHandedness = Handedness.None;
		__this->set_currentHandedness_26(0);
		// currentInputSource = null;
		__this->set_currentInputSource_25((RuntimeObject*)NULL);
		// CoreServices.InputSystem?.RaisePointerClicked(this, mixedRealityInputAction, 0, handedness, inputSource);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t9EE794F39C54151DD16EC86D9F7B1FB2D5D2FF96_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = CoreServices_get_InputSystem_m12A0174735CF9D34E818B5B78075DFB277CDB164(/*hidden argument*/NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0020;
		}
	}
	{
		goto IL_002a;
	}

IL_0020:
	{
		MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58  L_2 = ___mixedRealityInputAction0;
		uint8_t L_3 = ___handedness1;
		RuntimeObject* L_4 = ___inputSource2;
		NullCheck(G_B2_0);
		InterfaceActionInvoker5< RuntimeObject*, MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58 , int32_t, uint8_t, RuntimeObject* >::Invoke(37 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePointerClicked(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,System.Int32,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource) */, IMixedRealityInputSystem_t0F2E23FCBB07AD0BC4108E1F90D94B8EBB6C8892_il2cpp_TypeInfo_var, G_B2_0, __this, L_2, 0, L_3, L_4);
	}

IL_002a:
	{
		// CoreServices.InputSystem?.RaisePointerUp(this, mixedRealityInputAction, handedness, inputSource);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t9EE794F39C54151DD16EC86D9F7B1FB2D5D2FF96_il2cpp_TypeInfo_var);
		RuntimeObject* L_5;
		L_5 = CoreServices_get_InputSystem_m12A0174735CF9D34E818B5B78075DFB277CDB164(/*hidden argument*/NULL);
		RuntimeObject* L_6 = L_5;
		G_B4_0 = L_6;
		if (L_6)
		{
			G_B5_0 = L_6;
			goto IL_0034;
		}
	}
	{
		return;
	}

IL_0034:
	{
		MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58  L_7 = ___mixedRealityInputAction0;
		uint8_t L_8 = ___handedness1;
		RuntimeObject* L_9 = ___inputSource2;
		NullCheck(G_B5_0);
		InterfaceActionInvoker4< RuntimeObject*, MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58 , uint8_t, RuntimeObject* >::Invoke(38 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePointerUp(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource) */, IMixedRealityInputSystem_t0F2E23FCBB07AD0BC4108E1F90D94B8EBB6C8892_il2cpp_TypeInfo_var, G_B5_0, __this, L_7, L_8, L_9);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalGazePointer__cctor_m5F917223ED1BA16B02D4D042CE5BBCA763514369 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalGazePointer_t5FD72E3EF2FD019DACE01F68467E178E1D617598_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral033695E8FCCB2AD8ED3D6CA47B0D7673411B3701);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8646EE7CB5D6509C0ECF1B9EA3BEB8B77A6CB742);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker OnPreSceneQueryPerfMarker = new ProfilerMarker("[MRTK] InternalGazePointer.OnPreSceneQuery");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_0), _stringLiteral033695E8FCCB2AD8ED3D6CA47B0D7673411B3701, /*hidden argument*/NULL);
		((InternalGazePointer_t5FD72E3EF2FD019DACE01F68467E178E1D617598_StaticFields*)il2cpp_codegen_static_fields_for(InternalGazePointer_t5FD72E3EF2FD019DACE01F68467E178E1D617598_il2cpp_TypeInfo_var))->set_OnPreSceneQueryPerfMarker_27(L_0);
		// private static readonly ProfilerMarker OnPostSceneQueryPerfMarker = new ProfilerMarker("[MRTK] InternalGazePointer.OnPostSceneQuery");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_1), _stringLiteral8646EE7CB5D6509C0ECF1B9EA3BEB8B77A6CB742, /*hidden argument*/NULL);
		((InternalGazePointer_t5FD72E3EF2FD019DACE01F68467E178E1D617598_StaticFields*)il2cpp_codegen_static_fields_for(InternalGazePointer_t5FD72E3EF2FD019DACE01F68467E178E1D617598_il2cpp_TypeInfo_var))->set_OnPostSceneQueryPerfMarker_28(L_1);
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
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m9D8F548CA9F1A7CFF769CD92CA35FB970B3F58C6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tBAE32D5B0DA26C4B975A203181ABCC03F745703A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tBAE32D5B0DA26C4B975A203181ABCC03F745703A * L_0 = (U3CU3Ec_tBAE32D5B0DA26C4B975A203181ABCC03F745703A *)il2cpp_codegen_object_new(U3CU3Ec_tBAE32D5B0DA26C4B975A203181ABCC03F745703A_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m1DF6B30FDEEE802E4C2D0077BF260022AED7C291(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tBAE32D5B0DA26C4B975A203181ABCC03F745703A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBAE32D5B0DA26C4B975A203181ABCC03F745703A_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1DF6B30FDEEE802E4C2D0077BF260022AED7C291 (U3CU3Ec_tBAE32D5B0DA26C4B975A203181ABCC03F745703A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<>c::<EnsureInputSystemValid>b__4_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CEnsureInputSystemValidU3Eb__4_0_mBBE93F7974BFB722C252E4B59D547181C0DB787D (U3CU3Ec_tBAE32D5B0DA26C4B975A203181ABCC03F745703A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_t9EE794F39C54151DD16EC86D9F7B1FB2D5D2FF96_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// await new WaitUntil(() => CoreServices.InputSystem != null);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t9EE794F39C54151DD16EC86D9F7B1FB2D5D2FF96_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = CoreServices_get_InputSystem_m12A0174735CF9D34E818B5B78075DFB277CDB164(/*hidden argument*/NULL);
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
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
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<EnsureInputSystemValid>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnsureInputSystemValidU3Ed__4_MoveNext_m86A5FBF9B99F120D4F3F59AA7D962A52E11FF1C7 (U3CEnsureInputSystemValidU3Ed__4_tC0875EF4C80B5618E53ED236FC804960EABC8CD8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tC457780E69748E91DD44509C87CDD5DE74E87B2A_TisU3CEnsureInputSystemValidU3Ed__4_tC0875EF4C80B5618E53ED236FC804960EABC8CD8_m4B95E8C936F9E6A54CF21F2C49A44DECA7CCE9C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_t9EE794F39C54151DD16EC86D9F7B1FB2D5D2FF96_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_tC457780E69748E91DD44509C87CDD5DE74E87B2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CEnsureInputSystemValidU3Eb__4_0_mBBE93F7974BFB722C252E4B59D547181C0DB787D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tBAE32D5B0DA26C4B975A203181ABCC03F745703A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SimpleCoroutineAwaiter_tC457780E69748E91DD44509C87CDD5DE74E87B2A * V_1 = NULL;
	Exception_t * V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * G_B5_0 = NULL;
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * G_B4_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0063;
			}
		}

IL_000a:
		{
			// if (CoreServices.InputSystem == null)
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t9EE794F39C54151DD16EC86D9F7B1FB2D5D2FF96_il2cpp_TypeInfo_var);
			RuntimeObject* L_2;
			L_2 = CoreServices_get_InputSystem_m12A0174735CF9D34E818B5B78075DFB277CDB164(/*hidden argument*/NULL);
			if (L_2)
			{
				goto IL_0085;
			}
		}

IL_0011:
		{
			// await new WaitUntil(() => CoreServices.InputSystem != null);
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tBAE32D5B0DA26C4B975A203181ABCC03F745703A_il2cpp_TypeInfo_var);
			Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_3 = ((U3CU3Ec_tBAE32D5B0DA26C4B975A203181ABCC03F745703A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBAE32D5B0DA26C4B975A203181ABCC03F745703A_il2cpp_TypeInfo_var))->get_U3CU3E9__4_0_1();
			Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_4 = L_3;
			G_B4_0 = L_4;
			if (L_4)
			{
				G_B5_0 = L_4;
				goto IL_0030;
			}
		}

IL_0019:
		{
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tBAE32D5B0DA26C4B975A203181ABCC03F745703A_il2cpp_TypeInfo_var);
			U3CU3Ec_tBAE32D5B0DA26C4B975A203181ABCC03F745703A * L_5 = ((U3CU3Ec_tBAE32D5B0DA26C4B975A203181ABCC03F745703A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBAE32D5B0DA26C4B975A203181ABCC03F745703A_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
			Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_6 = (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)il2cpp_codegen_object_new(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
			Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec_U3CEnsureInputSystemValidU3Eb__4_0_mBBE93F7974BFB722C252E4B59D547181C0DB787D_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
			Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_7 = L_6;
			((U3CU3Ec_tBAE32D5B0DA26C4B975A203181ABCC03F745703A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBAE32D5B0DA26C4B975A203181ABCC03F745703A_il2cpp_TypeInfo_var))->set_U3CU3E9__4_0_1(L_7);
			G_B5_0 = L_7;
		}

IL_0030:
		{
			WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * L_8 = (WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 *)il2cpp_codegen_object_new(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var);
			WaitUntil__ctor_m4D825CB1C0570631514BFF24AEF1FB17D646C76F(L_8, G_B5_0, /*hidden argument*/NULL);
			SimpleCoroutineAwaiter_tC457780E69748E91DD44509C87CDD5DE74E87B2A * L_9;
			L_9 = AwaiterExtensions_GetAwaiter_mCDB81F65332A33C16D44E535218CD84B0CB91AB0(L_8, /*hidden argument*/NULL);
			V_1 = L_9;
			SimpleCoroutineAwaiter_tC457780E69748E91DD44509C87CDD5DE74E87B2A * L_10 = V_1;
			NullCheck(L_10);
			bool L_11;
			L_11 = SimpleCoroutineAwaiter_get_IsCompleted_m33374A3B036EAA2C2FD8C9622619A5FE43A0805D_inline(L_10, /*hidden argument*/NULL);
			if (L_11)
			{
				goto IL_007f;
			}
		}

IL_0043:
		{
			int32_t L_12 = 0;
			V_0 = L_12;
			__this->set_U3CU3E1__state_0(L_12);
			SimpleCoroutineAwaiter_tC457780E69748E91DD44509C87CDD5DE74E87B2A * L_13 = V_1;
			__this->set_U3CU3Eu__1_2(L_13);
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_14 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tC457780E69748E91DD44509C87CDD5DE74E87B2A_TisU3CEnsureInputSystemValidU3Ed__4_tC0875EF4C80B5618E53ED236FC804960EABC8CD8_m4B95E8C936F9E6A54CF21F2C49A44DECA7CCE9C8((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_14, (SimpleCoroutineAwaiter_tC457780E69748E91DD44509C87CDD5DE74E87B2A **)(&V_1), (U3CEnsureInputSystemValidU3Ed__4_tC0875EF4C80B5618E53ED236FC804960EABC8CD8 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tC457780E69748E91DD44509C87CDD5DE74E87B2A_TisU3CEnsureInputSystemValidU3Ed__4_tC0875EF4C80B5618E53ED236FC804960EABC8CD8_m4B95E8C936F9E6A54CF21F2C49A44DECA7CCE9C8_RuntimeMethod_var);
			goto IL_00b1;
		}

IL_0063:
		{
			RuntimeObject * L_15 = __this->get_U3CU3Eu__1_2();
			V_1 = ((SimpleCoroutineAwaiter_tC457780E69748E91DD44509C87CDD5DE74E87B2A *)CastclassClass((RuntimeObject*)L_15, SimpleCoroutineAwaiter_tC457780E69748E91DD44509C87CDD5DE74E87B2A_il2cpp_TypeInfo_var));
			__this->set_U3CU3Eu__1_2(NULL);
			int32_t L_16 = (-1);
			V_0 = L_16;
			__this->set_U3CU3E1__state_0(L_16);
		}

IL_007f:
		{
			SimpleCoroutineAwaiter_tC457780E69748E91DD44509C87CDD5DE74E87B2A * L_17 = V_1;
			NullCheck(L_17);
			SimpleCoroutineAwaiter_GetResult_m004A1C6CFC8858DE017FC884B6EC6BDD950AA47A(L_17, /*hidden argument*/NULL);
		}

IL_0085:
		{
			goto IL_009e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0087;
		}
		throw e;
	}

CATCH_0087:
	{ // begin catch(System.Exception)
		V_2 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_18 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_19 = V_2;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_18, L_19, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b1;
	} // end catch (depth: 1)

IL_009e:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_20 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_20, /*hidden argument*/NULL);
	}

IL_00b1:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CEnsureInputSystemValidU3Ed__4_MoveNext_m86A5FBF9B99F120D4F3F59AA7D962A52E11FF1C7_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CEnsureInputSystemValidU3Ed__4_tC0875EF4C80B5618E53ED236FC804960EABC8CD8 * _thisAdjusted = reinterpret_cast<U3CEnsureInputSystemValidU3Ed__4_tC0875EF4C80B5618E53ED236FC804960EABC8CD8 *>(__this + _offset);
	U3CEnsureInputSystemValidU3Ed__4_MoveNext_m86A5FBF9B99F120D4F3F59AA7D962A52E11FF1C7(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<EnsureInputSystemValid>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnsureInputSystemValidU3Ed__4_SetStateMachine_mCF0060C22C6BDBA954F3C11A52B1EEF1AA1CADA5 (U3CEnsureInputSystemValidU3Ed__4_tC0875EF4C80B5618E53ED236FC804960EABC8CD8 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CEnsureInputSystemValidU3Ed__4_SetStateMachine_mCF0060C22C6BDBA954F3C11A52B1EEF1AA1CADA5_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CEnsureInputSystemValidU3Ed__4_tC0875EF4C80B5618E53ED236FC804960EABC8CD8 * _thisAdjusted = reinterpret_cast<U3CEnsureInputSystemValidU3Ed__4_tC0875EF4C80B5618E53ED236FC804960EABC8CD8 *>(__this + _offset);
	U3CEnsureInputSystemValidU3Ed__4_SetStateMachine_mCF0060C22C6BDBA954F3C11A52B1EEF1AA1CADA5(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<Start>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_MoveNext_mABC4E130C7566A501F7D40AC8E7545812303D336 (U3CStartU3Ed__2_tD6C955B38EB1A50FFA586D07CE43BAF8F4F824AB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__2_tD6C955B38EB1A50FFA586D07CE43BAF8F4F824AB_m32B442736012487FD75779435A2352A36DFD47E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	InputSystemGlobalHandlerListener_t7626F4B8931C8C8AABDC1B0FBC54E86EF67584D5 * V_1 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		InputSystemGlobalHandlerListener_t7626F4B8931C8C8AABDC1B0FBC54E86EF67584D5 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_004e;
			}
		}

IL_0011:
		{
			// if (lateInitialize)
			InputSystemGlobalHandlerListener_t7626F4B8931C8C8AABDC1B0FBC54E86EF67584D5 * L_3 = V_1;
			NullCheck(L_3);
			bool L_4 = L_3->get_lateInitialize_4();
			if (!L_4)
			{
				goto IL_0089;
			}
		}

IL_0019:
		{
			// await EnsureInputSystemValid();
			InputSystemGlobalHandlerListener_t7626F4B8931C8C8AABDC1B0FBC54E86EF67584D5 * L_5 = V_1;
			NullCheck(L_5);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_6;
			L_6 = InputSystemGlobalHandlerListener_EnsureInputSystemValid_m1D04EA8E9E2076DB8D37653B2BC966368E031D3B(L_5, /*hidden argument*/NULL);
			NullCheck(L_6);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_7;
			L_7 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_6, /*hidden argument*/NULL);
			V_2 = L_7;
			bool L_8;
			L_8 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			if (L_8)
			{
				goto IL_006a;
			}
		}

IL_002e:
		{
			int32_t L_9 = 0;
			V_0 = L_9;
			__this->set_U3CU3E1__state_0(L_9);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_10 = V_2;
			__this->set_U3CU3Eu__1_3(L_10);
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_11 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__2_tD6C955B38EB1A50FFA586D07CE43BAF8F4F824AB_m32B442736012487FD75779435A2352A36DFD47E9((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_11, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), (U3CStartU3Ed__2_tD6C955B38EB1A50FFA586D07CE43BAF8F4F824AB *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__2_tD6C955B38EB1A50FFA586D07CE43BAF8F4F824AB_m32B442736012487FD75779435A2352A36DFD47E9_RuntimeMethod_var);
			goto IL_00b5;
		}

IL_004e:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_12 = __this->get_U3CU3Eu__1_3();
			V_2 = L_12;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_13 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_13, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_14 = (-1);
			V_0 = L_14;
			__this->set_U3CU3E1__state_0(L_14);
		}

IL_006a:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			// if (this == null)
			InputSystemGlobalHandlerListener_t7626F4B8931C8C8AABDC1B0FBC54E86EF67584D5 * L_15 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_16;
			L_16 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_15, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_16)
			{
				goto IL_007c;
			}
		}

IL_007a:
		{
			// return;
			goto IL_00a2;
		}

IL_007c:
		{
			// lateInitialize = false;
			InputSystemGlobalHandlerListener_t7626F4B8931C8C8AABDC1B0FBC54E86EF67584D5 * L_17 = V_1;
			NullCheck(L_17);
			L_17->set_lateInitialize_4((bool)0);
			// RegisterHandlers();
			InputSystemGlobalHandlerListener_t7626F4B8931C8C8AABDC1B0FBC54E86EF67584D5 * L_18 = V_1;
			NullCheck(L_18);
			VirtActionInvoker0::Invoke(7 /* System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener::RegisterHandlers() */, L_18);
		}

IL_0089:
		{
			goto IL_00a2;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_008b;
		}
		throw e;
	}

CATCH_008b:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_19 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_20 = V_3;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_19, L_20, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b5;
	} // end catch (depth: 1)

IL_00a2:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_21 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_21, /*hidden argument*/NULL);
	}

IL_00b5:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartU3Ed__2_MoveNext_mABC4E130C7566A501F7D40AC8E7545812303D336_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStartU3Ed__2_tD6C955B38EB1A50FFA586D07CE43BAF8F4F824AB * _thisAdjusted = reinterpret_cast<U3CStartU3Ed__2_tD6C955B38EB1A50FFA586D07CE43BAF8F4F824AB *>(__this + _offset);
	U3CStartU3Ed__2_MoveNext_mABC4E130C7566A501F7D40AC8E7545812303D336(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<Start>d__2::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_SetStateMachine_mA0F8619CCB4F8E11D0DAF03E51A551A35DBC26CF (U3CStartU3Ed__2_tD6C955B38EB1A50FFA586D07CE43BAF8F4F824AB * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartU3Ed__2_SetStateMachine_mA0F8619CCB4F8E11D0DAF03E51A551A35DBC26CF_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStartU3Ed__2_tD6C955B38EB1A50FFA586D07CE43BAF8F4F824AB * _thisAdjusted = reinterpret_cast<U3CStartU3Ed__2_tD6C955B38EB1A50FFA586D07CE43BAF8F4F824AB *>(__this + _offset);
	U3CStartU3Ed__2_SetStateMachine_mA0F8619CCB4F8E11D0DAF03E51A551A35DBC26CF(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mEE3028F96F2369D49F8777A5CB8FC7217F5FA7DD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t5E1E7C2705DC71CED32F326A0D0EDE6498075716_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t5E1E7C2705DC71CED32F326A0D0EDE6498075716 * L_0 = (U3CU3Ec_t5E1E7C2705DC71CED32F326A0D0EDE6498075716 *)il2cpp_codegen_object_new(U3CU3Ec_t5E1E7C2705DC71CED32F326A0D0EDE6498075716_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m074E724F9440AE327A7D7451CCA997EA12EA1EF2(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t5E1E7C2705DC71CED32F326A0D0EDE6498075716_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5E1E7C2705DC71CED32F326A0D0EDE6498075716_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m074E724F9440AE327A7D7451CCA997EA12EA1EF2 (U3CU3Ec_t5E1E7C2705DC71CED32F326A0D0EDE6498075716 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<>c::<EnsureInputSystemValid>b__4_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CEnsureInputSystemValidU3Eb__4_0_m7D559319DA610D4F27C333F3F87867DF9F66DE46 (U3CU3Ec_t5E1E7C2705DC71CED32F326A0D0EDE6498075716 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_t9EE794F39C54151DD16EC86D9F7B1FB2D5D2FF96_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// await new WaitUntil(() => CoreServices.InputSystem != null);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t9EE794F39C54151DD16EC86D9F7B1FB2D5D2FF96_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = CoreServices_get_InputSystem_m12A0174735CF9D34E818B5B78075DFB277CDB164(/*hidden argument*/NULL);
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
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
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<EnsureInputSystemValid>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnsureInputSystemValidU3Ed__4_MoveNext_mE731B05072D07C72C7F86479E7E5D4D2CDEB89DD (U3CEnsureInputSystemValidU3Ed__4_t5957B42D80E6383DCAA61D84E56ABB26A6A110DA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tC457780E69748E91DD44509C87CDD5DE74E87B2A_TisU3CEnsureInputSystemValidU3Ed__4_t5957B42D80E6383DCAA61D84E56ABB26A6A110DA_m37FCB768D1B6DB6B35AD596C8B93D19B2E6F6E2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_t9EE794F39C54151DD16EC86D9F7B1FB2D5D2FF96_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_tC457780E69748E91DD44509C87CDD5DE74E87B2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CEnsureInputSystemValidU3Eb__4_0_m7D559319DA610D4F27C333F3F87867DF9F66DE46_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t5E1E7C2705DC71CED32F326A0D0EDE6498075716_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SimpleCoroutineAwaiter_tC457780E69748E91DD44509C87CDD5DE74E87B2A * V_1 = NULL;
	Exception_t * V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * G_B5_0 = NULL;
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * G_B4_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0063;
			}
		}

IL_000a:
		{
			// if (CoreServices.InputSystem == null)
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t9EE794F39C54151DD16EC86D9F7B1FB2D5D2FF96_il2cpp_TypeInfo_var);
			RuntimeObject* L_2;
			L_2 = CoreServices_get_InputSystem_m12A0174735CF9D34E818B5B78075DFB277CDB164(/*hidden argument*/NULL);
			if (L_2)
			{
				goto IL_0085;
			}
		}

IL_0011:
		{
			// await new WaitUntil(() => CoreServices.InputSystem != null);
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t5E1E7C2705DC71CED32F326A0D0EDE6498075716_il2cpp_TypeInfo_var);
			Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_3 = ((U3CU3Ec_t5E1E7C2705DC71CED32F326A0D0EDE6498075716_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5E1E7C2705DC71CED32F326A0D0EDE6498075716_il2cpp_TypeInfo_var))->get_U3CU3E9__4_0_1();
			Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_4 = L_3;
			G_B4_0 = L_4;
			if (L_4)
			{
				G_B5_0 = L_4;
				goto IL_0030;
			}
		}

IL_0019:
		{
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t5E1E7C2705DC71CED32F326A0D0EDE6498075716_il2cpp_TypeInfo_var);
			U3CU3Ec_t5E1E7C2705DC71CED32F326A0D0EDE6498075716 * L_5 = ((U3CU3Ec_t5E1E7C2705DC71CED32F326A0D0EDE6498075716_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5E1E7C2705DC71CED32F326A0D0EDE6498075716_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
			Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_6 = (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)il2cpp_codegen_object_new(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
			Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec_U3CEnsureInputSystemValidU3Eb__4_0_m7D559319DA610D4F27C333F3F87867DF9F66DE46_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
			Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_7 = L_6;
			((U3CU3Ec_t5E1E7C2705DC71CED32F326A0D0EDE6498075716_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5E1E7C2705DC71CED32F326A0D0EDE6498075716_il2cpp_TypeInfo_var))->set_U3CU3E9__4_0_1(L_7);
			G_B5_0 = L_7;
		}

IL_0030:
		{
			WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * L_8 = (WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 *)il2cpp_codegen_object_new(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var);
			WaitUntil__ctor_m4D825CB1C0570631514BFF24AEF1FB17D646C76F(L_8, G_B5_0, /*hidden argument*/NULL);
			SimpleCoroutineAwaiter_tC457780E69748E91DD44509C87CDD5DE74E87B2A * L_9;
			L_9 = AwaiterExtensions_GetAwaiter_mCDB81F65332A33C16D44E535218CD84B0CB91AB0(L_8, /*hidden argument*/NULL);
			V_1 = L_9;
			SimpleCoroutineAwaiter_tC457780E69748E91DD44509C87CDD5DE74E87B2A * L_10 = V_1;
			NullCheck(L_10);
			bool L_11;
			L_11 = SimpleCoroutineAwaiter_get_IsCompleted_m33374A3B036EAA2C2FD8C9622619A5FE43A0805D_inline(L_10, /*hidden argument*/NULL);
			if (L_11)
			{
				goto IL_007f;
			}
		}

IL_0043:
		{
			int32_t L_12 = 0;
			V_0 = L_12;
			__this->set_U3CU3E1__state_0(L_12);
			SimpleCoroutineAwaiter_tC457780E69748E91DD44509C87CDD5DE74E87B2A * L_13 = V_1;
			__this->set_U3CU3Eu__1_2(L_13);
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_14 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tC457780E69748E91DD44509C87CDD5DE74E87B2A_TisU3CEnsureInputSystemValidU3Ed__4_t5957B42D80E6383DCAA61D84E56ABB26A6A110DA_m37FCB768D1B6DB6B35AD596C8B93D19B2E6F6E2A((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_14, (SimpleCoroutineAwaiter_tC457780E69748E91DD44509C87CDD5DE74E87B2A **)(&V_1), (U3CEnsureInputSystemValidU3Ed__4_t5957B42D80E6383DCAA61D84E56ABB26A6A110DA *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tC457780E69748E91DD44509C87CDD5DE74E87B2A_TisU3CEnsureInputSystemValidU3Ed__4_t5957B42D80E6383DCAA61D84E56ABB26A6A110DA_m37FCB768D1B6DB6B35AD596C8B93D19B2E6F6E2A_RuntimeMethod_var);
			goto IL_00b1;
		}

IL_0063:
		{
			RuntimeObject * L_15 = __this->get_U3CU3Eu__1_2();
			V_1 = ((SimpleCoroutineAwaiter_tC457780E69748E91DD44509C87CDD5DE74E87B2A *)CastclassClass((RuntimeObject*)L_15, SimpleCoroutineAwaiter_tC457780E69748E91DD44509C87CDD5DE74E87B2A_il2cpp_TypeInfo_var));
			__this->set_U3CU3Eu__1_2(NULL);
			int32_t L_16 = (-1);
			V_0 = L_16;
			__this->set_U3CU3E1__state_0(L_16);
		}

IL_007f:
		{
			SimpleCoroutineAwaiter_tC457780E69748E91DD44509C87CDD5DE74E87B2A * L_17 = V_1;
			NullCheck(L_17);
			SimpleCoroutineAwaiter_GetResult_m004A1C6CFC8858DE017FC884B6EC6BDD950AA47A(L_17, /*hidden argument*/NULL);
		}

IL_0085:
		{
			goto IL_009e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0087;
		}
		throw e;
	}

CATCH_0087:
	{ // begin catch(System.Exception)
		V_2 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_18 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_19 = V_2;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_18, L_19, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b1;
	} // end catch (depth: 1)

IL_009e:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_20 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_20, /*hidden argument*/NULL);
	}

IL_00b1:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CEnsureInputSystemValidU3Ed__4_MoveNext_mE731B05072D07C72C7F86479E7E5D4D2CDEB89DD_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CEnsureInputSystemValidU3Ed__4_t5957B42D80E6383DCAA61D84E56ABB26A6A110DA * _thisAdjusted = reinterpret_cast<U3CEnsureInputSystemValidU3Ed__4_t5957B42D80E6383DCAA61D84E56ABB26A6A110DA *>(__this + _offset);
	U3CEnsureInputSystemValidU3Ed__4_MoveNext_mE731B05072D07C72C7F86479E7E5D4D2CDEB89DD(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<EnsureInputSystemValid>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnsureInputSystemValidU3Ed__4_SetStateMachine_mE7700C402013A49F06A5B83BCC6A97A6A252F148 (U3CEnsureInputSystemValidU3Ed__4_t5957B42D80E6383DCAA61D84E56ABB26A6A110DA * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CEnsureInputSystemValidU3Ed__4_SetStateMachine_mE7700C402013A49F06A5B83BCC6A97A6A252F148_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CEnsureInputSystemValidU3Ed__4_t5957B42D80E6383DCAA61D84E56ABB26A6A110DA * _thisAdjusted = reinterpret_cast<U3CEnsureInputSystemValidU3Ed__4_t5957B42D80E6383DCAA61D84E56ABB26A6A110DA *>(__this + _offset);
	U3CEnsureInputSystemValidU3Ed__4_SetStateMachine_mE7700C402013A49F06A5B83BCC6A97A6A252F148(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<Start>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_MoveNext_mEAE7FF74F4EA1250DE3FD8E864FAE7A9EDF75F7D (U3CStartU3Ed__2_t356707D26D0C2F68AA6A184ABE199B7170D68915 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__2_t356707D26D0C2F68AA6A184ABE199B7170D68915_m12DD9AFE05F205887533A7E1A8A737F5AA2D1C47_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_t9EE794F39C54151DD16EC86D9F7B1FB2D5D2FF96_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityEventSystem_t0406E51EB205B83BBECF95AE9DE1E79ACBB12D56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	InputSystemGlobalListener_t3C3B05F5289CFC04036EB6158B24859F969250BD * V_1 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		InputSystemGlobalListener_t3C3B05F5289CFC04036EB6158B24859F969250BD * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_004e;
			}
		}

IL_0011:
		{
			// if (lateInitialize)
			InputSystemGlobalListener_t3C3B05F5289CFC04036EB6158B24859F969250BD * L_3 = V_1;
			NullCheck(L_3);
			bool L_4 = L_3->get_lateInitialize_4();
			if (!L_4)
			{
				goto IL_0093;
			}
		}

IL_0019:
		{
			// await EnsureInputSystemValid();
			InputSystemGlobalListener_t3C3B05F5289CFC04036EB6158B24859F969250BD * L_5 = V_1;
			NullCheck(L_5);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_6;
			L_6 = InputSystemGlobalListener_EnsureInputSystemValid_m307682E5E1D4C04A885C1F836C592174A1707EFE(L_5, /*hidden argument*/NULL);
			NullCheck(L_6);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_7;
			L_7 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_6, /*hidden argument*/NULL);
			V_2 = L_7;
			bool L_8;
			L_8 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			if (L_8)
			{
				goto IL_006a;
			}
		}

IL_002e:
		{
			int32_t L_9 = 0;
			V_0 = L_9;
			__this->set_U3CU3E1__state_0(L_9);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_10 = V_2;
			__this->set_U3CU3Eu__1_3(L_10);
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_11 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__2_t356707D26D0C2F68AA6A184ABE199B7170D68915_m12DD9AFE05F205887533A7E1A8A737F5AA2D1C47((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_11, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), (U3CStartU3Ed__2_t356707D26D0C2F68AA6A184ABE199B7170D68915 *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__2_t356707D26D0C2F68AA6A184ABE199B7170D68915_m12DD9AFE05F205887533A7E1A8A737F5AA2D1C47_RuntimeMethod_var);
			goto IL_00bf;
		}

IL_004e:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_12 = __this->get_U3CU3Eu__1_3();
			V_2 = L_12;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_13 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_13, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_14 = (-1);
			V_0 = L_14;
			__this->set_U3CU3E1__state_0(L_14);
		}

IL_006a:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			// if (this == null)
			InputSystemGlobalListener_t3C3B05F5289CFC04036EB6158B24859F969250BD * L_15 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_16;
			L_16 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_15, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_16)
			{
				goto IL_007c;
			}
		}

IL_007a:
		{
			// return;
			goto IL_00ac;
		}

IL_007c:
		{
			// lateInitialize = false;
			InputSystemGlobalListener_t3C3B05F5289CFC04036EB6158B24859F969250BD * L_17 = V_1;
			NullCheck(L_17);
			L_17->set_lateInitialize_4((bool)0);
			// CoreServices.InputSystem.Register(gameObject);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t9EE794F39C54151DD16EC86D9F7B1FB2D5D2FF96_il2cpp_TypeInfo_var);
			RuntimeObject* L_18;
			L_18 = CoreServices_get_InputSystem_m12A0174735CF9D34E818B5B78075DFB277CDB164(/*hidden argument*/NULL);
			InputSystemGlobalListener_t3C3B05F5289CFC04036EB6158B24859F969250BD * L_19 = V_1;
			NullCheck(L_19);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
			L_20 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_19, /*hidden argument*/NULL);
			NullCheck(L_18);
			InterfaceActionInvoker1< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.IMixedRealityEventSystem::Register(UnityEngine.GameObject) */, IMixedRealityEventSystem_t0406E51EB205B83BBECF95AE9DE1E79ACBB12D56_il2cpp_TypeInfo_var, L_18, L_20);
		}

IL_0093:
		{
			goto IL_00ac;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0095;
		}
		throw e;
	}

CATCH_0095:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_21 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_22 = V_3;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_21, L_22, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00bf;
	} // end catch (depth: 1)

IL_00ac:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_23 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_23, /*hidden argument*/NULL);
	}

IL_00bf:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartU3Ed__2_MoveNext_mEAE7FF74F4EA1250DE3FD8E864FAE7A9EDF75F7D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStartU3Ed__2_t356707D26D0C2F68AA6A184ABE199B7170D68915 * _thisAdjusted = reinterpret_cast<U3CStartU3Ed__2_t356707D26D0C2F68AA6A184ABE199B7170D68915 *>(__this + _offset);
	U3CStartU3Ed__2_MoveNext_mEAE7FF74F4EA1250DE3FD8E864FAE7A9EDF75F7D(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<Start>d__2::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_SetStateMachine_m7F83559E38762A9090087188C67FE938E9E074D0 (U3CStartU3Ed__2_t356707D26D0C2F68AA6A184ABE199B7170D68915 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartU3Ed__2_SetStateMachine_m7F83559E38762A9090087188C67FE938E9E074D0_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStartU3Ed__2_t356707D26D0C2F68AA6A184ABE199B7170D68915 * _thisAdjusted = reinterpret_cast<U3CStartU3Ed__2_t356707D26D0C2F68AA6A184ABE199B7170D68915 *>(__this + _offset);
	U3CStartU3Ed__2_SetStateMachine_m7F83559E38762A9090087188C67FE938E9E074D0(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ActiveMixedRealityPointersU3Ed__16__ctor_mF9914CCBA1A6B13E085DCD5EB0B1EB7EEC83205B (U3Cget_ActiveMixedRealityPointersU3Ed__16_t5849695544400F58C2B6233E979A98A2ABFA366D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ActiveMixedRealityPointersU3Ed__16_System_IDisposable_Dispose_mB8ED4D83307D021B4FA100597F41B978FE85A7E5 (U3Cget_ActiveMixedRealityPointersU3Ed__16_t5849695544400F58C2B6233E979A98A2ABFA366D * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1A, FINALLY_0013);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{ // begin finally (depth: 1)
		U3Cget_ActiveMixedRealityPointersU3Ed__16_U3CU3Em__Finally1_m51A93D3EFE115D4710EE100531EFBBB69C058D59(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(19)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cget_ActiveMixedRealityPointersU3Ed__16_MoveNext_m3D6D040EAB52303C0027B35A85BF56A23A46430A (U3Cget_ActiveMixedRealityPointersU3Ed__16_t5849695544400F58C2B6233E979A98A2ABFA366D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mE8DAF982558B09E161097CE7F3FBAE1F8EB32B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m1B4FE1C295A7050C419E855320CCC8BB2B7A9921_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6277D9088F35FEBB00854B400A50D5738D368C38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m5781E012CAD465D20D5EA8CF45694487B8AFE9DB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	MixedRealityInputModule_t574B111D4EE14DF45FD03659EB6D4FA1FCDB5F61 * V_2 = NULL;
	KeyValuePair_2_t122D8D0845EF16384D2BB12F00D692E3D4480521  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			MixedRealityInputModule_t574B111D4EE14DF45FD03659EB6D4FA1FCDB5F61 * L_1 = __this->get_U3CU3E4__this_3();
			V_2 = L_1;
			int32_t L_2 = V_1;
			if (!L_2)
			{
				goto IL_0019;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_1;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_0064;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			goto IL_0096;
		}

IL_0019:
		{
			__this->set_U3CU3E1__state_0((-1));
			// foreach (var pointerDataEntry in pointerDataToUpdate)
			MixedRealityInputModule_t574B111D4EE14DF45FD03659EB6D4FA1FCDB5F61 * L_4 = V_2;
			NullCheck(L_4);
			Dictionary_2_tCB5016B391E19ADB305776AB4375FCED878EF0B0 * L_5 = L_4->get_pointerDataToUpdate_30();
			NullCheck(L_5);
			Enumerator_tCC5D2E22B90EB083C4B938DEABCCEAB66363BE1D  L_6;
			L_6 = Dictionary_2_GetEnumerator_mE8DAF982558B09E161097CE7F3FBAE1F8EB32B90(L_5, /*hidden argument*/Dictionary_2_GetEnumerator_mE8DAF982558B09E161097CE7F3FBAE1F8EB32B90_RuntimeMethod_var);
			__this->set_U3CU3E7__wrap1_4(L_6);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_006c;
		}

IL_003b:
		{
			// foreach (var pointerDataEntry in pointerDataToUpdate)
			Enumerator_tCC5D2E22B90EB083C4B938DEABCCEAB66363BE1D * L_7 = __this->get_address_of_U3CU3E7__wrap1_4();
			KeyValuePair_2_t122D8D0845EF16384D2BB12F00D692E3D4480521  L_8;
			L_8 = Enumerator_get_Current_m6277D9088F35FEBB00854B400A50D5738D368C38_inline((Enumerator_tCC5D2E22B90EB083C4B938DEABCCEAB66363BE1D *)L_7, /*hidden argument*/Enumerator_get_Current_m6277D9088F35FEBB00854B400A50D5738D368C38_RuntimeMethod_var);
			V_3 = L_8;
			// yield return pointerDataEntry.Value.pointer;
			PointerData_t961238F7F343E720C726AACF3A25940C344E9595 * L_9;
			L_9 = KeyValuePair_2_get_Value_m5781E012CAD465D20D5EA8CF45694487B8AFE9DB_inline((KeyValuePair_2_t122D8D0845EF16384D2BB12F00D692E3D4480521 *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m5781E012CAD465D20D5EA8CF45694487B8AFE9DB_RuntimeMethod_var);
			NullCheck(L_9);
			RuntimeObject* L_10 = L_9->get_pointer_0();
			__this->set_U3CU3E2__current_1(L_10);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_0096;
		}

IL_0064:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
		}

IL_006c:
		{
			// foreach (var pointerDataEntry in pointerDataToUpdate)
			Enumerator_tCC5D2E22B90EB083C4B938DEABCCEAB66363BE1D * L_11 = __this->get_address_of_U3CU3E7__wrap1_4();
			bool L_12;
			L_12 = Enumerator_MoveNext_m1B4FE1C295A7050C419E855320CCC8BB2B7A9921((Enumerator_tCC5D2E22B90EB083C4B938DEABCCEAB66363BE1D *)L_11, /*hidden argument*/Enumerator_MoveNext_m1B4FE1C295A7050C419E855320CCC8BB2B7A9921_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_003b;
			}
		}

IL_0079:
		{
			U3Cget_ActiveMixedRealityPointersU3Ed__16_U3CU3Em__Finally1_m51A93D3EFE115D4710EE100531EFBBB69C058D59(__this, /*hidden argument*/NULL);
			Enumerator_tCC5D2E22B90EB083C4B938DEABCCEAB66363BE1D * L_13 = __this->get_address_of_U3CU3E7__wrap1_4();
			il2cpp_codegen_initobj(L_13, sizeof(Enumerator_tCC5D2E22B90EB083C4B938DEABCCEAB66363BE1D ));
			// }
			V_0 = (bool)0;
			goto IL_0096;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_008f;
	}

FAULT_008f:
	{ // begin fault (depth: 1)
		U3Cget_ActiveMixedRealityPointersU3Ed__16_System_IDisposable_Dispose_mB8ED4D83307D021B4FA100597F41B978FE85A7E5(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(143)
	} // end fault
	IL2CPP_CLEANUP(143)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0096:
	{
		bool L_14 = V_0;
		return L_14;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ActiveMixedRealityPointersU3Ed__16_U3CU3Em__Finally1_m51A93D3EFE115D4710EE100531EFBBB69C058D59 (U3Cget_ActiveMixedRealityPointersU3Ed__16_t5849695544400F58C2B6233E979A98A2ABFA366D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m00166CDB9ACB209A0978F31A563DCE66194D7E3D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		Enumerator_tCC5D2E22B90EB083C4B938DEABCCEAB66363BE1D * L_0 = __this->get_address_of_U3CU3E7__wrap1_4();
		Enumerator_Dispose_m00166CDB9ACB209A0978F31A563DCE66194D7E3D((Enumerator_tCC5D2E22B90EB083C4B938DEABCCEAB66363BE1D *)L_0, /*hidden argument*/Enumerator_Dispose_m00166CDB9ACB209A0978F31A563DCE66194D7E3D_RuntimeMethod_var);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::System.Collections.Generic.IEnumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ActiveMixedRealityPointersU3Ed__16_System_Collections_Generic_IEnumeratorU3CMicrosoft_MixedReality_Toolkit_Input_IMixedRealityPointerU3E_get_Current_mAC5EB355B7587895E66C29FDD7E5B5C9AC18D006 (U3Cget_ActiveMixedRealityPointersU3Ed__16_t5849695544400F58C2B6233E979A98A2ABFA366D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ActiveMixedRealityPointersU3Ed__16_System_Collections_IEnumerator_Reset_m8F81DD6B34FE82140D44D252BF081537492F5D03 (U3Cget_ActiveMixedRealityPointersU3Ed__16_t5849695544400F58C2B6233E979A98A2ABFA366D * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Cget_ActiveMixedRealityPointersU3Ed__16_System_Collections_IEnumerator_Reset_m8F81DD6B34FE82140D44D252BF081537492F5D03_RuntimeMethod_var)));
	}
}
// System.Object Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3Cget_ActiveMixedRealityPointersU3Ed__16_System_Collections_IEnumerator_get_Current_m28A517AC1FD28A5330F573E38B8C9D24811EB7A6 (U3Cget_ActiveMixedRealityPointersU3Ed__16_t5849695544400F58C2B6233E979A98A2ABFA366D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::System.Collections.Generic.IEnumerable<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ActiveMixedRealityPointersU3Ed__16_System_Collections_Generic_IEnumerableU3CMicrosoft_MixedReality_Toolkit_Input_IMixedRealityPointerU3E_GetEnumerator_m86F958A72E935BDFFE75DA25A3509ED9AE46EB60 (U3Cget_ActiveMixedRealityPointersU3Ed__16_t5849695544400F58C2B6233E979A98A2ABFA366D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cget_ActiveMixedRealityPointersU3Ed__16_t5849695544400F58C2B6233E979A98A2ABFA366D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3Cget_ActiveMixedRealityPointersU3Ed__16_t5849695544400F58C2B6233E979A98A2ABFA366D * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3Cget_ActiveMixedRealityPointersU3Ed__16_t5849695544400F58C2B6233E979A98A2ABFA366D * L_3 = (U3Cget_ActiveMixedRealityPointersU3Ed__16_t5849695544400F58C2B6233E979A98A2ABFA366D *)il2cpp_codegen_object_new(U3Cget_ActiveMixedRealityPointersU3Ed__16_t5849695544400F58C2B6233E979A98A2ABFA366D_il2cpp_TypeInfo_var);
		U3Cget_ActiveMixedRealityPointersU3Ed__16__ctor_mF9914CCBA1A6B13E085DCD5EB0B1EB7EEC83205B(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		U3Cget_ActiveMixedRealityPointersU3Ed__16_t5849695544400F58C2B6233E979A98A2ABFA366D * L_4 = V_0;
		MixedRealityInputModule_t574B111D4EE14DF45FD03659EB6D4FA1FCDB5F61 * L_5 = __this->get_U3CU3E4__this_3();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_3(L_5);
	}

IL_0035:
	{
		U3Cget_ActiveMixedRealityPointersU3Ed__16_t5849695544400F58C2B6233E979A98A2ABFA366D * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ActiveMixedRealityPointersU3Ed__16_System_Collections_IEnumerable_GetEnumerator_m3A452FEF789D1B64B55BBE0CD118F262E7830131 (U3Cget_ActiveMixedRealityPointersU3Ed__16_t5849695544400F58C2B6233E979A98A2ABFA366D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3Cget_ActiveMixedRealityPointersU3Ed__16_System_Collections_Generic_IEnumerableU3CMicrosoft_MixedReality_Toolkit_Input_IMixedRealityPointerU3E_GetEnumerator_m86F958A72E935BDFFE75DA25A3509ED9AE46EB60(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,UnityEngine.EventSystems.EventSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerData__ctor_m303141D07EFB508D0B5A02D3A035C847274F3352 (PointerData_t961238F7F343E720C726AACF3A25940C344E9595 * __this, RuntimeObject* ___pointer0, EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___eventSystem1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public PointerEventData.FramePressState nextPressState = PointerEventData.FramePressState.NotChanged;
		__this->set_nextPressState_2(3);
		// public MouseState mouseState = new MouseState();
		MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 * L_0 = (MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 *)il2cpp_codegen_object_new(MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1_il2cpp_TypeInfo_var);
		MouseState__ctor_m16EF8D45AF8A178368547BD1CE4FBF9DBC563605(L_0, /*hidden argument*/NULL);
		__this->set_mouseState_3(L_0);
		// public PointerData(IMixedRealityPointer pointer, EventSystem eventSystem)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.pointer = pointer;
		RuntimeObject* L_1 = ___pointer0;
		__this->set_pointer_0(L_1);
		// eventDataLeft = new PointerEventData(eventSystem);
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_2 = ___eventSystem1;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_3 = (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)il2cpp_codegen_object_new(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954_il2cpp_TypeInfo_var);
		PointerEventData__ctor_m3A877590C20995B4F549C6923BBE2B0901A684F2(L_3, L_2, /*hidden argument*/NULL);
		__this->set_eventDataLeft_4(L_3);
		// eventDataMiddle = new PointerEventData(eventSystem);
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_4 = ___eventSystem1;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_5 = (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)il2cpp_codegen_object_new(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954_il2cpp_TypeInfo_var);
		PointerEventData__ctor_m3A877590C20995B4F549C6923BBE2B0901A684F2(L_5, L_4, /*hidden argument*/NULL);
		__this->set_eventDataMiddle_5(L_5);
		// eventDataRight = new PointerEventData(eventSystem);
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_6 = ___eventSystem1;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_7 = (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)il2cpp_codegen_object_new(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954_il2cpp_TypeInfo_var);
		PointerEventData__ctor_m3A877590C20995B4F549C6923BBE2B0901A684F2(L_7, L_6, /*hidden argument*/NULL);
		__this->set_eventDataRight_6(L_7);
		// }
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
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mB302FD7C6F150E6895BC5EDE3290ADDB547F3A49 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t738602F83F328AD6B4BE4BEE3436DDB566A8F3DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t738602F83F328AD6B4BE4BEE3436DDB566A8F3DA * L_0 = (U3CU3Ec_t738602F83F328AD6B4BE4BEE3436DDB566A8F3DA *)il2cpp_codegen_object_new(U3CU3Ec_t738602F83F328AD6B4BE4BEE3436DDB566A8F3DA_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m998C2230B2C5E7FAEF1CD1C7BCC71962A400AECF(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t738602F83F328AD6B4BE4BEE3436DDB566A8F3DA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t738602F83F328AD6B4BE4BEE3436DDB566A8F3DA_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m998C2230B2C5E7FAEF1CD1C7BCC71962A400AECF (U3CU3Ec_t738602F83F328AD6B4BE4BEE3436DDB566A8F3DA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_0(Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourceStateHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_0_mC707D8983B76CB76566E3D8C230D7B518ED94F9F (U3CU3Ec_t738602F83F328AD6B4BE4BEE3436DDB566A8F3DA * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisSourceStateEventData_t69DA69CF3D8292B514A438C9AA3F1C0DA4A1F70A_m1158D1EF56847A5F85086AE8C44EA2376A4678E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealitySourceStateHandler_tD727B4D4A674872A44EBFD0D77D96E541365DD1B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SourceStateEventData_t69DA69CF3D8292B514A438C9AA3F1C0DA4A1F70A * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<SourceStateEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		SourceStateEventData_t69DA69CF3D8292B514A438C9AA3F1C0DA4A1F70A * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisSourceStateEventData_t69DA69CF3D8292B514A438C9AA3F1C0DA4A1F70A_m1158D1EF56847A5F85086AE8C44EA2376A4678E5(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisSourceStateEventData_t69DA69CF3D8292B514A438C9AA3F1C0DA4A1F70A_m1158D1EF56847A5F85086AE8C44EA2376A4678E5_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnSourceDetected(casted);
		RuntimeObject* L_2 = ___handler0;
		SourceStateEventData_t69DA69CF3D8292B514A438C9AA3F1C0DA4A1F70A * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< SourceStateEventData_t69DA69CF3D8292B514A438C9AA3F1C0DA4A1F70A * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourceStateHandler::OnSourceDetected(Microsoft.MixedReality.Toolkit.Input.SourceStateEventData) */, IMixedRealitySourceStateHandler_tD727B4D4A674872A44EBFD0D77D96E541365DD1B_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_1(Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourceStateHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_1_m21526A79245CD8F550F5F5E2C8AE90D68E045020 (U3CU3Ec_t738602F83F328AD6B4BE4BEE3436DDB566A8F3DA * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisSourceStateEventData_t69DA69CF3D8292B514A438C9AA3F1C0DA4A1F70A_m1158D1EF56847A5F85086AE8C44EA2376A4678E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealitySourceStateHandler_tD727B4D4A674872A44EBFD0D77D96E541365DD1B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SourceStateEventData_t69DA69CF3D8292B514A438C9AA3F1C0DA4A1F70A * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<SourceStateEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		SourceStateEventData_t69DA69CF3D8292B514A438C9AA3F1C0DA4A1F70A * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisSourceStateEventData_t69DA69CF3D8292B514A438C9AA3F1C0DA4A1F70A_m1158D1EF56847A5F85086AE8C44EA2376A4678E5(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisSourceStateEventData_t69DA69CF3D8292B514A438C9AA3F1C0DA4A1F70A_m1158D1EF56847A5F85086AE8C44EA2376A4678E5_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnSourceLost(casted);
		RuntimeObject* L_2 = ___handler0;
		SourceStateEventData_t69DA69CF3D8292B514A438C9AA3F1C0DA4A1F70A * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< SourceStateEventData_t69DA69CF3D8292B514A438C9AA3F1C0DA4A1F70A * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourceStateHandler::OnSourceLost(Microsoft.MixedReality.Toolkit.Input.SourceStateEventData) */, IMixedRealitySourceStateHandler_tD727B4D4A674872A44EBFD0D77D96E541365DD1B_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_2(Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_2_mACA1FD132C122FE197E86895F7C248844FC980EF (U3CU3Ec_t738602F83F328AD6B4BE4BEE3436DDB566A8F3DA * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t279FAFBF5A63CBB50D189E71E915323C055FDA22_m42C5E7816341B0485D5170A310F466EF48C9CE6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealitySourcePoseHandler_tC2137C3AC6C9B64C2135118585F3B8824709FBBF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SourcePoseEventData_1_t279FAFBF5A63CBB50D189E71E915323C055FDA22 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<SourcePoseEventData<TrackingState>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		SourcePoseEventData_1_t279FAFBF5A63CBB50D189E71E915323C055FDA22 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t279FAFBF5A63CBB50D189E71E915323C055FDA22_m42C5E7816341B0485D5170A310F466EF48C9CE6D(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t279FAFBF5A63CBB50D189E71E915323C055FDA22_m42C5E7816341B0485D5170A310F466EF48C9CE6D_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnSourcePoseChanged(casted);
		RuntimeObject* L_2 = ___handler0;
		SourcePoseEventData_1_t279FAFBF5A63CBB50D189E71E915323C055FDA22 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< SourcePoseEventData_1_t279FAFBF5A63CBB50D189E71E915323C055FDA22 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler::OnSourcePoseChanged(Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.TrackingState>) */, IMixedRealitySourcePoseHandler_tC2137C3AC6C9B64C2135118585F3B8824709FBBF_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_3(Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_3_m5BECF5DD38B1247435155DD2D01036583B940165 (U3CU3Ec_t738602F83F328AD6B4BE4BEE3436DDB566A8F3DA * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t80C46DBD53C9C9645B0164A3091F71C84CE7D25D_m275CEF667687F25345E1202A7E2FD75EDA0CBD08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealitySourcePoseHandler_tC2137C3AC6C9B64C2135118585F3B8824709FBBF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SourcePoseEventData_1_t80C46DBD53C9C9645B0164A3091F71C84CE7D25D * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<SourcePoseEventData<Vector2>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		SourcePoseEventData_1_t80C46DBD53C9C9645B0164A3091F71C84CE7D25D * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t80C46DBD53C9C9645B0164A3091F71C84CE7D25D_m275CEF667687F25345E1202A7E2FD75EDA0CBD08(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t80C46DBD53C9C9645B0164A3091F71C84CE7D25D_m275CEF667687F25345E1202A7E2FD75EDA0CBD08_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnSourcePoseChanged(casted);
		RuntimeObject* L_2 = ___handler0;
		SourcePoseEventData_1_t80C46DBD53C9C9645B0164A3091F71C84CE7D25D * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< SourcePoseEventData_1_t80C46DBD53C9C9645B0164A3091F71C84CE7D25D * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler::OnSourcePoseChanged(Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector2>) */, IMixedRealitySourcePoseHandler_tC2137C3AC6C9B64C2135118585F3B8824709FBBF_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_4(Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_4_mE7A5D90C0D0F06EB73DE9ACEC4BA846EBEE059EE (U3CU3Ec_t738602F83F328AD6B4BE4BEE3436DDB566A8F3DA * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t4CC18A361F416AEE6542A9B09E9D8FF174DF3CB0_mB25036FAE9655FE10D21A9BC178D4557AB2267C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealitySourcePoseHandler_tC2137C3AC6C9B64C2135118585F3B8824709FBBF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SourcePoseEventData_1_t4CC18A361F416AEE6542A9B09E9D8FF174DF3CB0 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<SourcePoseEventData<Vector3>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		SourcePoseEventData_1_t4CC18A361F416AEE6542A9B09E9D8FF174DF3CB0 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t4CC18A361F416AEE6542A9B09E9D8FF174DF3CB0_mB25036FAE9655FE10D21A9BC178D4557AB2267C3(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t4CC18A361F416AEE6542A9B09E9D8FF174DF3CB0_mB25036FAE9655FE10D21A9BC178D4557AB2267C3_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnSourcePoseChanged(casted);
		RuntimeObject* L_2 = ___handler0;
		SourcePoseEventData_1_t4CC18A361F416AEE6542A9B09E9D8FF174DF3CB0 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< SourcePoseEventData_1_t4CC18A361F416AEE6542A9B09E9D8FF174DF3CB0 * >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler::OnSourcePoseChanged(Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector3>) */, IMixedRealitySourcePoseHandler_tC2137C3AC6C9B64C2135118585F3B8824709FBBF_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_5(Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_5_m1F25DF446597947913FBB2FBCCD64B39C893A9F2 (U3CU3Ec_t738602F83F328AD6B4BE4BEE3436DDB566A8F3DA * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_tAC3DE05E45010F0569ABBE17F2C120F4E13518D2_m98976A97309BD7DC81F1370A43D08FD07D60A6D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealitySourcePoseHandler_tC2137C3AC6C9B64C2135118585F3B8824709FBBF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SourcePoseEventData_1_tAC3DE05E45010F0569ABBE17F2C120F4E13518D2 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<SourcePoseEventData<Quaternion>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		SourcePoseEventData_1_tAC3DE05E45010F0569ABBE17F2C120F4E13518D2 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_tAC3DE05E45010F0569ABBE17F2C120F4E13518D2_m98976A97309BD7DC81F1370A43D08FD07D60A6D2(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_tAC3DE05E45010F0569ABBE17F2C120F4E13518D2_m98976A97309BD7DC81F1370A43D08FD07D60A6D2_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnSourcePoseChanged(casted);
		RuntimeObject* L_2 = ___handler0;
		SourcePoseEventData_1_tAC3DE05E45010F0569ABBE17F2C120F4E13518D2 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< SourcePoseEventData_1_tAC3DE05E45010F0569ABBE17F2C120F4E13518D2 * >::Invoke(3 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler::OnSourcePoseChanged(Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Quaternion>) */, IMixedRealitySourcePoseHandler_tC2137C3AC6C9B64C2135118585F3B8824709FBBF_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_6(Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_6_mC324DBA05F81D2CF12B7DA36FC6C1A388F1F8A5E (U3CU3Ec_t738602F83F328AD6B4BE4BEE3436DDB566A8F3DA * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_tA97A232897516DFA3A41013CD2865BE9068B04BD_m81B913C81443C08947EF035A77D644E0DE15DAE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealitySourcePoseHandler_tC2137C3AC6C9B64C2135118585F3B8824709FBBF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SourcePoseEventData_1_tA97A232897516DFA3A41013CD2865BE9068B04BD * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<SourcePoseEventData<MixedRealityPose>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		SourcePoseEventData_1_tA97A232897516DFA3A41013CD2865BE9068B04BD * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_tA97A232897516DFA3A41013CD2865BE9068B04BD_m81B913C81443C08947EF035A77D644E0DE15DAE2(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_tA97A232897516DFA3A41013CD2865BE9068B04BD_m81B913C81443C08947EF035A77D644E0DE15DAE2_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnSourcePoseChanged(casted);
		RuntimeObject* L_2 = ___handler0;
		SourcePoseEventData_1_tA97A232897516DFA3A41013CD2865BE9068B04BD * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< SourcePoseEventData_1_tA97A232897516DFA3A41013CD2865BE9068B04BD * >::Invoke(4 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler::OnSourcePoseChanged(Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>) */, IMixedRealitySourcePoseHandler_tC2137C3AC6C9B64C2135118585F3B8824709FBBF_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_7(Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusChangedHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_7_m272E3A6530B0A7824175CFD2E5BBF1601839A841 (U3CU3Ec_t738602F83F328AD6B4BE4BEE3436DDB566A8F3DA * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisFocusEventData_t9F3F2249C05BBF9D98A7BD4B12506BDC36E7F041_m50F3158009D9D9C30EDA746D6FEF186A0E4A3599_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityFocusChangedHandler_tE3E0C008AE8AFC59995B69A967A17F0E72DEDEE6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FocusEventData_t9F3F2249C05BBF9D98A7BD4B12506BDC36E7F041 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<FocusEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		FocusEventData_t9F3F2249C05BBF9D98A7BD4B12506BDC36E7F041 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisFocusEventData_t9F3F2249C05BBF9D98A7BD4B12506BDC36E7F041_m50F3158009D9D9C30EDA746D6FEF186A0E4A3599(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisFocusEventData_t9F3F2249C05BBF9D98A7BD4B12506BDC36E7F041_m50F3158009D9D9C30EDA746D6FEF186A0E4A3599_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnBeforeFocusChange(casted);
		RuntimeObject* L_2 = ___handler0;
		FocusEventData_t9F3F2249C05BBF9D98A7BD4B12506BDC36E7F041 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< FocusEventData_t9F3F2249C05BBF9D98A7BD4B12506BDC36E7F041 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusChangedHandler::OnBeforeFocusChange(Microsoft.MixedReality.Toolkit.Input.FocusEventData) */, IMixedRealityFocusChangedHandler_tE3E0C008AE8AFC59995B69A967A17F0E72DEDEE6_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_8(Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusChangedHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_8_mF4A1563EC2F1F4333DF4FFA0D15E7C1E0C97BDCF (U3CU3Ec_t738602F83F328AD6B4BE4BEE3436DDB566A8F3DA * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisFocusEventData_t9F3F2249C05BBF9D98A7BD4B12506BDC36E7F041_m50F3158009D9D9C30EDA746D6FEF186A0E4A3599_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityFocusChangedHandler_tE3E0C008AE8AFC59995B69A967A17F0E72DEDEE6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FocusEventData_t9F3F2249C05BBF9D98A7BD4B12506BDC36E7F041 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<FocusEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		FocusEventData_t9F3F2249C05BBF9D98A7BD4B12506BDC36E7F041 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisFocusEventData_t9F3F2249C05BBF9D98A7BD4B12506BDC36E7F041_m50F3158009D9D9C30EDA746D6FEF186A0E4A3599(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisFocusEventData_t9F3F2249C05BBF9D98A7BD4B12506BDC36E7F041_m50F3158009D9D9C30EDA746D6FEF186A0E4A3599_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnFocusChanged(casted);
		RuntimeObject* L_2 = ___handler0;
		FocusEventData_t9F3F2249C05BBF9D98A7BD4B12506BDC36E7F041 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< FocusEventData_t9F3F2249C05BBF9D98A7BD4B12506BDC36E7F041 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusChangedHandler::OnFocusChanged(Microsoft.MixedReality.Toolkit.Input.FocusEventData) */, IMixedRealityFocusChangedHandler_tE3E0C008AE8AFC59995B69A967A17F0E72DEDEE6_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_9(Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_9_mC52DB52D7497DFD6B2D2E150F0D74CC701480018 (U3CU3Ec_t738602F83F328AD6B4BE4BEE3436DDB566A8F3DA * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisFocusEventData_t9F3F2249C05BBF9D98A7BD4B12506BDC36E7F041_m50F3158009D9D9C30EDA746D6FEF186A0E4A3599_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityFocusHandler_t35178AAB6E5D36E0436292B9427140F5E7774726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FocusEventData_t9F3F2249C05BBF9D98A7BD4B12506BDC36E7F041 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<FocusEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		FocusEventData_t9F3F2249C05BBF9D98A7BD4B12506BDC36E7F041 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisFocusEventData_t9F3F2249C05BBF9D98A7BD4B12506BDC36E7F041_m50F3158009D9D9C30EDA746D6FEF186A0E4A3599(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisFocusEventData_t9F3F2249C05BBF9D98A7BD4B12506BDC36E7F041_m50F3158009D9D9C30EDA746D6FEF186A0E4A3599_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnFocusEnter(casted);
		RuntimeObject* L_2 = ___handler0;
		FocusEventData_t9F3F2249C05BBF9D98A7BD4B12506BDC36E7F041 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< FocusEventData_t9F3F2249C05BBF9D98A7BD4B12506BDC36E7F041 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler::OnFocusEnter(Microsoft.MixedReality.Toolkit.Input.FocusEventData) */, IMixedRealityFocusHandler_t35178AAB6E5D36E0436292B9427140F5E7774726_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_10(Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_10_m87C3CCB3F54A85B64AAC26D1B8834B5008675628 (U3CU3Ec_t738602F83F328AD6B4BE4BEE3436DDB566A8F3DA * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisFocusEventData_t9F3F2249C05BBF9D98A7BD4B12506BDC36E7F041_m50F3158009D9D9C30EDA746D6FEF186A0E4A3599_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityFocusHandler_t35178AAB6E5D36E0436292B9427140F5E7774726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FocusEventData_t9F3F2249C05BBF9D98A7BD4B12506BDC36E7F041 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<FocusEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		FocusEventData_t9F3F2249C05BBF9D98A7BD4B12506BDC36E7F041 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisFocusEventData_t9F3F2249C05BBF9D98A7BD4B12506BDC36E7F041_m50F3158009D9D9C30EDA746D6FEF186A0E4A3599(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisFocusEventData_t9F3F2249C05BBF9D98A7BD4B12506BDC36E7F041_m50F3158009D9D9C30EDA746D6FEF186A0E4A3599_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnFocusExit(casted);
		RuntimeObject* L_2 = ___handler0;
		FocusEventData_t9F3F2249C05BBF9D98A7BD4B12506BDC36E7F041 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< FocusEventData_t9F3F2249C05BBF9D98A7BD4B12506BDC36E7F041 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler::OnFocusExit(Microsoft.MixedReality.Toolkit.Input.FocusEventData) */, IMixedRealityFocusHandler_t35178AAB6E5D36E0436292B9427140F5E7774726_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_11(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_11_mA1A87D4233E4B05B8EAC727E0ADBA2A97B02A217 (U3CU3Ec_t738602F83F328AD6B4BE4BEE3436DDB566A8F3DA * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_tAB2BBE5FC804ED0060813BEBC6D1866F3795E602_m358486C871749435720ECB518BC86C21D67B716E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityPointerHandler_tD7A6A13C115758DE0D0DF7C0371B1A643B08F01A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityPointerEventData_tAB2BBE5FC804ED0060813BEBC6D1866F3795E602 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<MixedRealityPointerEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		MixedRealityPointerEventData_tAB2BBE5FC804ED0060813BEBC6D1866F3795E602 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_tAB2BBE5FC804ED0060813BEBC6D1866F3795E602_m358486C871749435720ECB518BC86C21D67B716E(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_tAB2BBE5FC804ED0060813BEBC6D1866F3795E602_m358486C871749435720ECB518BC86C21D67B716E_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnPointerDown(casted);
		RuntimeObject* L_2 = ___handler0;
		MixedRealityPointerEventData_tAB2BBE5FC804ED0060813BEBC6D1866F3795E602 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< MixedRealityPointerEventData_tAB2BBE5FC804ED0060813BEBC6D1866F3795E602 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler::OnPointerDown(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData) */, IMixedRealityPointerHandler_tD7A6A13C115758DE0D0DF7C0371B1A643B08F01A_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_12(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_12_m49CA39292651D773ADC75C3C21A7FAE2C03C6596 (U3CU3Ec_t738602F83F328AD6B4BE4BEE3436DDB566A8F3DA * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_tAB2BBE5FC804ED0060813BEBC6D1866F3795E602_m358486C871749435720ECB518BC86C21D67B716E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityPointerHandler_tD7A6A13C115758DE0D0DF7C0371B1A643B08F01A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityPointerEventData_tAB2BBE5FC804ED0060813BEBC6D1866F3795E602 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<MixedRealityPointerEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		MixedRealityPointerEventData_tAB2BBE5FC804ED0060813BEBC6D1866F3795E602 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_tAB2BBE5FC804ED0060813BEBC6D1866F3795E602_m358486C871749435720ECB518BC86C21D67B716E(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_tAB2BBE5FC804ED0060813BEBC6D1866F3795E602_m358486C871749435720ECB518BC86C21D67B716E_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnPointerDragged(casted);
		RuntimeObject* L_2 = ___handler0;
		MixedRealityPointerEventData_tAB2BBE5FC804ED0060813BEBC6D1866F3795E602 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< MixedRealityPointerEventData_tAB2BBE5FC804ED0060813BEBC6D1866F3795E602 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler::OnPointerDragged(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData) */, IMixedRealityPointerHandler_tD7A6A13C115758DE0D0DF7C0371B1A643B08F01A_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_13(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_13_m13F45F7588ABAED9C5EF3C8B4E89582BE5DC62A8 (U3CU3Ec_t738602F83F328AD6B4BE4BEE3436DDB566A8F3DA * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_tAB2BBE5FC804ED0060813BEBC6D1866F3795E602_m358486C871749435720ECB518BC86C21D67B716E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityPointerHandler_tD7A6A13C115758DE0D0DF7C0371B1A643B08F01A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityPointerEventData_tAB2BBE5FC804ED0060813BEBC6D1866F3795E602 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<MixedRealityPointerEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		MixedRealityPointerEventData_tAB2BBE5FC804ED0060813BEBC6D1866F3795E602 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_tAB2BBE5FC804ED0060813BEBC6D1866F3795E602_m358486C871749435720ECB518BC86C21D67B716E(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_tAB2BBE5FC804ED0060813BEBC6D1866F3795E602_m358486C871749435720ECB518BC86C21D67B716E_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnPointerClicked(casted);
		RuntimeObject* L_2 = ___handler0;
		MixedRealityPointerEventData_tAB2BBE5FC804ED0060813BEBC6D1866F3795E602 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< MixedRealityPointerEventData_tAB2BBE5FC804ED0060813BEBC6D1866F3795E602 * >::Invoke(3 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler::OnPointerClicked(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData) */, IMixedRealityPointerHandler_tD7A6A13C115758DE0D0DF7C0371B1A643B08F01A_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_14(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_14_m5141E2F6EE447411B19C3B8A9C41FAE07BF40466 (U3CU3Ec_t738602F83F328AD6B4BE4BEE3436DDB566A8F3DA * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_tAB2BBE5FC804ED0060813BEBC6D1866F3795E602_m358486C871749435720ECB518BC86C21D67B716E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityPointerHandler_tD7A6A13C115758DE0D0DF7C0371B1A643B08F01A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityPointerEventData_tAB2BBE5FC804ED0060813BEBC6D1866F3795E602 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<MixedRealityPointerEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		MixedRealityPointerEventData_tAB2BBE5FC804ED0060813BEBC6D1866F3795E602 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_tAB2BBE5FC804ED0060813BEBC6D1866F3795E602_m358486C871749435720ECB518BC86C21D67B716E(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_tAB2BBE5FC804ED0060813BEBC6D1866F3795E602_m358486C871749435720ECB518BC86C21D67B716E_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnPointerUp(casted);
		RuntimeObject* L_2 = ___handler0;
		MixedRealityPointerEventData_tAB2BBE5FC804ED0060813BEBC6D1866F3795E602 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< MixedRealityPointerEventData_tAB2BBE5FC804ED0060813BEBC6D1866F3795E602 * >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler::OnPointerUp(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData) */, IMixedRealityPointerHandler_tD7A6A13C115758DE0D0DF7C0371B1A643B08F01A_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_15(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_15_mD35044175FAD8B98D5B679FBE17557F2E2483491 (U3CU3Ec_t738602F83F328AD6B4BE4BEE3436DDB566A8F3DA * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7_mBEDC7A18A8EA2D53031F73EEE321D3D40366F563_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputHandler_tE7D2CE8FEAB3A804FC71F58C4F943E1B3EA1FB51_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7_mBEDC7A18A8EA2D53031F73EEE321D3D40366F563(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7_mBEDC7A18A8EA2D53031F73EEE321D3D40366F563_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnInputDown(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler::OnInputDown(Microsoft.MixedReality.Toolkit.Input.InputEventData) */, IMixedRealityInputHandler_tE7D2CE8FEAB3A804FC71F58C4F943E1B3EA1FB51_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_16(Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_16_mBE1041F79A2734143AAF08BD6CF9E4C2C2CF6A72 (U3CU3Ec_t738602F83F328AD6B4BE4BEE3436DDB566A8F3DA * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7_mBEDC7A18A8EA2D53031F73EEE321D3D40366F563_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputActionHandler_t99B8222621D02B580431670344F7E93CB8693D10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputHandler_tE7D2CE8FEAB3A804FC71F58C4F943E1B3EA1FB51_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_t99B8222621D02B580431670344F7E93CB8693D10_mF97259E6D002B5F855DEA2C610FB5CAF9EBE2F40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityObjectExtensions_IsNull_TisIMixedRealityInputHandler_tE7D2CE8FEAB3A804FC71F58C4F943E1B3EA1FB51_m24A7B0C9E24CCE4E14F091A1CEA8A50A93DEA342_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// var inputData = ExecuteEvents.ValidateEventData<InputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7_mBEDC7A18A8EA2D53031F73EEE321D3D40366F563(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7_mBEDC7A18A8EA2D53031F73EEE321D3D40366F563_RuntimeMethod_var);
		V_0 = L_1;
		// if (handler is IMixedRealityInputHandler inputHandler && !inputHandler.IsNull())
		RuntimeObject* L_2 = ___handler0;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IMixedRealityInputHandler_tE7D2CE8FEAB3A804FC71F58C4F943E1B3EA1FB51_il2cpp_TypeInfo_var));
		RuntimeObject* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_4 = V_1;
		bool L_5;
		L_5 = UnityObjectExtensions_IsNull_TisIMixedRealityInputHandler_tE7D2CE8FEAB3A804FC71F58C4F943E1B3EA1FB51_m24A7B0C9E24CCE4E14F091A1CEA8A50A93DEA342(L_4, /*hidden argument*/UnityObjectExtensions_IsNull_TisIMixedRealityInputHandler_tE7D2CE8FEAB3A804FC71F58C4F943E1B3EA1FB51_m24A7B0C9E24CCE4E14F091A1CEA8A50A93DEA342_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_0020;
		}
	}
	{
		// inputHandler.OnInputDown(inputData);
		RuntimeObject* L_6 = V_1;
		InputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7 * L_7 = V_0;
		NullCheck(L_6);
		InterfaceActionInvoker1< InputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler::OnInputDown(Microsoft.MixedReality.Toolkit.Input.InputEventData) */, IMixedRealityInputHandler_tE7D2CE8FEAB3A804FC71F58C4F943E1B3EA1FB51_il2cpp_TypeInfo_var, L_6, L_7);
	}

IL_0020:
	{
		// if (handler is IMixedRealityInputActionHandler actionHandler && !actionHandler.IsNull())
		RuntimeObject* L_8 = ___handler0;
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, IMixedRealityInputActionHandler_t99B8222621D02B580431670344F7E93CB8693D10_il2cpp_TypeInfo_var));
		RuntimeObject* L_9 = V_2;
		if (!L_9)
		{
			goto IL_0039;
		}
	}
	{
		RuntimeObject* L_10 = V_2;
		bool L_11;
		L_11 = UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_t99B8222621D02B580431670344F7E93CB8693D10_mF97259E6D002B5F855DEA2C610FB5CAF9EBE2F40(L_10, /*hidden argument*/UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_t99B8222621D02B580431670344F7E93CB8693D10_mF97259E6D002B5F855DEA2C610FB5CAF9EBE2F40_RuntimeMethod_var);
		if (L_11)
		{
			goto IL_0039;
		}
	}
	{
		// actionHandler.OnActionStarted(inputData);
		RuntimeObject* L_12 = V_2;
		InputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7 * L_13 = V_0;
		NullCheck(L_12);
		InterfaceActionInvoker1< BaseInputEventData_t02276CD97E92BD7C275FAE85C4B30C0055814224 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputActionHandler::OnActionStarted(Microsoft.MixedReality.Toolkit.Input.BaseInputEventData) */, IMixedRealityInputActionHandler_t99B8222621D02B580431670344F7E93CB8693D10_il2cpp_TypeInfo_var, L_12, L_13);
	}

IL_0039:
	{
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_17(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_17_m00D9270FAC28A360DDF2221C2CB375DB4C9BD50E (U3CU3Ec_t738602F83F328AD6B4BE4BEE3436DDB566A8F3DA * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7_mBEDC7A18A8EA2D53031F73EEE321D3D40366F563_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputHandler_tE7D2CE8FEAB3A804FC71F58C4F943E1B3EA1FB51_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7_mBEDC7A18A8EA2D53031F73EEE321D3D40366F563(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7_mBEDC7A18A8EA2D53031F73EEE321D3D40366F563_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnInputUp(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler::OnInputUp(Microsoft.MixedReality.Toolkit.Input.InputEventData) */, IMixedRealityInputHandler_tE7D2CE8FEAB3A804FC71F58C4F943E1B3EA1FB51_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_18(Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_18_mE63C1D4533289D2B59EB9E963480D676D1A69231 (U3CU3Ec_t738602F83F328AD6B4BE4BEE3436DDB566A8F3DA * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7_mBEDC7A18A8EA2D53031F73EEE321D3D40366F563_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputActionHandler_t99B8222621D02B580431670344F7E93CB8693D10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputHandler_tE7D2CE8FEAB3A804FC71F58C4F943E1B3EA1FB51_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_t99B8222621D02B580431670344F7E93CB8693D10_mF97259E6D002B5F855DEA2C610FB5CAF9EBE2F40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityObjectExtensions_IsNull_TisIMixedRealityInputHandler_tE7D2CE8FEAB3A804FC71F58C4F943E1B3EA1FB51_m24A7B0C9E24CCE4E14F091A1CEA8A50A93DEA342_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// var inputData = ExecuteEvents.ValidateEventData<InputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7_mBEDC7A18A8EA2D53031F73EEE321D3D40366F563(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7_mBEDC7A18A8EA2D53031F73EEE321D3D40366F563_RuntimeMethod_var);
		V_0 = L_1;
		// if (handler is IMixedRealityInputHandler inputHandler && !inputHandler.IsNull())
		RuntimeObject* L_2 = ___handler0;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IMixedRealityInputHandler_tE7D2CE8FEAB3A804FC71F58C4F943E1B3EA1FB51_il2cpp_TypeInfo_var));
		RuntimeObject* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_4 = V_1;
		bool L_5;
		L_5 = UnityObjectExtensions_IsNull_TisIMixedRealityInputHandler_tE7D2CE8FEAB3A804FC71F58C4F943E1B3EA1FB51_m24A7B0C9E24CCE4E14F091A1CEA8A50A93DEA342(L_4, /*hidden argument*/UnityObjectExtensions_IsNull_TisIMixedRealityInputHandler_tE7D2CE8FEAB3A804FC71F58C4F943E1B3EA1FB51_m24A7B0C9E24CCE4E14F091A1CEA8A50A93DEA342_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_0020;
		}
	}
	{
		// inputHandler.OnInputUp(inputData);
		RuntimeObject* L_6 = V_1;
		InputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7 * L_7 = V_0;
		NullCheck(L_6);
		InterfaceActionInvoker1< InputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler::OnInputUp(Microsoft.MixedReality.Toolkit.Input.InputEventData) */, IMixedRealityInputHandler_tE7D2CE8FEAB3A804FC71F58C4F943E1B3EA1FB51_il2cpp_TypeInfo_var, L_6, L_7);
	}

IL_0020:
	{
		// if (handler is IMixedRealityInputActionHandler actionHandler && !actionHandler.IsNull())
		RuntimeObject* L_8 = ___handler0;
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, IMixedRealityInputActionHandler_t99B8222621D02B580431670344F7E93CB8693D10_il2cpp_TypeInfo_var));
		RuntimeObject* L_9 = V_2;
		if (!L_9)
		{
			goto IL_0039;
		}
	}
	{
		RuntimeObject* L_10 = V_2;
		bool L_11;
		L_11 = UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_t99B8222621D02B580431670344F7E93CB8693D10_mF97259E6D002B5F855DEA2C610FB5CAF9EBE2F40(L_10, /*hidden argument*/UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_t99B8222621D02B580431670344F7E93CB8693D10_mF97259E6D002B5F855DEA2C610FB5CAF9EBE2F40_RuntimeMethod_var);
		if (L_11)
		{
			goto IL_0039;
		}
	}
	{
		// actionHandler.OnActionEnded(inputData);
		RuntimeObject* L_12 = V_2;
		InputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7 * L_13 = V_0;
		NullCheck(L_12);
		InterfaceActionInvoker1< BaseInputEventData_t02276CD97E92BD7C275FAE85C4B30C0055814224 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputActionHandler::OnActionEnded(Microsoft.MixedReality.Toolkit.Input.BaseInputEventData) */, IMixedRealityInputActionHandler_t99B8222621D02B580431670344F7E93CB8693D10_il2cpp_TypeInfo_var, L_12, L_13);
	}

IL_0039:
	{
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_19(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<System.Single>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_19_m18CE5E3346590683E6E7C15BF7D306AD4A2DA333 (U3CU3Ec_t738602F83F328AD6B4BE4BEE3436DDB566A8F3DA * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_t0537B6B07E4ABB5C85E144AF838FF76463759E3E_m91AFF61C1A2850DB0A62E0E533B50CE345FD7758_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputHandler_1_tB31BDB88FAD4219715C166B49EB8B015909FFA1F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_t0537B6B07E4ABB5C85E144AF838FF76463759E3E * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<float>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_t0537B6B07E4ABB5C85E144AF838FF76463759E3E * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_t0537B6B07E4ABB5C85E144AF838FF76463759E3E_m91AFF61C1A2850DB0A62E0E533B50CE345FD7758(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_t0537B6B07E4ABB5C85E144AF838FF76463759E3E_m91AFF61C1A2850DB0A62E0E533B50CE345FD7758_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnInputChanged(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_t0537B6B07E4ABB5C85E144AF838FF76463759E3E * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_t0537B6B07E4ABB5C85E144AF838FF76463759E3E * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<System.Single>::OnInputChanged(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityInputHandler_1_tB31BDB88FAD4219715C166B49EB8B015909FFA1F_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_20(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector2>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_20_mC69EC9B30AEF0931476325C90B3790357149CD8F (U3CU3Ec_t738602F83F328AD6B4BE4BEE3436DDB566A8F3DA * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_t92F237401150131C650E068132364E4714AFE903_mF3B4B57CC8C38AF6147E09CC7CAAFFB663A6DAD5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputHandler_1_t12545A125839F95E4B01E255AFD8E7897118FF3F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_t92F237401150131C650E068132364E4714AFE903 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<Vector2>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_t92F237401150131C650E068132364E4714AFE903 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_t92F237401150131C650E068132364E4714AFE903_mF3B4B57CC8C38AF6147E09CC7CAAFFB663A6DAD5(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_t92F237401150131C650E068132364E4714AFE903_mF3B4B57CC8C38AF6147E09CC7CAAFFB663A6DAD5_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnInputChanged(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_t92F237401150131C650E068132364E4714AFE903 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_t92F237401150131C650E068132364E4714AFE903 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector2>::OnInputChanged(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityInputHandler_1_t12545A125839F95E4B01E255AFD8E7897118FF3F_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_21(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector3>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_21_m254D822EBEA394269042DD030D44443255FA36C3 (U3CU3Ec_t738602F83F328AD6B4BE4BEE3436DDB566A8F3DA * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_t62E6DA80533CB6FF5006FD3E02EB52A3FADFB900_m671764AA603B1E35D1BFC0098684E24A7809FFFF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputHandler_1_t6F09834DD7B19091E1ED8594F7610C6BDD8AC63F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_t62E6DA80533CB6FF5006FD3E02EB52A3FADFB900 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<Vector3>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_t62E6DA80533CB6FF5006FD3E02EB52A3FADFB900 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_t62E6DA80533CB6FF5006FD3E02EB52A3FADFB900_m671764AA603B1E35D1BFC0098684E24A7809FFFF(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_t62E6DA80533CB6FF5006FD3E02EB52A3FADFB900_m671764AA603B1E35D1BFC0098684E24A7809FFFF_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnInputChanged(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_t62E6DA80533CB6FF5006FD3E02EB52A3FADFB900 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_t62E6DA80533CB6FF5006FD3E02EB52A3FADFB900 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector3>::OnInputChanged(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityInputHandler_1_t6F09834DD7B19091E1ED8594F7610C6BDD8AC63F_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_22(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Quaternion>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_22_m818344D28E148FC5FE810ACF1D2AA91B7570A638 (U3CU3Ec_t738602F83F328AD6B4BE4BEE3436DDB566A8F3DA * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_tBE137B5127162FEBFFDFE7F6ED8BEE73A3969646_m25E3F40E5D3B9154BE42629565BF0D633127422A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputHandler_1_t89D0440F2F0DE20B938EF5E51392792C74511E97_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_tBE137B5127162FEBFFDFE7F6ED8BEE73A3969646 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<Quaternion>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_tBE137B5127162FEBFFDFE7F6ED8BEE73A3969646 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_tBE137B5127162FEBFFDFE7F6ED8BEE73A3969646_m25E3F40E5D3B9154BE42629565BF0D633127422A(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_tBE137B5127162FEBFFDFE7F6ED8BEE73A3969646_m25E3F40E5D3B9154BE42629565BF0D633127422A_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnInputChanged(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_tBE137B5127162FEBFFDFE7F6ED8BEE73A3969646 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_tBE137B5127162FEBFFDFE7F6ED8BEE73A3969646 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Quaternion>::OnInputChanged(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityInputHandler_1_t89D0440F2F0DE20B938EF5E51392792C74511E97_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_23(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_23_m27A9E9D527D5655E6D7604A8E14F14F3AAE059AA (U3CU3Ec_t738602F83F328AD6B4BE4BEE3436DDB566A8F3DA * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_tCC0938E22E808EE51312F8D480E225522F26CF28_m4E46348EE1A9317620BABB6A77DCF694BE4F179C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputHandler_1_tC82285C8535A08BA83533A10B3C3CCCBA8483953_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_tCC0938E22E808EE51312F8D480E225522F26CF28 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<MixedRealityPose>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_tCC0938E22E808EE51312F8D480E225522F26CF28 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_tCC0938E22E808EE51312F8D480E225522F26CF28_m4E46348EE1A9317620BABB6A77DCF694BE4F179C(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_tCC0938E22E808EE51312F8D480E225522F26CF28_m4E46348EE1A9317620BABB6A77DCF694BE4F179C_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnInputChanged(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_tCC0938E22E808EE51312F8D480E225522F26CF28 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_tCC0938E22E808EE51312F8D480E225522F26CF28 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::OnInputChanged(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityInputHandler_1_tC82285C8535A08BA83533A10B3C3CCCBA8483953_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_24(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_24_mA3B8208C8E9F6ED76A40A92E223C18D9702D5EDC (U3CU3Ec_t738602F83F328AD6B4BE4BEE3436DDB566A8F3DA * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7_mBEDC7A18A8EA2D53031F73EEE321D3D40366F563_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_t2AF9AF385BB59D19DA456667F689097049F120E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7_mBEDC7A18A8EA2D53031F73EEE321D3D40366F563(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7_mBEDC7A18A8EA2D53031F73EEE321D3D40366F563_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureStarted(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler::OnGestureStarted(Microsoft.MixedReality.Toolkit.Input.InputEventData) */, IMixedRealityGestureHandler_t2AF9AF385BB59D19DA456667F689097049F120E8_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_25(Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_25_m19CEE4B04ACC1868C32FFBD01601FC63265C241D (U3CU3Ec_t738602F83F328AD6B4BE4BEE3436DDB566A8F3DA * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7_mBEDC7A18A8EA2D53031F73EEE321D3D40366F563_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_t2AF9AF385BB59D19DA456667F689097049F120E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputActionHandler_t99B8222621D02B580431670344F7E93CB8693D10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityObjectExtensions_IsNull_TisIMixedRealityGestureHandler_t2AF9AF385BB59D19DA456667F689097049F120E8_m2C8CBF29499A7CF413582F8189D00DF9A0EFE9CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_t99B8222621D02B580431670344F7E93CB8693D10_mF97259E6D002B5F855DEA2C610FB5CAF9EBE2F40_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// var inputData = ExecuteEvents.ValidateEventData<InputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7_mBEDC7A18A8EA2D53031F73EEE321D3D40366F563(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7_mBEDC7A18A8EA2D53031F73EEE321D3D40366F563_RuntimeMethod_var);
		V_0 = L_1;
		// if (handler is IMixedRealityGestureHandler gestureHandler && !gestureHandler.IsNull())
		RuntimeObject* L_2 = ___handler0;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IMixedRealityGestureHandler_t2AF9AF385BB59D19DA456667F689097049F120E8_il2cpp_TypeInfo_var));
		RuntimeObject* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_4 = V_1;
		bool L_5;
		L_5 = UnityObjectExtensions_IsNull_TisIMixedRealityGestureHandler_t2AF9AF385BB59D19DA456667F689097049F120E8_m2C8CBF29499A7CF413582F8189D00DF9A0EFE9CD(L_4, /*hidden argument*/UnityObjectExtensions_IsNull_TisIMixedRealityGestureHandler_t2AF9AF385BB59D19DA456667F689097049F120E8_m2C8CBF29499A7CF413582F8189D00DF9A0EFE9CD_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_0020;
		}
	}
	{
		// gestureHandler.OnGestureStarted(inputData);
		RuntimeObject* L_6 = V_1;
		InputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7 * L_7 = V_0;
		NullCheck(L_6);
		InterfaceActionInvoker1< InputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler::OnGestureStarted(Microsoft.MixedReality.Toolkit.Input.InputEventData) */, IMixedRealityGestureHandler_t2AF9AF385BB59D19DA456667F689097049F120E8_il2cpp_TypeInfo_var, L_6, L_7);
	}

IL_0020:
	{
		// if (handler is IMixedRealityInputActionHandler actionHandler && !actionHandler.IsNull())
		RuntimeObject* L_8 = ___handler0;
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, IMixedRealityInputActionHandler_t99B8222621D02B580431670344F7E93CB8693D10_il2cpp_TypeInfo_var));
		RuntimeObject* L_9 = V_2;
		if (!L_9)
		{
			goto IL_0039;
		}
	}
	{
		RuntimeObject* L_10 = V_2;
		bool L_11;
		L_11 = UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_t99B8222621D02B580431670344F7E93CB8693D10_mF97259E6D002B5F855DEA2C610FB5CAF9EBE2F40(L_10, /*hidden argument*/UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_t99B8222621D02B580431670344F7E93CB8693D10_mF97259E6D002B5F855DEA2C610FB5CAF9EBE2F40_RuntimeMethod_var);
		if (L_11)
		{
			goto IL_0039;
		}
	}
	{
		// actionHandler.OnActionStarted(inputData);
		RuntimeObject* L_12 = V_2;
		InputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7 * L_13 = V_0;
		NullCheck(L_12);
		InterfaceActionInvoker1< BaseInputEventData_t02276CD97E92BD7C275FAE85C4B30C0055814224 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputActionHandler::OnActionStarted(Microsoft.MixedReality.Toolkit.Input.BaseInputEventData) */, IMixedRealityInputActionHandler_t99B8222621D02B580431670344F7E93CB8693D10_il2cpp_TypeInfo_var, L_12, L_13);
	}

IL_0039:
	{
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_26(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_26_mF74A5FA7751EB2346E08DF5E8B33422C9B30AADC (U3CU3Ec_t738602F83F328AD6B4BE4BEE3436DDB566A8F3DA * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7_mBEDC7A18A8EA2D53031F73EEE321D3D40366F563_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_t2AF9AF385BB59D19DA456667F689097049F120E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7_mBEDC7A18A8EA2D53031F73EEE321D3D40366F563(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7_mBEDC7A18A8EA2D53031F73EEE321D3D40366F563_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureUpdated(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler::OnGestureUpdated(Microsoft.MixedReality.Toolkit.Input.InputEventData) */, IMixedRealityGestureHandler_t2AF9AF385BB59D19DA456667F689097049F120E8_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_27(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector2>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_27_m3385A72F9BE0E2D4880780EDBD56A7AA5718F53E (U3CU3Ec_t738602F83F328AD6B4BE4BEE3436DDB566A8F3DA * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_t92F237401150131C650E068132364E4714AFE903_mF3B4B57CC8C38AF6147E09CC7CAAFFB663A6DAD5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_1_tB0C3A869E039A3B53F0F65C4C10A1C622980C7D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_t92F237401150131C650E068132364E4714AFE903 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<Vector2>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_t92F237401150131C650E068132364E4714AFE903 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_t92F237401150131C650E068132364E4714AFE903_mF3B4B57CC8C38AF6147E09CC7CAAFFB663A6DAD5(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_t92F237401150131C650E068132364E4714AFE903_mF3B4B57CC8C38AF6147E09CC7CAAFFB663A6DAD5_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureUpdated(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_t92F237401150131C650E068132364E4714AFE903 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_t92F237401150131C650E068132364E4714AFE903 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector2>::OnGestureUpdated(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityGestureHandler_1_tB0C3A869E039A3B53F0F65C4C10A1C622980C7D8_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_28(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector3>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_28_mF895A8CC21FC78059B77DAF932BB6C26A58AB35D (U3CU3Ec_t738602F83F328AD6B4BE4BEE3436DDB566A8F3DA * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_t62E6DA80533CB6FF5006FD3E02EB52A3FADFB900_m671764AA603B1E35D1BFC0098684E24A7809FFFF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_1_tE3CDEDF0C9351399E27448C9B2AB1C87F11B7FFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_t62E6DA80533CB6FF5006FD3E02EB52A3FADFB900 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<Vector3>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_t62E6DA80533CB6FF5006FD3E02EB52A3FADFB900 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_t62E6DA80533CB6FF5006FD3E02EB52A3FADFB900_m671764AA603B1E35D1BFC0098684E24A7809FFFF(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_t62E6DA80533CB6FF5006FD3E02EB52A3FADFB900_m671764AA603B1E35D1BFC0098684E24A7809FFFF_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureUpdated(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_t62E6DA80533CB6FF5006FD3E02EB52A3FADFB900 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_t62E6DA80533CB6FF5006FD3E02EB52A3FADFB900 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector3>::OnGestureUpdated(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityGestureHandler_1_tE3CDEDF0C9351399E27448C9B2AB1C87F11B7FFB_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_29(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Quaternion>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_29_mE0E9B034460115439B62127E0CDD9603DB4A00E6 (U3CU3Ec_t738602F83F328AD6B4BE4BEE3436DDB566A8F3DA * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_tBE137B5127162FEBFFDFE7F6ED8BEE73A3969646_m25E3F40E5D3B9154BE42629565BF0D633127422A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_1_t8151883E328274CF85A74C35341D5AC02DF9F9F5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_tBE137B5127162FEBFFDFE7F6ED8BEE73A3969646 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<Quaternion>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_tBE137B5127162FEBFFDFE7F6ED8BEE73A3969646 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_tBE137B5127162FEBFFDFE7F6ED8BEE73A3969646_m25E3F40E5D3B9154BE42629565BF0D633127422A(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_tBE137B5127162FEBFFDFE7F6ED8BEE73A3969646_m25E3F40E5D3B9154BE42629565BF0D633127422A_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureUpdated(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_tBE137B5127162FEBFFDFE7F6ED8BEE73A3969646 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_tBE137B5127162FEBFFDFE7F6ED8BEE73A3969646 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Quaternion>::OnGestureUpdated(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityGestureHandler_1_t8151883E328274CF85A74C35341D5AC02DF9F9F5_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_30(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_30_m6E6149432AEE1B11DA5A15CD1B0335F54002706B (U3CU3Ec_t738602F83F328AD6B4BE4BEE3436DDB566A8F3DA * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_tCC0938E22E808EE51312F8D480E225522F26CF28_m4E46348EE1A9317620BABB6A77DCF694BE4F179C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_1_tD33A8A4091BF925FD940E4A7AA06E5CE33D03236_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_tCC0938E22E808EE51312F8D480E225522F26CF28 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<MixedRealityPose>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_tCC0938E22E808EE51312F8D480E225522F26CF28 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_tCC0938E22E808EE51312F8D480E225522F26CF28_m4E46348EE1A9317620BABB6A77DCF694BE4F179C(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_tCC0938E22E808EE51312F8D480E225522F26CF28_m4E46348EE1A9317620BABB6A77DCF694BE4F179C_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureUpdated(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_tCC0938E22E808EE51312F8D480E225522F26CF28 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_tCC0938E22E808EE51312F8D480E225522F26CF28 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::OnGestureUpdated(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityGestureHandler_1_tD33A8A4091BF925FD940E4A7AA06E5CE33D03236_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_31(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_31_m044BFD6F7C0E2D2080A6EA93DBC9C181D9DC847A (U3CU3Ec_t738602F83F328AD6B4BE4BEE3436DDB566A8F3DA * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7_mBEDC7A18A8EA2D53031F73EEE321D3D40366F563_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_t2AF9AF385BB59D19DA456667F689097049F120E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7_mBEDC7A18A8EA2D53031F73EEE321D3D40366F563(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7_mBEDC7A18A8EA2D53031F73EEE321D3D40366F563_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureCompleted(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7 * >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler::OnGestureCompleted(Microsoft.MixedReality.Toolkit.Input.InputEventData) */, IMixedRealityGestureHandler_t2AF9AF385BB59D19DA456667F689097049F120E8_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_32(Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_32_mBCECA2EF45808A112CAE6D65A93539078B44FB98 (U3CU3Ec_t738602F83F328AD6B4BE4BEE3436DDB566A8F3DA * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7_mBEDC7A18A8EA2D53031F73EEE321D3D40366F563_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_t2AF9AF385BB59D19DA456667F689097049F120E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputActionHandler_t99B8222621D02B580431670344F7E93CB8693D10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityObjectExtensions_IsNull_TisIMixedRealityGestureHandler_t2AF9AF385BB59D19DA456667F689097049F120E8_m2C8CBF29499A7CF413582F8189D00DF9A0EFE9CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_t99B8222621D02B580431670344F7E93CB8693D10_mF97259E6D002B5F855DEA2C610FB5CAF9EBE2F40_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// var inputData = ExecuteEvents.ValidateEventData<InputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7_mBEDC7A18A8EA2D53031F73EEE321D3D40366F563(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7_mBEDC7A18A8EA2D53031F73EEE321D3D40366F563_RuntimeMethod_var);
		V_0 = L_1;
		// if (handler is IMixedRealityGestureHandler gestureHandler && !gestureHandler.IsNull())
		RuntimeObject* L_2 = ___handler0;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IMixedRealityGestureHandler_t2AF9AF385BB59D19DA456667F689097049F120E8_il2cpp_TypeInfo_var));
		RuntimeObject* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_4 = V_1;
		bool L_5;
		L_5 = UnityObjectExtensions_IsNull_TisIMixedRealityGestureHandler_t2AF9AF385BB59D19DA456667F689097049F120E8_m2C8CBF29499A7CF413582F8189D00DF9A0EFE9CD(L_4, /*hidden argument*/UnityObjectExtensions_IsNull_TisIMixedRealityGestureHandler_t2AF9AF385BB59D19DA456667F689097049F120E8_m2C8CBF29499A7CF413582F8189D00DF9A0EFE9CD_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_0020;
		}
	}
	{
		// gestureHandler.OnGestureCompleted(inputData);
		RuntimeObject* L_6 = V_1;
		InputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7 * L_7 = V_0;
		NullCheck(L_6);
		InterfaceActionInvoker1< InputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7 * >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler::OnGestureCompleted(Microsoft.MixedReality.Toolkit.Input.InputEventData) */, IMixedRealityGestureHandler_t2AF9AF385BB59D19DA456667F689097049F120E8_il2cpp_TypeInfo_var, L_6, L_7);
	}

IL_0020:
	{
		// if (handler is IMixedRealityInputActionHandler actionHandler && !actionHandler.IsNull())
		RuntimeObject* L_8 = ___handler0;
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, IMixedRealityInputActionHandler_t99B8222621D02B580431670344F7E93CB8693D10_il2cpp_TypeInfo_var));
		RuntimeObject* L_9 = V_2;
		if (!L_9)
		{
			goto IL_0039;
		}
	}
	{
		RuntimeObject* L_10 = V_2;
		bool L_11;
		L_11 = UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_t99B8222621D02B580431670344F7E93CB8693D10_mF97259E6D002B5F855DEA2C610FB5CAF9EBE2F40(L_10, /*hidden argument*/UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_t99B8222621D02B580431670344F7E93CB8693D10_mF97259E6D002B5F855DEA2C610FB5CAF9EBE2F40_RuntimeMethod_var);
		if (L_11)
		{
			goto IL_0039;
		}
	}
	{
		// actionHandler.OnActionEnded(inputData);
		RuntimeObject* L_12 = V_2;
		InputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7 * L_13 = V_0;
		NullCheck(L_12);
		InterfaceActionInvoker1< BaseInputEventData_t02276CD97E92BD7C275FAE85C4B30C0055814224 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputActionHandler::OnActionEnded(Microsoft.MixedReality.Toolkit.Input.BaseInputEventData) */, IMixedRealityInputActionHandler_t99B8222621D02B580431670344F7E93CB8693D10_il2cpp_TypeInfo_var, L_12, L_13);
	}

IL_0039:
	{
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_33(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector2>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_33_m81B54D32CF8A7513C4E28C2029E04B4678BB2EA7 (U3CU3Ec_t738602F83F328AD6B4BE4BEE3436DDB566A8F3DA * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_t92F237401150131C650E068132364E4714AFE903_mF3B4B57CC8C38AF6147E09CC7CAAFFB663A6DAD5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_1_tB0C3A869E039A3B53F0F65C4C10A1C622980C7D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_t92F237401150131C650E068132364E4714AFE903 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<Vector2>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_t92F237401150131C650E068132364E4714AFE903 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_t92F237401150131C650E068132364E4714AFE903_mF3B4B57CC8C38AF6147E09CC7CAAFFB663A6DAD5(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_t92F237401150131C650E068132364E4714AFE903_mF3B4B57CC8C38AF6147E09CC7CAAFFB663A6DAD5_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureCompleted(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_t92F237401150131C650E068132364E4714AFE903 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_t92F237401150131C650E068132364E4714AFE903 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector2>::OnGestureCompleted(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityGestureHandler_1_tB0C3A869E039A3B53F0F65C4C10A1C622980C7D8_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_34(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector3>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_34_mE6A770740D36694BEE030EFAB1EB3B53F5C4E233 (U3CU3Ec_t738602F83F328AD6B4BE4BEE3436DDB566A8F3DA * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_t62E6DA80533CB6FF5006FD3E02EB52A3FADFB900_m671764AA603B1E35D1BFC0098684E24A7809FFFF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_1_tE3CDEDF0C9351399E27448C9B2AB1C87F11B7FFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_t62E6DA80533CB6FF5006FD3E02EB52A3FADFB900 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<Vector3>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_t62E6DA80533CB6FF5006FD3E02EB52A3FADFB900 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_t62E6DA80533CB6FF5006FD3E02EB52A3FADFB900_m671764AA603B1E35D1BFC0098684E24A7809FFFF(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_t62E6DA80533CB6FF5006FD3E02EB52A3FADFB900_m671764AA603B1E35D1BFC0098684E24A7809FFFF_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureCompleted(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_t62E6DA80533CB6FF5006FD3E02EB52A3FADFB900 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_t62E6DA80533CB6FF5006FD3E02EB52A3FADFB900 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector3>::OnGestureCompleted(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityGestureHandler_1_tE3CDEDF0C9351399E27448C9B2AB1C87F11B7FFB_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_35(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Quaternion>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_35_mDB92EB5C1135E91FD352E0BF60C65FE2F6518A3A (U3CU3Ec_t738602F83F328AD6B4BE4BEE3436DDB566A8F3DA * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_tBE137B5127162FEBFFDFE7F6ED8BEE73A3969646_m25E3F40E5D3B9154BE42629565BF0D633127422A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_1_t8151883E328274CF85A74C35341D5AC02DF9F9F5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_tBE137B5127162FEBFFDFE7F6ED8BEE73A3969646 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<Quaternion>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_tBE137B5127162FEBFFDFE7F6ED8BEE73A3969646 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_tBE137B5127162FEBFFDFE7F6ED8BEE73A3969646_m25E3F40E5D3B9154BE42629565BF0D633127422A(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_tBE137B5127162FEBFFDFE7F6ED8BEE73A3969646_m25E3F40E5D3B9154BE42629565BF0D633127422A_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureCompleted(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_tBE137B5127162FEBFFDFE7F6ED8BEE73A3969646 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_tBE137B5127162FEBFFDFE7F6ED8BEE73A3969646 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Quaternion>::OnGestureCompleted(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityGestureHandler_1_t8151883E328274CF85A74C35341D5AC02DF9F9F5_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_36(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_36_m572C7A0FEEC75EB283C93CC9EFAD51D0E37B5F04 (U3CU3Ec_t738602F83F328AD6B4BE4BEE3436DDB566A8F3DA * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_tCC0938E22E808EE51312F8D480E225522F26CF28_m4E46348EE1A9317620BABB6A77DCF694BE4F179C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_1_tD33A8A4091BF925FD940E4A7AA06E5CE33D03236_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_tCC0938E22E808EE51312F8D480E225522F26CF28 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<MixedRealityPose>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_tCC0938E22E808EE51312F8D480E225522F26CF28 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_tCC0938E22E808EE51312F8D480E225522F26CF28_m4E46348EE1A9317620BABB6A77DCF694BE4F179C(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_tCC0938E22E808EE51312F8D480E225522F26CF28_m4E46348EE1A9317620BABB6A77DCF694BE4F179C_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureCompleted(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_tCC0938E22E808EE51312F8D480E225522F26CF28 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_tCC0938E22E808EE51312F8D480E225522F26CF28 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::OnGestureCompleted(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityGestureHandler_1_tD33A8A4091BF925FD940E4A7AA06E5CE33D03236_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_37(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_37_mE8D9E6CF68E3942131375CAD468926AC8D7A739D (U3CU3Ec_t738602F83F328AD6B4BE4BEE3436DDB566A8F3DA * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7_mBEDC7A18A8EA2D53031F73EEE321D3D40366F563_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_t2AF9AF385BB59D19DA456667F689097049F120E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7_mBEDC7A18A8EA2D53031F73EEE321D3D40366F563(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7_mBEDC7A18A8EA2D53031F73EEE321D3D40366F563_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureCanceled(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7 * >::Invoke(3 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler::OnGestureCanceled(Microsoft.MixedReality.Toolkit.Input.InputEventData) */, IMixedRealityGestureHandler_t2AF9AF385BB59D19DA456667F689097049F120E8_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_38(Microsoft.MixedReality.Toolkit.Input.IMixedRealitySpeechHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_38_m57DB9819801F94BBFDC5C5C29DF53A2F53E0BCBD (U3CU3Ec_t738602F83F328AD6B4BE4BEE3436DDB566A8F3DA * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisSpeechEventData_tF39C472B089E67439FD259C5939D8C0F60F66548_m2D0B1E16659F2D60F479574338FFC9D58799C031_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealitySpeechHandler_t66BC42AC0B95413148789EBA7474B8B0FC07D0A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SpeechEventData_tF39C472B089E67439FD259C5939D8C0F60F66548 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<SpeechEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		SpeechEventData_tF39C472B089E67439FD259C5939D8C0F60F66548 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisSpeechEventData_tF39C472B089E67439FD259C5939D8C0F60F66548_m2D0B1E16659F2D60F479574338FFC9D58799C031(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisSpeechEventData_tF39C472B089E67439FD259C5939D8C0F60F66548_m2D0B1E16659F2D60F479574338FFC9D58799C031_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnSpeechKeywordRecognized(casted);
		RuntimeObject* L_2 = ___handler0;
		SpeechEventData_tF39C472B089E67439FD259C5939D8C0F60F66548 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< SpeechEventData_tF39C472B089E67439FD259C5939D8C0F60F66548 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealitySpeechHandler::OnSpeechKeywordRecognized(Microsoft.MixedReality.Toolkit.Input.SpeechEventData) */, IMixedRealitySpeechHandler_t66BC42AC0B95413148789EBA7474B8B0FC07D0A9_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_39(Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_39_m3F879BD33C590E98CE6015804A8098FEB599A9B8 (U3CU3Ec_t738602F83F328AD6B4BE4BEE3436DDB566A8F3DA * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisSpeechEventData_tF39C472B089E67439FD259C5939D8C0F60F66548_m2D0B1E16659F2D60F479574338FFC9D58799C031_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputActionHandler_t99B8222621D02B580431670344F7E93CB8693D10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealitySpeechHandler_t66BC42AC0B95413148789EBA7474B8B0FC07D0A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_t99B8222621D02B580431670344F7E93CB8693D10_mF97259E6D002B5F855DEA2C610FB5CAF9EBE2F40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityObjectExtensions_IsNull_TisIMixedRealitySpeechHandler_t66BC42AC0B95413148789EBA7474B8B0FC07D0A9_m6D8E3C5FE25417E8ADF0C4A0D43F75FB1345D221_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	SpeechEventData_tF39C472B089E67439FD259C5939D8C0F60F66548 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// var speechData = ExecuteEvents.ValidateEventData<SpeechEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		SpeechEventData_tF39C472B089E67439FD259C5939D8C0F60F66548 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisSpeechEventData_tF39C472B089E67439FD259C5939D8C0F60F66548_m2D0B1E16659F2D60F479574338FFC9D58799C031(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisSpeechEventData_tF39C472B089E67439FD259C5939D8C0F60F66548_m2D0B1E16659F2D60F479574338FFC9D58799C031_RuntimeMethod_var);
		V_0 = L_1;
		// if (handler is IMixedRealitySpeechHandler speechHandler && !speechHandler.IsNull())
		RuntimeObject* L_2 = ___handler0;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IMixedRealitySpeechHandler_t66BC42AC0B95413148789EBA7474B8B0FC07D0A9_il2cpp_TypeInfo_var));
		RuntimeObject* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_4 = V_1;
		bool L_5;
		L_5 = UnityObjectExtensions_IsNull_TisIMixedRealitySpeechHandler_t66BC42AC0B95413148789EBA7474B8B0FC07D0A9_m6D8E3C5FE25417E8ADF0C4A0D43F75FB1345D221(L_4, /*hidden argument*/UnityObjectExtensions_IsNull_TisIMixedRealitySpeechHandler_t66BC42AC0B95413148789EBA7474B8B0FC07D0A9_m6D8E3C5FE25417E8ADF0C4A0D43F75FB1345D221_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_0020;
		}
	}
	{
		// speechHandler.OnSpeechKeywordRecognized(speechData);
		RuntimeObject* L_6 = V_1;
		SpeechEventData_tF39C472B089E67439FD259C5939D8C0F60F66548 * L_7 = V_0;
		NullCheck(L_6);
		InterfaceActionInvoker1< SpeechEventData_tF39C472B089E67439FD259C5939D8C0F60F66548 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealitySpeechHandler::OnSpeechKeywordRecognized(Microsoft.MixedReality.Toolkit.Input.SpeechEventData) */, IMixedRealitySpeechHandler_t66BC42AC0B95413148789EBA7474B8B0FC07D0A9_il2cpp_TypeInfo_var, L_6, L_7);
	}

IL_0020:
	{
		// if (handler is IMixedRealityInputActionHandler actionHandler && !actionHandler.IsNull())
		RuntimeObject* L_8 = ___handler0;
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, IMixedRealityInputActionHandler_t99B8222621D02B580431670344F7E93CB8693D10_il2cpp_TypeInfo_var));
		RuntimeObject* L_9 = V_2;
		if (!L_9)
		{
			goto IL_0040;
		}
	}
	{
		RuntimeObject* L_10 = V_2;
		bool L_11;
		L_11 = UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_t99B8222621D02B580431670344F7E93CB8693D10_mF97259E6D002B5F855DEA2C610FB5CAF9EBE2F40(L_10, /*hidden argument*/UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_t99B8222621D02B580431670344F7E93CB8693D10_mF97259E6D002B5F855DEA2C610FB5CAF9EBE2F40_RuntimeMethod_var);
		if (L_11)
		{
			goto IL_0040;
		}
	}
	{
		// actionHandler.OnActionStarted(speechData);
		RuntimeObject* L_12 = V_2;
		SpeechEventData_tF39C472B089E67439FD259C5939D8C0F60F66548 * L_13 = V_0;
		NullCheck(L_12);
		InterfaceActionInvoker1< BaseInputEventData_t02276CD97E92BD7C275FAE85C4B30C0055814224 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputActionHandler::OnActionStarted(Microsoft.MixedReality.Toolkit.Input.BaseInputEventData) */, IMixedRealityInputActionHandler_t99B8222621D02B580431670344F7E93CB8693D10_il2cpp_TypeInfo_var, L_12, L_13);
		// actionHandler.OnActionEnded(speechData);
		RuntimeObject* L_14 = V_2;
		SpeechEventData_tF39C472B089E67439FD259C5939D8C0F60F66548 * L_15 = V_0;
		NullCheck(L_14);
		InterfaceActionInvoker1< BaseInputEventData_t02276CD97E92BD7C275FAE85C4B30C0055814224 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputActionHandler::OnActionEnded(Microsoft.MixedReality.Toolkit.Input.BaseInputEventData) */, IMixedRealityInputActionHandler_t99B8222621D02B580431670344F7E93CB8693D10_il2cpp_TypeInfo_var, L_14, L_15);
	}

IL_0040:
	{
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_40(Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_40_m180AF55DEDF71CC793FAEF5919B41E1D0ADB0CDD (U3CU3Ec_t738602F83F328AD6B4BE4BEE3436DDB566A8F3DA * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisDictationEventData_t8CFAB3BF256A7952C07C0CD8C7D4489905A1AC82_m357ACFCEE0793A378A78AAD8A526DC8CC5604AE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityDictationHandler_t82798460DB68D9F039EB23AE836CBB58BCA1A598_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DictationEventData_t8CFAB3BF256A7952C07C0CD8C7D4489905A1AC82 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<DictationEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		DictationEventData_t8CFAB3BF256A7952C07C0CD8C7D4489905A1AC82 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisDictationEventData_t8CFAB3BF256A7952C07C0CD8C7D4489905A1AC82_m357ACFCEE0793A378A78AAD8A526DC8CC5604AE1(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisDictationEventData_t8CFAB3BF256A7952C07C0CD8C7D4489905A1AC82_m357ACFCEE0793A378A78AAD8A526DC8CC5604AE1_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnDictationHypothesis(casted);
		RuntimeObject* L_2 = ___handler0;
		DictationEventData_t8CFAB3BF256A7952C07C0CD8C7D4489905A1AC82 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< DictationEventData_t8CFAB3BF256A7952C07C0CD8C7D4489905A1AC82 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler::OnDictationHypothesis(Microsoft.MixedReality.Toolkit.Input.DictationEventData) */, IMixedRealityDictationHandler_t82798460DB68D9F039EB23AE836CBB58BCA1A598_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_41(Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_41_m60A7DB4FB3DA6F3D9A039A2903C0F7BD53973C68 (U3CU3Ec_t738602F83F328AD6B4BE4BEE3436DDB566A8F3DA * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisDictationEventData_t8CFAB3BF256A7952C07C0CD8C7D4489905A1AC82_m357ACFCEE0793A378A78AAD8A526DC8CC5604AE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityDictationHandler_t82798460DB68D9F039EB23AE836CBB58BCA1A598_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DictationEventData_t8CFAB3BF256A7952C07C0CD8C7D4489905A1AC82 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<DictationEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		DictationEventData_t8CFAB3BF256A7952C07C0CD8C7D4489905A1AC82 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisDictationEventData_t8CFAB3BF256A7952C07C0CD8C7D4489905A1AC82_m357ACFCEE0793A378A78AAD8A526DC8CC5604AE1(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisDictationEventData_t8CFAB3BF256A7952C07C0CD8C7D4489905A1AC82_m357ACFCEE0793A378A78AAD8A526DC8CC5604AE1_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnDictationResult(casted);
		RuntimeObject* L_2 = ___handler0;
		DictationEventData_t8CFAB3BF256A7952C07C0CD8C7D4489905A1AC82 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< DictationEventData_t8CFAB3BF256A7952C07C0CD8C7D4489905A1AC82 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler::OnDictationResult(Microsoft.MixedReality.Toolkit.Input.DictationEventData) */, IMixedRealityDictationHandler_t82798460DB68D9F039EB23AE836CBB58BCA1A598_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_42(Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_42_mFCE2429EBFBB3119712E31EAA7A0F86B118BBC2E (U3CU3Ec_t738602F83F328AD6B4BE4BEE3436DDB566A8F3DA * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisDictationEventData_t8CFAB3BF256A7952C07C0CD8C7D4489905A1AC82_m357ACFCEE0793A378A78AAD8A526DC8CC5604AE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityDictationHandler_t82798460DB68D9F039EB23AE836CBB58BCA1A598_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DictationEventData_t8CFAB3BF256A7952C07C0CD8C7D4489905A1AC82 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<DictationEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		DictationEventData_t8CFAB3BF256A7952C07C0CD8C7D4489905A1AC82 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisDictationEventData_t8CFAB3BF256A7952C07C0CD8C7D4489905A1AC82_m357ACFCEE0793A378A78AAD8A526DC8CC5604AE1(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisDictationEventData_t8CFAB3BF256A7952C07C0CD8C7D4489905A1AC82_m357ACFCEE0793A378A78AAD8A526DC8CC5604AE1_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnDictationComplete(casted);
		RuntimeObject* L_2 = ___handler0;
		DictationEventData_t8CFAB3BF256A7952C07C0CD8C7D4489905A1AC82 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< DictationEventData_t8CFAB3BF256A7952C07C0CD8C7D4489905A1AC82 * >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler::OnDictationComplete(Microsoft.MixedReality.Toolkit.Input.DictationEventData) */, IMixedRealityDictationHandler_t82798460DB68D9F039EB23AE836CBB58BCA1A598_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_43(Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_43_m3F9F5EF49C173AF6D3F9E330264C57F2E77FF898 (U3CU3Ec_t738602F83F328AD6B4BE4BEE3436DDB566A8F3DA * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisDictationEventData_t8CFAB3BF256A7952C07C0CD8C7D4489905A1AC82_m357ACFCEE0793A378A78AAD8A526DC8CC5604AE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityDictationHandler_t82798460DB68D9F039EB23AE836CBB58BCA1A598_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DictationEventData_t8CFAB3BF256A7952C07C0CD8C7D4489905A1AC82 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<DictationEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		DictationEventData_t8CFAB3BF256A7952C07C0CD8C7D4489905A1AC82 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisDictationEventData_t8CFAB3BF256A7952C07C0CD8C7D4489905A1AC82_m357ACFCEE0793A378A78AAD8A526DC8CC5604AE1(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisDictationEventData_t8CFAB3BF256A7952C07C0CD8C7D4489905A1AC82_m357ACFCEE0793A378A78AAD8A526DC8CC5604AE1_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnDictationError(casted);
		RuntimeObject* L_2 = ___handler0;
		DictationEventData_t8CFAB3BF256A7952C07C0CD8C7D4489905A1AC82 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< DictationEventData_t8CFAB3BF256A7952C07C0CD8C7D4489905A1AC82 * >::Invoke(3 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler::OnDictationError(Microsoft.MixedReality.Toolkit.Input.DictationEventData) */, IMixedRealityDictationHandler_t82798460DB68D9F039EB23AE836CBB58BCA1A598_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_44(Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_44_mE67CDEBB5CE54638FCDC65FDE0E845F8D7E52CB8 (U3CU3Ec_t738602F83F328AD6B4BE4BEE3436DDB566A8F3DA * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_t03651600101A901771C241588D9401D9E466D779_mB6DDDF5FB7856BEAF734656BFBD38E8F33671B2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityHandJointHandler_tF1903D3D19B50C0187B188BBDF69549CBEB1708E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_t03651600101A901771C241588D9401D9E466D779 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<IDictionary<TrackedHandJoint, MixedRealityPose>>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_t03651600101A901771C241588D9401D9E466D779 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_t03651600101A901771C241588D9401D9E466D779_mB6DDDF5FB7856BEAF734656BFBD38E8F33671B2E(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_t03651600101A901771C241588D9401D9E466D779_mB6DDDF5FB7856BEAF734656BFBD38E8F33671B2E_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnHandJointsUpdated(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_t03651600101A901771C241588D9401D9E466D779 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_t03651600101A901771C241588D9401D9E466D779 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointHandler::OnHandJointsUpdated(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Collections.Generic.IDictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>>) */, IMixedRealityHandJointHandler_tF1903D3D19B50C0187B188BBDF69549CBEB1708E_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_45(Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandMeshHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_45_m121A02FE62F85F37D31C64221D11F9796D57F23B (U3CU3Ec_t738602F83F328AD6B4BE4BEE3436DDB566A8F3DA * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_tB79F7140EE0E13A566F61C25F0CBC35E52135A75_m422D6C1A4F7920DA15F4C9BEEF707695478C8FF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityHandMeshHandler_t6EB348D7EFC07EA32CD9B24C410F4D39C1265CF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_tB79F7140EE0E13A566F61C25F0CBC35E52135A75 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<HandMeshInfo>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_tB79F7140EE0E13A566F61C25F0CBC35E52135A75 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_tB79F7140EE0E13A566F61C25F0CBC35E52135A75_m422D6C1A4F7920DA15F4C9BEEF707695478C8FF0(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_tB79F7140EE0E13A566F61C25F0CBC35E52135A75_m422D6C1A4F7920DA15F4C9BEEF707695478C8FF0_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnHandMeshUpdated(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_tB79F7140EE0E13A566F61C25F0CBC35E52135A75 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_tB79F7140EE0E13A566F61C25F0CBC35E52135A75 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandMeshHandler::OnHandMeshUpdated(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Input.HandMeshInfo>) */, IMixedRealityHandMeshHandler_t6EB348D7EFC07EA32CD9B24C410F4D39C1265CF4_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_46(Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_46_mF4C1E1A6E1D777EC3E5BE4FFC1E6EBB3859F6780 (U3CU3Ec_t738602F83F328AD6B4BE4BEE3436DDB566A8F3DA * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisHandTrackingInputEventData_t2CAF86D0E0AD87D5996CDB42C70A69861FFB5BF8_m75C5BBCD2BF09D48F54E23E7013039FDC837511B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityTouchHandler_tA3E82909534351087EDFA8B4572A92680B524DFA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandTrackingInputEventData_t2CAF86D0E0AD87D5996CDB42C70A69861FFB5BF8 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<HandTrackingInputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		HandTrackingInputEventData_t2CAF86D0E0AD87D5996CDB42C70A69861FFB5BF8 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisHandTrackingInputEventData_t2CAF86D0E0AD87D5996CDB42C70A69861FFB5BF8_m75C5BBCD2BF09D48F54E23E7013039FDC837511B(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisHandTrackingInputEventData_t2CAF86D0E0AD87D5996CDB42C70A69861FFB5BF8_m75C5BBCD2BF09D48F54E23E7013039FDC837511B_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnTouchStarted(casted);
		RuntimeObject* L_2 = ___handler0;
		HandTrackingInputEventData_t2CAF86D0E0AD87D5996CDB42C70A69861FFB5BF8 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< HandTrackingInputEventData_t2CAF86D0E0AD87D5996CDB42C70A69861FFB5BF8 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler::OnTouchStarted(Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData) */, IMixedRealityTouchHandler_tA3E82909534351087EDFA8B4572A92680B524DFA_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_47(Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_47_m88BB79A412703624FE7D3634509F2B833ED6BD87 (U3CU3Ec_t738602F83F328AD6B4BE4BEE3436DDB566A8F3DA * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisHandTrackingInputEventData_t2CAF86D0E0AD87D5996CDB42C70A69861FFB5BF8_m75C5BBCD2BF09D48F54E23E7013039FDC837511B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityTouchHandler_tA3E82909534351087EDFA8B4572A92680B524DFA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandTrackingInputEventData_t2CAF86D0E0AD87D5996CDB42C70A69861FFB5BF8 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<HandTrackingInputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		HandTrackingInputEventData_t2CAF86D0E0AD87D5996CDB42C70A69861FFB5BF8 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisHandTrackingInputEventData_t2CAF86D0E0AD87D5996CDB42C70A69861FFB5BF8_m75C5BBCD2BF09D48F54E23E7013039FDC837511B(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisHandTrackingInputEventData_t2CAF86D0E0AD87D5996CDB42C70A69861FFB5BF8_m75C5BBCD2BF09D48F54E23E7013039FDC837511B_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnTouchCompleted(casted);
		RuntimeObject* L_2 = ___handler0;
		HandTrackingInputEventData_t2CAF86D0E0AD87D5996CDB42C70A69861FFB5BF8 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< HandTrackingInputEventData_t2CAF86D0E0AD87D5996CDB42C70A69861FFB5BF8 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler::OnTouchCompleted(Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData) */, IMixedRealityTouchHandler_tA3E82909534351087EDFA8B4572A92680B524DFA_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_48(Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_48_m0A8E5F1FD10E148D79AA7E870992BC59B6DC30EA (U3CU3Ec_t738602F83F328AD6B4BE4BEE3436DDB566A8F3DA * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisHandTrackingInputEventData_t2CAF86D0E0AD87D5996CDB42C70A69861FFB5BF8_m75C5BBCD2BF09D48F54E23E7013039FDC837511B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityTouchHandler_tA3E82909534351087EDFA8B4572A92680B524DFA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandTrackingInputEventData_t2CAF86D0E0AD87D5996CDB42C70A69861FFB5BF8 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<HandTrackingInputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		HandTrackingInputEventData_t2CAF86D0E0AD87D5996CDB42C70A69861FFB5BF8 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisHandTrackingInputEventData_t2CAF86D0E0AD87D5996CDB42C70A69861FFB5BF8_m75C5BBCD2BF09D48F54E23E7013039FDC837511B(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisHandTrackingInputEventData_t2CAF86D0E0AD87D5996CDB42C70A69861FFB5BF8_m75C5BBCD2BF09D48F54E23E7013039FDC837511B_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnTouchUpdated(casted);
		RuntimeObject* L_2 = ___handler0;
		HandTrackingInputEventData_t2CAF86D0E0AD87D5996CDB42C70A69861FFB5BF8 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< HandTrackingInputEventData_t2CAF86D0E0AD87D5996CDB42C70A69861FFB5BF8 * >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler::OnTouchUpdated(Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData) */, IMixedRealityTouchHandler_tA3E82909534351087EDFA8B4572A92680B524DFA_il2cpp_TypeInfo_var, L_2, L_3);
		// };
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
// System.Void Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m154FC347F58C0993C8748EEE66F9538CA53A8601 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tC3C72E1104F73BBEC60830726FCD3332E25CEC19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tC3C72E1104F73BBEC60830726FCD3332E25CEC19 * L_0 = (U3CU3Ec_tC3C72E1104F73BBEC60830726FCD3332E25CEC19 *)il2cpp_codegen_object_new(U3CU3Ec_tC3C72E1104F73BBEC60830726FCD3332E25CEC19_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m3A23D9F7447227540EBD1B2DAC93B9DAE350CEB6(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tC3C72E1104F73BBEC60830726FCD3332E25CEC19_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC3C72E1104F73BBEC60830726FCD3332E25CEC19_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3A23D9F7447227540EBD1B2DAC93B9DAE350CEB6 (U3CU3Ec_tC3C72E1104F73BBEC60830726FCD3332E25CEC19 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable/<>c::<OnValidate>b__25_0(System.String,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3COnValidateU3Eb__25_0_m18F61474A7FED2510F3A367DA1EAF891BA3D5ED1 (U3CU3Ec_tC3C72E1104F73BBEC60830726FCD3332E25CEC19 * __this, String_t* ___result0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___next1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral193EAB9F1EC19468783C52A94D9B84DF6D5BEE4F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string hierarchy = gameObject.transform.EnumerateAncestors(true).Aggregate("", (result, next) => next.gameObject.name + "=>" + result);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___next1;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_1, /*hidden argument*/NULL);
		String_t* L_3 = ___result0;
		String_t* L_4;
		L_4 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_2, _stringLiteral193EAB9F1EC19468783C52A94D9B84DF6D5BEE4F, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GenericPointer_set_PrioritizedLayerMasksOverride_mBE1F77B73EDCF92B7E6A854662AD38DCCB94FCCE_inline (GenericPointer_t2D74A2BA9CBADA588374101900F39C9B4220A2C5 * __this, LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* ___value0, const RuntimeMethod* method)
{
	{
		// public LayerMask[] PrioritizedLayerMasksOverride { get; set; }
		LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* L_0 = ___value0;
		__this->set_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_12(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, const RuntimeMethod* method)
{
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AutoScope__ctor_m4131730A501F687FF95B2963EABAC7844C6B9859_inline((&L_1), (intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseGenericInputSource_set_SourceType_m3108402D6C3E3176E7D1537CF3C95C8B589FA922_inline (BaseGenericInputSource_t2C53C81AABEABD940B6C53D893C0AB19301845A9 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public InputSourceType SourceType { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CSourceTypeU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  GazeProvider_get_LatestEyeGaze_mA4398E6DE76CCB7CB32A5D52391563ABBB9013C5_inline (GazeProvider_t2BB12BA2FA0ECEE3BEA51CC14F92FE1A440009CE * __this, const RuntimeMethod* method)
{
	{
		// public Ray LatestEyeGaze { get; private set; } = default(Ray);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_0 = __this->get_U3CLatestEyeGazeU3Ek__BackingField_36();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GazeProvider_get_UseHeadGazeOverride_mAB00CEBDC3E34FF24C318674C3B20169A81DB000_inline (GazeProvider_t2BB12BA2FA0ECEE3BEA51CC14F92FE1A440009CE * __this, const RuntimeMethod* method)
{
	{
		// public bool UseHeadGazeOverride { get; set; }
		bool L_0 = __this->get_U3CUseHeadGazeOverrideU3Ek__BackingField_39();
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RayStepU5BU5D_t3414C621E03C24B384171E375117034E14C9F871* GenericPointer_get_Rays_m2A2A78170E7E1623B5422A22FD6C0785FDB51F4D_inline (GenericPointer_t2D74A2BA9CBADA588374101900F39C9B4220A2C5 * __this, const RuntimeMethod* method)
{
	{
		// public RayStep[] Rays { get; protected set; } = { new RayStep(Vector3.zero, Vector3.forward) };
		RayStepU5BU5D_t3414C621E03C24B384171E375117034E14C9F871* L_0 = __this->get_U3CRaysU3Ek__BackingField_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RayStep_get_Origin_mF092B32DA45F09691CD13C850B8695B57BA73D7A_inline (RayStep_tDD523966EB857DFE1FA64A404F585D84E78FAE8A * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Origin { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3COriginU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RayStep_get_Direction_m30554C81FC20D5DA3CB243343E16836DB3659B02_inline (RayStep_tDD523966EB857DFE1FA64A404F585D84E78FAE8A * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Direction { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CDirectionU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline (float ___d0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a1;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a1;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a1;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GazeProvider_set_HitPosition_mFC8DD2412D3DE3B7FE1F1FA36D39F809EB858B01_inline (GazeProvider_t2BB12BA2FA0ECEE3BEA51CC14F92FE1A440009CE * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 HitPosition { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_U3CHitPositionU3Ek__BackingField_20(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		ProfilerUnsafeUtility_EndSample_m0435B2EE7963614F3D154A83D44269FE4D1A85B0((intptr_t)L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58  MixedRealityInputAction_get_None_mFC3FA7679A1909B645EC4A1193841640E491CE7A_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MixedRealityInputAction None { get; } = new MixedRealityInputAction(0, "None");
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58_il2cpp_TypeInfo_var);
		MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58  L_0 = ((MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58_il2cpp_TypeInfo_var))->get_U3CNoneU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		intptr_t L_1;
		L_1 = ProfilerUnsafeUtility_CreateMarker_m419027084C68545B765B9345949D8BFCB96C51AD(L_0, (uint16_t)1, 0, 0, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SimpleCoroutineAwaiter_get_IsCompleted_m33374A3B036EAA2C2FD8C9622619A5FE43A0805D_inline (SimpleCoroutineAwaiter_tC457780E69748E91DD44509C87CDD5DE74E87B2A * __this, const RuntimeMethod* method)
{
	{
		// public bool IsCompleted { get; private set; }
		bool L_0 = __this->get_U3CIsCompletedU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_gshared_inline (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  Enumerator_get_Current_mE5033FC555E7BC63DDC919B903A8A305C3AADBEB_gshared_inline (Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  L_0 = (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 )__this->get_current_3();
		return (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_mC1E2EFCF98529D0550A547CF87C6EAB6821741BF_gshared_inline (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_m4131730A501F687FF95B2963EABAC7844C6B9859_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, intptr_t ___markerPtr0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___markerPtr0;
		__this->set_m_Ptr_0((intptr_t)L_0);
		intptr_t L_1 = ___markerPtr0;
		ProfilerUnsafeUtility_BeginSample_m1B2CAD1BC7C7C390514317A8D51FB798D4622AE4((intptr_t)L_1, /*hidden argument*/NULL);
		return;
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
