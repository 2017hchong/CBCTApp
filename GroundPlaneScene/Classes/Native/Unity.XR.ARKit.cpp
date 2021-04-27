#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// UnityEngine.XR.ARKit.ARKitAnchorSubsystem
struct ARKitAnchorSubsystem_t721F48C4B69507D7E38664A68AA42DD1DF75B3DF;
// UnityEngine.XR.ARKit.ARKitCameraSubsystem
struct ARKitCameraSubsystem_tE327D2A1BE7A0BD90A9353C8EDBDE9A882315245;
// UnityEngine.XR.ARKit.ARKitEnvironmentProbeSubsystem
struct ARKitEnvironmentProbeSubsystem_t628136AE15CA16280BA838B37E2B7CDF0473E9D2;
// UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem
struct ARKitImageTrackingSubsystem_t0F98C12C3E36B9F3819FC43494A883B600401237;
// UnityEngine.XR.ARKit.ARKitParticipantSubsystem
struct ARKitParticipantSubsystem_tFBFB76108F5069693F4F40F8DAA4B6A907A709C3;
// UnityEngine.XR.ARKit.ARKitRaycastSubsystem
struct ARKitRaycastSubsystem_t8DF7A7F21C4610FBBEF6A240FD1790CD47BE9900;
// UnityEngine.XR.ARKit.ARKitSessionSubsystem
struct ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216;
// UnityEngine.XR.ARKit.ARKitXRDepthSubsystem
struct ARKitXRDepthSubsystem_t50D82DC2115EED29E5F0EEBA8A0F4FA7876BD2D5;
// UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem
struct ARKitXRPlaneSubsystem_t03042D64756D81EC6B4657CD1323D7404EC7530B;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.XR.ARKit.ARKitAnchorSubsystem/ARKitProvider
struct ARKitProvider_tE10DC6803776ECE42E55F127E68C47E50319202E;
// UnityEngine.XR.ARKit.ARKitCameraSubsystem/ARKitProvider
struct ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252;
// UnityEngine.XR.ARKit.ARKitEnvironmentProbeSubsystem/ARKitProvider
struct ARKitProvider_tBED347A85C19012D5B5F124BC8C0FB4876FBEACC;
// UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem/ARKitProvider
struct ARKitProvider_t6838013201F7369104C65DD65159D910B116E8AC;
// UnityEngine.XR.ARKit.ARKitParticipantSubsystem/ARKitProvider
struct ARKitProvider_t9908B32D1E5398BA2FD0D825E9343F8CA0277B4C;
// UnityEngine.XR.ARKit.ARKitRaycastSubsystem/ARKitProvider
struct ARKitProvider_t3FB2A65F0CF8BCD91C4CC54F3841159E7F7DAA88;
// UnityEngine.XR.ARKit.ARKitSessionSubsystem/ARKitProvider
struct ARKitProvider_t9AF751FC81DD6B052A462DBB30F46C946CE9E7CF;
// UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/ARKitProvider
struct ARKitProvider_tC6BBA25F076F6D64FA8E6336E6860D7DBD41A7A1;
// UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/ARKitProvider
struct ARKitProvider_tF9F620C89E671C028D10768C5300D3539661A2C1;
// UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi/OnAsyncConversionCompleteDelegate
struct OnAsyncConversionCompleteDelegate_tFE6205610918E7A87E7867F879A863FD2FE8ECDF;
// System.Action`2<UnityEngine.XR.ARKit.ARWorldMapRequestStatus,UnityEngine.XR.ARKit.ARWorldMap>
struct Action_2_t6F4217AA55351EE6822133CE02984E6B59F83112;
// System.Action`2<System.Int32Enum,UnityEngine.XR.ARKit.ARWorldMap>
struct Action_2_tBF7C7962F0CD8BFDA2D483FE7CEC080540530A3E;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem
struct XRAnchorSubsystem_t625D9B76C590AB601CF85525DB9396BE84425AA7;
// UnityEngine.XR.ARSubsystems.XRCameraSubsystem
struct XRCameraSubsystem_t3B32F6EA8A2E4D23AF240B5D21C34759D2613AC9;
// UnityEngine.XR.ARSubsystems.XRDepthSubsystem
struct XRDepthSubsystem_t808E21F0192095B08FA03AC535314FB5EF3B7E28;
// UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem
struct XREnvironmentProbeSubsystem_t0C60258F565400E7C5AF0E0B7FA933F2BCF83CB6;
// UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem
struct XRImageTrackingSubsystem_tBC68AD21C11D8D67F3343844E129DF505FF705CE;
// UnityEngine.XR.ARSubsystems.XRParticipantSubsystem
struct XRParticipantSubsystem_t7F710E46FC5A17967E7CAE126DE9443C752C36FC;
// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem
struct XRPlaneSubsystem_t7C76F9D2C993B0DC38F0A7CDCE745EA7C12417EE;
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem
struct XRRaycastSubsystem_t62FDAC9AA1BD44C4557AEE3FEF3D2FA24C71B6B8;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD;
// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider
struct Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2;
// UnityEngine.XR.ARSubsystems.XRCameraSubsystem/Provider
struct Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1;
// UnityEngine.XR.ARSubsystems.XRDepthSubsystem/Provider
struct Provider_t8E88C17A70269CD3E96909AFCCA952AAA7DEC0B6;
// UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem/Provider
struct Provider_tAF87FE3E906FDBF14F06488A1AA5E80400EFE190;
// UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider
struct Provider_tA7CEF856C3BC486ADEBD656F5535E24262AAAE9E;
// UnityEngine.XR.ARSubsystems.XRParticipantSubsystem/Provider
struct Provider_t1D0BC515976D24FD30341AC456ACFCB2DE4A344E;
// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider
struct Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12;
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider
struct Provider_tF185BE0541D2066CD242583CEFE7709DD22DD227;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider
struct Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A;

IL2CPP_EXTERN_C RuntimeClass* ARKitCameraSubsystem_tE327D2A1BE7A0BD90A9353C8EDBDE9A882315245_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARKitProvider_t3FB2A65F0CF8BCD91C4CC54F3841159E7F7DAA88_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARKitProvider_t6838013201F7369104C65DD65159D910B116E8AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARKitProvider_t9908B32D1E5398BA2FD0D825E9343F8CA0277B4C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARKitProvider_t9AF751FC81DD6B052A462DBB30F46C946CE9E7CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARKitProvider_tBED347A85C19012D5B5F124BC8C0FB4876FBEACC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARKitProvider_tC6BBA25F076F6D64FA8E6336E6860D7DBD41A7A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARKitProvider_tE10DC6803776ECE42E55F127E68C47E50319202E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARKitProvider_tF9F620C89E671C028D10768C5300D3539661A2C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARWorldMapRequestStatus_t9A2ABBA3D64593F57CCFC959D7D294CE5E54E73C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t6F4217AA55351EE6822133CE02984E6B59F83112_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnAsyncConversionCompleteDelegate_tFE6205610918E7A87E7867F879A863FD2FE8ECDF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00D54E4228F0F7653E4C33C608B8CF61178F3D9A;
IL2CPP_EXTERN_C String_t* _stringLiteral118D53AE05F479FE7B8ACAE7DF6D75BC38DB9D15;
IL2CPP_EXTERN_C String_t* _stringLiteral14D6457B7A8B0589F52EF9A221CF9F7AE60EE03D;
IL2CPP_EXTERN_C String_t* _stringLiteral3316E29454B30FF00FD499D58FB9EB6E3D6D4A62;
IL2CPP_EXTERN_C String_t* _stringLiteral34DB7C411D03036F0D06F00351078A370EA0A603;
IL2CPP_EXTERN_C String_t* _stringLiteral61805FB8A9F8CCBCA7560EFE4D0B15AE0A7AA489;
IL2CPP_EXTERN_C String_t* _stringLiteral61B8D324687C24872968A15276C954F913457113;
IL2CPP_EXTERN_C String_t* _stringLiteral64B5C8CA3DBCCD4684E840D0AB3E6C8D55ACA47A;
IL2CPP_EXTERN_C String_t* _stringLiteral6D7125BFB6B08212CAAD55197B7FE167CE82051D;
IL2CPP_EXTERN_C String_t* _stringLiteral8244FF4469CD24AECA8F7B1B293CA6DF261B2861;
IL2CPP_EXTERN_C String_t* _stringLiteral82C791C1966A9B7EFCEB102734ECB5B1DB8AF742;
IL2CPP_EXTERN_C String_t* _stringLiteral8710D8B4E16855F019CB68A747E4078E34957226;
IL2CPP_EXTERN_C String_t* _stringLiteral8FCD874487FC15E93E93290A9C751C9F9195F03E;
IL2CPP_EXTERN_C String_t* _stringLiteralA0DE801F3FD2CC4DE455E4C342CDC681CD2516B3;
IL2CPP_EXTERN_C String_t* _stringLiteralAFA4D3E582500163B4301BAFF6220E10DCA1A77A;
IL2CPP_EXTERN_C String_t* _stringLiteralBCE376F123EDC922894BF006E686DAB434F36B27;
IL2CPP_EXTERN_C String_t* _stringLiteralCFA86DA9F9B859D235587DD8755E3EF4827AEEF1;
IL2CPP_EXTERN_C String_t* _stringLiteralD3F9023582F96AC5F3DEB69BCAC72DB7F59028A8;
IL2CPP_EXTERN_C String_t* _stringLiteralD4CE57F143C3072D95F7AF2A8FDB45BD297B7097;
IL2CPP_EXTERN_C String_t* _stringLiteralDD3E96C069D13F79F8B9D6B0CD486B4507747763;
IL2CPP_EXTERN_C String_t* _stringLiteralF79D74BDD6DF0D984C05241131A8A14AF293EE1B;
IL2CPP_EXTERN_C const RuntimeMethod* ARKitSessionSubsystem_OnAsyncConversionComplete_m83F502F9F96A05BA35A9FDE4C56FDB7A7843942F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2_Invoke_m062C6716117B97F904C309212B9BF73078717C7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OSVersion__ctor_mE910D5DA6F2E1E3C44D319C4D849BA52E478CE4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRParticipantSubsystemDescriptor_Register_TisARKitParticipantSubsystem_tFBFB76108F5069693F4F40F8DAA4B6A907A709C3_m728A458743D25FA18DD883D357DDCFDFC61528D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ARKitAnchorSubsystem_t721F48C4B69507D7E38664A68AA42DD1DF75B3DF_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ARKitCameraSubsystem_tE327D2A1BE7A0BD90A9353C8EDBDE9A882315245_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ARKitEnvironmentProbeSubsystem_t628136AE15CA16280BA838B37E2B7CDF0473E9D2_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ARKitImageTrackingSubsystem_t0F98C12C3E36B9F3819FC43494A883B600401237_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ARKitRaycastSubsystem_t8DF7A7F21C4610FBBEF6A240FD1790CD47BE9900_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ARKitXRDepthSubsystem_t50D82DC2115EED29E5F0EEBA8A0F4FA7876BD2D5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ARKitXRPlaneSubsystem_t03042D64756D81EC6B4657CD1323D7404EC7530B_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t ARKitAnchorSubsystem_CreateProvider_mA659BB42D566D3B13670DFA585A54B056BDC3753_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitAnchorSubsystem_RegisterDescriptor_mCBDCFF12221785197B5DAB80B2739D692B293013_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitCameraSubsystem_CreateProvider_m9C660C07EEBB53123AEE3CFBF7D092872BCD10FA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitCameraSubsystem_Register_mF559F13DCE5DDF036431710C6D0E4B776824F5F4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitCameraSubsystem__cctor_m06F5E55B1EDE6181214C6952380E39286A3B88DA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitCameraSubsystem_get_backgroundShaderName_m0856B4F3C1E036760386F1BED04D029698D0F94F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitEnvironmentProbeRegistration_Register_mBCB9D9E84E40A0AD3698E427066B835C6BC14CAC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitEnvironmentProbeSubsystem_CreateProvider_m0A61722D4388A3F83626B90110EC0382C04146E8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitImageTrackingSubsystem_CreateProvider_m33884E1AABE45855B8AB73A2251E1433FD1FB8D8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitImageTrackingSubsystem_RegisterDescriptor_mEB8B92E59CC2F27AA8DD0E799E602BF81E02FA4E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitParticipantSubsystem_CreateProvider_m0F4785B15E074139DDD012C7F82C09FF10254B9A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitParticipantSubsystem_RegisterDescriptor_m54AF2EA905706786FECA5F3D3C3F582DD7EFD79C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitProvider__cctor_m5E0C0C35D2142E8245D1F9356789DB22A7E01B16_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitProvider__ctor_mFC17EA54C2DC44A58721A35D5B7607C607BF8AE4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitRaycastSubsystem_CreateProvider_m52D2A2D2B552DDC5C336144E63884E8AFED37AD3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitRaycastSubsystem_RegisterDescriptor_mF42F4DCC6EE812AFAB861A232A2094AA790CEFCC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitSessionSubsystem_CreateProvider_m754B0A5799CBFB4FF8A661DD22F9D187C25D26B4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitSessionSubsystem_OnAsyncConversionComplete_m83F502F9F96A05BA35A9FDE4C56FDB7A7843942F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitSessionSubsystem_RegisterDescriptor_mA5E32E61DAA0986D1D67B5318AF10D38E5435103_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitSessionSubsystem__cctor_mDB65D075EA3D03C3DBDD350457063DB89F179BE9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitXRDepthSubsystem_CreateProvider_m0C4A238AE0D21E6E357E83AB9973343A5DBC77CA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitXRDepthSubsystem_RegisterDescriptor_m7432D5BD49562D3393CA37BB8D26D624E8FC0958_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitXRPlaneSubsystem_CreateProvider_m015E36C48CB75AD2F5EC202CE618D8EC2F9D8BD5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitXRPlaneSubsystem_RegisterDescriptor_m73A70F48D9FC2EBC931E3766C969EF3794419C5E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARWorldMap_Equals_m594655912BCCCE5F6029540795777AD70FA25D58_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OSVersion_Equals_m914F030B0D83873975E4FB03DAAC2B1EB126521F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OSVersion_ToString_m8650018E5360BC6B85B38F810F70F4E1564F0E1C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OSVersion__ctor_mE910D5DA6F2E1E3C44D319C4D849BA52E478CE4C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OnAsyncConversionCompleteDelegate_BeginInvoke_m1EC36D53A7DC1993A903531DB58DA3DE00A9B0FC_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tEB1A1F441D3E4E8A35F3B9EE4147916810B1DD3B 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.List`1<System.String>
struct  List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
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
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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

// UnityEngine.Subsystem
struct  Subsystem_t2D97454A946149D608974CB6B674F5F5C613A6A4  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitCameraSubsystem_NativeApi
struct  NativeApi_tA8D79572A35E338F74C186C460AA1780DD18222A  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitEnvironmentProbeRegistration
struct  ARKitEnvironmentProbeRegistration_t0D97A15BE952DC60161333713D50E70DE300B579  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitRaycastSubsystem_NativeApi
struct  NativeApi_t62CE96BA0CF6D47C5FD80B91223590E60F948070  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitSessionSubsystem_NativeApi
struct  NativeApi_t14734856858FD58426CAE2F6A09FA522E550C226  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem_NativeApi
struct  NativeApi_tB65E4D304D37EA8B8ED6329919AEE7845A85C55E  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARKit.ARWorldMapRequestStatusExtensions
struct  ARWorldMapRequestStatusExtensions_tBA8B558AE95AA57A9FB348869D8F63494FDB5C1A  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARKit.Api
struct  Api_tA818DF9363CED72D41D212D7B479C32A793F1D9C  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARKit.EnvironmentProbeApi
struct  EnvironmentProbeApi_t2B36D33D812E48CB4615B2FB0B41BD22D184BB19  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem_Provider
struct  Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRCameraSubsystem_Provider
struct  Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRDepthSubsystem_Provider
struct  Provider_t8E88C17A70269CD3E96909AFCCA952AAA7DEC0B6  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem_Provider
struct  Provider_tAF87FE3E906FDBF14F06488A1AA5E80400EFE190  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem_Provider
struct  Provider_tA7CEF856C3BC486ADEBD656F5535E24262AAAE9E  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRParticipantSubsystem_Provider
struct  Provider_t1D0BC515976D24FD30341AC456ACFCB2DE4A344E  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem_Provider
struct  Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem_Provider
struct  Provider_tF185BE0541D2066CD242583CEFE7709DD22DD227  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRSessionSubsystem_Provider
struct  Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A  : public RuntimeObject
{
public:

public:
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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


// System.Char
struct  Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
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
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
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
struct  IntPtr_t 
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


// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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


// UnityEngine.Subsystem`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor>
struct  Subsystem_1_t16F70B2C8DA07B124E08293EE86247ACFD69BACB  : public Subsystem_t2D97454A946149D608974CB6B674F5F5C613A6A4
{
public:

public:
};


// UnityEngine.Subsystem`1<UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor>
struct  Subsystem_1_tD02717E44DD9D5713C4EB686D959898770B5CE59  : public Subsystem_t2D97454A946149D608974CB6B674F5F5C613A6A4
{
public:

public:
};


// UnityEngine.Subsystem`1<UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor>
struct  Subsystem_1_t5D9917B9F24E4BDCAB148BE5A32183E9E007FBE7  : public Subsystem_t2D97454A946149D608974CB6B674F5F5C613A6A4
{
public:

public:
};


// UnityEngine.Subsystem`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemDescriptor>
struct  Subsystem_1_t1C30F36AAF593338BC848FB8DC2F3AC365694A52  : public Subsystem_t2D97454A946149D608974CB6B674F5F5C613A6A4
{
public:

public:
};


// UnityEngine.Subsystem`1<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor>
struct  Subsystem_1_tB8B5B49050231B9F7BA3B4B527A459850478AA8B  : public Subsystem_t2D97454A946149D608974CB6B674F5F5C613A6A4
{
public:

public:
};


// UnityEngine.Subsystem`1<UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor>
struct  Subsystem_1_t58A0DA59D1CA40C3BCC841E27793389A80315430  : public Subsystem_t2D97454A946149D608974CB6B674F5F5C613A6A4
{
public:

public:
};


// UnityEngine.Subsystem`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor>
struct  Subsystem_1_t3E948B6E9CFA231C2E92F7F2B9D1CBBC7C452E14  : public Subsystem_t2D97454A946149D608974CB6B674F5F5C613A6A4
{
public:

public:
};


// UnityEngine.Subsystem`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor>
struct  Subsystem_1_tBFBEF39ED929482A2368EB2CD47E179F2E78F5A6  : public Subsystem_t2D97454A946149D608974CB6B674F5F5C613A6A4
{
public:

public:
};


// UnityEngine.Subsystem`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>
struct  Subsystem_1_tB1D5F14A3E3355FA54EA71B587D64873AC6C7237  : public Subsystem_t2D97454A946149D608974CB6B674F5F5C613A6A4
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitAnchorSubsystem_ARKitProvider
struct  ARKitProvider_tE10DC6803776ECE42E55F127E68C47E50319202E  : public Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitCameraSubsystem_ARKitProvider
struct  ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252  : public Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1
{
public:
	// UnityEngine.Material UnityEngine.XR.ARKit.ARKitCameraSubsystem_ARKitProvider::m_CameraMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_CameraMaterial_4;

public:
	inline static int32_t get_offset_of_m_CameraMaterial_4() { return static_cast<int32_t>(offsetof(ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252, ___m_CameraMaterial_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_CameraMaterial_4() const { return ___m_CameraMaterial_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_CameraMaterial_4() { return &___m_CameraMaterial_4; }
	inline void set_m_CameraMaterial_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_CameraMaterial_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CameraMaterial_4), (void*)value);
	}
};

struct ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252_StaticFields
{
public:
	// System.Int32 UnityEngine.XR.ARKit.ARKitCameraSubsystem_ARKitProvider::k_TextureYPropertyNameId
	int32_t ___k_TextureYPropertyNameId_0;
	// System.Int32 UnityEngine.XR.ARKit.ARKitCameraSubsystem_ARKitProvider::k_TextureCbCrPropertyNameId
	int32_t ___k_TextureCbCrPropertyNameId_1;
	// System.Collections.Generic.List`1<System.String> UnityEngine.XR.ARKit.ARKitCameraSubsystem_ARKitProvider::k_LegacyRPEnabledMaterialKeywords
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___k_LegacyRPEnabledMaterialKeywords_2;
	// System.Collections.Generic.List`1<System.String> UnityEngine.XR.ARKit.ARKitCameraSubsystem_ARKitProvider::k_LegacyRPDisabledMaterialKeywords
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___k_LegacyRPDisabledMaterialKeywords_3;

public:
	inline static int32_t get_offset_of_k_TextureYPropertyNameId_0() { return static_cast<int32_t>(offsetof(ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252_StaticFields, ___k_TextureYPropertyNameId_0)); }
	inline int32_t get_k_TextureYPropertyNameId_0() const { return ___k_TextureYPropertyNameId_0; }
	inline int32_t* get_address_of_k_TextureYPropertyNameId_0() { return &___k_TextureYPropertyNameId_0; }
	inline void set_k_TextureYPropertyNameId_0(int32_t value)
	{
		___k_TextureYPropertyNameId_0 = value;
	}

	inline static int32_t get_offset_of_k_TextureCbCrPropertyNameId_1() { return static_cast<int32_t>(offsetof(ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252_StaticFields, ___k_TextureCbCrPropertyNameId_1)); }
	inline int32_t get_k_TextureCbCrPropertyNameId_1() const { return ___k_TextureCbCrPropertyNameId_1; }
	inline int32_t* get_address_of_k_TextureCbCrPropertyNameId_1() { return &___k_TextureCbCrPropertyNameId_1; }
	inline void set_k_TextureCbCrPropertyNameId_1(int32_t value)
	{
		___k_TextureCbCrPropertyNameId_1 = value;
	}

	inline static int32_t get_offset_of_k_LegacyRPEnabledMaterialKeywords_2() { return static_cast<int32_t>(offsetof(ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252_StaticFields, ___k_LegacyRPEnabledMaterialKeywords_2)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_k_LegacyRPEnabledMaterialKeywords_2() const { return ___k_LegacyRPEnabledMaterialKeywords_2; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_k_LegacyRPEnabledMaterialKeywords_2() { return &___k_LegacyRPEnabledMaterialKeywords_2; }
	inline void set_k_LegacyRPEnabledMaterialKeywords_2(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___k_LegacyRPEnabledMaterialKeywords_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_LegacyRPEnabledMaterialKeywords_2), (void*)value);
	}

	inline static int32_t get_offset_of_k_LegacyRPDisabledMaterialKeywords_3() { return static_cast<int32_t>(offsetof(ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252_StaticFields, ___k_LegacyRPDisabledMaterialKeywords_3)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_k_LegacyRPDisabledMaterialKeywords_3() const { return ___k_LegacyRPDisabledMaterialKeywords_3; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_k_LegacyRPDisabledMaterialKeywords_3() { return &___k_LegacyRPDisabledMaterialKeywords_3; }
	inline void set_k_LegacyRPDisabledMaterialKeywords_3(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___k_LegacyRPDisabledMaterialKeywords_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_LegacyRPDisabledMaterialKeywords_3), (void*)value);
	}
};


// UnityEngine.XR.ARKit.ARKitEnvironmentProbeSubsystem_ARKitProvider
struct  ARKitProvider_tBED347A85C19012D5B5F124BC8C0FB4876FBEACC  : public Provider_tAF87FE3E906FDBF14F06488A1AA5E80400EFE190
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem_ARKitProvider
struct  ARKitProvider_t6838013201F7369104C65DD65159D910B116E8AC  : public Provider_tA7CEF856C3BC486ADEBD656F5535E24262AAAE9E
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitRaycastSubsystem_ARKitProvider
struct  ARKitProvider_t3FB2A65F0CF8BCD91C4CC54F3841159E7F7DAA88  : public Provider_tF185BE0541D2066CD242583CEFE7709DD22DD227
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitSessionSubsystem_ARKitProvider
struct  ARKitProvider_t9AF751FC81DD6B052A462DBB30F46C946CE9E7CF  : public Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitXRDepthSubsystem_ARKitProvider
struct  ARKitProvider_tC6BBA25F076F6D64FA8E6336E6860D7DBD41A7A1  : public Provider_t8E88C17A70269CD3E96909AFCCA952AAA7DEC0B6
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem_ARKitProvider
struct  ARKitProvider_tF9F620C89E671C028D10768C5300D3539661A2C1  : public Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12
{
public:

public:
};


// UnityEngine.XR.ARKit.ARWorldMap
struct  ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 
{
public:
	// System.Int32 UnityEngine.XR.ARKit.ARWorldMap::<nativeHandle>k__BackingField
	int32_t ___U3CnativeHandleU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnativeHandleU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2, ___U3CnativeHandleU3Ek__BackingField_0)); }
	inline int32_t get_U3CnativeHandleU3Ek__BackingField_0() const { return ___U3CnativeHandleU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CnativeHandleU3Ek__BackingField_0() { return &___U3CnativeHandleU3Ek__BackingField_0; }
	inline void set_U3CnativeHandleU3Ek__BackingField_0(int32_t value)
	{
		___U3CnativeHandleU3Ek__BackingField_0 = value;
	}
};


// UnityEngine.XR.ARKit.OSVersion
struct  OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C 
{
public:
	// System.Int32 UnityEngine.XR.ARKit.OSVersion::<major>k__BackingField
	int32_t ___U3CmajorU3Ek__BackingField_0;
	// System.Int32 UnityEngine.XR.ARKit.OSVersion::<minor>k__BackingField
	int32_t ___U3CminorU3Ek__BackingField_1;
	// System.Int32 UnityEngine.XR.ARKit.OSVersion::<point>k__BackingField
	int32_t ___U3CpointU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CmajorU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C, ___U3CmajorU3Ek__BackingField_0)); }
	inline int32_t get_U3CmajorU3Ek__BackingField_0() const { return ___U3CmajorU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CmajorU3Ek__BackingField_0() { return &___U3CmajorU3Ek__BackingField_0; }
	inline void set_U3CmajorU3Ek__BackingField_0(int32_t value)
	{
		___U3CmajorU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CminorU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C, ___U3CminorU3Ek__BackingField_1)); }
	inline int32_t get_U3CminorU3Ek__BackingField_1() const { return ___U3CminorU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CminorU3Ek__BackingField_1() { return &___U3CminorU3Ek__BackingField_1; }
	inline void set_U3CminorU3Ek__BackingField_1(int32_t value)
	{
		___U3CminorU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CpointU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C, ___U3CpointU3Ek__BackingField_2)); }
	inline int32_t get_U3CpointU3Ek__BackingField_2() const { return ___U3CpointU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CpointU3Ek__BackingField_2() { return &___U3CpointU3Ek__BackingField_2; }
	inline void set_U3CpointU3Ek__BackingField_2(int32_t value)
	{
		___U3CpointU3Ek__BackingField_2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor_Cinfo
struct  Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 
{
public:
	// System.String UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor_Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor_Cinfo::<subsystemImplementationType>k__BackingField
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor_Cinfo::<supportsTrackableAttachments>k__BackingField
	bool ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7, ___U3CsubsystemImplementationTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CsubsystemImplementationTypeU3Ek__BackingField_1() const { return ___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return &___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline void set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CsubsystemImplementationTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemImplementationTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7, ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2)); }
	inline bool get_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2() const { return ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2() { return &___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2; }
	inline void set_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2(bool value)
	{
		___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo
struct Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
	int32_t ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo
struct Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
	int32_t ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2;
};

// UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo
struct  XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 
{
public:
	// System.String UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<implementationType>k__BackingField
	Type_t * ___U3CimplementationTypeU3Ek__BackingField_1;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsAverageBrightness>k__BackingField
	bool ___U3CsupportsAverageBrightnessU3Ek__BackingField_2;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsAverageColorTemperature>k__BackingField
	bool ___U3CsupportsAverageColorTemperatureU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsColorCorrection>k__BackingField
	bool ___U3CsupportsColorCorrectionU3Ek__BackingField_4;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsDisplayMatrix>k__BackingField
	bool ___U3CsupportsDisplayMatrixU3Ek__BackingField_5;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsProjectionMatrix>k__BackingField
	bool ___U3CsupportsProjectionMatrixU3Ek__BackingField_6;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsTimestamp>k__BackingField
	bool ___U3CsupportsTimestampU3Ek__BackingField_7;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsCameraConfigurations>k__BackingField
	bool ___U3CsupportsCameraConfigurationsU3Ek__BackingField_8;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsCameraImage>k__BackingField
	bool ___U3CsupportsCameraImageU3Ek__BackingField_9;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsAverageIntensityInLumens>k__BackingField
	bool ___U3CsupportsAverageIntensityInLumensU3Ek__BackingField_10;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsFocusModes>k__BackingField
	bool ___U3CsupportsFocusModesU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CimplementationTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096, ___U3CimplementationTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CimplementationTypeU3Ek__BackingField_1() const { return ___U3CimplementationTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CimplementationTypeU3Ek__BackingField_1() { return &___U3CimplementationTypeU3Ek__BackingField_1; }
	inline void set_U3CimplementationTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CimplementationTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CimplementationTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsupportsAverageBrightnessU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096, ___U3CsupportsAverageBrightnessU3Ek__BackingField_2)); }
	inline bool get_U3CsupportsAverageBrightnessU3Ek__BackingField_2() const { return ___U3CsupportsAverageBrightnessU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CsupportsAverageBrightnessU3Ek__BackingField_2() { return &___U3CsupportsAverageBrightnessU3Ek__BackingField_2; }
	inline void set_U3CsupportsAverageBrightnessU3Ek__BackingField_2(bool value)
	{
		___U3CsupportsAverageBrightnessU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsAverageColorTemperatureU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096, ___U3CsupportsAverageColorTemperatureU3Ek__BackingField_3)); }
	inline bool get_U3CsupportsAverageColorTemperatureU3Ek__BackingField_3() const { return ___U3CsupportsAverageColorTemperatureU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CsupportsAverageColorTemperatureU3Ek__BackingField_3() { return &___U3CsupportsAverageColorTemperatureU3Ek__BackingField_3; }
	inline void set_U3CsupportsAverageColorTemperatureU3Ek__BackingField_3(bool value)
	{
		___U3CsupportsAverageColorTemperatureU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsColorCorrectionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096, ___U3CsupportsColorCorrectionU3Ek__BackingField_4)); }
	inline bool get_U3CsupportsColorCorrectionU3Ek__BackingField_4() const { return ___U3CsupportsColorCorrectionU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CsupportsColorCorrectionU3Ek__BackingField_4() { return &___U3CsupportsColorCorrectionU3Ek__BackingField_4; }
	inline void set_U3CsupportsColorCorrectionU3Ek__BackingField_4(bool value)
	{
		___U3CsupportsColorCorrectionU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsDisplayMatrixU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096, ___U3CsupportsDisplayMatrixU3Ek__BackingField_5)); }
	inline bool get_U3CsupportsDisplayMatrixU3Ek__BackingField_5() const { return ___U3CsupportsDisplayMatrixU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CsupportsDisplayMatrixU3Ek__BackingField_5() { return &___U3CsupportsDisplayMatrixU3Ek__BackingField_5; }
	inline void set_U3CsupportsDisplayMatrixU3Ek__BackingField_5(bool value)
	{
		___U3CsupportsDisplayMatrixU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsProjectionMatrixU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096, ___U3CsupportsProjectionMatrixU3Ek__BackingField_6)); }
	inline bool get_U3CsupportsProjectionMatrixU3Ek__BackingField_6() const { return ___U3CsupportsProjectionMatrixU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CsupportsProjectionMatrixU3Ek__BackingField_6() { return &___U3CsupportsProjectionMatrixU3Ek__BackingField_6; }
	inline void set_U3CsupportsProjectionMatrixU3Ek__BackingField_6(bool value)
	{
		___U3CsupportsProjectionMatrixU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsTimestampU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096, ___U3CsupportsTimestampU3Ek__BackingField_7)); }
	inline bool get_U3CsupportsTimestampU3Ek__BackingField_7() const { return ___U3CsupportsTimestampU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CsupportsTimestampU3Ek__BackingField_7() { return &___U3CsupportsTimestampU3Ek__BackingField_7; }
	inline void set_U3CsupportsTimestampU3Ek__BackingField_7(bool value)
	{
		___U3CsupportsTimestampU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsCameraConfigurationsU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096, ___U3CsupportsCameraConfigurationsU3Ek__BackingField_8)); }
	inline bool get_U3CsupportsCameraConfigurationsU3Ek__BackingField_8() const { return ___U3CsupportsCameraConfigurationsU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CsupportsCameraConfigurationsU3Ek__BackingField_8() { return &___U3CsupportsCameraConfigurationsU3Ek__BackingField_8; }
	inline void set_U3CsupportsCameraConfigurationsU3Ek__BackingField_8(bool value)
	{
		___U3CsupportsCameraConfigurationsU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsCameraImageU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096, ___U3CsupportsCameraImageU3Ek__BackingField_9)); }
	inline bool get_U3CsupportsCameraImageU3Ek__BackingField_9() const { return ___U3CsupportsCameraImageU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CsupportsCameraImageU3Ek__BackingField_9() { return &___U3CsupportsCameraImageU3Ek__BackingField_9; }
	inline void set_U3CsupportsCameraImageU3Ek__BackingField_9(bool value)
	{
		___U3CsupportsCameraImageU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsAverageIntensityInLumensU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096, ___U3CsupportsAverageIntensityInLumensU3Ek__BackingField_10)); }
	inline bool get_U3CsupportsAverageIntensityInLumensU3Ek__BackingField_10() const { return ___U3CsupportsAverageIntensityInLumensU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CsupportsAverageIntensityInLumensU3Ek__BackingField_10() { return &___U3CsupportsAverageIntensityInLumensU3Ek__BackingField_10; }
	inline void set_U3CsupportsAverageIntensityInLumensU3Ek__BackingField_10(bool value)
	{
		___U3CsupportsAverageIntensityInLumensU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsFocusModesU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096, ___U3CsupportsFocusModesU3Ek__BackingField_11)); }
	inline bool get_U3CsupportsFocusModesU3Ek__BackingField_11() const { return ___U3CsupportsFocusModesU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CsupportsFocusModesU3Ek__BackingField_11() { return &___U3CsupportsFocusModesU3Ek__BackingField_11; }
	inline void set_U3CsupportsFocusModesU3Ek__BackingField_11(bool value)
	{
		___U3CsupportsFocusModesU3Ek__BackingField_11 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo
struct XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CimplementationTypeU3Ek__BackingField_1;
	int32_t ___U3CsupportsAverageBrightnessU3Ek__BackingField_2;
	int32_t ___U3CsupportsAverageColorTemperatureU3Ek__BackingField_3;
	int32_t ___U3CsupportsColorCorrectionU3Ek__BackingField_4;
	int32_t ___U3CsupportsDisplayMatrixU3Ek__BackingField_5;
	int32_t ___U3CsupportsProjectionMatrixU3Ek__BackingField_6;
	int32_t ___U3CsupportsTimestampU3Ek__BackingField_7;
	int32_t ___U3CsupportsCameraConfigurationsU3Ek__BackingField_8;
	int32_t ___U3CsupportsCameraImageU3Ek__BackingField_9;
	int32_t ___U3CsupportsAverageIntensityInLumensU3Ek__BackingField_10;
	int32_t ___U3CsupportsFocusModesU3Ek__BackingField_11;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo
struct XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CimplementationTypeU3Ek__BackingField_1;
	int32_t ___U3CsupportsAverageBrightnessU3Ek__BackingField_2;
	int32_t ___U3CsupportsAverageColorTemperatureU3Ek__BackingField_3;
	int32_t ___U3CsupportsColorCorrectionU3Ek__BackingField_4;
	int32_t ___U3CsupportsDisplayMatrixU3Ek__BackingField_5;
	int32_t ___U3CsupportsProjectionMatrixU3Ek__BackingField_6;
	int32_t ___U3CsupportsTimestampU3Ek__BackingField_7;
	int32_t ___U3CsupportsCameraConfigurationsU3Ek__BackingField_8;
	int32_t ___U3CsupportsCameraImageU3Ek__BackingField_9;
	int32_t ___U3CsupportsAverageIntensityInLumensU3Ek__BackingField_10;
	int32_t ___U3CsupportsFocusModesU3Ek__BackingField_11;
};

// UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo
struct  XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 
{
public:
	// System.String UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::<implementationType>k__BackingField
	Type_t * ___U3CimplementationTypeU3Ek__BackingField_1;
	// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::<supportsManualPlacement>k__BackingField
	bool ___U3CsupportsManualPlacementU3Ek__BackingField_2;
	// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::<supportsRemovalOfManual>k__BackingField
	bool ___U3CsupportsRemovalOfManualU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::<supportsAutomaticPlacement>k__BackingField
	bool ___U3CsupportsAutomaticPlacementU3Ek__BackingField_4;
	// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::<supportsRemovalOfAutomatic>k__BackingField
	bool ___U3CsupportsRemovalOfAutomaticU3Ek__BackingField_5;
	// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::<supportsEnvironmentTexture>k__BackingField
	bool ___U3CsupportsEnvironmentTextureU3Ek__BackingField_6;
	// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::<supportsEnvironmentTextureHDR>k__BackingField
	bool ___U3CsupportsEnvironmentTextureHDRU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CimplementationTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2, ___U3CimplementationTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CimplementationTypeU3Ek__BackingField_1() const { return ___U3CimplementationTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CimplementationTypeU3Ek__BackingField_1() { return &___U3CimplementationTypeU3Ek__BackingField_1; }
	inline void set_U3CimplementationTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CimplementationTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CimplementationTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsupportsManualPlacementU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2, ___U3CsupportsManualPlacementU3Ek__BackingField_2)); }
	inline bool get_U3CsupportsManualPlacementU3Ek__BackingField_2() const { return ___U3CsupportsManualPlacementU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CsupportsManualPlacementU3Ek__BackingField_2() { return &___U3CsupportsManualPlacementU3Ek__BackingField_2; }
	inline void set_U3CsupportsManualPlacementU3Ek__BackingField_2(bool value)
	{
		___U3CsupportsManualPlacementU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsRemovalOfManualU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2, ___U3CsupportsRemovalOfManualU3Ek__BackingField_3)); }
	inline bool get_U3CsupportsRemovalOfManualU3Ek__BackingField_3() const { return ___U3CsupportsRemovalOfManualU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CsupportsRemovalOfManualU3Ek__BackingField_3() { return &___U3CsupportsRemovalOfManualU3Ek__BackingField_3; }
	inline void set_U3CsupportsRemovalOfManualU3Ek__BackingField_3(bool value)
	{
		___U3CsupportsRemovalOfManualU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsAutomaticPlacementU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2, ___U3CsupportsAutomaticPlacementU3Ek__BackingField_4)); }
	inline bool get_U3CsupportsAutomaticPlacementU3Ek__BackingField_4() const { return ___U3CsupportsAutomaticPlacementU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CsupportsAutomaticPlacementU3Ek__BackingField_4() { return &___U3CsupportsAutomaticPlacementU3Ek__BackingField_4; }
	inline void set_U3CsupportsAutomaticPlacementU3Ek__BackingField_4(bool value)
	{
		___U3CsupportsAutomaticPlacementU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsRemovalOfAutomaticU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2, ___U3CsupportsRemovalOfAutomaticU3Ek__BackingField_5)); }
	inline bool get_U3CsupportsRemovalOfAutomaticU3Ek__BackingField_5() const { return ___U3CsupportsRemovalOfAutomaticU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CsupportsRemovalOfAutomaticU3Ek__BackingField_5() { return &___U3CsupportsRemovalOfAutomaticU3Ek__BackingField_5; }
	inline void set_U3CsupportsRemovalOfAutomaticU3Ek__BackingField_5(bool value)
	{
		___U3CsupportsRemovalOfAutomaticU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsEnvironmentTextureU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2, ___U3CsupportsEnvironmentTextureU3Ek__BackingField_6)); }
	inline bool get_U3CsupportsEnvironmentTextureU3Ek__BackingField_6() const { return ___U3CsupportsEnvironmentTextureU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CsupportsEnvironmentTextureU3Ek__BackingField_6() { return &___U3CsupportsEnvironmentTextureU3Ek__BackingField_6; }
	inline void set_U3CsupportsEnvironmentTextureU3Ek__BackingField_6(bool value)
	{
		___U3CsupportsEnvironmentTextureU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsEnvironmentTextureHDRU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2, ___U3CsupportsEnvironmentTextureHDRU3Ek__BackingField_7)); }
	inline bool get_U3CsupportsEnvironmentTextureHDRU3Ek__BackingField_7() const { return ___U3CsupportsEnvironmentTextureHDRU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CsupportsEnvironmentTextureHDRU3Ek__BackingField_7() { return &___U3CsupportsEnvironmentTextureHDRU3Ek__BackingField_7; }
	inline void set_U3CsupportsEnvironmentTextureHDRU3Ek__BackingField_7(bool value)
	{
		___U3CsupportsEnvironmentTextureHDRU3Ek__BackingField_7 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo
struct XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CimplementationTypeU3Ek__BackingField_1;
	int32_t ___U3CsupportsManualPlacementU3Ek__BackingField_2;
	int32_t ___U3CsupportsRemovalOfManualU3Ek__BackingField_3;
	int32_t ___U3CsupportsAutomaticPlacementU3Ek__BackingField_4;
	int32_t ___U3CsupportsRemovalOfAutomaticU3Ek__BackingField_5;
	int32_t ___U3CsupportsEnvironmentTextureU3Ek__BackingField_6;
	int32_t ___U3CsupportsEnvironmentTextureHDRU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo
struct XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CimplementationTypeU3Ek__BackingField_1;
	int32_t ___U3CsupportsManualPlacementU3Ek__BackingField_2;
	int32_t ___U3CsupportsRemovalOfManualU3Ek__BackingField_3;
	int32_t ___U3CsupportsAutomaticPlacementU3Ek__BackingField_4;
	int32_t ___U3CsupportsRemovalOfAutomaticU3Ek__BackingField_5;
	int32_t ___U3CsupportsEnvironmentTextureU3Ek__BackingField_6;
	int32_t ___U3CsupportsEnvironmentTextureHDRU3Ek__BackingField_7;
};

// UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor_Cinfo
struct  Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 
{
public:
	// System.String UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor_Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor_Cinfo::<subsystemImplementationType>k__BackingField
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor_Cinfo::<supportsMovingImages>k__BackingField
	bool ___U3CsupportsMovingImagesU3Ek__BackingField_2;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor_Cinfo::<requiresPhysicalImageDimensions>k__BackingField
	bool ___U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor_Cinfo::<supportsMutableLibrary>k__BackingField
	bool ___U3CsupportsMutableLibraryU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32, ___U3CsubsystemImplementationTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CsubsystemImplementationTypeU3Ek__BackingField_1() const { return ___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return &___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline void set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CsubsystemImplementationTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemImplementationTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsupportsMovingImagesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32, ___U3CsupportsMovingImagesU3Ek__BackingField_2)); }
	inline bool get_U3CsupportsMovingImagesU3Ek__BackingField_2() const { return ___U3CsupportsMovingImagesU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CsupportsMovingImagesU3Ek__BackingField_2() { return &___U3CsupportsMovingImagesU3Ek__BackingField_2; }
	inline void set_U3CsupportsMovingImagesU3Ek__BackingField_2(bool value)
	{
		___U3CsupportsMovingImagesU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32, ___U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_3)); }
	inline bool get_U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_3() const { return ___U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_3() { return &___U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_3; }
	inline void set_U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_3(bool value)
	{
		___U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsMutableLibraryU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32, ___U3CsupportsMutableLibraryU3Ek__BackingField_4)); }
	inline bool get_U3CsupportsMutableLibraryU3Ek__BackingField_4() const { return ___U3CsupportsMutableLibraryU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CsupportsMutableLibraryU3Ek__BackingField_4() { return &___U3CsupportsMutableLibraryU3Ek__BackingField_4; }
	inline void set_U3CsupportsMutableLibraryU3Ek__BackingField_4(bool value)
	{
		___U3CsupportsMutableLibraryU3Ek__BackingField_4 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo
struct Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
	int32_t ___U3CsupportsMovingImagesU3Ek__BackingField_2;
	int32_t ___U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_3;
	int32_t ___U3CsupportsMutableLibraryU3Ek__BackingField_4;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo
struct Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
	int32_t ___U3CsupportsMovingImagesU3Ek__BackingField_2;
	int32_t ___U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_3;
	int32_t ___U3CsupportsMutableLibraryU3Ek__BackingField_4;
};

// UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo
struct  Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD 
{
public:
	// System.String UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo::<subsystemImplementationType>k__BackingField
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo::<supportsHorizontalPlaneDetection>k__BackingField
	bool ___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo::<supportsVerticalPlaneDetection>k__BackingField
	bool ___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo::<supportsArbitraryPlaneDetection>k__BackingField
	bool ___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo::<supportsBoundaryVertices>k__BackingField
	bool ___U3CsupportsBoundaryVerticesU3Ek__BackingField_5;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo::<supportsClassification>k__BackingField
	bool ___U3CsupportsClassificationU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD, ___U3CsubsystemImplementationTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CsubsystemImplementationTypeU3Ek__BackingField_1() const { return ___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return &___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline void set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CsubsystemImplementationTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemImplementationTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD, ___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2)); }
	inline bool get_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2() const { return ___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2() { return &___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2; }
	inline void set_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2(bool value)
	{
		___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD, ___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3)); }
	inline bool get_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3() const { return ___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3() { return &___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3; }
	inline void set_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3(bool value)
	{
		___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD, ___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4)); }
	inline bool get_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4() const { return ___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4() { return &___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4; }
	inline void set_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4(bool value)
	{
		___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsBoundaryVerticesU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD, ___U3CsupportsBoundaryVerticesU3Ek__BackingField_5)); }
	inline bool get_U3CsupportsBoundaryVerticesU3Ek__BackingField_5() const { return ___U3CsupportsBoundaryVerticesU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CsupportsBoundaryVerticesU3Ek__BackingField_5() { return &___U3CsupportsBoundaryVerticesU3Ek__BackingField_5; }
	inline void set_U3CsupportsBoundaryVerticesU3Ek__BackingField_5(bool value)
	{
		___U3CsupportsBoundaryVerticesU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsClassificationU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD, ___U3CsupportsClassificationU3Ek__BackingField_6)); }
	inline bool get_U3CsupportsClassificationU3Ek__BackingField_6() const { return ___U3CsupportsClassificationU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CsupportsClassificationU3Ek__BackingField_6() { return &___U3CsupportsClassificationU3Ek__BackingField_6; }
	inline void set_U3CsupportsClassificationU3Ek__BackingField_6(bool value)
	{
		___U3CsupportsClassificationU3Ek__BackingField_6 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo
struct Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
	int32_t ___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2;
	int32_t ___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3;
	int32_t ___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4;
	int32_t ___U3CsupportsBoundaryVerticesU3Ek__BackingField_5;
	int32_t ___U3CsupportsClassificationU3Ek__BackingField_6;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo
struct Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
	int32_t ___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2;
	int32_t ___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3;
	int32_t ___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4;
	int32_t ___U3CsupportsBoundaryVerticesU3Ek__BackingField_5;
	int32_t ___U3CsupportsClassificationU3Ek__BackingField_6;
};

// UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo
struct  Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo::<supportsInstall>k__BackingField
	bool ___U3CsupportsInstallU3Ek__BackingField_0;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo::<supportsMatchFrameRate>k__BackingField
	bool ___U3CsupportsMatchFrameRateU3Ek__BackingField_1;
	// System.String UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_2;
	// System.Type UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo::<subsystemImplementationType>k__BackingField
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CsupportsInstallU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A, ___U3CsupportsInstallU3Ek__BackingField_0)); }
	inline bool get_U3CsupportsInstallU3Ek__BackingField_0() const { return ___U3CsupportsInstallU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CsupportsInstallU3Ek__BackingField_0() { return &___U3CsupportsInstallU3Ek__BackingField_0; }
	inline void set_U3CsupportsInstallU3Ek__BackingField_0(bool value)
	{
		___U3CsupportsInstallU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsMatchFrameRateU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A, ___U3CsupportsMatchFrameRateU3Ek__BackingField_1)); }
	inline bool get_U3CsupportsMatchFrameRateU3Ek__BackingField_1() const { return ___U3CsupportsMatchFrameRateU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CsupportsMatchFrameRateU3Ek__BackingField_1() { return &___U3CsupportsMatchFrameRateU3Ek__BackingField_1; }
	inline void set_U3CsupportsMatchFrameRateU3Ek__BackingField_1(bool value)
	{
		___U3CsupportsMatchFrameRateU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A, ___U3CidU3Ek__BackingField_2)); }
	inline String_t* get_U3CidU3Ek__BackingField_2() const { return ___U3CidU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_2() { return &___U3CidU3Ek__BackingField_2; }
	inline void set_U3CidU3Ek__BackingField_2(String_t* value)
	{
		___U3CidU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemImplementationTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A, ___U3CsubsystemImplementationTypeU3Ek__BackingField_3)); }
	inline Type_t * get_U3CsubsystemImplementationTypeU3Ek__BackingField_3() const { return ___U3CsubsystemImplementationTypeU3Ek__BackingField_3; }
	inline Type_t ** get_address_of_U3CsubsystemImplementationTypeU3Ek__BackingField_3() { return &___U3CsubsystemImplementationTypeU3Ek__BackingField_3; }
	inline void set_U3CsubsystemImplementationTypeU3Ek__BackingField_3(Type_t * value)
	{
		___U3CsubsystemImplementationTypeU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemImplementationTypeU3Ek__BackingField_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
struct Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_marshaled_pinvoke
{
	int32_t ___U3CsupportsInstallU3Ek__BackingField_0;
	int32_t ___U3CsupportsMatchFrameRateU3Ek__BackingField_1;
	char* ___U3CidU3Ek__BackingField_2;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
struct Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_marshaled_com
{
	int32_t ___U3CsupportsInstallU3Ek__BackingField_0;
	int32_t ___U3CsupportsMatchFrameRateU3Ek__BackingField_1;
	Il2CppChar* ___U3CidU3Ek__BackingField_2;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
};

// System.Delegate
struct  Delegate_t  : public RuntimeObject
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
struct  Exception_t  : public RuntimeObject
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

// System.Int32Enum
struct  Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct  BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
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


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
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


// Unity.Collections.Allocator
struct  Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
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

// UnityEngine.XR.ARKit.ARKitCameraSubsystem_CameraConfigurationResult
struct  CameraConfigurationResult_t88B2CEBCA2C7C5310468B805A6C738A5ED5D04E9 
{
public:
	// System.Int32 UnityEngine.XR.ARKit.ARKitCameraSubsystem_CameraConfigurationResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraConfigurationResult_t88B2CEBCA2C7C5310468B805A6C738A5ED5D04E9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARKit.ARKitParticipantSubsystem_ARKitProvider
struct  ARKitProvider_t9908B32D1E5398BA2FD0D825E9343F8CA0277B4C  : public Provider_t1D0BC515976D24FD30341AC456ACFCB2DE4A344E
{
public:
	// System.IntPtr UnityEngine.XR.ARKit.ARKitParticipantSubsystem_ARKitProvider::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ARKitProvider_t9908B32D1E5398BA2FD0D825E9343F8CA0277B4C, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.XR.ARKit.ARKitSessionSubsystem_NativeApi_Availability
struct  Availability_tC71B9EC590C2DBAC608742646F563CEC07C89E79 
{
public:
	// System.Int32 UnityEngine.XR.ARKit.ARKitSessionSubsystem_NativeApi_Availability::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Availability_tC71B9EC590C2DBAC608742646F563CEC07C89E79, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARKit.ARWorldMapRequestStatus
struct  ARWorldMapRequestStatus_t9A2ABBA3D64593F57CCFC959D7D294CE5E54E73C 
{
public:
	// System.Int32 UnityEngine.XR.ARKit.ARWorldMapRequestStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ARWorldMapRequestStatus_t9A2ABBA3D64593F57CCFC959D7D294CE5E54E73C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableType
struct  TrackableType_t2352F7091A5BE0192C8D908019BA7481A347C85F 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.TrackableType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackableType_t2352F7091A5BE0192C8D908019BA7481A347C85F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor_Capabilities
struct  Capabilities_t6199DDFE580DA802DBAEC0155BA1C345525286CC 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor_Capabilities::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Capabilities_t6199DDFE580DA802DBAEC0155BA1C345525286CC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor_Capabilities
struct  Capabilities_t9DF0D3D327C4E491811A4DFCF21EBD355596C4D0 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor_Capabilities::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Capabilities_t9DF0D3D327C4E491811A4DFCF21EBD355596C4D0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRSubsystem`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor>
struct  XRSubsystem_1_tF835F3EF2E1DD7695754B4C37AAC6690247BEEF8  : public Subsystem_1_t16F70B2C8DA07B124E08293EE86247ACFD69BACB
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRSubsystem`1<UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor>
struct  XRSubsystem_1_t77A771327651FFF6C71014361B92282768BA67E5  : public Subsystem_1_tD02717E44DD9D5713C4EB686D959898770B5CE59
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRSubsystem`1<UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor>
struct  XRSubsystem_1_tF5891212BD8C071B0A2ABEE404EDEF073365DDE1  : public Subsystem_1_t5D9917B9F24E4BDCAB148BE5A32183E9E007FBE7
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRSubsystem`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemDescriptor>
struct  XRSubsystem_1_tD350FD666143A3243169AF05C108CF9DCAC600FE  : public Subsystem_1_t1C30F36AAF593338BC848FB8DC2F3AC365694A52
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRSubsystem`1<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor>
struct  XRSubsystem_1_tC1127EAA3EC3D1136E61A390520C6B76A7A3F6B1  : public Subsystem_1_tB8B5B49050231B9F7BA3B4B527A459850478AA8B
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRSubsystem`1<UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor>
struct  XRSubsystem_1_t175DB250DF3A9611A5254CFB4070FB901BE5993F  : public Subsystem_1_t58A0DA59D1CA40C3BCC841E27793389A80315430
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRSubsystem`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor>
struct  XRSubsystem_1_t9BD67BC333C54D1AFA4A0479D01CDBE41AB4EB61  : public Subsystem_1_t3E948B6E9CFA231C2E92F7F2B9D1CBBC7C452E14
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRSubsystem`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor>
struct  XRSubsystem_1_tC5B08F644C4FBD76D4093D31038E7355038626ED  : public Subsystem_1_tBFBEF39ED929482A2368EB2CD47E179F2E78F5A6
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRSubsystem`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>
struct  XRSubsystem_1_t0F35293BB968891335B58BEFE3611D582FBB1A83  : public Subsystem_1_tB1D5F14A3E3355FA54EA71B587D64873AC6C7237
{
public:

public:
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
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

// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
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


// Unity.Collections.NativeArray`1<UnityEngine.Quaternion>
struct  NativeArray_1_t2672EA3A09E3FE76419439DC581905D460584A60 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t2672EA3A09E3FE76419439DC581905D460584A60, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t2672EA3A09E3FE76419439DC581905D460584A60, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t2672EA3A09E3FE76419439DC581905D460584A60, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Vector2>
struct  NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Vector3>
struct  NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Vector4>
struct  NativeArray_1_t381CA7D92591F9C96DB84965C31AF8713A546156 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t381CA7D92591F9C96DB84965C31AF8713A546156, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t381CA7D92591F9C96DB84965C31AF8713A546156, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t381CA7D92591F9C96DB84965C31AF8713A546156, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// UnityEngine.Material
struct  Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor>
struct  TrackingSubsystem_2_tD21DB8BFE8C3B02D3C756C096FECE71DD0214B9E  : public XRSubsystem_1_t9BD67BC333C54D1AFA4A0479D01CDBE41AB4EB61
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRAnchor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor>
struct  TrackingSubsystem_2_t020D3F075CB29EC7CC963289203B6620C36C670D  : public XRSubsystem_1_tF835F3EF2E1DD7695754B4C37AAC6690247BEEF8
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XREnvironmentProbe,UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemDescriptor>
struct  TrackingSubsystem_2_t635B13DDDEED6B25BD720BEFCE637E975A541238  : public XRSubsystem_1_tD350FD666143A3243169AF05C108CF9DCAC600FE
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRParticipant,UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor>
struct  TrackingSubsystem_2_tD427C3B655A8844B9C7731EF2F22DE6D47A37D93  : public XRSubsystem_1_t175DB250DF3A9611A5254CFB4070FB901BE5993F
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRPointCloud,UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor>
struct  TrackingSubsystem_2_t79FA04791F70D13E9BCAD481CA4A88948F7A0E39  : public XRSubsystem_1_tF5891212BD8C071B0A2ABEE404EDEF073365DDE1
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor>
struct  TrackingSubsystem_2_t8BA756796BBE751160DDDD56AEB0F699FAD7040A  : public XRSubsystem_1_tC1127EAA3EC3D1136E61A390520C6B76A7A3F6B1
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRCameraSubsystem
struct  XRCameraSubsystem_t3B32F6EA8A2E4D23AF240B5D21C34759D2613AC9  : public XRSubsystem_1_t77A771327651FFF6C71014361B92282768BA67E5
{
public:
	// UnityEngine.XR.ARSubsystems.XRCameraSubsystem_Provider UnityEngine.XR.ARSubsystems.XRCameraSubsystem::m_Provider
	Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1 * ___m_Provider_0;

public:
	inline static int32_t get_offset_of_m_Provider_0() { return static_cast<int32_t>(offsetof(XRCameraSubsystem_t3B32F6EA8A2E4D23AF240B5D21C34759D2613AC9, ___m_Provider_0)); }
	inline Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1 * get_m_Provider_0() const { return ___m_Provider_0; }
	inline Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1 ** get_address_of_m_Provider_0() { return &___m_Provider_0; }
	inline void set_m_Provider_0(Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1 * value)
	{
		___m_Provider_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Provider_0), (void*)value);
	}
};


// UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor_Cinfo
struct  Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 
{
public:
	// System.String UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor_Cinfo::id
	String_t* ___id_0;
	// System.Type UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor_Cinfo::implementationType
	Type_t * ___implementationType_1;
	// UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor_Capabilities UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor_Cinfo::<capabilities>k__BackingField
	int32_t ___U3CcapabilitiesU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_0), (void*)value);
	}

	inline static int32_t get_offset_of_implementationType_1() { return static_cast<int32_t>(offsetof(Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1, ___implementationType_1)); }
	inline Type_t * get_implementationType_1() const { return ___implementationType_1; }
	inline Type_t ** get_address_of_implementationType_1() { return &___implementationType_1; }
	inline void set_implementationType_1(Type_t * value)
	{
		___implementationType_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___implementationType_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcapabilitiesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1, ___U3CcapabilitiesU3Ek__BackingField_2)); }
	inline int32_t get_U3CcapabilitiesU3Ek__BackingField_2() const { return ___U3CcapabilitiesU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CcapabilitiesU3Ek__BackingField_2() { return &___U3CcapabilitiesU3Ek__BackingField_2; }
	inline void set_U3CcapabilitiesU3Ek__BackingField_2(int32_t value)
	{
		___U3CcapabilitiesU3Ek__BackingField_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo
struct Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1_marshaled_pinvoke
{
	char* ___id_0;
	Type_t * ___implementationType_1;
	int32_t ___U3CcapabilitiesU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo
struct Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1_marshaled_com
{
	Il2CppChar* ___id_0;
	Type_t * ___implementationType_1;
	int32_t ___U3CcapabilitiesU3Ek__BackingField_2;
};

// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem
struct  XRRaycastSubsystem_t62FDAC9AA1BD44C4557AEE3FEF3D2FA24C71B6B8  : public XRSubsystem_1_tC5B08F644C4FBD76D4093D31038E7355038626ED
{
public:
	// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem_Provider UnityEngine.XR.ARSubsystems.XRRaycastSubsystem::m_Provider
	Provider_tF185BE0541D2066CD242583CEFE7709DD22DD227 * ___m_Provider_0;

public:
	inline static int32_t get_offset_of_m_Provider_0() { return static_cast<int32_t>(offsetof(XRRaycastSubsystem_t62FDAC9AA1BD44C4557AEE3FEF3D2FA24C71B6B8, ___m_Provider_0)); }
	inline Provider_tF185BE0541D2066CD242583CEFE7709DD22DD227 * get_m_Provider_0() const { return ___m_Provider_0; }
	inline Provider_tF185BE0541D2066CD242583CEFE7709DD22DD227 ** get_address_of_m_Provider_0() { return &___m_Provider_0; }
	inline void set_m_Provider_0(Provider_tF185BE0541D2066CD242583CEFE7709DD22DD227 * value)
	{
		___m_Provider_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Provider_0), (void*)value);
	}
};


// UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor_Cinfo
struct  Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 
{
public:
	// System.String UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor_Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor_Cinfo::<subsystemImplementationType>k__BackingField
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor_Cinfo::<supportsViewportBasedRaycast>k__BackingField
	bool ___U3CsupportsViewportBasedRaycastU3Ek__BackingField_2;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor_Cinfo::<supportsWorldBasedRaycast>k__BackingField
	bool ___U3CsupportsWorldBasedRaycastU3Ek__BackingField_3;
	// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor_Cinfo::<supportedTrackableTypes>k__BackingField
	int32_t ___U3CsupportedTrackableTypesU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01, ___U3CsubsystemImplementationTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CsubsystemImplementationTypeU3Ek__BackingField_1() const { return ___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return &___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline void set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CsubsystemImplementationTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemImplementationTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsupportsViewportBasedRaycastU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01, ___U3CsupportsViewportBasedRaycastU3Ek__BackingField_2)); }
	inline bool get_U3CsupportsViewportBasedRaycastU3Ek__BackingField_2() const { return ___U3CsupportsViewportBasedRaycastU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CsupportsViewportBasedRaycastU3Ek__BackingField_2() { return &___U3CsupportsViewportBasedRaycastU3Ek__BackingField_2; }
	inline void set_U3CsupportsViewportBasedRaycastU3Ek__BackingField_2(bool value)
	{
		___U3CsupportsViewportBasedRaycastU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsWorldBasedRaycastU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01, ___U3CsupportsWorldBasedRaycastU3Ek__BackingField_3)); }
	inline bool get_U3CsupportsWorldBasedRaycastU3Ek__BackingField_3() const { return ___U3CsupportsWorldBasedRaycastU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CsupportsWorldBasedRaycastU3Ek__BackingField_3() { return &___U3CsupportsWorldBasedRaycastU3Ek__BackingField_3; }
	inline void set_U3CsupportsWorldBasedRaycastU3Ek__BackingField_3(bool value)
	{
		___U3CsupportsWorldBasedRaycastU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CsupportedTrackableTypesU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01, ___U3CsupportedTrackableTypesU3Ek__BackingField_4)); }
	inline int32_t get_U3CsupportedTrackableTypesU3Ek__BackingField_4() const { return ___U3CsupportedTrackableTypesU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CsupportedTrackableTypesU3Ek__BackingField_4() { return &___U3CsupportedTrackableTypesU3Ek__BackingField_4; }
	inline void set_U3CsupportedTrackableTypesU3Ek__BackingField_4(int32_t value)
	{
		___U3CsupportedTrackableTypesU3Ek__BackingField_4 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo
struct Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
	int32_t ___U3CsupportsViewportBasedRaycastU3Ek__BackingField_2;
	int32_t ___U3CsupportsWorldBasedRaycastU3Ek__BackingField_3;
	int32_t ___U3CsupportedTrackableTypesU3Ek__BackingField_4;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo
struct Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
	int32_t ___U3CsupportsViewportBasedRaycastU3Ek__BackingField_2;
	int32_t ___U3CsupportsWorldBasedRaycastU3Ek__BackingField_3;
	int32_t ___U3CsupportedTrackableTypesU3Ek__BackingField_4;
};

// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct  XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD  : public XRSubsystem_1_t0F35293BB968891335B58BEFE3611D582FBB1A83
{
public:
	// UnityEngine.XR.ARSubsystems.XRSessionSubsystem_Provider UnityEngine.XR.ARSubsystems.XRSessionSubsystem::m_Provider
	Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * ___m_Provider_0;

public:
	inline static int32_t get_offset_of_m_Provider_0() { return static_cast<int32_t>(offsetof(XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD, ___m_Provider_0)); }
	inline Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * get_m_Provider_0() const { return ___m_Provider_0; }
	inline Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A ** get_address_of_m_Provider_0() { return &___m_Provider_0; }
	inline void set_m_Provider_0(Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * value)
	{
		___m_Provider_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Provider_0), (void*)value);
	}
};


// System.Action`2<UnityEngine.XR.ARKit.ARWorldMapRequestStatus,UnityEngine.XR.ARKit.ARWorldMap>
struct  Action_2_t6F4217AA55351EE6822133CE02984E6B59F83112  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct  ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
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


// System.AsyncCallback
struct  AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitCameraSubsystem
struct  ARKitCameraSubsystem_tE327D2A1BE7A0BD90A9353C8EDBDE9A882315245  : public XRCameraSubsystem_t3B32F6EA8A2E4D23AF240B5D21C34759D2613AC9
{
public:

public:
};

struct ARKitCameraSubsystem_tE327D2A1BE7A0BD90A9353C8EDBDE9A882315245_StaticFields
{
public:
	// System.Collections.Generic.List`1<System.String> UnityEngine.XR.ARKit.ARKitCameraSubsystem::k_BackgroundShaderKeywordsToNotCompile
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___k_BackgroundShaderKeywordsToNotCompile_1;

public:
	inline static int32_t get_offset_of_k_BackgroundShaderKeywordsToNotCompile_1() { return static_cast<int32_t>(offsetof(ARKitCameraSubsystem_tE327D2A1BE7A0BD90A9353C8EDBDE9A882315245_StaticFields, ___k_BackgroundShaderKeywordsToNotCompile_1)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_k_BackgroundShaderKeywordsToNotCompile_1() const { return ___k_BackgroundShaderKeywordsToNotCompile_1; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_k_BackgroundShaderKeywordsToNotCompile_1() { return &___k_BackgroundShaderKeywordsToNotCompile_1; }
	inline void set_k_BackgroundShaderKeywordsToNotCompile_1(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___k_BackgroundShaderKeywordsToNotCompile_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_BackgroundShaderKeywordsToNotCompile_1), (void*)value);
	}
};


// UnityEngine.XR.ARKit.ARKitRaycastSubsystem
struct  ARKitRaycastSubsystem_t8DF7A7F21C4610FBBEF6A240FD1790CD47BE9900  : public XRRaycastSubsystem_t62FDAC9AA1BD44C4557AEE3FEF3D2FA24C71B6B8
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitSessionSubsystem
struct  ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216  : public XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD
{
public:

public:
};

struct ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216_StaticFields
{
public:
	// UnityEngine.XR.ARKit.ARKitSessionSubsystem_NativeApi_OnAsyncConversionCompleteDelegate UnityEngine.XR.ARKit.ARKitSessionSubsystem::s_OnAsyncWorldMapCompleted
	OnAsyncConversionCompleteDelegate_tFE6205610918E7A87E7867F879A863FD2FE8ECDF * ___s_OnAsyncWorldMapCompleted_1;
	// System.Boolean UnityEngine.XR.ARKit.ARKitSessionSubsystem::s_SupportsCollaboration
	bool ___s_SupportsCollaboration_2;

public:
	inline static int32_t get_offset_of_s_OnAsyncWorldMapCompleted_1() { return static_cast<int32_t>(offsetof(ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216_StaticFields, ___s_OnAsyncWorldMapCompleted_1)); }
	inline OnAsyncConversionCompleteDelegate_tFE6205610918E7A87E7867F879A863FD2FE8ECDF * get_s_OnAsyncWorldMapCompleted_1() const { return ___s_OnAsyncWorldMapCompleted_1; }
	inline OnAsyncConversionCompleteDelegate_tFE6205610918E7A87E7867F879A863FD2FE8ECDF ** get_address_of_s_OnAsyncWorldMapCompleted_1() { return &___s_OnAsyncWorldMapCompleted_1; }
	inline void set_s_OnAsyncWorldMapCompleted_1(OnAsyncConversionCompleteDelegate_tFE6205610918E7A87E7867F879A863FD2FE8ECDF * value)
	{
		___s_OnAsyncWorldMapCompleted_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_OnAsyncWorldMapCompleted_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_SupportsCollaboration_2() { return static_cast<int32_t>(offsetof(ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216_StaticFields, ___s_SupportsCollaboration_2)); }
	inline bool get_s_SupportsCollaboration_2() const { return ___s_SupportsCollaboration_2; }
	inline bool* get_address_of_s_SupportsCollaboration_2() { return &___s_SupportsCollaboration_2; }
	inline void set_s_SupportsCollaboration_2(bool value)
	{
		___s_SupportsCollaboration_2 = value;
	}
};


// UnityEngine.XR.ARKit.ARKitSessionSubsystem_NativeApi_OnAsyncConversionCompleteDelegate
struct  OnAsyncConversionCompleteDelegate_tFE6205610918E7A87E7867F879A863FD2FE8ECDF  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitXRDepthSubsystem_TransformPositionsJob
struct  TransformPositionsJob_t76836F51EABF9ECE4503F3ECAC1DA2C32D0DA468 
{
public:
	// Unity.Collections.NativeArray`1<UnityEngine.Quaternion> UnityEngine.XR.ARKit.ARKitXRDepthSubsystem_TransformPositionsJob::positionsIn
	NativeArray_1_t2672EA3A09E3FE76419439DC581905D460584A60  ___positionsIn_0;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector3> UnityEngine.XR.ARKit.ARKitXRDepthSubsystem_TransformPositionsJob::positionsOut
	NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  ___positionsOut_1;

public:
	inline static int32_t get_offset_of_positionsIn_0() { return static_cast<int32_t>(offsetof(TransformPositionsJob_t76836F51EABF9ECE4503F3ECAC1DA2C32D0DA468, ___positionsIn_0)); }
	inline NativeArray_1_t2672EA3A09E3FE76419439DC581905D460584A60  get_positionsIn_0() const { return ___positionsIn_0; }
	inline NativeArray_1_t2672EA3A09E3FE76419439DC581905D460584A60 * get_address_of_positionsIn_0() { return &___positionsIn_0; }
	inline void set_positionsIn_0(NativeArray_1_t2672EA3A09E3FE76419439DC581905D460584A60  value)
	{
		___positionsIn_0 = value;
	}

	inline static int32_t get_offset_of_positionsOut_1() { return static_cast<int32_t>(offsetof(TransformPositionsJob_t76836F51EABF9ECE4503F3ECAC1DA2C32D0DA468, ___positionsOut_1)); }
	inline NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  get_positionsOut_1() const { return ___positionsOut_1; }
	inline NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 * get_address_of_positionsOut_1() { return &___positionsOut_1; }
	inline void set_positionsOut_1(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  value)
	{
		___positionsOut_1 = value;
	}
};


// UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem_ARKitProvider_FlipBoundaryWindingJob
struct  FlipBoundaryWindingJob_t726CFFAB953CC7C841EE74365C27322E57A2A5DA 
{
public:
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem_ARKitProvider_FlipBoundaryWindingJob::positions
	NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  ___positions_0;

public:
	inline static int32_t get_offset_of_positions_0() { return static_cast<int32_t>(offsetof(FlipBoundaryWindingJob_t726CFFAB953CC7C841EE74365C27322E57A2A5DA, ___positions_0)); }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  get_positions_0() const { return ___positions_0; }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * get_address_of_positions_0() { return &___positions_0; }
	inline void set_positions_0(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  value)
	{
		___positions_0 = value;
	}
};


// UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem_ARKitProvider_TransformBoundaryPositionsJob
struct  TransformBoundaryPositionsJob_t538BF69F9F744EBC94AA0487075746AD113A64FE 
{
public:
	// Unity.Collections.NativeArray`1<UnityEngine.Vector4> UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem_ARKitProvider_TransformBoundaryPositionsJob::positionsIn
	NativeArray_1_t381CA7D92591F9C96DB84965C31AF8713A546156  ___positionsIn_0;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem_ARKitProvider_TransformBoundaryPositionsJob::positionsOut
	NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  ___positionsOut_1;

public:
	inline static int32_t get_offset_of_positionsIn_0() { return static_cast<int32_t>(offsetof(TransformBoundaryPositionsJob_t538BF69F9F744EBC94AA0487075746AD113A64FE, ___positionsIn_0)); }
	inline NativeArray_1_t381CA7D92591F9C96DB84965C31AF8713A546156  get_positionsIn_0() const { return ___positionsIn_0; }
	inline NativeArray_1_t381CA7D92591F9C96DB84965C31AF8713A546156 * get_address_of_positionsIn_0() { return &___positionsIn_0; }
	inline void set_positionsIn_0(NativeArray_1_t381CA7D92591F9C96DB84965C31AF8713A546156  value)
	{
		___positionsIn_0 = value;
	}

	inline static int32_t get_offset_of_positionsOut_1() { return static_cast<int32_t>(offsetof(TransformBoundaryPositionsJob_t538BF69F9F744EBC94AA0487075746AD113A64FE, ___positionsOut_1)); }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  get_positionsOut_1() const { return ___positionsOut_1; }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * get_address_of_positionsOut_1() { return &___positionsOut_1; }
	inline void set_positionsOut_1(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  value)
	{
		___positionsOut_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem
struct  XRAnchorSubsystem_t625D9B76C590AB601CF85525DB9396BE84425AA7  : public TrackingSubsystem_2_t020D3F075CB29EC7CC963289203B6620C36C670D
{
public:
	// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem_Provider UnityEngine.XR.ARSubsystems.XRAnchorSubsystem::m_Provider
	Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2 * ___m_Provider_0;

public:
	inline static int32_t get_offset_of_m_Provider_0() { return static_cast<int32_t>(offsetof(XRAnchorSubsystem_t625D9B76C590AB601CF85525DB9396BE84425AA7, ___m_Provider_0)); }
	inline Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2 * get_m_Provider_0() const { return ___m_Provider_0; }
	inline Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2 ** get_address_of_m_Provider_0() { return &___m_Provider_0; }
	inline void set_m_Provider_0(Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2 * value)
	{
		___m_Provider_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Provider_0), (void*)value);
	}
};


// UnityEngine.XR.ARSubsystems.XRDepthSubsystem
struct  XRDepthSubsystem_t808E21F0192095B08FA03AC535314FB5EF3B7E28  : public TrackingSubsystem_2_t79FA04791F70D13E9BCAD481CA4A88948F7A0E39
{
public:
	// UnityEngine.XR.ARSubsystems.XRDepthSubsystem_Provider UnityEngine.XR.ARSubsystems.XRDepthSubsystem::m_Provider
	Provider_t8E88C17A70269CD3E96909AFCCA952AAA7DEC0B6 * ___m_Provider_0;

public:
	inline static int32_t get_offset_of_m_Provider_0() { return static_cast<int32_t>(offsetof(XRDepthSubsystem_t808E21F0192095B08FA03AC535314FB5EF3B7E28, ___m_Provider_0)); }
	inline Provider_t8E88C17A70269CD3E96909AFCCA952AAA7DEC0B6 * get_m_Provider_0() const { return ___m_Provider_0; }
	inline Provider_t8E88C17A70269CD3E96909AFCCA952AAA7DEC0B6 ** get_address_of_m_Provider_0() { return &___m_Provider_0; }
	inline void set_m_Provider_0(Provider_t8E88C17A70269CD3E96909AFCCA952AAA7DEC0B6 * value)
	{
		___m_Provider_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Provider_0), (void*)value);
	}
};


// UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem
struct  XREnvironmentProbeSubsystem_t0C60258F565400E7C5AF0E0B7FA933F2BCF83CB6  : public TrackingSubsystem_2_t635B13DDDEED6B25BD720BEFCE637E975A541238
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem::m_EnvironmentTextureHDR
	bool ___m_EnvironmentTextureHDR_0;
	// UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem_Provider UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem::m_Provider
	Provider_tAF87FE3E906FDBF14F06488A1AA5E80400EFE190 * ___m_Provider_1;

public:
	inline static int32_t get_offset_of_m_EnvironmentTextureHDR_0() { return static_cast<int32_t>(offsetof(XREnvironmentProbeSubsystem_t0C60258F565400E7C5AF0E0B7FA933F2BCF83CB6, ___m_EnvironmentTextureHDR_0)); }
	inline bool get_m_EnvironmentTextureHDR_0() const { return ___m_EnvironmentTextureHDR_0; }
	inline bool* get_address_of_m_EnvironmentTextureHDR_0() { return &___m_EnvironmentTextureHDR_0; }
	inline void set_m_EnvironmentTextureHDR_0(bool value)
	{
		___m_EnvironmentTextureHDR_0 = value;
	}

	inline static int32_t get_offset_of_m_Provider_1() { return static_cast<int32_t>(offsetof(XREnvironmentProbeSubsystem_t0C60258F565400E7C5AF0E0B7FA933F2BCF83CB6, ___m_Provider_1)); }
	inline Provider_tAF87FE3E906FDBF14F06488A1AA5E80400EFE190 * get_m_Provider_1() const { return ___m_Provider_1; }
	inline Provider_tAF87FE3E906FDBF14F06488A1AA5E80400EFE190 ** get_address_of_m_Provider_1() { return &___m_Provider_1; }
	inline void set_m_Provider_1(Provider_tAF87FE3E906FDBF14F06488A1AA5E80400EFE190 * value)
	{
		___m_Provider_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Provider_1), (void*)value);
	}
};


// UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem
struct  XRImageTrackingSubsystem_tBC68AD21C11D8D67F3343844E129DF505FF705CE  : public TrackingSubsystem_2_t8BA756796BBE751160DDDD56AEB0F699FAD7040A
{
public:
	// UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem_Provider UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem::m_Provider
	Provider_tA7CEF856C3BC486ADEBD656F5535E24262AAAE9E * ___m_Provider_0;

public:
	inline static int32_t get_offset_of_m_Provider_0() { return static_cast<int32_t>(offsetof(XRImageTrackingSubsystem_tBC68AD21C11D8D67F3343844E129DF505FF705CE, ___m_Provider_0)); }
	inline Provider_tA7CEF856C3BC486ADEBD656F5535E24262AAAE9E * get_m_Provider_0() const { return ___m_Provider_0; }
	inline Provider_tA7CEF856C3BC486ADEBD656F5535E24262AAAE9E ** get_address_of_m_Provider_0() { return &___m_Provider_0; }
	inline void set_m_Provider_0(Provider_tA7CEF856C3BC486ADEBD656F5535E24262AAAE9E * value)
	{
		___m_Provider_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Provider_0), (void*)value);
	}
};


// UnityEngine.XR.ARSubsystems.XRParticipantSubsystem
struct  XRParticipantSubsystem_t7F710E46FC5A17967E7CAE126DE9443C752C36FC  : public TrackingSubsystem_2_tD427C3B655A8844B9C7731EF2F22DE6D47A37D93
{
public:
	// UnityEngine.XR.ARSubsystems.XRParticipantSubsystem_Provider UnityEngine.XR.ARSubsystems.XRParticipantSubsystem::m_Provider
	Provider_t1D0BC515976D24FD30341AC456ACFCB2DE4A344E * ___m_Provider_0;

public:
	inline static int32_t get_offset_of_m_Provider_0() { return static_cast<int32_t>(offsetof(XRParticipantSubsystem_t7F710E46FC5A17967E7CAE126DE9443C752C36FC, ___m_Provider_0)); }
	inline Provider_t1D0BC515976D24FD30341AC456ACFCB2DE4A344E * get_m_Provider_0() const { return ___m_Provider_0; }
	inline Provider_t1D0BC515976D24FD30341AC456ACFCB2DE4A344E ** get_address_of_m_Provider_0() { return &___m_Provider_0; }
	inline void set_m_Provider_0(Provider_t1D0BC515976D24FD30341AC456ACFCB2DE4A344E * value)
	{
		___m_Provider_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Provider_0), (void*)value);
	}
};


// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem
struct  XRPlaneSubsystem_t7C76F9D2C993B0DC38F0A7CDCE745EA7C12417EE  : public TrackingSubsystem_2_tD21DB8BFE8C3B02D3C756C096FECE71DD0214B9E
{
public:
	// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem_Provider UnityEngine.XR.ARSubsystems.XRPlaneSubsystem::m_Provider
	Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12 * ___m_Provider_0;

public:
	inline static int32_t get_offset_of_m_Provider_0() { return static_cast<int32_t>(offsetof(XRPlaneSubsystem_t7C76F9D2C993B0DC38F0A7CDCE745EA7C12417EE, ___m_Provider_0)); }
	inline Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12 * get_m_Provider_0() const { return ___m_Provider_0; }
	inline Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12 ** get_address_of_m_Provider_0() { return &___m_Provider_0; }
	inline void set_m_Provider_0(Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12 * value)
	{
		___m_Provider_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Provider_0), (void*)value);
	}
};


// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
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


// UnityEngine.XR.ARKit.ARKitAnchorSubsystem
struct  ARKitAnchorSubsystem_t721F48C4B69507D7E38664A68AA42DD1DF75B3DF  : public XRAnchorSubsystem_t625D9B76C590AB601CF85525DB9396BE84425AA7
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitEnvironmentProbeSubsystem
struct  ARKitEnvironmentProbeSubsystem_t628136AE15CA16280BA838B37E2B7CDF0473E9D2  : public XREnvironmentProbeSubsystem_t0C60258F565400E7C5AF0E0B7FA933F2BCF83CB6
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem
struct  ARKitImageTrackingSubsystem_t0F98C12C3E36B9F3819FC43494A883B600401237  : public XRImageTrackingSubsystem_tBC68AD21C11D8D67F3343844E129DF505FF705CE
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitParticipantSubsystem
struct  ARKitParticipantSubsystem_tFBFB76108F5069693F4F40F8DAA4B6A907A709C3  : public XRParticipantSubsystem_t7F710E46FC5A17967E7CAE126DE9443C752C36FC
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitXRDepthSubsystem
struct  ARKitXRDepthSubsystem_t50D82DC2115EED29E5F0EEBA8A0F4FA7876BD2D5  : public XRDepthSubsystem_t808E21F0192095B08FA03AC535314FB5EF3B7E28
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem
struct  ARKitXRPlaneSubsystem_t03042D64756D81EC6B4657CD1323D7404EC7530B  : public XRPlaneSubsystem_t7C76F9D2C993B0DC38F0A7CDCE745EA7C12417EE
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor::Register<System.Object>(System.String,UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor/Capabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRParticipantSubsystemDescriptor_Register_TisRuntimeObject_m4096A625AA016937F6ABAE7CFC0DCD5B71D7A6EF_gshared (String_t* ___subsystemId0, int32_t ___capabilities1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Int32Enum,UnityEngine.XR.ARKit.ARWorldMap>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_Invoke_m33B0110C8FDDB4C5DE28702625FA53D2CC43EB53_gshared (Action_2_tBF7C7962F0CD8BFDA2D483FE7CEC080540530A3E * __this, int32_t ___arg10, ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2  ___arg21, const RuntimeMethod* method);

// System.Void UnityEngine.XR.ARKit.ARKitAnchorSubsystem/ARKitProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider__ctor_mD5890F7467A0A36FD0EA10CC44CB32E8DBD47469 (ARKitProvider_tE10DC6803776ECE42E55F127E68C47E50319202E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_mCB169DF169C36D9D12651785DCBF71ABCC10FD9D_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::set_subsystemImplementationType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_m22F8F6D7511C66B0B2240DABFBA9A38D01C8A31F_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::set_supportsTrackableAttachments(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsTrackableAttachments_m0B0516A50FFA22C3F60483E3498DC6BB1D460995_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor::Create(UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRAnchorSubsystemDescriptor_Create_m32C16A0DDC60ED2D374EFB884CF807E62B37C0A8 (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7  ___cinfo0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRAnchorSubsystem__ctor_mB5F70C2E39B5EA531C05244611590F400365265A (XRAnchorSubsystem_t625D9B76C590AB601CF85525DB9396BE84425AA7 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_id_m768994793A205C7D5CE603B354D350A34D47720D_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_implementationType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_implementationType_m4CC13E5510FAE9BDD9D8E126A796C6D5E05E558D_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsAverageBrightness(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsAverageBrightness_mC20A88BD3C8D137A1F34888C64DC5FFF37787759_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsAverageColorTemperature(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsAverageColorTemperature_m77727C8CBAB59D0D078B0A634EB0A56F1BF368E4_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsColorCorrection(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsColorCorrection_m1CBB9181A21D2A964705AD5E22F78735DCFE2C01_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsDisplayMatrix(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsDisplayMatrix_m2E11C0B7442273252613BDB41BB8B6F02698FBEA_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsProjectionMatrix(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsProjectionMatrix_mFC886F8859FDF308D7980935474AA0E66ECF66B4_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsTimestamp(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsTimestamp_mAA6157EC368F6358F155571E257A578729D368D4_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsCameraConfigurations(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsCameraConfigurations_mD0F431DDAB4F82DDC6E35AB7583572D25244E0F0_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsCameraImage(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsCameraImage_m2140EBB7ACEA9B1634F56DE2DCB85F26CB8C4D7D_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsAverageIntensityInLumens(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsAverageIntensityInLumens_m49462C178EF35B3E688EE6711FD3E41E9C1976AB_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsFocusModes(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsFocusModes_m2F70E7EFC54E2F930DEA28DC4922125E01FE3026_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystem::Register(UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRCameraSubsystem_Register_m8E9CD378020A98CC1728A5C0A3324D25439921F4 (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096  ___cameraSubsystemParams0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogErrorFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogErrorFormat_mDBF43684A22EAAB187285C9B4174C9555DB11E83 (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem/ARKitProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider__ctor_mFC17EA54C2DC44A58721A35D5B7607C607BF8AE4 (ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCameraSubsystem__ctor_m9DB793A0291AEB063BE13955137FCF52B8A6E222 (XRCameraSubsystem_t3B32F6EA8A2E4D23AF240B5D21C34759D2613AC9 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.String UnityEngine.iOS.Device::get_systemVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Device_get_systemVersion_m24E25D7065707439B7E6459035BEADFE2AFF8BCD (const RuntimeMethod* method);
// UnityEngine.XR.ARKit.OSVersion UnityEngine.XR.ARKit.OSVersion::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C  OSVersion_Parse_m9A591C48008204E0982ADD5B8F84AE915DE31597 (String_t* ___version0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.OSVersion::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSVersion__ctor_mE910D5DA6F2E1E3C44D319C4D849BA52E478CE4C (OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C * __this, int32_t ___major0, int32_t ___minor1, int32_t ___point2, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.OSVersion::op_LessThan(UnityEngine.XR.ARKit.OSVersion,UnityEngine.XR.ARKit.OSVersion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OSVersion_op_LessThan_m1D3CE8773D5DB2C45D7A5019C9631CC1083F22ED (OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C  ___lhs0, OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C  ___rhs1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_id_m5C48BD3E879410D5C622BE7DC74D5C798E151731_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::set_implementationType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_implementationType_m46EACEC5C1BCC55A1647EE8161074E1D1EEC32B0_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::set_supportsManualPlacement(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_supportsManualPlacement_m2D1156DE760E47CBDDC345AD5CAE5D23AC23E524_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::set_supportsRemovalOfManual(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_supportsRemovalOfManual_m01CE117FEA37EE9BEF79903754E396C35B859419_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::set_supportsAutomaticPlacement(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_supportsAutomaticPlacement_mC4DBFBBD4DBB44D6B1154C4759A3175F9AC33D46_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::set_supportsRemovalOfAutomatic(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_supportsRemovalOfAutomatic_m6FCC1E3ACDC01E4447E385A1B89C96DEE16B7EF2_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::set_supportsEnvironmentTexture(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_supportsEnvironmentTexture_mE30B73C6AC37C6DF8F5B7DBDBC90A975A498D3E4_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.OSVersion::op_GreaterThanOrEqual(UnityEngine.XR.ARKit.OSVersion,UnityEngine.XR.ARKit.OSVersion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OSVersion_op_GreaterThanOrEqual_mAEAAD741F1D10072979DFE35014E967BA397A121 (OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C  ___lhs0, OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C  ___rhs1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::set_supportsEnvironmentTextureHDR(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_supportsEnvironmentTextureHDR_mA465A23A4DC052895F8F634892B7C8E3A49F4777_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem::Register(UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XREnvironmentProbeSubsystem_Register_m20EFD30E3B31DD3ED37EA42B6E465AFAE132EA37 (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2  ___environmentProbeSubsystemCinfo0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitEnvironmentProbeSubsystem/ARKitProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider__ctor_m6C97688B42AECCD0E058FB51620C2E4EEB99036F (ARKitProvider_tBED347A85C19012D5B5F124BC8C0FB4876FBEACC * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystem__ctor_m72F971761AF7B66CBABFF9ABC8468A52406001A2 (XREnvironmentProbeSubsystem_t0C60258F565400E7C5AF0E0B7FA933F2BCF83CB6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m57970CF355AB638BAD860B9673F0E76B42126C1A_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::set_subsystemImplementationType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_m585F6DF7C070965F732F3A4C5B6BF11A4D2DF23F_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::set_supportsMovingImages(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsMovingImages_m04BB57385FC0A2025414437DB1BEFBE97372E579_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::set_supportsMutableLibrary(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsMutableLibrary_m434D9A05D0025989AA711BA50139FD348D127661_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::set_requiresPhysicalImageDimensions(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_requiresPhysicalImageDimensions_mC794914720C62ACB74173F165B3015ED9B5CA2A6_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor::Create(UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRImageTrackingSubsystemDescriptor_Create_m3B9A00008CACA91AEC367F5D5EC19E57EA3D22A1 (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32  ___cinfo0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem/ARKitProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider__ctor_m198D1679A046665B536D0C0DB3C44EA2CF3ED873 (ARKitProvider_t6838013201F7369104C65DD65159D910B116E8AC * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRImageTrackingSubsystem__ctor_m411C7B39B354BFB6468A5450B91D63A46CAC3A52 (XRImageTrackingSubsystem_tBC68AD21C11D8D67F3343844E129DF505FF705CE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitParticipantSubsystem/ARKitProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider__ctor_m510B59F9D3480352F7D8899E40BE87B8FC583826 (ARKitProvider_t9908B32D1E5398BA2FD0D825E9343F8CA0277B4C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor::Register<UnityEngine.XR.ARKit.ARKitParticipantSubsystem>(System.String,UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor/Capabilities)
inline void XRParticipantSubsystemDescriptor_Register_TisARKitParticipantSubsystem_tFBFB76108F5069693F4F40F8DAA4B6A907A709C3_m728A458743D25FA18DD883D357DDCFDFC61528D6 (String_t* ___subsystemId0, int32_t ___capabilities1, const RuntimeMethod* method)
{
	((  void (*) (String_t*, int32_t, const RuntimeMethod*))XRParticipantSubsystemDescriptor_Register_TisRuntimeObject_m4096A625AA016937F6ABAE7CFC0DCD5B71D7A6EF_gshared)(___subsystemId0, ___capabilities1, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRParticipantSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRParticipantSubsystem__ctor_mC7EB236E3A4BBC45C055B94C26493FBB19DF4056 (XRParticipantSubsystem_t7F710E46FC5A17967E7CAE126DE9443C752C36FC * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitRaycastSubsystem/ARKitProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider__ctor_m76C5B622A280F613E72CBBC3810EF1C15824EBA3 (ARKitProvider_t3FB2A65F0CF8BCD91C4CC54F3841159E7F7DAA88 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m0CB4DA3E552ED7940FBA88D8EE3BB6379EA255D6_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_subsystemImplementationType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_mC2EE8A4B5C263D087B8F3924118EDFAB62CE0035_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_supportsViewportBasedRaycast(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsViewportBasedRaycast_mCF77DEFDDC3931682A33A063DF2F25FFBF07B807_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_supportsWorldBasedRaycast(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsWorldBasedRaycast_m74BF70E612BCAFAD380C108700905E5B8C5425FA_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_supportedTrackableTypes(UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportedTrackableTypes_mABC320F641164FC1DB2AB9DB3F1E075B6235A785_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::RegisterDescriptor(UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_RegisterDescriptor_mD9A0FD5846AA09D7D7D32A1093566607D0082ABA (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01  ___cinfo0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastSubsystem__ctor_m73E44C9109F84F8DFB603F6E480200EF0A62A15B (XRRaycastSubsystem_t62FDAC9AA1BD44C4557AEE3FEF3D2FA24C71B6B8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem::OnAsyncConversionComplete(UnityEngine.XR.ARKit.ARWorldMapRequestStatus,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitSessionSubsystem_OnAsyncConversionComplete_m83F502F9F96A05BA35A9FDE4C56FDB7A7843942F (int32_t ___status0, int32_t ___worldMapId1, intptr_t ___context2, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem/ARKitProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider__ctor_mE42CA077B10BF3503A265E7AFD2E618725AD42D2 (ARKitProvider_t9AF751FC81DD6B052A462DBB30F46C946CE9E7CF * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi/OnAsyncConversionCompleteDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnAsyncConversionCompleteDelegate__ctor_m7CA5713A91DE5942CF727FBB3C771DDE3D563DCD (OnAsyncConversionCompleteDelegate_tFE6205610918E7A87E7867F879A863FD2FE8ECDF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi::UnityARKit_session_getCollaborationSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityARKit_session_getCollaborationSupported_m67EEDFFC65BEB3CCFD0F1F7250CD60F3F60FF3E5 (const RuntimeMethod* method);
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::FromIntPtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  GCHandle_FromIntPtr_m033776D73699CAC85FAE41FD5A52895EFB9E3AB8 (intptr_t ___value0, const RuntimeMethod* method);
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GCHandle_get_Target_m6C296AD6520ECDAFC9498E9387677F522871F883 (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARWorldMapRequestStatusExtensions::IsError(UnityEngine.XR.ARKit.ARWorldMapRequestStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARWorldMapRequestStatusExtensions_IsError_m5A4B5A00C002887CEB0596D920DDC272513A696E (int32_t ___status0, const RuntimeMethod* method);
// System.Void System.Action`2<UnityEngine.XR.ARKit.ARWorldMapRequestStatus,UnityEngine.XR.ARKit.ARWorldMap>::Invoke(!0,!1)
inline void Action_2_Invoke_m062C6716117B97F904C309212B9BF73078717C7E (Action_2_t6F4217AA55351EE6822133CE02984E6B59F83112 * __this, int32_t ___arg10, ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2  ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t6F4217AA55351EE6822133CE02984E6B59F83112 *, int32_t, ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 , const RuntimeMethod*))Action_2_Invoke_m33B0110C8FDDB4C5DE28702625FA53D2CC43EB53_gshared)(__this, ___arg10, ___arg21, method);
}
// System.Void UnityEngine.XR.ARKit.ARWorldMap::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARWorldMap__ctor_m43EA558358719448EB3CA73E007EE77EBEAF6817 (ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 * __this, int32_t ___nativeHandle0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025 (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi::UnityARKit_ensureRootViewIsSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_ensureRootViewIsSetup_m8D42C5AE23A0865BB621C7298CD46529D1D8F971 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m6A2CAB13FAD54AB05458DC5DE1FAB5C651E9D656_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_subsystemImplementationType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_mEFA8A5F68BEA841ED51B8D17DAF2E933BA7893EC_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_supportsInstall(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsInstall_m05EE61C58E505A8F20DEA68862395341F1DAD3FD_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_supportsMatchFrameRate(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsMatchFrameRate_m9CB328CEF43BCE3E59F26A97D32AEE1D201F8787_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::RegisterDescriptor(UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor_RegisterDescriptor_m60DE0DD6782289BAD4D67D15E2361D1B7B71C262 (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A  ___cinfo0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystem__ctor_m8485F39F339764D3FCA4FD0E1D77ADE16CAE1676 (XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/ARKitProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider__ctor_mA12162D27C7B8FF0D22C9F79C59E24BE9EA4FF1C (ARKitProvider_tC6BBA25F076F6D64FA8E6336E6860D7DBD41A7A1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::set_supportsFeaturePoints(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsFeaturePoints_mD44DBE0A79D63D3234369E573653A81DC7FB8E1D (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::set_supportsConfidence(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsConfidence_m78F76CAAFD5D667ADBED1580E1F8A1286B59C46D (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::set_supportsUniqueIds(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsUniqueIds_mFF68A678A13F7C1BD9E157690649255A27369514 (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor::RegisterDescriptor(UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDepthSubsystemDescriptor_RegisterDescriptor_mB5908D568E8943B143747EDA81FF550FE2BB3A33 (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1  ___descriptorParams0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDepthSubsystem__ctor_mCD27ED98C0FCF9538A67023E02DDD4AFB3B04D86 (XRDepthSubsystem_t808E21F0192095B08FA03AC535314FB5EF3B7E28 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/ARKitProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider__ctor_m9A88CE1D87E7A82F6169551F3DFBE8D3EE9A5352 (ARKitProvider_tF9F620C89E671C028D10768C5300D3539661A2C1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m940361693A3C925B2180733D87611B5FDF0357D7_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_subsystemImplementationType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_mCCF96D0DFB6DB4F146EA74D30E45A2230791D09F_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsHorizontalPlaneDetection(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsHorizontalPlaneDetection_mBC9B4572592B71328A96AF58DEB047528470C440_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsVerticalPlaneDetection(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsVerticalPlaneDetection_mFF310EF7B9F8D9C9F9689CF9D1D2BEDDFF93F9F0_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsArbitraryPlaneDetection(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsArbitraryPlaneDetection_m70B1D6D27946FB12BF0D3D3AF8C6DC8DC3F399B9_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsBoundaryVertices(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsBoundaryVertices_mC6F86EB28D38CC483AD8F9FD161013BDE3F4AFEF_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/NativeApi::UnityARKit_planes_SupportsClassification()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityARKit_planes_SupportsClassification_m485C4562C5342962A68D0B163559017BEAEA0B4B (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsClassification(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsClassification_mA3B11D7CA4F960C89E729E5161AD7CC3211B933C_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::Create(UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_Create_mB69A44F54AB64DF4361D3C16AE48C2F1B474EA32 (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD  ___cinfo0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneSubsystem__ctor_mDD4F1B44F90E2F50D3C78601413F01D05990B20C (XRPlaneSubsystem_t7C76F9D2C993B0DC38F0A7CDCE745EA7C12417EE * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARKit.ARWorldMap::get_nativeHandle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ARWorldMap_get_nativeHandle_m26CA181591D8E7863F4274AF93319497EC8CC86F_inline (ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.Api::UnityARKit_disposeWorldMap(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Api_UnityARKit_disposeWorldMap_m7961172E9B6D535070D54E86C0ED0F6B12970847 (int32_t ___worldMapId0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARWorldMap::set_nativeHandle(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ARWorldMap_set_nativeHandle_mEAB7C65A965E0F40860B613E3190B2E59FE4D083_inline (ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARWorldMap::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARWorldMap_Dispose_m9B50247399932A662994E8C25BEBE535DB7DC8B2 (ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 * __this, const RuntimeMethod* method);
// System.Int32 System.Int32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667 (int32_t* __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARKit.ARWorldMap::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARWorldMap_GetHashCode_m539F3BE2588CF435F4A672BB8D38641B92619555 (ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARWorldMap::Equals(UnityEngine.XR.ARKit.ARWorldMap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARWorldMap_Equals_m99615F40202D61E0BFCB3E5609E454BB29DD0B86 (ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 * __this, ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARWorldMap::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARWorldMap_Equals_m594655912BCCCE5F6029540795777AD70FA25D58 (ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARKit.OSVersion::get_major()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t OSVersion_get_major_m8CB549CF1D240126F149CCC743578554CE0BD876_inline (OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.OSVersion::set_major(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OSVersion_set_major_m4A65C7E202EA28826622D745685F6904E5824889_inline (OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARKit.OSVersion::get_minor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t OSVersion_get_minor_m32CB9CEC2DBF2512669C8A02640FDF7EA602E0EB_inline (OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.OSVersion::set_minor(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OSVersion_set_minor_mA36649E5CBFD2B33370BF09DC2021A7FCF920AB0_inline (OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARKit.OSVersion::get_point()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t OSVersion_get_point_m008AC01380A6C4C69491DC68AC7AC7724452A422_inline (OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.OSVersion::set_point(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OSVersion_set_point_m244CD91F1FC6D586290700F375AE02843FB9A1FF_inline (OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005 (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARKit.OSVersion::IndexOfFirstDigit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OSVersion_IndexOfFirstDigit_m1E1C7B700D5A02A08DAE60B58DD3C6F2C945E3E5 (String_t* ___version0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARKit.OSVersion::ParseNextComponent(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OSVersion_ParseNextComponent_m3266ED95E30AB724E270CC8A345796D54C31BA8D (String_t* ___version0, int32_t* ___index1, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARKit.OSVersion::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OSVersion_GetHashCode_mDD59797FD4B8902519893582F937E139061F7CCD (OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.OSVersion::op_GreaterThan(UnityEngine.XR.ARKit.OSVersion,UnityEngine.XR.ARKit.OSVersion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OSVersion_op_GreaterThan_mA287CEA034CFD70AC13AAC822615C7B65CABE076 (OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C  ___lhs0, OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C  ___rhs1, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARKit.OSVersion::CompareTo(UnityEngine.XR.ARKit.OSVersion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OSVersion_CompareTo_m4E346D9919DCC3F257E6FF065CBAF3CB851EC7C6 (OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C * __this, OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C  ___version0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.OSVersion::Equals(UnityEngine.XR.ARKit.OSVersion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OSVersion_Equals_m864258383751FACDE379139F19475044DB18B222 (OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C * __this, OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.OSVersion::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OSVersion_Equals_m914F030B0D83873975E4FB03DAAC2B1EB126521F (OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.OSVersion::op_Equality(UnityEngine.XR.ARKit.OSVersion,UnityEngine.XR.ARKit.OSVersion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OSVersion_op_Equality_mB06938C0B24AAF7C7FB8B7F26A6B044369A9C798 (OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C  ___lhs0, OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C  ___rhs1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.String UnityEngine.XR.ARKit.OSVersion::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OSVersion_ToString_m8650018E5360BC6B85B38F810F70F4E1564F0E1C (OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_mFE4941CFC3CA511BBD7C0A498BB2C74DE96FF498 (Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_mA61CB0610059584FC8190F2C54D845C7612D82BE (Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_Construct(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_Camera_Construct_m85F5550F4DF7C866799A325444B1DA96A2F41265 (int32_t ___textureYPropertyNameId0, int32_t ___textureCbCrPropertyNameId1, const RuntimeMethod* method);
// System.String UnityEngine.XR.ARKit.ARKitCameraSubsystem::get_backgroundShaderName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ARKitCameraSubsystem_get_backgroundShaderName_m0856B4F3C1E036760386F1BED04D029698D0F94F (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.Material UnityEngine.XR.ARSubsystems.XRCameraSubsystem/Provider::CreateCameraMaterial(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Provider_CreateCameraMaterial_mE1F6AD1B1D9F9BA80FE1B8DB3138262545FC018C (Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1 * __this, String_t* ___cameraShaderName0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F (String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m82E278812C6826F3F89A708912491AB72058B700 (Provider_tAF87FE3E906FDBF14F06488A1AA5E80400EFE190 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.EnvironmentProbeApi::UnityARKit_EnvironmentProbeProvider_Construct()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_Construct_m5D69AFAA42866A78CC2B64C4457F3612E0627B46 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_mE0C779A245EE703B26578F529ABFD6F18E002AC0 (Provider_tA7CEF856C3BC486ADEBD656F5535E24262AAAE9E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRParticipantSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m29C158581A2B8BF6DE3F03DDACC1A2F8FFB1F875 (Provider_t1D0BC515976D24FD30341AC456ACFCB2DE4A344E * __this, const RuntimeMethod* method);
// System.IntPtr UnityEngine.XR.ARKit.ARKitParticipantSubsystem/ARKitProvider::UnityARKit_Participant_init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ARKitProvider_UnityARKit_Participant_init_m439EC3BAB13C15A4AFB8FDEDD7AFF2999C15AFEB (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m58E4226B4157880E60C02C82B5FB24D9760EA94F (Provider_tF185BE0541D2066CD242583CEFE7709DD22DD227 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m921D9E5D94AB32804689C972E36ECA2601BB2AAE (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi::UnityARKit_session_construct()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_session_construct_mCB2A3B83E19DEAC1CE8ED24607067B9B28AFB87C (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m1A368071CFCB91BC39B9760441A777FE20F86A57 (Provider_t8E88C17A70269CD3E96909AFCCA952AAA7DEC0B6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_mDEDB208301BBA3CC96FFF2DA6AC90F5D241CE524 (Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12 * __this, const RuntimeMethod* method);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_disposeWorldMap(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_EnvironmentProbeProvider_Construct();
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_Camera_Construct(int32_t, int32_t);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL UnityARKit_Participant_init();
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_session_construct();
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_session_getCollaborationSupported();
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_ensureRootViewIsSetup();
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_planes_SupportsClassification();
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
// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem_Provider UnityEngine.XR.ARKit.ARKitAnchorSubsystem::CreateProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2 * ARKitAnchorSubsystem_CreateProvider_mA659BB42D566D3B13670DFA585A54B056BDC3753 (ARKitAnchorSubsystem_t721F48C4B69507D7E38664A68AA42DD1DF75B3DF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitAnchorSubsystem_CreateProvider_mA659BB42D566D3B13670DFA585A54B056BDC3753_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override Provider CreateProvider() => new ARKitProvider();
		ARKitProvider_tE10DC6803776ECE42E55F127E68C47E50319202E * L_0 = (ARKitProvider_tE10DC6803776ECE42E55F127E68C47E50319202E *)il2cpp_codegen_object_new(ARKitProvider_tE10DC6803776ECE42E55F127E68C47E50319202E_il2cpp_TypeInfo_var);
		ARKitProvider__ctor_mD5890F7467A0A36FD0EA10CC44CB32E8DBD47469(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitAnchorSubsystem::RegisterDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitAnchorSubsystem_RegisterDescriptor_mCBDCFF12221785197B5DAB80B2739D692B293013 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitAnchorSubsystem_RegisterDescriptor_mCBDCFF12221785197B5DAB80B2739D692B293013_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var cinfo = new XRAnchorSubsystemDescriptor.Cinfo
		// {
		//     id = "ARKit-Anchor",
		//     subsystemImplementationType = typeof(ARKitAnchorSubsystem),
		//     supportsTrackableAttachments = true
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 ));
		Cinfo_set_id_mCB169DF169C36D9D12651785DCBF71ABCC10FD9D_inline((Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *)(&V_0), _stringLiteral6D7125BFB6B08212CAAD55197B7FE167CE82051D, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (ARKitAnchorSubsystem_t721F48C4B69507D7E38664A68AA42DD1DF75B3DF_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		Cinfo_set_subsystemImplementationType_m22F8F6D7511C66B0B2240DABFBA9A38D01C8A31F_inline((Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *)(&V_0), L_1, /*hidden argument*/NULL);
		Cinfo_set_supportsTrackableAttachments_m0B0516A50FFA22C3F60483E3498DC6BB1D460995_inline((Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7  L_2 = V_0;
		// XRAnchorSubsystemDescriptor.Create(cinfo);
		XRAnchorSubsystemDescriptor_Create_m32C16A0DDC60ED2D374EFB884CF807E62B37C0A8(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitAnchorSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitAnchorSubsystem__ctor_m0493FC16FF7E2212B42A4D547663C21D68B764A4 (ARKitAnchorSubsystem_t721F48C4B69507D7E38664A68AA42DD1DF75B3DF * __this, const RuntimeMethod* method)
{
	{
		XRAnchorSubsystem__ctor_mB5F70C2E39B5EA531C05244611590F400365265A(__this, /*hidden argument*/NULL);
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
// System.String UnityEngine.XR.ARKit.ARKitCameraSubsystem::get_backgroundShaderName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ARKitCameraSubsystem_get_backgroundShaderName_m0856B4F3C1E036760386F1BED04D029698D0F94F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitCameraSubsystem_get_backgroundShaderName_m0856B4F3C1E036760386F1BED04D029698D0F94F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string backgroundShaderName => k_BackgroundShaderName;
		return _stringLiteral8FCD874487FC15E93E93290A9C751C9F9195F03E;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem::Register()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitCameraSubsystem_Register_mF559F13DCE5DDF036431710C6D0E4B776824F5F4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitCameraSubsystem_Register_mF559F13DCE5DDF036431710C6D0E4B776824F5F4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// XRCameraSubsystemCinfo cameraSubsystemCinfo = new XRCameraSubsystemCinfo
		// {
		//     id = k_SubsystemId,
		//     implementationType = typeof(ARKitCameraSubsystem),
		//     supportsAverageBrightness = false,
		//     supportsAverageColorTemperature = true,
		//     supportsColorCorrection = false,
		//     supportsDisplayMatrix = true,
		//     supportsProjectionMatrix = true,
		//     supportsTimestamp = true,
		//     supportsCameraConfigurations = true,
		//     supportsCameraImage = true,
		//     supportsAverageIntensityInLumens = true,
		//     supportsFocusModes = true,
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 ));
		XRCameraSubsystemCinfo_set_id_m768994793A205C7D5CE603B354D350A34D47720D_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&V_0), _stringLiteral00D54E4228F0F7653E4C33C608B8CF61178F3D9A, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (ARKitCameraSubsystem_tE327D2A1BE7A0BD90A9353C8EDBDE9A882315245_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_implementationType_m4CC13E5510FAE9BDD9D8E126A796C6D5E05E558D_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&V_0), L_1, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_supportsAverageBrightness_mC20A88BD3C8D137A1F34888C64DC5FFF37787759_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&V_0), (bool)0, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_supportsAverageColorTemperature_m77727C8CBAB59D0D078B0A634EB0A56F1BF368E4_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_supportsColorCorrection_m1CBB9181A21D2A964705AD5E22F78735DCFE2C01_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&V_0), (bool)0, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_supportsDisplayMatrix_m2E11C0B7442273252613BDB41BB8B6F02698FBEA_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_supportsProjectionMatrix_mFC886F8859FDF308D7980935474AA0E66ECF66B4_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_supportsTimestamp_mAA6157EC368F6358F155571E257A578729D368D4_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_supportsCameraConfigurations_mD0F431DDAB4F82DDC6E35AB7583572D25244E0F0_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_supportsCameraImage_m2140EBB7ACEA9B1634F56DE2DCB85F26CB8C4D7D_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_supportsAverageIntensityInLumens_m49462C178EF35B3E688EE6711FD3E41E9C1976AB_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_supportsFocusModes_m2F70E7EFC54E2F930DEA28DC4922125E01FE3026_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096  L_2 = V_0;
		// if (!XRCameraSubsystem.Register(cameraSubsystemCinfo))
		bool L_3 = XRCameraSubsystem_Register_m8E9CD378020A98CC1728A5C0A3324D25439921F4(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0095;
		}
	}
	{
		// Debug.LogErrorFormat("Cannot register the {0} subsystem", k_SubsystemId);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral00D54E4228F0F7653E4C33C608B8CF61178F3D9A);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral00D54E4228F0F7653E4C33C608B8CF61178F3D9A);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_mDBF43684A22EAAB187285C9B4174C9555DB11E83(_stringLiteralCFA86DA9F9B859D235587DD8755E3EF4827AEEF1, L_5, /*hidden argument*/NULL);
	}

IL_0095:
	{
		// }
		return;
	}
}
// UnityEngine.XR.ARSubsystems.XRCameraSubsystem_Provider UnityEngine.XR.ARKit.ARKitCameraSubsystem::CreateProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1 * ARKitCameraSubsystem_CreateProvider_m9C660C07EEBB53123AEE3CFBF7D092872BCD10FA (ARKitCameraSubsystem_tE327D2A1BE7A0BD90A9353C8EDBDE9A882315245 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitCameraSubsystem_CreateProvider_m9C660C07EEBB53123AEE3CFBF7D092872BCD10FA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override Provider CreateProvider() => new ARKitProvider();
		ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252 * L_0 = (ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252 *)il2cpp_codegen_object_new(ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252_il2cpp_TypeInfo_var);
		ARKitProvider__ctor_mFC17EA54C2DC44A58721A35D5B7607C607BF8AE4(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitCameraSubsystem__ctor_mB77B63959B91E1835689E7E9E706EA7A819822C6 (ARKitCameraSubsystem_tE327D2A1BE7A0BD90A9353C8EDBDE9A882315245 * __this, const RuntimeMethod* method)
{
	{
		XRCameraSubsystem__ctor_m9DB793A0291AEB063BE13955137FCF52B8A6E222(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitCameraSubsystem__cctor_m06F5E55B1EDE6181214C6952380E39286A3B88DA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitCameraSubsystem__cctor_m06F5E55B1EDE6181214C6952380E39286A3B88DA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		//         static readonly List<string> k_BackgroundShaderKeywordsToNotCompile = new List<string> {
		// #if !MODULE_URP_ENABLED
		//             k_BackgroundShaderKeywordURP,
		// #endif 
		// #if !MODULE_LWRP_ENABLED
		//             k_BackgroundShaderKeywordLWRP,
		// #endif 
		//         };
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_0, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_1 = L_0;
		NullCheck(L_1);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_1, _stringLiteral34DB7C411D03036F0D06F00351078A370EA0A603, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_2 = L_1;
		NullCheck(L_2);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_2, _stringLiteral8710D8B4E16855F019CB68A747E4078E34957226, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		((ARKitCameraSubsystem_tE327D2A1BE7A0BD90A9353C8EDBDE9A882315245_StaticFields*)il2cpp_codegen_static_fields_for(ARKitCameraSubsystem_tE327D2A1BE7A0BD90A9353C8EDBDE9A882315245_il2cpp_TypeInfo_var))->set_k_BackgroundShaderKeywordsToNotCompile_1(L_2);
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
// System.Void UnityEngine.XR.ARKit.ARKitEnvironmentProbeRegistration::Register()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitEnvironmentProbeRegistration_Register_mBCB9D9E84E40A0AD3698E427066B835C6BC14CAC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitEnvironmentProbeRegistration_Register_mBCB9D9E84E40A0AD3698E427066B835C6BC14CAC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var iOSVersion = OSVersion.Parse(UnityEngine.iOS.Device.systemVersion);
		String_t* L_0 = Device_get_systemVersion_m24E25D7065707439B7E6459035BEADFE2AFF8BCD(/*hidden argument*/NULL);
		OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C  L_1 = OSVersion_Parse_m9A591C48008204E0982ADD5B8F84AE915DE31597(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (iOSVersion < new OSVersion(12))
		OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C  L_2 = V_0;
		OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C  L_3;
		memset((&L_3), 0, sizeof(L_3));
		OSVersion__ctor_mE910D5DA6F2E1E3C44D319C4D849BA52E478CE4C((&L_3), ((int32_t)12), 0, 0, /*hidden argument*/NULL);
		bool L_4 = OSVersion_op_LessThan_m1D3CE8773D5DB2C45D7A5019C9631CC1083F22ED(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		// return;
		return;
	}

IL_001d:
	{
		// XREnvironmentProbeSubsystemCinfo environmentProbeSubsystemInfo = new XREnvironmentProbeSubsystemCinfo()
		// {
		//     id = subsystemId,
		//     implementationType = typeof(ARKitEnvironmentProbeSubsystem),
		//     supportsManualPlacement = true,
		//     supportsRemovalOfManual = true,
		//     supportsAutomaticPlacement = true,
		//     supportsRemovalOfAutomatic = true,
		//     supportsEnvironmentTexture = true,
		//     supportsEnvironmentTextureHDR = iOSVersion >= new OSVersion(13),
		// };
		il2cpp_codegen_initobj((&V_1), sizeof(XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 ));
		XREnvironmentProbeSubsystemCinfo_set_id_m5C48BD3E879410D5C622BE7DC74D5C798E151731_inline((XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *)(&V_1), _stringLiteralA0DE801F3FD2CC4DE455E4C342CDC681CD2516B3, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (ARKitEnvironmentProbeSubsystem_t628136AE15CA16280BA838B37E2B7CDF0473E9D2_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		XREnvironmentProbeSubsystemCinfo_set_implementationType_m46EACEC5C1BCC55A1647EE8161074E1D1EEC32B0_inline((XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *)(&V_1), L_6, /*hidden argument*/NULL);
		XREnvironmentProbeSubsystemCinfo_set_supportsManualPlacement_m2D1156DE760E47CBDDC345AD5CAE5D23AC23E524_inline((XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *)(&V_1), (bool)1, /*hidden argument*/NULL);
		XREnvironmentProbeSubsystemCinfo_set_supportsRemovalOfManual_m01CE117FEA37EE9BEF79903754E396C35B859419_inline((XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *)(&V_1), (bool)1, /*hidden argument*/NULL);
		XREnvironmentProbeSubsystemCinfo_set_supportsAutomaticPlacement_mC4DBFBBD4DBB44D6B1154C4759A3175F9AC33D46_inline((XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *)(&V_1), (bool)1, /*hidden argument*/NULL);
		XREnvironmentProbeSubsystemCinfo_set_supportsRemovalOfAutomatic_m6FCC1E3ACDC01E4447E385A1B89C96DEE16B7EF2_inline((XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *)(&V_1), (bool)1, /*hidden argument*/NULL);
		XREnvironmentProbeSubsystemCinfo_set_supportsEnvironmentTexture_mE30B73C6AC37C6DF8F5B7DBDBC90A975A498D3E4_inline((XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *)(&V_1), (bool)1, /*hidden argument*/NULL);
		OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C  L_7 = V_0;
		OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C  L_8;
		memset((&L_8), 0, sizeof(L_8));
		OSVersion__ctor_mE910D5DA6F2E1E3C44D319C4D849BA52E478CE4C((&L_8), ((int32_t)13), 0, 0, /*hidden argument*/NULL);
		bool L_9 = OSVersion_op_GreaterThanOrEqual_mAEAAD741F1D10072979DFE35014E967BA397A121(L_7, L_8, /*hidden argument*/NULL);
		XREnvironmentProbeSubsystemCinfo_set_supportsEnvironmentTextureHDR_mA465A23A4DC052895F8F634892B7C8E3A49F4777_inline((XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *)(&V_1), L_9, /*hidden argument*/NULL);
		XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2  L_10 = V_1;
		// if (!XREnvironmentProbeSubsystem.Register(environmentProbeSubsystemInfo))
		bool L_11 = XREnvironmentProbeSubsystem_Register_m20EFD30E3B31DD3ED37EA42B6E465AFAE132EA37(L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_00a0;
		}
	}
	{
		// Debug.LogErrorFormat("Cannot register the {0} subsystem", subsystemId);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = L_12;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteralA0DE801F3FD2CC4DE455E4C342CDC681CD2516B3);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralA0DE801F3FD2CC4DE455E4C342CDC681CD2516B3);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_mDBF43684A22EAAB187285C9B4174C9555DB11E83(_stringLiteralCFA86DA9F9B859D235587DD8755E3EF4827AEEF1, L_13, /*hidden argument*/NULL);
	}

IL_00a0:
	{
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
// UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem_Provider UnityEngine.XR.ARKit.ARKitEnvironmentProbeSubsystem::CreateProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Provider_tAF87FE3E906FDBF14F06488A1AA5E80400EFE190 * ARKitEnvironmentProbeSubsystem_CreateProvider_m0A61722D4388A3F83626B90110EC0382C04146E8 (ARKitEnvironmentProbeSubsystem_t628136AE15CA16280BA838B37E2B7CDF0473E9D2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitEnvironmentProbeSubsystem_CreateProvider_m0A61722D4388A3F83626B90110EC0382C04146E8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override Provider CreateProvider() => new ARKitProvider();
		ARKitProvider_tBED347A85C19012D5B5F124BC8C0FB4876FBEACC * L_0 = (ARKitProvider_tBED347A85C19012D5B5F124BC8C0FB4876FBEACC *)il2cpp_codegen_object_new(ARKitProvider_tBED347A85C19012D5B5F124BC8C0FB4876FBEACC_il2cpp_TypeInfo_var);
		ARKitProvider__ctor_m6C97688B42AECCD0E058FB51620C2E4EEB99036F(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitEnvironmentProbeSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitEnvironmentProbeSubsystem__ctor_mF7284AF6A2D02FE6BB71358A6BE23D0442FDD7C1 (ARKitEnvironmentProbeSubsystem_t628136AE15CA16280BA838B37E2B7CDF0473E9D2 * __this, const RuntimeMethod* method)
{
	{
		XREnvironmentProbeSubsystem__ctor_m72F971761AF7B66CBABFF9ABC8468A52406001A2(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem::RegisterDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitImageTrackingSubsystem_RegisterDescriptor_mEB8B92E59CC2F27AA8DD0E799E602BF81E02FA4E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitImageTrackingSubsystem_RegisterDescriptor_mEB8B92E59CC2F27AA8DD0E799E602BF81E02FA4E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var iOSversion = OSVersion.Parse(UnityEngine.iOS.Device.systemVersion);
		String_t* L_0 = Device_get_systemVersion_m24E25D7065707439B7E6459035BEADFE2AFF8BCD(/*hidden argument*/NULL);
		OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C  L_1 = OSVersion_Parse_m9A591C48008204E0982ADD5B8F84AE915DE31597(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (iOSversion < new OSVersion(11, 3))
		OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C  L_2 = V_0;
		OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C  L_3;
		memset((&L_3), 0, sizeof(L_3));
		OSVersion__ctor_mE910D5DA6F2E1E3C44D319C4D849BA52E478CE4C((&L_3), ((int32_t)11), 3, 0, /*hidden argument*/NULL);
		bool L_4 = OSVersion_op_LessThan_m1D3CE8773D5DB2C45D7A5019C9631CC1083F22ED(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		// return;
		return;
	}

IL_001d:
	{
		// XRImageTrackingSubsystemDescriptor.Create(new XRImageTrackingSubsystemDescriptor.Cinfo
		// {
		//     id = "ARKit-ImageTracking",
		//     subsystemImplementationType = typeof(ARKitImageTrackingSubsystem),
		//     supportsMovingImages = (iOSversion >= new OSVersion(12)),
		//     supportsMutableLibrary = true,
		//     requiresPhysicalImageDimensions = true
		// });
		il2cpp_codegen_initobj((&V_1), sizeof(Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 ));
		Cinfo_set_id_m57970CF355AB638BAD860B9673F0E76B42126C1A_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)(&V_1), _stringLiteral14D6457B7A8B0589F52EF9A221CF9F7AE60EE03D, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (ARKitImageTrackingSubsystem_t0F98C12C3E36B9F3819FC43494A883B600401237_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		Cinfo_set_subsystemImplementationType_m585F6DF7C070965F732F3A4C5B6BF11A4D2DF23F_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)(&V_1), L_6, /*hidden argument*/NULL);
		OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C  L_7 = V_0;
		OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C  L_8;
		memset((&L_8), 0, sizeof(L_8));
		OSVersion__ctor_mE910D5DA6F2E1E3C44D319C4D849BA52E478CE4C((&L_8), ((int32_t)12), 0, 0, /*hidden argument*/NULL);
		bool L_9 = OSVersion_op_GreaterThanOrEqual_mAEAAD741F1D10072979DFE35014E967BA397A121(L_7, L_8, /*hidden argument*/NULL);
		Cinfo_set_supportsMovingImages_m04BB57385FC0A2025414437DB1BEFBE97372E579_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)(&V_1), L_9, /*hidden argument*/NULL);
		Cinfo_set_supportsMutableLibrary_m434D9A05D0025989AA711BA50139FD348D127661_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)(&V_1), (bool)1, /*hidden argument*/NULL);
		Cinfo_set_requiresPhysicalImageDimensions_mC794914720C62ACB74173F165B3015ED9B5CA2A6_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)(&V_1), (bool)1, /*hidden argument*/NULL);
		Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32  L_10 = V_1;
		XRImageTrackingSubsystemDescriptor_Create_m3B9A00008CACA91AEC367F5D5EC19E57EA3D22A1(L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem_Provider UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem::CreateProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Provider_tA7CEF856C3BC486ADEBD656F5535E24262AAAE9E * ARKitImageTrackingSubsystem_CreateProvider_m33884E1AABE45855B8AB73A2251E1433FD1FB8D8 (ARKitImageTrackingSubsystem_t0F98C12C3E36B9F3819FC43494A883B600401237 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitImageTrackingSubsystem_CreateProvider_m33884E1AABE45855B8AB73A2251E1433FD1FB8D8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new ARKitProvider();
		ARKitProvider_t6838013201F7369104C65DD65159D910B116E8AC * L_0 = (ARKitProvider_t6838013201F7369104C65DD65159D910B116E8AC *)il2cpp_codegen_object_new(ARKitProvider_t6838013201F7369104C65DD65159D910B116E8AC_il2cpp_TypeInfo_var);
		ARKitProvider__ctor_m198D1679A046665B536D0C0DB3C44EA2CF3ED873(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitImageTrackingSubsystem__ctor_mACDB8CA0A6F983EB9AEEEB7F5204F73B83E7F201 (ARKitImageTrackingSubsystem_t0F98C12C3E36B9F3819FC43494A883B600401237 * __this, const RuntimeMethod* method)
{
	{
		XRImageTrackingSubsystem__ctor_m411C7B39B354BFB6468A5450B91D63A46CAC3A52(__this, /*hidden argument*/NULL);
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
// UnityEngine.XR.ARSubsystems.XRParticipantSubsystem_Provider UnityEngine.XR.ARKit.ARKitParticipantSubsystem::CreateProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Provider_t1D0BC515976D24FD30341AC456ACFCB2DE4A344E * ARKitParticipantSubsystem_CreateProvider_m0F4785B15E074139DDD012C7F82C09FF10254B9A (ARKitParticipantSubsystem_tFBFB76108F5069693F4F40F8DAA4B6A907A709C3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitParticipantSubsystem_CreateProvider_m0F4785B15E074139DDD012C7F82C09FF10254B9A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override Provider CreateProvider() => new ARKitProvider();
		ARKitProvider_t9908B32D1E5398BA2FD0D825E9343F8CA0277B4C * L_0 = (ARKitProvider_t9908B32D1E5398BA2FD0D825E9343F8CA0277B4C *)il2cpp_codegen_object_new(ARKitProvider_t9908B32D1E5398BA2FD0D825E9343F8CA0277B4C_il2cpp_TypeInfo_var);
		ARKitProvider__ctor_m510B59F9D3480352F7D8899E40BE87B8FC583826(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitParticipantSubsystem::RegisterDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitParticipantSubsystem_RegisterDescriptor_m54AF2EA905706786FECA5F3D3C3F582DD7EFD79C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitParticipantSubsystem_RegisterDescriptor_m54AF2EA905706786FECA5F3D3C3F582DD7EFD79C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (OSVersion.Parse(UnityEngine.iOS.Device.systemVersion) < new OSVersion(13))
		String_t* L_0 = Device_get_systemVersion_m24E25D7065707439B7E6459035BEADFE2AFF8BCD(/*hidden argument*/NULL);
		OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C  L_1 = OSVersion_Parse_m9A591C48008204E0982ADD5B8F84AE915DE31597(L_0, /*hidden argument*/NULL);
		OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C  L_2;
		memset((&L_2), 0, sizeof(L_2));
		OSVersion__ctor_mE910D5DA6F2E1E3C44D319C4D849BA52E478CE4C((&L_2), ((int32_t)13), 0, 0, /*hidden argument*/NULL);
		bool L_3 = OSVersion_op_LessThan_m1D3CE8773D5DB2C45D7A5019C9631CC1083F22ED(L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		// return;
		return;
	}

IL_001b:
	{
		// XRParticipantSubsystemDescriptor.Register<ARKitParticipantSubsystem>(
		//     "ARKit-Participant",
		//     XRParticipantSubsystemDescriptor.Capabilities.None);
		XRParticipantSubsystemDescriptor_Register_TisARKitParticipantSubsystem_tFBFB76108F5069693F4F40F8DAA4B6A907A709C3_m728A458743D25FA18DD883D357DDCFDFC61528D6(_stringLiteralD4CE57F143C3072D95F7AF2A8FDB45BD297B7097, 0, /*hidden argument*/XRParticipantSubsystemDescriptor_Register_TisARKitParticipantSubsystem_tFBFB76108F5069693F4F40F8DAA4B6A907A709C3_m728A458743D25FA18DD883D357DDCFDFC61528D6_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitParticipantSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitParticipantSubsystem__ctor_m0D058C2C09D2383A073621DC5CFD85F047608EB0 (ARKitParticipantSubsystem_tFBFB76108F5069693F4F40F8DAA4B6A907A709C3 * __this, const RuntimeMethod* method)
{
	{
		XRParticipantSubsystem__ctor_mC7EB236E3A4BBC45C055B94C26493FBB19DF4056(__this, /*hidden argument*/NULL);
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
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem_Provider UnityEngine.XR.ARKit.ARKitRaycastSubsystem::CreateProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Provider_tF185BE0541D2066CD242583CEFE7709DD22DD227 * ARKitRaycastSubsystem_CreateProvider_m52D2A2D2B552DDC5C336144E63884E8AFED37AD3 (ARKitRaycastSubsystem_t8DF7A7F21C4610FBBEF6A240FD1790CD47BE9900 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitRaycastSubsystem_CreateProvider_m52D2A2D2B552DDC5C336144E63884E8AFED37AD3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override Provider CreateProvider() => new ARKitProvider();
		ARKitProvider_t3FB2A65F0CF8BCD91C4CC54F3841159E7F7DAA88 * L_0 = (ARKitProvider_t3FB2A65F0CF8BCD91C4CC54F3841159E7F7DAA88 *)il2cpp_codegen_object_new(ARKitProvider_t3FB2A65F0CF8BCD91C4CC54F3841159E7F7DAA88_il2cpp_TypeInfo_var);
		ARKitProvider__ctor_m76C5B622A280F613E72CBBC3810EF1C15824EBA3(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitRaycastSubsystem::RegisterDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitRaycastSubsystem_RegisterDescriptor_mF42F4DCC6EE812AFAB861A232A2094AA790CEFCC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitRaycastSubsystem_RegisterDescriptor_mF42F4DCC6EE812AFAB861A232A2094AA790CEFCC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// XRRaycastSubsystemDescriptor.RegisterDescriptor(new XRRaycastSubsystemDescriptor.Cinfo
		// {
		//     id = "ARKit-Raycast",
		//     subsystemImplementationType = typeof(ARKitRaycastSubsystem),
		//     supportsViewportBasedRaycast = true,
		//     supportsWorldBasedRaycast = false,
		//     supportedTrackableTypes =
		//         TrackableType.Planes |
		//         TrackableType.FeaturePoint
		// });
		il2cpp_codegen_initobj((&V_0), sizeof(Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 ));
		Cinfo_set_id_m0CB4DA3E552ED7940FBA88D8EE3BB6379EA255D6_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)(&V_0), _stringLiteralAFA4D3E582500163B4301BAFF6220E10DCA1A77A, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (ARKitRaycastSubsystem_t8DF7A7F21C4610FBBEF6A240FD1790CD47BE9900_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		Cinfo_set_subsystemImplementationType_mC2EE8A4B5C263D087B8F3924118EDFAB62CE0035_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)(&V_0), L_1, /*hidden argument*/NULL);
		Cinfo_set_supportsViewportBasedRaycast_mCF77DEFDDC3931682A33A063DF2F25FFBF07B807_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		Cinfo_set_supportsWorldBasedRaycast_m74BF70E612BCAFAD380C108700905E5B8C5425FA_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)(&V_0), (bool)0, /*hidden argument*/NULL);
		Cinfo_set_supportedTrackableTypes_mABC320F641164FC1DB2AB9DB3F1E075B6235A785_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)(&V_0), ((int32_t)31), /*hidden argument*/NULL);
		Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01  L_2 = V_0;
		XRRaycastSubsystemDescriptor_RegisterDescriptor_mD9A0FD5846AA09D7D7D32A1093566607D0082ABA(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitRaycastSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitRaycastSubsystem__ctor_mE538A3B73F9EDA5E72DC36CD3245843904D6B66A (ARKitRaycastSubsystem_t8DF7A7F21C4610FBBEF6A240FD1790CD47BE9900 * __this, const RuntimeMethod* method)
{
	{
		XRRaycastSubsystem__ctor_m73E44C9109F84F8DFB603F6E480200EF0A62A15B(__this, /*hidden argument*/NULL);
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_ARKitSessionSubsystem_OnAsyncConversionComplete_m83F502F9F96A05BA35A9FDE4C56FDB7A7843942F(int32_t ___status0, int32_t ___worldMapId1, intptr_t ___context2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	ARKitSessionSubsystem_OnAsyncConversionComplete_m83F502F9F96A05BA35A9FDE4C56FDB7A7843942F(___status0, ___worldMapId1, ___context2, NULL);

}
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem_Provider UnityEngine.XR.ARKit.ARKitSessionSubsystem::CreateProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * ARKitSessionSubsystem_CreateProvider_m754B0A5799CBFB4FF8A661DD22F9D187C25D26B4 (ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitSessionSubsystem_CreateProvider_m754B0A5799CBFB4FF8A661DD22F9D187C25D26B4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override Provider CreateProvider() => new ARKitProvider();
		ARKitProvider_t9AF751FC81DD6B052A462DBB30F46C946CE9E7CF * L_0 = (ARKitProvider_t9AF751FC81DD6B052A462DBB30F46C946CE9E7CF *)il2cpp_codegen_object_new(ARKitProvider_t9AF751FC81DD6B052A462DBB30F46C946CE9E7CF_il2cpp_TypeInfo_var);
		ARKitProvider__ctor_mE42CA077B10BF3503A265E7AFD2E618725AD42D2(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitSessionSubsystem__cctor_mDB65D075EA3D03C3DBDD350457063DB89F179BE9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitSessionSubsystem__cctor_mDB65D075EA3D03C3DBDD350457063DB89F179BE9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_OnAsyncWorldMapCompleted = OnAsyncConversionComplete;
		OnAsyncConversionCompleteDelegate_tFE6205610918E7A87E7867F879A863FD2FE8ECDF * L_0 = (OnAsyncConversionCompleteDelegate_tFE6205610918E7A87E7867F879A863FD2FE8ECDF *)il2cpp_codegen_object_new(OnAsyncConversionCompleteDelegate_tFE6205610918E7A87E7867F879A863FD2FE8ECDF_il2cpp_TypeInfo_var);
		OnAsyncConversionCompleteDelegate__ctor_m7CA5713A91DE5942CF727FBB3C771DDE3D563DCD(L_0, NULL, (intptr_t)((intptr_t)ARKitSessionSubsystem_OnAsyncConversionComplete_m83F502F9F96A05BA35A9FDE4C56FDB7A7843942F_RuntimeMethod_var), /*hidden argument*/NULL);
		((ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216_StaticFields*)il2cpp_codegen_static_fields_for(ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216_il2cpp_TypeInfo_var))->set_s_OnAsyncWorldMapCompleted_1(L_0);
		// s_SupportsCollaboration = NativeApi.UnityARKit_session_getCollaborationSupported();
		bool L_1 = NativeApi_UnityARKit_session_getCollaborationSupported_m67EEDFFC65BEB3CCFD0F1F7250CD60F3F60FF3E5(/*hidden argument*/NULL);
		((ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216_StaticFields*)il2cpp_codegen_static_fields_for(ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216_il2cpp_TypeInfo_var))->set_s_SupportsCollaboration_2(L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem::OnAsyncConversionComplete(UnityEngine.XR.ARKit.ARWorldMapRequestStatus,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitSessionSubsystem_OnAsyncConversionComplete_m83F502F9F96A05BA35A9FDE4C56FDB7A7843942F (int32_t ___status0, int32_t ___worldMapId1, intptr_t ___context2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitSessionSubsystem_OnAsyncConversionComplete_m83F502F9F96A05BA35A9FDE4C56FDB7A7843942F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Action_2_t6F4217AA55351EE6822133CE02984E6B59F83112 * V_1 = NULL;
	ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2  V_2;
	memset((&V_2), 0, sizeof(V_2));
	ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// var handle = GCHandle.FromIntPtr(context);
		intptr_t L_0 = ___context2;
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_1 = GCHandle_FromIntPtr_m033776D73699CAC85FAE41FD5A52895EFB9E3AB8((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// var onComplete = (Action<ARWorldMapRequestStatus, ARWorldMap>)handle.Target;
		RuntimeObject * L_2 = GCHandle_get_Target_m6C296AD6520ECDAFC9498E9387677F522871F883((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(&V_0), /*hidden argument*/NULL);
		V_1 = ((Action_2_t6F4217AA55351EE6822133CE02984E6B59F83112 *)CastclassSealed((RuntimeObject*)L_2, Action_2_t6F4217AA55351EE6822133CE02984E6B59F83112_il2cpp_TypeInfo_var));
		// if (status.IsError())
		int32_t L_3 = ___status0;
		bool L_4 = ARWorldMapRequestStatusExtensions_IsError_m5A4B5A00C002887CEB0596D920DDC272513A696E(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		// onComplete(status, default(ARWorldMap));
		Action_2_t6F4217AA55351EE6822133CE02984E6B59F83112 * L_5 = V_1;
		int32_t L_6 = ___status0;
		il2cpp_codegen_initobj((&V_2), sizeof(ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 ));
		ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2  L_7 = V_2;
		NullCheck(L_5);
		Action_2_Invoke_m062C6716117B97F904C309212B9BF73078717C7E(L_5, L_6, L_7, /*hidden argument*/Action_2_Invoke_m062C6716117B97F904C309212B9BF73078717C7E_RuntimeMethod_var);
		// }
		goto IL_003e;
	}

IL_002e:
	{
		// var worldMap = new ARWorldMap(worldMapId);
		int32_t L_8 = ___worldMapId1;
		ARWorldMap__ctor_m43EA558358719448EB3CA73E007EE77EBEAF6817((ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 *)(&V_3), L_8, /*hidden argument*/NULL);
		// onComplete(status, worldMap);
		Action_2_t6F4217AA55351EE6822133CE02984E6B59F83112 * L_9 = V_1;
		int32_t L_10 = ___status0;
		ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2  L_11 = V_3;
		NullCheck(L_9);
		Action_2_Invoke_m062C6716117B97F904C309212B9BF73078717C7E(L_9, L_10, L_11, /*hidden argument*/Action_2_Invoke_m062C6716117B97F904C309212B9BF73078717C7E_RuntimeMethod_var);
	}

IL_003e:
	{
		// handle.Free();
		GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(&V_0), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem::RegisterDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitSessionSubsystem_RegisterDescriptor_mA5E32E61DAA0986D1D67B5318AF10D38E5435103 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitSessionSubsystem_RegisterDescriptor_mA5E32E61DAA0986D1D67B5318AF10D38E5435103_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// NativeApi.UnityARKit_ensureRootViewIsSetup();
		NativeApi_UnityARKit_ensureRootViewIsSetup_m8D42C5AE23A0865BB621C7298CD46529D1D8F971(/*hidden argument*/NULL);
		// XRSessionSubsystemDescriptor.RegisterDescriptor(new XRSessionSubsystemDescriptor.Cinfo
		// {
		//     id = "ARKit-Session",
		//     subsystemImplementationType = typeof(ARKitSessionSubsystem),
		//     supportsInstall = false,
		//     supportsMatchFrameRate = true
		// });
		il2cpp_codegen_initobj((&V_0), sizeof(Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A ));
		Cinfo_set_id_m6A2CAB13FAD54AB05458DC5DE1FAB5C651E9D656_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)(&V_0), _stringLiteralDD3E96C069D13F79F8B9D6B0CD486B4507747763, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		Cinfo_set_subsystemImplementationType_mEFA8A5F68BEA841ED51B8D17DAF2E933BA7893EC_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)(&V_0), L_1, /*hidden argument*/NULL);
		Cinfo_set_supportsInstall_m05EE61C58E505A8F20DEA68862395341F1DAD3FD_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)(&V_0), (bool)0, /*hidden argument*/NULL);
		Cinfo_set_supportsMatchFrameRate_m9CB328CEF43BCE3E59F26A97D32AEE1D201F8787_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)(&V_0), (bool)1, /*hidden argument*/NULL);
		Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A  L_2 = V_0;
		XRSessionSubsystemDescriptor_RegisterDescriptor_m60DE0DD6782289BAD4D67D15E2361D1B7B71C262(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitSessionSubsystem__ctor_m6EF506F983BA0AE8EBDD916A7987B1F62289C2BE (ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216 * __this, const RuntimeMethod* method)
{
	{
		XRSessionSubsystem__ctor_m8485F39F339764D3FCA4FD0E1D77ADE16CAE1676(__this, /*hidden argument*/NULL);
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
// UnityEngine.XR.ARSubsystems.XRDepthSubsystem_Provider UnityEngine.XR.ARKit.ARKitXRDepthSubsystem::CreateProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Provider_t8E88C17A70269CD3E96909AFCCA952AAA7DEC0B6 * ARKitXRDepthSubsystem_CreateProvider_m0C4A238AE0D21E6E357E83AB9973343A5DBC77CA (ARKitXRDepthSubsystem_t50D82DC2115EED29E5F0EEBA8A0F4FA7876BD2D5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitXRDepthSubsystem_CreateProvider_m0C4A238AE0D21E6E357E83AB9973343A5DBC77CA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override Provider CreateProvider() => new ARKitProvider();
		ARKitProvider_tC6BBA25F076F6D64FA8E6336E6860D7DBD41A7A1 * L_0 = (ARKitProvider_tC6BBA25F076F6D64FA8E6336E6860D7DBD41A7A1 *)il2cpp_codegen_object_new(ARKitProvider_tC6BBA25F076F6D64FA8E6336E6860D7DBD41A7A1_il2cpp_TypeInfo_var);
		ARKitProvider__ctor_mA12162D27C7B8FF0D22C9F79C59E24BE9EA4FF1C(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitXRDepthSubsystem::RegisterDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitXRDepthSubsystem_RegisterDescriptor_m7432D5BD49562D3393CA37BB8D26D624E8FC0958 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitXRDepthSubsystem_RegisterDescriptor_m7432D5BD49562D3393CA37BB8D26D624E8FC0958_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var descriptorParams = new XRDepthSubsystemDescriptor.Cinfo
		// {
		//     id = "ARKit-Depth",
		//     implementationType = typeof(ARKitXRDepthSubsystem),
		//     supportsFeaturePoints = true,
		//     supportsConfidence = false,
		//     supportsUniqueIds = true
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 ));
		(&V_0)->set_id_0(_stringLiteral118D53AE05F479FE7B8ACAE7DF6D75BC38DB9D15);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (ARKitXRDepthSubsystem_t50D82DC2115EED29E5F0EEBA8A0F4FA7876BD2D5_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		(&V_0)->set_implementationType_1(L_1);
		Cinfo_set_supportsFeaturePoints_mD44DBE0A79D63D3234369E573653A81DC7FB8E1D((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		Cinfo_set_supportsConfidence_m78F76CAAFD5D667ADBED1580E1F8A1286B59C46D((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)(&V_0), (bool)0, /*hidden argument*/NULL);
		Cinfo_set_supportsUniqueIds_mFF68A678A13F7C1BD9E157690649255A27369514((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1  L_2 = V_0;
		// XRDepthSubsystemDescriptor.RegisterDescriptor(descriptorParams);
		XRDepthSubsystemDescriptor_RegisterDescriptor_mB5908D568E8943B143747EDA81FF550FE2BB3A33(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitXRDepthSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitXRDepthSubsystem__ctor_mC09180DAD19E4467C0005A52CDFDCBDF5EA083A4 (ARKitXRDepthSubsystem_t50D82DC2115EED29E5F0EEBA8A0F4FA7876BD2D5 * __this, const RuntimeMethod* method)
{
	{
		XRDepthSubsystem__ctor_mCD27ED98C0FCF9538A67023E02DDD4AFB3B04D86(__this, /*hidden argument*/NULL);
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
// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem_Provider UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem::CreateProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12 * ARKitXRPlaneSubsystem_CreateProvider_m015E36C48CB75AD2F5EC202CE618D8EC2F9D8BD5 (ARKitXRPlaneSubsystem_t03042D64756D81EC6B4657CD1323D7404EC7530B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitXRPlaneSubsystem_CreateProvider_m015E36C48CB75AD2F5EC202CE618D8EC2F9D8BD5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override Provider CreateProvider() => new ARKitProvider();
		ARKitProvider_tF9F620C89E671C028D10768C5300D3539661A2C1 * L_0 = (ARKitProvider_tF9F620C89E671C028D10768C5300D3539661A2C1 *)il2cpp_codegen_object_new(ARKitProvider_tF9F620C89E671C028D10768C5300D3539661A2C1_il2cpp_TypeInfo_var);
		ARKitProvider__ctor_m9A88CE1D87E7A82F6169551F3DFBE8D3EE9A5352(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem::RegisterDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitXRPlaneSubsystem_RegisterDescriptor_m73A70F48D9FC2EBC931E3766C969EF3794419C5E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitXRPlaneSubsystem_RegisterDescriptor_m73A70F48D9FC2EBC931E3766C969EF3794419C5E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var cinfo = new XRPlaneSubsystemDescriptor.Cinfo
		// {
		//     id = "ARKit-Plane",
		//     subsystemImplementationType = typeof(ARKitXRPlaneSubsystem),
		//     supportsHorizontalPlaneDetection = true,
		//     supportsVerticalPlaneDetection = true,
		//     supportsArbitraryPlaneDetection = false,
		//     supportsBoundaryVertices = true,
		//     supportsClassification = NativeApi.UnityARKit_planes_SupportsClassification(),
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD ));
		Cinfo_set_id_m940361693A3C925B2180733D87611B5FDF0357D7_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&V_0), _stringLiteralF79D74BDD6DF0D984C05241131A8A14AF293EE1B, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (ARKitXRPlaneSubsystem_t03042D64756D81EC6B4657CD1323D7404EC7530B_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		Cinfo_set_subsystemImplementationType_mCCF96D0DFB6DB4F146EA74D30E45A2230791D09F_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&V_0), L_1, /*hidden argument*/NULL);
		Cinfo_set_supportsHorizontalPlaneDetection_mBC9B4572592B71328A96AF58DEB047528470C440_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&V_0), (bool)1, /*hidden argument*/NULL);
		Cinfo_set_supportsVerticalPlaneDetection_mFF310EF7B9F8D9C9F9689CF9D1D2BEDDFF93F9F0_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&V_0), (bool)1, /*hidden argument*/NULL);
		Cinfo_set_supportsArbitraryPlaneDetection_m70B1D6D27946FB12BF0D3D3AF8C6DC8DC3F399B9_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&V_0), (bool)0, /*hidden argument*/NULL);
		Cinfo_set_supportsBoundaryVertices_mC6F86EB28D38CC483AD8F9FD161013BDE3F4AFEF_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&V_0), (bool)1, /*hidden argument*/NULL);
		bool L_2 = NativeApi_UnityARKit_planes_SupportsClassification_m485C4562C5342962A68D0B163559017BEAEA0B4B(/*hidden argument*/NULL);
		Cinfo_set_supportsClassification_mA3B11D7CA4F960C89E729E5161AD7CC3211B933C_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&V_0), L_2, /*hidden argument*/NULL);
		Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD  L_3 = V_0;
		// XRPlaneSubsystemDescriptor.Create(cinfo);
		XRPlaneSubsystemDescriptor_Create_mB69A44F54AB64DF4361D3C16AE48C2F1B474EA32(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitXRPlaneSubsystem__ctor_m96BA403390931AE1CEB94E73FF4FEA02A313825A (ARKitXRPlaneSubsystem_t03042D64756D81EC6B4657CD1323D7404EC7530B * __this, const RuntimeMethod* method)
{
	{
		XRPlaneSubsystem__ctor_mDD4F1B44F90E2F50D3C78601413F01D05990B20C(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.XR.ARKit.ARWorldMap::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARWorldMap_Dispose_m9B50247399932A662994E8C25BEBE535DB7DC8B2 (ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 * __this, const RuntimeMethod* method)
{
	{
		// Api.UnityARKit_disposeWorldMap(nativeHandle);
		int32_t L_0 = ARWorldMap_get_nativeHandle_m26CA181591D8E7863F4274AF93319497EC8CC86F_inline((ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 *)__this, /*hidden argument*/NULL);
		Api_UnityARKit_disposeWorldMap_m7961172E9B6D535070D54E86C0ED0F6B12970847(L_0, /*hidden argument*/NULL);
		// nativeHandle = k_InvalidHandle;
		ARWorldMap_set_nativeHandle_mEAB7C65A965E0F40860B613E3190B2E59FE4D083_inline((ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 *)__this, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ARWorldMap_Dispose_m9B50247399932A662994E8C25BEBE535DB7DC8B2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 * _thisAdjusted = reinterpret_cast<ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 *>(__this + _offset);
	ARWorldMap_Dispose_m9B50247399932A662994E8C25BEBE535DB7DC8B2(_thisAdjusted, method);
}
// System.Int32 UnityEngine.XR.ARKit.ARWorldMap::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARWorldMap_GetHashCode_m539F3BE2588CF435F4A672BB8D38641B92619555 (ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// return nativeHandle.GetHashCode();
		int32_t L_0 = ARWorldMap_get_nativeHandle_m26CA181591D8E7863F4274AF93319497EC8CC86F_inline((ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 *)__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(&V_0), /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ARWorldMap_GetHashCode_m539F3BE2588CF435F4A672BB8D38641B92619555_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 * _thisAdjusted = reinterpret_cast<ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 *>(__this + _offset);
	return ARWorldMap_GetHashCode_m539F3BE2588CF435F4A672BB8D38641B92619555(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARKit.ARWorldMap::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARWorldMap_Equals_m594655912BCCCE5F6029540795777AD70FA25D58 (ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARWorldMap_Equals_m594655912BCCCE5F6029540795777AD70FA25D58_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!(obj is ARWorldMap))
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// return Equals((ARWorldMap)obj);
		RuntimeObject * L_1 = ___obj0;
		bool L_2 = ARWorldMap_Equals_m99615F40202D61E0BFCB3E5609E454BB29DD0B86((ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 *)__this, ((*(ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 *)((ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 *)UnBox(L_1, ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool ARWorldMap_Equals_m594655912BCCCE5F6029540795777AD70FA25D58_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 * _thisAdjusted = reinterpret_cast<ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 *>(__this + _offset);
	return ARWorldMap_Equals_m594655912BCCCE5F6029540795777AD70FA25D58(_thisAdjusted, ___obj0, method);
}
// System.Boolean UnityEngine.XR.ARKit.ARWorldMap::Equals(UnityEngine.XR.ARKit.ARWorldMap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARWorldMap_Equals_m99615F40202D61E0BFCB3E5609E454BB29DD0B86 (ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 * __this, ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2  ___other0, const RuntimeMethod* method)
{
	{
		// return (nativeHandle == other.nativeHandle);
		int32_t L_0 = ARWorldMap_get_nativeHandle_m26CA181591D8E7863F4274AF93319497EC8CC86F_inline((ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 *)__this, /*hidden argument*/NULL);
		int32_t L_1 = ARWorldMap_get_nativeHandle_m26CA181591D8E7863F4274AF93319497EC8CC86F_inline((ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 *)(&___other0), /*hidden argument*/NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool ARWorldMap_Equals_m99615F40202D61E0BFCB3E5609E454BB29DD0B86_AdjustorThunk (RuntimeObject * __this, ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 * _thisAdjusted = reinterpret_cast<ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 *>(__this + _offset);
	return ARWorldMap_Equals_m99615F40202D61E0BFCB3E5609E454BB29DD0B86(_thisAdjusted, ___other0, method);
}
// System.Void UnityEngine.XR.ARKit.ARWorldMap::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARWorldMap__ctor_m43EA558358719448EB3CA73E007EE77EBEAF6817 (ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 * __this, int32_t ___nativeHandle0, const RuntimeMethod* method)
{
	{
		// this.nativeHandle = nativeHandle;
		int32_t L_0 = ___nativeHandle0;
		ARWorldMap_set_nativeHandle_mEAB7C65A965E0F40860B613E3190B2E59FE4D083_inline((ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 *)__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ARWorldMap__ctor_m43EA558358719448EB3CA73E007EE77EBEAF6817_AdjustorThunk (RuntimeObject * __this, int32_t ___nativeHandle0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 * _thisAdjusted = reinterpret_cast<ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 *>(__this + _offset);
	ARWorldMap__ctor_m43EA558358719448EB3CA73E007EE77EBEAF6817(_thisAdjusted, ___nativeHandle0, method);
}
// System.Int32 UnityEngine.XR.ARKit.ARWorldMap::get_nativeHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARWorldMap_get_nativeHandle_m26CA181591D8E7863F4274AF93319497EC8CC86F (ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 * __this, const RuntimeMethod* method)
{
	{
		// internal int nativeHandle { get; private set; }
		int32_t L_0 = __this->get_U3CnativeHandleU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t ARWorldMap_get_nativeHandle_m26CA181591D8E7863F4274AF93319497EC8CC86F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 * _thisAdjusted = reinterpret_cast<ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 *>(__this + _offset);
	return ARWorldMap_get_nativeHandle_m26CA181591D8E7863F4274AF93319497EC8CC86F_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARKit.ARWorldMap::set_nativeHandle(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARWorldMap_set_nativeHandle_mEAB7C65A965E0F40860B613E3190B2E59FE4D083 (ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// internal int nativeHandle { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CnativeHandleU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void ARWorldMap_set_nativeHandle_mEAB7C65A965E0F40860B613E3190B2E59FE4D083_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 * _thisAdjusted = reinterpret_cast<ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 *>(__this + _offset);
	ARWorldMap_set_nativeHandle_mEAB7C65A965E0F40860B613E3190B2E59FE4D083_inline(_thisAdjusted, ___value0, method);
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
// System.Boolean UnityEngine.XR.ARKit.ARWorldMapRequestStatusExtensions::IsError(UnityEngine.XR.ARKit.ARWorldMapRequestStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARWorldMapRequestStatusExtensions_IsError_m5A4B5A00C002887CEB0596D920DDC272513A696E (int32_t ___status0, const RuntimeMethod* method)
{
	{
		// switch (status)
		int32_t L_0 = ___status0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1))) <= ((uint32_t)1))))
		{
			goto IL_0008;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0008:
	{
		// return true;
		return (bool)1;
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
// System.Void UnityEngine.XR.ARKit.Api::UnityARKit_disposeWorldMap(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Api_UnityARKit_disposeWorldMap_m7961172E9B6D535070D54E86C0ED0F6B12970847 (int32_t ___worldMapId0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_disposeWorldMap)(___worldMapId0);

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARKit.EnvironmentProbeApi::UnityARKit_EnvironmentProbeProvider_Construct()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_Construct_m5D69AFAA42866A78CC2B64C4457F3612E0627B46 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_EnvironmentProbeProvider_Construct)();

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityEngine.XR.ARKit.OSVersion::get_major()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OSVersion_get_major_m8CB549CF1D240126F149CCC743578554CE0BD876 (OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C * __this, const RuntimeMethod* method)
{
	{
		// public int major { get; private set; }
		int32_t L_0 = __this->get_U3CmajorU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t OSVersion_get_major_m8CB549CF1D240126F149CCC743578554CE0BD876_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C * _thisAdjusted = reinterpret_cast<OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C *>(__this + _offset);
	return OSVersion_get_major_m8CB549CF1D240126F149CCC743578554CE0BD876_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARKit.OSVersion::set_major(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSVersion_set_major_m4A65C7E202EA28826622D745685F6904E5824889 (OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int major { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CmajorU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void OSVersion_set_major_m4A65C7E202EA28826622D745685F6904E5824889_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C * _thisAdjusted = reinterpret_cast<OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C *>(__this + _offset);
	OSVersion_set_major_m4A65C7E202EA28826622D745685F6904E5824889_inline(_thisAdjusted, ___value0, method);
}
// System.Int32 UnityEngine.XR.ARKit.OSVersion::get_minor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OSVersion_get_minor_m32CB9CEC2DBF2512669C8A02640FDF7EA602E0EB (OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C * __this, const RuntimeMethod* method)
{
	{
		// public int minor { get; private set; }
		int32_t L_0 = __this->get_U3CminorU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t OSVersion_get_minor_m32CB9CEC2DBF2512669C8A02640FDF7EA602E0EB_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C * _thisAdjusted = reinterpret_cast<OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C *>(__this + _offset);
	return OSVersion_get_minor_m32CB9CEC2DBF2512669C8A02640FDF7EA602E0EB_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARKit.OSVersion::set_minor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSVersion_set_minor_mA36649E5CBFD2B33370BF09DC2021A7FCF920AB0 (OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int minor { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CminorU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void OSVersion_set_minor_mA36649E5CBFD2B33370BF09DC2021A7FCF920AB0_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C * _thisAdjusted = reinterpret_cast<OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C *>(__this + _offset);
	OSVersion_set_minor_mA36649E5CBFD2B33370BF09DC2021A7FCF920AB0_inline(_thisAdjusted, ___value0, method);
}
// System.Int32 UnityEngine.XR.ARKit.OSVersion::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OSVersion_get_point_m008AC01380A6C4C69491DC68AC7AC7724452A422 (OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C * __this, const RuntimeMethod* method)
{
	{
		// public int point { get; private set; }
		int32_t L_0 = __this->get_U3CpointU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t OSVersion_get_point_m008AC01380A6C4C69491DC68AC7AC7724452A422_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C * _thisAdjusted = reinterpret_cast<OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C *>(__this + _offset);
	return OSVersion_get_point_m008AC01380A6C4C69491DC68AC7AC7724452A422_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARKit.OSVersion::set_point(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSVersion_set_point_m244CD91F1FC6D586290700F375AE02843FB9A1FF (OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int point { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CpointU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void OSVersion_set_point_m244CD91F1FC6D586290700F375AE02843FB9A1FF_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C * _thisAdjusted = reinterpret_cast<OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C *>(__this + _offset);
	OSVersion_set_point_m244CD91F1FC6D586290700F375AE02843FB9A1FF_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.ARKit.OSVersion::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSVersion__ctor_mE910D5DA6F2E1E3C44D319C4D849BA52E478CE4C (OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C * __this, int32_t ___major0, int32_t ___minor1, int32_t ___point2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OSVersion__ctor_mE910D5DA6F2E1E3C44D319C4D849BA52E478CE4C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (major < 0)
		int32_t L_0 = ___major0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		// throw new ArgumentOutOfRangeException("major", "Version component must be greater than or equal to 0.");
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_1 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_1, _stringLiteral82C791C1966A9B7EFCEB102734ECB5B1DB8AF742, _stringLiteralBCE376F123EDC922894BF006E686DAB434F36B27, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, OSVersion__ctor_mE910D5DA6F2E1E3C44D319C4D849BA52E478CE4C_RuntimeMethod_var);
	}

IL_0014:
	{
		// if (minor < 0)
		int32_t L_2 = ___minor1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		// throw new ArgumentOutOfRangeException("minor", "Version component must be greater than or equal to 0.");
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_3 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_3, _stringLiteralD3F9023582F96AC5F3DEB69BCAC72DB7F59028A8, _stringLiteralBCE376F123EDC922894BF006E686DAB434F36B27, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, OSVersion__ctor_mE910D5DA6F2E1E3C44D319C4D849BA52E478CE4C_RuntimeMethod_var);
	}

IL_0028:
	{
		// if (point < 0)
		int32_t L_4 = ___point2;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		// throw new ArgumentOutOfRangeException("point", "Version component must be greater than or equal to 0.");
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_5 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_5, _stringLiteral61B8D324687C24872968A15276C954F913457113, _stringLiteralBCE376F123EDC922894BF006E686DAB434F36B27, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, OSVersion__ctor_mE910D5DA6F2E1E3C44D319C4D849BA52E478CE4C_RuntimeMethod_var);
	}

IL_003c:
	{
		// this.major = major;
		int32_t L_6 = ___major0;
		OSVersion_set_major_m4A65C7E202EA28826622D745685F6904E5824889_inline((OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C *)__this, L_6, /*hidden argument*/NULL);
		// this.minor = minor;
		int32_t L_7 = ___minor1;
		OSVersion_set_minor_mA36649E5CBFD2B33370BF09DC2021A7FCF920AB0_inline((OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C *)__this, L_7, /*hidden argument*/NULL);
		// this.point = point;
		int32_t L_8 = ___point2;
		OSVersion_set_point_m244CD91F1FC6D586290700F375AE02843FB9A1FF_inline((OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C *)__this, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void OSVersion__ctor_mE910D5DA6F2E1E3C44D319C4D849BA52E478CE4C_AdjustorThunk (RuntimeObject * __this, int32_t ___major0, int32_t ___minor1, int32_t ___point2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C * _thisAdjusted = reinterpret_cast<OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C *>(__this + _offset);
	OSVersion__ctor_mE910D5DA6F2E1E3C44D319C4D849BA52E478CE4C(_thisAdjusted, ___major0, ___minor1, ___point2, method);
}
// UnityEngine.XR.ARKit.OSVersion UnityEngine.XR.ARKit.OSVersion::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C  OSVersion_Parse_m9A591C48008204E0982ADD5B8F84AE915DE31597 (String_t* ___version0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (string.IsNullOrEmpty(version))
		String_t* L_0 = ___version0;
		bool L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// return new OSVersion(0);
		OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C  L_2;
		memset((&L_2), 0, sizeof(L_2));
		OSVersion__ctor_mE910D5DA6F2E1E3C44D319C4D849BA52E478CE4C((&L_2), 0, 0, 0, /*hidden argument*/NULL);
		return L_2;
	}

IL_0011:
	{
		// int index = IndexOfFirstDigit(version);
		String_t* L_3 = ___version0;
		int32_t L_4 = OSVersion_IndexOfFirstDigit_m1E1C7B700D5A02A08DAE60B58DD3C6F2C945E3E5(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// return new OSVersion
		// {
		//     major = ParseNextComponent(version, ref index),
		//     minor = ParseNextComponent(version, ref index),
		//     point = ParseNextComponent(version, ref index)
		// };
		il2cpp_codegen_initobj((&V_1), sizeof(OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C ));
		String_t* L_5 = ___version0;
		int32_t L_6 = OSVersion_ParseNextComponent_m3266ED95E30AB724E270CC8A345796D54C31BA8D(L_5, (int32_t*)(&V_0), /*hidden argument*/NULL);
		OSVersion_set_major_m4A65C7E202EA28826622D745685F6904E5824889_inline((OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C *)(&V_1), L_6, /*hidden argument*/NULL);
		String_t* L_7 = ___version0;
		int32_t L_8 = OSVersion_ParseNextComponent_m3266ED95E30AB724E270CC8A345796D54C31BA8D(L_7, (int32_t*)(&V_0), /*hidden argument*/NULL);
		OSVersion_set_minor_mA36649E5CBFD2B33370BF09DC2021A7FCF920AB0_inline((OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C *)(&V_1), L_8, /*hidden argument*/NULL);
		String_t* L_9 = ___version0;
		int32_t L_10 = OSVersion_ParseNextComponent_m3266ED95E30AB724E270CC8A345796D54C31BA8D(L_9, (int32_t*)(&V_0), /*hidden argument*/NULL);
		OSVersion_set_point_m244CD91F1FC6D586290700F375AE02843FB9A1FF_inline((OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C *)(&V_1), L_10, /*hidden argument*/NULL);
		OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C  L_11 = V_1;
		return L_11;
	}
}
// System.Int32 UnityEngine.XR.ARKit.OSVersion::IndexOfFirstDigit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OSVersion_IndexOfFirstDigit_m1E1C7B700D5A02A08DAE60B58DD3C6F2C945E3E5 (String_t* ___version0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// for (int index = 0; index < version.Length; ++index)
		V_0 = 0;
		goto IL_001e;
	}

IL_0004:
	{
		// var digit = (int)version[index] - 48;
		String_t* L_0 = ___version0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Il2CppChar L_2 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_0, L_1, /*hidden argument*/NULL);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)((int32_t)48)));
		// if (digit >= 0 && digit <= 9)
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) > ((int32_t)((int32_t)9))))
		{
			goto IL_001a;
		}
	}
	{
		// return index;
		int32_t L_5 = V_0;
		return L_5;
	}

IL_001a:
	{
		// for (int index = 0; index < version.Length; ++index)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_001e:
	{
		// for (int index = 0; index < version.Length; ++index)
		int32_t L_7 = V_0;
		String_t* L_8 = ___version0;
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_8, /*hidden argument*/NULL);
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_0004;
		}
	}
	{
		// return version.Length;
		String_t* L_10 = ___version0;
		NullCheck(L_10);
		int32_t L_11 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.Int32 UnityEngine.XR.ARKit.OSVersion::ParseNextComponent(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OSVersion_ParseNextComponent_m3266ED95E30AB724E270CC8A345796D54C31BA8D (String_t* ___version0, int32_t* ___index1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int number = 0;
		V_0 = 0;
		goto IL_0045;
	}

IL_0004:
	{
		// var digit = (int)version[index] - 48;
		String_t* L_0 = ___version0;
		int32_t* L_1 = ___index1;
		int32_t L_2 = *((int32_t*)L_1);
		NullCheck(L_0);
		Il2CppChar L_3 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_0, L_2, /*hidden argument*/NULL);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)((int32_t)48)));
		// if (digit == 0 && number == 0)
		int32_t L_4 = V_1;
		if (L_4)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_5 = V_0;
		if (!L_5)
		{
			goto IL_003f;
		}
	}

IL_0016:
	{
		// else if (digit >= 0 && digit <= 9)
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) > ((int32_t)((int32_t)9))))
		{
			goto IL_0028;
		}
	}
	{
		// number = number * 10 + digit;
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)((int32_t)10))), (int32_t)L_9));
		// }
		goto IL_003f;
	}

IL_0028:
	{
		// else if (digit == periodCode)
		int32_t L_10 = V_1;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0035;
		}
	}
	{
		// ++index;
		int32_t* L_11 = ___index1;
		int32_t* L_12 = ___index1;
		int32_t L_13 = *((int32_t*)L_12);
		*((int32_t*)L_11) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
		// break;
		goto IL_004f;
	}

IL_0035:
	{
		// index = version.Length;
		int32_t* L_14 = ___index1;
		String_t* L_15 = ___version0;
		NullCheck(L_15);
		int32_t L_16 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_15, /*hidden argument*/NULL);
		*((int32_t*)L_14) = (int32_t)L_16;
		// break;
		goto IL_004f;
	}

IL_003f:
	{
		// for (; index < version.Length; ++index)
		int32_t* L_17 = ___index1;
		int32_t* L_18 = ___index1;
		int32_t L_19 = *((int32_t*)L_18);
		*((int32_t*)L_17) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_0045:
	{
		// for (; index < version.Length; ++index)
		int32_t* L_20 = ___index1;
		int32_t L_21 = *((int32_t*)L_20);
		String_t* L_22 = ___version0;
		NullCheck(L_22);
		int32_t L_23 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_22, /*hidden argument*/NULL);
		if ((((int32_t)L_21) < ((int32_t)L_23)))
		{
			goto IL_0004;
		}
	}

IL_004f:
	{
		// return number;
		int32_t L_24 = V_0;
		return L_24;
	}
}
// System.Int32 UnityEngine.XR.ARKit.OSVersion::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OSVersion_GetHashCode_mDD59797FD4B8902519893582F937E139061F7CCD (OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// var hash = major.GetHashCode();
		int32_t L_0 = OSVersion_get_major_m8CB549CF1D240126F149CCC743578554CE0BD876_inline((OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C *)__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(&V_0), /*hidden argument*/NULL);
		// hash = hash * 486187739 + minor.GetHashCode();
		int32_t L_2 = OSVersion_get_minor_m32CB9CEC2DBF2512669C8A02640FDF7EA602E0EB_inline((OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C *)__this, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(&V_0), /*hidden argument*/NULL);
		// hash = hash * 486187739 + point.GetHashCode();
		int32_t L_4 = OSVersion_get_point_m008AC01380A6C4C69491DC68AC7AC7724452A422_inline((OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C *)__this, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(&V_0), /*hidden argument*/NULL);
		// return hash;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)((int32_t)486187739))), (int32_t)L_3)), (int32_t)((int32_t)486187739))), (int32_t)L_5));
	}
}
IL2CPP_EXTERN_C  int32_t OSVersion_GetHashCode_mDD59797FD4B8902519893582F937E139061F7CCD_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C * _thisAdjusted = reinterpret_cast<OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C *>(__this + _offset);
	return OSVersion_GetHashCode_mDD59797FD4B8902519893582F937E139061F7CCD(_thisAdjusted, method);
}
// System.Int32 UnityEngine.XR.ARKit.OSVersion::CompareTo(UnityEngine.XR.ARKit.OSVersion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OSVersion_CompareTo_m4E346D9919DCC3F257E6FF065CBAF3CB851EC7C6 (OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C * __this, OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C  ___version0, const RuntimeMethod* method)
{
	{
		// if (this < version)
		OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C  L_0 = (*(OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C *)__this);
		OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C  L_1 = ___version0;
		bool L_2 = OSVersion_op_LessThan_m1D3CE8773D5DB2C45D7A5019C9631CC1083F22ED(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_0010:
	{
		// if (this > version)
		OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C  L_3 = (*(OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C *)__this);
		OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C  L_4 = ___version0;
		bool L_5 = OSVersion_op_GreaterThan_mA287CEA034CFD70AC13AAC822615C7B65CABE076(L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0020;
		}
	}
	{
		// return 1;
		return 1;
	}

IL_0020:
	{
		// return 0;
		return 0;
	}
}
IL2CPP_EXTERN_C  int32_t OSVersion_CompareTo_m4E346D9919DCC3F257E6FF065CBAF3CB851EC7C6_AdjustorThunk (RuntimeObject * __this, OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C  ___version0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C * _thisAdjusted = reinterpret_cast<OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C *>(__this + _offset);
	return OSVersion_CompareTo_m4E346D9919DCC3F257E6FF065CBAF3CB851EC7C6(_thisAdjusted, ___version0, method);
}
// System.Boolean UnityEngine.XR.ARKit.OSVersion::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OSVersion_Equals_m914F030B0D83873975E4FB03DAAC2B1EB126521F (OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OSVersion_Equals_m914F030B0D83873975E4FB03DAAC2B1EB126521F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (obj == null || !(obj is OSVersion))
		RuntimeObject * L_0 = ___obj0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_1, OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		// return false;
		return (bool)0;
	}

IL_000d:
	{
		// return Equals((OSVersion)obj);
		RuntimeObject * L_2 = ___obj0;
		bool L_3 = OSVersion_Equals_m864258383751FACDE379139F19475044DB18B222((OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C *)__this, ((*(OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C *)((OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C *)UnBox(L_2, OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool OSVersion_Equals_m914F030B0D83873975E4FB03DAAC2B1EB126521F_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C * _thisAdjusted = reinterpret_cast<OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C *>(__this + _offset);
	return OSVersion_Equals_m914F030B0D83873975E4FB03DAAC2B1EB126521F(_thisAdjusted, ___obj0, method);
}
// System.Boolean UnityEngine.XR.ARKit.OSVersion::Equals(UnityEngine.XR.ARKit.OSVersion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OSVersion_Equals_m864258383751FACDE379139F19475044DB18B222 (OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C * __this, OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C  ___other0, const RuntimeMethod* method)
{
	{
		// return
		//     (major == other.major) &&
		//     (minor == other.minor) &&
		//     (point == other.point);
		int32_t L_0 = OSVersion_get_major_m8CB549CF1D240126F149CCC743578554CE0BD876_inline((OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C *)__this, /*hidden argument*/NULL);
		int32_t L_1 = OSVersion_get_major_m8CB549CF1D240126F149CCC743578554CE0BD876_inline((OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_2 = OSVersion_get_minor_m32CB9CEC2DBF2512669C8A02640FDF7EA602E0EB_inline((OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C *)__this, /*hidden argument*/NULL);
		int32_t L_3 = OSVersion_get_minor_m32CB9CEC2DBF2512669C8A02640FDF7EA602E0EB_inline((OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_4 = OSVersion_get_point_m008AC01380A6C4C69491DC68AC7AC7724452A422_inline((OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C *)__this, /*hidden argument*/NULL);
		int32_t L_5 = OSVersion_get_point_m008AC01380A6C4C69491DC68AC7AC7724452A422_inline((OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C *)(&___other0), /*hidden argument*/NULL);
		return (bool)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
	}

IL_002e:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool OSVersion_Equals_m864258383751FACDE379139F19475044DB18B222_AdjustorThunk (RuntimeObject * __this, OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C * _thisAdjusted = reinterpret_cast<OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C *>(__this + _offset);
	return OSVersion_Equals_m864258383751FACDE379139F19475044DB18B222(_thisAdjusted, ___other0, method);
}
// System.Boolean UnityEngine.XR.ARKit.OSVersion::op_LessThan(UnityEngine.XR.ARKit.OSVersion,UnityEngine.XR.ARKit.OSVersion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OSVersion_op_LessThan_m1D3CE8773D5DB2C45D7A5019C9631CC1083F22ED (OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C  ___lhs0, OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C  ___rhs1, const RuntimeMethod* method)
{
	{
		// if (lhs.major < rhs.major)
		int32_t L_0 = OSVersion_get_major_m8CB549CF1D240126F149CCC743578554CE0BD876_inline((OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C *)(&___lhs0), /*hidden argument*/NULL);
		int32_t L_1 = OSVersion_get_major_m8CB549CF1D240126F149CCC743578554CE0BD876_inline((OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C *)(&___rhs1), /*hidden argument*/NULL);
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0012:
	{
		// if (lhs.major > rhs.major)
		int32_t L_2 = OSVersion_get_major_m8CB549CF1D240126F149CCC743578554CE0BD876_inline((OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C *)(&___lhs0), /*hidden argument*/NULL);
		int32_t L_3 = OSVersion_get_major_m8CB549CF1D240126F149CCC743578554CE0BD876_inline((OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C *)(&___rhs1), /*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)L_3)))
		{
			goto IL_0024;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (lhs.minor < rhs.minor)
		int32_t L_4 = OSVersion_get_minor_m32CB9CEC2DBF2512669C8A02640FDF7EA602E0EB_inline((OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C *)(&___lhs0), /*hidden argument*/NULL);
		int32_t L_5 = OSVersion_get_minor_m32CB9CEC2DBF2512669C8A02640FDF7EA602E0EB_inline((OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C *)(&___rhs1), /*hidden argument*/NULL);
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0036;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0036:
	{
		// if (lhs.minor > rhs.minor)
		int32_t L_6 = OSVersion_get_minor_m32CB9CEC2DBF2512669C8A02640FDF7EA602E0EB_inline((OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C *)(&___lhs0), /*hidden argument*/NULL);
		int32_t L_7 = OSVersion_get_minor_m32CB9CEC2DBF2512669C8A02640FDF7EA602E0EB_inline((OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C *)(&___rhs1), /*hidden argument*/NULL);
		if ((((int32_t)L_6) <= ((int32_t)L_7)))
		{
			goto IL_0048;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0048:
	{
		// return lhs.point < rhs.point;
		int32_t L_8 = OSVersion_get_point_m008AC01380A6C4C69491DC68AC7AC7724452A422_inline((OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C *)(&___lhs0), /*hidden argument*/NULL);
		int32_t L_9 = OSVersion_get_point_m008AC01380A6C4C69491DC68AC7AC7724452A422_inline((OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C *)(&___rhs1), /*hidden argument*/NULL);
		return (bool)((((int32_t)L_8) < ((int32_t)L_9))? 1 : 0);
	}
}
// System.Boolean UnityEngine.XR.ARKit.OSVersion::op_GreaterThan(UnityEngine.XR.ARKit.OSVersion,UnityEngine.XR.ARKit.OSVersion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OSVersion_op_GreaterThan_mA287CEA034CFD70AC13AAC822615C7B65CABE076 (OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C  ___lhs0, OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C  ___rhs1, const RuntimeMethod* method)
{
	{
		// if (lhs.major > rhs.major)
		int32_t L_0 = OSVersion_get_major_m8CB549CF1D240126F149CCC743578554CE0BD876_inline((OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C *)(&___lhs0), /*hidden argument*/NULL);
		int32_t L_1 = OSVersion_get_major_m8CB549CF1D240126F149CCC743578554CE0BD876_inline((OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C *)(&___rhs1), /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0012:
	{
		// if (lhs.major < rhs.major)
		int32_t L_2 = OSVersion_get_major_m8CB549CF1D240126F149CCC743578554CE0BD876_inline((OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C *)(&___lhs0), /*hidden argument*/NULL);
		int32_t L_3 = OSVersion_get_major_m8CB549CF1D240126F149CCC743578554CE0BD876_inline((OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C *)(&___rhs1), /*hidden argument*/NULL);
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_0024;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (lhs.minor > rhs.minor)
		int32_t L_4 = OSVersion_get_minor_m32CB9CEC2DBF2512669C8A02640FDF7EA602E0EB_inline((OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C *)(&___lhs0), /*hidden argument*/NULL);
		int32_t L_5 = OSVersion_get_minor_m32CB9CEC2DBF2512669C8A02640FDF7EA602E0EB_inline((OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C *)(&___rhs1), /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)L_5)))
		{
			goto IL_0036;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0036:
	{
		// if (lhs.minor < rhs.minor)
		int32_t L_6 = OSVersion_get_minor_m32CB9CEC2DBF2512669C8A02640FDF7EA602E0EB_inline((OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C *)(&___lhs0), /*hidden argument*/NULL);
		int32_t L_7 = OSVersion_get_minor_m32CB9CEC2DBF2512669C8A02640FDF7EA602E0EB_inline((OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C *)(&___rhs1), /*hidden argument*/NULL);
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			goto IL_0048;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0048:
	{
		// return lhs.point > rhs.point;
		int32_t L_8 = OSVersion_get_point_m008AC01380A6C4C69491DC68AC7AC7724452A422_inline((OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C *)(&___lhs0), /*hidden argument*/NULL);
		int32_t L_9 = OSVersion_get_point_m008AC01380A6C4C69491DC68AC7AC7724452A422_inline((OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C *)(&___rhs1), /*hidden argument*/NULL);
		return (bool)((((int32_t)L_8) > ((int32_t)L_9))? 1 : 0);
	}
}
// System.Boolean UnityEngine.XR.ARKit.OSVersion::op_Equality(UnityEngine.XR.ARKit.OSVersion,UnityEngine.XR.ARKit.OSVersion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OSVersion_op_Equality_mB06938C0B24AAF7C7FB8B7F26A6B044369A9C798 (OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C  ___lhs0, OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C  ___rhs1, const RuntimeMethod* method)
{
	{
		// return lhs.Equals(rhs);
		OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C  L_0 = ___rhs1;
		bool L_1 = OSVersion_Equals_m864258383751FACDE379139F19475044DB18B222((OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C *)(&___lhs0), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.ARKit.OSVersion::op_GreaterThanOrEqual(UnityEngine.XR.ARKit.OSVersion,UnityEngine.XR.ARKit.OSVersion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OSVersion_op_GreaterThanOrEqual_mAEAAD741F1D10072979DFE35014E967BA397A121 (OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C  ___lhs0, OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C  ___rhs1, const RuntimeMethod* method)
{
	{
		// return (lhs > rhs) || (lhs == rhs);
		OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C  L_0 = ___lhs0;
		OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C  L_1 = ___rhs1;
		bool L_2 = OSVersion_op_GreaterThan_mA287CEA034CFD70AC13AAC822615C7B65CABE076(L_0, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C  L_3 = ___lhs0;
		OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C  L_4 = ___rhs1;
		bool L_5 = OSVersion_op_Equality_mB06938C0B24AAF7C7FB8B7F26A6B044369A9C798(L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0011:
	{
		return (bool)1;
	}
}
// System.String UnityEngine.XR.ARKit.OSVersion::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OSVersion_ToString_m8650018E5360BC6B85B38F810F70F4E1564F0E1C (OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OSVersion_ToString_m8650018E5360BC6B85B38F810F70F4E1564F0E1C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return $"{major}.{minor}.{point}";
		int32_t L_0 = OSVersion_get_major_m8CB549CF1D240126F149CCC743578554CE0BD876_inline((OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C *)__this, /*hidden argument*/NULL);
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_1);
		int32_t L_3 = OSVersion_get_minor_m32CB9CEC2DBF2512669C8A02640FDF7EA602E0EB_inline((OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C *)__this, /*hidden argument*/NULL);
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_4);
		int32_t L_6 = OSVersion_get_point_m008AC01380A6C4C69491DC68AC7AC7724452A422_inline((OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C *)__this, /*hidden argument*/NULL);
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6(_stringLiteral8244FF4469CD24AECA8F7B1B293CA6DF261B2861, L_2, L_5, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
IL2CPP_EXTERN_C  String_t* OSVersion_ToString_m8650018E5360BC6B85B38F810F70F4E1564F0E1C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C * _thisAdjusted = reinterpret_cast<OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C *>(__this + _offset);
	return OSVersion_ToString_m8650018E5360BC6B85B38F810F70F4E1564F0E1C(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARKit.ARKitAnchorSubsystem_ARKitProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider__ctor_mD5890F7467A0A36FD0EA10CC44CB32E8DBD47469 (ARKitProvider_tE10DC6803776ECE42E55F127E68C47E50319202E * __this, const RuntimeMethod* method)
{
	{
		Provider__ctor_mFE4941CFC3CA511BBD7C0A498BB2C74DE96FF498(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem_ARKitProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider__ctor_mFC17EA54C2DC44A58721A35D5B7607C607BF8AE4 (ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitProvider__ctor_mFC17EA54C2DC44A58721A35D5B7607C607BF8AE4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// public ARKitProvider()
		Provider__ctor_mA61CB0610059584FC8190F2C54D845C7612D82BE(__this, /*hidden argument*/NULL);
		// NativeApi.UnityARKit_Camera_Construct(k_TextureYPropertyNameId,
		//                                       k_TextureCbCrPropertyNameId);
		IL2CPP_RUNTIME_CLASS_INIT(ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252_StaticFields*)il2cpp_codegen_static_fields_for(ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252_il2cpp_TypeInfo_var))->get_k_TextureYPropertyNameId_0();
		int32_t L_1 = ((ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252_StaticFields*)il2cpp_codegen_static_fields_for(ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252_il2cpp_TypeInfo_var))->get_k_TextureCbCrPropertyNameId_1();
		NativeApi_UnityARKit_Camera_Construct_m85F5550F4DF7C866799A325444B1DA96A2F41265(L_0, L_1, /*hidden argument*/NULL);
		// string shaderName = ARKitCameraSubsystem.backgroundShaderName;
		IL2CPP_RUNTIME_CLASS_INIT(ARKitCameraSubsystem_tE327D2A1BE7A0BD90A9353C8EDBDE9A882315245_il2cpp_TypeInfo_var);
		String_t* L_2 = ARKitCameraSubsystem_get_backgroundShaderName_m0856B4F3C1E036760386F1BED04D029698D0F94F(/*hidden argument*/NULL);
		V_0 = L_2;
		// if (shaderName == null)
		String_t* L_3 = V_0;
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		// Debug.LogError("Cannot create camera background material compatible with the render pipeline");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral61805FB8A9F8CCBCA7560EFE4D0B15AE0A7AA489, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0029:
	{
		// m_CameraMaterial = CreateCameraMaterial(shaderName);
		String_t* L_4 = V_0;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_5 = Provider_CreateCameraMaterial_mE1F6AD1B1D9F9BA80FE1B8DB3138262545FC018C(__this, L_4, /*hidden argument*/NULL);
		__this->set_m_CameraMaterial_4(L_5);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem_ARKitProvider::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider__cctor_m5E0C0C35D2142E8245D1F9356789DB22A7E01B16 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitProvider__cctor_m5E0C0C35D2142E8245D1F9356789DB22A7E01B16_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly int k_TextureYPropertyNameId = Shader.PropertyToID(k_TextureYPropertyName);
		int32_t L_0 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral64B5C8CA3DBCCD4684E840D0AB3E6C8D55ACA47A, /*hidden argument*/NULL);
		((ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252_StaticFields*)il2cpp_codegen_static_fields_for(ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252_il2cpp_TypeInfo_var))->set_k_TextureYPropertyNameId_0(L_0);
		// static readonly int k_TextureCbCrPropertyNameId = Shader.PropertyToID(k_TextureCbCrPropertyName);
		int32_t L_1 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral3316E29454B30FF00FD499D58FB9EB6E3D6D4A62, /*hidden argument*/NULL);
		((ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252_StaticFields*)il2cpp_codegen_static_fields_for(ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252_il2cpp_TypeInfo_var))->set_k_TextureCbCrPropertyNameId_1(L_1);
		// static readonly List<string> k_LegacyRPEnabledMaterialKeywords = null;
		((ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252_StaticFields*)il2cpp_codegen_static_fields_for(ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252_il2cpp_TypeInfo_var))->set_k_LegacyRPEnabledMaterialKeywords_2((List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)NULL);
		// static readonly List<string> k_LegacyRPDisabledMaterialKeywords = new List<string>() {k_BackgroundShaderKeywordLWRP, k_BackgroundShaderKeywordURP};
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_2 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_2, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_3 = L_2;
		NullCheck(L_3);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_3, _stringLiteral8710D8B4E16855F019CB68A747E4078E34957226, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_4 = L_3;
		NullCheck(L_4);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_4, _stringLiteral34DB7C411D03036F0D06F00351078A370EA0A603, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		((ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252_StaticFields*)il2cpp_codegen_static_fields_for(ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252_il2cpp_TypeInfo_var))->set_k_LegacyRPDisabledMaterialKeywords_3(L_4);
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
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem_NativeApi::UnityARKit_Camera_Construct(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_Camera_Construct_m85F5550F4DF7C866799A325444B1DA96A2F41265 (int32_t ___textureYPropertyNameId0, int32_t ___textureCbCrPropertyNameId1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_Camera_Construct)(___textureYPropertyNameId0, ___textureCbCrPropertyNameId1);

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARKit.ARKitEnvironmentProbeSubsystem_ARKitProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider__ctor_m6C97688B42AECCD0E058FB51620C2E4EEB99036F (ARKitProvider_tBED347A85C19012D5B5F124BC8C0FB4876FBEACC * __this, const RuntimeMethod* method)
{
	{
		// public ARKitProvider() => EnvironmentProbeApi.UnityARKit_EnvironmentProbeProvider_Construct();
		Provider__ctor_m82E278812C6826F3F89A708912491AB72058B700(__this, /*hidden argument*/NULL);
		// public ARKitProvider() => EnvironmentProbeApi.UnityARKit_EnvironmentProbeProvider_Construct();
		EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_Construct_m5D69AFAA42866A78CC2B64C4457F3612E0627B46(/*hidden argument*/NULL);
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
// System.Void UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem_ARKitProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider__ctor_m198D1679A046665B536D0C0DB3C44EA2CF3ED873 (ARKitProvider_t6838013201F7369104C65DD65159D910B116E8AC * __this, const RuntimeMethod* method)
{
	{
		Provider__ctor_mE0C779A245EE703B26578F529ABFD6F18E002AC0(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.XR.ARKit.ARKitParticipantSubsystem_ARKitProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider__ctor_m510B59F9D3480352F7D8899E40BE87B8FC583826 (ARKitProvider_t9908B32D1E5398BA2FD0D825E9343F8CA0277B4C * __this, const RuntimeMethod* method)
{
	{
		// public ARKitProvider() => m_Ptr = UnityARKit_Participant_init();
		Provider__ctor_m29C158581A2B8BF6DE3F03DDACC1A2F8FFB1F875(__this, /*hidden argument*/NULL);
		// public ARKitProvider() => m_Ptr = UnityARKit_Participant_init();
		intptr_t L_0 = ARKitProvider_UnityARKit_Participant_init_m439EC3BAB13C15A4AFB8FDEDD7AFF2999C15AFEB(/*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)L_0);
		return;
	}
}
// System.IntPtr UnityEngine.XR.ARKit.ARKitParticipantSubsystem_ARKitProvider::UnityARKit_Participant_init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ARKitProvider_UnityARKit_Participant_init_m439EC3BAB13C15A4AFB8FDEDD7AFF2999C15AFEB (const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_Participant_init)();

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARKit.ARKitRaycastSubsystem_ARKitProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider__ctor_m76C5B622A280F613E72CBBC3810EF1C15824EBA3 (ARKitProvider_t3FB2A65F0CF8BCD91C4CC54F3841159E7F7DAA88 * __this, const RuntimeMethod* method)
{
	{
		Provider__ctor_m58E4226B4157880E60C02C82B5FB24D9760EA94F(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem_ARKitProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider__ctor_mE42CA077B10BF3503A265E7AFD2E618725AD42D2 (ARKitProvider_t9AF751FC81DD6B052A462DBB30F46C946CE9E7CF * __this, const RuntimeMethod* method)
{
	{
		// public ARKitProvider() => NativeApi.UnityARKit_session_construct();
		Provider__ctor_m921D9E5D94AB32804689C972E36ECA2601BB2AAE(__this, /*hidden argument*/NULL);
		// public ARKitProvider() => NativeApi.UnityARKit_session_construct();
		NativeApi_UnityARKit_session_construct_mCB2A3B83E19DEAC1CE8ED24607067B9B28AFB87C(/*hidden argument*/NULL);
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
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem_NativeApi::UnityARKit_session_construct()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_session_construct_mCB2A3B83E19DEAC1CE8ED24607067B9B28AFB87C (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_session_construct)();

}
// System.Boolean UnityEngine.XR.ARKit.ARKitSessionSubsystem_NativeApi::UnityARKit_session_getCollaborationSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityARKit_session_getCollaborationSupported_m67EEDFFC65BEB3CCFD0F1F7250CD60F3F60FF3E5 (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_session_getCollaborationSupported)();

	return static_cast<bool>(returnValue);
}
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem_NativeApi::UnityARKit_ensureRootViewIsSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_ensureRootViewIsSetup_m8D42C5AE23A0865BB621C7298CD46529D1D8F971 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_ensureRootViewIsSetup)();

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARKit.ARKitXRDepthSubsystem_ARKitProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider__ctor_mA12162D27C7B8FF0D22C9F79C59E24BE9EA4FF1C (ARKitProvider_tC6BBA25F076F6D64FA8E6336E6860D7DBD41A7A1 * __this, const RuntimeMethod* method)
{
	{
		Provider__ctor_m1A368071CFCB91BC39B9760441A777FE20F86A57(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem_ARKitProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider__ctor_m9A88CE1D87E7A82F6169551F3DFBE8D3EE9A5352 (ARKitProvider_tF9F620C89E671C028D10768C5300D3539661A2C1 * __this, const RuntimeMethod* method)
{
	{
		Provider__ctor_mDEDB208301BBA3CC96FFF2DA6AC90F5D241CE524(__this, /*hidden argument*/NULL);
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
// System.Boolean UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem_NativeApi::UnityARKit_planes_SupportsClassification()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityARKit_planes_SupportsClassification_m485C4562C5342962A68D0B163559017BEAEA0B4B (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_planes_SupportsClassification)();

	return static_cast<bool>(returnValue);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnAsyncConversionCompleteDelegate_tFE6205610918E7A87E7867F879A863FD2FE8ECDF (OnAsyncConversionCompleteDelegate_tFE6205610918E7A87E7867F879A863FD2FE8ECDF * __this, int32_t ___status0, int32_t ___worldMapId1, intptr_t ___context2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, int32_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___status0, ___worldMapId1, ___context2);

}
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem_NativeApi_OnAsyncConversionCompleteDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnAsyncConversionCompleteDelegate__ctor_m7CA5713A91DE5942CF727FBB3C771DDE3D563DCD (OnAsyncConversionCompleteDelegate_tFE6205610918E7A87E7867F879A863FD2FE8ECDF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem_NativeApi_OnAsyncConversionCompleteDelegate::Invoke(UnityEngine.XR.ARKit.ARWorldMapRequestStatus,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnAsyncConversionCompleteDelegate_Invoke_mFDF0A548B044CCCEF78EAD7A1900E796FEF85157 (OnAsyncConversionCompleteDelegate_tFE6205610918E7A87E7867F879A863FD2FE8ECDF * __this, int32_t ___status0, int32_t ___worldMapId1, intptr_t ___context2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___status0, ___worldMapId1, ___context2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___status0, ___worldMapId1, ___context2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< int32_t, int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___status0, ___worldMapId1, ___context2);
					else
						GenericVirtActionInvoker3< int32_t, int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___status0, ___worldMapId1, ___context2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< int32_t, int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___status0, ___worldMapId1, ___context2);
					else
						VirtActionInvoker3< int32_t, int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___status0, ___worldMapId1, ___context2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___status0) - 1), ___worldMapId1, ___context2, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___status0) - 1), ___worldMapId1, ___context2, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, int32_t, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___status0, ___worldMapId1, ___context2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.ARKit.ARKitSessionSubsystem_NativeApi_OnAsyncConversionCompleteDelegate::BeginInvoke(UnityEngine.XR.ARKit.ARWorldMapRequestStatus,System.Int32,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnAsyncConversionCompleteDelegate_BeginInvoke_m1EC36D53A7DC1993A903531DB58DA3DE00A9B0FC (OnAsyncConversionCompleteDelegate_tFE6205610918E7A87E7867F879A863FD2FE8ECDF * __this, int32_t ___status0, int32_t ___worldMapId1, intptr_t ___context2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnAsyncConversionCompleteDelegate_BeginInvoke_m1EC36D53A7DC1993A903531DB58DA3DE00A9B0FC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(ARWorldMapRequestStatus_t9A2ABBA3D64593F57CCFC959D7D294CE5E54E73C_il2cpp_TypeInfo_var, &___status0);
	__d_args[1] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___worldMapId1);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___context2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem_NativeApi_OnAsyncConversionCompleteDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnAsyncConversionCompleteDelegate_EndInvoke_m466A0B7C15378A687F6A112044253752C9D887B9 (OnAsyncConversionCompleteDelegate_tFE6205610918E7A87E7867F879A863FD2FE8ECDF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_mCB169DF169C36D9D12651785DCBF71ABCC10FD9D_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_m22F8F6D7511C66B0B2240DABFBA9A38D01C8A31F_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsTrackableAttachments_m0B0516A50FFA22C3F60483E3498DC6BB1D460995_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsTrackableAttachments { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_id_m768994793A205C7D5CE603B354D350A34D47720D_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_implementationType_m4CC13E5510FAE9BDD9D8E126A796C6D5E05E558D_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type implementationType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CimplementationTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsAverageBrightness_mC20A88BD3C8D137A1F34888C64DC5FFF37787759_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsAverageBrightness { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsAverageBrightnessU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsAverageColorTemperature_m77727C8CBAB59D0D078B0A634EB0A56F1BF368E4_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsAverageColorTemperature { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsAverageColorTemperatureU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsColorCorrection_m1CBB9181A21D2A964705AD5E22F78735DCFE2C01_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsColorCorrection { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsColorCorrectionU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsDisplayMatrix_m2E11C0B7442273252613BDB41BB8B6F02698FBEA_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsDisplayMatrix { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsDisplayMatrixU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsProjectionMatrix_mFC886F8859FDF308D7980935474AA0E66ECF66B4_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsProjectionMatrix { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsProjectionMatrixU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsTimestamp_mAA6157EC368F6358F155571E257A578729D368D4_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsTimestamp { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsTimestampU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsCameraConfigurations_mD0F431DDAB4F82DDC6E35AB7583572D25244E0F0_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsCameraConfigurations { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsCameraConfigurationsU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsCameraImage_m2140EBB7ACEA9B1634F56DE2DCB85F26CB8C4D7D_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsCameraImage { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsCameraImageU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsAverageIntensityInLumens_m49462C178EF35B3E688EE6711FD3E41E9C1976AB_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsAverageIntensityInLumens { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsAverageIntensityInLumensU3Ek__BackingField_10(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsFocusModes_m2F70E7EFC54E2F930DEA28DC4922125E01FE3026_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsFocusModes { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsFocusModesU3Ek__BackingField_11(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_id_m5C48BD3E879410D5C622BE7DC74D5C798E151731_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_implementationType_m46EACEC5C1BCC55A1647EE8161074E1D1EEC32B0_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type implementationType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CimplementationTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_supportsManualPlacement_m2D1156DE760E47CBDDC345AD5CAE5D23AC23E524_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsManualPlacement { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsManualPlacementU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_supportsRemovalOfManual_m01CE117FEA37EE9BEF79903754E396C35B859419_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsRemovalOfManual { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsRemovalOfManualU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_supportsAutomaticPlacement_mC4DBFBBD4DBB44D6B1154C4759A3175F9AC33D46_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsAutomaticPlacement { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsAutomaticPlacementU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_supportsRemovalOfAutomatic_m6FCC1E3ACDC01E4447E385A1B89C96DEE16B7EF2_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsRemovalOfAutomatic { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsRemovalOfAutomaticU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_supportsEnvironmentTexture_mE30B73C6AC37C6DF8F5B7DBDBC90A975A498D3E4_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsEnvironmentTexture { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsEnvironmentTextureU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_supportsEnvironmentTextureHDR_mA465A23A4DC052895F8F634892B7C8E3A49F4777_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsEnvironmentTextureHDR { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsEnvironmentTextureHDRU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m57970CF355AB638BAD860B9673F0E76B42126C1A_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_m585F6DF7C070965F732F3A4C5B6BF11A4D2DF23F_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsMovingImages_m04BB57385FC0A2025414437DB1BEFBE97372E579_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsMovingImages { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsMovingImagesU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsMutableLibrary_m434D9A05D0025989AA711BA50139FD348D127661_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsMutableLibrary { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsMutableLibraryU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_requiresPhysicalImageDimensions_mC794914720C62ACB74173F165B3015ED9B5CA2A6_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool requiresPhysicalImageDimensions { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m0CB4DA3E552ED7940FBA88D8EE3BB6379EA255D6_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_mC2EE8A4B5C263D087B8F3924118EDFAB62CE0035_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsViewportBasedRaycast_mCF77DEFDDC3931682A33A063DF2F25FFBF07B807_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsViewportBasedRaycast { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsViewportBasedRaycastU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsWorldBasedRaycast_m74BF70E612BCAFAD380C108700905E5B8C5425FA_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsWorldBasedRaycast { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsWorldBasedRaycastU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportedTrackableTypes_mABC320F641164FC1DB2AB9DB3F1E075B6235A785_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public TrackableType supportedTrackableTypes { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CsupportedTrackableTypesU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m6A2CAB13FAD54AB05458DC5DE1FAB5C651E9D656_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_mEFA8A5F68BEA841ED51B8D17DAF2E933BA7893EC_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemImplementationTypeU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsInstall_m05EE61C58E505A8F20DEA68862395341F1DAD3FD_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsInstall { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsInstallU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsMatchFrameRate_m9CB328CEF43BCE3E59F26A97D32AEE1D201F8787_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsMatchFrameRate { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsMatchFrameRateU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m940361693A3C925B2180733D87611B5FDF0357D7_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_mCCF96D0DFB6DB4F146EA74D30E45A2230791D09F_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsHorizontalPlaneDetection_mBC9B4572592B71328A96AF58DEB047528470C440_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsHorizontalPlaneDetection { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsVerticalPlaneDetection_mFF310EF7B9F8D9C9F9689CF9D1D2BEDDFF93F9F0_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsVerticalPlaneDetection { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsArbitraryPlaneDetection_m70B1D6D27946FB12BF0D3D3AF8C6DC8DC3F399B9_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsArbitraryPlaneDetection { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsBoundaryVertices_mC6F86EB28D38CC483AD8F9FD161013BDE3F4AFEF_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsBoundaryVertices { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsBoundaryVerticesU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsClassification_mA3B11D7CA4F960C89E729E5161AD7CC3211B933C_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsClassification { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsClassificationU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ARWorldMap_get_nativeHandle_m26CA181591D8E7863F4274AF93319497EC8CC86F_inline (ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 * __this, const RuntimeMethod* method)
{
	{
		// internal int nativeHandle { get; private set; }
		int32_t L_0 = __this->get_U3CnativeHandleU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ARWorldMap_set_nativeHandle_mEAB7C65A965E0F40860B613E3190B2E59FE4D083_inline (ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// internal int nativeHandle { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CnativeHandleU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t OSVersion_get_major_m8CB549CF1D240126F149CCC743578554CE0BD876_inline (OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C * __this, const RuntimeMethod* method)
{
	{
		// public int major { get; private set; }
		int32_t L_0 = __this->get_U3CmajorU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OSVersion_set_major_m4A65C7E202EA28826622D745685F6904E5824889_inline (OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int major { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CmajorU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t OSVersion_get_minor_m32CB9CEC2DBF2512669C8A02640FDF7EA602E0EB_inline (OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C * __this, const RuntimeMethod* method)
{
	{
		// public int minor { get; private set; }
		int32_t L_0 = __this->get_U3CminorU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OSVersion_set_minor_mA36649E5CBFD2B33370BF09DC2021A7FCF920AB0_inline (OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int minor { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CminorU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t OSVersion_get_point_m008AC01380A6C4C69491DC68AC7AC7724452A422_inline (OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C * __this, const RuntimeMethod* method)
{
	{
		// public int point { get; private set; }
		int32_t L_0 = __this->get_U3CpointU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OSVersion_set_point_m244CD91F1FC6D586290700F375AE02843FB9A1FF_inline (OSVersion_t2CC75C0F154131C42D64F50A2CBDF84858C2234C * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int point { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CpointU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
