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

// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem
struct XRAnchorSubsystem_t625D9B76C590AB601CF85525DB9396BE84425AA7;
// UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor
struct XRAnchorSubsystemDescriptor_t3BD7F9922EF5C04185D59349C76D625BC1E44E3B;
// UnityEngine.XR.ARSubsystems.XRCameraSubsystem
struct XRCameraSubsystem_t3B32F6EA8A2E4D23AF240B5D21C34759D2613AC9;
// UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor
struct XRCameraSubsystemDescriptor_t1F8A45C69031E2981B1863518C43793D26E2C5E5;
// UnityEngine.XR.ARSubsystems.XRDepthSubsystem
struct XRDepthSubsystem_t808E21F0192095B08FA03AC535314FB5EF3B7E28;
// UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor
struct XRDepthSubsystemDescriptor_t745DBB7D313FB52F756E0B7AA993FBBC26B412C2;
// UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem
struct XREnvironmentProbeSubsystem_t0C60258F565400E7C5AF0E0B7FA933F2BCF83CB6;
// UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemDescriptor
struct XREnvironmentProbeSubsystemDescriptor_t7C10519F545418330347AC7434FBB10F39DD4243;
// UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem
struct XRImageTrackingSubsystem_tBC68AD21C11D8D67F3343844E129DF505FF705CE;
// UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor
struct XRImageTrackingSubsystemDescriptor_t3EC191739B144A8AA00CEEE03E8F7FF01D7F833B;
// UnityEngine.XR.ARSubsystems.XRParticipantSubsystem
struct XRParticipantSubsystem_t7F710E46FC5A17967E7CAE126DE9443C752C36FC;
// UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor
struct XRParticipantSubsystemDescriptor_t533EE70DC8D4B105B9C87B76D35A7D59A84BCA55;
// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem
struct XRPlaneSubsystem_t7C76F9D2C993B0DC38F0A7CDCE745EA7C12417EE;
// UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor
struct XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483;
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem
struct XRRaycastSubsystem_t62FDAC9AA1BD44C4557AEE3FEF3D2FA24C71B6B8;
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor
struct XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor
struct XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C;
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
// UnityEngine.SubsystemDescriptor`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem>
struct SubsystemDescriptor_1_t1B39B5E0AF8967BDFDB7AB2E24CAC5C7CE844E7B;
// UnityEngine.SubsystemDescriptor`1<UnityEngine.XR.ARSubsystems.XRCameraSubsystem>
struct SubsystemDescriptor_1_tD23817903F0AE45B2D3364EE5946F568184F16E8;
// UnityEngine.SubsystemDescriptor`1<UnityEngine.XR.ARSubsystems.XRDepthSubsystem>
struct SubsystemDescriptor_1_t80188B5E99E9226AAD0C7F8273B6FB9E53A3A218;
// UnityEngine.SubsystemDescriptor`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem>
struct SubsystemDescriptor_1_tA69344ACE2FE4534315650B09A593E1104FBA931;
// UnityEngine.SubsystemDescriptor`1<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem>
struct SubsystemDescriptor_1_t1E17EF75CB689C8F44A8CF6AB526DFE9B9B01F3E;
// UnityEngine.SubsystemDescriptor`1<UnityEngine.XR.ARSubsystems.XRParticipantSubsystem>
struct SubsystemDescriptor_1_t550AF205EAE09F8DA1695E2A0033AF1EDC15CF52;
// UnityEngine.SubsystemDescriptor`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem>
struct SubsystemDescriptor_1_tDD9F3B9DD9A97D1932BE6AD7B5DD4A481D0705D3;
// UnityEngine.SubsystemDescriptor`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem>
struct SubsystemDescriptor_1_t9948AD707A9DAB64C5731F571F3CDC1B6D681E36;
// UnityEngine.SubsystemDescriptor`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>
struct SubsystemDescriptor_1_t5B94A32628776E4C0AECB3BC294482BFB2D3EFF5;
// UnityEngine.SubsystemDescriptor`1<System.Object>
struct SubsystemDescriptor_1_tEA7E5F11DBF319514A9F77C9765671DF1A3C8A7A;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor>
struct TrackingSubsystem_2_tD21DB8BFE8C3B02D3C756C096FECE71DD0214B9E;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>
struct TrackingSubsystem_2_t940E220E7BF619735AEB4307D08C2B732FD50F17;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRAnchor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor>
struct TrackingSubsystem_2_t020D3F075CB29EC7CC963289203B6620C36C670D;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRAnchor,System.Object>
struct TrackingSubsystem_2_tF79BBAD8B9196143398CDA4B5824261B5546A012;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XREnvironmentProbe,UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemDescriptor>
struct TrackingSubsystem_2_t635B13DDDEED6B25BD720BEFCE637E975A541238;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XREnvironmentProbe,System.Object>
struct TrackingSubsystem_2_t996FDA9D3A93102756CBF57E7B9AA9502F185EBB;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRParticipant,UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor>
struct TrackingSubsystem_2_tD427C3B655A8844B9C7731EF2F22DE6D47A37D93;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRParticipant,System.Object>
struct TrackingSubsystem_2_tEF849A9635045F125E491A8548A9C02EDF83A21B;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRPointCloud,UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor>
struct TrackingSubsystem_2_t79FA04791F70D13E9BCAD481CA4A88948F7A0E39;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>
struct TrackingSubsystem_2_tE5DCDA2AE4A2A8726923CF4B64E99A303DF95F36;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor>
struct TrackingSubsystem_2_t8BA756796BBE751160DDDD56AEB0F699FAD7040A;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>
struct TrackingSubsystem_2_t08B895827D14FBF9A65858E5EE23626AF78A0EE8;
// UnityEngine.XR.ARSubsystems.XRSubsystem`1<UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor>
struct XRSubsystem_1_t77A771327651FFF6C71014361B92282768BA67E5;
// UnityEngine.XR.ARSubsystems.XRSubsystem`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor>
struct XRSubsystem_1_tC5B08F644C4FBD76D4093D31038E7355038626ED;
// UnityEngine.XR.ARSubsystems.XRSubsystem`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>
struct XRSubsystem_1_t0F35293BB968891335B58BEFE3611D582FBB1A83;
// UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>
struct XRSubsystem_1_t0D417187FDCF789EDE0281B8F58F253830047A93;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.Shader
struct Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String
struct String_t;
// UnityEngine.SubsystemDescriptor
struct SubsystemDescriptor_tF663011CB44AB1D342821BBEF7B6811E799A7245;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlaneAlignment_t1BB7048E3969913434FB1B3BCBCA2E81D4E71ADA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlaneClassification_tAC2E2E9609D4396BC311E2987CA3EFA5115EDD10_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemRegistration_tC119E4E15B2EA84DE58F44840EBED3221FF8CFF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextureFormat_tBED5388A0445FE978F97B41D247275B036407932_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackingState_tB6996ED0D52D2A17DFACC90800705B81D370FC38_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRAnchorSubsystemDescriptor_t3BD7F9922EF5C04185D59349C76D625BC1E44E3B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRCameraSubsystemDescriptor_t1F8A45C69031E2981B1863518C43793D26E2C5E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRDepthSubsystemDescriptor_t745DBB7D313FB52F756E0B7AA993FBBC26B412C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XREnvironmentProbeSubsystemDescriptor_t7C10519F545418330347AC7434FBB10F39DD4243_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRImageTrackingSubsystemDescriptor_t3EC191739B144A8AA00CEEE03E8F7FF01D7F833B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral40C3754113912BBB2324B9A85745EAD27C43B49F;
IL2CPP_EXTERN_C String_t* _stringLiteral489BDF1FA9922AB5F829F5BE893907E419364DF4;
IL2CPP_EXTERN_C String_t* _stringLiteral5845E8DEE033062F8F4F5EAA72A635E5E10F19CA;
IL2CPP_EXTERN_C String_t* _stringLiteral67C8FE59E36A25FD95779FB7535B566AF7F8421C;
IL2CPP_EXTERN_C String_t* _stringLiteral704C51A0DAD6B36AE5557F6EC82739898E4BFB61;
IL2CPP_EXTERN_C String_t* _stringLiteral73B1EF85B3661969EA06515B1FAB6B1BECBB653C;
IL2CPP_EXTERN_C String_t* _stringLiteral9C218D85033674A6CD055D7A80DEFAD4B22CBEE5;
IL2CPP_EXTERN_C String_t* _stringLiteralB19032E635CE920B302296D3885543D1639CB459;
IL2CPP_EXTERN_C String_t* _stringLiteralB51DF98769C686D20D8FAD7C8DB324505A9CB947;
IL2CPP_EXTERN_C String_t* _stringLiteralC349A055609266F6B553D56321C8E2A497321AD6;
IL2CPP_EXTERN_C String_t* _stringLiteralCD0C03FFF40E6F1D242821369D83EC4658F16D35;
IL2CPP_EXTERN_C String_t* _stringLiteralD7D10F5EBD63494DC1C7F8C9033E7A490800B3AF;
IL2CPP_EXTERN_C String_t* _stringLiteralF20EFFC62AFBE813D48D4D9EAF1FF59EFA14655F;
IL2CPP_EXTERN_C String_t* _stringLiteralFA10375A40434912E9F0AA072CD9AA78FF37EB6D;
IL2CPP_EXTERN_C String_t* _stringLiteralFB004ECFD7B1E474B835B2C92DC67B54C8CA4AE8;
IL2CPP_EXTERN_C String_t* _stringLiteralFBAF124AB08242B7785EC2B6DBC3C6459CB98BC8;
IL2CPP_EXTERN_C String_t* _stringLiteralFDA1C52D0E58360F4E8FD608757CCD98D8772D4F;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_CreateCameraMaterial_mE1F6AD1B1D9F9BA80FE1B8DB3138262545FC018C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemDescriptor_1__ctor_m0502A4C077984C324C39098B7089F53FACA8B7AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemDescriptor_1__ctor_m0FD0613029640C938D9881C5630E266DC813CFE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemDescriptor_1__ctor_m1B67A65E4C28F251DEDFA25E7EA6C3FF4E529507_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemDescriptor_1__ctor_m6E6F9AC5921DE7AD866C280B4E74E441E268DE04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemDescriptor_1__ctor_m75055823F16B584D798074D8822646B3C5C68CBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemDescriptor_1__ctor_m7A44244C7A90CD4A823CBB36954E2375C2654C91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemDescriptor_1__ctor_mBC4926247F341770CDFAF419AD59814540B046EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemDescriptor_1__ctor_mC887CD5056B890F34245A52118EF295EFB9CD439_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemDescriptor_1__ctor_mC8F5D95506044FF67424F74B96A546F08E0D4CFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackingSubsystem_2__ctor_m4298DC3177831515B6413B51E917734028B41370_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackingSubsystem_2__ctor_m8336CFFF4DD799960F5EA7267E5894C55260A572_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackingSubsystem_2__ctor_m84D330B829E9FFE5FDC2B5AC8794FDE41A93B3C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackingSubsystem_2__ctor_m8952C59F525DF242980CCBB79C55BF52E0E2DB24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackingSubsystem_2__ctor_mE513BC3982486DF0187321C5B7A8E0A1603C2649_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackingSubsystem_2__ctor_mF413F42B86FC1EDF7E1AE4C13AA81920BC9AF4CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRCameraSubsystemDescriptor_Create_mEC826CD90D35D17847339952F5022081EF871033_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XREnvironmentProbeSubsystemDescriptor_Create_m64B177418E0330A718E4461D29A11FE8518BB09E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRSubsystem_1__ctor_m02A65B932C7EE395D07D62DAD0B74D71DA9504D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRSubsystem_1__ctor_m188E5D20AA4A1BC11010A5511021C48494A36FBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRSubsystem_1__ctor_mF1BDC658BE98B8AD0178C3A695732FD3DD5C2929_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* XRCameraSubsystem_t3B32F6EA8A2E4D23AF240B5D21C34759D2613AC9_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* XREnvironmentProbeSubsystem_t0C60258F565400E7C5AF0E0B7FA933F2BCF83CB6_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t BoundedPlane_Equals_m5B2E8A0932BC0242B51091CDDFED85901156A005_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BoundedPlane_ToString_m0A542F5D2CB72755643184989BE3B9E6899D731A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BoundedPlane__cctor_m8E99A66F7A4052C7C0C7CE3077F4172F3E196E17_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CameraImagePlaneCinfo_Equals_mA584B5FBAB613A1B7A83B1C0413089390EFFCBBD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CameraImagePlaneCinfo_Equals_mA63A2FC92BE0863CE255A5540AE12B6A32C31101_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CameraImagePlaneCinfo_ToString_m2B60D32513350E0AE53B003B7F3E94F75B3D86AD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Cinfo_Equals_m07BCEC0FF4D8C2A43AE850689AC5AA4FC0603DE8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Cinfo_Equals_m1C37149A7375CC94768E18102A1CB1AED3E3FF77_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Cinfo_Equals_m1FFC7731C8021381A825E2D56189CDCD1BC39FD1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Cinfo_Equals_m2D882FB6E58A034244EC05B2701C303C0763C3C1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Cinfo_Equals_m38EB24520E9273465E918F9F14D72FCE8EE4EB8B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Cinfo_Equals_m515E1A8509A7C1472469FD535B7CBE5D58E45A78_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Cinfo_Equals_m560240A9ABB2B3E0C71D2EF694812209060F7781_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Cinfo_Equals_m7D227238D404DAA7ED5C72A9C3843FE6CB852ED4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Cinfo_Equals_m8E52493318DDE5F675E85E0733F5F7CCDA3C8339_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Cinfo_Equals_m96B4DD943D8AAA5D31B0B5BCD0EEC1F94E60F146_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Cinfo_Equals_m997D9E2FAF1A57953B2A2C95A4221C9EB82843BC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Cinfo_Equals_mFDD42918C99F796C9737C544D9858098C0241716_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Cinfo_GetHashCode_m52D192E832A52B87FB2F03DB84EB47EED7DCD48C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Cinfo_GetHashCode_m8DB95DB86F786705B32382E014B3A5B96F81F4B0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Cinfo_GetHashCode_mBBEF5C69D3B91763153EDE624C76AC428ECFABB1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Cinfo_GetHashCode_mE07F77F64788F12838A7D8A20E07DE366DDAEEEA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Cinfo_ToString_m5E549199F8D40CF630BB8ED6B46EC5F51E580BEB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider_CreateCameraMaterial_mE1F6AD1B1D9F9BA80FE1B8DB3138262545FC018C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableId_Equals_mA542615B3B7AAD52AEBBEFBCE7E6987B2DE3849D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableId_ToString_mCD45FD4FF5DF6DE30A38AD05D02CFA7B2B696BB1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableId__cctor_m1B22B00F74C0C62B97D7EAB4E9B17F55B2DE94E7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableId_get_invalidId_m06B698EFFA7748E185299C72B5CEC1AA5B221F85Unity_XR_ARSubsystems_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableId_get_invalidId_m06B698EFFA7748E185299C72B5CEC1AA5B221F85_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRAnchorSubsystemDescriptor_Create_m32C16A0DDC60ED2D374EFB884CF807E62B37C0A8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRAnchorSubsystemDescriptor__ctor_m5393EA2BCAFE2CB48EDD6DDCCD50C40FC7035331_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRAnchorSubsystem__ctor_mB5F70C2E39B5EA531C05244611590F400365265A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRAnchor_Equals_m8C35DEBDDAC21262E3344152D76539DF1AF7F060_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRAnchor__cctor_m101ABC03541DECF122E998C1C183D97FD34315F7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRCameraSubsystemCinfo_Equals_m8C071329439DF323FF57A936181A09F933886EAB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRCameraSubsystemCinfo_Equals_m8DA28DF625D849C92AE0770EBB43184C2CE4FEE4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRCameraSubsystemDescriptor_Create_mEC826CD90D35D17847339952F5022081EF871033_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRCameraSubsystemDescriptor__ctor_m3279B88FEF25A569F67987BDC39A0678B72D1CB6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRCameraSubsystem_Register_m8E9CD378020A98CC1728A5C0A3324D25439921F4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRCameraSubsystem__ctor_m9DB793A0291AEB063BE13955137FCF52B8A6E222_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRDepthSubsystemDescriptor_RegisterDescriptor_mB5908D568E8943B143747EDA81FF550FE2BB3A33_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRDepthSubsystemDescriptor__ctor_m8107883A37944FA3C8451BA4F8CF88B902BB56DD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRDepthSubsystem__ctor_mCD27ED98C0FCF9538A67023E02DDD4AFB3B04D86_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XREnvironmentProbeSubsystemCinfo_Equals_mE09A9486010D3E88E94AE06CF3BF499D3A2FC6EF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XREnvironmentProbeSubsystemDescriptor_Create_m64B177418E0330A718E4461D29A11FE8518BB09E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XREnvironmentProbeSubsystemDescriptor__ctor_m759C9A99C0F48E2422698CABD21C05A9F9E2ACB6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XREnvironmentProbeSubsystem_Register_m20EFD30E3B31DD3ED37EA42B6E465AFAE132EA37_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XREnvironmentProbeSubsystem__ctor_m72F971761AF7B66CBABFF9ABC8468A52406001A2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XREnvironmentProbe_Equals_m940DA5EE99C70171A86520CA30C33C0E778A15E7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XREnvironmentProbe_ToString_m68F8E47BA9E4040BF7352D68F61FB17177000009_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XREnvironmentProbe_ToString_mBF2604257F8CA6CE56C5D389E8D08339725B8B93_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XREnvironmentProbe__cctor_m44E1286FA9D3E1AD04BCE96FA2DDF5A808B5F0D7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRImageTrackingSubsystemDescriptor_Create_m3B9A00008CACA91AEC367F5D5EC19E57EA3D22A1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRImageTrackingSubsystemDescriptor__ctor_m2A19512EFC73A1237D84A4DFAB41683FB03D6D55_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRImageTrackingSubsystem__ctor_m411C7B39B354BFB6468A5450B91D63A46CAC3A52_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRParticipantSubsystemDescriptor__ctor_mF2C86E0FF1D8BF60D9467164B6E0654AE41B9D34_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRParticipantSubsystem__ctor_mC7EB236E3A4BBC45C055B94C26493FBB19DF4056_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRParticipant_Equals_mBA488A840ABD4DBB6432E2D03126062EC1A6768C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRParticipant__cctor_mBD235B2B36E92A66051E85204403C005DFAF9C96_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRPlaneSubsystemDescriptor_Create_mB69A44F54AB64DF4361D3C16AE48C2F1B474EA32_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRPlaneSubsystemDescriptor__ctor_mC8788AC7F6940BA1E88AE0277C1D099DD0EEB935_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRPlaneSubsystem__ctor_mDD4F1B44F90E2F50D3C78601413F01D05990B20C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRPointCloud_Equals_m7123CA7CBF03D2DDAEAFD63768A78A559B70D34A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRPointCloud_Equals_mFB272AE1F45D6A70C7E5C18D49E2ED7E2375AC0C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRPointCloud__cctor_m2491726ECECF7EBAD790AD20F7AAF000215186DB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRRaycastSubsystemDescriptor_RegisterDescriptor_mD9A0FD5846AA09D7D7D32A1093566607D0082ABA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRRaycastSubsystemDescriptor__ctor_m2185C8C50AB138A0C3B5165A92534E2E0D7D57A7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRRaycastSubsystem__ctor_m73E44C9109F84F8DFB603F6E480200EF0A62A15B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRSessionSubsystemDescriptor_RegisterDescriptor_m60DE0DD6782289BAD4D67D15E2361D1B7B71C262_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRSessionSubsystemDescriptor__ctor_mC3487128AC53B5697213AFF8B2F98F1C3288B3A7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRSessionSubsystem__ctor_m8485F39F339764D3FCA4FD0E1D77ADE16CAE1676_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRTextureDescriptor_Equals_m37D3AFD7E110F62E8977937DD66AC053B3F64C8D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRTextureDescriptor_ToString_m13E8A051346374949A95D217BBAAD298893A25EB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRTrackedImage_Equals_m953C1CFB9A3879975873D13E24071F51C772635A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRTrackedImage__cctor_mE7FFB610B77B6A729504D17C98C52C09522FDDEA_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t1A5F46CB58C39FA8C3A1BEF72944AB765466DF6C 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


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


// UnityEngine.SubsystemDescriptor
struct  SubsystemDescriptor_tF663011CB44AB1D342821BBEF7B6811E799A7245  : public RuntimeObject
{
public:
	// System.String UnityEngine.SubsystemDescriptor::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.SubsystemDescriptor::<subsystemImplementationType>k__BackingField
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SubsystemDescriptor_tF663011CB44AB1D342821BBEF7B6811E799A7245, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SubsystemDescriptor_tF663011CB44AB1D342821BBEF7B6811E799A7245, ___U3CsubsystemImplementationTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CsubsystemImplementationTypeU3Ek__BackingField_1() const { return ___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return &___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline void set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CsubsystemImplementationTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemImplementationTypeU3Ek__BackingField_1), (void*)value);
	}
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

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}
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


// System.Int64
struct  Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
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


// System.UInt64
struct  UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
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


// UnityEngine.Quaternion
struct  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
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


// UnityEngine.SubsystemDescriptor`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem>
struct  SubsystemDescriptor_1_t1B39B5E0AF8967BDFDB7AB2E24CAC5C7CE844E7B  : public SubsystemDescriptor_tF663011CB44AB1D342821BBEF7B6811E799A7245
{
public:

public:
};


// UnityEngine.SubsystemDescriptor`1<UnityEngine.XR.ARSubsystems.XRCameraSubsystem>
struct  SubsystemDescriptor_1_tD23817903F0AE45B2D3364EE5946F568184F16E8  : public SubsystemDescriptor_tF663011CB44AB1D342821BBEF7B6811E799A7245
{
public:

public:
};


// UnityEngine.SubsystemDescriptor`1<UnityEngine.XR.ARSubsystems.XRDepthSubsystem>
struct  SubsystemDescriptor_1_t80188B5E99E9226AAD0C7F8273B6FB9E53A3A218  : public SubsystemDescriptor_tF663011CB44AB1D342821BBEF7B6811E799A7245
{
public:

public:
};


// UnityEngine.SubsystemDescriptor`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem>
struct  SubsystemDescriptor_1_tA69344ACE2FE4534315650B09A593E1104FBA931  : public SubsystemDescriptor_tF663011CB44AB1D342821BBEF7B6811E799A7245
{
public:

public:
};


// UnityEngine.SubsystemDescriptor`1<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem>
struct  SubsystemDescriptor_1_t1E17EF75CB689C8F44A8CF6AB526DFE9B9B01F3E  : public SubsystemDescriptor_tF663011CB44AB1D342821BBEF7B6811E799A7245
{
public:

public:
};


// UnityEngine.SubsystemDescriptor`1<UnityEngine.XR.ARSubsystems.XRParticipantSubsystem>
struct  SubsystemDescriptor_1_t550AF205EAE09F8DA1695E2A0033AF1EDC15CF52  : public SubsystemDescriptor_tF663011CB44AB1D342821BBEF7B6811E799A7245
{
public:

public:
};


// UnityEngine.SubsystemDescriptor`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem>
struct  SubsystemDescriptor_1_tDD9F3B9DD9A97D1932BE6AD7B5DD4A481D0705D3  : public SubsystemDescriptor_tF663011CB44AB1D342821BBEF7B6811E799A7245
{
public:

public:
};


// UnityEngine.SubsystemDescriptor`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem>
struct  SubsystemDescriptor_1_t9948AD707A9DAB64C5731F571F3CDC1B6D681E36  : public SubsystemDescriptor_tF663011CB44AB1D342821BBEF7B6811E799A7245
{
public:

public:
};


// UnityEngine.SubsystemDescriptor`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>
struct  SubsystemDescriptor_1_t5B94A32628776E4C0AECB3BC294482BFB2D3EFF5  : public SubsystemDescriptor_tF663011CB44AB1D342821BBEF7B6811E799A7245
{
public:

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


// UnityEngine.Vector2
struct  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
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
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
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


// UnityEngine.XR.ARSubsystems.TrackableId
struct  TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B 
{
public:
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_1;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_2;

public:
	inline static int32_t get_offset_of_m_SubId1_1() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B, ___m_SubId1_1)); }
	inline uint64_t get_m_SubId1_1() const { return ___m_SubId1_1; }
	inline uint64_t* get_address_of_m_SubId1_1() { return &___m_SubId1_1; }
	inline void set_m_SubId1_1(uint64_t value)
	{
		___m_SubId1_1 = value;
	}

	inline static int32_t get_offset_of_m_SubId2_2() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B, ___m_SubId2_2)); }
	inline uint64_t get_m_SubId2_2() const { return ___m_SubId2_2; }
	inline uint64_t* get_address_of_m_SubId2_2() { return &___m_SubId2_2; }
	inline void set_m_SubId2_2(uint64_t value)
	{
		___m_SubId2_2 = value;
	}
};

struct TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___s_InvalidId_0;

public:
	inline static int32_t get_offset_of_s_InvalidId_0() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields, ___s_InvalidId_0)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_s_InvalidId_0() const { return ___s_InvalidId_0; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_s_InvalidId_0() { return &___s_InvalidId_0; }
	inline void set_s_InvalidId_0(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___s_InvalidId_0 = value;
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

// UnityEngine.Pose
struct  Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___rotation_1)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields, ___k_Identity_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___k_Identity_2 = value;
	}
};


// UnityEngine.TextureFormat
struct  TextureFormat_tBED5388A0445FE978F97B41D247275B036407932 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFormat_tBED5388A0445FE978F97B41D247275B036407932, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.PlaneAlignment
struct  PlaneAlignment_t1BB7048E3969913434FB1B3BCBCA2E81D4E71ADA 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.PlaneAlignment::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlaneAlignment_t1BB7048E3969913434FB1B3BCBCA2E81D4E71ADA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.PlaneClassification
struct  PlaneClassification_tAC2E2E9609D4396BC311E2987CA3EFA5115EDD10 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.PlaneClassification::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlaneClassification_tAC2E2E9609D4396BC311E2987CA3EFA5115EDD10, ___value___2)); }
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


// UnityEngine.XR.ARSubsystems.TrackingState
struct  TrackingState_tB6996ED0D52D2A17DFACC90800705B81D370FC38 
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


// UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor
struct  XRAnchorSubsystemDescriptor_t3BD7F9922EF5C04185D59349C76D625BC1E44E3B  : public SubsystemDescriptor_1_t1B39B5E0AF8967BDFDB7AB2E24CAC5C7CE844E7B
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor::<supportsTrackableAttachments>k__BackingField
	bool ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(XRAnchorSubsystemDescriptor_t3BD7F9922EF5C04185D59349C76D625BC1E44E3B, ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2)); }
	inline bool get_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2() const { return ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2() { return &___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2; }
	inline void set_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2(bool value)
	{
		___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImagePlaneCinfo
struct  CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 
{
public:
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImagePlaneCinfo::m_DataPtr
	intptr_t ___m_DataPtr_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImagePlaneCinfo::m_DataLength
	int32_t ___m_DataLength_1;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImagePlaneCinfo::m_RowStride
	int32_t ___m_RowStride_2;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImagePlaneCinfo::m_PixelStride
	int32_t ___m_PixelStride_3;

public:
	inline static int32_t get_offset_of_m_DataPtr_0() { return static_cast<int32_t>(offsetof(CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7, ___m_DataPtr_0)); }
	inline intptr_t get_m_DataPtr_0() const { return ___m_DataPtr_0; }
	inline intptr_t* get_address_of_m_DataPtr_0() { return &___m_DataPtr_0; }
	inline void set_m_DataPtr_0(intptr_t value)
	{
		___m_DataPtr_0 = value;
	}

	inline static int32_t get_offset_of_m_DataLength_1() { return static_cast<int32_t>(offsetof(CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7, ___m_DataLength_1)); }
	inline int32_t get_m_DataLength_1() const { return ___m_DataLength_1; }
	inline int32_t* get_address_of_m_DataLength_1() { return &___m_DataLength_1; }
	inline void set_m_DataLength_1(int32_t value)
	{
		___m_DataLength_1 = value;
	}

	inline static int32_t get_offset_of_m_RowStride_2() { return static_cast<int32_t>(offsetof(CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7, ___m_RowStride_2)); }
	inline int32_t get_m_RowStride_2() const { return ___m_RowStride_2; }
	inline int32_t* get_address_of_m_RowStride_2() { return &___m_RowStride_2; }
	inline void set_m_RowStride_2(int32_t value)
	{
		___m_RowStride_2 = value;
	}

	inline static int32_t get_offset_of_m_PixelStride_3() { return static_cast<int32_t>(offsetof(CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7, ___m_PixelStride_3)); }
	inline int32_t get_m_PixelStride_3() const { return ___m_PixelStride_3; }
	inline int32_t* get_address_of_m_PixelStride_3() { return &___m_PixelStride_3; }
	inline void set_m_PixelStride_3(int32_t value)
	{
		___m_PixelStride_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor
struct  XRCameraSubsystemDescriptor_t1F8A45C69031E2981B1863518C43793D26E2C5E5  : public SubsystemDescriptor_1_tD23817903F0AE45B2D3364EE5946F568184F16E8
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor::<supportsAverageBrightness>k__BackingField
	bool ___U3CsupportsAverageBrightnessU3Ek__BackingField_2;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor::<supportsAverageColorTemperature>k__BackingField
	bool ___U3CsupportsAverageColorTemperatureU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor::<supportsDisplayMatrix>k__BackingField
	bool ___U3CsupportsDisplayMatrixU3Ek__BackingField_4;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor::<supportsProjectionMatrix>k__BackingField
	bool ___U3CsupportsProjectionMatrixU3Ek__BackingField_5;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor::<supportsTimestamp>k__BackingField
	bool ___U3CsupportsTimestampU3Ek__BackingField_6;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor::<supportsCameraConfigurations>k__BackingField
	bool ___U3CsupportsCameraConfigurationsU3Ek__BackingField_7;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor::<supportsCameraImage>k__BackingField
	bool ___U3CsupportsCameraImageU3Ek__BackingField_8;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor::<supportsAverageIntensityInLumens>k__BackingField
	bool ___U3CsupportsAverageIntensityInLumensU3Ek__BackingField_9;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor::<supportsFocusModes>k__BackingField
	bool ___U3CsupportsFocusModesU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of_U3CsupportsAverageBrightnessU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(XRCameraSubsystemDescriptor_t1F8A45C69031E2981B1863518C43793D26E2C5E5, ___U3CsupportsAverageBrightnessU3Ek__BackingField_2)); }
	inline bool get_U3CsupportsAverageBrightnessU3Ek__BackingField_2() const { return ___U3CsupportsAverageBrightnessU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CsupportsAverageBrightnessU3Ek__BackingField_2() { return &___U3CsupportsAverageBrightnessU3Ek__BackingField_2; }
	inline void set_U3CsupportsAverageBrightnessU3Ek__BackingField_2(bool value)
	{
		___U3CsupportsAverageBrightnessU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsAverageColorTemperatureU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(XRCameraSubsystemDescriptor_t1F8A45C69031E2981B1863518C43793D26E2C5E5, ___U3CsupportsAverageColorTemperatureU3Ek__BackingField_3)); }
	inline bool get_U3CsupportsAverageColorTemperatureU3Ek__BackingField_3() const { return ___U3CsupportsAverageColorTemperatureU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CsupportsAverageColorTemperatureU3Ek__BackingField_3() { return &___U3CsupportsAverageColorTemperatureU3Ek__BackingField_3; }
	inline void set_U3CsupportsAverageColorTemperatureU3Ek__BackingField_3(bool value)
	{
		___U3CsupportsAverageColorTemperatureU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsDisplayMatrixU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(XRCameraSubsystemDescriptor_t1F8A45C69031E2981B1863518C43793D26E2C5E5, ___U3CsupportsDisplayMatrixU3Ek__BackingField_4)); }
	inline bool get_U3CsupportsDisplayMatrixU3Ek__BackingField_4() const { return ___U3CsupportsDisplayMatrixU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CsupportsDisplayMatrixU3Ek__BackingField_4() { return &___U3CsupportsDisplayMatrixU3Ek__BackingField_4; }
	inline void set_U3CsupportsDisplayMatrixU3Ek__BackingField_4(bool value)
	{
		___U3CsupportsDisplayMatrixU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsProjectionMatrixU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(XRCameraSubsystemDescriptor_t1F8A45C69031E2981B1863518C43793D26E2C5E5, ___U3CsupportsProjectionMatrixU3Ek__BackingField_5)); }
	inline bool get_U3CsupportsProjectionMatrixU3Ek__BackingField_5() const { return ___U3CsupportsProjectionMatrixU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CsupportsProjectionMatrixU3Ek__BackingField_5() { return &___U3CsupportsProjectionMatrixU3Ek__BackingField_5; }
	inline void set_U3CsupportsProjectionMatrixU3Ek__BackingField_5(bool value)
	{
		___U3CsupportsProjectionMatrixU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsTimestampU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(XRCameraSubsystemDescriptor_t1F8A45C69031E2981B1863518C43793D26E2C5E5, ___U3CsupportsTimestampU3Ek__BackingField_6)); }
	inline bool get_U3CsupportsTimestampU3Ek__BackingField_6() const { return ___U3CsupportsTimestampU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CsupportsTimestampU3Ek__BackingField_6() { return &___U3CsupportsTimestampU3Ek__BackingField_6; }
	inline void set_U3CsupportsTimestampU3Ek__BackingField_6(bool value)
	{
		___U3CsupportsTimestampU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsCameraConfigurationsU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(XRCameraSubsystemDescriptor_t1F8A45C69031E2981B1863518C43793D26E2C5E5, ___U3CsupportsCameraConfigurationsU3Ek__BackingField_7)); }
	inline bool get_U3CsupportsCameraConfigurationsU3Ek__BackingField_7() const { return ___U3CsupportsCameraConfigurationsU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CsupportsCameraConfigurationsU3Ek__BackingField_7() { return &___U3CsupportsCameraConfigurationsU3Ek__BackingField_7; }
	inline void set_U3CsupportsCameraConfigurationsU3Ek__BackingField_7(bool value)
	{
		___U3CsupportsCameraConfigurationsU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsCameraImageU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(XRCameraSubsystemDescriptor_t1F8A45C69031E2981B1863518C43793D26E2C5E5, ___U3CsupportsCameraImageU3Ek__BackingField_8)); }
	inline bool get_U3CsupportsCameraImageU3Ek__BackingField_8() const { return ___U3CsupportsCameraImageU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CsupportsCameraImageU3Ek__BackingField_8() { return &___U3CsupportsCameraImageU3Ek__BackingField_8; }
	inline void set_U3CsupportsCameraImageU3Ek__BackingField_8(bool value)
	{
		___U3CsupportsCameraImageU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsAverageIntensityInLumensU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(XRCameraSubsystemDescriptor_t1F8A45C69031E2981B1863518C43793D26E2C5E5, ___U3CsupportsAverageIntensityInLumensU3Ek__BackingField_9)); }
	inline bool get_U3CsupportsAverageIntensityInLumensU3Ek__BackingField_9() const { return ___U3CsupportsAverageIntensityInLumensU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CsupportsAverageIntensityInLumensU3Ek__BackingField_9() { return &___U3CsupportsAverageIntensityInLumensU3Ek__BackingField_9; }
	inline void set_U3CsupportsAverageIntensityInLumensU3Ek__BackingField_9(bool value)
	{
		___U3CsupportsAverageIntensityInLumensU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsFocusModesU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(XRCameraSubsystemDescriptor_t1F8A45C69031E2981B1863518C43793D26E2C5E5, ___U3CsupportsFocusModesU3Ek__BackingField_10)); }
	inline bool get_U3CsupportsFocusModesU3Ek__BackingField_10() const { return ___U3CsupportsFocusModesU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CsupportsFocusModesU3Ek__BackingField_10() { return &___U3CsupportsFocusModesU3Ek__BackingField_10; }
	inline void set_U3CsupportsFocusModesU3Ek__BackingField_10(bool value)
	{
		___U3CsupportsFocusModesU3Ek__BackingField_10 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor
struct  XRDepthSubsystemDescriptor_t745DBB7D313FB52F756E0B7AA993FBBC26B412C2  : public SubsystemDescriptor_1_t80188B5E99E9226AAD0C7F8273B6FB9E53A3A218
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor::<supportsFeaturePoints>k__BackingField
	bool ___U3CsupportsFeaturePointsU3Ek__BackingField_2;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor::<supportsUniqueIds>k__BackingField
	bool ___U3CsupportsUniqueIdsU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor::<supportsConfidence>k__BackingField
	bool ___U3CsupportsConfidenceU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CsupportsFeaturePointsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(XRDepthSubsystemDescriptor_t745DBB7D313FB52F756E0B7AA993FBBC26B412C2, ___U3CsupportsFeaturePointsU3Ek__BackingField_2)); }
	inline bool get_U3CsupportsFeaturePointsU3Ek__BackingField_2() const { return ___U3CsupportsFeaturePointsU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CsupportsFeaturePointsU3Ek__BackingField_2() { return &___U3CsupportsFeaturePointsU3Ek__BackingField_2; }
	inline void set_U3CsupportsFeaturePointsU3Ek__BackingField_2(bool value)
	{
		___U3CsupportsFeaturePointsU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsUniqueIdsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(XRDepthSubsystemDescriptor_t745DBB7D313FB52F756E0B7AA993FBBC26B412C2, ___U3CsupportsUniqueIdsU3Ek__BackingField_3)); }
	inline bool get_U3CsupportsUniqueIdsU3Ek__BackingField_3() const { return ___U3CsupportsUniqueIdsU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CsupportsUniqueIdsU3Ek__BackingField_3() { return &___U3CsupportsUniqueIdsU3Ek__BackingField_3; }
	inline void set_U3CsupportsUniqueIdsU3Ek__BackingField_3(bool value)
	{
		___U3CsupportsUniqueIdsU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsConfidenceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(XRDepthSubsystemDescriptor_t745DBB7D313FB52F756E0B7AA993FBBC26B412C2, ___U3CsupportsConfidenceU3Ek__BackingField_4)); }
	inline bool get_U3CsupportsConfidenceU3Ek__BackingField_4() const { return ___U3CsupportsConfidenceU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CsupportsConfidenceU3Ek__BackingField_4() { return &___U3CsupportsConfidenceU3Ek__BackingField_4; }
	inline void set_U3CsupportsConfidenceU3Ek__BackingField_4(bool value)
	{
		___U3CsupportsConfidenceU3Ek__BackingField_4 = value;
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


// UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemDescriptor
struct  XREnvironmentProbeSubsystemDescriptor_t7C10519F545418330347AC7434FBB10F39DD4243  : public SubsystemDescriptor_1_tA69344ACE2FE4534315650B09A593E1104FBA931
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemDescriptor::<supportsManualPlacement>k__BackingField
	bool ___U3CsupportsManualPlacementU3Ek__BackingField_2;
	// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemDescriptor::<supportsRemovalOfManual>k__BackingField
	bool ___U3CsupportsRemovalOfManualU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemDescriptor::<supportsAutomaticPlacement>k__BackingField
	bool ___U3CsupportsAutomaticPlacementU3Ek__BackingField_4;
	// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemDescriptor::<supportsRemovalOfAutomatic>k__BackingField
	bool ___U3CsupportsRemovalOfAutomaticU3Ek__BackingField_5;
	// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemDescriptor::<supportsEnvironmentTexture>k__BackingField
	bool ___U3CsupportsEnvironmentTextureU3Ek__BackingField_6;
	// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemDescriptor::<supportsEnvironmentTextureHDR>k__BackingField
	bool ___U3CsupportsEnvironmentTextureHDRU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CsupportsManualPlacementU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(XREnvironmentProbeSubsystemDescriptor_t7C10519F545418330347AC7434FBB10F39DD4243, ___U3CsupportsManualPlacementU3Ek__BackingField_2)); }
	inline bool get_U3CsupportsManualPlacementU3Ek__BackingField_2() const { return ___U3CsupportsManualPlacementU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CsupportsManualPlacementU3Ek__BackingField_2() { return &___U3CsupportsManualPlacementU3Ek__BackingField_2; }
	inline void set_U3CsupportsManualPlacementU3Ek__BackingField_2(bool value)
	{
		___U3CsupportsManualPlacementU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsRemovalOfManualU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(XREnvironmentProbeSubsystemDescriptor_t7C10519F545418330347AC7434FBB10F39DD4243, ___U3CsupportsRemovalOfManualU3Ek__BackingField_3)); }
	inline bool get_U3CsupportsRemovalOfManualU3Ek__BackingField_3() const { return ___U3CsupportsRemovalOfManualU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CsupportsRemovalOfManualU3Ek__BackingField_3() { return &___U3CsupportsRemovalOfManualU3Ek__BackingField_3; }
	inline void set_U3CsupportsRemovalOfManualU3Ek__BackingField_3(bool value)
	{
		___U3CsupportsRemovalOfManualU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsAutomaticPlacementU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(XREnvironmentProbeSubsystemDescriptor_t7C10519F545418330347AC7434FBB10F39DD4243, ___U3CsupportsAutomaticPlacementU3Ek__BackingField_4)); }
	inline bool get_U3CsupportsAutomaticPlacementU3Ek__BackingField_4() const { return ___U3CsupportsAutomaticPlacementU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CsupportsAutomaticPlacementU3Ek__BackingField_4() { return &___U3CsupportsAutomaticPlacementU3Ek__BackingField_4; }
	inline void set_U3CsupportsAutomaticPlacementU3Ek__BackingField_4(bool value)
	{
		___U3CsupportsAutomaticPlacementU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsRemovalOfAutomaticU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(XREnvironmentProbeSubsystemDescriptor_t7C10519F545418330347AC7434FBB10F39DD4243, ___U3CsupportsRemovalOfAutomaticU3Ek__BackingField_5)); }
	inline bool get_U3CsupportsRemovalOfAutomaticU3Ek__BackingField_5() const { return ___U3CsupportsRemovalOfAutomaticU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CsupportsRemovalOfAutomaticU3Ek__BackingField_5() { return &___U3CsupportsRemovalOfAutomaticU3Ek__BackingField_5; }
	inline void set_U3CsupportsRemovalOfAutomaticU3Ek__BackingField_5(bool value)
	{
		___U3CsupportsRemovalOfAutomaticU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsEnvironmentTextureU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(XREnvironmentProbeSubsystemDescriptor_t7C10519F545418330347AC7434FBB10F39DD4243, ___U3CsupportsEnvironmentTextureU3Ek__BackingField_6)); }
	inline bool get_U3CsupportsEnvironmentTextureU3Ek__BackingField_6() const { return ___U3CsupportsEnvironmentTextureU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CsupportsEnvironmentTextureU3Ek__BackingField_6() { return &___U3CsupportsEnvironmentTextureU3Ek__BackingField_6; }
	inline void set_U3CsupportsEnvironmentTextureU3Ek__BackingField_6(bool value)
	{
		___U3CsupportsEnvironmentTextureU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsEnvironmentTextureHDRU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(XREnvironmentProbeSubsystemDescriptor_t7C10519F545418330347AC7434FBB10F39DD4243, ___U3CsupportsEnvironmentTextureHDRU3Ek__BackingField_7)); }
	inline bool get_U3CsupportsEnvironmentTextureHDRU3Ek__BackingField_7() const { return ___U3CsupportsEnvironmentTextureHDRU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CsupportsEnvironmentTextureHDRU3Ek__BackingField_7() { return &___U3CsupportsEnvironmentTextureHDRU3Ek__BackingField_7; }
	inline void set_U3CsupportsEnvironmentTextureHDRU3Ek__BackingField_7(bool value)
	{
		___U3CsupportsEnvironmentTextureHDRU3Ek__BackingField_7 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor
struct  XRImageTrackingSubsystemDescriptor_t3EC191739B144A8AA00CEEE03E8F7FF01D7F833B  : public SubsystemDescriptor_1_t1E17EF75CB689C8F44A8CF6AB526DFE9B9B01F3E
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor::<supportsMovingImages>k__BackingField
	bool ___U3CsupportsMovingImagesU3Ek__BackingField_2;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor::<requiresPhysicalImageDimensions>k__BackingField
	bool ___U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor::<supportsMutableLibrary>k__BackingField
	bool ___U3CsupportsMutableLibraryU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CsupportsMovingImagesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(XRImageTrackingSubsystemDescriptor_t3EC191739B144A8AA00CEEE03E8F7FF01D7F833B, ___U3CsupportsMovingImagesU3Ek__BackingField_2)); }
	inline bool get_U3CsupportsMovingImagesU3Ek__BackingField_2() const { return ___U3CsupportsMovingImagesU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CsupportsMovingImagesU3Ek__BackingField_2() { return &___U3CsupportsMovingImagesU3Ek__BackingField_2; }
	inline void set_U3CsupportsMovingImagesU3Ek__BackingField_2(bool value)
	{
		___U3CsupportsMovingImagesU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(XRImageTrackingSubsystemDescriptor_t3EC191739B144A8AA00CEEE03E8F7FF01D7F833B, ___U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_3)); }
	inline bool get_U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_3() const { return ___U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_3() { return &___U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_3; }
	inline void set_U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_3(bool value)
	{
		___U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsMutableLibraryU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(XRImageTrackingSubsystemDescriptor_t3EC191739B144A8AA00CEEE03E8F7FF01D7F833B, ___U3CsupportsMutableLibraryU3Ek__BackingField_4)); }
	inline bool get_U3CsupportsMutableLibraryU3Ek__BackingField_4() const { return ___U3CsupportsMutableLibraryU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CsupportsMutableLibraryU3Ek__BackingField_4() { return &___U3CsupportsMutableLibraryU3Ek__BackingField_4; }
	inline void set_U3CsupportsMutableLibraryU3Ek__BackingField_4(bool value)
	{
		___U3CsupportsMutableLibraryU3Ek__BackingField_4 = value;
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


// UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor
struct  XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483  : public SubsystemDescriptor_1_tDD9F3B9DD9A97D1932BE6AD7B5DD4A481D0705D3
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::<supportsHorizontalPlaneDetection>k__BackingField
	bool ___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::<supportsVerticalPlaneDetection>k__BackingField
	bool ___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::<supportsArbitraryPlaneDetection>k__BackingField
	bool ___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::<supportsBoundaryVertices>k__BackingField
	bool ___U3CsupportsBoundaryVerticesU3Ek__BackingField_5;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::<supportsClassification>k__BackingField
	bool ___U3CsupportsClassificationU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483, ___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2)); }
	inline bool get_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2() const { return ___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2() { return &___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2; }
	inline void set_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2(bool value)
	{
		___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483, ___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3)); }
	inline bool get_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3() const { return ___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3() { return &___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3; }
	inline void set_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3(bool value)
	{
		___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483, ___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4)); }
	inline bool get_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4() const { return ___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4() { return &___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4; }
	inline void set_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4(bool value)
	{
		___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsBoundaryVerticesU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483, ___U3CsupportsBoundaryVerticesU3Ek__BackingField_5)); }
	inline bool get_U3CsupportsBoundaryVerticesU3Ek__BackingField_5() const { return ___U3CsupportsBoundaryVerticesU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CsupportsBoundaryVerticesU3Ek__BackingField_5() { return &___U3CsupportsBoundaryVerticesU3Ek__BackingField_5; }
	inline void set_U3CsupportsBoundaryVerticesU3Ek__BackingField_5(bool value)
	{
		___U3CsupportsBoundaryVerticesU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsClassificationU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483, ___U3CsupportsClassificationU3Ek__BackingField_6)); }
	inline bool get_U3CsupportsClassificationU3Ek__BackingField_6() const { return ___U3CsupportsClassificationU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CsupportsClassificationU3Ek__BackingField_6() { return &___U3CsupportsClassificationU3Ek__BackingField_6; }
	inline void set_U3CsupportsClassificationU3Ek__BackingField_6(bool value)
	{
		___U3CsupportsClassificationU3Ek__BackingField_6 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor
struct  XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C  : public SubsystemDescriptor_1_t5B94A32628776E4C0AECB3BC294482BFB2D3EFF5
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::<supportsInstall>k__BackingField
	bool ___U3CsupportsInstallU3Ek__BackingField_2;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::<supportsMatchFrameRate>k__BackingField
	bool ___U3CsupportsMatchFrameRateU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CsupportsInstallU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C, ___U3CsupportsInstallU3Ek__BackingField_2)); }
	inline bool get_U3CsupportsInstallU3Ek__BackingField_2() const { return ___U3CsupportsInstallU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CsupportsInstallU3Ek__BackingField_2() { return &___U3CsupportsInstallU3Ek__BackingField_2; }
	inline void set_U3CsupportsInstallU3Ek__BackingField_2(bool value)
	{
		___U3CsupportsInstallU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsMatchFrameRateU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C, ___U3CsupportsMatchFrameRateU3Ek__BackingField_3)); }
	inline bool get_U3CsupportsMatchFrameRateU3Ek__BackingField_3() const { return ___U3CsupportsMatchFrameRateU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CsupportsMatchFrameRateU3Ek__BackingField_3() { return &___U3CsupportsMatchFrameRateU3Ek__BackingField_3; }
	inline void set_U3CsupportsMatchFrameRateU3Ek__BackingField_3(bool value)
	{
		___U3CsupportsMatchFrameRateU3Ek__BackingField_3 = value;
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


// UnityEngine.Material
struct  Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Shader
struct  Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.BoundedPlane
struct  BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_1;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_SubsumedById
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_SubsumedById_2;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Center
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Center_3;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.BoundedPlane::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_4;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Size
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Size_5;
	// UnityEngine.XR.ARSubsystems.PlaneAlignment UnityEngine.XR.ARSubsystems.BoundedPlane::m_Alignment
	int32_t ___m_Alignment_6;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackingState
	int32_t ___m_TrackingState_7;
	// System.IntPtr UnityEngine.XR.ARSubsystems.BoundedPlane::m_NativePtr
	intptr_t ___m_NativePtr_8;
	// UnityEngine.XR.ARSubsystems.PlaneClassification UnityEngine.XR.ARSubsystems.BoundedPlane::m_Classification
	int32_t ___m_Classification_9;

public:
	inline static int32_t get_offset_of_m_TrackableId_1() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_TrackableId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_1() const { return ___m_TrackableId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_1() { return &___m_TrackableId_1; }
	inline void set_m_TrackableId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_1 = value;
	}

	inline static int32_t get_offset_of_m_SubsumedById_2() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_SubsumedById_2)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_SubsumedById_2() const { return ___m_SubsumedById_2; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_SubsumedById_2() { return &___m_SubsumedById_2; }
	inline void set_m_SubsumedById_2(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_SubsumedById_2 = value;
	}

	inline static int32_t get_offset_of_m_Center_3() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_Center_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Center_3() const { return ___m_Center_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Center_3() { return &___m_Center_3; }
	inline void set_m_Center_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Center_3 = value;
	}

	inline static int32_t get_offset_of_m_Pose_4() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_Pose_4)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_4() const { return ___m_Pose_4; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_4() { return &___m_Pose_4; }
	inline void set_m_Pose_4(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_4 = value;
	}

	inline static int32_t get_offset_of_m_Size_5() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_Size_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Size_5() const { return ___m_Size_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Size_5() { return &___m_Size_5; }
	inline void set_m_Size_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Size_5 = value;
	}

	inline static int32_t get_offset_of_m_Alignment_6() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_Alignment_6)); }
	inline int32_t get_m_Alignment_6() const { return ___m_Alignment_6; }
	inline int32_t* get_address_of_m_Alignment_6() { return &___m_Alignment_6; }
	inline void set_m_Alignment_6(int32_t value)
	{
		___m_Alignment_6 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_7() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_TrackingState_7)); }
	inline int32_t get_m_TrackingState_7() const { return ___m_TrackingState_7; }
	inline int32_t* get_address_of_m_TrackingState_7() { return &___m_TrackingState_7; }
	inline void set_m_TrackingState_7(int32_t value)
	{
		___m_TrackingState_7 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_8() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_NativePtr_8)); }
	inline intptr_t get_m_NativePtr_8() const { return ___m_NativePtr_8; }
	inline intptr_t* get_address_of_m_NativePtr_8() { return &___m_NativePtr_8; }
	inline void set_m_NativePtr_8(intptr_t value)
	{
		___m_NativePtr_8 = value;
	}

	inline static int32_t get_offset_of_m_Classification_9() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_Classification_9)); }
	inline int32_t get_m_Classification_9() const { return ___m_Classification_9; }
	inline int32_t* get_address_of_m_Classification_9() { return &___m_Classification_9; }
	inline void set_m_Classification_9(int32_t value)
	{
		___m_Classification_9 = value;
	}
};

struct BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.BoundedPlane UnityEngine.XR.ARSubsystems.BoundedPlane::s_Default
	BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_StaticFields, ___s_Default_0)); }
	inline BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  get_s_Default_0() const { return ___s_Default_0; }
	inline BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  value)
	{
		___s_Default_0 = value;
	}
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


// UnityEngine.XR.ARSubsystems.XRAnchor
struct  XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRAnchor::m_Id
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_Id_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRAnchor::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRAnchor::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRAnchor::m_NativePtr
	intptr_t ___m_NativePtr_4;
	// System.Guid UnityEngine.XR.ARSubsystems.XRAnchor::m_SessionId
	Guid_t  ___m_SessionId_5;

public:
	inline static int32_t get_offset_of_m_Id_1() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C, ___m_Id_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_Id_1() const { return ___m_Id_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_Id_1() { return &___m_Id_1; }
	inline void set_m_Id_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_Id_1 = value;
	}

	inline static int32_t get_offset_of_m_Pose_2() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C, ___m_Pose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_2() const { return ___m_Pose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_2() { return &___m_Pose_2; }
	inline void set_m_Pose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_2 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_3() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C, ___m_TrackingState_3)); }
	inline int32_t get_m_TrackingState_3() const { return ___m_TrackingState_3; }
	inline int32_t* get_address_of_m_TrackingState_3() { return &___m_TrackingState_3; }
	inline void set_m_TrackingState_3(int32_t value)
	{
		___m_TrackingState_3 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_4() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C, ___m_NativePtr_4)); }
	inline intptr_t get_m_NativePtr_4() const { return ___m_NativePtr_4; }
	inline intptr_t* get_address_of_m_NativePtr_4() { return &___m_NativePtr_4; }
	inline void set_m_NativePtr_4(intptr_t value)
	{
		___m_NativePtr_4 = value;
	}

	inline static int32_t get_offset_of_m_SessionId_5() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C, ___m_SessionId_5)); }
	inline Guid_t  get_m_SessionId_5() const { return ___m_SessionId_5; }
	inline Guid_t * get_address_of_m_SessionId_5() { return &___m_SessionId_5; }
	inline void set_m_SessionId_5(Guid_t  value)
	{
		___m_SessionId_5 = value;
	}
};

struct XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRAnchor UnityEngine.XR.ARSubsystems.XRAnchor::s_Default
	XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_StaticFields, ___s_Default_0)); }
	inline XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  get_s_Default_0() const { return ___s_Default_0; }
	inline XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  value)
	{
		___s_Default_0 = value;
	}
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

// UnityEngine.XR.ARSubsystems.XRParticipant
struct  XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRParticipant::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_0;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRParticipant::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_1;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRParticipant::m_TrackingState
	int32_t ___m_TrackingState_2;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRParticipant::m_NativePtr
	intptr_t ___m_NativePtr_3;
	// System.Guid UnityEngine.XR.ARSubsystems.XRParticipant::m_SessionId
	Guid_t  ___m_SessionId_4;

public:
	inline static int32_t get_offset_of_m_TrackableId_0() { return static_cast<int32_t>(offsetof(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F, ___m_TrackableId_0)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_0() const { return ___m_TrackableId_0; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_0() { return &___m_TrackableId_0; }
	inline void set_m_TrackableId_0(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_m_Pose_1() { return static_cast<int32_t>(offsetof(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F, ___m_Pose_1)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_1() const { return ___m_Pose_1; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_1() { return &___m_Pose_1; }
	inline void set_m_Pose_1(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_1 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_2() { return static_cast<int32_t>(offsetof(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F, ___m_TrackingState_2)); }
	inline int32_t get_m_TrackingState_2() const { return ___m_TrackingState_2; }
	inline int32_t* get_address_of_m_TrackingState_2() { return &___m_TrackingState_2; }
	inline void set_m_TrackingState_2(int32_t value)
	{
		___m_TrackingState_2 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_3() { return static_cast<int32_t>(offsetof(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F, ___m_NativePtr_3)); }
	inline intptr_t get_m_NativePtr_3() const { return ___m_NativePtr_3; }
	inline intptr_t* get_address_of_m_NativePtr_3() { return &___m_NativePtr_3; }
	inline void set_m_NativePtr_3(intptr_t value)
	{
		___m_NativePtr_3 = value;
	}

	inline static int32_t get_offset_of_m_SessionId_4() { return static_cast<int32_t>(offsetof(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F, ___m_SessionId_4)); }
	inline Guid_t  get_m_SessionId_4() const { return ___m_SessionId_4; }
	inline Guid_t * get_address_of_m_SessionId_4() { return &___m_SessionId_4; }
	inline void set_m_SessionId_4(Guid_t  value)
	{
		___m_SessionId_4 = value;
	}
};

struct XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRParticipant UnityEngine.XR.ARSubsystems.XRParticipant::k_Default
	XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  ___k_Default_5;

public:
	inline static int32_t get_offset_of_k_Default_5() { return static_cast<int32_t>(offsetof(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F_StaticFields, ___k_Default_5)); }
	inline XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  get_k_Default_5() const { return ___k_Default_5; }
	inline XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F * get_address_of_k_Default_5() { return &___k_Default_5; }
	inline void set_k_Default_5(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  value)
	{
		___k_Default_5 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor
struct  XRParticipantSubsystemDescriptor_t533EE70DC8D4B105B9C87B76D35A7D59A84BCA55  : public SubsystemDescriptor_1_t550AF205EAE09F8DA1695E2A0033AF1EDC15CF52
{
public:
	// UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor_Capabilities UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor::<capabilities>k__BackingField
	int32_t ___U3CcapabilitiesU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CcapabilitiesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(XRParticipantSubsystemDescriptor_t533EE70DC8D4B105B9C87B76D35A7D59A84BCA55, ___U3CcapabilitiesU3Ek__BackingField_2)); }
	inline int32_t get_U3CcapabilitiesU3Ek__BackingField_2() const { return ___U3CcapabilitiesU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CcapabilitiesU3Ek__BackingField_2() { return &___U3CcapabilitiesU3Ek__BackingField_2; }
	inline void set_U3CcapabilitiesU3Ek__BackingField_2(int32_t value)
	{
		___U3CcapabilitiesU3Ek__BackingField_2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRPointCloud
struct  XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRPointCloud::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRPointCloud::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRPointCloud::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRPointCloud::m_NativePtr
	intptr_t ___m_NativePtr_4;

public:
	inline static int32_t get_offset_of_m_TrackableId_1() { return static_cast<int32_t>(offsetof(XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2, ___m_TrackableId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_1() const { return ___m_TrackableId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_1() { return &___m_TrackableId_1; }
	inline void set_m_TrackableId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_1 = value;
	}

	inline static int32_t get_offset_of_m_Pose_2() { return static_cast<int32_t>(offsetof(XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2, ___m_Pose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_2() const { return ___m_Pose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_2() { return &___m_Pose_2; }
	inline void set_m_Pose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_2 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_3() { return static_cast<int32_t>(offsetof(XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2, ___m_TrackingState_3)); }
	inline int32_t get_m_TrackingState_3() const { return ___m_TrackingState_3; }
	inline int32_t* get_address_of_m_TrackingState_3() { return &___m_TrackingState_3; }
	inline void set_m_TrackingState_3(int32_t value)
	{
		___m_TrackingState_3 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_4() { return static_cast<int32_t>(offsetof(XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2, ___m_NativePtr_4)); }
	inline intptr_t get_m_NativePtr_4() const { return ___m_NativePtr_4; }
	inline intptr_t* get_address_of_m_NativePtr_4() { return &___m_NativePtr_4; }
	inline void set_m_NativePtr_4(intptr_t value)
	{
		___m_NativePtr_4 = value;
	}
};

struct XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRPointCloud UnityEngine.XR.ARSubsystems.XRPointCloud::s_Default
	XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2_StaticFields, ___s_Default_0)); }
	inline XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  get_s_Default_0() const { return ___s_Default_0; }
	inline XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  value)
	{
		___s_Default_0 = value;
	}
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


// UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor
struct  XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C  : public SubsystemDescriptor_1_t9948AD707A9DAB64C5731F571F3CDC1B6D681E36
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::<supportsViewportBasedRaycast>k__BackingField
	bool ___U3CsupportsViewportBasedRaycastU3Ek__BackingField_2;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::<supportsWorldBasedRaycast>k__BackingField
	bool ___U3CsupportsWorldBasedRaycastU3Ek__BackingField_3;
	// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::<supportedTrackableTypes>k__BackingField
	int32_t ___U3CsupportedTrackableTypesU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CsupportsViewportBasedRaycastU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C, ___U3CsupportsViewportBasedRaycastU3Ek__BackingField_2)); }
	inline bool get_U3CsupportsViewportBasedRaycastU3Ek__BackingField_2() const { return ___U3CsupportsViewportBasedRaycastU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CsupportsViewportBasedRaycastU3Ek__BackingField_2() { return &___U3CsupportsViewportBasedRaycastU3Ek__BackingField_2; }
	inline void set_U3CsupportsViewportBasedRaycastU3Ek__BackingField_2(bool value)
	{
		___U3CsupportsViewportBasedRaycastU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsWorldBasedRaycastU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C, ___U3CsupportsWorldBasedRaycastU3Ek__BackingField_3)); }
	inline bool get_U3CsupportsWorldBasedRaycastU3Ek__BackingField_3() const { return ___U3CsupportsWorldBasedRaycastU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CsupportsWorldBasedRaycastU3Ek__BackingField_3() { return &___U3CsupportsWorldBasedRaycastU3Ek__BackingField_3; }
	inline void set_U3CsupportsWorldBasedRaycastU3Ek__BackingField_3(bool value)
	{
		___U3CsupportsWorldBasedRaycastU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CsupportedTrackableTypesU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C, ___U3CsupportedTrackableTypesU3Ek__BackingField_4)); }
	inline int32_t get_U3CsupportedTrackableTypesU3Ek__BackingField_4() const { return ___U3CsupportedTrackableTypesU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CsupportedTrackableTypesU3Ek__BackingField_4() { return &___U3CsupportedTrackableTypesU3Ek__BackingField_4; }
	inline void set_U3CsupportedTrackableTypesU3Ek__BackingField_4(int32_t value)
	{
		___U3CsupportedTrackableTypesU3Ek__BackingField_4 = value;
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


// UnityEngine.XR.ARSubsystems.XRTextureDescriptor
struct  XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 
{
public:
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_NativeTexture
	intptr_t ___m_NativeTexture_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Width
	int32_t ___m_Width_1;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Height
	int32_t ___m_Height_2;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_MipmapCount
	int32_t ___m_MipmapCount_3;
	// UnityEngine.TextureFormat UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Format
	int32_t ___m_Format_4;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_PropertyNameId
	int32_t ___m_PropertyNameId_5;

public:
	inline static int32_t get_offset_of_m_NativeTexture_0() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_NativeTexture_0)); }
	inline intptr_t get_m_NativeTexture_0() const { return ___m_NativeTexture_0; }
	inline intptr_t* get_address_of_m_NativeTexture_0() { return &___m_NativeTexture_0; }
	inline void set_m_NativeTexture_0(intptr_t value)
	{
		___m_NativeTexture_0 = value;
	}

	inline static int32_t get_offset_of_m_Width_1() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_Width_1)); }
	inline int32_t get_m_Width_1() const { return ___m_Width_1; }
	inline int32_t* get_address_of_m_Width_1() { return &___m_Width_1; }
	inline void set_m_Width_1(int32_t value)
	{
		___m_Width_1 = value;
	}

	inline static int32_t get_offset_of_m_Height_2() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_Height_2)); }
	inline int32_t get_m_Height_2() const { return ___m_Height_2; }
	inline int32_t* get_address_of_m_Height_2() { return &___m_Height_2; }
	inline void set_m_Height_2(int32_t value)
	{
		___m_Height_2 = value;
	}

	inline static int32_t get_offset_of_m_MipmapCount_3() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_MipmapCount_3)); }
	inline int32_t get_m_MipmapCount_3() const { return ___m_MipmapCount_3; }
	inline int32_t* get_address_of_m_MipmapCount_3() { return &___m_MipmapCount_3; }
	inline void set_m_MipmapCount_3(int32_t value)
	{
		___m_MipmapCount_3 = value;
	}

	inline static int32_t get_offset_of_m_Format_4() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_Format_4)); }
	inline int32_t get_m_Format_4() const { return ___m_Format_4; }
	inline int32_t* get_address_of_m_Format_4() { return &___m_Format_4; }
	inline void set_m_Format_4(int32_t value)
	{
		___m_Format_4 = value;
	}

	inline static int32_t get_offset_of_m_PropertyNameId_5() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_PropertyNameId_5)); }
	inline int32_t get_m_PropertyNameId_5() const { return ___m_PropertyNameId_5; }
	inline int32_t* get_address_of_m_PropertyNameId_5() { return &___m_PropertyNameId_5; }
	inline void set_m_PropertyNameId_5(int32_t value)
	{
		___m_PropertyNameId_5 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRTrackedImage
struct  XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Id
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_Id_1;
	// System.Guid UnityEngine.XR.ARSubsystems.XRTrackedImage::m_SourceImageId
	Guid_t  ___m_SourceImageId_2;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_3;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Size
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Size_4;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRTrackedImage::m_TrackingState
	int32_t ___m_TrackingState_5;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTrackedImage::m_NativePtr
	intptr_t ___m_NativePtr_6;

public:
	inline static int32_t get_offset_of_m_Id_1() { return static_cast<int32_t>(offsetof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F, ___m_Id_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_Id_1() const { return ___m_Id_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_Id_1() { return &___m_Id_1; }
	inline void set_m_Id_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_Id_1 = value;
	}

	inline static int32_t get_offset_of_m_SourceImageId_2() { return static_cast<int32_t>(offsetof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F, ___m_SourceImageId_2)); }
	inline Guid_t  get_m_SourceImageId_2() const { return ___m_SourceImageId_2; }
	inline Guid_t * get_address_of_m_SourceImageId_2() { return &___m_SourceImageId_2; }
	inline void set_m_SourceImageId_2(Guid_t  value)
	{
		___m_SourceImageId_2 = value;
	}

	inline static int32_t get_offset_of_m_Pose_3() { return static_cast<int32_t>(offsetof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F, ___m_Pose_3)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_3() const { return ___m_Pose_3; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_3() { return &___m_Pose_3; }
	inline void set_m_Pose_3(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_3 = value;
	}

	inline static int32_t get_offset_of_m_Size_4() { return static_cast<int32_t>(offsetof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F, ___m_Size_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Size_4() const { return ___m_Size_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Size_4() { return &___m_Size_4; }
	inline void set_m_Size_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Size_4 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_5() { return static_cast<int32_t>(offsetof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F, ___m_TrackingState_5)); }
	inline int32_t get_m_TrackingState_5() const { return ___m_TrackingState_5; }
	inline int32_t* get_address_of_m_TrackingState_5() { return &___m_TrackingState_5; }
	inline void set_m_TrackingState_5(int32_t value)
	{
		___m_TrackingState_5 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_6() { return static_cast<int32_t>(offsetof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F, ___m_NativePtr_6)); }
	inline intptr_t get_m_NativePtr_6() const { return ___m_NativePtr_6; }
	inline intptr_t* get_address_of_m_NativePtr_6() { return &___m_NativePtr_6; }
	inline void set_m_NativePtr_6(intptr_t value)
	{
		___m_NativePtr_6 = value;
	}
};

struct XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRTrackedImage UnityEngine.XR.ARSubsystems.XRTrackedImage::s_Default
	XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F_StaticFields, ___s_Default_0)); }
	inline XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  get_s_Default_0() const { return ___s_Default_0; }
	inline XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  value)
	{
		___s_Default_0 = value;
	}
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


// System.InvalidOperationException
struct  InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
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


// UnityEngine.XR.ARSubsystems.XREnvironmentProbe
struct  XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_1;
	// UnityEngine.Vector3 UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_Scale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Scale_2;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_3;
	// UnityEngine.Vector3 UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_Size
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Size_4;
	// UnityEngine.XR.ARSubsystems.XRTextureDescriptor UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_TextureDescriptor
	XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  ___m_TextureDescriptor_5;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_TrackingState
	int32_t ___m_TrackingState_6;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_NativePtr
	intptr_t ___m_NativePtr_7;

public:
	inline static int32_t get_offset_of_m_TrackableId_1() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C, ___m_TrackableId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_1() const { return ___m_TrackableId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_1() { return &___m_TrackableId_1; }
	inline void set_m_TrackableId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_1 = value;
	}

	inline static int32_t get_offset_of_m_Scale_2() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C, ___m_Scale_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Scale_2() const { return ___m_Scale_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Scale_2() { return &___m_Scale_2; }
	inline void set_m_Scale_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Scale_2 = value;
	}

	inline static int32_t get_offset_of_m_Pose_3() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C, ___m_Pose_3)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_3() const { return ___m_Pose_3; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_3() { return &___m_Pose_3; }
	inline void set_m_Pose_3(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_3 = value;
	}

	inline static int32_t get_offset_of_m_Size_4() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C, ___m_Size_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Size_4() const { return ___m_Size_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Size_4() { return &___m_Size_4; }
	inline void set_m_Size_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Size_4 = value;
	}

	inline static int32_t get_offset_of_m_TextureDescriptor_5() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C, ___m_TextureDescriptor_5)); }
	inline XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  get_m_TextureDescriptor_5() const { return ___m_TextureDescriptor_5; }
	inline XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 * get_address_of_m_TextureDescriptor_5() { return &___m_TextureDescriptor_5; }
	inline void set_m_TextureDescriptor_5(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  value)
	{
		___m_TextureDescriptor_5 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_6() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C, ___m_TrackingState_6)); }
	inline int32_t get_m_TrackingState_6() const { return ___m_TrackingState_6; }
	inline int32_t* get_address_of_m_TrackingState_6() { return &___m_TrackingState_6; }
	inline void set_m_TrackingState_6(int32_t value)
	{
		___m_TrackingState_6 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_7() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C, ___m_NativePtr_7)); }
	inline intptr_t get_m_NativePtr_7() const { return ___m_NativePtr_7; }
	inline intptr_t* get_address_of_m_NativePtr_7() { return &___m_NativePtr_7; }
	inline void set_m_NativePtr_7(intptr_t value)
	{
		___m_NativePtr_7 = value;
	}
};

struct XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XREnvironmentProbe UnityEngine.XR.ARSubsystems.XREnvironmentProbe::s_Default
	XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C_StaticFields, ___s_Default_0)); }
	inline XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C  get_s_Default_0() const { return ___s_Default_0; }
	inline XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C  value)
	{
		___s_Default_0 = value;
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


// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRAnchor,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_m88D9D97C5EBFC6B306779204C2B9F01CFBBA0DD3_gshared (TrackingSubsystem_2_tF79BBAD8B9196143398CDA4B5824261B5546A012 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemDescriptor`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptor_1__ctor_m8C6A21CD0D0941472B4E6A7D64BA38ACED08BE83_gshared (SubsystemDescriptor_1_tEA7E5F11DBF319514A9F77C9765671DF1A3C8A7A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSubsystem_1__ctor_m021B9A195F632D8979FCF0567A90004BA691F58D_gshared (XRSubsystem_1_t0D417187FDCF789EDE0281B8F58F253830047A93 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_m7279C620AA3EFCE6A4CAC25EA7066BFF32FFE6D6_gshared (TrackingSubsystem_2_tE5DCDA2AE4A2A8726923CF4B64E99A303DF95F36 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XREnvironmentProbe,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_mAAE1F7F2E6A9062C1FFA4C11DE3357D46CC737CB_gshared (TrackingSubsystem_2_t996FDA9D3A93102756CBF57E7B9AA9502F185EBB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_mC8ECBCF98EC2C70CA85126E71A33F4CABBEA2A6F_gshared (TrackingSubsystem_2_t08B895827D14FBF9A65858E5EE23626AF78A0EE8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRParticipant,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_mAEC7BEE6858C2670B68FE22E9B9FB95325D49690_gshared (TrackingSubsystem_2_tEF849A9635045F125E491A8548A9C02EDF83A21B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_mAB286F04F2A457565CDE78F1490E01502996F1DB_gshared (TrackingSubsystem_2_t940E220E7BF619735AEB4307D08C2B732FD50F17 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.XR.ARSubsystems.BoundedPlane::.ctor(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.Pose,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.PlaneAlignment,UnityEngine.XR.ARSubsystems.TrackingState,System.IntPtr,UnityEngine.XR.ARSubsystems.PlaneClassification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundedPlane__ctor_mDCFBC1B53B86B650BBB103C9FC25E7872CBF804B (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___trackableId0, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___subsumedBy1, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___pose2, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___center3, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___size4, int32_t ___alignment5, int32_t ___trackingState6, intptr_t ___nativePtr7, int32_t ___classification8, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::get_trackableId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  BoundedPlane_get_trackableId_m32943441D74DC226DC907A05B5B6C6EBBC70F95B_inline (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::get_subsumedById()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  BoundedPlane_get_subsumedById_mD61EFD7A91B5F290F63A1AE59153B75BB33B89CF_inline (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method);
// UnityEngine.Pose UnityEngine.XR.ARSubsystems.BoundedPlane::get_pose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  BoundedPlane_get_pose_m8302E13809156362584FA0AE137DD911D30665BA_inline (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::get_center()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  BoundedPlane_get_center_mA4667303D86B331F7EC5F278910145E7633EA973_inline (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::get_size()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  BoundedPlane_get_size_m204F4F37C0FB6F7294682D961B53F4F9639E3882_inline (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.PlaneAlignment UnityEngine.XR.ARSubsystems.BoundedPlane::get_alignment()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BoundedPlane_get_alignment_m72B849B54224B1493DFF448BCF2AB8634751DC71_inline (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.BoundedPlane::get_trackingState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BoundedPlane_get_trackingState_mBF10ADD6DD969A0DA7FCC8299FFA56AEB9B837CA_inline (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method);
// System.IntPtr UnityEngine.XR.ARSubsystems.BoundedPlane::get_nativePtr()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t BoundedPlane_get_nativePtr_m626921F0179BF37BC5F06C2587D298FB40F31FE9_inline (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.PlaneClassification UnityEngine.XR.ARSubsystems.BoundedPlane::get_classification()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BoundedPlane_get_classification_m842651162BFE9633C414B16CD1D86FBBE86589A3_inline (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method);
// System.Int64 System.IntPtr::ToInt64()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t IntPtr_ToInt64_m521F809F5D9ECAF93E808CFFFE45F67620C7879A (intptr_t* __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.String UnityEngine.XR.ARSubsystems.BoundedPlane::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BoundedPlane_ToString_m0A542F5D2CB72755643184989BE3B9E6899D731A (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.BoundedPlane::Equals(UnityEngine.XR.ARSubsystems.BoundedPlane)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoundedPlane_Equals_m3A984C969EC0ACE7B83F661C80AA82C54D455D1A (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.BoundedPlane::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoundedPlane_Equals_m5B2E8A0932BC0242B51091CDDFED85901156A005 (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.TrackableId::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrackableId_GetHashCode_mFD297FC6DB40FB5B28C6E9B7A2CF2785D75C4E86 (TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Pose::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Pose_GetHashCode_mE1DD7FBCCB1C979B252F0B117276BA11CF4D2367 (Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector2::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector2_GetHashCode_m9A5DD8406289F38806CC42C394E324C1C2AB3732 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method);
// System.Int32 System.Int32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667 (int32_t* __this, const RuntimeMethod* method);
// System.Int32 System.IntPtr::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_GetHashCode_m55E65FB52EFE7C0EBC3C28E66A5D7542F3B1D35D (intptr_t* __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.BoundedPlane::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoundedPlane_GetHashCode_m99D4D46A432C2E00A182A86788A750522BFBCAEF (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableId::Equals(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableId_Equals_m1DF35616359175E3D66DE18250E8CDA1E6462B06 (TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Pose::Equals(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Pose_Equals_mFAE0041090F2032B8FCE63A0F289DD206134BF15 (Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * __this, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector2::Equals(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_Equals_m6E08A16717F2B9EE8B24EBA6B234A03098D5F05D_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___other0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::get_invalidId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  TrackableId_get_invalidId_m06B698EFFA7748E185299C72B5CEC1AA5B221F85_inline (const RuntimeMethod* method);
// UnityEngine.Pose UnityEngine.Pose::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  Pose_get_identity_m334B16AC3024785914BCC5A2B949750A010878BF (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableId::.ctor(System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableId__ctor_mB9B301A9CD03355A4E03A2B1A102B6B75F190792 (TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * __this, uint64_t ___subId10, uint64_t ___subId21, const RuntimeMethod* method);
// System.String System.UInt64::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt64_ToString_mFE48F1D174A1F741AB0795C1164BF45BF37F86E6 (uint64_t* __this, String_t* ___format0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.String UnityEngine.XR.ARSubsystems.TrackableId::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TrackableId_ToString_mCD45FD4FF5DF6DE30A38AD05D02CFA7B2B696BB1 (TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * __this, const RuntimeMethod* method);
// System.Int32 System.UInt64::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt64_GetHashCode_mCDF662897A3F02CED11A9F9E66C5BF4E28C02B33 (uint64_t* __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableId::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableId_Equals_mA542615B3B7AAD52AEBBEFBCE7E6987B2DE3849D (TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 System.Guid::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Guid_GetHashCode_mD32F5054E937C98B3D082594B3849808F1E92AE7 (Guid_t * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRAnchor::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRAnchor_GetHashCode_m3928C95D8DE59840CB82D9FD13EDEEAEA2A89376 (XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * __this, const RuntimeMethod* method);
// System.Boolean System.Guid::Equals(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Guid_Equals_m602304DBC4842AB53670762A6DB52D30C3973258 (Guid_t * __this, Guid_t  ___g0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRAnchor::Equals(UnityEngine.XR.ARSubsystems.XRAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRAnchor_Equals_mE6AC873FF43B605D47F5AB76F0ADAD9A6EDEA25B (XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * __this, XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRAnchor::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRAnchor_Equals_m8C35DEBDDAC21262E3344152D76539DF1AF7F060 (XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRAnchor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor>::.ctor()
inline void TrackingSubsystem_2__ctor_m8336CFFF4DD799960F5EA7267E5894C55260A572 (TrackingSubsystem_2_t020D3F075CB29EC7CC963289203B6620C36C670D * __this, const RuntimeMethod* method)
{
	((  void (*) (TrackingSubsystem_2_t020D3F075CB29EC7CC963289203B6620C36C670D *, const RuntimeMethod*))TrackingSubsystem_2__ctor_m88D9D97C5EBFC6B306779204C2B9F01CFBBA0DD3_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor::.ctor(UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRAnchorSubsystemDescriptor__ctor_m5393EA2BCAFE2CB48EDD6DDCCD50C40FC7035331 (XRAnchorSubsystemDescriptor_t3BD7F9922EF5C04185D59349C76D625BC1E44E3B * __this, Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7  ___cinfo0, const RuntimeMethod* method);
// System.Boolean UnityEngine.SubsystemRegistration::CreateDescriptor(UnityEngine.SubsystemDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SubsystemRegistration_CreateDescriptor_m6C69D0D80C317F66888FEBF67DFEE327E3462A54 (SubsystemDescriptor_tF663011CB44AB1D342821BBEF7B6811E799A7245 * ___descriptor0, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemDescriptor`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem>::.ctor()
inline void SubsystemDescriptor_1__ctor_mBC4926247F341770CDFAF419AD59814540B046EB (SubsystemDescriptor_1_t1B39B5E0AF8967BDFDB7AB2E24CAC5C7CE844E7B * __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemDescriptor_1_t1B39B5E0AF8967BDFDB7AB2E24CAC5C7CE844E7B *, const RuntimeMethod*))SubsystemDescriptor_1__ctor_m8C6A21CD0D0941472B4E6A7D64BA38ACED08BE83_gshared)(__this, method);
}
// System.String UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m7C38252CE360F061914361192300AECA8CB5307B_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemDescriptor::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptor_set_id_m3394B5AEBBE25A1924FD34FC0608DD5AACABBE2C_inline (SubsystemDescriptor_tF663011CB44AB1D342821BBEF7B6811E799A7245 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Type UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::get_subsystemImplementationType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemImplementationType_m45C4A6583BBDA8DC5FD506339DC7A80474E88CC2_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemDescriptor::set_subsystemImplementationType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptor_set_subsystemImplementationType_mAEAE9A52920C64D2A9C5B6316E30353AFA581AA4_inline (SubsystemDescriptor_tF663011CB44AB1D342821BBEF7B6811E799A7245 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::get_supportsTrackableAttachments()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsTrackableAttachments_m13B6C9977641F3E284C69AA3554EBD19478538B8_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor::set_supportsTrackableAttachments(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRAnchorSubsystemDescriptor_set_supportsTrackableAttachments_m11271C1EBC306EB3FDA99D24D45D88DB31DCCC38_inline (XRAnchorSubsystemDescriptor_t3BD7F9922EF5C04185D59349C76D625BC1E44E3B * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSubsystem`1<UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor>::.ctor()
inline void XRSubsystem_1__ctor_m188E5D20AA4A1BC11010A5511021C48494A36FBD (XRSubsystem_1_t77A771327651FFF6C71014361B92282768BA67E5 * __this, const RuntimeMethod* method)
{
	((  void (*) (XRSubsystem_1_t77A771327651FFF6C71014361B92282768BA67E5 *, const RuntimeMethod*))XRSubsystem_1__ctor_m021B9A195F632D8979FCF0567A90004BA691F58D_gshared)(__this, method);
}
// UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor::Create(UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRCameraSubsystemDescriptor_t1F8A45C69031E2981B1863518C43793D26E2C5E5 * XRCameraSubsystemDescriptor_Create_mEC826CD90D35D17847339952F5022081EF871033 (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096  ___cameraSubsystemParams0, const RuntimeMethod* method);
// System.String UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XRCameraSubsystemCinfo_get_id_m606888326128C053029E1B09A00F2CB97B214291_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_id_m768994793A205C7D5CE603B354D350A34D47720D_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Type UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::get_implementationType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * XRCameraSubsystemCinfo_get_implementationType_mAE66FE753EC633CC784D6D512DFC487427EA1C58_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_implementationType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_implementationType_m4CC13E5510FAE9BDD9D8E126A796C6D5E05E558D_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::get_supportsAverageBrightness()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRCameraSubsystemCinfo_get_supportsAverageBrightness_mF49B2D16DE8FBC5452C17D87672FBE1EB814145E_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsAverageBrightness(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsAverageBrightness_mC20A88BD3C8D137A1F34888C64DC5FFF37787759_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::get_supportsAverageColorTemperature()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRCameraSubsystemCinfo_get_supportsAverageColorTemperature_m789041AE11DC92E73ED6C228C5A5B55A87AE736B_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsAverageColorTemperature(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsAverageColorTemperature_m77727C8CBAB59D0D078B0A634EB0A56F1BF368E4_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsColorCorrection(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsColorCorrection_m1CBB9181A21D2A964705AD5E22F78735DCFE2C01_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::get_supportsDisplayMatrix()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRCameraSubsystemCinfo_get_supportsDisplayMatrix_m2107BE8860B1A4D050A80801F6286F0E9798820D_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsDisplayMatrix(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsDisplayMatrix_m2E11C0B7442273252613BDB41BB8B6F02698FBEA_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::get_supportsProjectionMatrix()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRCameraSubsystemCinfo_get_supportsProjectionMatrix_mAC44711CBD0AEF5600FAF7A65364692FE9FA9D9E_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsProjectionMatrix(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsProjectionMatrix_mFC886F8859FDF308D7980935474AA0E66ECF66B4_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::get_supportsTimestamp()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRCameraSubsystemCinfo_get_supportsTimestamp_m0B95FB498C6682EE15E2461F8A5C555B3E397543_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsTimestamp(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsTimestamp_mAA6157EC368F6358F155571E257A578729D368D4_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::get_supportsCameraConfigurations()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRCameraSubsystemCinfo_get_supportsCameraConfigurations_mF0168147B6D556F8289DCE665D070EE427430CDD_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsCameraConfigurations(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsCameraConfigurations_mD0F431DDAB4F82DDC6E35AB7583572D25244E0F0_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::get_supportsCameraImage()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRCameraSubsystemCinfo_get_supportsCameraImage_m404883CC80418B38CB13D3ED6DAAFE6D81978A6F_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsCameraImage(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsCameraImage_m2140EBB7ACEA9B1634F56DE2DCB85F26CB8C4D7D_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::get_supportsAverageIntensityInLumens()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRCameraSubsystemCinfo_get_supportsAverageIntensityInLumens_m5B91C231C060B22D44F1579CF361500D7B54173E_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsAverageIntensityInLumens(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsAverageIntensityInLumens_m49462C178EF35B3E688EE6711FD3E41E9C1976AB_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::get_supportsFocusModes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRCameraSubsystemCinfo_get_supportsFocusModes_mA2196338BFF377734A338E919D372089A98417D9_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsFocusModes(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsFocusModes_m2F70E7EFC54E2F930DEA28DC4922125E01FE3026_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Boolean System.Boolean::Equals(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Boolean_Equals_mC63D03B4DE1BBC68835530A9E0384FDDB0AC1A3D (bool* __this, bool ___obj0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::Equals(UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRCameraSubsystemCinfo_Equals_m8C071329439DF323FF57A936181A09F933886EAB (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRCameraSubsystemCinfo_Equals_m8DA28DF625D849C92AE0770EBB43184C2CE4FEE4 (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 System.Boolean::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411 (bool* __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRCameraSubsystemCinfo_GetHashCode_mA8D0D3E3ABB46889F31B045A1D6F8A06EC8701D0 (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemDescriptor`1<UnityEngine.XR.ARSubsystems.XRCameraSubsystem>::.ctor()
inline void SubsystemDescriptor_1__ctor_m1B67A65E4C28F251DEDFA25E7EA6C3FF4E529507 (SubsystemDescriptor_1_tD23817903F0AE45B2D3364EE5946F568184F16E8 * __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemDescriptor_1_tD23817903F0AE45B2D3364EE5946F568184F16E8 *, const RuntimeMethod*))SubsystemDescriptor_1__ctor_m8C6A21CD0D0941472B4E6A7D64BA38ACED08BE83_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor::set_supportsAverageBrightness(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemDescriptor_set_supportsAverageBrightness_m93E308790E7E9F9EB2D4A0AA12EF64F5ACF32275_inline (XRCameraSubsystemDescriptor_t1F8A45C69031E2981B1863518C43793D26E2C5E5 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor::set_supportsAverageColorTemperature(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemDescriptor_set_supportsAverageColorTemperature_m79788019F8E730D1FC139530E9615FE5CBABDDCB_inline (XRCameraSubsystemDescriptor_t1F8A45C69031E2981B1863518C43793D26E2C5E5 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor::set_supportsDisplayMatrix(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemDescriptor_set_supportsDisplayMatrix_mE32DBA05CC497A4639E3BDA570E51244BD5E524A_inline (XRCameraSubsystemDescriptor_t1F8A45C69031E2981B1863518C43793D26E2C5E5 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor::set_supportsProjectionMatrix(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemDescriptor_set_supportsProjectionMatrix_mECDFAEA74911ED30529FDB70DE87AA3818AA285F_inline (XRCameraSubsystemDescriptor_t1F8A45C69031E2981B1863518C43793D26E2C5E5 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor::set_supportsTimestamp(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemDescriptor_set_supportsTimestamp_mDE3970574677648ED3EC4520657BED04613128D3_inline (XRCameraSubsystemDescriptor_t1F8A45C69031E2981B1863518C43793D26E2C5E5 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor::set_supportsCameraConfigurations(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemDescriptor_set_supportsCameraConfigurations_mE49020DC68025F21123ACCCB96C0ACB0A99A923C_inline (XRCameraSubsystemDescriptor_t1F8A45C69031E2981B1863518C43793D26E2C5E5 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor::set_supportsCameraImage(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemDescriptor_set_supportsCameraImage_m3D2848F2DDBED1D1B613D6CF8E6055D8163EF3F7_inline (XRCameraSubsystemDescriptor_t1F8A45C69031E2981B1863518C43793D26E2C5E5 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor::set_supportsAverageIntensityInLumens(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemDescriptor_set_supportsAverageIntensityInLumens_m65A10731DEF111F2BE9325DC6CC26E5B765D07C6_inline (XRCameraSubsystemDescriptor_t1F8A45C69031E2981B1863518C43793D26E2C5E5 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor::set_supportsFocusModes(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemDescriptor_set_supportsFocusModes_mB7D094AE9379B0C31386397C907C1A1C1A4189BB_inline (XRCameraSubsystemDescriptor_t1F8A45C69031E2981B1863518C43793D26E2C5E5 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor::.ctor(UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCameraSubsystemDescriptor__ctor_m3279B88FEF25A569F67987BDC39A0678B72D1CB6 (XRCameraSubsystemDescriptor_t1F8A45C69031E2981B1863518C43793D26E2C5E5 * __this, XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096  ___cameraSubsystemParams0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRPointCloud,UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor>::.ctor()
inline void TrackingSubsystem_2__ctor_mE513BC3982486DF0187321C5B7A8E0A1603C2649 (TrackingSubsystem_2_t79FA04791F70D13E9BCAD481CA4A88948F7A0E39 * __this, const RuntimeMethod* method)
{
	((  void (*) (TrackingSubsystem_2_t79FA04791F70D13E9BCAD481CA4A88948F7A0E39 *, const RuntimeMethod*))TrackingSubsystem_2__ctor_m7279C620AA3EFCE6A4CAC25EA7066BFF32FFE6D6_gshared)(__this, method);
}
// System.Void UnityEngine.SubsystemDescriptor`1<UnityEngine.XR.ARSubsystems.XRDepthSubsystem>::.ctor()
inline void SubsystemDescriptor_1__ctor_m75055823F16B584D798074D8822646B3C5C68CBE (SubsystemDescriptor_1_t80188B5E99E9226AAD0C7F8273B6FB9E53A3A218 * __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemDescriptor_1_t80188B5E99E9226AAD0C7F8273B6FB9E53A3A218 *, const RuntimeMethod*))SubsystemDescriptor_1__ctor_m8C6A21CD0D0941472B4E6A7D64BA38ACED08BE83_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::get_supportsFeaturePoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsFeaturePoints_mAE8F24562D2A19594A5AB98BDA0FC1C35730B5BA (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor::set_supportsFeaturePoints(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRDepthSubsystemDescriptor_set_supportsFeaturePoints_mA0C105DA50CA07BC488A7E1BDDB3CD72225BE00C_inline (XRDepthSubsystemDescriptor_t745DBB7D313FB52F756E0B7AA993FBBC26B412C2 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::get_supportsUniqueIds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsUniqueIds_m6A1B72F6B917B3B001388027A7324A84146E5B7F (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor::set_supportsUniqueIds(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRDepthSubsystemDescriptor_set_supportsUniqueIds_m0BBF2BAA5E4E1A704B29F62FE895F5A29A5D93CD_inline (XRDepthSubsystemDescriptor_t745DBB7D313FB52F756E0B7AA993FBBC26B412C2 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::get_supportsConfidence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsConfidence_m483E36BDB283478D5E1F6F6F3C96A279EB6DE01A (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor::set_supportsConfidence(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRDepthSubsystemDescriptor_set_supportsConfidence_m877945BE2EB06E5FB0699BEDA781CDC7E88DBC9A_inline (XRDepthSubsystemDescriptor_t745DBB7D313FB52F756E0B7AA993FBBC26B412C2 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor::.ctor(UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDepthSubsystemDescriptor__ctor_m8107883A37944FA3C8451BA4F8CF88B902BB56DD (XRDepthSubsystemDescriptor_t745DBB7D313FB52F756E0B7AA993FBBC26B412C2 * __this, Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1  ___descriptorParams0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbe::set_trackableId(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbe_set_trackableId_m2FAAA910E6D06256C1ECCCCF8C6D3E72A056199D_inline (XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbe::set_pose(UnityEngine.Pose)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbe_set_pose_mAC84C3A2D8788D587F0503EA1CE051294A8A87E9_inline (XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C * __this, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbe::Equals(UnityEngine.XR.ARSubsystems.XREnvironmentProbe)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XREnvironmentProbe_Equals_mAB858DCB46B0A972BE91B46AE6BA4C2AB6B8479B (XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C * __this, XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbe::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XREnvironmentProbe_Equals_m940DA5EE99C70171A86520CA30C33C0E778A15E7 (XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XREnvironmentProbe::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XREnvironmentProbe_GetHashCode_mE6E401BB29C7F44E680E6561A8AB7CD92B3F2472 (XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C * __this, const RuntimeMethod* method);
// System.String UnityEngine.XR.ARSubsystems.XREnvironmentProbe::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XREnvironmentProbe_ToString_m68F8E47BA9E4040BF7352D68F61FB17177000009 (XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C * __this, String_t* ___floatingPointformat0, const RuntimeMethod* method);
// System.String UnityEngine.XR.ARSubsystems.XREnvironmentProbe::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XREnvironmentProbe_ToString_mBF2604257F8CA6CE56C5D389E8D08339725B8B93 (XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C * __this, const RuntimeMethod* method);
// System.String UnityEngine.Vector3::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3_ToString_mBD710BF9F46219074EE5B095F064EAB4F73B64C1 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, String_t* ___format0, const RuntimeMethod* method);
// System.String UnityEngine.Pose::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Pose_ToString_mF545EBBC9D7E041E8FC673068C8DB7E29B696C82 (Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * __this, String_t* ___format0, const RuntimeMethod* method);
// System.String UnityEngine.XR.ARSubsystems.XRTextureDescriptor::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XRTextureDescriptor_ToString_m13E8A051346374949A95D217BBAAD298893A25EB (XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 * __this, const RuntimeMethod* method);
// System.String System.IntPtr::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IntPtr_ToString_mC499BFB66CB492853717FFACA63599701FC1E91C (intptr_t* __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XREnvironmentProbe,UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemDescriptor>::.ctor()
inline void TrackingSubsystem_2__ctor_m4298DC3177831515B6413B51E917734028B41370 (TrackingSubsystem_2_t635B13DDDEED6B25BD720BEFCE637E975A541238 * __this, const RuntimeMethod* method)
{
	((  void (*) (TrackingSubsystem_2_t635B13DDDEED6B25BD720BEFCE637E975A541238 *, const RuntimeMethod*))TrackingSubsystem_2__ctor_mAAE1F7F2E6A9062C1FFA4C11DE3357D46CC737CB_gshared)(__this, method);
}
// UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemDescriptor UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemDescriptor::Create(UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XREnvironmentProbeSubsystemDescriptor_t7C10519F545418330347AC7434FBB10F39DD4243 * XREnvironmentProbeSubsystemDescriptor_Create_m64B177418E0330A718E4461D29A11FE8518BB09E (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2  ___environmentProbeSubsystemCinfo0, const RuntimeMethod* method);
// System.String UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XREnvironmentProbeSubsystemCinfo_get_id_mBEA40C4012D8253E65C525083E3454C93BC6F3BE_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_id_m5C48BD3E879410D5C622BE7DC74D5C798E151731_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Type UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::get_implementationType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * XREnvironmentProbeSubsystemCinfo_get_implementationType_m60A843D0968BAEE06DA8AE2F67E0B1190CD49249_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::set_implementationType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_implementationType_m46EACEC5C1BCC55A1647EE8161074E1D1EEC32B0_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::get_supportsManualPlacement()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XREnvironmentProbeSubsystemCinfo_get_supportsManualPlacement_m194C593950367B1C7EFB50D6F00E5705597065BF_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::set_supportsManualPlacement(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_supportsManualPlacement_m2D1156DE760E47CBDDC345AD5CAE5D23AC23E524_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::get_supportsRemovalOfManual()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XREnvironmentProbeSubsystemCinfo_get_supportsRemovalOfManual_m7B2DFDB097FAD2FC7FE6AE7F7A8172FA7B34D406_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::set_supportsRemovalOfManual(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_supportsRemovalOfManual_m01CE117FEA37EE9BEF79903754E396C35B859419_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::get_supportsAutomaticPlacement()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XREnvironmentProbeSubsystemCinfo_get_supportsAutomaticPlacement_m2EAA567973D53F9FFCF91AAD4233F91957281B11_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::set_supportsAutomaticPlacement(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_supportsAutomaticPlacement_mC4DBFBBD4DBB44D6B1154C4759A3175F9AC33D46_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::get_supportsRemovalOfAutomatic()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XREnvironmentProbeSubsystemCinfo_get_supportsRemovalOfAutomatic_mFC9AA46EA023D8A0968ED80B1F88F10AA50F549F_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::set_supportsRemovalOfAutomatic(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_supportsRemovalOfAutomatic_m6FCC1E3ACDC01E4447E385A1B89C96DEE16B7EF2_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::get_supportsEnvironmentTexture()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XREnvironmentProbeSubsystemCinfo_get_supportsEnvironmentTexture_m3593704263A383A9EC79E765CCC01632707E4A48_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::set_supportsEnvironmentTexture(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_supportsEnvironmentTexture_mE30B73C6AC37C6DF8F5B7DBDBC90A975A498D3E4_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::get_supportsEnvironmentTextureHDR()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XREnvironmentProbeSubsystemCinfo_get_supportsEnvironmentTextureHDR_mDD0F30AB731A6010F6F96DBA660415B55FCD580A_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::set_supportsEnvironmentTextureHDR(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_supportsEnvironmentTextureHDR_mA465A23A4DC052895F8F634892B7C8E3A49F4777_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::Equals(UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XREnvironmentProbeSubsystemCinfo_Equals_mECAF625FF6A6D6CB7652827D34BCF4228243102C (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XREnvironmentProbeSubsystemCinfo_Equals_mE09A9486010D3E88E94AE06CF3BF499D3A2FC6EF (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XREnvironmentProbeSubsystemCinfo_GetHashCode_mADDFE56D58883EC3832D901FF566989CB00B5D02 (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemDescriptor`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem>::.ctor()
inline void SubsystemDescriptor_1__ctor_m0FD0613029640C938D9881C5630E266DC813CFE9 (SubsystemDescriptor_1_tA69344ACE2FE4534315650B09A593E1104FBA931 * __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemDescriptor_1_tA69344ACE2FE4534315650B09A593E1104FBA931 *, const RuntimeMethod*))SubsystemDescriptor_1__ctor_m8C6A21CD0D0941472B4E6A7D64BA38ACED08BE83_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemDescriptor::set_supportsManualPlacement(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemDescriptor_set_supportsManualPlacement_mCE20C35437C72E053599F9F900EFE7D5A1B0ECF3_inline (XREnvironmentProbeSubsystemDescriptor_t7C10519F545418330347AC7434FBB10F39DD4243 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemDescriptor::set_supportsRemovalOfManual(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemDescriptor_set_supportsRemovalOfManual_m148569DAD1997E9EFC75977FD58B2E2A0E6A3A29_inline (XREnvironmentProbeSubsystemDescriptor_t7C10519F545418330347AC7434FBB10F39DD4243 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemDescriptor::set_supportsAutomaticPlacement(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemDescriptor_set_supportsAutomaticPlacement_mE62CB20894AB742E406F1762C9B8C2CE1DA1B359_inline (XREnvironmentProbeSubsystemDescriptor_t7C10519F545418330347AC7434FBB10F39DD4243 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemDescriptor::set_supportsRemovalOfAutomatic(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemDescriptor_set_supportsRemovalOfAutomatic_m3210C35AC07979BAFDFA3EA0F6A3677285D6E282_inline (XREnvironmentProbeSubsystemDescriptor_t7C10519F545418330347AC7434FBB10F39DD4243 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemDescriptor::set_supportsEnvironmentTexture(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemDescriptor_set_supportsEnvironmentTexture_m67C606821F3D139A11628F487EFE764A2A562CC4_inline (XREnvironmentProbeSubsystemDescriptor_t7C10519F545418330347AC7434FBB10F39DD4243 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemDescriptor::set_supportsEnvironmentTextureHDR(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemDescriptor_set_supportsEnvironmentTextureHDR_m813F1381535676A236CE05D522515683E6CA795A_inline (XREnvironmentProbeSubsystemDescriptor_t7C10519F545418330347AC7434FBB10F39DD4243 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemDescriptor::.ctor(UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemDescriptor__ctor_m759C9A99C0F48E2422698CABD21C05A9F9E2ACB6 (XREnvironmentProbeSubsystemDescriptor_t7C10519F545418330347AC7434FBB10F39DD4243 * __this, XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2  ___environmentProbeSubsystemCinfo0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor>::.ctor()
inline void TrackingSubsystem_2__ctor_mF413F42B86FC1EDF7E1AE4C13AA81920BC9AF4CD (TrackingSubsystem_2_t8BA756796BBE751160DDDD56AEB0F699FAD7040A * __this, const RuntimeMethod* method)
{
	((  void (*) (TrackingSubsystem_2_t8BA756796BBE751160DDDD56AEB0F699FAD7040A *, const RuntimeMethod*))TrackingSubsystem_2__ctor_mC8ECBCF98EC2C70CA85126E71A33F4CABBEA2A6F_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor::.ctor(UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRImageTrackingSubsystemDescriptor__ctor_m2A19512EFC73A1237D84A4DFAB41683FB03D6D55 (XRImageTrackingSubsystemDescriptor_t3EC191739B144A8AA00CEEE03E8F7FF01D7F833B * __this, Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32  ___cinfo0, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemDescriptor`1<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem>::.ctor()
inline void SubsystemDescriptor_1__ctor_m6E6F9AC5921DE7AD866C280B4E74E441E268DE04 (SubsystemDescriptor_1_t1E17EF75CB689C8F44A8CF6AB526DFE9B9B01F3E * __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemDescriptor_1_t1E17EF75CB689C8F44A8CF6AB526DFE9B9B01F3E *, const RuntimeMethod*))SubsystemDescriptor_1__ctor_m8C6A21CD0D0941472B4E6A7D64BA38ACED08BE83_gshared)(__this, method);
}
// System.String UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m7ACB39F94D161A19473B51245A60F0FE3380E9C6_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, const RuntimeMethod* method);
// System.Type UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::get_subsystemImplementationType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemImplementationType_m3494B3DBDB5F113CD0DB5380E246F22EBF9FE39A_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::get_supportsMovingImages()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsMovingImages_m7B1E2171F1304A73339266B64548CF305EFEEA91_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor::set_supportsMovingImages(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRImageTrackingSubsystemDescriptor_set_supportsMovingImages_mC063AA8181AC8EBF77D9971D48520BEE6EC004B2_inline (XRImageTrackingSubsystemDescriptor_t3EC191739B144A8AA00CEEE03E8F7FF01D7F833B * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::get_requiresPhysicalImageDimensions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_requiresPhysicalImageDimensions_mEED8602BF9D390F19582D3F706A9C93333AFB0C7_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor::set_requiresPhysicalImageDimensions(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRImageTrackingSubsystemDescriptor_set_requiresPhysicalImageDimensions_m5CCC9D3F1557368927D0AED4E1688F2F8ADA3F14_inline (XRImageTrackingSubsystemDescriptor_t3EC191739B144A8AA00CEEE03E8F7FF01D7F833B * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::get_supportsMutableLibrary()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsMutableLibrary_mCD0988DBB5810975CB97BEDD9B2E6B6C168D6E19_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor::set_supportsMutableLibrary(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRImageTrackingSubsystemDescriptor_set_supportsMutableLibrary_mD005AB53B7850F1B329DE152520E552E23072834_inline (XRImageTrackingSubsystemDescriptor_t3EC191739B144A8AA00CEEE03E8F7FF01D7F833B * __this, bool ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRParticipant::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRParticipant_GetHashCode_mF04382E10454D77B4F1AA3AF615488B98D9D62EC (XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRParticipant::Equals(UnityEngine.XR.ARSubsystems.XRParticipant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRParticipant_Equals_mE1679D0AAFE2566EA4CE5AF7992F1ADD3D2AFEDA (XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F * __this, XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRParticipant::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRParticipant_Equals_mBA488A840ABD4DBB6432E2D03126062EC1A6768C (XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRParticipant,UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor>::.ctor()
inline void TrackingSubsystem_2__ctor_m84D330B829E9FFE5FDC2B5AC8794FDE41A93B3C8 (TrackingSubsystem_2_tD427C3B655A8844B9C7731EF2F22DE6D47A37D93 * __this, const RuntimeMethod* method)
{
	((  void (*) (TrackingSubsystem_2_tD427C3B655A8844B9C7731EF2F22DE6D47A37D93 *, const RuntimeMethod*))TrackingSubsystem_2__ctor_mAEC7BEE6858C2670B68FE22E9B9FB95325D49690_gshared)(__this, method);
}
// System.Void UnityEngine.SubsystemDescriptor`1<UnityEngine.XR.ARSubsystems.XRParticipantSubsystem>::.ctor()
inline void SubsystemDescriptor_1__ctor_m0502A4C077984C324C39098B7089F53FACA8B7AF (SubsystemDescriptor_1_t550AF205EAE09F8DA1695E2A0033AF1EDC15CF52 * __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemDescriptor_1_t550AF205EAE09F8DA1695E2A0033AF1EDC15CF52 *, const RuntimeMethod*))SubsystemDescriptor_1__ctor_m8C6A21CD0D0941472B4E6A7D64BA38ACED08BE83_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor::set_capabilities(UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor/Capabilities)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRParticipantSubsystemDescriptor_set_capabilities_m3CDF9EDC1BF57F513846DE87A9E4996ED543759A_inline (XRParticipantSubsystemDescriptor_t533EE70DC8D4B105B9C87B76D35A7D59A84BCA55 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor>::.ctor()
inline void TrackingSubsystem_2__ctor_m8952C59F525DF242980CCBB79C55BF52E0E2DB24 (TrackingSubsystem_2_tD21DB8BFE8C3B02D3C756C096FECE71DD0214B9E * __this, const RuntimeMethod* method)
{
	((  void (*) (TrackingSubsystem_2_tD21DB8BFE8C3B02D3C756C096FECE71DD0214B9E *, const RuntimeMethod*))TrackingSubsystem_2__ctor_mAB286F04F2A457565CDE78F1490E01502996F1DB_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::.ctor(UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor__ctor_mC8788AC7F6940BA1E88AE0277C1D099DD0EEB935 (XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483 * __this, Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD  ___cinfo0, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemDescriptor`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem>::.ctor()
inline void SubsystemDescriptor_1__ctor_mC8F5D95506044FF67424F74B96A546F08E0D4CFF (SubsystemDescriptor_1_tDD9F3B9DD9A97D1932BE6AD7B5DD4A481D0705D3 * __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemDescriptor_1_tDD9F3B9DD9A97D1932BE6AD7B5DD4A481D0705D3 *, const RuntimeMethod*))SubsystemDescriptor_1__ctor_m8C6A21CD0D0941472B4E6A7D64BA38ACED08BE83_gshared)(__this, method);
}
// System.String UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m62022D2EE6912F0B1BDBCA687A4FC63321DE3F86_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method);
// System.Type UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_subsystemImplementationType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemImplementationType_m82A28CC42BE4BA1FF20AE356908C272CC9103F31_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_supportsHorizontalPlaneDetection()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsHorizontalPlaneDetection_mBC3012C667106D47D9429F9C8001774038A38216_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::set_supportsHorizontalPlaneDetection(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_set_supportsHorizontalPlaneDetection_m2BB45C7A44E14368A0FAEADA130A6F6158B1042D_inline (XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_supportsVerticalPlaneDetection()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsVerticalPlaneDetection_m4E3BE200E11784D049B94A054F15E4C76D29D7C6_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::set_supportsVerticalPlaneDetection(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_set_supportsVerticalPlaneDetection_m050259C60036A9B08459ED7BDFC06D24270927B2_inline (XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_supportsArbitraryPlaneDetection()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsArbitraryPlaneDetection_mF6CB379C9781FE8B8473949DA99196508EF91DB5_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::set_supportsArbitraryPlaneDetection(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_set_supportsArbitraryPlaneDetection_m2A4804EC8ED1137CB21F6589FBAE85CF01B1A5A0_inline (XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_supportsBoundaryVertices()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsBoundaryVertices_m5BA762B342FCF81EAE6E3645D3BAF04C1E8EAAD9_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::set_supportsBoundaryVertices(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_set_supportsBoundaryVertices_mDF9E00121A6509790D704D77FF0B863A99436747_inline (XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_supportsClassification()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsClassification_m0396A2A62F840D9E283402BFB3681A5CC19C810E_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::set_supportsClassification(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_set_supportsClassification_mA74FCEFD28F8CC7E1BB2E97E69DFA8E20BD0904A_inline (XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRPointCloud::get_pose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  XRPointCloud_get_pose_m4291F970BA7E4F2DE67BB6666D365FF510B8AC39_inline (XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRPointCloud::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRPointCloud_GetHashCode_m27CF26ED9655FD5EF9E3F83986059017A37E6778 (XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableId::op_Equality(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableId_op_Equality_m0868EBB6BB9BA72B226D0717352604B3E8EA119B (TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___id10, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___id21, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRPointCloud::Equals(UnityEngine.XR.ARSubsystems.XRPointCloud)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRPointCloud_Equals_mFB272AE1F45D6A70C7E5C18D49E2ED7E2375AC0C (XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 * __this, XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRPointCloud::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRPointCloud_Equals_m7123CA7CBF03D2DDAEAFD63768A78A559B70D34A (XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSubsystem`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor>::.ctor()
inline void XRSubsystem_1__ctor_m02A65B932C7EE395D07D62DAD0B74D71DA9504D7 (XRSubsystem_1_tC5B08F644C4FBD76D4093D31038E7355038626ED * __this, const RuntimeMethod* method)
{
	((  void (*) (XRSubsystem_1_tC5B08F644C4FBD76D4093D31038E7355038626ED *, const RuntimeMethod*))XRSubsystem_1__ctor_m021B9A195F632D8979FCF0567A90004BA691F58D_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::.ctor(UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor__ctor_m2185C8C50AB138A0C3B5165A92534E2E0D7D57A7 (XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C * __this, Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01  ___cinfo0, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemDescriptor`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem>::.ctor()
inline void SubsystemDescriptor_1__ctor_m7A44244C7A90CD4A823CBB36954E2375C2654C91 (SubsystemDescriptor_1_t9948AD707A9DAB64C5731F571F3CDC1B6D681E36 * __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemDescriptor_1_t9948AD707A9DAB64C5731F571F3CDC1B6D681E36 *, const RuntimeMethod*))SubsystemDescriptor_1__ctor_m8C6A21CD0D0941472B4E6A7D64BA38ACED08BE83_gshared)(__this, method);
}
// System.String UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m9A34BB7AAEFCB43E1627AA047A68C058D730EDC4_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method);
// System.Type UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_subsystemImplementationType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemImplementationType_mDA4920EAF71BB44AED95212F4513B74096E4F7FD_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_supportsViewportBasedRaycast()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsViewportBasedRaycast_m76E31D4FF84E88050FE4E8B6C44FB6E4E71A5A3A_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::set_supportsViewportBasedRaycast(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_set_supportsViewportBasedRaycast_m573D624059387ECB8EAB5386DDA18F04A8B74A29_inline (XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_supportsWorldBasedRaycast()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsWorldBasedRaycast_m5242363FA90D64968F4ED236EC35973B7ABC180A_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::set_supportsWorldBasedRaycast(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_set_supportsWorldBasedRaycast_mA63CC456D0FD28CD57DD2D0C3DEB3AC0DEA60C8B_inline (XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_supportedTrackableTypes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Cinfo_get_supportedTrackableTypes_m0DA573866D46012B650151C7538796542A3E2C70_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::set_supportedTrackableTypes(UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_set_supportedTrackableTypes_mAFC6D42C7EFE47219C8461162392E994364BBD53_inline (XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSubsystem`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>::.ctor()
inline void XRSubsystem_1__ctor_mF1BDC658BE98B8AD0178C3A695732FD3DD5C2929 (XRSubsystem_1_t0F35293BB968891335B58BEFE3611D582FBB1A83 * __this, const RuntimeMethod* method)
{
	((  void (*) (XRSubsystem_1_t0F35293BB968891335B58BEFE3611D582FBB1A83 *, const RuntimeMethod*))XRSubsystem_1__ctor_m021B9A195F632D8979FCF0567A90004BA691F58D_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::.ctor(UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor__ctor_mC3487128AC53B5697213AFF8B2F98F1C3288B3A7 (XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C * __this, Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A  ___cinfo0, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemDescriptor`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>::.ctor()
inline void SubsystemDescriptor_1__ctor_mC887CD5056B890F34245A52118EF295EFB9CD439 (SubsystemDescriptor_1_t5B94A32628776E4C0AECB3BC294482BFB2D3EFF5 * __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemDescriptor_1_t5B94A32628776E4C0AECB3BC294482BFB2D3EFF5 *, const RuntimeMethod*))SubsystemDescriptor_1__ctor_m8C6A21CD0D0941472B4E6A7D64BA38ACED08BE83_gshared)(__this, method);
}
// System.String UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_mA521F604882D1F4C6FD30262F3E2C3B0609BFC55_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, const RuntimeMethod* method);
// System.Type UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_subsystemImplementationType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemImplementationType_m0DA3A6C9EAC6743D765D06C5388E069FCC60DC74_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_supportsInstall()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsInstall_m706A828C9AE61FF74DF4640D80E52148CDF4F3AD_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::set_supportsInstall(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor_set_supportsInstall_mE8D2939BADC8A5579685249EEA3C12617416CEF2_inline (XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_supportsMatchFrameRate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsMatchFrameRate_m1E603F47BF0A28EE5E7377A28D9D2BB29BFD3B6F_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::set_supportsMatchFrameRate(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor_set_supportsMatchFrameRate_m9FB2B904E2E7E4EC51E2089C8DDE97463F4C031D_inline (XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean System.Int32::Equals(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_Equals_mA73E9B3A01B9B9151C262C1E1A56C6AB4891A5E4 (int32_t* __this, int32_t ___obj0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRTextureDescriptor::hasIdenticalTextureMetadata(UnityEngine.XR.ARSubsystems.XRTextureDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRTextureDescriptor_hasIdenticalTextureMetadata_mEEAE086BC369920DB89D8E38BA6A1133436100F2 (XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 * __this, XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRTextureDescriptor::Equals(UnityEngine.XR.ARSubsystems.XRTextureDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRTextureDescriptor_Equals_mD2A71E4A2D68686E74A648896FAC0FCDF02BE0B1 (XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 * __this, XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRTextureDescriptor::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRTextureDescriptor_Equals_m37D3AFD7E110F62E8977937DD66AC053B3F64C8D (XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_GetHashCode_m8628ACEB1A4A6203BCD28B01D59B588715C83291 (XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 * __this, const RuntimeMethod* method);
// System.String System.IntPtr::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IntPtr_ToString_m7CDFDC84936276E62AB76AA238F7571B54DF90B4 (intptr_t* __this, String_t* ___format0, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRTrackedImage::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRTrackedImage_GetHashCode_m312EB4C09316425C0F30B8988A915F647035846B (XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRTrackedImage::Equals(UnityEngine.XR.ARSubsystems.XRTrackedImage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRTrackedImage_Equals_mFE06306D9BB3EBD3C7CCDD555A2F193ED4FE7D65 (XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F * __this, XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRTrackedImage::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRTrackedImage_Equals_m953C1CFB9A3879975873D13E24071F51C772635A (XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_mCB169DF169C36D9D12651785DCBF71ABCC10FD9D_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::set_subsystemImplementationType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_m22F8F6D7511C66B0B2240DABFBA9A38D01C8A31F_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::set_supportsTrackableAttachments(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsTrackableAttachments_m0B0516A50FFA22C3F60483E3498DC6BB1D460995_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, bool ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_mBBEF5C69D3B91763153EDE624C76AC428ECFABB1 (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m07BCEC0FF4D8C2A43AE850689AC5AA4FC0603DE8 (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m8E52493318DDE5F675E85E0733F5F7CCDA3C8339 (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mAFC6038D294F341434D9D67D7EADC7F97C556C9B (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.IntPtr UnityEngine.XR.ARSubsystems.XRCameraSubsystem/CameraImagePlaneCinfo::get_dataPtr()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t CameraImagePlaneCinfo_get_dataPtr_m5281CDEFE43F3D6098315A910D52E13850B14939_inline (CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRCameraSubsystem/CameraImagePlaneCinfo::get_dataLength()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CameraImagePlaneCinfo_get_dataLength_m564E09ED13D1303E1FE1B06E5131D455773EB79A_inline (CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRCameraSubsystem/CameraImagePlaneCinfo::get_rowStride()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CameraImagePlaneCinfo_get_rowStride_m237F56D214542218ED13F6D64408895038A1789C_inline (CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRCameraSubsystem/CameraImagePlaneCinfo::get_pixelStride()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CameraImagePlaneCinfo_get_pixelStride_mD729A4B48D646AB2DB440E813742FA3723A94C27_inline (CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 * __this, const RuntimeMethod* method);
// System.Boolean System.IntPtr::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_Equals_m8ABF0A82F61F3B236B11DD4A1E19CEC5CC5A50F0 (intptr_t* __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystem/CameraImagePlaneCinfo::Equals(UnityEngine.XR.ARSubsystems.XRCameraSubsystem/CameraImagePlaneCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraImagePlaneCinfo_Equals_mA63A2FC92BE0863CE255A5540AE12B6A32C31101 (CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 * __this, CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystem/CameraImagePlaneCinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraImagePlaneCinfo_Equals_mA584B5FBAB613A1B7A83B1C0413089390EFFCBBD (CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRCameraSubsystem/CameraImagePlaneCinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CameraImagePlaneCinfo_GetHashCode_mD22746F20EA784A20EE4502A78218457A48125E3 (CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 * __this, const RuntimeMethod* method);
// System.String UnityEngine.XR.ARSubsystems.XRCameraSubsystem/CameraImagePlaneCinfo::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CameraImagePlaneCinfo_ToString_m2B60D32513350E0AE53B003B7F3E94F75B3D86AD (CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 * __this, const RuntimeMethod* method);
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * Shader_Find_m596EC6EBDCA8C9D5D86E2410A319928C1E8E6B5A (String_t* ___name0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___shader0, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Capabilities UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::get_capabilities()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Cinfo_get_capabilities_m09C807B048E192438A9B0D0C17808FF5BFF81A8A_inline (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::set_capabilities(UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Capabilities)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_capabilities_mB2A17E458179A44C2EACB82699FBC5B5611C7580_inline (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::set_supportsFeaturePoints(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsFeaturePoints_mD44DBE0A79D63D3234369E573653A81DC7FB8E1D (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::set_supportsConfidence(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsConfidence_m78F76CAAFD5D667ADBED1580E1F8A1286B59C46D (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::set_supportsUniqueIds(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsUniqueIds_mFF68A678A13F7C1BD9E157690649255A27369514 (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m560240A9ABB2B3E0C71D2EF694812209060F7781 (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m1FFC7731C8021381A825E2D56189CDCD1BC39FD1 (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_m93DAAACF242CBA5B8EE758CE4E04BCCF51639860 (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m57970CF355AB638BAD860B9673F0E76B42126C1A_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::set_subsystemImplementationType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_m585F6DF7C070965F732F3A4C5B6BF11A4D2DF23F_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::set_supportsMovingImages(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsMovingImages_m04BB57385FC0A2025414437DB1BEFBE97372E579_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::set_requiresPhysicalImageDimensions(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_requiresPhysicalImageDimensions_mC794914720C62ACB74173F165B3015ED9B5CA2A6_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::set_supportsMutableLibrary(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsMutableLibrary_m434D9A05D0025989AA711BA50139FD348D127661_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, bool ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_m8DB95DB86F786705B32382E014B3A5B96F81F4B0 (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m2D882FB6E58A034244EC05B2701C303C0763C3C1 (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m7D227238D404DAA7ED5C72A9C3843FE6CB852ED4 (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
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
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsClassification(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsClassification_mA3B11D7CA4F960C89E729E5161AD7CC3211B933C_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m997D9E2FAF1A57953B2A2C95A4221C9EB82843BC (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m38EB24520E9273465E918F9F14D72FCE8EE4EB8B (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_m219A4B64FB8A60D947BA345FBD65292065581378 (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method);
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
// System.Int32 UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_mE07F77F64788F12838A7D8A20E07DE366DDAEEEA (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m96B4DD943D8AAA5D31B0B5BCD0EEC1F94E60F146 (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_mFDD42918C99F796C9737C544D9858098C0241716 (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.String UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Cinfo_ToString_m5E549199F8D40CF630BB8ED6B46EC5F51E580BEB (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_supportsInstall(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsInstall_m05EE61C58E505A8F20DEA68862395341F1DAD3FD_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_supportsMatchFrameRate(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsMatchFrameRate_m9CB328CEF43BCE3E59F26A97D32AEE1D201F8787_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m6A2CAB13FAD54AB05458DC5DE1FAB5C651E9D656_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_subsystemImplementationType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_mEFA8A5F68BEA841ED51B8D17DAF2E933BA7893EC_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_m52D192E832A52B87FB2F03DB84EB47EED7DCD48C (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m1C37149A7375CC94768E18102A1CB1AED3E3FF77 (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m515E1A8509A7C1472469FD535B7CBE5D58E45A78 (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
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
// System.Void UnityEngine.XR.ARSubsystems.BoundedPlane::.ctor(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.Pose,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.PlaneAlignment,UnityEngine.XR.ARSubsystems.TrackingState,System.IntPtr,UnityEngine.XR.ARSubsystems.PlaneClassification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundedPlane__ctor_mDCFBC1B53B86B650BBB103C9FC25E7872CBF804B (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___trackableId0, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___subsumedBy1, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___pose2, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___center3, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___size4, int32_t ___alignment5, int32_t ___trackingState6, intptr_t ___nativePtr7, int32_t ___classification8, const RuntimeMethod* method)
{
	{
		// m_TrackableId = trackableId;
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_0 = ___trackableId0;
		__this->set_m_TrackableId_1(L_0);
		// m_SubsumedById = subsumedBy;
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_1 = ___subsumedBy1;
		__this->set_m_SubsumedById_2(L_1);
		// m_Pose = pose;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_2 = ___pose2;
		__this->set_m_Pose_4(L_2);
		// m_Center = center;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___center3;
		__this->set_m_Center_3(L_3);
		// m_Size = size;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___size4;
		__this->set_m_Size_5(L_4);
		// m_Alignment = alignment;
		int32_t L_5 = ___alignment5;
		__this->set_m_Alignment_6(L_5);
		// m_TrackingState = trackingState;
		int32_t L_6 = ___trackingState6;
		__this->set_m_TrackingState_7(L_6);
		// m_NativePtr = nativePtr;
		intptr_t L_7 = ___nativePtr7;
		__this->set_m_NativePtr_8((intptr_t)L_7);
		// m_Classification = classification;
		int32_t L_8 = ___classification8;
		__this->set_m_Classification_9(L_8);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BoundedPlane__ctor_mDCFBC1B53B86B650BBB103C9FC25E7872CBF804B_AdjustorThunk (RuntimeObject * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___trackableId0, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___subsumedBy1, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___pose2, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___center3, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___size4, int32_t ___alignment5, int32_t ___trackingState6, intptr_t ___nativePtr7, int32_t ___classification8, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * _thisAdjusted = reinterpret_cast<BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 *>(__this + _offset);
	BoundedPlane__ctor_mDCFBC1B53B86B650BBB103C9FC25E7872CBF804B(_thisAdjusted, ___trackableId0, ___subsumedBy1, ___pose2, ___center3, ___size4, ___alignment5, ___trackingState6, ___nativePtr7, ___classification8, method);
}
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::get_trackableId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  BoundedPlane_get_trackableId_m32943441D74DC226DC907A05B5B6C6EBBC70F95B (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method)
{
	{
		// public TrackableId trackableId { get { return m_TrackableId; } }
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_0 = __this->get_m_TrackableId_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  BoundedPlane_get_trackableId_m32943441D74DC226DC907A05B5B6C6EBBC70F95B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * _thisAdjusted = reinterpret_cast<BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 *>(__this + _offset);
	return BoundedPlane_get_trackableId_m32943441D74DC226DC907A05B5B6C6EBBC70F95B_inline(_thisAdjusted, method);
}
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::get_subsumedById()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  BoundedPlane_get_subsumedById_mD61EFD7A91B5F290F63A1AE59153B75BB33B89CF (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method)
{
	{
		// public TrackableId subsumedById { get { return m_SubsumedById; } }
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_0 = __this->get_m_SubsumedById_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  BoundedPlane_get_subsumedById_mD61EFD7A91B5F290F63A1AE59153B75BB33B89CF_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * _thisAdjusted = reinterpret_cast<BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 *>(__this + _offset);
	return BoundedPlane_get_subsumedById_mD61EFD7A91B5F290F63A1AE59153B75BB33B89CF_inline(_thisAdjusted, method);
}
// UnityEngine.Pose UnityEngine.XR.ARSubsystems.BoundedPlane::get_pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  BoundedPlane_get_pose_m8302E13809156362584FA0AE137DD911D30665BA (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method)
{
	{
		// public Pose pose { get { return m_Pose; } }
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_0 = __this->get_m_Pose_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  BoundedPlane_get_pose_m8302E13809156362584FA0AE137DD911D30665BA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * _thisAdjusted = reinterpret_cast<BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 *>(__this + _offset);
	return BoundedPlane_get_pose_m8302E13809156362584FA0AE137DD911D30665BA_inline(_thisAdjusted, method);
}
// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  BoundedPlane_get_center_mA4667303D86B331F7EC5F278910145E7633EA973 (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 center { get { return m_Center; } }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_m_Center_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  BoundedPlane_get_center_mA4667303D86B331F7EC5F278910145E7633EA973_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * _thisAdjusted = reinterpret_cast<BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 *>(__this + _offset);
	return BoundedPlane_get_center_mA4667303D86B331F7EC5F278910145E7633EA973_inline(_thisAdjusted, method);
}
// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  BoundedPlane_get_size_m204F4F37C0FB6F7294682D961B53F4F9639E3882 (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 size { get { return m_Size; } }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_m_Size_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  BoundedPlane_get_size_m204F4F37C0FB6F7294682D961B53F4F9639E3882_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * _thisAdjusted = reinterpret_cast<BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 *>(__this + _offset);
	return BoundedPlane_get_size_m204F4F37C0FB6F7294682D961B53F4F9639E3882_inline(_thisAdjusted, method);
}
// UnityEngine.XR.ARSubsystems.PlaneAlignment UnityEngine.XR.ARSubsystems.BoundedPlane::get_alignment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoundedPlane_get_alignment_m72B849B54224B1493DFF448BCF2AB8634751DC71 (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method)
{
	{
		// public PlaneAlignment alignment { get { return m_Alignment; } }
		int32_t L_0 = __this->get_m_Alignment_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t BoundedPlane_get_alignment_m72B849B54224B1493DFF448BCF2AB8634751DC71_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * _thisAdjusted = reinterpret_cast<BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 *>(__this + _offset);
	return BoundedPlane_get_alignment_m72B849B54224B1493DFF448BCF2AB8634751DC71_inline(_thisAdjusted, method);
}
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.BoundedPlane::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoundedPlane_get_trackingState_mBF10ADD6DD969A0DA7FCC8299FFA56AEB9B837CA (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method)
{
	{
		// public TrackingState trackingState { get { return m_TrackingState; } }
		int32_t L_0 = __this->get_m_TrackingState_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t BoundedPlane_get_trackingState_mBF10ADD6DD969A0DA7FCC8299FFA56AEB9B837CA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * _thisAdjusted = reinterpret_cast<BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 *>(__this + _offset);
	return BoundedPlane_get_trackingState_mBF10ADD6DD969A0DA7FCC8299FFA56AEB9B837CA_inline(_thisAdjusted, method);
}
// System.IntPtr UnityEngine.XR.ARSubsystems.BoundedPlane::get_nativePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t BoundedPlane_get_nativePtr_m626921F0179BF37BC5F06C2587D298FB40F31FE9 (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method)
{
	{
		// public IntPtr nativePtr { get { return m_NativePtr; } }
		intptr_t L_0 = __this->get_m_NativePtr_8();
		return (intptr_t)L_0;
	}
}
IL2CPP_EXTERN_C  intptr_t BoundedPlane_get_nativePtr_m626921F0179BF37BC5F06C2587D298FB40F31FE9_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * _thisAdjusted = reinterpret_cast<BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 *>(__this + _offset);
	return BoundedPlane_get_nativePtr_m626921F0179BF37BC5F06C2587D298FB40F31FE9_inline(_thisAdjusted, method);
}
// UnityEngine.XR.ARSubsystems.PlaneClassification UnityEngine.XR.ARSubsystems.BoundedPlane::get_classification()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoundedPlane_get_classification_m842651162BFE9633C414B16CD1D86FBBE86589A3 (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method)
{
	{
		// public PlaneClassification classification => m_Classification;
		int32_t L_0 = __this->get_m_Classification_9();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t BoundedPlane_get_classification_m842651162BFE9633C414B16CD1D86FBBE86589A3_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * _thisAdjusted = reinterpret_cast<BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 *>(__this + _offset);
	return BoundedPlane_get_classification_m842651162BFE9633C414B16CD1D86FBBE86589A3_inline(_thisAdjusted, method);
}
// System.String UnityEngine.XR.ARSubsystems.BoundedPlane::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BoundedPlane_ToString_m0A542F5D2CB72755643184989BE3B9E6899D731A (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoundedPlane_ToString_m0A542F5D2CB72755643184989BE3B9E6899D731A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return string.Format(
		//     "Plane:\n\ttrackableId: {0}\n\tsubsumedById: {1}\n\tpose: {2}\n\tcenter: {3}\n\tsize: {4}\n\talignment: {5}\n\tclassification: {6}\n\ttrackingState: {7}\n\tnativePtr: {8:X16}",
		//     trackableId,
		//     subsumedById,
		//     pose,
		//     center,
		//     size,
		//     alignment,
		//     classification,
		//     trackingState,
		//     nativePtr.ToInt64());
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_2 = BoundedPlane_get_trackableId_m32943441D74DC226DC907A05B5B6C6EBBC70F95B_inline((BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 *)__this, /*hidden argument*/NULL);
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_3 = L_2;
		RuntimeObject * L_4 = Box(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_1;
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_6 = BoundedPlane_get_subsumedById_mD61EFD7A91B5F290F63A1AE59153B75BB33B89CF_inline((BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 *)__this, /*hidden argument*/NULL);
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_7 = L_6;
		RuntimeObject * L_8 = Box(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_5;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_10 = BoundedPlane_get_pose_m8302E13809156362584FA0AE137DD911D30665BA_inline((BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 *)__this, /*hidden argument*/NULL);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_11 = L_10;
		RuntimeObject * L_12 = Box(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_12);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = L_9;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14 = BoundedPlane_get_center_mA4667303D86B331F7EC5F278910145E7633EA973_inline((BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 *)__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15 = L_14;
		RuntimeObject * L_16 = Box(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_16);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = L_13;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18 = BoundedPlane_get_size_m204F4F37C0FB6F7294682D961B53F4F9639E3882_inline((BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 *)__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19 = L_18;
		RuntimeObject * L_20 = Box(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_20);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_21 = L_17;
		int32_t L_22 = BoundedPlane_get_alignment_m72B849B54224B1493DFF448BCF2AB8634751DC71_inline((BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 *)__this, /*hidden argument*/NULL);
		int32_t L_23 = L_22;
		RuntimeObject * L_24 = Box(PlaneAlignment_t1BB7048E3969913434FB1B3BCBCA2E81D4E71ADA_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_24);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_24);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_25 = L_21;
		int32_t L_26 = BoundedPlane_get_classification_m842651162BFE9633C414B16CD1D86FBBE86589A3_inline((BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 *)__this, /*hidden argument*/NULL);
		int32_t L_27 = L_26;
		RuntimeObject * L_28 = Box(PlaneClassification_tAC2E2E9609D4396BC311E2987CA3EFA5115EDD10_il2cpp_TypeInfo_var, &L_27);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_28);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_28);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_29 = L_25;
		int32_t L_30 = BoundedPlane_get_trackingState_mBF10ADD6DD969A0DA7FCC8299FFA56AEB9B837CA_inline((BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 *)__this, /*hidden argument*/NULL);
		int32_t L_31 = L_30;
		RuntimeObject * L_32 = Box(TrackingState_tB6996ED0D52D2A17DFACC90800705B81D370FC38_il2cpp_TypeInfo_var, &L_31);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_32);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject *)L_32);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_33 = L_29;
		intptr_t L_34 = BoundedPlane_get_nativePtr_m626921F0179BF37BC5F06C2587D298FB40F31FE9_inline((BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 *)__this, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_34;
		int64_t L_35 = IntPtr_ToInt64_m521F809F5D9ECAF93E808CFFFE45F67620C7879A((intptr_t*)(&V_0), /*hidden argument*/NULL);
		int64_t L_36 = L_35;
		RuntimeObject * L_37 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_36);
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_37);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject *)L_37);
		String_t* L_38 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteralD7D10F5EBD63494DC1C7F8C9033E7A490800B3AF, L_33, /*hidden argument*/NULL);
		return L_38;
	}
}
IL2CPP_EXTERN_C  String_t* BoundedPlane_ToString_m0A542F5D2CB72755643184989BE3B9E6899D731A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * _thisAdjusted = reinterpret_cast<BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 *>(__this + _offset);
	return BoundedPlane_ToString_m0A542F5D2CB72755643184989BE3B9E6899D731A(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.BoundedPlane::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoundedPlane_Equals_m5B2E8A0932BC0242B51091CDDFED85901156A005 (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoundedPlane_Equals_m5B2E8A0932BC0242B51091CDDFED85901156A005_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ReferenceEquals(null, obj)) return false;
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// if (ReferenceEquals(null, obj)) return false;
		return (bool)0;
	}

IL_0005:
	{
		// return obj is BoundedPlane && Equals((BoundedPlane)obj);
		RuntimeObject * L_1 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_1, BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject * L_2 = ___obj0;
		bool L_3 = BoundedPlane_Equals_m3A984C969EC0ACE7B83F661C80AA82C54D455D1A((BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 *)__this, ((*(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 *)((BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 *)UnBox(L_2, BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_3;
	}

IL_001a:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool BoundedPlane_Equals_m5B2E8A0932BC0242B51091CDDFED85901156A005_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * _thisAdjusted = reinterpret_cast<BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 *>(__this + _offset);
	return BoundedPlane_Equals_m5B2E8A0932BC0242B51091CDDFED85901156A005(_thisAdjusted, ___obj0, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.BoundedPlane::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoundedPlane_GetHashCode_m99D4D46A432C2E00A182A86788A750522BFBCAEF (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// var hashCode = m_TrackableId.GetHashCode();
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * L_0 = __this->get_address_of_m_TrackableId_1();
		int32_t L_1 = TrackableId_GetHashCode_mFD297FC6DB40FB5B28C6E9B7A2CF2785D75C4E86((TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B *)L_0, /*hidden argument*/NULL);
		// hashCode = (hashCode * 486187739) + m_SubsumedById.GetHashCode();
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * L_2 = __this->get_address_of_m_SubsumedById_2();
		int32_t L_3 = TrackableId_GetHashCode_mFD297FC6DB40FB5B28C6E9B7A2CF2785D75C4E86((TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B *)L_2, /*hidden argument*/NULL);
		// hashCode = (hashCode * 486187739) + m_Pose.GetHashCode();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_4 = __this->get_address_of_m_Pose_4();
		int32_t L_5 = Pose_GetHashCode_mE1DD7FBCCB1C979B252F0B117276BA11CF4D2367((Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A *)L_4, /*hidden argument*/NULL);
		// hashCode = (hashCode * 486187739) + m_Center.GetHashCode();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_6 = __this->get_address_of_m_Center_3();
		int32_t L_7 = Vector2_GetHashCode_m9A5DD8406289F38806CC42C394E324C1C2AB3732((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_6, /*hidden argument*/NULL);
		// hashCode = (hashCode * 486187739) + m_Size.GetHashCode();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_8 = __this->get_address_of_m_Size_5();
		int32_t L_9 = Vector2_GetHashCode_m9A5DD8406289F38806CC42C394E324C1C2AB3732((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_8, /*hidden argument*/NULL);
		// hashCode = (hashCode * 486187739) + ((int)m_Alignment).GetHashCode();
		int32_t L_10 = __this->get_m_Alignment_6();
		V_0 = L_10;
		int32_t L_11 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(&V_0), /*hidden argument*/NULL);
		// hashCode = (hashCode * 486187739) + ((int)m_Classification).GetHashCode();
		int32_t L_12 = __this->get_m_Classification_9();
		V_0 = L_12;
		int32_t L_13 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(&V_0), /*hidden argument*/NULL);
		// hashCode = (hashCode * 486187739) + ((int)m_TrackingState).GetHashCode();
		int32_t L_14 = __this->get_m_TrackingState_7();
		V_0 = L_14;
		int32_t L_15 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(&V_0), /*hidden argument*/NULL);
		// hashCode = (hashCode * 486187739) + m_NativePtr.GetHashCode();
		intptr_t* L_16 = __this->get_address_of_m_NativePtr_8();
		int32_t L_17 = IntPtr_GetHashCode_m55E65FB52EFE7C0EBC3C28E66A5D7542F3B1D35D((intptr_t*)L_16, /*hidden argument*/NULL);
		// return hashCode;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)((int32_t)486187739))), (int32_t)L_3)), (int32_t)((int32_t)486187739))), (int32_t)L_5)), (int32_t)((int32_t)486187739))), (int32_t)L_7)), (int32_t)((int32_t)486187739))), (int32_t)L_9)), (int32_t)((int32_t)486187739))), (int32_t)L_11)), (int32_t)((int32_t)486187739))), (int32_t)L_13)), (int32_t)((int32_t)486187739))), (int32_t)L_15)), (int32_t)((int32_t)486187739))), (int32_t)L_17));
	}
}
IL2CPP_EXTERN_C  int32_t BoundedPlane_GetHashCode_m99D4D46A432C2E00A182A86788A750522BFBCAEF_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * _thisAdjusted = reinterpret_cast<BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 *>(__this + _offset);
	return BoundedPlane_GetHashCode_m99D4D46A432C2E00A182A86788A750522BFBCAEF(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.BoundedPlane::Equals(UnityEngine.XR.ARSubsystems.BoundedPlane)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoundedPlane_Equals_m3A984C969EC0ACE7B83F661C80AA82C54D455D1A (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  ___other0, const RuntimeMethod* method)
{
	{
		// return
		//     m_TrackableId.Equals(other.m_TrackableId) &&
		//     m_SubsumedById.Equals(other.m_SubsumedById) &&
		//     m_Pose.Equals(other.m_Pose) &&
		//     m_Center.Equals(other.m_Center) &&
		//     m_Size.Equals(other.m_Size) &&
		//     (m_Alignment == other.m_Alignment) &&
		//     (m_Classification == other.m_Classification) &&
		//     (m_TrackingState == other.m_TrackingState) &&
		//     (m_NativePtr == other.m_NativePtr);
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * L_0 = __this->get_address_of_m_TrackableId_1();
		BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  L_1 = ___other0;
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_2 = L_1.get_m_TrackableId_1();
		bool L_3 = TrackableId_Equals_m1DF35616359175E3D66DE18250E8CDA1E6462B06((TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B *)L_0, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_009e;
		}
	}
	{
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * L_4 = __this->get_address_of_m_SubsumedById_2();
		BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  L_5 = ___other0;
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_6 = L_5.get_m_SubsumedById_2();
		bool L_7 = TrackableId_Equals_m1DF35616359175E3D66DE18250E8CDA1E6462B06((TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B *)L_4, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_009e;
		}
	}
	{
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_8 = __this->get_address_of_m_Pose_4();
		BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  L_9 = ___other0;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_10 = L_9.get_m_Pose_4();
		bool L_11 = Pose_Equals_mFAE0041090F2032B8FCE63A0F289DD206134BF15((Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A *)L_8, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_009e;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_12 = __this->get_address_of_m_Center_3();
		BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  L_13 = ___other0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14 = L_13.get_m_Center_3();
		bool L_15 = Vector2_Equals_m6E08A16717F2B9EE8B24EBA6B234A03098D5F05D_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_12, L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_009e;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_16 = __this->get_address_of_m_Size_5();
		BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  L_17 = ___other0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18 = L_17.get_m_Size_5();
		bool L_19 = Vector2_Equals_m6E08A16717F2B9EE8B24EBA6B234A03098D5F05D_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_16, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_009e;
		}
	}
	{
		int32_t L_20 = __this->get_m_Alignment_6();
		BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  L_21 = ___other0;
		int32_t L_22 = L_21.get_m_Alignment_6();
		if ((!(((uint32_t)L_20) == ((uint32_t)L_22))))
		{
			goto IL_009e;
		}
	}
	{
		int32_t L_23 = __this->get_m_Classification_9();
		BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  L_24 = ___other0;
		int32_t L_25 = L_24.get_m_Classification_9();
		if ((!(((uint32_t)L_23) == ((uint32_t)L_25))))
		{
			goto IL_009e;
		}
	}
	{
		int32_t L_26 = __this->get_m_TrackingState_7();
		BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  L_27 = ___other0;
		int32_t L_28 = L_27.get_m_TrackingState_7();
		if ((!(((uint32_t)L_26) == ((uint32_t)L_28))))
		{
			goto IL_009e;
		}
	}
	{
		intptr_t L_29 = __this->get_m_NativePtr_8();
		BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  L_30 = ___other0;
		intptr_t L_31 = L_30.get_m_NativePtr_8();
		bool L_32 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_29, (intptr_t)L_31, /*hidden argument*/NULL);
		return L_32;
	}

IL_009e:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool BoundedPlane_Equals_m3A984C969EC0ACE7B83F661C80AA82C54D455D1A_AdjustorThunk (RuntimeObject * __this, BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * _thisAdjusted = reinterpret_cast<BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 *>(__this + _offset);
	return BoundedPlane_Equals_m3A984C969EC0ACE7B83F661C80AA82C54D455D1A(_thisAdjusted, ___other0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.BoundedPlane::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundedPlane__cctor_m8E99A66F7A4052C7C0C7CE3077F4172F3E196E17 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoundedPlane__cctor_m8E99A66F7A4052C7C0C7CE3077F4172F3E196E17_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly BoundedPlane s_Default = new BoundedPlane(
		//         TrackableId.invalidId,
		//         TrackableId.invalidId,
		//         Pose.identity,
		//         Vector2.zero,
		//         Vector2.zero,
		//         PlaneAlignment.None,
		//         TrackingState.None,
		//         IntPtr.Zero,
		//         PlaneClassification.None);
		IL2CPP_RUNTIME_CLASS_INIT(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_il2cpp_TypeInfo_var);
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_0 = TrackableId_get_invalidId_m06B698EFFA7748E185299C72B5CEC1AA5B221F85_inline(/*hidden argument*/NULL);
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_1 = TrackableId_get_invalidId_m06B698EFFA7748E185299C72B5CEC1AA5B221F85_inline(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_il2cpp_TypeInfo_var);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_2 = Pose_get_identity_m334B16AC3024785914BCC5A2B949750A010878BF(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  L_5;
		memset((&L_5), 0, sizeof(L_5));
		BoundedPlane__ctor_mDCFBC1B53B86B650BBB103C9FC25E7872CBF804B((&L_5), L_0, L_1, L_2, L_3, L_4, 0, 0, (intptr_t)(0), 0, /*hidden argument*/NULL);
		((BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_StaticFields*)il2cpp_codegen_static_fields_for(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_il2cpp_TypeInfo_var))->set_s_Default_0(L_5);
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
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::get_invalidId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  TrackableId_get_invalidId_m06B698EFFA7748E185299C72B5CEC1AA5B221F85 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableId_get_invalidId_m06B698EFFA7748E185299C72B5CEC1AA5B221F85_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static TrackableId invalidId { get { return s_InvalidId; } }
		IL2CPP_RUNTIME_CLASS_INIT(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_il2cpp_TypeInfo_var);
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_0 = ((TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields*)il2cpp_codegen_static_fields_for(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_il2cpp_TypeInfo_var))->get_s_InvalidId_0();
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableId::.ctor(System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableId__ctor_mB9B301A9CD03355A4E03A2B1A102B6B75F190792 (TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * __this, uint64_t ___subId10, uint64_t ___subId21, const RuntimeMethod* method)
{
	{
		// m_SubId1 = subId1;
		uint64_t L_0 = ___subId10;
		__this->set_m_SubId1_1(L_0);
		// m_SubId2 = subId2;
		uint64_t L_1 = ___subId21;
		__this->set_m_SubId2_2(L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableId__ctor_mB9B301A9CD03355A4E03A2B1A102B6B75F190792_AdjustorThunk (RuntimeObject * __this, uint64_t ___subId10, uint64_t ___subId21, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * _thisAdjusted = reinterpret_cast<TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B *>(__this + _offset);
	TrackableId__ctor_mB9B301A9CD03355A4E03A2B1A102B6B75F190792(_thisAdjusted, ___subId10, ___subId21, method);
}
// System.String UnityEngine.XR.ARSubsystems.TrackableId::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TrackableId_ToString_mCD45FD4FF5DF6DE30A38AD05D02CFA7B2B696BB1 (TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableId_ToString_mCD45FD4FF5DF6DE30A38AD05D02CFA7B2B696BB1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format("{0}-{1}",
		//     m_SubId1.ToString("X16"),
		//     m_SubId2.ToString("X16"));
		uint64_t* L_0 = __this->get_address_of_m_SubId1_1();
		String_t* L_1 = UInt64_ToString_mFE48F1D174A1F741AB0795C1164BF45BF37F86E6((uint64_t*)L_0, _stringLiteralFDA1C52D0E58360F4E8FD608757CCD98D8772D4F, /*hidden argument*/NULL);
		uint64_t* L_2 = __this->get_address_of_m_SubId2_2();
		String_t* L_3 = UInt64_ToString_mFE48F1D174A1F741AB0795C1164BF45BF37F86E6((uint64_t*)L_2, _stringLiteralFDA1C52D0E58360F4E8FD608757CCD98D8772D4F, /*hidden argument*/NULL);
		String_t* L_4 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteralFBAF124AB08242B7785EC2B6DBC3C6459CB98BC8, L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  String_t* TrackableId_ToString_mCD45FD4FF5DF6DE30A38AD05D02CFA7B2B696BB1_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * _thisAdjusted = reinterpret_cast<TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B *>(__this + _offset);
	return TrackableId_ToString_mCD45FD4FF5DF6DE30A38AD05D02CFA7B2B696BB1(_thisAdjusted, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.TrackableId::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrackableId_GetHashCode_mFD297FC6DB40FB5B28C6E9B7A2CF2785D75C4E86 (TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * __this, const RuntimeMethod* method)
{
	{
		// var hash = m_SubId1.GetHashCode();
		uint64_t* L_0 = __this->get_address_of_m_SubId1_1();
		int32_t L_1 = UInt64_GetHashCode_mCDF662897A3F02CED11A9F9E66C5BF4E28C02B33((uint64_t*)L_0, /*hidden argument*/NULL);
		// return hash * 486187739 + m_SubId2.GetHashCode();
		uint64_t* L_2 = __this->get_address_of_m_SubId2_2();
		int32_t L_3 = UInt64_GetHashCode_mCDF662897A3F02CED11A9F9E66C5BF4E28C02B33((uint64_t*)L_2, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)((int32_t)486187739))), (int32_t)L_3));
	}
}
IL2CPP_EXTERN_C  int32_t TrackableId_GetHashCode_mFD297FC6DB40FB5B28C6E9B7A2CF2785D75C4E86_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * _thisAdjusted = reinterpret_cast<TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B *>(__this + _offset);
	return TrackableId_GetHashCode_mFD297FC6DB40FB5B28C6E9B7A2CF2785D75C4E86(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableId::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableId_Equals_mA542615B3B7AAD52AEBBEFBCE7E6987B2DE3849D (TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableId_Equals_mA542615B3B7AAD52AEBBEFBCE7E6987B2DE3849D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return obj is TrackableId && Equals((TrackableId)obj);
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2 = TrackableId_Equals_m1DF35616359175E3D66DE18250E8CDA1E6462B06((TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B *)__this, ((*(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B *)((TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B *)UnBox(L_1, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool TrackableId_Equals_mA542615B3B7AAD52AEBBEFBCE7E6987B2DE3849D_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * _thisAdjusted = reinterpret_cast<TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B *>(__this + _offset);
	return TrackableId_Equals_mA542615B3B7AAD52AEBBEFBCE7E6987B2DE3849D(_thisAdjusted, ___obj0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableId::Equals(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableId_Equals_m1DF35616359175E3D66DE18250E8CDA1E6462B06 (TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___other0, const RuntimeMethod* method)
{
	{
		// return (m_SubId1 == other.m_SubId1) && (m_SubId2 == other.m_SubId2);
		uint64_t L_0 = __this->get_m_SubId1_1();
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_1 = ___other0;
		uint64_t L_2 = L_1.get_m_SubId1_1();
		if ((!(((uint64_t)L_0) == ((uint64_t)L_2))))
		{
			goto IL_001d;
		}
	}
	{
		uint64_t L_3 = __this->get_m_SubId2_2();
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_4 = ___other0;
		uint64_t L_5 = L_4.get_m_SubId2_2();
		return (bool)((((int64_t)L_3) == ((int64_t)L_5))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool TrackableId_Equals_m1DF35616359175E3D66DE18250E8CDA1E6462B06_AdjustorThunk (RuntimeObject * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * _thisAdjusted = reinterpret_cast<TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B *>(__this + _offset);
	return TrackableId_Equals_m1DF35616359175E3D66DE18250E8CDA1E6462B06(_thisAdjusted, ___other0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableId::op_Equality(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableId_op_Equality_m0868EBB6BB9BA72B226D0717352604B3E8EA119B (TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___id10, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___id21, const RuntimeMethod* method)
{
	{
		// return
		//     (id1.m_SubId1 == id2.m_SubId1) &&
		//     (id1.m_SubId2 == id2.m_SubId2);
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_0 = ___id10;
		uint64_t L_1 = L_0.get_m_SubId1_1();
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_2 = ___id21;
		uint64_t L_3 = L_2.get_m_SubId1_1();
		if ((!(((uint64_t)L_1) == ((uint64_t)L_3))))
		{
			goto IL_001d;
		}
	}
	{
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_4 = ___id10;
		uint64_t L_5 = L_4.get_m_SubId2_2();
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_6 = ___id21;
		uint64_t L_7 = L_6.get_m_SubId2_2();
		return (bool)((((int64_t)L_5) == ((int64_t)L_7))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableId::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableId__cctor_m1B22B00F74C0C62B97D7EAB4E9B17F55B2DE94E7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableId__cctor_m1B22B00F74C0C62B97D7EAB4E9B17F55B2DE94E7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static TrackableId s_InvalidId = new TrackableId(0, 0);
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_0;
		memset((&L_0), 0, sizeof(L_0));
		TrackableId__ctor_mB9B301A9CD03355A4E03A2B1A102B6B75F190792((&L_0), (((int64_t)((int64_t)0))), (((int64_t)((int64_t)0))), /*hidden argument*/NULL);
		((TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields*)il2cpp_codegen_static_fields_for(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_il2cpp_TypeInfo_var))->set_s_InvalidId_0(L_0);
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
// System.Int32 UnityEngine.XR.ARSubsystems.XRAnchor::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRAnchor_GetHashCode_m3928C95D8DE59840CB82D9FD13EDEEAEA2A89376 (XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * __this, const RuntimeMethod* method)
{
	{
		// var hashCode = m_Id.GetHashCode();
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * L_0 = __this->get_address_of_m_Id_1();
		int32_t L_1 = TrackableId_GetHashCode_mFD297FC6DB40FB5B28C6E9B7A2CF2785D75C4E86((TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B *)L_0, /*hidden argument*/NULL);
		// hashCode = hashCode * 486187739 + m_Pose.GetHashCode();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_2 = __this->get_address_of_m_Pose_2();
		int32_t L_3 = Pose_GetHashCode_mE1DD7FBCCB1C979B252F0B117276BA11CF4D2367((Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A *)L_2, /*hidden argument*/NULL);
		// hashCode = hashCode * 486187739 + m_TrackingState.GetHashCode();
		int32_t* L_4 = __this->get_address_of_m_TrackingState_3();
		int32_t L_5 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)L_4, /*hidden argument*/NULL);
		// hashCode = hashCode * 486187739 + m_NativePtr.GetHashCode();
		intptr_t* L_6 = __this->get_address_of_m_NativePtr_4();
		int32_t L_7 = IntPtr_GetHashCode_m55E65FB52EFE7C0EBC3C28E66A5D7542F3B1D35D((intptr_t*)L_6, /*hidden argument*/NULL);
		// hashCode = hashCode * 486187739 + m_SessionId.GetHashCode();
		Guid_t * L_8 = __this->get_address_of_m_SessionId_5();
		int32_t L_9 = Guid_GetHashCode_mD32F5054E937C98B3D082594B3849808F1E92AE7((Guid_t *)L_8, /*hidden argument*/NULL);
		// return hashCode;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)((int32_t)486187739))), (int32_t)L_3)), (int32_t)((int32_t)486187739))), (int32_t)L_5)), (int32_t)((int32_t)486187739))), (int32_t)L_7)), (int32_t)((int32_t)486187739))), (int32_t)L_9));
	}
}
IL2CPP_EXTERN_C  int32_t XRAnchor_GetHashCode_m3928C95D8DE59840CB82D9FD13EDEEAEA2A89376_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * _thisAdjusted = reinterpret_cast<XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C *>(__this + _offset);
	return XRAnchor_GetHashCode_m3928C95D8DE59840CB82D9FD13EDEEAEA2A89376(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRAnchor::Equals(UnityEngine.XR.ARSubsystems.XRAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRAnchor_Equals_mE6AC873FF43B605D47F5AB76F0ADAD9A6EDEA25B (XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * __this, XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  ___other0, const RuntimeMethod* method)
{
	{
		// return
		//     m_Id.Equals(other.m_Id) &&
		//     m_Pose.Equals(other.m_Pose) &&
		//     m_TrackingState == other.m_TrackingState &&
		//     m_NativePtr == other.m_NativePtr &&
		//     m_SessionId.Equals(other.m_SessionId);
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * L_0 = __this->get_address_of_m_Id_1();
		XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  L_1 = ___other0;
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_2 = L_1.get_m_Id_1();
		bool L_3 = TrackableId_Equals_m1DF35616359175E3D66DE18250E8CDA1E6462B06((TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B *)L_0, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0059;
		}
	}
	{
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_4 = __this->get_address_of_m_Pose_2();
		XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  L_5 = ___other0;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_6 = L_5.get_m_Pose_2();
		bool L_7 = Pose_Equals_mFAE0041090F2032B8FCE63A0F289DD206134BF15((Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A *)L_4, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_8 = __this->get_m_TrackingState_3();
		XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  L_9 = ___other0;
		int32_t L_10 = L_9.get_m_TrackingState_3();
		if ((!(((uint32_t)L_8) == ((uint32_t)L_10))))
		{
			goto IL_0059;
		}
	}
	{
		intptr_t L_11 = __this->get_m_NativePtr_4();
		XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  L_12 = ___other0;
		intptr_t L_13 = L_12.get_m_NativePtr_4();
		bool L_14 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_11, (intptr_t)L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0059;
		}
	}
	{
		Guid_t * L_15 = __this->get_address_of_m_SessionId_5();
		XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  L_16 = ___other0;
		Guid_t  L_17 = L_16.get_m_SessionId_5();
		bool L_18 = Guid_Equals_m602304DBC4842AB53670762A6DB52D30C3973258((Guid_t *)L_15, L_17, /*hidden argument*/NULL);
		return L_18;
	}

IL_0059:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool XRAnchor_Equals_mE6AC873FF43B605D47F5AB76F0ADAD9A6EDEA25B_AdjustorThunk (RuntimeObject * __this, XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * _thisAdjusted = reinterpret_cast<XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C *>(__this + _offset);
	return XRAnchor_Equals_mE6AC873FF43B605D47F5AB76F0ADAD9A6EDEA25B(_thisAdjusted, ___other0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRAnchor::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRAnchor_Equals_m8C35DEBDDAC21262E3344152D76539DF1AF7F060 (XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRAnchor_Equals_m8C35DEBDDAC21262E3344152D76539DF1AF7F060_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override bool Equals(object obj) => obj is XRAnchor && Equals((XRAnchor)obj);
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2 = XRAnchor_Equals_mE6AC873FF43B605D47F5AB76F0ADAD9A6EDEA25B((XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C *)__this, ((*(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C *)((XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C *)UnBox(L_1, XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool XRAnchor_Equals_m8C35DEBDDAC21262E3344152D76539DF1AF7F060_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * _thisAdjusted = reinterpret_cast<XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C *>(__this + _offset);
	return XRAnchor_Equals_m8C35DEBDDAC21262E3344152D76539DF1AF7F060(_thisAdjusted, ___obj0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRAnchor::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRAnchor__cctor_m101ABC03541DECF122E998C1C183D97FD34315F7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRAnchor__cctor_m101ABC03541DECF122E998C1C183D97FD34315F7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// static readonly XRAnchor s_Default = new XRAnchor
		// {
		//     m_Id = TrackableId.invalidId,
		//     m_Pose = Pose.identity,
		//     m_SessionId = Guid.Empty
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C ));
		IL2CPP_RUNTIME_CLASS_INIT(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_il2cpp_TypeInfo_var);
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_0 = TrackableId_get_invalidId_m06B698EFFA7748E185299C72B5CEC1AA5B221F85_inline(/*hidden argument*/NULL);
		(&V_0)->set_m_Id_1(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_il2cpp_TypeInfo_var);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_1 = Pose_get_identity_m334B16AC3024785914BCC5A2B949750A010878BF(/*hidden argument*/NULL);
		(&V_0)->set_m_Pose_2(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		Guid_t  L_2 = ((Guid_t_StaticFields*)il2cpp_codegen_static_fields_for(Guid_t_il2cpp_TypeInfo_var))->get_Empty_0();
		(&V_0)->set_m_SessionId_5(L_2);
		XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  L_3 = V_0;
		((XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_StaticFields*)il2cpp_codegen_static_fields_for(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_il2cpp_TypeInfo_var))->set_s_Default_0(L_3);
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
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRAnchorSubsystem__ctor_mB5F70C2E39B5EA531C05244611590F400365265A (XRAnchorSubsystem_t625D9B76C590AB601CF85525DB9396BE84425AA7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRAnchorSubsystem__ctor_mB5F70C2E39B5EA531C05244611590F400365265A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public XRAnchorSubsystem() => m_Provider = CreateProvider();
		TrackingSubsystem_2__ctor_m8336CFFF4DD799960F5EA7267E5894C55260A572(__this, /*hidden argument*/TrackingSubsystem_2__ctor_m8336CFFF4DD799960F5EA7267E5894C55260A572_RuntimeMethod_var);
		// public XRAnchorSubsystem() => m_Provider = CreateProvider();
		Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2 * L_0 = VirtFuncInvoker0< Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2 * >::Invoke(4 /* UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider UnityEngine.XR.ARSubsystems.XRAnchorSubsystem::CreateProvider() */, __this);
		__this->set_m_Provider_0(L_0);
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
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor::set_supportsTrackableAttachments(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRAnchorSubsystemDescriptor_set_supportsTrackableAttachments_m11271C1EBC306EB3FDA99D24D45D88DB31DCCC38 (XRAnchorSubsystemDescriptor_t3BD7F9922EF5C04185D59349C76D625BC1E44E3B * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsTrackableAttachments { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor::Create(UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor_Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRAnchorSubsystemDescriptor_Create_m32C16A0DDC60ED2D374EFB884CF807E62B37C0A8 (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7  ___cinfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRAnchorSubsystemDescriptor_Create_m32C16A0DDC60ED2D374EFB884CF807E62B37C0A8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SubsystemRegistration.CreateDescriptor(new XRAnchorSubsystemDescriptor(cinfo));
		Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7  L_0 = ___cinfo0;
		XRAnchorSubsystemDescriptor_t3BD7F9922EF5C04185D59349C76D625BC1E44E3B * L_1 = (XRAnchorSubsystemDescriptor_t3BD7F9922EF5C04185D59349C76D625BC1E44E3B *)il2cpp_codegen_object_new(XRAnchorSubsystemDescriptor_t3BD7F9922EF5C04185D59349C76D625BC1E44E3B_il2cpp_TypeInfo_var);
		XRAnchorSubsystemDescriptor__ctor_m5393EA2BCAFE2CB48EDD6DDCCD50C40FC7035331(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemRegistration_tC119E4E15B2EA84DE58F44840EBED3221FF8CFF2_il2cpp_TypeInfo_var);
		SubsystemRegistration_CreateDescriptor_m6C69D0D80C317F66888FEBF67DFEE327E3462A54(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor::.ctor(UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor_Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRAnchorSubsystemDescriptor__ctor_m5393EA2BCAFE2CB48EDD6DDCCD50C40FC7035331 (XRAnchorSubsystemDescriptor_t3BD7F9922EF5C04185D59349C76D625BC1E44E3B * __this, Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7  ___cinfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRAnchorSubsystemDescriptor__ctor_m5393EA2BCAFE2CB48EDD6DDCCD50C40FC7035331_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// XRAnchorSubsystemDescriptor(Cinfo cinfo)
		SubsystemDescriptor_1__ctor_mBC4926247F341770CDFAF419AD59814540B046EB(__this, /*hidden argument*/SubsystemDescriptor_1__ctor_mBC4926247F341770CDFAF419AD59814540B046EB_RuntimeMethod_var);
		// id = cinfo.id;
		String_t* L_0 = Cinfo_get_id_m7C38252CE360F061914361192300AECA8CB5307B_inline((Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *)(&___cinfo0), /*hidden argument*/NULL);
		SubsystemDescriptor_set_id_m3394B5AEBBE25A1924FD34FC0608DD5AACABBE2C_inline(__this, L_0, /*hidden argument*/NULL);
		// subsystemImplementationType = cinfo.subsystemImplementationType;
		Type_t * L_1 = Cinfo_get_subsystemImplementationType_m45C4A6583BBDA8DC5FD506339DC7A80474E88CC2_inline((Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *)(&___cinfo0), /*hidden argument*/NULL);
		SubsystemDescriptor_set_subsystemImplementationType_mAEAE9A52920C64D2A9C5B6316E30353AFA581AA4_inline(__this, L_1, /*hidden argument*/NULL);
		// supportsTrackableAttachments = cinfo.supportsTrackableAttachments;
		bool L_2 = Cinfo_get_supportsTrackableAttachments_m13B6C9977641F3E284C69AA3554EBD19478538B8_inline((Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *)(&___cinfo0), /*hidden argument*/NULL);
		XRAnchorSubsystemDescriptor_set_supportsTrackableAttachments_m11271C1EBC306EB3FDA99D24D45D88DB31DCCC38_inline(__this, L_2, /*hidden argument*/NULL);
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
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCameraSubsystem__ctor_m9DB793A0291AEB063BE13955137FCF52B8A6E222 (XRCameraSubsystem_t3B32F6EA8A2E4D23AF240B5D21C34759D2613AC9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRCameraSubsystem__ctor_m9DB793A0291AEB063BE13955137FCF52B8A6E222_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public XRCameraSubsystem()
		XRSubsystem_1__ctor_m188E5D20AA4A1BC11010A5511021C48494A36FBD(__this, /*hidden argument*/XRSubsystem_1__ctor_m188E5D20AA4A1BC11010A5511021C48494A36FBD_RuntimeMethod_var);
		// m_Provider = CreateProvider();
		Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1 * L_0 = VirtFuncInvoker0< Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1 * >::Invoke(4 /* UnityEngine.XR.ARSubsystems.XRCameraSubsystem/Provider UnityEngine.XR.ARSubsystems.XRCameraSubsystem::CreateProvider() */, __this);
		__this->set_m_Provider_0(L_0);
		// }
		return;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystem::Register(UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRCameraSubsystem_Register_m8E9CD378020A98CC1728A5C0A3324D25439921F4 (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096  ___cameraSubsystemParams0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRCameraSubsystem_Register_m8E9CD378020A98CC1728A5C0A3324D25439921F4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// XRCameraSubsystemDescriptor cameraSubsystemDescriptor = XRCameraSubsystemDescriptor.Create(cameraSubsystemParams);
		XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096  L_0 = ___cameraSubsystemParams0;
		XRCameraSubsystemDescriptor_t1F8A45C69031E2981B1863518C43793D26E2C5E5 * L_1 = XRCameraSubsystemDescriptor_Create_mEC826CD90D35D17847339952F5022081EF871033(L_0, /*hidden argument*/NULL);
		// return SubsystemRegistration.CreateDescriptor(cameraSubsystemDescriptor);
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemRegistration_tC119E4E15B2EA84DE58F44840EBED3221FF8CFF2_il2cpp_TypeInfo_var);
		bool L_2 = SubsystemRegistration_CreateDescriptor_m6C69D0D80C317F66888FEBF67DFEE327E3462A54(L_1, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo
IL2CPP_EXTERN_C void XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096_marshal_pinvoke(const XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096& unmarshaled, XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CimplementationTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<implementationType>k__BackingField' of type 'XRCameraSubsystemCinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CimplementationTypeU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096_marshal_pinvoke_back(const XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096_marshaled_pinvoke& marshaled, XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096& unmarshaled)
{
	Exception_t* ___U3CimplementationTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<implementationType>k__BackingField' of type 'XRCameraSubsystemCinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CimplementationTypeU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo
IL2CPP_EXTERN_C void XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096_marshal_pinvoke_cleanup(XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo
IL2CPP_EXTERN_C void XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096_marshal_com(const XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096& unmarshaled, XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096_marshaled_com& marshaled)
{
	Exception_t* ___U3CimplementationTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<implementationType>k__BackingField' of type 'XRCameraSubsystemCinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CimplementationTypeU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096_marshal_com_back(const XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096_marshaled_com& marshaled, XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096& unmarshaled)
{
	Exception_t* ___U3CimplementationTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<implementationType>k__BackingField' of type 'XRCameraSubsystemCinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CimplementationTypeU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo
IL2CPP_EXTERN_C void XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096_marshal_com_cleanup(XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096_marshaled_com& marshaled)
{
}
// System.String UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XRCameraSubsystemCinfo_get_id_m606888326128C053029E1B09A00F2CB97B214291 (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* XRCameraSubsystemCinfo_get_id_m606888326128C053029E1B09A00F2CB97B214291_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * _thisAdjusted = reinterpret_cast<XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *>(__this + _offset);
	return XRCameraSubsystemCinfo_get_id_m606888326128C053029E1B09A00F2CB97B214291_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_id_m768994793A205C7D5CE603B354D350A34D47720D (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void XRCameraSubsystemCinfo_set_id_m768994793A205C7D5CE603B354D350A34D47720D_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * _thisAdjusted = reinterpret_cast<XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *>(__this + _offset);
	XRCameraSubsystemCinfo_set_id_m768994793A205C7D5CE603B354D350A34D47720D_inline(_thisAdjusted, ___value0, method);
}
// System.Type UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::get_implementationType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * XRCameraSubsystemCinfo_get_implementationType_mAE66FE753EC633CC784D6D512DFC487427EA1C58 (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, const RuntimeMethod* method)
{
	{
		// public Type implementationType { get; set; }
		Type_t * L_0 = __this->get_U3CimplementationTypeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t * XRCameraSubsystemCinfo_get_implementationType_mAE66FE753EC633CC784D6D512DFC487427EA1C58_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * _thisAdjusted = reinterpret_cast<XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *>(__this + _offset);
	return XRCameraSubsystemCinfo_get_implementationType_mAE66FE753EC633CC784D6D512DFC487427EA1C58_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_implementationType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_implementationType_m4CC13E5510FAE9BDD9D8E126A796C6D5E05E558D (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type implementationType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CimplementationTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void XRCameraSubsystemCinfo_set_implementationType_m4CC13E5510FAE9BDD9D8E126A796C6D5E05E558D_AdjustorThunk (RuntimeObject * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * _thisAdjusted = reinterpret_cast<XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *>(__this + _offset);
	XRCameraSubsystemCinfo_set_implementationType_m4CC13E5510FAE9BDD9D8E126A796C6D5E05E558D_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::get_supportsAverageBrightness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRCameraSubsystemCinfo_get_supportsAverageBrightness_mF49B2D16DE8FBC5452C17D87672FBE1EB814145E (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsAverageBrightness { get; set; }
		bool L_0 = __this->get_U3CsupportsAverageBrightnessU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool XRCameraSubsystemCinfo_get_supportsAverageBrightness_mF49B2D16DE8FBC5452C17D87672FBE1EB814145E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * _thisAdjusted = reinterpret_cast<XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *>(__this + _offset);
	return XRCameraSubsystemCinfo_get_supportsAverageBrightness_mF49B2D16DE8FBC5452C17D87672FBE1EB814145E_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsAverageBrightness(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsAverageBrightness_mC20A88BD3C8D137A1F34888C64DC5FFF37787759 (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsAverageBrightness { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsAverageBrightnessU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void XRCameraSubsystemCinfo_set_supportsAverageBrightness_mC20A88BD3C8D137A1F34888C64DC5FFF37787759_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * _thisAdjusted = reinterpret_cast<XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *>(__this + _offset);
	XRCameraSubsystemCinfo_set_supportsAverageBrightness_mC20A88BD3C8D137A1F34888C64DC5FFF37787759_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::get_supportsAverageColorTemperature()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRCameraSubsystemCinfo_get_supportsAverageColorTemperature_m789041AE11DC92E73ED6C228C5A5B55A87AE736B (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsAverageColorTemperature { get; set; }
		bool L_0 = __this->get_U3CsupportsAverageColorTemperatureU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool XRCameraSubsystemCinfo_get_supportsAverageColorTemperature_m789041AE11DC92E73ED6C228C5A5B55A87AE736B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * _thisAdjusted = reinterpret_cast<XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *>(__this + _offset);
	return XRCameraSubsystemCinfo_get_supportsAverageColorTemperature_m789041AE11DC92E73ED6C228C5A5B55A87AE736B_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsAverageColorTemperature(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsAverageColorTemperature_m77727C8CBAB59D0D078B0A634EB0A56F1BF368E4 (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsAverageColorTemperature { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsAverageColorTemperatureU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void XRCameraSubsystemCinfo_set_supportsAverageColorTemperature_m77727C8CBAB59D0D078B0A634EB0A56F1BF368E4_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * _thisAdjusted = reinterpret_cast<XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *>(__this + _offset);
	XRCameraSubsystemCinfo_set_supportsAverageColorTemperature_m77727C8CBAB59D0D078B0A634EB0A56F1BF368E4_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsColorCorrection(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsColorCorrection_m1CBB9181A21D2A964705AD5E22F78735DCFE2C01 (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsColorCorrection { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsColorCorrectionU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void XRCameraSubsystemCinfo_set_supportsColorCorrection_m1CBB9181A21D2A964705AD5E22F78735DCFE2C01_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * _thisAdjusted = reinterpret_cast<XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *>(__this + _offset);
	XRCameraSubsystemCinfo_set_supportsColorCorrection_m1CBB9181A21D2A964705AD5E22F78735DCFE2C01_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::get_supportsDisplayMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRCameraSubsystemCinfo_get_supportsDisplayMatrix_m2107BE8860B1A4D050A80801F6286F0E9798820D (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsDisplayMatrix { get; set; }
		bool L_0 = __this->get_U3CsupportsDisplayMatrixU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool XRCameraSubsystemCinfo_get_supportsDisplayMatrix_m2107BE8860B1A4D050A80801F6286F0E9798820D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * _thisAdjusted = reinterpret_cast<XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *>(__this + _offset);
	return XRCameraSubsystemCinfo_get_supportsDisplayMatrix_m2107BE8860B1A4D050A80801F6286F0E9798820D_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsDisplayMatrix(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsDisplayMatrix_m2E11C0B7442273252613BDB41BB8B6F02698FBEA (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsDisplayMatrix { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsDisplayMatrixU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void XRCameraSubsystemCinfo_set_supportsDisplayMatrix_m2E11C0B7442273252613BDB41BB8B6F02698FBEA_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * _thisAdjusted = reinterpret_cast<XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *>(__this + _offset);
	XRCameraSubsystemCinfo_set_supportsDisplayMatrix_m2E11C0B7442273252613BDB41BB8B6F02698FBEA_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::get_supportsProjectionMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRCameraSubsystemCinfo_get_supportsProjectionMatrix_mAC44711CBD0AEF5600FAF7A65364692FE9FA9D9E (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsProjectionMatrix { get; set; }
		bool L_0 = __this->get_U3CsupportsProjectionMatrixU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool XRCameraSubsystemCinfo_get_supportsProjectionMatrix_mAC44711CBD0AEF5600FAF7A65364692FE9FA9D9E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * _thisAdjusted = reinterpret_cast<XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *>(__this + _offset);
	return XRCameraSubsystemCinfo_get_supportsProjectionMatrix_mAC44711CBD0AEF5600FAF7A65364692FE9FA9D9E_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsProjectionMatrix(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsProjectionMatrix_mFC886F8859FDF308D7980935474AA0E66ECF66B4 (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsProjectionMatrix { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsProjectionMatrixU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void XRCameraSubsystemCinfo_set_supportsProjectionMatrix_mFC886F8859FDF308D7980935474AA0E66ECF66B4_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * _thisAdjusted = reinterpret_cast<XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *>(__this + _offset);
	XRCameraSubsystemCinfo_set_supportsProjectionMatrix_mFC886F8859FDF308D7980935474AA0E66ECF66B4_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::get_supportsTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRCameraSubsystemCinfo_get_supportsTimestamp_m0B95FB498C6682EE15E2461F8A5C555B3E397543 (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsTimestamp { get; set; }
		bool L_0 = __this->get_U3CsupportsTimestampU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool XRCameraSubsystemCinfo_get_supportsTimestamp_m0B95FB498C6682EE15E2461F8A5C555B3E397543_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * _thisAdjusted = reinterpret_cast<XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *>(__this + _offset);
	return XRCameraSubsystemCinfo_get_supportsTimestamp_m0B95FB498C6682EE15E2461F8A5C555B3E397543_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsTimestamp(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsTimestamp_mAA6157EC368F6358F155571E257A578729D368D4 (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsTimestamp { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsTimestampU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void XRCameraSubsystemCinfo_set_supportsTimestamp_mAA6157EC368F6358F155571E257A578729D368D4_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * _thisAdjusted = reinterpret_cast<XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *>(__this + _offset);
	XRCameraSubsystemCinfo_set_supportsTimestamp_mAA6157EC368F6358F155571E257A578729D368D4_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::get_supportsCameraConfigurations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRCameraSubsystemCinfo_get_supportsCameraConfigurations_mF0168147B6D556F8289DCE665D070EE427430CDD (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsCameraConfigurations { get; set; }
		bool L_0 = __this->get_U3CsupportsCameraConfigurationsU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool XRCameraSubsystemCinfo_get_supportsCameraConfigurations_mF0168147B6D556F8289DCE665D070EE427430CDD_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * _thisAdjusted = reinterpret_cast<XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *>(__this + _offset);
	return XRCameraSubsystemCinfo_get_supportsCameraConfigurations_mF0168147B6D556F8289DCE665D070EE427430CDD_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsCameraConfigurations(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsCameraConfigurations_mD0F431DDAB4F82DDC6E35AB7583572D25244E0F0 (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsCameraConfigurations { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsCameraConfigurationsU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void XRCameraSubsystemCinfo_set_supportsCameraConfigurations_mD0F431DDAB4F82DDC6E35AB7583572D25244E0F0_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * _thisAdjusted = reinterpret_cast<XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *>(__this + _offset);
	XRCameraSubsystemCinfo_set_supportsCameraConfigurations_mD0F431DDAB4F82DDC6E35AB7583572D25244E0F0_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::get_supportsCameraImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRCameraSubsystemCinfo_get_supportsCameraImage_m404883CC80418B38CB13D3ED6DAAFE6D81978A6F (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsCameraImage { get; set; }
		bool L_0 = __this->get_U3CsupportsCameraImageU3Ek__BackingField_9();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool XRCameraSubsystemCinfo_get_supportsCameraImage_m404883CC80418B38CB13D3ED6DAAFE6D81978A6F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * _thisAdjusted = reinterpret_cast<XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *>(__this + _offset);
	return XRCameraSubsystemCinfo_get_supportsCameraImage_m404883CC80418B38CB13D3ED6DAAFE6D81978A6F_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsCameraImage(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsCameraImage_m2140EBB7ACEA9B1634F56DE2DCB85F26CB8C4D7D (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsCameraImage { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsCameraImageU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void XRCameraSubsystemCinfo_set_supportsCameraImage_m2140EBB7ACEA9B1634F56DE2DCB85F26CB8C4D7D_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * _thisAdjusted = reinterpret_cast<XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *>(__this + _offset);
	XRCameraSubsystemCinfo_set_supportsCameraImage_m2140EBB7ACEA9B1634F56DE2DCB85F26CB8C4D7D_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::get_supportsAverageIntensityInLumens()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRCameraSubsystemCinfo_get_supportsAverageIntensityInLumens_m5B91C231C060B22D44F1579CF361500D7B54173E (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsAverageIntensityInLumens { get; set; }
		bool L_0 = __this->get_U3CsupportsAverageIntensityInLumensU3Ek__BackingField_10();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool XRCameraSubsystemCinfo_get_supportsAverageIntensityInLumens_m5B91C231C060B22D44F1579CF361500D7B54173E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * _thisAdjusted = reinterpret_cast<XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *>(__this + _offset);
	return XRCameraSubsystemCinfo_get_supportsAverageIntensityInLumens_m5B91C231C060B22D44F1579CF361500D7B54173E_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsAverageIntensityInLumens(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsAverageIntensityInLumens_m49462C178EF35B3E688EE6711FD3E41E9C1976AB (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsAverageIntensityInLumens { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsAverageIntensityInLumensU3Ek__BackingField_10(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void XRCameraSubsystemCinfo_set_supportsAverageIntensityInLumens_m49462C178EF35B3E688EE6711FD3E41E9C1976AB_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * _thisAdjusted = reinterpret_cast<XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *>(__this + _offset);
	XRCameraSubsystemCinfo_set_supportsAverageIntensityInLumens_m49462C178EF35B3E688EE6711FD3E41E9C1976AB_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::get_supportsFocusModes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRCameraSubsystemCinfo_get_supportsFocusModes_mA2196338BFF377734A338E919D372089A98417D9 (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsFocusModes { get; set; }
		bool L_0 = __this->get_U3CsupportsFocusModesU3Ek__BackingField_11();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool XRCameraSubsystemCinfo_get_supportsFocusModes_mA2196338BFF377734A338E919D372089A98417D9_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * _thisAdjusted = reinterpret_cast<XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *>(__this + _offset);
	return XRCameraSubsystemCinfo_get_supportsFocusModes_mA2196338BFF377734A338E919D372089A98417D9_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsFocusModes(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsFocusModes_m2F70E7EFC54E2F930DEA28DC4922125E01FE3026 (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsFocusModes { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsFocusModesU3Ek__BackingField_11(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void XRCameraSubsystemCinfo_set_supportsFocusModes_m2F70E7EFC54E2F930DEA28DC4922125E01FE3026_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * _thisAdjusted = reinterpret_cast<XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *>(__this + _offset);
	XRCameraSubsystemCinfo_set_supportsFocusModes_m2F70E7EFC54E2F930DEA28DC4922125E01FE3026_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::Equals(UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRCameraSubsystemCinfo_Equals_m8C071329439DF323FF57A936181A09F933886EAB (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRCameraSubsystemCinfo_Equals_m8C071329439DF323FF57A936181A09F933886EAB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return
		//        (id == other.id)
		//     && (implementationType == other.implementationType)
		//     && supportsAverageBrightness.Equals(other.supportsAverageBrightness)
		//     && supportsAverageColorTemperature.Equals(other.supportsAverageColorTemperature)
		//     && supportsDisplayMatrix.Equals(other.supportsDisplayMatrix)
		//     && supportsProjectionMatrix.Equals(other.supportsProjectionMatrix)
		//     && supportsTimestamp.Equals(other.supportsTimestamp)
		//     && supportsCameraConfigurations.Equals(other.supportsCameraConfigurations)
		//     && supportsCameraImage.Equals(other.supportsCameraImage)
		//     && supportsAverageIntensityInLumens.Equals(other.supportsAverageIntensityInLumens)
		//     && supportsFocusModes.Equals(other.supportsFocusModes);
		String_t* L_0 = XRCameraSubsystemCinfo_get_id_m606888326128C053029E1B09A00F2CB97B214291_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)__this, /*hidden argument*/NULL);
		String_t* L_1 = XRCameraSubsystemCinfo_get_id_m606888326128C053029E1B09A00F2CB97B214291_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&___other0), /*hidden argument*/NULL);
		bool L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0105;
		}
	}
	{
		Type_t * L_3 = XRCameraSubsystemCinfo_get_implementationType_mAE66FE753EC633CC784D6D512DFC487427EA1C58_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)__this, /*hidden argument*/NULL);
		Type_t * L_4 = XRCameraSubsystemCinfo_get_implementationType_mAE66FE753EC633CC784D6D512DFC487427EA1C58_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&___other0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_5 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0105;
		}
	}
	{
		bool L_6 = XRCameraSubsystemCinfo_get_supportsAverageBrightness_mF49B2D16DE8FBC5452C17D87672FBE1EB814145E_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)__this, /*hidden argument*/NULL);
		V_0 = L_6;
		bool L_7 = XRCameraSubsystemCinfo_get_supportsAverageBrightness_mF49B2D16DE8FBC5452C17D87672FBE1EB814145E_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&___other0), /*hidden argument*/NULL);
		bool L_8 = Boolean_Equals_mC63D03B4DE1BBC68835530A9E0384FDDB0AC1A3D((bool*)(&V_0), L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0105;
		}
	}
	{
		bool L_9 = XRCameraSubsystemCinfo_get_supportsAverageColorTemperature_m789041AE11DC92E73ED6C228C5A5B55A87AE736B_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)__this, /*hidden argument*/NULL);
		V_0 = L_9;
		bool L_10 = XRCameraSubsystemCinfo_get_supportsAverageColorTemperature_m789041AE11DC92E73ED6C228C5A5B55A87AE736B_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&___other0), /*hidden argument*/NULL);
		bool L_11 = Boolean_Equals_mC63D03B4DE1BBC68835530A9E0384FDDB0AC1A3D((bool*)(&V_0), L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0105;
		}
	}
	{
		bool L_12 = XRCameraSubsystemCinfo_get_supportsDisplayMatrix_m2107BE8860B1A4D050A80801F6286F0E9798820D_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)__this, /*hidden argument*/NULL);
		V_0 = L_12;
		bool L_13 = XRCameraSubsystemCinfo_get_supportsDisplayMatrix_m2107BE8860B1A4D050A80801F6286F0E9798820D_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&___other0), /*hidden argument*/NULL);
		bool L_14 = Boolean_Equals_mC63D03B4DE1BBC68835530A9E0384FDDB0AC1A3D((bool*)(&V_0), L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0105;
		}
	}
	{
		bool L_15 = XRCameraSubsystemCinfo_get_supportsProjectionMatrix_mAC44711CBD0AEF5600FAF7A65364692FE9FA9D9E_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)__this, /*hidden argument*/NULL);
		V_0 = L_15;
		bool L_16 = XRCameraSubsystemCinfo_get_supportsProjectionMatrix_mAC44711CBD0AEF5600FAF7A65364692FE9FA9D9E_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&___other0), /*hidden argument*/NULL);
		bool L_17 = Boolean_Equals_mC63D03B4DE1BBC68835530A9E0384FDDB0AC1A3D((bool*)(&V_0), L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0105;
		}
	}
	{
		bool L_18 = XRCameraSubsystemCinfo_get_supportsTimestamp_m0B95FB498C6682EE15E2461F8A5C555B3E397543_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)__this, /*hidden argument*/NULL);
		V_0 = L_18;
		bool L_19 = XRCameraSubsystemCinfo_get_supportsTimestamp_m0B95FB498C6682EE15E2461F8A5C555B3E397543_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&___other0), /*hidden argument*/NULL);
		bool L_20 = Boolean_Equals_mC63D03B4DE1BBC68835530A9E0384FDDB0AC1A3D((bool*)(&V_0), L_19, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_0105;
		}
	}
	{
		bool L_21 = XRCameraSubsystemCinfo_get_supportsCameraConfigurations_mF0168147B6D556F8289DCE665D070EE427430CDD_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)__this, /*hidden argument*/NULL);
		V_0 = L_21;
		bool L_22 = XRCameraSubsystemCinfo_get_supportsCameraConfigurations_mF0168147B6D556F8289DCE665D070EE427430CDD_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&___other0), /*hidden argument*/NULL);
		bool L_23 = Boolean_Equals_mC63D03B4DE1BBC68835530A9E0384FDDB0AC1A3D((bool*)(&V_0), L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_0105;
		}
	}
	{
		bool L_24 = XRCameraSubsystemCinfo_get_supportsCameraImage_m404883CC80418B38CB13D3ED6DAAFE6D81978A6F_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)__this, /*hidden argument*/NULL);
		V_0 = L_24;
		bool L_25 = XRCameraSubsystemCinfo_get_supportsCameraImage_m404883CC80418B38CB13D3ED6DAAFE6D81978A6F_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&___other0), /*hidden argument*/NULL);
		bool L_26 = Boolean_Equals_mC63D03B4DE1BBC68835530A9E0384FDDB0AC1A3D((bool*)(&V_0), L_25, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_0105;
		}
	}
	{
		bool L_27 = XRCameraSubsystemCinfo_get_supportsAverageIntensityInLumens_m5B91C231C060B22D44F1579CF361500D7B54173E_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)__this, /*hidden argument*/NULL);
		V_0 = L_27;
		bool L_28 = XRCameraSubsystemCinfo_get_supportsAverageIntensityInLumens_m5B91C231C060B22D44F1579CF361500D7B54173E_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&___other0), /*hidden argument*/NULL);
		bool L_29 = Boolean_Equals_mC63D03B4DE1BBC68835530A9E0384FDDB0AC1A3D((bool*)(&V_0), L_28, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_0105;
		}
	}
	{
		bool L_30 = XRCameraSubsystemCinfo_get_supportsFocusModes_mA2196338BFF377734A338E919D372089A98417D9_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)__this, /*hidden argument*/NULL);
		V_0 = L_30;
		bool L_31 = XRCameraSubsystemCinfo_get_supportsFocusModes_mA2196338BFF377734A338E919D372089A98417D9_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&___other0), /*hidden argument*/NULL);
		bool L_32 = Boolean_Equals_mC63D03B4DE1BBC68835530A9E0384FDDB0AC1A3D((bool*)(&V_0), L_31, /*hidden argument*/NULL);
		return L_32;
	}

IL_0105:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool XRCameraSubsystemCinfo_Equals_m8C071329439DF323FF57A936181A09F933886EAB_AdjustorThunk (RuntimeObject * __this, XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * _thisAdjusted = reinterpret_cast<XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *>(__this + _offset);
	return XRCameraSubsystemCinfo_Equals_m8C071329439DF323FF57A936181A09F933886EAB(_thisAdjusted, ___other0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRCameraSubsystemCinfo_Equals_m8DA28DF625D849C92AE0770EBB43184C2CE4FEE4 (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRCameraSubsystemCinfo_Equals_m8DA28DF625D849C92AE0770EBB43184C2CE4FEE4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ((obj is XRCameraSubsystemCinfo) && Equals((XRCameraSubsystemCinfo)obj));
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2 = XRCameraSubsystemCinfo_Equals_m8C071329439DF323FF57A936181A09F933886EAB((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)__this, ((*(XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)UnBox(L_1, XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool XRCameraSubsystemCinfo_Equals_m8DA28DF625D849C92AE0770EBB43184C2CE4FEE4_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * _thisAdjusted = reinterpret_cast<XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *>(__this + _offset);
	return XRCameraSubsystemCinfo_Equals_m8DA28DF625D849C92AE0770EBB43184C2CE4FEE4(_thisAdjusted, ___obj0, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRCameraSubsystemCinfo_GetHashCode_mA8D0D3E3ABB46889F31B045A1D6F8A06EC8701D0 (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	{
		// int hashCode = 486187739;
		// hashCode = (hashCode * 486187739) + (ReferenceEquals(id, null) ? 0 : id.GetHashCode());
		String_t* L_0 = XRCameraSubsystemCinfo_get_id_m606888326128C053029E1B09A00F2CB97B214291_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)__this, /*hidden argument*/NULL);
		G_B1_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)486187739), (int32_t)((int32_t)486187739)));
		if (!L_0)
		{
			G_B2_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)486187739), (int32_t)((int32_t)486187739)));
			goto IL_0020;
		}
	}
	{
		String_t* L_1 = XRCameraSubsystemCinfo_get_id_m606888326128C053029E1B09A00F2CB97B214291_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0021;
	}

IL_0020:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_0021:
	{
		// hashCode = (hashCode * 486187739) + (ReferenceEquals(implementationType, null) ? 0 : implementationType.GetHashCode());
		Type_t * L_3 = XRCameraSubsystemCinfo_get_implementationType_mAE66FE753EC633CC784D6D512DFC487427EA1C58_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)__this, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)G_B3_1, (int32_t)G_B3_0)), (int32_t)((int32_t)486187739)));
		if (!L_3)
		{
			G_B5_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)G_B3_1, (int32_t)G_B3_0)), (int32_t)((int32_t)486187739)));
			goto IL_003d;
		}
	}
	{
		Type_t * L_4 = XRCameraSubsystemCinfo_get_implementationType_mAE66FE753EC633CC784D6D512DFC487427EA1C58_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_4);
		G_B6_0 = L_5;
		G_B6_1 = G_B4_0;
		goto IL_003e;
	}

IL_003d:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
	}

IL_003e:
	{
		// hashCode = (hashCode * 486187739) + supportsAverageBrightness.GetHashCode();
		bool L_6 = XRCameraSubsystemCinfo_get_supportsAverageBrightness_mF49B2D16DE8FBC5452C17D87672FBE1EB814145E_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)__this, /*hidden argument*/NULL);
		V_0 = L_6;
		int32_t L_7 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(&V_0), /*hidden argument*/NULL);
		// hashCode = (hashCode * 486187739) + supportsAverageColorTemperature.GetHashCode();
		bool L_8 = XRCameraSubsystemCinfo_get_supportsAverageColorTemperature_m789041AE11DC92E73ED6C228C5A5B55A87AE736B_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)__this, /*hidden argument*/NULL);
		V_0 = L_8;
		int32_t L_9 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(&V_0), /*hidden argument*/NULL);
		// hashCode = (hashCode * 486187739) + supportsDisplayMatrix.GetHashCode();
		bool L_10 = XRCameraSubsystemCinfo_get_supportsDisplayMatrix_m2107BE8860B1A4D050A80801F6286F0E9798820D_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)__this, /*hidden argument*/NULL);
		V_0 = L_10;
		int32_t L_11 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(&V_0), /*hidden argument*/NULL);
		// hashCode = (hashCode * 486187739) + supportsProjectionMatrix.GetHashCode();
		bool L_12 = XRCameraSubsystemCinfo_get_supportsProjectionMatrix_mAC44711CBD0AEF5600FAF7A65364692FE9FA9D9E_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)__this, /*hidden argument*/NULL);
		V_0 = L_12;
		int32_t L_13 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(&V_0), /*hidden argument*/NULL);
		// hashCode = (hashCode * 486187739) + supportsTimestamp.GetHashCode();
		bool L_14 = XRCameraSubsystemCinfo_get_supportsTimestamp_m0B95FB498C6682EE15E2461F8A5C555B3E397543_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)__this, /*hidden argument*/NULL);
		V_0 = L_14;
		int32_t L_15 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(&V_0), /*hidden argument*/NULL);
		// hashCode = (hashCode * 486187739) + supportsCameraConfigurations.GetHashCode();
		bool L_16 = XRCameraSubsystemCinfo_get_supportsCameraConfigurations_mF0168147B6D556F8289DCE665D070EE427430CDD_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)__this, /*hidden argument*/NULL);
		V_0 = L_16;
		int32_t L_17 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(&V_0), /*hidden argument*/NULL);
		// hashCode = (hashCode * 486187739) + supportsCameraImage.GetHashCode();
		bool L_18 = XRCameraSubsystemCinfo_get_supportsCameraImage_m404883CC80418B38CB13D3ED6DAAFE6D81978A6F_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)__this, /*hidden argument*/NULL);
		V_0 = L_18;
		int32_t L_19 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(&V_0), /*hidden argument*/NULL);
		// hashCode = (hashCode * 486187739) + supportsAverageIntensityInLumens.GetHashCode();
		bool L_20 = XRCameraSubsystemCinfo_get_supportsAverageIntensityInLumens_m5B91C231C060B22D44F1579CF361500D7B54173E_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)__this, /*hidden argument*/NULL);
		V_0 = L_20;
		int32_t L_21 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(&V_0), /*hidden argument*/NULL);
		// hashCode = (hashCode * 486187739) + supportsFocusModes.GetHashCode();
		bool L_22 = XRCameraSubsystemCinfo_get_supportsFocusModes_mA2196338BFF377734A338E919D372089A98417D9_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)__this, /*hidden argument*/NULL);
		V_0 = L_22;
		int32_t L_23 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(&V_0), /*hidden argument*/NULL);
		// return hashCode;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)G_B6_1, (int32_t)G_B6_0)), (int32_t)((int32_t)486187739))), (int32_t)L_7)), (int32_t)((int32_t)486187739))), (int32_t)L_9)), (int32_t)((int32_t)486187739))), (int32_t)L_11)), (int32_t)((int32_t)486187739))), (int32_t)L_13)), (int32_t)((int32_t)486187739))), (int32_t)L_15)), (int32_t)((int32_t)486187739))), (int32_t)L_17)), (int32_t)((int32_t)486187739))), (int32_t)L_19)), (int32_t)((int32_t)486187739))), (int32_t)L_21)), (int32_t)((int32_t)486187739))), (int32_t)L_23));
	}
}
IL2CPP_EXTERN_C  int32_t XRCameraSubsystemCinfo_GetHashCode_mA8D0D3E3ABB46889F31B045A1D6F8A06EC8701D0_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * _thisAdjusted = reinterpret_cast<XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *>(__this + _offset);
	return XRCameraSubsystemCinfo_GetHashCode_mA8D0D3E3ABB46889F31B045A1D6F8A06EC8701D0(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor::.ctor(UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCameraSubsystemDescriptor__ctor_m3279B88FEF25A569F67987BDC39A0678B72D1CB6 (XRCameraSubsystemDescriptor_t1F8A45C69031E2981B1863518C43793D26E2C5E5 * __this, XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096  ___cameraSubsystemParams0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRCameraSubsystemDescriptor__ctor_m3279B88FEF25A569F67987BDC39A0678B72D1CB6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// XRCameraSubsystemDescriptor(XRCameraSubsystemCinfo cameraSubsystemParams)
		SubsystemDescriptor_1__ctor_m1B67A65E4C28F251DEDFA25E7EA6C3FF4E529507(__this, /*hidden argument*/SubsystemDescriptor_1__ctor_m1B67A65E4C28F251DEDFA25E7EA6C3FF4E529507_RuntimeMethod_var);
		// id = cameraSubsystemParams.id;
		String_t* L_0 = XRCameraSubsystemCinfo_get_id_m606888326128C053029E1B09A00F2CB97B214291_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&___cameraSubsystemParams0), /*hidden argument*/NULL);
		SubsystemDescriptor_set_id_m3394B5AEBBE25A1924FD34FC0608DD5AACABBE2C_inline(__this, L_0, /*hidden argument*/NULL);
		// subsystemImplementationType = cameraSubsystemParams.implementationType;
		Type_t * L_1 = XRCameraSubsystemCinfo_get_implementationType_mAE66FE753EC633CC784D6D512DFC487427EA1C58_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&___cameraSubsystemParams0), /*hidden argument*/NULL);
		SubsystemDescriptor_set_subsystemImplementationType_mAEAE9A52920C64D2A9C5B6316E30353AFA581AA4_inline(__this, L_1, /*hidden argument*/NULL);
		// supportsAverageBrightness = cameraSubsystemParams.supportsAverageBrightness;
		bool L_2 = XRCameraSubsystemCinfo_get_supportsAverageBrightness_mF49B2D16DE8FBC5452C17D87672FBE1EB814145E_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&___cameraSubsystemParams0), /*hidden argument*/NULL);
		XRCameraSubsystemDescriptor_set_supportsAverageBrightness_m93E308790E7E9F9EB2D4A0AA12EF64F5ACF32275_inline(__this, L_2, /*hidden argument*/NULL);
		// supportsAverageColorTemperature = cameraSubsystemParams.supportsAverageColorTemperature;
		bool L_3 = XRCameraSubsystemCinfo_get_supportsAverageColorTemperature_m789041AE11DC92E73ED6C228C5A5B55A87AE736B_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&___cameraSubsystemParams0), /*hidden argument*/NULL);
		XRCameraSubsystemDescriptor_set_supportsAverageColorTemperature_m79788019F8E730D1FC139530E9615FE5CBABDDCB_inline(__this, L_3, /*hidden argument*/NULL);
		// supportsDisplayMatrix = cameraSubsystemParams.supportsDisplayMatrix;
		bool L_4 = XRCameraSubsystemCinfo_get_supportsDisplayMatrix_m2107BE8860B1A4D050A80801F6286F0E9798820D_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&___cameraSubsystemParams0), /*hidden argument*/NULL);
		XRCameraSubsystemDescriptor_set_supportsDisplayMatrix_mE32DBA05CC497A4639E3BDA570E51244BD5E524A_inline(__this, L_4, /*hidden argument*/NULL);
		// supportsProjectionMatrix = cameraSubsystemParams.supportsProjectionMatrix;
		bool L_5 = XRCameraSubsystemCinfo_get_supportsProjectionMatrix_mAC44711CBD0AEF5600FAF7A65364692FE9FA9D9E_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&___cameraSubsystemParams0), /*hidden argument*/NULL);
		XRCameraSubsystemDescriptor_set_supportsProjectionMatrix_mECDFAEA74911ED30529FDB70DE87AA3818AA285F_inline(__this, L_5, /*hidden argument*/NULL);
		// supportsTimestamp = cameraSubsystemParams.supportsTimestamp;
		bool L_6 = XRCameraSubsystemCinfo_get_supportsTimestamp_m0B95FB498C6682EE15E2461F8A5C555B3E397543_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&___cameraSubsystemParams0), /*hidden argument*/NULL);
		XRCameraSubsystemDescriptor_set_supportsTimestamp_mDE3970574677648ED3EC4520657BED04613128D3_inline(__this, L_6, /*hidden argument*/NULL);
		// supportsCameraConfigurations = cameraSubsystemParams.supportsCameraConfigurations;
		bool L_7 = XRCameraSubsystemCinfo_get_supportsCameraConfigurations_mF0168147B6D556F8289DCE665D070EE427430CDD_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&___cameraSubsystemParams0), /*hidden argument*/NULL);
		XRCameraSubsystemDescriptor_set_supportsCameraConfigurations_mE49020DC68025F21123ACCCB96C0ACB0A99A923C_inline(__this, L_7, /*hidden argument*/NULL);
		// supportsCameraImage = cameraSubsystemParams.supportsCameraImage;
		bool L_8 = XRCameraSubsystemCinfo_get_supportsCameraImage_m404883CC80418B38CB13D3ED6DAAFE6D81978A6F_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&___cameraSubsystemParams0), /*hidden argument*/NULL);
		XRCameraSubsystemDescriptor_set_supportsCameraImage_m3D2848F2DDBED1D1B613D6CF8E6055D8163EF3F7_inline(__this, L_8, /*hidden argument*/NULL);
		// supportsAverageIntensityInLumens = cameraSubsystemParams.supportsAverageIntensityInLumens;
		bool L_9 = XRCameraSubsystemCinfo_get_supportsAverageIntensityInLumens_m5B91C231C060B22D44F1579CF361500D7B54173E_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&___cameraSubsystemParams0), /*hidden argument*/NULL);
		XRCameraSubsystemDescriptor_set_supportsAverageIntensityInLumens_m65A10731DEF111F2BE9325DC6CC26E5B765D07C6_inline(__this, L_9, /*hidden argument*/NULL);
		// supportsFocusModes = cameraSubsystemParams.supportsFocusModes;
		bool L_10 = XRCameraSubsystemCinfo_get_supportsFocusModes_mA2196338BFF377734A338E919D372089A98417D9_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&___cameraSubsystemParams0), /*hidden argument*/NULL);
		XRCameraSubsystemDescriptor_set_supportsFocusModes_mB7D094AE9379B0C31386397C907C1A1C1A4189BB_inline(__this, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor::set_supportsAverageBrightness(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCameraSubsystemDescriptor_set_supportsAverageBrightness_m93E308790E7E9F9EB2D4A0AA12EF64F5ACF32275 (XRCameraSubsystemDescriptor_t1F8A45C69031E2981B1863518C43793D26E2C5E5 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsAverageBrightness { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsAverageBrightnessU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor::set_supportsAverageColorTemperature(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCameraSubsystemDescriptor_set_supportsAverageColorTemperature_m79788019F8E730D1FC139530E9615FE5CBABDDCB (XRCameraSubsystemDescriptor_t1F8A45C69031E2981B1863518C43793D26E2C5E5 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsAverageColorTemperature { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsAverageColorTemperatureU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor::set_supportsDisplayMatrix(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCameraSubsystemDescriptor_set_supportsDisplayMatrix_mE32DBA05CC497A4639E3BDA570E51244BD5E524A (XRCameraSubsystemDescriptor_t1F8A45C69031E2981B1863518C43793D26E2C5E5 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsDisplayMatrix { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsDisplayMatrixU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor::set_supportsProjectionMatrix(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCameraSubsystemDescriptor_set_supportsProjectionMatrix_mECDFAEA74911ED30529FDB70DE87AA3818AA285F (XRCameraSubsystemDescriptor_t1F8A45C69031E2981B1863518C43793D26E2C5E5 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsProjectionMatrix { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsProjectionMatrixU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor::set_supportsTimestamp(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCameraSubsystemDescriptor_set_supportsTimestamp_mDE3970574677648ED3EC4520657BED04613128D3 (XRCameraSubsystemDescriptor_t1F8A45C69031E2981B1863518C43793D26E2C5E5 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsTimestamp { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsTimestampU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor::set_supportsCameraConfigurations(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCameraSubsystemDescriptor_set_supportsCameraConfigurations_mE49020DC68025F21123ACCCB96C0ACB0A99A923C (XRCameraSubsystemDescriptor_t1F8A45C69031E2981B1863518C43793D26E2C5E5 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsCameraConfigurations { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsCameraConfigurationsU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor::set_supportsCameraImage(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCameraSubsystemDescriptor_set_supportsCameraImage_m3D2848F2DDBED1D1B613D6CF8E6055D8163EF3F7 (XRCameraSubsystemDescriptor_t1F8A45C69031E2981B1863518C43793D26E2C5E5 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsCameraImage { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsCameraImageU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor::set_supportsAverageIntensityInLumens(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCameraSubsystemDescriptor_set_supportsAverageIntensityInLumens_m65A10731DEF111F2BE9325DC6CC26E5B765D07C6 (XRCameraSubsystemDescriptor_t1F8A45C69031E2981B1863518C43793D26E2C5E5 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsAverageIntensityInLumens { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsAverageIntensityInLumensU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor::set_supportsFocusModes(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCameraSubsystemDescriptor_set_supportsFocusModes_mB7D094AE9379B0C31386397C907C1A1C1A4189BB (XRCameraSubsystemDescriptor_t1F8A45C69031E2981B1863518C43793D26E2C5E5 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsFocusModes { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsFocusModesU3Ek__BackingField_10(L_0);
		return;
	}
}
// UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor::Create(UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRCameraSubsystemDescriptor_t1F8A45C69031E2981B1863518C43793D26E2C5E5 * XRCameraSubsystemDescriptor_Create_mEC826CD90D35D17847339952F5022081EF871033 (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096  ___cameraSubsystemParams0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRCameraSubsystemDescriptor_Create_mEC826CD90D35D17847339952F5022081EF871033_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (String.IsNullOrEmpty(cameraSubsystemParams.id))
		String_t* L_0 = XRCameraSubsystemCinfo_get_id_m606888326128C053029E1B09A00F2CB97B214291_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&___cameraSubsystemParams0), /*hidden argument*/NULL);
		bool L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// throw new ArgumentException("Cannot create camera subsystem descriptor because id is invalid",
		//                             "cameraSubsystemParams");
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_2 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_2, _stringLiteralB19032E635CE920B302296D3885543D1639CB459, _stringLiteralB51DF98769C686D20D8FAD7C8DB324505A9CB947, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, XRCameraSubsystemDescriptor_Create_mEC826CD90D35D17847339952F5022081EF871033_RuntimeMethod_var);
	}

IL_001e:
	{
		// if ((cameraSubsystemParams.implementationType == null)
		//     || !cameraSubsystemParams.implementationType.IsSubclassOf(typeof(XRCameraSubsystem)))
		Type_t * L_3 = XRCameraSubsystemCinfo_get_implementationType_mAE66FE753EC633CC784D6D512DFC487427EA1C58_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&___cameraSubsystemParams0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_4 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_3, (Type_t *)NULL, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0045;
		}
	}
	{
		Type_t * L_5 = XRCameraSubsystemCinfo_get_implementationType_mAE66FE753EC633CC784D6D512DFC487427EA1C58_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&___cameraSubsystemParams0), /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_6 = { reinterpret_cast<intptr_t> (XRCameraSubsystem_t3B32F6EA8A2E4D23AF240B5D21C34759D2613AC9_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		bool L_8 = VirtFuncInvoker1< bool, Type_t * >::Invoke(101 /* System.Boolean System.Type::IsSubclassOf(System.Type) */, L_5, L_7);
		if (L_8)
		{
			goto IL_0055;
		}
	}

IL_0045:
	{
		// throw new ArgumentException("Cannot create camera subsystem descriptor because implementationType is invalid",
		//                             "cameraSubsystemParams");
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_9 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_9, _stringLiteralC349A055609266F6B553D56321C8E2A497321AD6, _stringLiteralB51DF98769C686D20D8FAD7C8DB324505A9CB947, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, XRCameraSubsystemDescriptor_Create_mEC826CD90D35D17847339952F5022081EF871033_RuntimeMethod_var);
	}

IL_0055:
	{
		// return new XRCameraSubsystemDescriptor(cameraSubsystemParams);
		XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096  L_10 = ___cameraSubsystemParams0;
		XRCameraSubsystemDescriptor_t1F8A45C69031E2981B1863518C43793D26E2C5E5 * L_11 = (XRCameraSubsystemDescriptor_t1F8A45C69031E2981B1863518C43793D26E2C5E5 *)il2cpp_codegen_object_new(XRCameraSubsystemDescriptor_t1F8A45C69031E2981B1863518C43793D26E2C5E5_il2cpp_TypeInfo_var);
		XRCameraSubsystemDescriptor__ctor_m3279B88FEF25A569F67987BDC39A0678B72D1CB6(L_11, L_10, /*hidden argument*/NULL);
		return L_11;
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
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDepthSubsystem__ctor_mCD27ED98C0FCF9538A67023E02DDD4AFB3B04D86 (XRDepthSubsystem_t808E21F0192095B08FA03AC535314FB5EF3B7E28 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRDepthSubsystem__ctor_mCD27ED98C0FCF9538A67023E02DDD4AFB3B04D86_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected XRDepthSubsystem() => m_Provider = CreateProvider();
		TrackingSubsystem_2__ctor_mE513BC3982486DF0187321C5B7A8E0A1603C2649(__this, /*hidden argument*/TrackingSubsystem_2__ctor_mE513BC3982486DF0187321C5B7A8E0A1603C2649_RuntimeMethod_var);
		// protected XRDepthSubsystem() => m_Provider = CreateProvider();
		Provider_t8E88C17A70269CD3E96909AFCCA952AAA7DEC0B6 * L_0 = VirtFuncInvoker0< Provider_t8E88C17A70269CD3E96909AFCCA952AAA7DEC0B6 * >::Invoke(4 /* UnityEngine.XR.ARSubsystems.XRDepthSubsystem/Provider UnityEngine.XR.ARSubsystems.XRDepthSubsystem::CreateProvider() */, __this);
		__this->set_m_Provider_0(L_0);
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
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor::.ctor(UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor_Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDepthSubsystemDescriptor__ctor_m8107883A37944FA3C8451BA4F8CF88B902BB56DD (XRDepthSubsystemDescriptor_t745DBB7D313FB52F756E0B7AA993FBBC26B412C2 * __this, Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1  ___descriptorParams0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRDepthSubsystemDescriptor__ctor_m8107883A37944FA3C8451BA4F8CF88B902BB56DD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// XRDepthSubsystemDescriptor(Cinfo descriptorParams)
		SubsystemDescriptor_1__ctor_m75055823F16B584D798074D8822646B3C5C68CBE(__this, /*hidden argument*/SubsystemDescriptor_1__ctor_m75055823F16B584D798074D8822646B3C5C68CBE_RuntimeMethod_var);
		// id = descriptorParams.id;
		Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1  L_0 = ___descriptorParams0;
		String_t* L_1 = L_0.get_id_0();
		SubsystemDescriptor_set_id_m3394B5AEBBE25A1924FD34FC0608DD5AACABBE2C_inline(__this, L_1, /*hidden argument*/NULL);
		// subsystemImplementationType = descriptorParams.implementationType;
		Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1  L_2 = ___descriptorParams0;
		Type_t * L_3 = L_2.get_implementationType_1();
		SubsystemDescriptor_set_subsystemImplementationType_mAEAE9A52920C64D2A9C5B6316E30353AFA581AA4_inline(__this, L_3, /*hidden argument*/NULL);
		// supportsFeaturePoints = descriptorParams.supportsFeaturePoints;
		bool L_4 = Cinfo_get_supportsFeaturePoints_mAE8F24562D2A19594A5AB98BDA0FC1C35730B5BA((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)(&___descriptorParams0), /*hidden argument*/NULL);
		XRDepthSubsystemDescriptor_set_supportsFeaturePoints_mA0C105DA50CA07BC488A7E1BDDB3CD72225BE00C_inline(__this, L_4, /*hidden argument*/NULL);
		// supportsUniqueIds = descriptorParams.supportsUniqueIds;
		bool L_5 = Cinfo_get_supportsUniqueIds_m6A1B72F6B917B3B001388027A7324A84146E5B7F((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)(&___descriptorParams0), /*hidden argument*/NULL);
		XRDepthSubsystemDescriptor_set_supportsUniqueIds_m0BBF2BAA5E4E1A704B29F62FE895F5A29A5D93CD_inline(__this, L_5, /*hidden argument*/NULL);
		// supportsConfidence = descriptorParams.supportsConfidence;
		bool L_6 = Cinfo_get_supportsConfidence_m483E36BDB283478D5E1F6F6F3C96A279EB6DE01A((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)(&___descriptorParams0), /*hidden argument*/NULL);
		XRDepthSubsystemDescriptor_set_supportsConfidence_m877945BE2EB06E5FB0699BEDA781CDC7E88DBC9A_inline(__this, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor::set_supportsFeaturePoints(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDepthSubsystemDescriptor_set_supportsFeaturePoints_mA0C105DA50CA07BC488A7E1BDDB3CD72225BE00C (XRDepthSubsystemDescriptor_t745DBB7D313FB52F756E0B7AA993FBBC26B412C2 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsFeaturePoints { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsFeaturePointsU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor::set_supportsUniqueIds(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDepthSubsystemDescriptor_set_supportsUniqueIds_m0BBF2BAA5E4E1A704B29F62FE895F5A29A5D93CD (XRDepthSubsystemDescriptor_t745DBB7D313FB52F756E0B7AA993FBBC26B412C2 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsUniqueIds { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsUniqueIdsU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor::set_supportsConfidence(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDepthSubsystemDescriptor_set_supportsConfidence_m877945BE2EB06E5FB0699BEDA781CDC7E88DBC9A (XRDepthSubsystemDescriptor_t745DBB7D313FB52F756E0B7AA993FBBC26B412C2 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsConfidence { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsConfidenceU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor::RegisterDescriptor(UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor_Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDepthSubsystemDescriptor_RegisterDescriptor_mB5908D568E8943B143747EDA81FF550FE2BB3A33 (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1  ___descriptorParams0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRDepthSubsystemDescriptor_RegisterDescriptor_mB5908D568E8943B143747EDA81FF550FE2BB3A33_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var descriptor = new XRDepthSubsystemDescriptor(descriptorParams);
		Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1  L_0 = ___descriptorParams0;
		XRDepthSubsystemDescriptor_t745DBB7D313FB52F756E0B7AA993FBBC26B412C2 * L_1 = (XRDepthSubsystemDescriptor_t745DBB7D313FB52F756E0B7AA993FBBC26B412C2 *)il2cpp_codegen_object_new(XRDepthSubsystemDescriptor_t745DBB7D313FB52F756E0B7AA993FBBC26B412C2_il2cpp_TypeInfo_var);
		XRDepthSubsystemDescriptor__ctor_m8107883A37944FA3C8451BA4F8CF88B902BB56DD(L_1, L_0, /*hidden argument*/NULL);
		// SubsystemRegistration.CreateDescriptor(descriptor);
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemRegistration_tC119E4E15B2EA84DE58F44840EBED3221FF8CFF2_il2cpp_TypeInfo_var);
		SubsystemRegistration_CreateDescriptor_m6C69D0D80C317F66888FEBF67DFEE327E3462A54(L_1, /*hidden argument*/NULL);
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
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbe::set_trackableId(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XREnvironmentProbe_set_trackableId_m2FAAA910E6D06256C1ECCCCF8C6D3E72A056199D (XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___value0, const RuntimeMethod* method)
{
	{
		// private set => m_TrackableId = value;
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_0 = ___value0;
		__this->set_m_TrackableId_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void XREnvironmentProbe_set_trackableId_m2FAAA910E6D06256C1ECCCCF8C6D3E72A056199D_AdjustorThunk (RuntimeObject * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C * _thisAdjusted = reinterpret_cast<XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C *>(__this + _offset);
	XREnvironmentProbe_set_trackableId_m2FAAA910E6D06256C1ECCCCF8C6D3E72A056199D_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbe::set_pose(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XREnvironmentProbe_set_pose_mAC84C3A2D8788D587F0503EA1CE051294A8A87E9 (XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C * __this, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___value0, const RuntimeMethod* method)
{
	{
		// private set => m_Pose = value;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_0 = ___value0;
		__this->set_m_Pose_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void XREnvironmentProbe_set_pose_mAC84C3A2D8788D587F0503EA1CE051294A8A87E9_AdjustorThunk (RuntimeObject * __this, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C * _thisAdjusted = reinterpret_cast<XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C *>(__this + _offset);
	XREnvironmentProbe_set_pose_mAC84C3A2D8788D587F0503EA1CE051294A8A87E9_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbe::Equals(UnityEngine.XR.ARSubsystems.XREnvironmentProbe)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XREnvironmentProbe_Equals_mAB858DCB46B0A972BE91B46AE6BA4C2AB6B8479B (XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C * __this, XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C  ___other0, const RuntimeMethod* method)
{
	{
		// return m_TrackableId.Equals(other.m_TrackableId);
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * L_0 = __this->get_address_of_m_TrackableId_1();
		XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C  L_1 = ___other0;
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_2 = L_1.get_m_TrackableId_1();
		bool L_3 = TrackableId_Equals_m1DF35616359175E3D66DE18250E8CDA1E6462B06((TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B *)L_0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool XREnvironmentProbe_Equals_mAB858DCB46B0A972BE91B46AE6BA4C2AB6B8479B_AdjustorThunk (RuntimeObject * __this, XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C * _thisAdjusted = reinterpret_cast<XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C *>(__this + _offset);
	return XREnvironmentProbe_Equals_mAB858DCB46B0A972BE91B46AE6BA4C2AB6B8479B(_thisAdjusted, ___other0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbe::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XREnvironmentProbe_Equals_m940DA5EE99C70171A86520CA30C33C0E778A15E7 (XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XREnvironmentProbe_Equals_m940DA5EE99C70171A86520CA30C33C0E778A15E7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (!ReferenceEquals(obj, null)
		//         && (ReferenceEquals(this, obj)
		//             || ((obj is XREnvironmentProbe) && Equals((XREnvironmentProbe)obj))));
		RuntimeObject * L_0 = ___obj0;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C  L_1 = (*(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C *)__this);
		XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C  L_2 = L_1;
		RuntimeObject * L_3 = Box(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C_il2cpp_TypeInfo_var, &L_2);
		RuntimeObject * L_4 = ___obj0;
		if ((((RuntimeObject*)(RuntimeObject *)L_3) == ((RuntimeObject*)(RuntimeObject *)L_4)))
		{
			goto IL_0028;
		}
	}
	{
		RuntimeObject * L_5 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_5, XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C_il2cpp_TypeInfo_var)))
		{
			goto IL_0026;
		}
	}
	{
		RuntimeObject * L_6 = ___obj0;
		bool L_7 = XREnvironmentProbe_Equals_mAB858DCB46B0A972BE91B46AE6BA4C2AB6B8479B((XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C *)__this, ((*(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C *)((XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C *)UnBox(L_6, XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_7;
	}

IL_0026:
	{
		return (bool)0;
	}

IL_0028:
	{
		return (bool)1;
	}

IL_002a:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool XREnvironmentProbe_Equals_m940DA5EE99C70171A86520CA30C33C0E778A15E7_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C * _thisAdjusted = reinterpret_cast<XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C *>(__this + _offset);
	return XREnvironmentProbe_Equals_m940DA5EE99C70171A86520CA30C33C0E778A15E7(_thisAdjusted, ___obj0, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XREnvironmentProbe::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XREnvironmentProbe_GetHashCode_mE6E401BB29C7F44E680E6561A8AB7CD92B3F2472 (XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C * __this, const RuntimeMethod* method)
{
	{
		// public override int GetHashCode() => m_TrackableId.GetHashCode();
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * L_0 = __this->get_address_of_m_TrackableId_1();
		int32_t L_1 = TrackableId_GetHashCode_mFD297FC6DB40FB5B28C6E9B7A2CF2785D75C4E86((TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B *)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t XREnvironmentProbe_GetHashCode_mE6E401BB29C7F44E680E6561A8AB7CD92B3F2472_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C * _thisAdjusted = reinterpret_cast<XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C *>(__this + _offset);
	return XREnvironmentProbe_GetHashCode_mE6E401BB29C7F44E680E6561A8AB7CD92B3F2472(_thisAdjusted, method);
}
// System.String UnityEngine.XR.ARSubsystems.XREnvironmentProbe::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XREnvironmentProbe_ToString_mBF2604257F8CA6CE56C5D389E8D08339725B8B93 (XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XREnvironmentProbe_ToString_mBF2604257F8CA6CE56C5D389E8D08339725B8B93_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string ToString() => ToString("0.000");
		String_t* L_0 = XREnvironmentProbe_ToString_m68F8E47BA9E4040BF7352D68F61FB17177000009((XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C *)__this, _stringLiteral40C3754113912BBB2324B9A85745EAD27C43B49F, /*hidden argument*/NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* XREnvironmentProbe_ToString_mBF2604257F8CA6CE56C5D389E8D08339725B8B93_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C * _thisAdjusted = reinterpret_cast<XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C *>(__this + _offset);
	return XREnvironmentProbe_ToString_mBF2604257F8CA6CE56C5D389E8D08339725B8B93(_thisAdjusted, method);
}
// System.String UnityEngine.XR.ARSubsystems.XREnvironmentProbe::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XREnvironmentProbe_ToString_m68F8E47BA9E4040BF7352D68F61FB17177000009 (XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C * __this, String_t* ___floatingPointformat0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XREnvironmentProbe_ToString_m68F8E47BA9E4040BF7352D68F61FB17177000009_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format("{0} scale:{1} pose:{2} size:{3} environmentTextureData:{4} trackingState:{5} nativePtr:{6}",
		//                      m_TrackableId.ToString(), m_Scale.ToString(floatingPointformat),
		//                      m_Pose.ToString(floatingPointformat), m_Size.ToString(floatingPointformat),
		//                      m_TextureDescriptor.ToString(), m_TrackingState.ToString(), m_NativePtr.ToString());
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * L_2 = __this->get_address_of_m_TrackableId_1();
		String_t* L_3 = TrackableId_ToString_mCD45FD4FF5DF6DE30A38AD05D02CFA7B2B696BB1((TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B *)L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_5 = __this->get_address_of_m_Scale_2();
		String_t* L_6 = ___floatingPointformat0;
		String_t* L_7 = Vector3_ToString_mBD710BF9F46219074EE5B095F064EAB4F73B64C1((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = L_4;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_9 = __this->get_address_of_m_Pose_3();
		String_t* L_10 = ___floatingPointformat0;
		String_t* L_11 = Pose_ToString_mF545EBBC9D7E041E8FC673068C8DB7E29B696C82((Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A *)L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_11);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = L_8;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_13 = __this->get_address_of_m_Size_4();
		String_t* L_14 = ___floatingPointformat0;
		String_t* L_15 = Vector3_ToString_mBD710BF9F46219074EE5B095F064EAB4F73B64C1((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_13, L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_15);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_16 = L_12;
		XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 * L_17 = __this->get_address_of_m_TextureDescriptor_5();
		String_t* L_18 = XRTextureDescriptor_ToString_m13E8A051346374949A95D217BBAAD298893A25EB((XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 *)L_17, /*hidden argument*/NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_18);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_18);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19 = L_16;
		int32_t* L_20 = __this->get_address_of_m_TrackingState_6();
		RuntimeObject * L_21 = Box(TrackingState_tB6996ED0D52D2A17DFACC90800705B81D370FC38_il2cpp_TypeInfo_var, L_20);
		NullCheck(L_21);
		String_t* L_22 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_21);
		*L_20 = *(int32_t*)UnBox(L_21);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_22);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_22);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_23 = L_19;
		intptr_t* L_24 = __this->get_address_of_m_NativePtr_7();
		String_t* L_25 = IntPtr_ToString_mC499BFB66CB492853717FFACA63599701FC1E91C((intptr_t*)L_24, /*hidden argument*/NULL);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_25);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_25);
		String_t* L_26 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteralFB004ECFD7B1E474B835B2C92DC67B54C8CA4AE8, L_23, /*hidden argument*/NULL);
		return L_26;
	}
}
IL2CPP_EXTERN_C  String_t* XREnvironmentProbe_ToString_m68F8E47BA9E4040BF7352D68F61FB17177000009_AdjustorThunk (RuntimeObject * __this, String_t* ___floatingPointformat0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C * _thisAdjusted = reinterpret_cast<XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C *>(__this + _offset);
	return XREnvironmentProbe_ToString_m68F8E47BA9E4040BF7352D68F61FB17177000009(_thisAdjusted, ___floatingPointformat0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbe::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XREnvironmentProbe__cctor_m44E1286FA9D3E1AD04BCE96FA2DDF5A808B5F0D7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XREnvironmentProbe__cctor_m44E1286FA9D3E1AD04BCE96FA2DDF5A808B5F0D7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// static readonly XREnvironmentProbe s_Default = new XREnvironmentProbe
		// {
		//     trackableId = TrackableId.invalidId,
		//     pose = Pose.identity
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C ));
		IL2CPP_RUNTIME_CLASS_INIT(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_il2cpp_TypeInfo_var);
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_0 = TrackableId_get_invalidId_m06B698EFFA7748E185299C72B5CEC1AA5B221F85_inline(/*hidden argument*/NULL);
		XREnvironmentProbe_set_trackableId_m2FAAA910E6D06256C1ECCCCF8C6D3E72A056199D_inline((XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C *)(&V_0), L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_il2cpp_TypeInfo_var);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_1 = Pose_get_identity_m334B16AC3024785914BCC5A2B949750A010878BF(/*hidden argument*/NULL);
		XREnvironmentProbe_set_pose_mAC84C3A2D8788D587F0503EA1CE051294A8A87E9_inline((XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C *)(&V_0), L_1, /*hidden argument*/NULL);
		XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C  L_2 = V_0;
		((XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C_StaticFields*)il2cpp_codegen_static_fields_for(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C_il2cpp_TypeInfo_var))->set_s_Default_0(L_2);
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
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystem__ctor_m72F971761AF7B66CBABFF9ABC8468A52406001A2 (XREnvironmentProbeSubsystem_t0C60258F565400E7C5AF0E0B7FA933F2BCF83CB6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XREnvironmentProbeSubsystem__ctor_m72F971761AF7B66CBABFF9ABC8468A52406001A2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bool m_EnvironmentTextureHDR = true;
		__this->set_m_EnvironmentTextureHDR_0((bool)1);
		// public XREnvironmentProbeSubsystem() => m_Provider = CreateProvider();
		TrackingSubsystem_2__ctor_m4298DC3177831515B6413B51E917734028B41370(__this, /*hidden argument*/TrackingSubsystem_2__ctor_m4298DC3177831515B6413B51E917734028B41370_RuntimeMethod_var);
		// public XREnvironmentProbeSubsystem() => m_Provider = CreateProvider();
		Provider_tAF87FE3E906FDBF14F06488A1AA5E80400EFE190 * L_0 = VirtFuncInvoker0< Provider_tAF87FE3E906FDBF14F06488A1AA5E80400EFE190 * >::Invoke(4 /* UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem/Provider UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem::CreateProvider() */, __this);
		__this->set_m_Provider_1(L_0);
		return;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem::Register(UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XREnvironmentProbeSubsystem_Register_m20EFD30E3B31DD3ED37EA42B6E465AFAE132EA37 (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2  ___environmentProbeSubsystemCinfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XREnvironmentProbeSubsystem_Register_m20EFD30E3B31DD3ED37EA42B6E465AFAE132EA37_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// XREnvironmentProbeSubsystemDescriptor environmentProbeSubsystemDescriptor = XREnvironmentProbeSubsystemDescriptor.Create(environmentProbeSubsystemCinfo);
		XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2  L_0 = ___environmentProbeSubsystemCinfo0;
		XREnvironmentProbeSubsystemDescriptor_t7C10519F545418330347AC7434FBB10F39DD4243 * L_1 = XREnvironmentProbeSubsystemDescriptor_Create_m64B177418E0330A718E4461D29A11FE8518BB09E(L_0, /*hidden argument*/NULL);
		// return SubsystemRegistration.CreateDescriptor(environmentProbeSubsystemDescriptor);
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemRegistration_tC119E4E15B2EA84DE58F44840EBED3221FF8CFF2_il2cpp_TypeInfo_var);
		bool L_2 = SubsystemRegistration_CreateDescriptor_m6C69D0D80C317F66888FEBF67DFEE327E3462A54(L_1, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo
IL2CPP_EXTERN_C void XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2_marshal_pinvoke(const XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2& unmarshaled, XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CimplementationTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<implementationType>k__BackingField' of type 'XREnvironmentProbeSubsystemCinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CimplementationTypeU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2_marshal_pinvoke_back(const XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2_marshaled_pinvoke& marshaled, XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2& unmarshaled)
{
	Exception_t* ___U3CimplementationTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<implementationType>k__BackingField' of type 'XREnvironmentProbeSubsystemCinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CimplementationTypeU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo
IL2CPP_EXTERN_C void XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2_marshal_pinvoke_cleanup(XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo
IL2CPP_EXTERN_C void XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2_marshal_com(const XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2& unmarshaled, XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2_marshaled_com& marshaled)
{
	Exception_t* ___U3CimplementationTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<implementationType>k__BackingField' of type 'XREnvironmentProbeSubsystemCinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CimplementationTypeU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2_marshal_com_back(const XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2_marshaled_com& marshaled, XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2& unmarshaled)
{
	Exception_t* ___U3CimplementationTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<implementationType>k__BackingField' of type 'XREnvironmentProbeSubsystemCinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CimplementationTypeU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo
IL2CPP_EXTERN_C void XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2_marshal_com_cleanup(XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2_marshaled_com& marshaled)
{
}
// System.String UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XREnvironmentProbeSubsystemCinfo_get_id_mBEA40C4012D8253E65C525083E3454C93BC6F3BE (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* XREnvironmentProbeSubsystemCinfo_get_id_mBEA40C4012D8253E65C525083E3454C93BC6F3BE_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * _thisAdjusted = reinterpret_cast<XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *>(__this + _offset);
	return XREnvironmentProbeSubsystemCinfo_get_id_mBEA40C4012D8253E65C525083E3454C93BC6F3BE_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::set_id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_id_m5C48BD3E879410D5C622BE7DC74D5C798E151731 (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void XREnvironmentProbeSubsystemCinfo_set_id_m5C48BD3E879410D5C622BE7DC74D5C798E151731_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * _thisAdjusted = reinterpret_cast<XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *>(__this + _offset);
	XREnvironmentProbeSubsystemCinfo_set_id_m5C48BD3E879410D5C622BE7DC74D5C798E151731_inline(_thisAdjusted, ___value0, method);
}
// System.Type UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::get_implementationType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * XREnvironmentProbeSubsystemCinfo_get_implementationType_m60A843D0968BAEE06DA8AE2F67E0B1190CD49249 (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, const RuntimeMethod* method)
{
	{
		// public Type implementationType { get; set; }
		Type_t * L_0 = __this->get_U3CimplementationTypeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t * XREnvironmentProbeSubsystemCinfo_get_implementationType_m60A843D0968BAEE06DA8AE2F67E0B1190CD49249_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * _thisAdjusted = reinterpret_cast<XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *>(__this + _offset);
	return XREnvironmentProbeSubsystemCinfo_get_implementationType_m60A843D0968BAEE06DA8AE2F67E0B1190CD49249_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::set_implementationType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_implementationType_m46EACEC5C1BCC55A1647EE8161074E1D1EEC32B0 (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type implementationType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CimplementationTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void XREnvironmentProbeSubsystemCinfo_set_implementationType_m46EACEC5C1BCC55A1647EE8161074E1D1EEC32B0_AdjustorThunk (RuntimeObject * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * _thisAdjusted = reinterpret_cast<XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *>(__this + _offset);
	XREnvironmentProbeSubsystemCinfo_set_implementationType_m46EACEC5C1BCC55A1647EE8161074E1D1EEC32B0_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::get_supportsManualPlacement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XREnvironmentProbeSubsystemCinfo_get_supportsManualPlacement_m194C593950367B1C7EFB50D6F00E5705597065BF (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsManualPlacement { get; set; }
		bool L_0 = __this->get_U3CsupportsManualPlacementU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool XREnvironmentProbeSubsystemCinfo_get_supportsManualPlacement_m194C593950367B1C7EFB50D6F00E5705597065BF_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * _thisAdjusted = reinterpret_cast<XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *>(__this + _offset);
	return XREnvironmentProbeSubsystemCinfo_get_supportsManualPlacement_m194C593950367B1C7EFB50D6F00E5705597065BF_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::set_supportsManualPlacement(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_supportsManualPlacement_m2D1156DE760E47CBDDC345AD5CAE5D23AC23E524 (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsManualPlacement { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsManualPlacementU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void XREnvironmentProbeSubsystemCinfo_set_supportsManualPlacement_m2D1156DE760E47CBDDC345AD5CAE5D23AC23E524_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * _thisAdjusted = reinterpret_cast<XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *>(__this + _offset);
	XREnvironmentProbeSubsystemCinfo_set_supportsManualPlacement_m2D1156DE760E47CBDDC345AD5CAE5D23AC23E524_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::get_supportsRemovalOfManual()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XREnvironmentProbeSubsystemCinfo_get_supportsRemovalOfManual_m7B2DFDB097FAD2FC7FE6AE7F7A8172FA7B34D406 (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsRemovalOfManual { get; set; }
		bool L_0 = __this->get_U3CsupportsRemovalOfManualU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool XREnvironmentProbeSubsystemCinfo_get_supportsRemovalOfManual_m7B2DFDB097FAD2FC7FE6AE7F7A8172FA7B34D406_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * _thisAdjusted = reinterpret_cast<XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *>(__this + _offset);
	return XREnvironmentProbeSubsystemCinfo_get_supportsRemovalOfManual_m7B2DFDB097FAD2FC7FE6AE7F7A8172FA7B34D406_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::set_supportsRemovalOfManual(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_supportsRemovalOfManual_m01CE117FEA37EE9BEF79903754E396C35B859419 (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsRemovalOfManual { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsRemovalOfManualU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void XREnvironmentProbeSubsystemCinfo_set_supportsRemovalOfManual_m01CE117FEA37EE9BEF79903754E396C35B859419_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * _thisAdjusted = reinterpret_cast<XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *>(__this + _offset);
	XREnvironmentProbeSubsystemCinfo_set_supportsRemovalOfManual_m01CE117FEA37EE9BEF79903754E396C35B859419_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::get_supportsAutomaticPlacement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XREnvironmentProbeSubsystemCinfo_get_supportsAutomaticPlacement_m2EAA567973D53F9FFCF91AAD4233F91957281B11 (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsAutomaticPlacement { get; set; }
		bool L_0 = __this->get_U3CsupportsAutomaticPlacementU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool XREnvironmentProbeSubsystemCinfo_get_supportsAutomaticPlacement_m2EAA567973D53F9FFCF91AAD4233F91957281B11_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * _thisAdjusted = reinterpret_cast<XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *>(__this + _offset);
	return XREnvironmentProbeSubsystemCinfo_get_supportsAutomaticPlacement_m2EAA567973D53F9FFCF91AAD4233F91957281B11_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::set_supportsAutomaticPlacement(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_supportsAutomaticPlacement_mC4DBFBBD4DBB44D6B1154C4759A3175F9AC33D46 (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsAutomaticPlacement { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsAutomaticPlacementU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void XREnvironmentProbeSubsystemCinfo_set_supportsAutomaticPlacement_mC4DBFBBD4DBB44D6B1154C4759A3175F9AC33D46_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * _thisAdjusted = reinterpret_cast<XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *>(__this + _offset);
	XREnvironmentProbeSubsystemCinfo_set_supportsAutomaticPlacement_mC4DBFBBD4DBB44D6B1154C4759A3175F9AC33D46_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::get_supportsRemovalOfAutomatic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XREnvironmentProbeSubsystemCinfo_get_supportsRemovalOfAutomatic_mFC9AA46EA023D8A0968ED80B1F88F10AA50F549F (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsRemovalOfAutomatic { get; set; }
		bool L_0 = __this->get_U3CsupportsRemovalOfAutomaticU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool XREnvironmentProbeSubsystemCinfo_get_supportsRemovalOfAutomatic_mFC9AA46EA023D8A0968ED80B1F88F10AA50F549F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * _thisAdjusted = reinterpret_cast<XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *>(__this + _offset);
	return XREnvironmentProbeSubsystemCinfo_get_supportsRemovalOfAutomatic_mFC9AA46EA023D8A0968ED80B1F88F10AA50F549F_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::set_supportsRemovalOfAutomatic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_supportsRemovalOfAutomatic_m6FCC1E3ACDC01E4447E385A1B89C96DEE16B7EF2 (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsRemovalOfAutomatic { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsRemovalOfAutomaticU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void XREnvironmentProbeSubsystemCinfo_set_supportsRemovalOfAutomatic_m6FCC1E3ACDC01E4447E385A1B89C96DEE16B7EF2_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * _thisAdjusted = reinterpret_cast<XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *>(__this + _offset);
	XREnvironmentProbeSubsystemCinfo_set_supportsRemovalOfAutomatic_m6FCC1E3ACDC01E4447E385A1B89C96DEE16B7EF2_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::get_supportsEnvironmentTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XREnvironmentProbeSubsystemCinfo_get_supportsEnvironmentTexture_m3593704263A383A9EC79E765CCC01632707E4A48 (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsEnvironmentTexture { get; set; }
		bool L_0 = __this->get_U3CsupportsEnvironmentTextureU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool XREnvironmentProbeSubsystemCinfo_get_supportsEnvironmentTexture_m3593704263A383A9EC79E765CCC01632707E4A48_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * _thisAdjusted = reinterpret_cast<XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *>(__this + _offset);
	return XREnvironmentProbeSubsystemCinfo_get_supportsEnvironmentTexture_m3593704263A383A9EC79E765CCC01632707E4A48_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::set_supportsEnvironmentTexture(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_supportsEnvironmentTexture_mE30B73C6AC37C6DF8F5B7DBDBC90A975A498D3E4 (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsEnvironmentTexture { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsEnvironmentTextureU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void XREnvironmentProbeSubsystemCinfo_set_supportsEnvironmentTexture_mE30B73C6AC37C6DF8F5B7DBDBC90A975A498D3E4_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * _thisAdjusted = reinterpret_cast<XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *>(__this + _offset);
	XREnvironmentProbeSubsystemCinfo_set_supportsEnvironmentTexture_mE30B73C6AC37C6DF8F5B7DBDBC90A975A498D3E4_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::get_supportsEnvironmentTextureHDR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XREnvironmentProbeSubsystemCinfo_get_supportsEnvironmentTextureHDR_mDD0F30AB731A6010F6F96DBA660415B55FCD580A (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsEnvironmentTextureHDR { get; set; }
		bool L_0 = __this->get_U3CsupportsEnvironmentTextureHDRU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool XREnvironmentProbeSubsystemCinfo_get_supportsEnvironmentTextureHDR_mDD0F30AB731A6010F6F96DBA660415B55FCD580A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * _thisAdjusted = reinterpret_cast<XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *>(__this + _offset);
	return XREnvironmentProbeSubsystemCinfo_get_supportsEnvironmentTextureHDR_mDD0F30AB731A6010F6F96DBA660415B55FCD580A_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::set_supportsEnvironmentTextureHDR(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_supportsEnvironmentTextureHDR_mA465A23A4DC052895F8F634892B7C8E3A49F4777 (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsEnvironmentTextureHDR { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsEnvironmentTextureHDRU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void XREnvironmentProbeSubsystemCinfo_set_supportsEnvironmentTextureHDR_mA465A23A4DC052895F8F634892B7C8E3A49F4777_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * _thisAdjusted = reinterpret_cast<XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *>(__this + _offset);
	XREnvironmentProbeSubsystemCinfo_set_supportsEnvironmentTextureHDR_mA465A23A4DC052895F8F634892B7C8E3A49F4777_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::Equals(UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XREnvironmentProbeSubsystemCinfo_Equals_mECAF625FF6A6D6CB7652827D34BCF4228243102C (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return (id.Equals(other.id)
		//         && implementationType.Equals(other.implementationType)
		//         && supportsManualPlacement.Equals(other.supportsManualPlacement)
		//         && supportsRemovalOfManual.Equals(other.supportsRemovalOfManual)
		//         && supportsAutomaticPlacement.Equals(other.supportsAutomaticPlacement)
		//         && supportsRemovalOfAutomatic.Equals(other.supportsRemovalOfAutomatic)
		//         && supportsEnvironmentTexture.Equals(other.supportsEnvironmentTexture)
		//         && supportsEnvironmentTextureHDR.Equals(other.supportsEnvironmentTextureHDR));
		String_t* L_0 = XREnvironmentProbeSubsystemCinfo_get_id_mBEA40C4012D8253E65C525083E3454C93BC6F3BE_inline((XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *)__this, /*hidden argument*/NULL);
		String_t* L_1 = XREnvironmentProbeSubsystemCinfo_get_id_mBEA40C4012D8253E65C525083E3454C93BC6F3BE_inline((XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *)(&___other0), /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_2 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_00b7;
		}
	}
	{
		Type_t * L_3 = XREnvironmentProbeSubsystemCinfo_get_implementationType_m60A843D0968BAEE06DA8AE2F67E0B1190CD49249_inline((XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *)__this, /*hidden argument*/NULL);
		Type_t * L_4 = XREnvironmentProbeSubsystemCinfo_get_implementationType_m60A843D0968BAEE06DA8AE2F67E0B1190CD49249_inline((XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *)(&___other0), /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_5 = VirtFuncInvoker1< bool, Type_t * >::Invoke(106 /* System.Boolean System.Type::Equals(System.Type) */, L_3, L_4);
		if (!L_5)
		{
			goto IL_00b7;
		}
	}
	{
		bool L_6 = XREnvironmentProbeSubsystemCinfo_get_supportsManualPlacement_m194C593950367B1C7EFB50D6F00E5705597065BF_inline((XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *)__this, /*hidden argument*/NULL);
		V_0 = L_6;
		bool L_7 = XREnvironmentProbeSubsystemCinfo_get_supportsManualPlacement_m194C593950367B1C7EFB50D6F00E5705597065BF_inline((XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *)(&___other0), /*hidden argument*/NULL);
		bool L_8 = Boolean_Equals_mC63D03B4DE1BBC68835530A9E0384FDDB0AC1A3D((bool*)(&V_0), L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_00b7;
		}
	}
	{
		bool L_9 = XREnvironmentProbeSubsystemCinfo_get_supportsRemovalOfManual_m7B2DFDB097FAD2FC7FE6AE7F7A8172FA7B34D406_inline((XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *)__this, /*hidden argument*/NULL);
		V_0 = L_9;
		bool L_10 = XREnvironmentProbeSubsystemCinfo_get_supportsRemovalOfManual_m7B2DFDB097FAD2FC7FE6AE7F7A8172FA7B34D406_inline((XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *)(&___other0), /*hidden argument*/NULL);
		bool L_11 = Boolean_Equals_mC63D03B4DE1BBC68835530A9E0384FDDB0AC1A3D((bool*)(&V_0), L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_00b7;
		}
	}
	{
		bool L_12 = XREnvironmentProbeSubsystemCinfo_get_supportsAutomaticPlacement_m2EAA567973D53F9FFCF91AAD4233F91957281B11_inline((XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *)__this, /*hidden argument*/NULL);
		V_0 = L_12;
		bool L_13 = XREnvironmentProbeSubsystemCinfo_get_supportsAutomaticPlacement_m2EAA567973D53F9FFCF91AAD4233F91957281B11_inline((XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *)(&___other0), /*hidden argument*/NULL);
		bool L_14 = Boolean_Equals_mC63D03B4DE1BBC68835530A9E0384FDDB0AC1A3D((bool*)(&V_0), L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_00b7;
		}
	}
	{
		bool L_15 = XREnvironmentProbeSubsystemCinfo_get_supportsRemovalOfAutomatic_mFC9AA46EA023D8A0968ED80B1F88F10AA50F549F_inline((XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *)__this, /*hidden argument*/NULL);
		V_0 = L_15;
		bool L_16 = XREnvironmentProbeSubsystemCinfo_get_supportsRemovalOfAutomatic_mFC9AA46EA023D8A0968ED80B1F88F10AA50F549F_inline((XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *)(&___other0), /*hidden argument*/NULL);
		bool L_17 = Boolean_Equals_mC63D03B4DE1BBC68835530A9E0384FDDB0AC1A3D((bool*)(&V_0), L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00b7;
		}
	}
	{
		bool L_18 = XREnvironmentProbeSubsystemCinfo_get_supportsEnvironmentTexture_m3593704263A383A9EC79E765CCC01632707E4A48_inline((XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *)__this, /*hidden argument*/NULL);
		V_0 = L_18;
		bool L_19 = XREnvironmentProbeSubsystemCinfo_get_supportsEnvironmentTexture_m3593704263A383A9EC79E765CCC01632707E4A48_inline((XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *)(&___other0), /*hidden argument*/NULL);
		bool L_20 = Boolean_Equals_mC63D03B4DE1BBC68835530A9E0384FDDB0AC1A3D((bool*)(&V_0), L_19, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00b7;
		}
	}
	{
		bool L_21 = XREnvironmentProbeSubsystemCinfo_get_supportsEnvironmentTextureHDR_mDD0F30AB731A6010F6F96DBA660415B55FCD580A_inline((XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *)__this, /*hidden argument*/NULL);
		V_0 = L_21;
		bool L_22 = XREnvironmentProbeSubsystemCinfo_get_supportsEnvironmentTextureHDR_mDD0F30AB731A6010F6F96DBA660415B55FCD580A_inline((XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *)(&___other0), /*hidden argument*/NULL);
		bool L_23 = Boolean_Equals_mC63D03B4DE1BBC68835530A9E0384FDDB0AC1A3D((bool*)(&V_0), L_22, /*hidden argument*/NULL);
		return L_23;
	}

IL_00b7:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool XREnvironmentProbeSubsystemCinfo_Equals_mECAF625FF6A6D6CB7652827D34BCF4228243102C_AdjustorThunk (RuntimeObject * __this, XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * _thisAdjusted = reinterpret_cast<XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *>(__this + _offset);
	return XREnvironmentProbeSubsystemCinfo_Equals_mECAF625FF6A6D6CB7652827D34BCF4228243102C(_thisAdjusted, ___other0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XREnvironmentProbeSubsystemCinfo_Equals_mE09A9486010D3E88E94AE06CF3BF499D3A2FC6EF (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XREnvironmentProbeSubsystemCinfo_Equals_mE09A9486010D3E88E94AE06CF3BF499D3A2FC6EF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ((obj is XREnvironmentProbeSubsystemCinfo) && Equals((XREnvironmentProbeSubsystemCinfo)obj));
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2 = XREnvironmentProbeSubsystemCinfo_Equals_mECAF625FF6A6D6CB7652827D34BCF4228243102C((XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *)__this, ((*(XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *)((XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *)UnBox(L_1, XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool XREnvironmentProbeSubsystemCinfo_Equals_mE09A9486010D3E88E94AE06CF3BF499D3A2FC6EF_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * _thisAdjusted = reinterpret_cast<XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *>(__this + _offset);
	return XREnvironmentProbeSubsystemCinfo_Equals_mE09A9486010D3E88E94AE06CF3BF499D3A2FC6EF(_thisAdjusted, ___obj0, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XREnvironmentProbeSubsystemCinfo_GetHashCode_mADDFE56D58883EC3832D901FF566989CB00B5D02 (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// int hashCode = 486187739;
		// hashCode = (hashCode * 486187739) + id.GetHashCode();
		String_t* L_0 = XREnvironmentProbeSubsystemCinfo_get_id_mBEA40C4012D8253E65C525083E3454C93BC6F3BE_inline((XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *)__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		// hashCode = (hashCode * 486187739) + implementationType.GetHashCode();
		Type_t * L_2 = XREnvironmentProbeSubsystemCinfo_get_implementationType_m60A843D0968BAEE06DA8AE2F67E0B1190CD49249_inline((XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *)__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		// hashCode = (hashCode * 486187739) + supportsManualPlacement.GetHashCode();
		bool L_4 = XREnvironmentProbeSubsystemCinfo_get_supportsManualPlacement_m194C593950367B1C7EFB50D6F00E5705597065BF_inline((XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *)__this, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(&V_0), /*hidden argument*/NULL);
		// hashCode = (hashCode * 486187739) + supportsRemovalOfManual.GetHashCode();
		bool L_6 = XREnvironmentProbeSubsystemCinfo_get_supportsRemovalOfManual_m7B2DFDB097FAD2FC7FE6AE7F7A8172FA7B34D406_inline((XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *)__this, /*hidden argument*/NULL);
		V_0 = L_6;
		int32_t L_7 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(&V_0), /*hidden argument*/NULL);
		// hashCode = (hashCode * 486187739) + supportsAutomaticPlacement.GetHashCode();
		bool L_8 = XREnvironmentProbeSubsystemCinfo_get_supportsAutomaticPlacement_m2EAA567973D53F9FFCF91AAD4233F91957281B11_inline((XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *)__this, /*hidden argument*/NULL);
		V_0 = L_8;
		int32_t L_9 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(&V_0), /*hidden argument*/NULL);
		// hashCode = (hashCode * 486187739) + supportsRemovalOfAutomatic.GetHashCode();
		bool L_10 = XREnvironmentProbeSubsystemCinfo_get_supportsRemovalOfAutomatic_mFC9AA46EA023D8A0968ED80B1F88F10AA50F549F_inline((XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *)__this, /*hidden argument*/NULL);
		V_0 = L_10;
		int32_t L_11 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(&V_0), /*hidden argument*/NULL);
		// hashCode = (hashCode * 486187739) + supportsEnvironmentTexture.GetHashCode();
		bool L_12 = XREnvironmentProbeSubsystemCinfo_get_supportsEnvironmentTexture_m3593704263A383A9EC79E765CCC01632707E4A48_inline((XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *)__this, /*hidden argument*/NULL);
		V_0 = L_12;
		int32_t L_13 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(&V_0), /*hidden argument*/NULL);
		// hashCode = (hashCode * 486187739) + supportsEnvironmentTextureHDR.GetHashCode();
		bool L_14 = XREnvironmentProbeSubsystemCinfo_get_supportsEnvironmentTextureHDR_mDD0F30AB731A6010F6F96DBA660415B55FCD580A_inline((XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *)__this, /*hidden argument*/NULL);
		V_0 = L_14;
		int32_t L_15 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(&V_0), /*hidden argument*/NULL);
		// return hashCode;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)486187739), (int32_t)((int32_t)486187739))), (int32_t)L_1)), (int32_t)((int32_t)486187739))), (int32_t)L_3)), (int32_t)((int32_t)486187739))), (int32_t)L_5)), (int32_t)((int32_t)486187739))), (int32_t)L_7)), (int32_t)((int32_t)486187739))), (int32_t)L_9)), (int32_t)((int32_t)486187739))), (int32_t)L_11)), (int32_t)((int32_t)486187739))), (int32_t)L_13)), (int32_t)((int32_t)486187739))), (int32_t)L_15));
	}
}
IL2CPP_EXTERN_C  int32_t XREnvironmentProbeSubsystemCinfo_GetHashCode_mADDFE56D58883EC3832D901FF566989CB00B5D02_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * _thisAdjusted = reinterpret_cast<XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *>(__this + _offset);
	return XREnvironmentProbeSubsystemCinfo_GetHashCode_mADDFE56D58883EC3832D901FF566989CB00B5D02(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemDescriptor::.ctor(UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemDescriptor__ctor_m759C9A99C0F48E2422698CABD21C05A9F9E2ACB6 (XREnvironmentProbeSubsystemDescriptor_t7C10519F545418330347AC7434FBB10F39DD4243 * __this, XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2  ___environmentProbeSubsystemCinfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XREnvironmentProbeSubsystemDescriptor__ctor_m759C9A99C0F48E2422698CABD21C05A9F9E2ACB6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// XREnvironmentProbeSubsystemDescriptor(XREnvironmentProbeSubsystemCinfo environmentProbeSubsystemCinfo)
		SubsystemDescriptor_1__ctor_m0FD0613029640C938D9881C5630E266DC813CFE9(__this, /*hidden argument*/SubsystemDescriptor_1__ctor_m0FD0613029640C938D9881C5630E266DC813CFE9_RuntimeMethod_var);
		// id = environmentProbeSubsystemCinfo.id;
		String_t* L_0 = XREnvironmentProbeSubsystemCinfo_get_id_mBEA40C4012D8253E65C525083E3454C93BC6F3BE_inline((XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *)(&___environmentProbeSubsystemCinfo0), /*hidden argument*/NULL);
		SubsystemDescriptor_set_id_m3394B5AEBBE25A1924FD34FC0608DD5AACABBE2C_inline(__this, L_0, /*hidden argument*/NULL);
		// subsystemImplementationType = environmentProbeSubsystemCinfo.implementationType;
		Type_t * L_1 = XREnvironmentProbeSubsystemCinfo_get_implementationType_m60A843D0968BAEE06DA8AE2F67E0B1190CD49249_inline((XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *)(&___environmentProbeSubsystemCinfo0), /*hidden argument*/NULL);
		SubsystemDescriptor_set_subsystemImplementationType_mAEAE9A52920C64D2A9C5B6316E30353AFA581AA4_inline(__this, L_1, /*hidden argument*/NULL);
		// supportsManualPlacement = environmentProbeSubsystemCinfo.supportsManualPlacement;
		bool L_2 = XREnvironmentProbeSubsystemCinfo_get_supportsManualPlacement_m194C593950367B1C7EFB50D6F00E5705597065BF_inline((XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *)(&___environmentProbeSubsystemCinfo0), /*hidden argument*/NULL);
		XREnvironmentProbeSubsystemDescriptor_set_supportsManualPlacement_mCE20C35437C72E053599F9F900EFE7D5A1B0ECF3_inline(__this, L_2, /*hidden argument*/NULL);
		// supportsRemovalOfManual = environmentProbeSubsystemCinfo.supportsRemovalOfManual;
		bool L_3 = XREnvironmentProbeSubsystemCinfo_get_supportsRemovalOfManual_m7B2DFDB097FAD2FC7FE6AE7F7A8172FA7B34D406_inline((XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *)(&___environmentProbeSubsystemCinfo0), /*hidden argument*/NULL);
		XREnvironmentProbeSubsystemDescriptor_set_supportsRemovalOfManual_m148569DAD1997E9EFC75977FD58B2E2A0E6A3A29_inline(__this, L_3, /*hidden argument*/NULL);
		// supportsAutomaticPlacement = environmentProbeSubsystemCinfo.supportsAutomaticPlacement;
		bool L_4 = XREnvironmentProbeSubsystemCinfo_get_supportsAutomaticPlacement_m2EAA567973D53F9FFCF91AAD4233F91957281B11_inline((XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *)(&___environmentProbeSubsystemCinfo0), /*hidden argument*/NULL);
		XREnvironmentProbeSubsystemDescriptor_set_supportsAutomaticPlacement_mE62CB20894AB742E406F1762C9B8C2CE1DA1B359_inline(__this, L_4, /*hidden argument*/NULL);
		// supportsRemovalOfAutomatic = environmentProbeSubsystemCinfo.supportsRemovalOfAutomatic;
		bool L_5 = XREnvironmentProbeSubsystemCinfo_get_supportsRemovalOfAutomatic_mFC9AA46EA023D8A0968ED80B1F88F10AA50F549F_inline((XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *)(&___environmentProbeSubsystemCinfo0), /*hidden argument*/NULL);
		XREnvironmentProbeSubsystemDescriptor_set_supportsRemovalOfAutomatic_m3210C35AC07979BAFDFA3EA0F6A3677285D6E282_inline(__this, L_5, /*hidden argument*/NULL);
		// supportsEnvironmentTexture = environmentProbeSubsystemCinfo.supportsEnvironmentTexture;
		bool L_6 = XREnvironmentProbeSubsystemCinfo_get_supportsEnvironmentTexture_m3593704263A383A9EC79E765CCC01632707E4A48_inline((XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *)(&___environmentProbeSubsystemCinfo0), /*hidden argument*/NULL);
		XREnvironmentProbeSubsystemDescriptor_set_supportsEnvironmentTexture_m67C606821F3D139A11628F487EFE764A2A562CC4_inline(__this, L_6, /*hidden argument*/NULL);
		// supportsEnvironmentTextureHDR = environmentProbeSubsystemCinfo.supportsEnvironmentTextureHDR;
		bool L_7 = XREnvironmentProbeSubsystemCinfo_get_supportsEnvironmentTextureHDR_mDD0F30AB731A6010F6F96DBA660415B55FCD580A_inline((XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *)(&___environmentProbeSubsystemCinfo0), /*hidden argument*/NULL);
		XREnvironmentProbeSubsystemDescriptor_set_supportsEnvironmentTextureHDR_m813F1381535676A236CE05D522515683E6CA795A_inline(__this, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemDescriptor::set_supportsManualPlacement(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemDescriptor_set_supportsManualPlacement_mCE20C35437C72E053599F9F900EFE7D5A1B0ECF3 (XREnvironmentProbeSubsystemDescriptor_t7C10519F545418330347AC7434FBB10F39DD4243 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsManualPlacement { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsManualPlacementU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemDescriptor::set_supportsRemovalOfManual(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemDescriptor_set_supportsRemovalOfManual_m148569DAD1997E9EFC75977FD58B2E2A0E6A3A29 (XREnvironmentProbeSubsystemDescriptor_t7C10519F545418330347AC7434FBB10F39DD4243 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsRemovalOfManual { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsRemovalOfManualU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemDescriptor::set_supportsAutomaticPlacement(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemDescriptor_set_supportsAutomaticPlacement_mE62CB20894AB742E406F1762C9B8C2CE1DA1B359 (XREnvironmentProbeSubsystemDescriptor_t7C10519F545418330347AC7434FBB10F39DD4243 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsAutomaticPlacement { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsAutomaticPlacementU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemDescriptor::set_supportsRemovalOfAutomatic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemDescriptor_set_supportsRemovalOfAutomatic_m3210C35AC07979BAFDFA3EA0F6A3677285D6E282 (XREnvironmentProbeSubsystemDescriptor_t7C10519F545418330347AC7434FBB10F39DD4243 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsRemovalOfAutomatic { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsRemovalOfAutomaticU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemDescriptor::set_supportsEnvironmentTexture(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemDescriptor_set_supportsEnvironmentTexture_m67C606821F3D139A11628F487EFE764A2A562CC4 (XREnvironmentProbeSubsystemDescriptor_t7C10519F545418330347AC7434FBB10F39DD4243 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsEnvironmentTexture { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsEnvironmentTextureU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemDescriptor::set_supportsEnvironmentTextureHDR(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemDescriptor_set_supportsEnvironmentTextureHDR_m813F1381535676A236CE05D522515683E6CA795A (XREnvironmentProbeSubsystemDescriptor_t7C10519F545418330347AC7434FBB10F39DD4243 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsEnvironmentTextureHDR { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsEnvironmentTextureHDRU3Ek__BackingField_7(L_0);
		return;
	}
}
// UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemDescriptor UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemDescriptor::Create(UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XREnvironmentProbeSubsystemDescriptor_t7C10519F545418330347AC7434FBB10F39DD4243 * XREnvironmentProbeSubsystemDescriptor_Create_m64B177418E0330A718E4461D29A11FE8518BB09E (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2  ___environmentProbeSubsystemCinfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XREnvironmentProbeSubsystemDescriptor_Create_m64B177418E0330A718E4461D29A11FE8518BB09E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (String.IsNullOrEmpty(environmentProbeSubsystemCinfo.id))
		String_t* L_0 = XREnvironmentProbeSubsystemCinfo_get_id_mBEA40C4012D8253E65C525083E3454C93BC6F3BE_inline((XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *)(&___environmentProbeSubsystemCinfo0), /*hidden argument*/NULL);
		bool L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// throw new ArgumentException("Cannot create environment probe subsystem descriptor because id is invalid",
		//                             "environmentProbeSubsystemCinfo");
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_2 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_2, _stringLiteral5845E8DEE033062F8F4F5EAA72A635E5E10F19CA, _stringLiteral67C8FE59E36A25FD95779FB7535B566AF7F8421C, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, XREnvironmentProbeSubsystemDescriptor_Create_m64B177418E0330A718E4461D29A11FE8518BB09E_RuntimeMethod_var);
	}

IL_001e:
	{
		// if ((environmentProbeSubsystemCinfo.implementationType == null)
		//     || !environmentProbeSubsystemCinfo.implementationType.IsSubclassOf(typeof(XREnvironmentProbeSubsystem)))
		Type_t * L_3 = XREnvironmentProbeSubsystemCinfo_get_implementationType_m60A843D0968BAEE06DA8AE2F67E0B1190CD49249_inline((XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *)(&___environmentProbeSubsystemCinfo0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_4 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_3, (Type_t *)NULL, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0045;
		}
	}
	{
		Type_t * L_5 = XREnvironmentProbeSubsystemCinfo_get_implementationType_m60A843D0968BAEE06DA8AE2F67E0B1190CD49249_inline((XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *)(&___environmentProbeSubsystemCinfo0), /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_6 = { reinterpret_cast<intptr_t> (XREnvironmentProbeSubsystem_t0C60258F565400E7C5AF0E0B7FA933F2BCF83CB6_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		bool L_8 = VirtFuncInvoker1< bool, Type_t * >::Invoke(101 /* System.Boolean System.Type::IsSubclassOf(System.Type) */, L_5, L_7);
		if (L_8)
		{
			goto IL_0055;
		}
	}

IL_0045:
	{
		// throw new ArgumentException("Cannot create environment probe subsystem descriptor because implementationType is invalid",
		//                             "environmentProbeSubsystemCinfo");
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_9 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_9, _stringLiteral9C218D85033674A6CD055D7A80DEFAD4B22CBEE5, _stringLiteral67C8FE59E36A25FD95779FB7535B566AF7F8421C, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, XREnvironmentProbeSubsystemDescriptor_Create_m64B177418E0330A718E4461D29A11FE8518BB09E_RuntimeMethod_var);
	}

IL_0055:
	{
		// return new XREnvironmentProbeSubsystemDescriptor(environmentProbeSubsystemCinfo);
		XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2  L_10 = ___environmentProbeSubsystemCinfo0;
		XREnvironmentProbeSubsystemDescriptor_t7C10519F545418330347AC7434FBB10F39DD4243 * L_11 = (XREnvironmentProbeSubsystemDescriptor_t7C10519F545418330347AC7434FBB10F39DD4243 *)il2cpp_codegen_object_new(XREnvironmentProbeSubsystemDescriptor_t7C10519F545418330347AC7434FBB10F39DD4243_il2cpp_TypeInfo_var);
		XREnvironmentProbeSubsystemDescriptor__ctor_m759C9A99C0F48E2422698CABD21C05A9F9E2ACB6(L_11, L_10, /*hidden argument*/NULL);
		return L_11;
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
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRImageTrackingSubsystem__ctor_m411C7B39B354BFB6468A5450B91D63A46CAC3A52 (XRImageTrackingSubsystem_tBC68AD21C11D8D67F3343844E129DF505FF705CE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRImageTrackingSubsystem__ctor_m411C7B39B354BFB6468A5450B91D63A46CAC3A52_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public XRImageTrackingSubsystem() => m_Provider = CreateProvider();
		TrackingSubsystem_2__ctor_mF413F42B86FC1EDF7E1AE4C13AA81920BC9AF4CD(__this, /*hidden argument*/TrackingSubsystem_2__ctor_mF413F42B86FC1EDF7E1AE4C13AA81920BC9AF4CD_RuntimeMethod_var);
		// public XRImageTrackingSubsystem() => m_Provider = CreateProvider();
		Provider_tA7CEF856C3BC486ADEBD656F5535E24262AAAE9E * L_0 = VirtFuncInvoker0< Provider_tA7CEF856C3BC486ADEBD656F5535E24262AAAE9E * >::Invoke(4 /* UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem::CreateProvider() */, __this);
		__this->set_m_Provider_0(L_0);
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
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor::set_supportsMovingImages(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRImageTrackingSubsystemDescriptor_set_supportsMovingImages_mC063AA8181AC8EBF77D9971D48520BEE6EC004B2 (XRImageTrackingSubsystemDescriptor_t3EC191739B144A8AA00CEEE03E8F7FF01D7F833B * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsMovingImages { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsMovingImagesU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor::set_requiresPhysicalImageDimensions(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRImageTrackingSubsystemDescriptor_set_requiresPhysicalImageDimensions_m5CCC9D3F1557368927D0AED4E1688F2F8ADA3F14 (XRImageTrackingSubsystemDescriptor_t3EC191739B144A8AA00CEEE03E8F7FF01D7F833B * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool requiresPhysicalImageDimensions { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor::set_supportsMutableLibrary(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRImageTrackingSubsystemDescriptor_set_supportsMutableLibrary_mD005AB53B7850F1B329DE152520E552E23072834 (XRImageTrackingSubsystemDescriptor_t3EC191739B144A8AA00CEEE03E8F7FF01D7F833B * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsMutableLibrary { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsMutableLibraryU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor::Create(UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor_Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRImageTrackingSubsystemDescriptor_Create_m3B9A00008CACA91AEC367F5D5EC19E57EA3D22A1 (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32  ___cinfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRImageTrackingSubsystemDescriptor_Create_m3B9A00008CACA91AEC367F5D5EC19E57EA3D22A1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SubsystemRegistration.CreateDescriptor(new XRImageTrackingSubsystemDescriptor(cinfo));
		Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32  L_0 = ___cinfo0;
		XRImageTrackingSubsystemDescriptor_t3EC191739B144A8AA00CEEE03E8F7FF01D7F833B * L_1 = (XRImageTrackingSubsystemDescriptor_t3EC191739B144A8AA00CEEE03E8F7FF01D7F833B *)il2cpp_codegen_object_new(XRImageTrackingSubsystemDescriptor_t3EC191739B144A8AA00CEEE03E8F7FF01D7F833B_il2cpp_TypeInfo_var);
		XRImageTrackingSubsystemDescriptor__ctor_m2A19512EFC73A1237D84A4DFAB41683FB03D6D55(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemRegistration_tC119E4E15B2EA84DE58F44840EBED3221FF8CFF2_il2cpp_TypeInfo_var);
		SubsystemRegistration_CreateDescriptor_m6C69D0D80C317F66888FEBF67DFEE327E3462A54(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor::.ctor(UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor_Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRImageTrackingSubsystemDescriptor__ctor_m2A19512EFC73A1237D84A4DFAB41683FB03D6D55 (XRImageTrackingSubsystemDescriptor_t3EC191739B144A8AA00CEEE03E8F7FF01D7F833B * __this, Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32  ___cinfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRImageTrackingSubsystemDescriptor__ctor_m2A19512EFC73A1237D84A4DFAB41683FB03D6D55_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// XRImageTrackingSubsystemDescriptor(Cinfo cinfo)
		SubsystemDescriptor_1__ctor_m6E6F9AC5921DE7AD866C280B4E74E441E268DE04(__this, /*hidden argument*/SubsystemDescriptor_1__ctor_m6E6F9AC5921DE7AD866C280B4E74E441E268DE04_RuntimeMethod_var);
		// this.id = cinfo.id;
		String_t* L_0 = Cinfo_get_id_m7ACB39F94D161A19473B51245A60F0FE3380E9C6_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)(&___cinfo0), /*hidden argument*/NULL);
		SubsystemDescriptor_set_id_m3394B5AEBBE25A1924FD34FC0608DD5AACABBE2C_inline(__this, L_0, /*hidden argument*/NULL);
		// this.subsystemImplementationType = cinfo.subsystemImplementationType;
		Type_t * L_1 = Cinfo_get_subsystemImplementationType_m3494B3DBDB5F113CD0DB5380E246F22EBF9FE39A_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)(&___cinfo0), /*hidden argument*/NULL);
		SubsystemDescriptor_set_subsystemImplementationType_mAEAE9A52920C64D2A9C5B6316E30353AFA581AA4_inline(__this, L_1, /*hidden argument*/NULL);
		// this.supportsMovingImages = cinfo.supportsMovingImages;
		bool L_2 = Cinfo_get_supportsMovingImages_m7B1E2171F1304A73339266B64548CF305EFEEA91_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)(&___cinfo0), /*hidden argument*/NULL);
		XRImageTrackingSubsystemDescriptor_set_supportsMovingImages_mC063AA8181AC8EBF77D9971D48520BEE6EC004B2_inline(__this, L_2, /*hidden argument*/NULL);
		// this.requiresPhysicalImageDimensions = cinfo.requiresPhysicalImageDimensions;
		bool L_3 = Cinfo_get_requiresPhysicalImageDimensions_mEED8602BF9D390F19582D3F706A9C93333AFB0C7_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)(&___cinfo0), /*hidden argument*/NULL);
		XRImageTrackingSubsystemDescriptor_set_requiresPhysicalImageDimensions_m5CCC9D3F1557368927D0AED4E1688F2F8ADA3F14_inline(__this, L_3, /*hidden argument*/NULL);
		// this.supportsMutableLibrary = cinfo.supportsMutableLibrary;
		bool L_4 = Cinfo_get_supportsMutableLibrary_mCD0988DBB5810975CB97BEDD9B2E6B6C168D6E19_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)(&___cinfo0), /*hidden argument*/NULL);
		XRImageTrackingSubsystemDescriptor_set_supportsMutableLibrary_mD005AB53B7850F1B329DE152520E552E23072834_inline(__this, L_4, /*hidden argument*/NULL);
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
// System.Int32 UnityEngine.XR.ARSubsystems.XRParticipant::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRParticipant_GetHashCode_mF04382E10454D77B4F1AA3AF615488B98D9D62EC (XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// int hash = m_TrackableId.GetHashCode();
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * L_0 = __this->get_address_of_m_TrackableId_0();
		int32_t L_1 = TrackableId_GetHashCode_mFD297FC6DB40FB5B28C6E9B7A2CF2785D75C4E86((TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B *)L_0, /*hidden argument*/NULL);
		// hash = hash * 486187739 + m_Pose.GetHashCode();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_2 = __this->get_address_of_m_Pose_1();
		int32_t L_3 = Pose_GetHashCode_mE1DD7FBCCB1C979B252F0B117276BA11CF4D2367((Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A *)L_2, /*hidden argument*/NULL);
		// hash = hash * 486187739 + ((int)m_TrackingState).GetHashCode();
		int32_t L_4 = __this->get_m_TrackingState_2();
		V_0 = L_4;
		int32_t L_5 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(&V_0), /*hidden argument*/NULL);
		// hash = hash * 486187739 + m_NativePtr.GetHashCode();
		intptr_t* L_6 = __this->get_address_of_m_NativePtr_3();
		int32_t L_7 = IntPtr_GetHashCode_m55E65FB52EFE7C0EBC3C28E66A5D7542F3B1D35D((intptr_t*)L_6, /*hidden argument*/NULL);
		// return hash;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)((int32_t)486187739))), (int32_t)L_3)), (int32_t)((int32_t)486187739))), (int32_t)L_5)), (int32_t)((int32_t)486187739))), (int32_t)L_7));
	}
}
IL2CPP_EXTERN_C  int32_t XRParticipant_GetHashCode_mF04382E10454D77B4F1AA3AF615488B98D9D62EC_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F * _thisAdjusted = reinterpret_cast<XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F *>(__this + _offset);
	return XRParticipant_GetHashCode_mF04382E10454D77B4F1AA3AF615488B98D9D62EC(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRParticipant::Equals(UnityEngine.XR.ARSubsystems.XRParticipant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRParticipant_Equals_mE1679D0AAFE2566EA4CE5AF7992F1ADD3D2AFEDA (XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F * __this, XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  ___other0, const RuntimeMethod* method)
{
	{
		// return
		//     m_TrackableId.Equals(other.m_TrackableId) &&
		//     m_Pose.Equals(other.m_Pose) &&
		//     (m_TrackingState == other.m_TrackingState) &&
		//     (m_NativePtr == other.m_NativePtr);
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * L_0 = __this->get_address_of_m_TrackableId_0();
		XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  L_1 = ___other0;
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_2 = L_1.get_m_TrackableId_0();
		bool L_3 = TrackableId_Equals_m1DF35616359175E3D66DE18250E8CDA1E6462B06((TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B *)L_0, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0046;
		}
	}
	{
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_4 = __this->get_address_of_m_Pose_1();
		XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  L_5 = ___other0;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_6 = L_5.get_m_Pose_1();
		bool L_7 = Pose_Equals_mFAE0041090F2032B8FCE63A0F289DD206134BF15((Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A *)L_4, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_8 = __this->get_m_TrackingState_2();
		XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  L_9 = ___other0;
		int32_t L_10 = L_9.get_m_TrackingState_2();
		if ((!(((uint32_t)L_8) == ((uint32_t)L_10))))
		{
			goto IL_0046;
		}
	}
	{
		intptr_t L_11 = __this->get_m_NativePtr_3();
		XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  L_12 = ___other0;
		intptr_t L_13 = L_12.get_m_NativePtr_3();
		bool L_14 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_11, (intptr_t)L_13, /*hidden argument*/NULL);
		return L_14;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool XRParticipant_Equals_mE1679D0AAFE2566EA4CE5AF7992F1ADD3D2AFEDA_AdjustorThunk (RuntimeObject * __this, XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F * _thisAdjusted = reinterpret_cast<XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F *>(__this + _offset);
	return XRParticipant_Equals_mE1679D0AAFE2566EA4CE5AF7992F1ADD3D2AFEDA(_thisAdjusted, ___other0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRParticipant::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRParticipant_Equals_mBA488A840ABD4DBB6432E2D03126062EC1A6768C (XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRParticipant_Equals_mBA488A840ABD4DBB6432E2D03126062EC1A6768C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override bool Equals(object obj) => (obj is XRParticipant) && Equals((XRParticipant)obj);
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2 = XRParticipant_Equals_mE1679D0AAFE2566EA4CE5AF7992F1ADD3D2AFEDA((XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F *)__this, ((*(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F *)((XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F *)UnBox(L_1, XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool XRParticipant_Equals_mBA488A840ABD4DBB6432E2D03126062EC1A6768C_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F * _thisAdjusted = reinterpret_cast<XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F *>(__this + _offset);
	return XRParticipant_Equals_mBA488A840ABD4DBB6432E2D03126062EC1A6768C(_thisAdjusted, ___obj0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRParticipant::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRParticipant__cctor_mBD235B2B36E92A66051E85204403C005DFAF9C96 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRParticipant__cctor_mBD235B2B36E92A66051E85204403C005DFAF9C96_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// static readonly XRParticipant k_Default = new XRParticipant
		// {
		//     m_TrackableId = TrackableId.invalidId,
		//     m_Pose = Pose.identity,
		//     m_NativePtr = IntPtr.Zero
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F ));
		IL2CPP_RUNTIME_CLASS_INIT(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_il2cpp_TypeInfo_var);
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_0 = TrackableId_get_invalidId_m06B698EFFA7748E185299C72B5CEC1AA5B221F85_inline(/*hidden argument*/NULL);
		(&V_0)->set_m_TrackableId_0(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_il2cpp_TypeInfo_var);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_1 = Pose_get_identity_m334B16AC3024785914BCC5A2B949750A010878BF(/*hidden argument*/NULL);
		(&V_0)->set_m_Pose_1(L_1);
		(&V_0)->set_m_NativePtr_3((intptr_t)(0));
		XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  L_2 = V_0;
		((XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F_StaticFields*)il2cpp_codegen_static_fields_for(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F_il2cpp_TypeInfo_var))->set_k_Default_5(L_2);
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
// System.Void UnityEngine.XR.ARSubsystems.XRParticipantSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRParticipantSubsystem__ctor_mC7EB236E3A4BBC45C055B94C26493FBB19DF4056 (XRParticipantSubsystem_t7F710E46FC5A17967E7CAE126DE9443C752C36FC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRParticipantSubsystem__ctor_mC7EB236E3A4BBC45C055B94C26493FBB19DF4056_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public XRParticipantSubsystem() => m_Provider = CreateProvider();
		TrackingSubsystem_2__ctor_m84D330B829E9FFE5FDC2B5AC8794FDE41A93B3C8(__this, /*hidden argument*/TrackingSubsystem_2__ctor_m84D330B829E9FFE5FDC2B5AC8794FDE41A93B3C8_RuntimeMethod_var);
		// public XRParticipantSubsystem() => m_Provider = CreateProvider();
		Provider_t1D0BC515976D24FD30341AC456ACFCB2DE4A344E * L_0 = VirtFuncInvoker0< Provider_t1D0BC515976D24FD30341AC456ACFCB2DE4A344E * >::Invoke(4 /* UnityEngine.XR.ARSubsystems.XRParticipantSubsystem/Provider UnityEngine.XR.ARSubsystems.XRParticipantSubsystem::CreateProvider() */, __this);
		__this->set_m_Provider_0(L_0);
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
// System.Void UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor::set_capabilities(UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor_Capabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRParticipantSubsystemDescriptor_set_capabilities_m3CDF9EDC1BF57F513846DE87A9E4996ED543759A (XRParticipantSubsystemDescriptor_t533EE70DC8D4B105B9C87B76D35A7D59A84BCA55 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public Capabilities capabilities { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CcapabilitiesU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor::.ctor(System.String,System.Type,UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor_Capabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRParticipantSubsystemDescriptor__ctor_mF2C86E0FF1D8BF60D9467164B6E0654AE41B9D34 (XRParticipantSubsystemDescriptor_t533EE70DC8D4B105B9C87B76D35A7D59A84BCA55 * __this, String_t* ___subsystemId0, Type_t * ___subsystemType1, int32_t ___capabilities2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRParticipantSubsystemDescriptor__ctor_mF2C86E0FF1D8BF60D9467164B6E0654AE41B9D34_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// XRParticipantSubsystemDescriptor(string subsystemId, Type subsystemType, Capabilities capabilities)
		SubsystemDescriptor_1__ctor_m0502A4C077984C324C39098B7089F53FACA8B7AF(__this, /*hidden argument*/SubsystemDescriptor_1__ctor_m0502A4C077984C324C39098B7089F53FACA8B7AF_RuntimeMethod_var);
		// id = subsystemId;
		String_t* L_0 = ___subsystemId0;
		SubsystemDescriptor_set_id_m3394B5AEBBE25A1924FD34FC0608DD5AACABBE2C_inline(__this, L_0, /*hidden argument*/NULL);
		// subsystemImplementationType = subsystemType;
		Type_t * L_1 = ___subsystemType1;
		SubsystemDescriptor_set_subsystemImplementationType_mAEAE9A52920C64D2A9C5B6316E30353AFA581AA4_inline(__this, L_1, /*hidden argument*/NULL);
		// this.capabilities = capabilities;
		int32_t L_2 = ___capabilities2;
		XRParticipantSubsystemDescriptor_set_capabilities_m3CDF9EDC1BF57F513846DE87A9E4996ED543759A_inline(__this, L_2, /*hidden argument*/NULL);
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
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneSubsystem__ctor_mDD4F1B44F90E2F50D3C78601413F01D05990B20C (XRPlaneSubsystem_t7C76F9D2C993B0DC38F0A7CDCE745EA7C12417EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRPlaneSubsystem__ctor_mDD4F1B44F90E2F50D3C78601413F01D05990B20C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public XRPlaneSubsystem() => m_Provider = CreateProvider();
		TrackingSubsystem_2__ctor_m8952C59F525DF242980CCBB79C55BF52E0E2DB24(__this, /*hidden argument*/TrackingSubsystem_2__ctor_m8952C59F525DF242980CCBB79C55BF52E0E2DB24_RuntimeMethod_var);
		// public XRPlaneSubsystem() => m_Provider = CreateProvider();
		Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12 * L_0 = VirtFuncInvoker0< Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12 * >::Invoke(4 /* UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider UnityEngine.XR.ARSubsystems.XRPlaneSubsystem::CreateProvider() */, __this);
		__this->set_m_Provider_0(L_0);
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
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::set_supportsHorizontalPlaneDetection(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_set_supportsHorizontalPlaneDetection_m2BB45C7A44E14368A0FAEADA130A6F6158B1042D (XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsHorizontalPlaneDetection { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::set_supportsVerticalPlaneDetection(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_set_supportsVerticalPlaneDetection_m050259C60036A9B08459ED7BDFC06D24270927B2 (XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsVerticalPlaneDetection { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::set_supportsArbitraryPlaneDetection(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_set_supportsArbitraryPlaneDetection_m2A4804EC8ED1137CB21F6589FBAE85CF01B1A5A0 (XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsArbitraryPlaneDetection { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::set_supportsBoundaryVertices(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_set_supportsBoundaryVertices_mDF9E00121A6509790D704D77FF0B863A99436747 (XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsBoundaryVertices { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsBoundaryVerticesU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::set_supportsClassification(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_set_supportsClassification_mA74FCEFD28F8CC7E1BB2E97E69DFA8E20BD0904A (XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsClassification { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsClassificationU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::Create(UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_Create_mB69A44F54AB64DF4361D3C16AE48C2F1B474EA32 (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD  ___cinfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRPlaneSubsystemDescriptor_Create_mB69A44F54AB64DF4361D3C16AE48C2F1B474EA32_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var descriptor = new XRPlaneSubsystemDescriptor(cinfo);
		Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD  L_0 = ___cinfo0;
		XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483 * L_1 = (XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483 *)il2cpp_codegen_object_new(XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483_il2cpp_TypeInfo_var);
		XRPlaneSubsystemDescriptor__ctor_mC8788AC7F6940BA1E88AE0277C1D099DD0EEB935(L_1, L_0, /*hidden argument*/NULL);
		// SubsystemRegistration.CreateDescriptor(descriptor);
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemRegistration_tC119E4E15B2EA84DE58F44840EBED3221FF8CFF2_il2cpp_TypeInfo_var);
		SubsystemRegistration_CreateDescriptor_m6C69D0D80C317F66888FEBF67DFEE327E3462A54(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::.ctor(UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor__ctor_mC8788AC7F6940BA1E88AE0277C1D099DD0EEB935 (XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483 * __this, Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD  ___cinfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRPlaneSubsystemDescriptor__ctor_mC8788AC7F6940BA1E88AE0277C1D099DD0EEB935_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// XRPlaneSubsystemDescriptor(Cinfo cinfo)
		SubsystemDescriptor_1__ctor_mC8F5D95506044FF67424F74B96A546F08E0D4CFF(__this, /*hidden argument*/SubsystemDescriptor_1__ctor_mC8F5D95506044FF67424F74B96A546F08E0D4CFF_RuntimeMethod_var);
		// id = cinfo.id;
		String_t* L_0 = Cinfo_get_id_m62022D2EE6912F0B1BDBCA687A4FC63321DE3F86_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&___cinfo0), /*hidden argument*/NULL);
		SubsystemDescriptor_set_id_m3394B5AEBBE25A1924FD34FC0608DD5AACABBE2C_inline(__this, L_0, /*hidden argument*/NULL);
		// subsystemImplementationType = cinfo.subsystemImplementationType;
		Type_t * L_1 = Cinfo_get_subsystemImplementationType_m82A28CC42BE4BA1FF20AE356908C272CC9103F31_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&___cinfo0), /*hidden argument*/NULL);
		SubsystemDescriptor_set_subsystemImplementationType_mAEAE9A52920C64D2A9C5B6316E30353AFA581AA4_inline(__this, L_1, /*hidden argument*/NULL);
		// supportsHorizontalPlaneDetection = cinfo.supportsHorizontalPlaneDetection;
		bool L_2 = Cinfo_get_supportsHorizontalPlaneDetection_mBC3012C667106D47D9429F9C8001774038A38216_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&___cinfo0), /*hidden argument*/NULL);
		XRPlaneSubsystemDescriptor_set_supportsHorizontalPlaneDetection_m2BB45C7A44E14368A0FAEADA130A6F6158B1042D_inline(__this, L_2, /*hidden argument*/NULL);
		// supportsVerticalPlaneDetection = cinfo.supportsVerticalPlaneDetection;
		bool L_3 = Cinfo_get_supportsVerticalPlaneDetection_m4E3BE200E11784D049B94A054F15E4C76D29D7C6_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&___cinfo0), /*hidden argument*/NULL);
		XRPlaneSubsystemDescriptor_set_supportsVerticalPlaneDetection_m050259C60036A9B08459ED7BDFC06D24270927B2_inline(__this, L_3, /*hidden argument*/NULL);
		// supportsArbitraryPlaneDetection = cinfo.supportsArbitraryPlaneDetection;
		bool L_4 = Cinfo_get_supportsArbitraryPlaneDetection_mF6CB379C9781FE8B8473949DA99196508EF91DB5_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&___cinfo0), /*hidden argument*/NULL);
		XRPlaneSubsystemDescriptor_set_supportsArbitraryPlaneDetection_m2A4804EC8ED1137CB21F6589FBAE85CF01B1A5A0_inline(__this, L_4, /*hidden argument*/NULL);
		// supportsBoundaryVertices = cinfo.supportsBoundaryVertices;
		bool L_5 = Cinfo_get_supportsBoundaryVertices_m5BA762B342FCF81EAE6E3645D3BAF04C1E8EAAD9_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&___cinfo0), /*hidden argument*/NULL);
		XRPlaneSubsystemDescriptor_set_supportsBoundaryVertices_mDF9E00121A6509790D704D77FF0B863A99436747_inline(__this, L_5, /*hidden argument*/NULL);
		// supportsClassification = cinfo.supportsClassification;
		bool L_6 = Cinfo_get_supportsClassification_m0396A2A62F840D9E283402BFB3681A5CC19C810E_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&___cinfo0), /*hidden argument*/NULL);
		XRPlaneSubsystemDescriptor_set_supportsClassification_mA74FCEFD28F8CC7E1BB2E97E69DFA8E20BD0904A_inline(__this, L_6, /*hidden argument*/NULL);
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
// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRPointCloud::get_pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  XRPointCloud_get_pose_m4291F970BA7E4F2DE67BB6666D365FF510B8AC39 (XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 * __this, const RuntimeMethod* method)
{
	{
		// public Pose pose => m_Pose;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_0 = __this->get_m_Pose_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  XRPointCloud_get_pose_m4291F970BA7E4F2DE67BB6666D365FF510B8AC39_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 * _thisAdjusted = reinterpret_cast<XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 *>(__this + _offset);
	return XRPointCloud_get_pose_m4291F970BA7E4F2DE67BB6666D365FF510B8AC39_inline(_thisAdjusted, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRPointCloud::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRPointCloud_GetHashCode_m27CF26ED9655FD5EF9E3F83986059017A37E6778 (XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// var hash = m_TrackableId.GetHashCode();
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * L_0 = __this->get_address_of_m_TrackableId_1();
		int32_t L_1 = TrackableId_GetHashCode_mFD297FC6DB40FB5B28C6E9B7A2CF2785D75C4E86((TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B *)L_0, /*hidden argument*/NULL);
		// hash = hash * 486187739 + m_Pose.GetHashCode();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_2 = __this->get_address_of_m_Pose_2();
		int32_t L_3 = Pose_GetHashCode_mE1DD7FBCCB1C979B252F0B117276BA11CF4D2367((Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A *)L_2, /*hidden argument*/NULL);
		// hash = hash * 486187739 + ((int)m_TrackingState).GetHashCode();
		int32_t L_4 = __this->get_m_TrackingState_3();
		V_0 = L_4;
		int32_t L_5 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(&V_0), /*hidden argument*/NULL);
		// hash = hash * 486187739 + m_NativePtr.GetHashCode();
		intptr_t* L_6 = __this->get_address_of_m_NativePtr_4();
		int32_t L_7 = IntPtr_GetHashCode_m55E65FB52EFE7C0EBC3C28E66A5D7542F3B1D35D((intptr_t*)L_6, /*hidden argument*/NULL);
		// return hash;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)((int32_t)486187739))), (int32_t)L_3)), (int32_t)((int32_t)486187739))), (int32_t)L_5)), (int32_t)((int32_t)486187739))), (int32_t)L_7));
	}
}
IL2CPP_EXTERN_C  int32_t XRPointCloud_GetHashCode_m27CF26ED9655FD5EF9E3F83986059017A37E6778_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 * _thisAdjusted = reinterpret_cast<XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 *>(__this + _offset);
	return XRPointCloud_GetHashCode_m27CF26ED9655FD5EF9E3F83986059017A37E6778(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRPointCloud::Equals(UnityEngine.XR.ARSubsystems.XRPointCloud)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRPointCloud_Equals_mFB272AE1F45D6A70C7E5C18D49E2ED7E2375AC0C (XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 * __this, XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRPointCloud_Equals_mFB272AE1F45D6A70C7E5C18D49E2ED7E2375AC0C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return
		//     (m_TrackableId == other.m_TrackableId) &&
		//     (m_Pose.Equals(other.pose)) &&
		//     (m_TrackingState == other.m_TrackingState) &&
		//     (m_NativePtr == other.m_NativePtr);
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_0 = __this->get_m_TrackableId_1();
		XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  L_1 = ___other0;
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_2 = L_1.get_m_TrackableId_1();
		IL2CPP_RUNTIME_CLASS_INIT(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_il2cpp_TypeInfo_var);
		bool L_3 = TrackableId_op_Equality_m0868EBB6BB9BA72B226D0717352604B3E8EA119B(L_0, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0047;
		}
	}
	{
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_4 = __this->get_address_of_m_Pose_2();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_5 = XRPointCloud_get_pose_m4291F970BA7E4F2DE67BB6666D365FF510B8AC39_inline((XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 *)(&___other0), /*hidden argument*/NULL);
		bool L_6 = Pose_Equals_mFAE0041090F2032B8FCE63A0F289DD206134BF15((Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A *)L_4, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_7 = __this->get_m_TrackingState_3();
		XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  L_8 = ___other0;
		int32_t L_9 = L_8.get_m_TrackingState_3();
		if ((!(((uint32_t)L_7) == ((uint32_t)L_9))))
		{
			goto IL_0047;
		}
	}
	{
		intptr_t L_10 = __this->get_m_NativePtr_4();
		XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  L_11 = ___other0;
		intptr_t L_12 = L_11.get_m_NativePtr_4();
		bool L_13 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_10, (intptr_t)L_12, /*hidden argument*/NULL);
		return L_13;
	}

IL_0047:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool XRPointCloud_Equals_mFB272AE1F45D6A70C7E5C18D49E2ED7E2375AC0C_AdjustorThunk (RuntimeObject * __this, XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 * _thisAdjusted = reinterpret_cast<XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 *>(__this + _offset);
	return XRPointCloud_Equals_mFB272AE1F45D6A70C7E5C18D49E2ED7E2375AC0C(_thisAdjusted, ___other0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRPointCloud::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRPointCloud_Equals_m7123CA7CBF03D2DDAEAFD63768A78A559B70D34A (XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRPointCloud_Equals_m7123CA7CBF03D2DDAEAFD63768A78A559B70D34A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ReferenceEquals(null, obj))
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0005:
	{
		// return Equals((XRPointCloud)obj);
		RuntimeObject * L_1 = ___obj0;
		bool L_2 = XRPointCloud_Equals_mFB272AE1F45D6A70C7E5C18D49E2ED7E2375AC0C((XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 *)__this, ((*(XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 *)((XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 *)UnBox(L_1, XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool XRPointCloud_Equals_m7123CA7CBF03D2DDAEAFD63768A78A559B70D34A_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 * _thisAdjusted = reinterpret_cast<XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 *>(__this + _offset);
	return XRPointCloud_Equals_m7123CA7CBF03D2DDAEAFD63768A78A559B70D34A(_thisAdjusted, ___obj0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRPointCloud::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPointCloud__cctor_m2491726ECECF7EBAD790AD20F7AAF000215186DB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRPointCloud__cctor_m2491726ECECF7EBAD790AD20F7AAF000215186DB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// static readonly XRPointCloud s_Default = new XRPointCloud
		// {
		//     m_TrackableId = TrackableId.invalidId,
		//     m_Pose = Pose.identity,
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 ));
		IL2CPP_RUNTIME_CLASS_INIT(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_il2cpp_TypeInfo_var);
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_0 = TrackableId_get_invalidId_m06B698EFFA7748E185299C72B5CEC1AA5B221F85_inline(/*hidden argument*/NULL);
		(&V_0)->set_m_TrackableId_1(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_il2cpp_TypeInfo_var);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_1 = Pose_get_identity_m334B16AC3024785914BCC5A2B949750A010878BF(/*hidden argument*/NULL);
		(&V_0)->set_m_Pose_2(L_1);
		XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  L_2 = V_0;
		((XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2_StaticFields*)il2cpp_codegen_static_fields_for(XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2_il2cpp_TypeInfo_var))->set_s_Default_0(L_2);
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
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastSubsystem__ctor_m73E44C9109F84F8DFB603F6E480200EF0A62A15B (XRRaycastSubsystem_t62FDAC9AA1BD44C4557AEE3FEF3D2FA24C71B6B8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRRaycastSubsystem__ctor_m73E44C9109F84F8DFB603F6E480200EF0A62A15B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public XRRaycastSubsystem() => m_Provider = CreateProvider();
		XRSubsystem_1__ctor_m02A65B932C7EE395D07D62DAD0B74D71DA9504D7(__this, /*hidden argument*/XRSubsystem_1__ctor_m02A65B932C7EE395D07D62DAD0B74D71DA9504D7_RuntimeMethod_var);
		// public XRRaycastSubsystem() => m_Provider = CreateProvider();
		Provider_tF185BE0541D2066CD242583CEFE7709DD22DD227 * L_0 = VirtFuncInvoker0< Provider_tF185BE0541D2066CD242583CEFE7709DD22DD227 * >::Invoke(4 /* UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider UnityEngine.XR.ARSubsystems.XRRaycastSubsystem::CreateProvider() */, __this);
		__this->set_m_Provider_0(L_0);
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
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::set_supportsViewportBasedRaycast(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_set_supportsViewportBasedRaycast_m573D624059387ECB8EAB5386DDA18F04A8B74A29 (XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsViewportBasedRaycast { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsViewportBasedRaycastU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::set_supportsWorldBasedRaycast(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_set_supportsWorldBasedRaycast_mA63CC456D0FD28CD57DD2D0C3DEB3AC0DEA60C8B (XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsWorldBasedRaycast { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsWorldBasedRaycastU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::set_supportedTrackableTypes(UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_set_supportedTrackableTypes_mAFC6D42C7EFE47219C8461162392E994364BBD53 (XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public TrackableType supportedTrackableTypes { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CsupportedTrackableTypesU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::RegisterDescriptor(UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor_Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_RegisterDescriptor_mD9A0FD5846AA09D7D7D32A1093566607D0082ABA (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01  ___cinfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRRaycastSubsystemDescriptor_RegisterDescriptor_mD9A0FD5846AA09D7D7D32A1093566607D0082ABA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SubsystemRegistration.CreateDescriptor(new XRRaycastSubsystemDescriptor(cinfo));
		Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01  L_0 = ___cinfo0;
		XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C * L_1 = (XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C *)il2cpp_codegen_object_new(XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C_il2cpp_TypeInfo_var);
		XRRaycastSubsystemDescriptor__ctor_m2185C8C50AB138A0C3B5165A92534E2E0D7D57A7(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemRegistration_tC119E4E15B2EA84DE58F44840EBED3221FF8CFF2_il2cpp_TypeInfo_var);
		SubsystemRegistration_CreateDescriptor_m6C69D0D80C317F66888FEBF67DFEE327E3462A54(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::.ctor(UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor_Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor__ctor_m2185C8C50AB138A0C3B5165A92534E2E0D7D57A7 (XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C * __this, Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01  ___cinfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRRaycastSubsystemDescriptor__ctor_m2185C8C50AB138A0C3B5165A92534E2E0D7D57A7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// XRRaycastSubsystemDescriptor(Cinfo cinfo)
		SubsystemDescriptor_1__ctor_m7A44244C7A90CD4A823CBB36954E2375C2654C91(__this, /*hidden argument*/SubsystemDescriptor_1__ctor_m7A44244C7A90CD4A823CBB36954E2375C2654C91_RuntimeMethod_var);
		// id = cinfo.id;
		String_t* L_0 = Cinfo_get_id_m9A34BB7AAEFCB43E1627AA047A68C058D730EDC4_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)(&___cinfo0), /*hidden argument*/NULL);
		SubsystemDescriptor_set_id_m3394B5AEBBE25A1924FD34FC0608DD5AACABBE2C_inline(__this, L_0, /*hidden argument*/NULL);
		// subsystemImplementationType = cinfo.subsystemImplementationType;
		Type_t * L_1 = Cinfo_get_subsystemImplementationType_mDA4920EAF71BB44AED95212F4513B74096E4F7FD_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)(&___cinfo0), /*hidden argument*/NULL);
		SubsystemDescriptor_set_subsystemImplementationType_mAEAE9A52920C64D2A9C5B6316E30353AFA581AA4_inline(__this, L_1, /*hidden argument*/NULL);
		// supportsViewportBasedRaycast = cinfo.supportsViewportBasedRaycast;
		bool L_2 = Cinfo_get_supportsViewportBasedRaycast_m76E31D4FF84E88050FE4E8B6C44FB6E4E71A5A3A_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)(&___cinfo0), /*hidden argument*/NULL);
		XRRaycastSubsystemDescriptor_set_supportsViewportBasedRaycast_m573D624059387ECB8EAB5386DDA18F04A8B74A29_inline(__this, L_2, /*hidden argument*/NULL);
		// supportsWorldBasedRaycast = cinfo.supportsWorldBasedRaycast;
		bool L_3 = Cinfo_get_supportsWorldBasedRaycast_m5242363FA90D64968F4ED236EC35973B7ABC180A_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)(&___cinfo0), /*hidden argument*/NULL);
		XRRaycastSubsystemDescriptor_set_supportsWorldBasedRaycast_mA63CC456D0FD28CD57DD2D0C3DEB3AC0DEA60C8B_inline(__this, L_3, /*hidden argument*/NULL);
		// supportedTrackableTypes = cinfo.supportedTrackableTypes;
		int32_t L_4 = Cinfo_get_supportedTrackableTypes_m0DA573866D46012B650151C7538796542A3E2C70_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)(&___cinfo0), /*hidden argument*/NULL);
		XRRaycastSubsystemDescriptor_set_supportedTrackableTypes_mAFC6D42C7EFE47219C8461162392E994364BBD53_inline(__this, L_4, /*hidden argument*/NULL);
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
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystem__ctor_m8485F39F339764D3FCA4FD0E1D77ADE16CAE1676 (XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSessionSubsystem__ctor_m8485F39F339764D3FCA4FD0E1D77ADE16CAE1676_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public XRSessionSubsystem() => m_Provider = CreateProvider();
		XRSubsystem_1__ctor_mF1BDC658BE98B8AD0178C3A695732FD3DD5C2929(__this, /*hidden argument*/XRSubsystem_1__ctor_mF1BDC658BE98B8AD0178C3A695732FD3DD5C2929_RuntimeMethod_var);
		// public XRSessionSubsystem() => m_Provider = CreateProvider();
		Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * L_0 = VirtFuncInvoker0< Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * >::Invoke(4 /* UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider UnityEngine.XR.ARSubsystems.XRSessionSubsystem::CreateProvider() */, __this);
		__this->set_m_Provider_0(L_0);
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
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::set_supportsInstall(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor_set_supportsInstall_mE8D2939BADC8A5579685249EEA3C12617416CEF2 (XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsInstall { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsInstallU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::set_supportsMatchFrameRate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor_set_supportsMatchFrameRate_m9FB2B904E2E7E4EC51E2089C8DDE97463F4C031D (XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsMatchFrameRate { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsMatchFrameRateU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::RegisterDescriptor(UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor_RegisterDescriptor_m60DE0DD6782289BAD4D67D15E2361D1B7B71C262 (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A  ___cinfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSessionSubsystemDescriptor_RegisterDescriptor_m60DE0DD6782289BAD4D67D15E2361D1B7B71C262_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SubsystemRegistration.CreateDescriptor(new XRSessionSubsystemDescriptor(cinfo));
		Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A  L_0 = ___cinfo0;
		XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C * L_1 = (XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C *)il2cpp_codegen_object_new(XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C_il2cpp_TypeInfo_var);
		XRSessionSubsystemDescriptor__ctor_mC3487128AC53B5697213AFF8B2F98F1C3288B3A7(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemRegistration_tC119E4E15B2EA84DE58F44840EBED3221FF8CFF2_il2cpp_TypeInfo_var);
		SubsystemRegistration_CreateDescriptor_m6C69D0D80C317F66888FEBF67DFEE327E3462A54(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::.ctor(UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor__ctor_mC3487128AC53B5697213AFF8B2F98F1C3288B3A7 (XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C * __this, Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A  ___cinfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSessionSubsystemDescriptor__ctor_mC3487128AC53B5697213AFF8B2F98F1C3288B3A7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// XRSessionSubsystemDescriptor(Cinfo cinfo)
		SubsystemDescriptor_1__ctor_mC887CD5056B890F34245A52118EF295EFB9CD439(__this, /*hidden argument*/SubsystemDescriptor_1__ctor_mC887CD5056B890F34245A52118EF295EFB9CD439_RuntimeMethod_var);
		// id = cinfo.id;
		String_t* L_0 = Cinfo_get_id_mA521F604882D1F4C6FD30262F3E2C3B0609BFC55_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)(&___cinfo0), /*hidden argument*/NULL);
		SubsystemDescriptor_set_id_m3394B5AEBBE25A1924FD34FC0608DD5AACABBE2C_inline(__this, L_0, /*hidden argument*/NULL);
		// subsystemImplementationType = cinfo.subsystemImplementationType;
		Type_t * L_1 = Cinfo_get_subsystemImplementationType_m0DA3A6C9EAC6743D765D06C5388E069FCC60DC74_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)(&___cinfo0), /*hidden argument*/NULL);
		SubsystemDescriptor_set_subsystemImplementationType_mAEAE9A52920C64D2A9C5B6316E30353AFA581AA4_inline(__this, L_1, /*hidden argument*/NULL);
		// supportsInstall = cinfo.supportsInstall;
		bool L_2 = Cinfo_get_supportsInstall_m706A828C9AE61FF74DF4640D80E52148CDF4F3AD_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)(&___cinfo0), /*hidden argument*/NULL);
		XRSessionSubsystemDescriptor_set_supportsInstall_mE8D2939BADC8A5579685249EEA3C12617416CEF2_inline(__this, L_2, /*hidden argument*/NULL);
		// supportsMatchFrameRate = cinfo.supportsMatchFrameRate;
		bool L_3 = Cinfo_get_supportsMatchFrameRate_m1E603F47BF0A28EE5E7377A28D9D2BB29BFD3B6F_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)(&___cinfo0), /*hidden argument*/NULL);
		XRSessionSubsystemDescriptor_set_supportsMatchFrameRate_m9FB2B904E2E7E4EC51E2089C8DDE97463F4C031D_inline(__this, L_3, /*hidden argument*/NULL);
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
// System.Boolean UnityEngine.XR.ARSubsystems.XRTextureDescriptor::hasIdenticalTextureMetadata(UnityEngine.XR.ARSubsystems.XRTextureDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRTextureDescriptor_hasIdenticalTextureMetadata_mEEAE086BC369920DB89D8E38BA6A1133436100F2 (XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 * __this, XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  ___other0, const RuntimeMethod* method)
{
	{
		// return
		//     m_Width.Equals(other.m_Width) &&
		//     m_Height.Equals(other.m_Height) &&
		//     m_MipmapCount.Equals(other.m_MipmapCount) &&
		//     (m_Format == other.m_Format);
		int32_t* L_0 = __this->get_address_of_m_Width_1();
		XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  L_1 = ___other0;
		int32_t L_2 = L_1.get_m_Width_1();
		bool L_3 = Int32_Equals_mA73E9B3A01B9B9151C262C1E1A56C6AB4891A5E4((int32_t*)L_0, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0048;
		}
	}
	{
		int32_t* L_4 = __this->get_address_of_m_Height_2();
		XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  L_5 = ___other0;
		int32_t L_6 = L_5.get_m_Height_2();
		bool L_7 = Int32_Equals_mA73E9B3A01B9B9151C262C1E1A56C6AB4891A5E4((int32_t*)L_4, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0048;
		}
	}
	{
		int32_t* L_8 = __this->get_address_of_m_MipmapCount_3();
		XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  L_9 = ___other0;
		int32_t L_10 = L_9.get_m_MipmapCount_3();
		bool L_11 = Int32_Equals_mA73E9B3A01B9B9151C262C1E1A56C6AB4891A5E4((int32_t*)L_8, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_12 = __this->get_m_Format_4();
		XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  L_13 = ___other0;
		int32_t L_14 = L_13.get_m_Format_4();
		return (bool)((((int32_t)L_12) == ((int32_t)L_14))? 1 : 0);
	}

IL_0048:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool XRTextureDescriptor_hasIdenticalTextureMetadata_mEEAE086BC369920DB89D8E38BA6A1133436100F2_AdjustorThunk (RuntimeObject * __this, XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 * _thisAdjusted = reinterpret_cast<XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 *>(__this + _offset);
	return XRTextureDescriptor_hasIdenticalTextureMetadata_mEEAE086BC369920DB89D8E38BA6A1133436100F2(_thisAdjusted, ___other0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRTextureDescriptor::Equals(UnityEngine.XR.ARSubsystems.XRTextureDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRTextureDescriptor_Equals_mD2A71E4A2D68686E74A648896FAC0FCDF02BE0B1 (XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 * __this, XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  ___other0, const RuntimeMethod* method)
{
	{
		// return
		//     hasIdenticalTextureMetadata(other) &&
		//     m_PropertyNameId.Equals(other.m_PropertyNameId) &&
		//     (m_NativeTexture == other.m_NativeTexture);
		XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  L_0 = ___other0;
		bool L_1 = XRTextureDescriptor_hasIdenticalTextureMetadata_mEEAE086BC369920DB89D8E38BA6A1133436100F2((XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 *)__this, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		int32_t* L_2 = __this->get_address_of_m_PropertyNameId_5();
		XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  L_3 = ___other0;
		int32_t L_4 = L_3.get_m_PropertyNameId_5();
		bool L_5 = Int32_Equals_mA73E9B3A01B9B9151C262C1E1A56C6AB4891A5E4((int32_t*)L_2, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		intptr_t L_6 = __this->get_m_NativeTexture_0();
		XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  L_7 = ___other0;
		intptr_t L_8 = L_7.get_m_NativeTexture_0();
		bool L_9 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_6, (intptr_t)L_8, /*hidden argument*/NULL);
		return L_9;
	}

IL_002e:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool XRTextureDescriptor_Equals_mD2A71E4A2D68686E74A648896FAC0FCDF02BE0B1_AdjustorThunk (RuntimeObject * __this, XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 * _thisAdjusted = reinterpret_cast<XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 *>(__this + _offset);
	return XRTextureDescriptor_Equals_mD2A71E4A2D68686E74A648896FAC0FCDF02BE0B1(_thisAdjusted, ___other0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRTextureDescriptor::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRTextureDescriptor_Equals_m37D3AFD7E110F62E8977937DD66AC053B3F64C8D (XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRTextureDescriptor_Equals_m37D3AFD7E110F62E8977937DD66AC053B3F64C8D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ((obj is XRTextureDescriptor) && Equals((XRTextureDescriptor)obj));
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2 = XRTextureDescriptor_Equals_mD2A71E4A2D68686E74A648896FAC0FCDF02BE0B1((XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 *)__this, ((*(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 *)((XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 *)UnBox(L_1, XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool XRTextureDescriptor_Equals_m37D3AFD7E110F62E8977937DD66AC053B3F64C8D_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 * _thisAdjusted = reinterpret_cast<XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 *>(__this + _offset);
	return XRTextureDescriptor_Equals_m37D3AFD7E110F62E8977937DD66AC053B3F64C8D(_thisAdjusted, ___obj0, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_GetHashCode_m8628ACEB1A4A6203BCD28B01D59B588715C83291 (XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// int hashCode = 486187739;
		// hashCode = (hashCode * 486187739) + m_NativeTexture.GetHashCode();
		intptr_t* L_0 = __this->get_address_of_m_NativeTexture_0();
		int32_t L_1 = IntPtr_GetHashCode_m55E65FB52EFE7C0EBC3C28E66A5D7542F3B1D35D((intptr_t*)L_0, /*hidden argument*/NULL);
		// hashCode = (hashCode * 486187739) + m_Width.GetHashCode();
		int32_t* L_2 = __this->get_address_of_m_Width_1();
		int32_t L_3 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)L_2, /*hidden argument*/NULL);
		// hashCode = (hashCode * 486187739) + m_Height.GetHashCode();
		int32_t* L_4 = __this->get_address_of_m_Height_2();
		int32_t L_5 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)L_4, /*hidden argument*/NULL);
		// hashCode = (hashCode * 486187739) + m_MipmapCount.GetHashCode();
		int32_t* L_6 = __this->get_address_of_m_MipmapCount_3();
		int32_t L_7 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)L_6, /*hidden argument*/NULL);
		// hashCode = (hashCode * 486187739) + ((int)m_Format).GetHashCode();
		int32_t L_8 = __this->get_m_Format_4();
		V_0 = L_8;
		int32_t L_9 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(&V_0), /*hidden argument*/NULL);
		// hashCode = (hashCode * 486187739) + m_PropertyNameId.GetHashCode();
		int32_t* L_10 = __this->get_address_of_m_PropertyNameId_5();
		int32_t L_11 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)L_10, /*hidden argument*/NULL);
		// return hashCode;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)486187739), (int32_t)((int32_t)486187739))), (int32_t)L_1)), (int32_t)((int32_t)486187739))), (int32_t)L_3)), (int32_t)((int32_t)486187739))), (int32_t)L_5)), (int32_t)((int32_t)486187739))), (int32_t)L_7)), (int32_t)((int32_t)486187739))), (int32_t)L_9)), (int32_t)((int32_t)486187739))), (int32_t)L_11));
	}
}
IL2CPP_EXTERN_C  int32_t XRTextureDescriptor_GetHashCode_m8628ACEB1A4A6203BCD28B01D59B588715C83291_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 * _thisAdjusted = reinterpret_cast<XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 *>(__this + _offset);
	return XRTextureDescriptor_GetHashCode_m8628ACEB1A4A6203BCD28B01D59B588715C83291(_thisAdjusted, method);
}
// System.String UnityEngine.XR.ARSubsystems.XRTextureDescriptor::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XRTextureDescriptor_ToString_m13E8A051346374949A95D217BBAAD298893A25EB (XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRTextureDescriptor_ToString_m13E8A051346374949A95D217BBAAD298893A25EB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format("0x{0} {1}x{2}-{3} format:{4} propertyNameId:{5}", m_NativeTexture.ToString("X16"),
		//                      m_Width.ToString(), m_Height.ToString(), m_MipmapCount.ToString(),
		//                      m_Format.ToString(), m_PropertyNameId.ToString());
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		intptr_t* L_2 = __this->get_address_of_m_NativeTexture_0();
		String_t* L_3 = IntPtr_ToString_m7CDFDC84936276E62AB76AA238F7571B54DF90B4((intptr_t*)L_2, _stringLiteralFDA1C52D0E58360F4E8FD608757CCD98D8772D4F, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_1;
		int32_t* L_5 = __this->get_address_of_m_Width_1();
		String_t* L_6 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_4;
		int32_t* L_8 = __this->get_address_of_m_Height_2();
		String_t* L_9 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_9);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10 = L_7;
		int32_t* L_11 = __this->get_address_of_m_MipmapCount_3();
		String_t* L_12 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_12);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = L_10;
		int32_t* L_14 = __this->get_address_of_m_Format_4();
		RuntimeObject * L_15 = Box(TextureFormat_tBED5388A0445FE978F97B41D247275B036407932_il2cpp_TypeInfo_var, L_14);
		NullCheck(L_15);
		String_t* L_16 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_15);
		*L_14 = *(int32_t*)UnBox(L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_16);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = L_13;
		int32_t* L_18 = __this->get_address_of_m_PropertyNameId_5();
		String_t* L_19 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_19);
		String_t* L_20 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteralFA10375A40434912E9F0AA072CD9AA78FF37EB6D, L_17, /*hidden argument*/NULL);
		return L_20;
	}
}
IL2CPP_EXTERN_C  String_t* XRTextureDescriptor_ToString_m13E8A051346374949A95D217BBAAD298893A25EB_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 * _thisAdjusted = reinterpret_cast<XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 *>(__this + _offset);
	return XRTextureDescriptor_ToString_m13E8A051346374949A95D217BBAAD298893A25EB(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityEngine.XR.ARSubsystems.XRTrackedImage::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRTrackedImage_GetHashCode_m312EB4C09316425C0F30B8988A915F647035846B (XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F * __this, const RuntimeMethod* method)
{
	{
		// var hashCode = m_Id.GetHashCode();
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * L_0 = __this->get_address_of_m_Id_1();
		int32_t L_1 = TrackableId_GetHashCode_mFD297FC6DB40FB5B28C6E9B7A2CF2785D75C4E86((TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B *)L_0, /*hidden argument*/NULL);
		// hashCode = hashCode * 486187739 + m_SourceImageId.GetHashCode();
		Guid_t * L_2 = __this->get_address_of_m_SourceImageId_2();
		int32_t L_3 = Guid_GetHashCode_mD32F5054E937C98B3D082594B3849808F1E92AE7((Guid_t *)L_2, /*hidden argument*/NULL);
		// hashCode = hashCode * 486187739 + m_Pose.GetHashCode();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_4 = __this->get_address_of_m_Pose_3();
		int32_t L_5 = Pose_GetHashCode_mE1DD7FBCCB1C979B252F0B117276BA11CF4D2367((Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A *)L_4, /*hidden argument*/NULL);
		// hashCode = hashCode * 486187739 + m_Size.GetHashCode();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_6 = __this->get_address_of_m_Size_4();
		int32_t L_7 = Vector2_GetHashCode_m9A5DD8406289F38806CC42C394E324C1C2AB3732((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_6, /*hidden argument*/NULL);
		// hashCode = hashCode * 486187739 + m_TrackingState.GetHashCode();
		int32_t* L_8 = __this->get_address_of_m_TrackingState_5();
		int32_t L_9 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)L_8, /*hidden argument*/NULL);
		// return hashCode;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)((int32_t)486187739))), (int32_t)L_3)), (int32_t)((int32_t)486187739))), (int32_t)L_5)), (int32_t)((int32_t)486187739))), (int32_t)L_7)), (int32_t)((int32_t)486187739))), (int32_t)L_9));
	}
}
IL2CPP_EXTERN_C  int32_t XRTrackedImage_GetHashCode_m312EB4C09316425C0F30B8988A915F647035846B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F * _thisAdjusted = reinterpret_cast<XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F *>(__this + _offset);
	return XRTrackedImage_GetHashCode_m312EB4C09316425C0F30B8988A915F647035846B(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRTrackedImage::Equals(UnityEngine.XR.ARSubsystems.XRTrackedImage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRTrackedImage_Equals_mFE06306D9BB3EBD3C7CCDD555A2F193ED4FE7D65 (XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F * __this, XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  ___other0, const RuntimeMethod* method)
{
	{
		// return
		//     m_Id.Equals(other.m_Id) &&
		//     m_SourceImageId.Equals(other.m_SourceImageId) &&
		//     m_Pose.Equals(other.m_Pose) &&
		//     m_Size.Equals(other.m_Size) &&
		//     m_TrackingState == other.m_TrackingState;
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * L_0 = __this->get_address_of_m_Id_1();
		XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  L_1 = ___other0;
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_2 = L_1.get_m_Id_1();
		bool L_3 = TrackableId_Equals_m1DF35616359175E3D66DE18250E8CDA1E6462B06((TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B *)L_0, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_005b;
		}
	}
	{
		Guid_t * L_4 = __this->get_address_of_m_SourceImageId_2();
		XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  L_5 = ___other0;
		Guid_t  L_6 = L_5.get_m_SourceImageId_2();
		bool L_7 = Guid_Equals_m602304DBC4842AB53670762A6DB52D30C3973258((Guid_t *)L_4, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_005b;
		}
	}
	{
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_8 = __this->get_address_of_m_Pose_3();
		XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  L_9 = ___other0;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_10 = L_9.get_m_Pose_3();
		bool L_11 = Pose_Equals_mFAE0041090F2032B8FCE63A0F289DD206134BF15((Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A *)L_8, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_005b;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_12 = __this->get_address_of_m_Size_4();
		XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  L_13 = ___other0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14 = L_13.get_m_Size_4();
		bool L_15 = Vector2_Equals_m6E08A16717F2B9EE8B24EBA6B234A03098D5F05D_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_12, L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_16 = __this->get_m_TrackingState_5();
		XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  L_17 = ___other0;
		int32_t L_18 = L_17.get_m_TrackingState_5();
		return (bool)((((int32_t)L_16) == ((int32_t)L_18))? 1 : 0);
	}

IL_005b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool XRTrackedImage_Equals_mFE06306D9BB3EBD3C7CCDD555A2F193ED4FE7D65_AdjustorThunk (RuntimeObject * __this, XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F * _thisAdjusted = reinterpret_cast<XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F *>(__this + _offset);
	return XRTrackedImage_Equals_mFE06306D9BB3EBD3C7CCDD555A2F193ED4FE7D65(_thisAdjusted, ___other0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRTrackedImage::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRTrackedImage_Equals_m953C1CFB9A3879975873D13E24071F51C772635A (XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRTrackedImage_Equals_m953C1CFB9A3879975873D13E24071F51C772635A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override bool Equals(object obj) => obj is XRTrackedImage && Equals((XRTrackedImage)obj);
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2 = XRTrackedImage_Equals_mFE06306D9BB3EBD3C7CCDD555A2F193ED4FE7D65((XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F *)__this, ((*(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F *)((XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F *)UnBox(L_1, XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool XRTrackedImage_Equals_m953C1CFB9A3879975873D13E24071F51C772635A_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F * _thisAdjusted = reinterpret_cast<XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F *>(__this + _offset);
	return XRTrackedImage_Equals_m953C1CFB9A3879975873D13E24071F51C772635A(_thisAdjusted, ___obj0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRTrackedImage::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRTrackedImage__cctor_mE7FFB610B77B6A729504D17C98C52C09522FDDEA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRTrackedImage__cctor_mE7FFB610B77B6A729504D17C98C52C09522FDDEA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// static readonly XRTrackedImage s_Default = new XRTrackedImage
		// {
		//     m_Id = TrackableId.invalidId,
		//     m_SourceImageId = Guid.Empty,
		//     m_Pose = Pose.identity,
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F ));
		IL2CPP_RUNTIME_CLASS_INIT(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_il2cpp_TypeInfo_var);
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_0 = TrackableId_get_invalidId_m06B698EFFA7748E185299C72B5CEC1AA5B221F85_inline(/*hidden argument*/NULL);
		(&V_0)->set_m_Id_1(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		Guid_t  L_1 = ((Guid_t_StaticFields*)il2cpp_codegen_static_fields_for(Guid_t_il2cpp_TypeInfo_var))->get_Empty_0();
		(&V_0)->set_m_SourceImageId_2(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_il2cpp_TypeInfo_var);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_2 = Pose_get_identity_m334B16AC3024785914BCC5A2B949750A010878BF(/*hidden argument*/NULL);
		(&V_0)->set_m_Pose_3(L_2);
		XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  L_3 = V_0;
		((XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F_StaticFields*)il2cpp_codegen_static_fields_for(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F_il2cpp_TypeInfo_var))->set_s_Default_0(L_3);
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
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystem_Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_mFE4941CFC3CA511BBD7C0A498BB2C74DE96FF498 (Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2 * __this, const RuntimeMethod* method)
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
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_marshal_pinvoke(const Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7& unmarshaled, Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<subsystemImplementationType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_marshal_pinvoke_back(const Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_marshaled_pinvoke& marshaled, Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7& unmarshaled)
{
	Exception_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<subsystemImplementationType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_marshal_pinvoke_cleanup(Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_marshal_com(const Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7& unmarshaled, Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_marshaled_com& marshaled)
{
	Exception_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<subsystemImplementationType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_marshal_com_back(const Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_marshaled_com& marshaled, Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7& unmarshaled)
{
	Exception_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<subsystemImplementationType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_marshal_com_cleanup(Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_marshaled_com& marshaled)
{
}
// System.String UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor_Cinfo::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m7C38252CE360F061914361192300AECA8CB5307B (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* Cinfo_get_id_m7C38252CE360F061914361192300AECA8CB5307B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * _thisAdjusted = reinterpret_cast<Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *>(__this + _offset);
	return Cinfo_get_id_m7C38252CE360F061914361192300AECA8CB5307B_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor_Cinfo::set_id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_id_mCB169DF169C36D9D12651785DCBF71ABCC10FD9D (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_id_mCB169DF169C36D9D12651785DCBF71ABCC10FD9D_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * _thisAdjusted = reinterpret_cast<Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *>(__this + _offset);
	Cinfo_set_id_mCB169DF169C36D9D12651785DCBF71ABCC10FD9D_inline(_thisAdjusted, ___value0, method);
}
// System.Type UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor_Cinfo::get_subsystemImplementationType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemImplementationType_m45C4A6583BBDA8DC5FD506339DC7A80474E88CC2 (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = __this->get_U3CsubsystemImplementationTypeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t * Cinfo_get_subsystemImplementationType_m45C4A6583BBDA8DC5FD506339DC7A80474E88CC2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * _thisAdjusted = reinterpret_cast<Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *>(__this + _offset);
	return Cinfo_get_subsystemImplementationType_m45C4A6583BBDA8DC5FD506339DC7A80474E88CC2_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor_Cinfo::set_subsystemImplementationType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_m22F8F6D7511C66B0B2240DABFBA9A38D01C8A31F (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_subsystemImplementationType_m22F8F6D7511C66B0B2240DABFBA9A38D01C8A31F_AdjustorThunk (RuntimeObject * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * _thisAdjusted = reinterpret_cast<Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *>(__this + _offset);
	Cinfo_set_subsystemImplementationType_m22F8F6D7511C66B0B2240DABFBA9A38D01C8A31F_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor_Cinfo::get_supportsTrackableAttachments()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsTrackableAttachments_m13B6C9977641F3E284C69AA3554EBD19478538B8 (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsTrackableAttachments { get; set; }
		bool L_0 = __this->get_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsTrackableAttachments_m13B6C9977641F3E284C69AA3554EBD19478538B8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * _thisAdjusted = reinterpret_cast<Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *>(__this + _offset);
	return Cinfo_get_supportsTrackableAttachments_m13B6C9977641F3E284C69AA3554EBD19478538B8_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor_Cinfo::set_supportsTrackableAttachments(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsTrackableAttachments_m0B0516A50FFA22C3F60483E3498DC6BB1D460995 (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsTrackableAttachments { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsTrackableAttachments_m0B0516A50FFA22C3F60483E3498DC6BB1D460995_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * _thisAdjusted = reinterpret_cast<Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *>(__this + _offset);
	Cinfo_set_supportsTrackableAttachments_m0B0516A50FFA22C3F60483E3498DC6BB1D460995_inline(_thisAdjusted, ___value0, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor_Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_mBBEF5C69D3B91763153EDE624C76AC428ECFABB1 (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Cinfo_GetHashCode_mBBEF5C69D3B91763153EDE624C76AC428ECFABB1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	{
		// var hash = (id == null) ? 0 : id.GetHashCode();
		String_t* L_0 = Cinfo_get_id_m7C38252CE360F061914361192300AECA8CB5307B_inline((Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		String_t* L_1 = Cinfo_get_id_m7C38252CE360F061914361192300AECA8CB5307B_inline((Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *)__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		G_B3_0 = L_2;
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 0;
	}

IL_0016:
	{
		// hash = hash * 486187739 + ((subsystemImplementationType == null) ? 0 : subsystemImplementationType.GetHashCode());
		Type_t * L_3 = Cinfo_get_subsystemImplementationType_m45C4A6583BBDA8DC5FD506339DC7A80474E88CC2_inline((Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_4 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_3, (Type_t *)NULL, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)G_B3_0, (int32_t)((int32_t)486187739)));
		if (L_4)
		{
			G_B5_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)G_B3_0, (int32_t)((int32_t)486187739)));
			goto IL_0037;
		}
	}
	{
		Type_t * L_5 = Cinfo_get_subsystemImplementationType_m45C4A6583BBDA8DC5FD506339DC7A80474E88CC2_inline((Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *)__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_5);
		G_B6_0 = L_6;
		G_B6_1 = G_B4_0;
		goto IL_0038;
	}

IL_0037:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
	}

IL_0038:
	{
		// return hash;
		return ((int32_t)il2cpp_codegen_add((int32_t)G_B6_1, (int32_t)G_B6_0));
	}
}
IL2CPP_EXTERN_C  int32_t Cinfo_GetHashCode_mBBEF5C69D3B91763153EDE624C76AC428ECFABB1_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * _thisAdjusted = reinterpret_cast<Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *>(__this + _offset);
	return Cinfo_GetHashCode_mBBEF5C69D3B91763153EDE624C76AC428ECFABB1(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor_Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m8E52493318DDE5F675E85E0733F5F7CCDA3C8339 (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Cinfo_Equals_m8E52493318DDE5F675E85E0733F5F7CCDA3C8339_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!(obj is Cinfo))
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_il2cpp_TypeInfo_var)))
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
		// return Equals((Cinfo)obj);
		RuntimeObject * L_1 = ___obj0;
		bool L_2 = Cinfo_Equals_m07BCEC0FF4D8C2A43AE850689AC5AA4FC0603DE8((Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *)__this, ((*(Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *)((Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *)UnBox(L_1, Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m8E52493318DDE5F675E85E0733F5F7CCDA3C8339_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * _thisAdjusted = reinterpret_cast<Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *>(__this + _offset);
	return Cinfo_Equals_m8E52493318DDE5F675E85E0733F5F7CCDA3C8339(_thisAdjusted, ___obj0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor_Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor_Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m07BCEC0FF4D8C2A43AE850689AC5AA4FC0603DE8 (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Cinfo_Equals_m07BCEC0FF4D8C2A43AE850689AC5AA4FC0603DE8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return
		//     String.Equals(id, other.id) &&
		//     subsystemImplementationType == other.subsystemImplementationType;
		String_t* L_0 = Cinfo_get_id_m7C38252CE360F061914361192300AECA8CB5307B_inline((Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *)__this, /*hidden argument*/NULL);
		String_t* L_1 = Cinfo_get_id_m7C38252CE360F061914361192300AECA8CB5307B_inline((Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *)(&___other0), /*hidden argument*/NULL);
		bool L_2 = String_Equals_mAFC6038D294F341434D9D67D7EADC7F97C556C9B(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		Type_t * L_3 = Cinfo_get_subsystemImplementationType_m45C4A6583BBDA8DC5FD506339DC7A80474E88CC2_inline((Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *)__this, /*hidden argument*/NULL);
		Type_t * L_4 = Cinfo_get_subsystemImplementationType_m45C4A6583BBDA8DC5FD506339DC7A80474E88CC2_inline((Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *)(&___other0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_5 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0027:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m07BCEC0FF4D8C2A43AE850689AC5AA4FC0603DE8_AdjustorThunk (RuntimeObject * __this, Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * _thisAdjusted = reinterpret_cast<Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *>(__this + _offset);
	return Cinfo_Equals_m07BCEC0FF4D8C2A43AE850689AC5AA4FC0603DE8(_thisAdjusted, ___other0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IntPtr UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImagePlaneCinfo::get_dataPtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CameraImagePlaneCinfo_get_dataPtr_m5281CDEFE43F3D6098315A910D52E13850B14939 (CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 * __this, const RuntimeMethod* method)
{
	{
		// public IntPtr dataPtr => m_DataPtr;
		intptr_t L_0 = __this->get_m_DataPtr_0();
		return (intptr_t)L_0;
	}
}
IL2CPP_EXTERN_C  intptr_t CameraImagePlaneCinfo_get_dataPtr_m5281CDEFE43F3D6098315A910D52E13850B14939_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 * _thisAdjusted = reinterpret_cast<CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 *>(__this + _offset);
	return CameraImagePlaneCinfo_get_dataPtr_m5281CDEFE43F3D6098315A910D52E13850B14939_inline(_thisAdjusted, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImagePlaneCinfo::get_dataLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CameraImagePlaneCinfo_get_dataLength_m564E09ED13D1303E1FE1B06E5131D455773EB79A (CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 * __this, const RuntimeMethod* method)
{
	{
		// public int dataLength => m_DataLength;
		int32_t L_0 = __this->get_m_DataLength_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t CameraImagePlaneCinfo_get_dataLength_m564E09ED13D1303E1FE1B06E5131D455773EB79A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 * _thisAdjusted = reinterpret_cast<CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 *>(__this + _offset);
	return CameraImagePlaneCinfo_get_dataLength_m564E09ED13D1303E1FE1B06E5131D455773EB79A_inline(_thisAdjusted, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImagePlaneCinfo::get_rowStride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CameraImagePlaneCinfo_get_rowStride_m237F56D214542218ED13F6D64408895038A1789C (CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 * __this, const RuntimeMethod* method)
{
	{
		// public int rowStride => m_RowStride;
		int32_t L_0 = __this->get_m_RowStride_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t CameraImagePlaneCinfo_get_rowStride_m237F56D214542218ED13F6D64408895038A1789C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 * _thisAdjusted = reinterpret_cast<CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 *>(__this + _offset);
	return CameraImagePlaneCinfo_get_rowStride_m237F56D214542218ED13F6D64408895038A1789C_inline(_thisAdjusted, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImagePlaneCinfo::get_pixelStride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CameraImagePlaneCinfo_get_pixelStride_mD729A4B48D646AB2DB440E813742FA3723A94C27 (CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 * __this, const RuntimeMethod* method)
{
	{
		// public int pixelStride => m_PixelStride;
		int32_t L_0 = __this->get_m_PixelStride_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t CameraImagePlaneCinfo_get_pixelStride_mD729A4B48D646AB2DB440E813742FA3723A94C27_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 * _thisAdjusted = reinterpret_cast<CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 *>(__this + _offset);
	return CameraImagePlaneCinfo_get_pixelStride_mD729A4B48D646AB2DB440E813742FA3723A94C27_inline(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImagePlaneCinfo::Equals(UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImagePlaneCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraImagePlaneCinfo_Equals_mA63A2FC92BE0863CE255A5540AE12B6A32C31101 (CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 * __this, CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraImagePlaneCinfo_Equals_mA63A2FC92BE0863CE255A5540AE12B6A32C31101_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// return (dataPtr.Equals(other.dataPtr) && dataLength.Equals(other.dataLength)
		//         && rowStride.Equals(other.rowStride) && pixelStride.Equals(other.pixelStride));
		intptr_t L_0 = CameraImagePlaneCinfo_get_dataPtr_m5281CDEFE43F3D6098315A910D52E13850B14939_inline((CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 *)__this, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_0;
		intptr_t L_1 = CameraImagePlaneCinfo_get_dataPtr_m5281CDEFE43F3D6098315A910D52E13850B14939_inline((CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 *)(&___other0), /*hidden argument*/NULL);
		intptr_t L_2 = L_1;
		RuntimeObject * L_3 = Box(IntPtr_t_il2cpp_TypeInfo_var, &L_2);
		bool L_4 = IntPtr_Equals_m8ABF0A82F61F3B236B11DD4A1E19CEC5CC5A50F0((intptr_t*)(&V_0), L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_5 = CameraImagePlaneCinfo_get_dataLength_m564E09ED13D1303E1FE1B06E5131D455773EB79A_inline((CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 *)__this, /*hidden argument*/NULL);
		V_1 = L_5;
		int32_t L_6 = CameraImagePlaneCinfo_get_dataLength_m564E09ED13D1303E1FE1B06E5131D455773EB79A_inline((CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 *)(&___other0), /*hidden argument*/NULL);
		bool L_7 = Int32_Equals_mA73E9B3A01B9B9151C262C1E1A56C6AB4891A5E4((int32_t*)(&V_1), L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_8 = CameraImagePlaneCinfo_get_rowStride_m237F56D214542218ED13F6D64408895038A1789C_inline((CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 *)__this, /*hidden argument*/NULL);
		V_1 = L_8;
		int32_t L_9 = CameraImagePlaneCinfo_get_rowStride_m237F56D214542218ED13F6D64408895038A1789C_inline((CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 *)(&___other0), /*hidden argument*/NULL);
		bool L_10 = Int32_Equals_mA73E9B3A01B9B9151C262C1E1A56C6AB4891A5E4((int32_t*)(&V_1), L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_11 = CameraImagePlaneCinfo_get_pixelStride_mD729A4B48D646AB2DB440E813742FA3723A94C27_inline((CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 *)__this, /*hidden argument*/NULL);
		V_1 = L_11;
		int32_t L_12 = CameraImagePlaneCinfo_get_pixelStride_mD729A4B48D646AB2DB440E813742FA3723A94C27_inline((CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 *)(&___other0), /*hidden argument*/NULL);
		bool L_13 = Int32_Equals_mA73E9B3A01B9B9151C262C1E1A56C6AB4891A5E4((int32_t*)(&V_1), L_12, /*hidden argument*/NULL);
		return L_13;
	}

IL_0060:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool CameraImagePlaneCinfo_Equals_mA63A2FC92BE0863CE255A5540AE12B6A32C31101_AdjustorThunk (RuntimeObject * __this, CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 * _thisAdjusted = reinterpret_cast<CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 *>(__this + _offset);
	return CameraImagePlaneCinfo_Equals_mA63A2FC92BE0863CE255A5540AE12B6A32C31101(_thisAdjusted, ___other0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImagePlaneCinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraImagePlaneCinfo_Equals_mA584B5FBAB613A1B7A83B1C0413089390EFFCBBD (CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraImagePlaneCinfo_Equals_mA584B5FBAB613A1B7A83B1C0413089390EFFCBBD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ReferenceEquals(this, obj) || ((obj is CameraImagePlaneCinfo) && Equals((CameraImagePlaneCinfo)obj));
		CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7  L_0 = (*(CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 *)__this);
		CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7  L_1 = L_0;
		RuntimeObject * L_2 = Box(CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7_il2cpp_TypeInfo_var, &L_1);
		RuntimeObject * L_3 = ___obj0;
		if ((((RuntimeObject*)(RuntimeObject *)L_2) == ((RuntimeObject*)(RuntimeObject *)L_3)))
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject * L_4 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_4, CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject * L_5 = ___obj0;
		bool L_6 = CameraImagePlaneCinfo_Equals_mA63A2FC92BE0863CE255A5540AE12B6A32C31101((CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 *)__this, ((*(CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 *)((CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 *)UnBox(L_5, CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_6;
	}

IL_0023:
	{
		return (bool)0;
	}

IL_0025:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool CameraImagePlaneCinfo_Equals_mA584B5FBAB613A1B7A83B1C0413089390EFFCBBD_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 * _thisAdjusted = reinterpret_cast<CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 *>(__this + _offset);
	return CameraImagePlaneCinfo_Equals_mA584B5FBAB613A1B7A83B1C0413089390EFFCBBD(_thisAdjusted, ___obj0, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImagePlaneCinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CameraImagePlaneCinfo_GetHashCode_mD22746F20EA784A20EE4502A78218457A48125E3 (CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 * __this, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// int hashCode = 486187739;
		// hashCode = (hashCode * 486187739) + dataPtr.GetHashCode();
		intptr_t L_0 = CameraImagePlaneCinfo_get_dataPtr_m5281CDEFE43F3D6098315A910D52E13850B14939_inline((CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 *)__this, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_0;
		int32_t L_1 = IntPtr_GetHashCode_m55E65FB52EFE7C0EBC3C28E66A5D7542F3B1D35D((intptr_t*)(&V_0), /*hidden argument*/NULL);
		// hashCode = (hashCode * 486187739) + dataLength.GetHashCode();
		int32_t L_2 = CameraImagePlaneCinfo_get_dataLength_m564E09ED13D1303E1FE1B06E5131D455773EB79A_inline((CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 *)__this, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(&V_1), /*hidden argument*/NULL);
		// hashCode = (hashCode * 486187739) + rowStride.GetHashCode();
		int32_t L_4 = CameraImagePlaneCinfo_get_rowStride_m237F56D214542218ED13F6D64408895038A1789C_inline((CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 *)__this, /*hidden argument*/NULL);
		V_1 = L_4;
		int32_t L_5 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(&V_1), /*hidden argument*/NULL);
		// hashCode = (hashCode * 486187739) + pixelStride.GetHashCode();
		int32_t L_6 = CameraImagePlaneCinfo_get_pixelStride_mD729A4B48D646AB2DB440E813742FA3723A94C27_inline((CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 *)__this, /*hidden argument*/NULL);
		V_1 = L_6;
		int32_t L_7 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(&V_1), /*hidden argument*/NULL);
		// return hashCode;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)486187739), (int32_t)((int32_t)486187739))), (int32_t)L_1)), (int32_t)((int32_t)486187739))), (int32_t)L_3)), (int32_t)((int32_t)486187739))), (int32_t)L_5)), (int32_t)((int32_t)486187739))), (int32_t)L_7));
	}
}
IL2CPP_EXTERN_C  int32_t CameraImagePlaneCinfo_GetHashCode_mD22746F20EA784A20EE4502A78218457A48125E3_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 * _thisAdjusted = reinterpret_cast<CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 *>(__this + _offset);
	return CameraImagePlaneCinfo_GetHashCode_mD22746F20EA784A20EE4502A78218457A48125E3(_thisAdjusted, method);
}
// System.String UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImagePlaneCinfo::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CameraImagePlaneCinfo_ToString_m2B60D32513350E0AE53B003B7F3E94F75B3D86AD (CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraImagePlaneCinfo_ToString_m2B60D32513350E0AE53B003B7F3E94F75B3D86AD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// return string.Format("dataPtr: {0} length:{1} rowStride:{2} pixelStride:{3}", dataPtr.ToString(),
		//                      dataLength.ToString(), rowStride.ToString(), pixelStride.ToString());
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		intptr_t L_2 = CameraImagePlaneCinfo_get_dataPtr_m5281CDEFE43F3D6098315A910D52E13850B14939_inline((CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 *)__this, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_2;
		String_t* L_3 = IntPtr_ToString_mC499BFB66CB492853717FFACA63599701FC1E91C((intptr_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_1;
		int32_t L_5 = CameraImagePlaneCinfo_get_dataLength_m564E09ED13D1303E1FE1B06E5131D455773EB79A_inline((CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 *)__this, /*hidden argument*/NULL);
		V_1 = L_5;
		String_t* L_6 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_4;
		int32_t L_8 = CameraImagePlaneCinfo_get_rowStride_m237F56D214542218ED13F6D64408895038A1789C_inline((CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 *)__this, /*hidden argument*/NULL);
		V_1 = L_8;
		String_t* L_9 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_9);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10 = L_7;
		int32_t L_11 = CameraImagePlaneCinfo_get_pixelStride_mD729A4B48D646AB2DB440E813742FA3723A94C27_inline((CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 *)__this, /*hidden argument*/NULL);
		V_1 = L_11;
		String_t* L_12 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_12);
		String_t* L_13 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteralF20EFFC62AFBE813D48D4D9EAF1FF59EFA14655F, L_10, /*hidden argument*/NULL);
		return L_13;
	}
}
IL2CPP_EXTERN_C  String_t* CameraImagePlaneCinfo_ToString_m2B60D32513350E0AE53B003B7F3E94F75B3D86AD_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 * _thisAdjusted = reinterpret_cast<CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 *>(__this + _offset);
	return CameraImagePlaneCinfo_ToString_m2B60D32513350E0AE53B003B7F3E94F75B3D86AD(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Material UnityEngine.XR.ARSubsystems.XRCameraSubsystem_Provider::CreateCameraMaterial(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Provider_CreateCameraMaterial_mE1F6AD1B1D9F9BA80FE1B8DB3138262545FC018C (Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1 * __this, String_t* ___cameraShaderName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider_CreateCameraMaterial_mE1F6AD1B1D9F9BA80FE1B8DB3138262545FC018C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * G_B2_0 = NULL;
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * G_B1_0 = NULL;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * G_B4_0 = NULL;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * G_B3_0 = NULL;
	{
		// var shader = Shader.Find(cameraShaderName);
		String_t* L_0 = ___cameraShaderName0;
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_1 = Shader_Find_m596EC6EBDCA8C9D5D86E2410A319928C1E8E6B5A(L_0, /*hidden argument*/NULL);
		// if (shader == null)
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_2 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B1_0 = L_2;
		if (!L_3)
		{
			G_B2_0 = L_2;
			goto IL_0025;
		}
	}
	{
		// throw new InvalidOperationException($"Could not find shader named '{cameraShaderName}' required "
		//                                     + $"for video overlay on camera subsystem.");
		String_t* L_4 = ___cameraShaderName0;
		String_t* L_5 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral704C51A0DAD6B36AE5557F6EC82739898E4BFB61, L_4, _stringLiteral489BDF1FA9922AB5F829F5BE893907E419364DF4, /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_6 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_6, L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, Provider_CreateCameraMaterial_mE1F6AD1B1D9F9BA80FE1B8DB3138262545FC018C_RuntimeMethod_var);
	}

IL_0025:
	{
		// Material material = new Material(shader);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_7 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_7, G_B2_0, /*hidden argument*/NULL);
		// if (material == null)
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_8 = L_7;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_8, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B3_0 = L_8;
		if (!L_9)
		{
			G_B4_0 = L_8;
			goto IL_0049;
		}
	}
	{
		// throw new InvalidOperationException($"Could not create a material for shader named "
		//                                     + $"'{cameraShaderName}' required for video overlay on camera "
		//                                     + $"subsystem.");
		String_t* L_10 = ___cameraShaderName0;
		String_t* L_11 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralCD0C03FFF40E6F1D242821369D83EC4658F16D35, L_10, _stringLiteral489BDF1FA9922AB5F829F5BE893907E419364DF4, /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_12 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_12, L_11, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, Provider_CreateCameraMaterial_mE1F6AD1B1D9F9BA80FE1B8DB3138262545FC018C_RuntimeMethod_var);
	}

IL_0049:
	{
		// return material;
		return G_B4_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystem_Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_mA61CB0610059584FC8190F2C54D845C7612D82BE (Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1 * __this, const RuntimeMethod* method)
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
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystem_Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m1A368071CFCB91BC39B9760441A777FE20F86A57 (Provider_t8E88C17A70269CD3E96909AFCCA952AAA7DEC0B6 * __this, const RuntimeMethod* method)
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
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1_marshal_pinvoke(const Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1& unmarshaled, Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1_marshaled_pinvoke& marshaled)
{
	Exception_t* ___implementationType_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'implementationType' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___implementationType_1Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1_marshal_pinvoke_back(const Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1_marshaled_pinvoke& marshaled, Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1& unmarshaled)
{
	Exception_t* ___implementationType_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'implementationType' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___implementationType_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1_marshal_pinvoke_cleanup(Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1_marshal_com(const Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1& unmarshaled, Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1_marshaled_com& marshaled)
{
	Exception_t* ___implementationType_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'implementationType' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___implementationType_1Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1_marshal_com_back(const Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1_marshaled_com& marshaled, Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1& unmarshaled)
{
	Exception_t* ___implementationType_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'implementationType' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___implementationType_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1_marshal_com_cleanup(Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1_marshaled_com& marshaled)
{
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor_Cinfo::get_supportsFeaturePoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsFeaturePoints_mAE8F24562D2A19594A5AB98BDA0FC1C35730B5BA (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, const RuntimeMethod* method)
{
	{
		// get { return (capabilities & Capabilities.FeaturePoints) != 0; }
		int32_t L_0 = Cinfo_get_capabilities_m09C807B048E192438A9B0D0C17808FF5BFF81A8A_inline((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)__this, /*hidden argument*/NULL);
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)1))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsFeaturePoints_mAE8F24562D2A19594A5AB98BDA0FC1C35730B5BA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * _thisAdjusted = reinterpret_cast<Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *>(__this + _offset);
	return Cinfo_get_supportsFeaturePoints_mAE8F24562D2A19594A5AB98BDA0FC1C35730B5BA(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor_Cinfo::set_supportsFeaturePoints(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsFeaturePoints_mD44DBE0A79D63D3234369E573653A81DC7FB8E1D (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// if (value)
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// capabilities |= Capabilities.FeaturePoints;
		int32_t L_1 = Cinfo_get_capabilities_m09C807B048E192438A9B0D0C17808FF5BFF81A8A_inline((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)__this, /*hidden argument*/NULL);
		Cinfo_set_capabilities_mB2A17E458179A44C2EACB82699FBC5B5611C7580_inline((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)__this, ((int32_t)((int32_t)L_1|(int32_t)1)), /*hidden argument*/NULL);
		// }
		return;
	}

IL_0012:
	{
		// capabilities &= ~Capabilities.FeaturePoints;
		int32_t L_2 = Cinfo_get_capabilities_m09C807B048E192438A9B0D0C17808FF5BFF81A8A_inline((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)__this, /*hidden argument*/NULL);
		Cinfo_set_capabilities_mB2A17E458179A44C2EACB82699FBC5B5611C7580_inline((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)__this, ((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2))), /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsFeaturePoints_mD44DBE0A79D63D3234369E573653A81DC7FB8E1D_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * _thisAdjusted = reinterpret_cast<Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *>(__this + _offset);
	Cinfo_set_supportsFeaturePoints_mD44DBE0A79D63D3234369E573653A81DC7FB8E1D(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor_Cinfo::get_supportsConfidence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsConfidence_m483E36BDB283478D5E1F6F6F3C96A279EB6DE01A (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, const RuntimeMethod* method)
{
	{
		// get { return (capabilities & Capabilities.Confidence) != 0; }
		int32_t L_0 = Cinfo_get_capabilities_m09C807B048E192438A9B0D0C17808FF5BFF81A8A_inline((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)__this, /*hidden argument*/NULL);
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)2))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsConfidence_m483E36BDB283478D5E1F6F6F3C96A279EB6DE01A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * _thisAdjusted = reinterpret_cast<Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *>(__this + _offset);
	return Cinfo_get_supportsConfidence_m483E36BDB283478D5E1F6F6F3C96A279EB6DE01A(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor_Cinfo::set_supportsConfidence(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsConfidence_m78F76CAAFD5D667ADBED1580E1F8A1286B59C46D (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// if (value)
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// capabilities |= Capabilities.Confidence;
		int32_t L_1 = Cinfo_get_capabilities_m09C807B048E192438A9B0D0C17808FF5BFF81A8A_inline((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)__this, /*hidden argument*/NULL);
		Cinfo_set_capabilities_mB2A17E458179A44C2EACB82699FBC5B5611C7580_inline((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)__this, ((int32_t)((int32_t)L_1|(int32_t)2)), /*hidden argument*/NULL);
		// }
		return;
	}

IL_0012:
	{
		// capabilities &= ~Capabilities.Confidence;
		int32_t L_2 = Cinfo_get_capabilities_m09C807B048E192438A9B0D0C17808FF5BFF81A8A_inline((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)__this, /*hidden argument*/NULL);
		Cinfo_set_capabilities_mB2A17E458179A44C2EACB82699FBC5B5611C7580_inline((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)__this, ((int32_t)((int32_t)L_2&(int32_t)((int32_t)-3))), /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsConfidence_m78F76CAAFD5D667ADBED1580E1F8A1286B59C46D_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * _thisAdjusted = reinterpret_cast<Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *>(__this + _offset);
	Cinfo_set_supportsConfidence_m78F76CAAFD5D667ADBED1580E1F8A1286B59C46D(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor_Cinfo::get_supportsUniqueIds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsUniqueIds_m6A1B72F6B917B3B001388027A7324A84146E5B7F (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, const RuntimeMethod* method)
{
	{
		// get { return (capabilities & Capabilities.UniqueIds) != 0; }
		int32_t L_0 = Cinfo_get_capabilities_m09C807B048E192438A9B0D0C17808FF5BFF81A8A_inline((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)__this, /*hidden argument*/NULL);
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)4))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsUniqueIds_m6A1B72F6B917B3B001388027A7324A84146E5B7F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * _thisAdjusted = reinterpret_cast<Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *>(__this + _offset);
	return Cinfo_get_supportsUniqueIds_m6A1B72F6B917B3B001388027A7324A84146E5B7F(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor_Cinfo::set_supportsUniqueIds(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsUniqueIds_mFF68A678A13F7C1BD9E157690649255A27369514 (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// if (value)
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// capabilities |= Capabilities.UniqueIds;
		int32_t L_1 = Cinfo_get_capabilities_m09C807B048E192438A9B0D0C17808FF5BFF81A8A_inline((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)__this, /*hidden argument*/NULL);
		Cinfo_set_capabilities_mB2A17E458179A44C2EACB82699FBC5B5611C7580_inline((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)__this, ((int32_t)((int32_t)L_1|(int32_t)4)), /*hidden argument*/NULL);
		// }
		return;
	}

IL_0012:
	{
		// capabilities &= ~Capabilities.UniqueIds;
		int32_t L_2 = Cinfo_get_capabilities_m09C807B048E192438A9B0D0C17808FF5BFF81A8A_inline((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)__this, /*hidden argument*/NULL);
		Cinfo_set_capabilities_mB2A17E458179A44C2EACB82699FBC5B5611C7580_inline((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)__this, ((int32_t)((int32_t)L_2&(int32_t)((int32_t)-5))), /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsUniqueIds_mFF68A678A13F7C1BD9E157690649255A27369514_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * _thisAdjusted = reinterpret_cast<Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *>(__this + _offset);
	Cinfo_set_supportsUniqueIds_mFF68A678A13F7C1BD9E157690649255A27369514(_thisAdjusted, ___value0, method);
}
// UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor_Capabilities UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor_Cinfo::get_capabilities()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_get_capabilities_m09C807B048E192438A9B0D0C17808FF5BFF81A8A (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, const RuntimeMethod* method)
{
	{
		// Capabilities capabilities { get; set; }
		int32_t L_0 = __this->get_U3CcapabilitiesU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t Cinfo_get_capabilities_m09C807B048E192438A9B0D0C17808FF5BFF81A8A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * _thisAdjusted = reinterpret_cast<Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *>(__this + _offset);
	return Cinfo_get_capabilities_m09C807B048E192438A9B0D0C17808FF5BFF81A8A_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor_Cinfo::set_capabilities(UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor_Capabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_capabilities_mB2A17E458179A44C2EACB82699FBC5B5611C7580 (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// Capabilities capabilities { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CcapabilitiesU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_capabilities_mB2A17E458179A44C2EACB82699FBC5B5611C7580_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * _thisAdjusted = reinterpret_cast<Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *>(__this + _offset);
	Cinfo_set_capabilities_mB2A17E458179A44C2EACB82699FBC5B5611C7580_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor_Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor_Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m560240A9ABB2B3E0C71D2EF694812209060F7781 (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Cinfo_Equals_m560240A9ABB2B3E0C71D2EF694812209060F7781_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return capabilities == other.capabilities && id.Equals(other.id) && implementationType == other.implementationType;
		int32_t L_0 = Cinfo_get_capabilities_m09C807B048E192438A9B0D0C17808FF5BFF81A8A_inline((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)__this, /*hidden argument*/NULL);
		int32_t L_1 = Cinfo_get_capabilities_m09C807B048E192438A9B0D0C17808FF5BFF81A8A_inline((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0034;
		}
	}
	{
		String_t* L_2 = __this->get_id_0();
		Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1  L_3 = ___other0;
		String_t* L_4 = L_3.get_id_0();
		NullCheck(L_2);
		bool L_5 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_2, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		Type_t * L_6 = __this->get_implementationType_1();
		Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1  L_7 = ___other0;
		Type_t * L_8 = L_7.get_implementationType_1();
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_9 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_6, L_8, /*hidden argument*/NULL);
		return L_9;
	}

IL_0034:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m560240A9ABB2B3E0C71D2EF694812209060F7781_AdjustorThunk (RuntimeObject * __this, Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * _thisAdjusted = reinterpret_cast<Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *>(__this + _offset);
	return Cinfo_Equals_m560240A9ABB2B3E0C71D2EF694812209060F7781(_thisAdjusted, ___other0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor_Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m1FFC7731C8021381A825E2D56189CDCD1BC39FD1 (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Cinfo_Equals_m1FFC7731C8021381A825E2D56189CDCD1BC39FD1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!(obj is Cinfo))
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1_il2cpp_TypeInfo_var)))
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
		// return Equals((Cinfo)obj);
		RuntimeObject * L_1 = ___obj0;
		bool L_2 = Cinfo_Equals_m560240A9ABB2B3E0C71D2EF694812209060F7781((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)__this, ((*(Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)UnBox(L_1, Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m1FFC7731C8021381A825E2D56189CDCD1BC39FD1_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * _thisAdjusted = reinterpret_cast<Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *>(__this + _offset);
	return Cinfo_Equals_m1FFC7731C8021381A825E2D56189CDCD1BC39FD1(_thisAdjusted, ___obj0, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor_Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_m93DAAACF242CBA5B8EE758CE4E04BCCF51639860 (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// var hashCode = id.GetHashCode();
		String_t* L_0 = __this->get_id_0();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		// hashCode = (hashCode * 486187739) + implementationType.GetHashCode();
		Type_t * L_2 = __this->get_implementationType_1();
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		// hashCode = (hashCode * 486187739) + ((int)capabilities).GetHashCode();
		int32_t L_4 = Cinfo_get_capabilities_m09C807B048E192438A9B0D0C17808FF5BFF81A8A_inline((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)__this, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(&V_0), /*hidden argument*/NULL);
		// return hashCode;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)((int32_t)486187739))), (int32_t)L_3)), (int32_t)((int32_t)486187739))), (int32_t)L_5));
	}
}
IL2CPP_EXTERN_C  int32_t Cinfo_GetHashCode_m93DAAACF242CBA5B8EE758CE4E04BCCF51639860_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * _thisAdjusted = reinterpret_cast<Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *>(__this + _offset);
	return Cinfo_GetHashCode_m93DAAACF242CBA5B8EE758CE4E04BCCF51639860(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem_Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m82E278812C6826F3F89A708912491AB72058B700 (Provider_tAF87FE3E906FDBF14F06488A1AA5E80400EFE190 * __this, const RuntimeMethod* method)
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
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem_Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_mE0C779A245EE703B26578F529ABFD6F18E002AC0 (Provider_tA7CEF856C3BC486ADEBD656F5535E24262AAAE9E * __this, const RuntimeMethod* method)
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
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32_marshal_pinvoke(const Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32& unmarshaled, Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<subsystemImplementationType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32_marshal_pinvoke_back(const Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32_marshaled_pinvoke& marshaled, Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32& unmarshaled)
{
	Exception_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<subsystemImplementationType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32_marshal_pinvoke_cleanup(Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32_marshal_com(const Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32& unmarshaled, Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32_marshaled_com& marshaled)
{
	Exception_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<subsystemImplementationType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32_marshal_com_back(const Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32_marshaled_com& marshaled, Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32& unmarshaled)
{
	Exception_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<subsystemImplementationType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32_marshal_com_cleanup(Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32_marshaled_com& marshaled)
{
}
// System.String UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor_Cinfo::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m7ACB39F94D161A19473B51245A60F0FE3380E9C6 (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* Cinfo_get_id_m7ACB39F94D161A19473B51245A60F0FE3380E9C6_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * _thisAdjusted = reinterpret_cast<Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *>(__this + _offset);
	return Cinfo_get_id_m7ACB39F94D161A19473B51245A60F0FE3380E9C6_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor_Cinfo::set_id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_id_m57970CF355AB638BAD860B9673F0E76B42126C1A (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_id_m57970CF355AB638BAD860B9673F0E76B42126C1A_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * _thisAdjusted = reinterpret_cast<Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *>(__this + _offset);
	Cinfo_set_id_m57970CF355AB638BAD860B9673F0E76B42126C1A_inline(_thisAdjusted, ___value0, method);
}
// System.Type UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor_Cinfo::get_subsystemImplementationType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemImplementationType_m3494B3DBDB5F113CD0DB5380E246F22EBF9FE39A (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = __this->get_U3CsubsystemImplementationTypeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t * Cinfo_get_subsystemImplementationType_m3494B3DBDB5F113CD0DB5380E246F22EBF9FE39A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * _thisAdjusted = reinterpret_cast<Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *>(__this + _offset);
	return Cinfo_get_subsystemImplementationType_m3494B3DBDB5F113CD0DB5380E246F22EBF9FE39A_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor_Cinfo::set_subsystemImplementationType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_m585F6DF7C070965F732F3A4C5B6BF11A4D2DF23F (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_subsystemImplementationType_m585F6DF7C070965F732F3A4C5B6BF11A4D2DF23F_AdjustorThunk (RuntimeObject * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * _thisAdjusted = reinterpret_cast<Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *>(__this + _offset);
	Cinfo_set_subsystemImplementationType_m585F6DF7C070965F732F3A4C5B6BF11A4D2DF23F_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor_Cinfo::get_supportsMovingImages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsMovingImages_m7B1E2171F1304A73339266B64548CF305EFEEA91 (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsMovingImages { get; set; }
		bool L_0 = __this->get_U3CsupportsMovingImagesU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsMovingImages_m7B1E2171F1304A73339266B64548CF305EFEEA91_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * _thisAdjusted = reinterpret_cast<Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *>(__this + _offset);
	return Cinfo_get_supportsMovingImages_m7B1E2171F1304A73339266B64548CF305EFEEA91_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor_Cinfo::set_supportsMovingImages(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsMovingImages_m04BB57385FC0A2025414437DB1BEFBE97372E579 (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsMovingImages { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsMovingImagesU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsMovingImages_m04BB57385FC0A2025414437DB1BEFBE97372E579_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * _thisAdjusted = reinterpret_cast<Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *>(__this + _offset);
	Cinfo_set_supportsMovingImages_m04BB57385FC0A2025414437DB1BEFBE97372E579_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor_Cinfo::get_requiresPhysicalImageDimensions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_requiresPhysicalImageDimensions_mEED8602BF9D390F19582D3F706A9C93333AFB0C7 (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, const RuntimeMethod* method)
{
	{
		// public bool requiresPhysicalImageDimensions { get; set; }
		bool L_0 = __this->get_U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_requiresPhysicalImageDimensions_mEED8602BF9D390F19582D3F706A9C93333AFB0C7_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * _thisAdjusted = reinterpret_cast<Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *>(__this + _offset);
	return Cinfo_get_requiresPhysicalImageDimensions_mEED8602BF9D390F19582D3F706A9C93333AFB0C7_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor_Cinfo::set_requiresPhysicalImageDimensions(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_requiresPhysicalImageDimensions_mC794914720C62ACB74173F165B3015ED9B5CA2A6 (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool requiresPhysicalImageDimensions { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_requiresPhysicalImageDimensions_mC794914720C62ACB74173F165B3015ED9B5CA2A6_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * _thisAdjusted = reinterpret_cast<Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *>(__this + _offset);
	Cinfo_set_requiresPhysicalImageDimensions_mC794914720C62ACB74173F165B3015ED9B5CA2A6_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor_Cinfo::get_supportsMutableLibrary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsMutableLibrary_mCD0988DBB5810975CB97BEDD9B2E6B6C168D6E19 (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsMutableLibrary { get; set; }
		bool L_0 = __this->get_U3CsupportsMutableLibraryU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsMutableLibrary_mCD0988DBB5810975CB97BEDD9B2E6B6C168D6E19_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * _thisAdjusted = reinterpret_cast<Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *>(__this + _offset);
	return Cinfo_get_supportsMutableLibrary_mCD0988DBB5810975CB97BEDD9B2E6B6C168D6E19_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor_Cinfo::set_supportsMutableLibrary(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsMutableLibrary_m434D9A05D0025989AA711BA50139FD348D127661 (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsMutableLibrary { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsMutableLibraryU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsMutableLibrary_m434D9A05D0025989AA711BA50139FD348D127661_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * _thisAdjusted = reinterpret_cast<Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *>(__this + _offset);
	Cinfo_set_supportsMutableLibrary_m434D9A05D0025989AA711BA50139FD348D127661_inline(_thisAdjusted, ___value0, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor_Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_m8DB95DB86F786705B32382E014B3A5B96F81F4B0 (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Cinfo_GetHashCode_m8DB95DB86F786705B32382E014B3A5B96F81F4B0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	{
		// var hashCode = id == null ? 0 : id.GetHashCode();
		String_t* L_0 = Cinfo_get_id_m7ACB39F94D161A19473B51245A60F0FE3380E9C6_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		String_t* L_1 = Cinfo_get_id_m7ACB39F94D161A19473B51245A60F0FE3380E9C6_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		G_B3_0 = L_2;
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 0;
	}

IL_0016:
	{
		// hashCode = hashCode * 486187739 + (subsystemImplementationType == null ? 0 : subsystemImplementationType.GetHashCode());
		Type_t * L_3 = Cinfo_get_subsystemImplementationType_m3494B3DBDB5F113CD0DB5380E246F22EBF9FE39A_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_4 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_3, (Type_t *)NULL, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)G_B3_0, (int32_t)((int32_t)486187739)));
		if (L_4)
		{
			G_B5_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)G_B3_0, (int32_t)((int32_t)486187739)));
			goto IL_0037;
		}
	}
	{
		Type_t * L_5 = Cinfo_get_subsystemImplementationType_m3494B3DBDB5F113CD0DB5380E246F22EBF9FE39A_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_5);
		G_B6_0 = L_6;
		G_B6_1 = G_B4_0;
		goto IL_0038;
	}

IL_0037:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
	}

IL_0038:
	{
		// hashCode = hashCode * 486187739 + supportsMovingImages.GetHashCode();
		bool L_7 = Cinfo_get_supportsMovingImages_m7B1E2171F1304A73339266B64548CF305EFEEA91_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)__this, /*hidden argument*/NULL);
		V_0 = L_7;
		int32_t L_8 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(&V_0), /*hidden argument*/NULL);
		// hashCode = hashCode * 486187739 + requiresPhysicalImageDimensions.GetHashCode();
		bool L_9 = Cinfo_get_requiresPhysicalImageDimensions_mEED8602BF9D390F19582D3F706A9C93333AFB0C7_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)__this, /*hidden argument*/NULL);
		V_0 = L_9;
		int32_t L_10 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(&V_0), /*hidden argument*/NULL);
		// hashCode = hashCode * 486187739 + supportsMutableLibrary.GetHashCode();
		bool L_11 = Cinfo_get_supportsMutableLibrary_mCD0988DBB5810975CB97BEDD9B2E6B6C168D6E19_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)__this, /*hidden argument*/NULL);
		V_0 = L_11;
		int32_t L_12 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(&V_0), /*hidden argument*/NULL);
		// return hashCode;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)G_B6_1, (int32_t)G_B6_0)), (int32_t)((int32_t)486187739))), (int32_t)L_8)), (int32_t)((int32_t)486187739))), (int32_t)L_10)), (int32_t)((int32_t)486187739))), (int32_t)L_12));
	}
}
IL2CPP_EXTERN_C  int32_t Cinfo_GetHashCode_m8DB95DB86F786705B32382E014B3A5B96F81F4B0_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * _thisAdjusted = reinterpret_cast<Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *>(__this + _offset);
	return Cinfo_GetHashCode_m8DB95DB86F786705B32382E014B3A5B96F81F4B0(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor_Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor_Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m2D882FB6E58A034244EC05B2701C303C0763C3C1 (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Cinfo_Equals_m2D882FB6E58A034244EC05B2701C303C0763C3C1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return
		//     (id == other.id) &&
		//     (subsystemImplementationType == subsystemImplementationType) &&
		//     (supportsMovingImages == other.supportsMovingImages) &&
		//     (requiresPhysicalImageDimensions == other.requiresPhysicalImageDimensions) &&
		//     (supportsMutableLibrary == other.supportsMutableLibrary);
		String_t* L_0 = Cinfo_get_id_m7ACB39F94D161A19473B51245A60F0FE3380E9C6_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)__this, /*hidden argument*/NULL);
		String_t* L_1 = Cinfo_get_id_m7ACB39F94D161A19473B51245A60F0FE3380E9C6_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)(&___other0), /*hidden argument*/NULL);
		bool L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0055;
		}
	}
	{
		Type_t * L_3 = Cinfo_get_subsystemImplementationType_m3494B3DBDB5F113CD0DB5380E246F22EBF9FE39A_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)__this, /*hidden argument*/NULL);
		Type_t * L_4 = Cinfo_get_subsystemImplementationType_m3494B3DBDB5F113CD0DB5380E246F22EBF9FE39A_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_5 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0055;
		}
	}
	{
		bool L_6 = Cinfo_get_supportsMovingImages_m7B1E2171F1304A73339266B64548CF305EFEEA91_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)__this, /*hidden argument*/NULL);
		bool L_7 = Cinfo_get_supportsMovingImages_m7B1E2171F1304A73339266B64548CF305EFEEA91_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_0055;
		}
	}
	{
		bool L_8 = Cinfo_get_requiresPhysicalImageDimensions_mEED8602BF9D390F19582D3F706A9C93333AFB0C7_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)__this, /*hidden argument*/NULL);
		bool L_9 = Cinfo_get_requiresPhysicalImageDimensions_mEED8602BF9D390F19582D3F706A9C93333AFB0C7_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_0055;
		}
	}
	{
		bool L_10 = Cinfo_get_supportsMutableLibrary_mCD0988DBB5810975CB97BEDD9B2E6B6C168D6E19_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)__this, /*hidden argument*/NULL);
		bool L_11 = Cinfo_get_supportsMutableLibrary_mCD0988DBB5810975CB97BEDD9B2E6B6C168D6E19_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)(&___other0), /*hidden argument*/NULL);
		return (bool)((((int32_t)L_10) == ((int32_t)L_11))? 1 : 0);
	}

IL_0055:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m2D882FB6E58A034244EC05B2701C303C0763C3C1_AdjustorThunk (RuntimeObject * __this, Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * _thisAdjusted = reinterpret_cast<Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *>(__this + _offset);
	return Cinfo_Equals_m2D882FB6E58A034244EC05B2701C303C0763C3C1(_thisAdjusted, ___other0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor_Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m7D227238D404DAA7ED5C72A9C3843FE6CB852ED4 (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Cinfo_Equals_m7D227238D404DAA7ED5C72A9C3843FE6CB852ED4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override bool Equals(object obj) => (obj is Cinfo) && Equals((Cinfo)obj);
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2 = Cinfo_Equals_m2D882FB6E58A034244EC05B2701C303C0763C3C1((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)__this, ((*(Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)UnBox(L_1, Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m7D227238D404DAA7ED5C72A9C3843FE6CB852ED4_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * _thisAdjusted = reinterpret_cast<Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *>(__this + _offset);
	return Cinfo_Equals_m7D227238D404DAA7ED5C72A9C3843FE6CB852ED4(_thisAdjusted, ___obj0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARSubsystems.XRParticipantSubsystem_Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m29C158581A2B8BF6DE3F03DDACC1A2F8FFB1F875 (Provider_t1D0BC515976D24FD30341AC456ACFCB2DE4A344E * __this, const RuntimeMethod* method)
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
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem_Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_mDEDB208301BBA3CC96FFF2DA6AC90F5D241CE524 (Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12 * __this, const RuntimeMethod* method)
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
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_marshal_pinvoke(const Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD& unmarshaled, Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<subsystemImplementationType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_marshal_pinvoke_back(const Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_marshaled_pinvoke& marshaled, Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD& unmarshaled)
{
	Exception_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<subsystemImplementationType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_marshal_pinvoke_cleanup(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_marshal_com(const Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD& unmarshaled, Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_marshaled_com& marshaled)
{
	Exception_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<subsystemImplementationType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_marshal_com_back(const Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_marshaled_com& marshaled, Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD& unmarshaled)
{
	Exception_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<subsystemImplementationType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_marshal_com_cleanup(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_marshaled_com& marshaled)
{
}
// System.String UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m62022D2EE6912F0B1BDBCA687A4FC63321DE3F86 (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* Cinfo_get_id_m62022D2EE6912F0B1BDBCA687A4FC63321DE3F86_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	return Cinfo_get_id_m62022D2EE6912F0B1BDBCA687A4FC63321DE3F86_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo::set_id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_id_m940361693A3C925B2180733D87611B5FDF0357D7 (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_id_m940361693A3C925B2180733D87611B5FDF0357D7_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	Cinfo_set_id_m940361693A3C925B2180733D87611B5FDF0357D7_inline(_thisAdjusted, ___value0, method);
}
// System.Type UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo::get_subsystemImplementationType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemImplementationType_m82A28CC42BE4BA1FF20AE356908C272CC9103F31 (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = __this->get_U3CsubsystemImplementationTypeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t * Cinfo_get_subsystemImplementationType_m82A28CC42BE4BA1FF20AE356908C272CC9103F31_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	return Cinfo_get_subsystemImplementationType_m82A28CC42BE4BA1FF20AE356908C272CC9103F31_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo::set_subsystemImplementationType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_mCCF96D0DFB6DB4F146EA74D30E45A2230791D09F (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_subsystemImplementationType_mCCF96D0DFB6DB4F146EA74D30E45A2230791D09F_AdjustorThunk (RuntimeObject * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	Cinfo_set_subsystemImplementationType_mCCF96D0DFB6DB4F146EA74D30E45A2230791D09F_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo::get_supportsHorizontalPlaneDetection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsHorizontalPlaneDetection_mBC3012C667106D47D9429F9C8001774038A38216 (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsHorizontalPlaneDetection { get; set; }
		bool L_0 = __this->get_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsHorizontalPlaneDetection_mBC3012C667106D47D9429F9C8001774038A38216_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	return Cinfo_get_supportsHorizontalPlaneDetection_mBC3012C667106D47D9429F9C8001774038A38216_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo::set_supportsHorizontalPlaneDetection(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsHorizontalPlaneDetection_mBC9B4572592B71328A96AF58DEB047528470C440 (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsHorizontalPlaneDetection { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsHorizontalPlaneDetection_mBC9B4572592B71328A96AF58DEB047528470C440_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	Cinfo_set_supportsHorizontalPlaneDetection_mBC9B4572592B71328A96AF58DEB047528470C440_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo::get_supportsVerticalPlaneDetection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsVerticalPlaneDetection_m4E3BE200E11784D049B94A054F15E4C76D29D7C6 (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsVerticalPlaneDetection { get; set; }
		bool L_0 = __this->get_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsVerticalPlaneDetection_m4E3BE200E11784D049B94A054F15E4C76D29D7C6_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	return Cinfo_get_supportsVerticalPlaneDetection_m4E3BE200E11784D049B94A054F15E4C76D29D7C6_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo::set_supportsVerticalPlaneDetection(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsVerticalPlaneDetection_mFF310EF7B9F8D9C9F9689CF9D1D2BEDDFF93F9F0 (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsVerticalPlaneDetection { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsVerticalPlaneDetection_mFF310EF7B9F8D9C9F9689CF9D1D2BEDDFF93F9F0_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	Cinfo_set_supportsVerticalPlaneDetection_mFF310EF7B9F8D9C9F9689CF9D1D2BEDDFF93F9F0_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo::get_supportsArbitraryPlaneDetection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsArbitraryPlaneDetection_mF6CB379C9781FE8B8473949DA99196508EF91DB5 (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsArbitraryPlaneDetection { get; set; }
		bool L_0 = __this->get_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsArbitraryPlaneDetection_mF6CB379C9781FE8B8473949DA99196508EF91DB5_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	return Cinfo_get_supportsArbitraryPlaneDetection_mF6CB379C9781FE8B8473949DA99196508EF91DB5_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo::set_supportsArbitraryPlaneDetection(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsArbitraryPlaneDetection_m70B1D6D27946FB12BF0D3D3AF8C6DC8DC3F399B9 (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsArbitraryPlaneDetection { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsArbitraryPlaneDetection_m70B1D6D27946FB12BF0D3D3AF8C6DC8DC3F399B9_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	Cinfo_set_supportsArbitraryPlaneDetection_m70B1D6D27946FB12BF0D3D3AF8C6DC8DC3F399B9_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo::get_supportsBoundaryVertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsBoundaryVertices_m5BA762B342FCF81EAE6E3645D3BAF04C1E8EAAD9 (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsBoundaryVertices { get; set; }
		bool L_0 = __this->get_U3CsupportsBoundaryVerticesU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsBoundaryVertices_m5BA762B342FCF81EAE6E3645D3BAF04C1E8EAAD9_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	return Cinfo_get_supportsBoundaryVertices_m5BA762B342FCF81EAE6E3645D3BAF04C1E8EAAD9_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo::set_supportsBoundaryVertices(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsBoundaryVertices_mC6F86EB28D38CC483AD8F9FD161013BDE3F4AFEF (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsBoundaryVertices { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsBoundaryVerticesU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsBoundaryVertices_mC6F86EB28D38CC483AD8F9FD161013BDE3F4AFEF_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	Cinfo_set_supportsBoundaryVertices_mC6F86EB28D38CC483AD8F9FD161013BDE3F4AFEF_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo::get_supportsClassification()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsClassification_m0396A2A62F840D9E283402BFB3681A5CC19C810E (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsClassification { get; set; }
		bool L_0 = __this->get_U3CsupportsClassificationU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsClassification_m0396A2A62F840D9E283402BFB3681A5CC19C810E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	return Cinfo_get_supportsClassification_m0396A2A62F840D9E283402BFB3681A5CC19C810E_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo::set_supportsClassification(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsClassification_mA3B11D7CA4F960C89E729E5161AD7CC3211B933C (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsClassification { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsClassificationU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsClassification_mA3B11D7CA4F960C89E729E5161AD7CC3211B933C_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	Cinfo_set_supportsClassification_mA3B11D7CA4F960C89E729E5161AD7CC3211B933C_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m997D9E2FAF1A57953B2A2C95A4221C9EB82843BC (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Cinfo_Equals_m997D9E2FAF1A57953B2A2C95A4221C9EB82843BC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return
		//     id.Equals(other.id) &&
		//     (subsystemImplementationType == other.subsystemImplementationType) &&
		//     (supportsHorizontalPlaneDetection == other.supportsHorizontalPlaneDetection) &&
		//     (supportsVerticalPlaneDetection == other.supportsVerticalPlaneDetection) &&
		//     (supportsArbitraryPlaneDetection == other.supportsArbitraryPlaneDetection) &&
		//     (supportsClassification == other.supportsClassification) &&
		//     (supportsBoundaryVertices == other.supportsBoundaryVertices);
		String_t* L_0 = Cinfo_get_id_m62022D2EE6912F0B1BDBCA687A4FC63321DE3F86_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)__this, /*hidden argument*/NULL);
		String_t* L_1 = Cinfo_get_id_m62022D2EE6912F0B1BDBCA687A4FC63321DE3F86_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&___other0), /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_2 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0074;
		}
	}
	{
		Type_t * L_3 = Cinfo_get_subsystemImplementationType_m82A28CC42BE4BA1FF20AE356908C272CC9103F31_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)__this, /*hidden argument*/NULL);
		Type_t * L_4 = Cinfo_get_subsystemImplementationType_m82A28CC42BE4BA1FF20AE356908C272CC9103F31_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&___other0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_5 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0074;
		}
	}
	{
		bool L_6 = Cinfo_get_supportsHorizontalPlaneDetection_mBC3012C667106D47D9429F9C8001774038A38216_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)__this, /*hidden argument*/NULL);
		bool L_7 = Cinfo_get_supportsHorizontalPlaneDetection_mBC3012C667106D47D9429F9C8001774038A38216_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_0074;
		}
	}
	{
		bool L_8 = Cinfo_get_supportsVerticalPlaneDetection_m4E3BE200E11784D049B94A054F15E4C76D29D7C6_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)__this, /*hidden argument*/NULL);
		bool L_9 = Cinfo_get_supportsVerticalPlaneDetection_m4E3BE200E11784D049B94A054F15E4C76D29D7C6_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_0074;
		}
	}
	{
		bool L_10 = Cinfo_get_supportsArbitraryPlaneDetection_mF6CB379C9781FE8B8473949DA99196508EF91DB5_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)__this, /*hidden argument*/NULL);
		bool L_11 = Cinfo_get_supportsArbitraryPlaneDetection_mF6CB379C9781FE8B8473949DA99196508EF91DB5_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_0074;
		}
	}
	{
		bool L_12 = Cinfo_get_supportsClassification_m0396A2A62F840D9E283402BFB3681A5CC19C810E_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)__this, /*hidden argument*/NULL);
		bool L_13 = Cinfo_get_supportsClassification_m0396A2A62F840D9E283402BFB3681A5CC19C810E_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0074;
		}
	}
	{
		bool L_14 = Cinfo_get_supportsBoundaryVertices_m5BA762B342FCF81EAE6E3645D3BAF04C1E8EAAD9_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)__this, /*hidden argument*/NULL);
		bool L_15 = Cinfo_get_supportsBoundaryVertices_m5BA762B342FCF81EAE6E3645D3BAF04C1E8EAAD9_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&___other0), /*hidden argument*/NULL);
		return (bool)((((int32_t)L_14) == ((int32_t)L_15))? 1 : 0);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m997D9E2FAF1A57953B2A2C95A4221C9EB82843BC_AdjustorThunk (RuntimeObject * __this, Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	return Cinfo_Equals_m997D9E2FAF1A57953B2A2C95A4221C9EB82843BC(_thisAdjusted, ___other0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m38EB24520E9273465E918F9F14D72FCE8EE4EB8B (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Cinfo_Equals_m38EB24520E9273465E918F9F14D72FCE8EE4EB8B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!(obj is Cinfo))
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_il2cpp_TypeInfo_var)))
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
		// return Equals((Cinfo)obj);
		RuntimeObject * L_1 = ___obj0;
		bool L_2 = Cinfo_Equals_m997D9E2FAF1A57953B2A2C95A4221C9EB82843BC((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)__this, ((*(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)UnBox(L_1, Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m38EB24520E9273465E918F9F14D72FCE8EE4EB8B_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	return Cinfo_Equals_m38EB24520E9273465E918F9F14D72FCE8EE4EB8B(_thisAdjusted, ___obj0, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_m219A4B64FB8A60D947BA345FBD65292065581378 (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// var hashCode = id.GetHashCode();
		String_t* L_0 = Cinfo_get_id_m62022D2EE6912F0B1BDBCA687A4FC63321DE3F86_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		// hashCode = (hashCode * 486187739) + subsystemImplementationType.GetHashCode();
		Type_t * L_2 = Cinfo_get_subsystemImplementationType_m82A28CC42BE4BA1FF20AE356908C272CC9103F31_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		// hashCode = (hashCode * 486187739) + supportsHorizontalPlaneDetection.GetHashCode();
		bool L_4 = Cinfo_get_supportsHorizontalPlaneDetection_mBC3012C667106D47D9429F9C8001774038A38216_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)__this, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(&V_0), /*hidden argument*/NULL);
		// hashCode = (hashCode * 486187739) + supportsVerticalPlaneDetection.GetHashCode();
		bool L_6 = Cinfo_get_supportsVerticalPlaneDetection_m4E3BE200E11784D049B94A054F15E4C76D29D7C6_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)__this, /*hidden argument*/NULL);
		V_0 = L_6;
		int32_t L_7 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(&V_0), /*hidden argument*/NULL);
		// hashCode = (hashCode * 486187739) + supportsArbitraryPlaneDetection.GetHashCode();
		bool L_8 = Cinfo_get_supportsArbitraryPlaneDetection_mF6CB379C9781FE8B8473949DA99196508EF91DB5_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)__this, /*hidden argument*/NULL);
		V_0 = L_8;
		int32_t L_9 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(&V_0), /*hidden argument*/NULL);
		// hashCode = (hashCode * 486187739) + supportsBoundaryVertices.GetHashCode();
		bool L_10 = Cinfo_get_supportsBoundaryVertices_m5BA762B342FCF81EAE6E3645D3BAF04C1E8EAAD9_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)__this, /*hidden argument*/NULL);
		V_0 = L_10;
		int32_t L_11 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(&V_0), /*hidden argument*/NULL);
		// hashCode = (hashCode * 486187739) + supportsClassification.GetHashCode();
		bool L_12 = Cinfo_get_supportsClassification_m0396A2A62F840D9E283402BFB3681A5CC19C810E_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)__this, /*hidden argument*/NULL);
		V_0 = L_12;
		int32_t L_13 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(&V_0), /*hidden argument*/NULL);
		// return hashCode;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)((int32_t)486187739))), (int32_t)L_3)), (int32_t)((int32_t)486187739))), (int32_t)L_5)), (int32_t)((int32_t)486187739))), (int32_t)L_7)), (int32_t)((int32_t)486187739))), (int32_t)L_9)), (int32_t)((int32_t)486187739))), (int32_t)L_11)), (int32_t)((int32_t)486187739))), (int32_t)L_13));
	}
}
IL2CPP_EXTERN_C  int32_t Cinfo_GetHashCode_m219A4B64FB8A60D947BA345FBD65292065581378_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	return Cinfo_GetHashCode_m219A4B64FB8A60D947BA345FBD65292065581378(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystem_Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m58E4226B4157880E60C02C82B5FB24D9760EA94F (Provider_tF185BE0541D2066CD242583CEFE7709DD22DD227 * __this, const RuntimeMethod* method)
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
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_marshal_pinvoke(const Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01& unmarshaled, Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<subsystemImplementationType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_marshal_pinvoke_back(const Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_marshaled_pinvoke& marshaled, Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01& unmarshaled)
{
	Exception_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<subsystemImplementationType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_marshal_pinvoke_cleanup(Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_marshal_com(const Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01& unmarshaled, Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_marshaled_com& marshaled)
{
	Exception_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<subsystemImplementationType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_marshal_com_back(const Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_marshaled_com& marshaled, Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01& unmarshaled)
{
	Exception_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<subsystemImplementationType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_marshal_com_cleanup(Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_marshaled_com& marshaled)
{
}
// System.String UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor_Cinfo::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m9A34BB7AAEFCB43E1627AA047A68C058D730EDC4 (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* Cinfo_get_id_m9A34BB7AAEFCB43E1627AA047A68C058D730EDC4_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * _thisAdjusted = reinterpret_cast<Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *>(__this + _offset);
	return Cinfo_get_id_m9A34BB7AAEFCB43E1627AA047A68C058D730EDC4_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor_Cinfo::set_id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_id_m0CB4DA3E552ED7940FBA88D8EE3BB6379EA255D6 (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_id_m0CB4DA3E552ED7940FBA88D8EE3BB6379EA255D6_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * _thisAdjusted = reinterpret_cast<Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *>(__this + _offset);
	Cinfo_set_id_m0CB4DA3E552ED7940FBA88D8EE3BB6379EA255D6_inline(_thisAdjusted, ___value0, method);
}
// System.Type UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor_Cinfo::get_subsystemImplementationType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemImplementationType_mDA4920EAF71BB44AED95212F4513B74096E4F7FD (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = __this->get_U3CsubsystemImplementationTypeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t * Cinfo_get_subsystemImplementationType_mDA4920EAF71BB44AED95212F4513B74096E4F7FD_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * _thisAdjusted = reinterpret_cast<Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *>(__this + _offset);
	return Cinfo_get_subsystemImplementationType_mDA4920EAF71BB44AED95212F4513B74096E4F7FD_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor_Cinfo::set_subsystemImplementationType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_mC2EE8A4B5C263D087B8F3924118EDFAB62CE0035 (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_subsystemImplementationType_mC2EE8A4B5C263D087B8F3924118EDFAB62CE0035_AdjustorThunk (RuntimeObject * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * _thisAdjusted = reinterpret_cast<Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *>(__this + _offset);
	Cinfo_set_subsystemImplementationType_mC2EE8A4B5C263D087B8F3924118EDFAB62CE0035_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor_Cinfo::get_supportsViewportBasedRaycast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsViewportBasedRaycast_m76E31D4FF84E88050FE4E8B6C44FB6E4E71A5A3A (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsViewportBasedRaycast { get; set; }
		bool L_0 = __this->get_U3CsupportsViewportBasedRaycastU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsViewportBasedRaycast_m76E31D4FF84E88050FE4E8B6C44FB6E4E71A5A3A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * _thisAdjusted = reinterpret_cast<Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *>(__this + _offset);
	return Cinfo_get_supportsViewportBasedRaycast_m76E31D4FF84E88050FE4E8B6C44FB6E4E71A5A3A_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor_Cinfo::set_supportsViewportBasedRaycast(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsViewportBasedRaycast_mCF77DEFDDC3931682A33A063DF2F25FFBF07B807 (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsViewportBasedRaycast { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsViewportBasedRaycastU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsViewportBasedRaycast_mCF77DEFDDC3931682A33A063DF2F25FFBF07B807_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * _thisAdjusted = reinterpret_cast<Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *>(__this + _offset);
	Cinfo_set_supportsViewportBasedRaycast_mCF77DEFDDC3931682A33A063DF2F25FFBF07B807_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor_Cinfo::get_supportsWorldBasedRaycast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsWorldBasedRaycast_m5242363FA90D64968F4ED236EC35973B7ABC180A (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsWorldBasedRaycast { get; set; }
		bool L_0 = __this->get_U3CsupportsWorldBasedRaycastU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsWorldBasedRaycast_m5242363FA90D64968F4ED236EC35973B7ABC180A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * _thisAdjusted = reinterpret_cast<Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *>(__this + _offset);
	return Cinfo_get_supportsWorldBasedRaycast_m5242363FA90D64968F4ED236EC35973B7ABC180A_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor_Cinfo::set_supportsWorldBasedRaycast(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsWorldBasedRaycast_m74BF70E612BCAFAD380C108700905E5B8C5425FA (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsWorldBasedRaycast { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsWorldBasedRaycastU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsWorldBasedRaycast_m74BF70E612BCAFAD380C108700905E5B8C5425FA_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * _thisAdjusted = reinterpret_cast<Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *>(__this + _offset);
	Cinfo_set_supportsWorldBasedRaycast_m74BF70E612BCAFAD380C108700905E5B8C5425FA_inline(_thisAdjusted, ___value0, method);
}
// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor_Cinfo::get_supportedTrackableTypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_get_supportedTrackableTypes_m0DA573866D46012B650151C7538796542A3E2C70 (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method)
{
	{
		// public TrackableType supportedTrackableTypes { get; set; }
		int32_t L_0 = __this->get_U3CsupportedTrackableTypesU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t Cinfo_get_supportedTrackableTypes_m0DA573866D46012B650151C7538796542A3E2C70_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * _thisAdjusted = reinterpret_cast<Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *>(__this + _offset);
	return Cinfo_get_supportedTrackableTypes_m0DA573866D46012B650151C7538796542A3E2C70_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor_Cinfo::set_supportedTrackableTypes(UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportedTrackableTypes_mABC320F641164FC1DB2AB9DB3F1E075B6235A785 (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public TrackableType supportedTrackableTypes { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CsupportedTrackableTypesU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportedTrackableTypes_mABC320F641164FC1DB2AB9DB3F1E075B6235A785_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * _thisAdjusted = reinterpret_cast<Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *>(__this + _offset);
	Cinfo_set_supportedTrackableTypes_mABC320F641164FC1DB2AB9DB3F1E075B6235A785_inline(_thisAdjusted, ___value0, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor_Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_mE07F77F64788F12838A7D8A20E07DE366DDAEEEA (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Cinfo_GetHashCode_mE07F77F64788F12838A7D8A20E07DE366DDAEEEA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	{
		// var hash = (id == null) ? 0 : id.GetHashCode();
		String_t* L_0 = Cinfo_get_id_m9A34BB7AAEFCB43E1627AA047A68C058D730EDC4_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		String_t* L_1 = Cinfo_get_id_m9A34BB7AAEFCB43E1627AA047A68C058D730EDC4_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		G_B3_0 = L_2;
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 0;
	}

IL_0016:
	{
		// hash = hash * 486187739 + ((subsystemImplementationType == null) ? 0 : subsystemImplementationType.GetHashCode());
		Type_t * L_3 = Cinfo_get_subsystemImplementationType_mDA4920EAF71BB44AED95212F4513B74096E4F7FD_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_4 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_3, (Type_t *)NULL, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)G_B3_0, (int32_t)((int32_t)486187739)));
		if (L_4)
		{
			G_B5_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)G_B3_0, (int32_t)((int32_t)486187739)));
			goto IL_0037;
		}
	}
	{
		Type_t * L_5 = Cinfo_get_subsystemImplementationType_mDA4920EAF71BB44AED95212F4513B74096E4F7FD_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_5);
		G_B6_0 = L_6;
		G_B6_1 = G_B4_0;
		goto IL_0038;
	}

IL_0037:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
	}

IL_0038:
	{
		// hash = hash * 486187739 + supportsViewportBasedRaycast.GetHashCode();
		bool L_7 = Cinfo_get_supportsViewportBasedRaycast_m76E31D4FF84E88050FE4E8B6C44FB6E4E71A5A3A_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)__this, /*hidden argument*/NULL);
		V_0 = L_7;
		int32_t L_8 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(&V_0), /*hidden argument*/NULL);
		// hash = hash * 486187739 + supportsWorldBasedRaycast.GetHashCode();
		bool L_9 = Cinfo_get_supportsWorldBasedRaycast_m5242363FA90D64968F4ED236EC35973B7ABC180A_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)__this, /*hidden argument*/NULL);
		V_0 = L_9;
		int32_t L_10 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(&V_0), /*hidden argument*/NULL);
		// hash = hash * 486187739 + supportedTrackableTypes.GetHashCode();
		int32_t L_11 = Cinfo_get_supportedTrackableTypes_m0DA573866D46012B650151C7538796542A3E2C70_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)__this, /*hidden argument*/NULL);
		V_1 = L_11;
		int32_t L_12 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(&V_1), /*hidden argument*/NULL);
		// return hash;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)G_B6_1, (int32_t)G_B6_0)), (int32_t)((int32_t)486187739))), (int32_t)L_8)), (int32_t)((int32_t)486187739))), (int32_t)L_10)), (int32_t)((int32_t)486187739))), (int32_t)L_12));
	}
}
IL2CPP_EXTERN_C  int32_t Cinfo_GetHashCode_mE07F77F64788F12838A7D8A20E07DE366DDAEEEA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * _thisAdjusted = reinterpret_cast<Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *>(__this + _offset);
	return Cinfo_GetHashCode_mE07F77F64788F12838A7D8A20E07DE366DDAEEEA(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor_Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_mFDD42918C99F796C9737C544D9858098C0241716 (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Cinfo_Equals_mFDD42918C99F796C9737C544D9858098C0241716_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!(obj is Cinfo))
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_il2cpp_TypeInfo_var)))
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
		// return Equals((Cinfo)obj);
		RuntimeObject * L_1 = ___obj0;
		bool L_2 = Cinfo_Equals_m96B4DD943D8AAA5D31B0B5BCD0EEC1F94E60F146((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)__this, ((*(Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)UnBox(L_1, Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_mFDD42918C99F796C9737C544D9858098C0241716_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * _thisAdjusted = reinterpret_cast<Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *>(__this + _offset);
	return Cinfo_Equals_mFDD42918C99F796C9737C544D9858098C0241716(_thisAdjusted, ___obj0, method);
}
// System.String UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor_Cinfo::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Cinfo_ToString_m5E549199F8D40CF630BB8ED6B46EC5F51E580BEB (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Cinfo_ToString_m5E549199F8D40CF630BB8ED6B46EC5F51E580BEB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format("XRRaycastSubsystemDescriptor:\nsupportsViewportBasedRaycast: {0}\nsupportsWorldBasedRaycast: {1}",
		//     supportsViewportBasedRaycast, supportsWorldBasedRaycast);
		bool L_0 = Cinfo_get_supportsViewportBasedRaycast_m76E31D4FF84E88050FE4E8B6C44FB6E4E71A5A3A_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)__this, /*hidden argument*/NULL);
		bool L_1 = L_0;
		RuntimeObject * L_2 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_1);
		bool L_3 = Cinfo_get_supportsWorldBasedRaycast_m5242363FA90D64968F4ED236EC35973B7ABC180A_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)__this, /*hidden argument*/NULL);
		bool L_4 = L_3;
		RuntimeObject * L_5 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral73B1EF85B3661969EA06515B1FAB6B1BECBB653C, L_2, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  String_t* Cinfo_ToString_m5E549199F8D40CF630BB8ED6B46EC5F51E580BEB_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * _thisAdjusted = reinterpret_cast<Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *>(__this + _offset);
	return Cinfo_ToString_m5E549199F8D40CF630BB8ED6B46EC5F51E580BEB(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor_Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor_Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m96B4DD943D8AAA5D31B0B5BCD0EEC1F94E60F146 (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Cinfo_Equals_m96B4DD943D8AAA5D31B0B5BCD0EEC1F94E60F146_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return
		//     String.Equals(id, other.id) &&
		//     (subsystemImplementationType == other.subsystemImplementationType) &&
		//     (supportsViewportBasedRaycast == other.supportsViewportBasedRaycast) &&
		//     (supportsWorldBasedRaycast == other.supportsWorldBasedRaycast) &&
		//     (supportedTrackableTypes == other.supportedTrackableTypes);
		String_t* L_0 = Cinfo_get_id_m9A34BB7AAEFCB43E1627AA047A68C058D730EDC4_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)__this, /*hidden argument*/NULL);
		String_t* L_1 = Cinfo_get_id_m9A34BB7AAEFCB43E1627AA047A68C058D730EDC4_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)(&___other0), /*hidden argument*/NULL);
		bool L_2 = String_Equals_mAFC6038D294F341434D9D67D7EADC7F97C556C9B(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0056;
		}
	}
	{
		Type_t * L_3 = Cinfo_get_subsystemImplementationType_mDA4920EAF71BB44AED95212F4513B74096E4F7FD_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)__this, /*hidden argument*/NULL);
		Type_t * L_4 = Cinfo_get_subsystemImplementationType_mDA4920EAF71BB44AED95212F4513B74096E4F7FD_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)(&___other0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_5 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0056;
		}
	}
	{
		bool L_6 = Cinfo_get_supportsViewportBasedRaycast_m76E31D4FF84E88050FE4E8B6C44FB6E4E71A5A3A_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)__this, /*hidden argument*/NULL);
		bool L_7 = Cinfo_get_supportsViewportBasedRaycast_m76E31D4FF84E88050FE4E8B6C44FB6E4E71A5A3A_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_0056;
		}
	}
	{
		bool L_8 = Cinfo_get_supportsWorldBasedRaycast_m5242363FA90D64968F4ED236EC35973B7ABC180A_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)__this, /*hidden argument*/NULL);
		bool L_9 = Cinfo_get_supportsWorldBasedRaycast_m5242363FA90D64968F4ED236EC35973B7ABC180A_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_10 = Cinfo_get_supportedTrackableTypes_m0DA573866D46012B650151C7538796542A3E2C70_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)__this, /*hidden argument*/NULL);
		int32_t L_11 = Cinfo_get_supportedTrackableTypes_m0DA573866D46012B650151C7538796542A3E2C70_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)(&___other0), /*hidden argument*/NULL);
		return (bool)((((int32_t)L_10) == ((int32_t)L_11))? 1 : 0);
	}

IL_0056:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m96B4DD943D8AAA5D31B0B5BCD0EEC1F94E60F146_AdjustorThunk (RuntimeObject * __this, Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * _thisAdjusted = reinterpret_cast<Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *>(__this + _offset);
	return Cinfo_Equals_m96B4DD943D8AAA5D31B0B5BCD0EEC1F94E60F146(_thisAdjusted, ___other0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem_Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m921D9E5D94AB32804689C972E36ECA2601BB2AAE (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, const RuntimeMethod* method)
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
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_marshal_pinvoke(const Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A& unmarshaled, Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<subsystemImplementationType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsubsystemImplementationTypeU3Ek__BackingField_3Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_marshal_pinvoke_back(const Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_marshaled_pinvoke& marshaled, Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A& unmarshaled)
{
	Exception_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<subsystemImplementationType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsubsystemImplementationTypeU3Ek__BackingField_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_marshal_pinvoke_cleanup(Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_marshal_com(const Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A& unmarshaled, Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_marshaled_com& marshaled)
{
	Exception_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<subsystemImplementationType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsubsystemImplementationTypeU3Ek__BackingField_3Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_marshal_com_back(const Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_marshaled_com& marshaled, Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A& unmarshaled)
{
	Exception_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<subsystemImplementationType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsubsystemImplementationTypeU3Ek__BackingField_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_marshal_com_cleanup(Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_marshaled_com& marshaled)
{
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo::get_supportsInstall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsInstall_m706A828C9AE61FF74DF4640D80E52148CDF4F3AD (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsInstall { get; set; }
		bool L_0 = __this->get_U3CsupportsInstallU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsInstall_m706A828C9AE61FF74DF4640D80E52148CDF4F3AD_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * _thisAdjusted = reinterpret_cast<Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *>(__this + _offset);
	return Cinfo_get_supportsInstall_m706A828C9AE61FF74DF4640D80E52148CDF4F3AD_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo::set_supportsInstall(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsInstall_m05EE61C58E505A8F20DEA68862395341F1DAD3FD (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsInstall { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsInstallU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsInstall_m05EE61C58E505A8F20DEA68862395341F1DAD3FD_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * _thisAdjusted = reinterpret_cast<Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *>(__this + _offset);
	Cinfo_set_supportsInstall_m05EE61C58E505A8F20DEA68862395341F1DAD3FD_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo::get_supportsMatchFrameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsMatchFrameRate_m1E603F47BF0A28EE5E7377A28D9D2BB29BFD3B6F (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsMatchFrameRate { get; set; }
		bool L_0 = __this->get_U3CsupportsMatchFrameRateU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsMatchFrameRate_m1E603F47BF0A28EE5E7377A28D9D2BB29BFD3B6F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * _thisAdjusted = reinterpret_cast<Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *>(__this + _offset);
	return Cinfo_get_supportsMatchFrameRate_m1E603F47BF0A28EE5E7377A28D9D2BB29BFD3B6F_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo::set_supportsMatchFrameRate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsMatchFrameRate_m9CB328CEF43BCE3E59F26A97D32AEE1D201F8787 (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsMatchFrameRate { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsMatchFrameRateU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsMatchFrameRate_m9CB328CEF43BCE3E59F26A97D32AEE1D201F8787_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * _thisAdjusted = reinterpret_cast<Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *>(__this + _offset);
	Cinfo_set_supportsMatchFrameRate_m9CB328CEF43BCE3E59F26A97D32AEE1D201F8787_inline(_thisAdjusted, ___value0, method);
}
// System.String UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_mA521F604882D1F4C6FD30262F3E2C3B0609BFC55 (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* Cinfo_get_id_mA521F604882D1F4C6FD30262F3E2C3B0609BFC55_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * _thisAdjusted = reinterpret_cast<Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *>(__this + _offset);
	return Cinfo_get_id_mA521F604882D1F4C6FD30262F3E2C3B0609BFC55_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo::set_id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_id_m6A2CAB13FAD54AB05458DC5DE1FAB5C651E9D656 (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_id_m6A2CAB13FAD54AB05458DC5DE1FAB5C651E9D656_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * _thisAdjusted = reinterpret_cast<Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *>(__this + _offset);
	Cinfo_set_id_m6A2CAB13FAD54AB05458DC5DE1FAB5C651E9D656_inline(_thisAdjusted, ___value0, method);
}
// System.Type UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo::get_subsystemImplementationType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemImplementationType_m0DA3A6C9EAC6743D765D06C5388E069FCC60DC74 (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = __this->get_U3CsubsystemImplementationTypeU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t * Cinfo_get_subsystemImplementationType_m0DA3A6C9EAC6743D765D06C5388E069FCC60DC74_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * _thisAdjusted = reinterpret_cast<Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *>(__this + _offset);
	return Cinfo_get_subsystemImplementationType_m0DA3A6C9EAC6743D765D06C5388E069FCC60DC74_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo::set_subsystemImplementationType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_mEFA8A5F68BEA841ED51B8D17DAF2E933BA7893EC (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemImplementationTypeU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_subsystemImplementationType_mEFA8A5F68BEA841ED51B8D17DAF2E933BA7893EC_AdjustorThunk (RuntimeObject * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * _thisAdjusted = reinterpret_cast<Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *>(__this + _offset);
	Cinfo_set_subsystemImplementationType_mEFA8A5F68BEA841ED51B8D17DAF2E933BA7893EC_inline(_thisAdjusted, ___value0, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_m52D192E832A52B87FB2F03DB84EB47EED7DCD48C (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Cinfo_GetHashCode_m52D192E832A52B87FB2F03DB84EB47EED7DCD48C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	{
		// var hash = (id != null) ? id.GetHashCode() : 0;
		String_t* L_0 = Cinfo_get_id_mA521F604882D1F4C6FD30262F3E2C3B0609BFC55_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0016;
	}

IL_000b:
	{
		String_t* L_1 = Cinfo_get_id_mA521F604882D1F4C6FD30262F3E2C3B0609BFC55_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		G_B3_0 = L_2;
	}

IL_0016:
	{
		// hash = hash * 486187739 + ((subsystemImplementationType != null) ? subsystemImplementationType.GetHashCode() : 0);
		Type_t * L_3 = Cinfo_get_subsystemImplementationType_m0DA3A6C9EAC6743D765D06C5388E069FCC60DC74_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_4 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0(L_3, (Type_t *)NULL, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)G_B3_0, (int32_t)((int32_t)486187739)));
		if (L_4)
		{
			G_B5_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)G_B3_0, (int32_t)((int32_t)486187739)));
			goto IL_002d;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		goto IL_0038;
	}

IL_002d:
	{
		Type_t * L_5 = Cinfo_get_subsystemImplementationType_m0DA3A6C9EAC6743D765D06C5388E069FCC60DC74_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_5);
		G_B6_0 = L_6;
		G_B6_1 = G_B5_0;
	}

IL_0038:
	{
		// hash = hash * 486187739 + supportsInstall.GetHashCode();
		bool L_7 = Cinfo_get_supportsInstall_m706A828C9AE61FF74DF4640D80E52148CDF4F3AD_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)__this, /*hidden argument*/NULL);
		V_0 = L_7;
		int32_t L_8 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(&V_0), /*hidden argument*/NULL);
		// hash = hash * 486187739 + supportsMatchFrameRate.GetHashCode();
		bool L_9 = Cinfo_get_supportsMatchFrameRate_m1E603F47BF0A28EE5E7377A28D9D2BB29BFD3B6F_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)__this, /*hidden argument*/NULL);
		V_0 = L_9;
		int32_t L_10 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(&V_0), /*hidden argument*/NULL);
		// return hash;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)G_B6_1, (int32_t)G_B6_0)), (int32_t)((int32_t)486187739))), (int32_t)L_8)), (int32_t)((int32_t)486187739))), (int32_t)L_10));
	}
}
IL2CPP_EXTERN_C  int32_t Cinfo_GetHashCode_m52D192E832A52B87FB2F03DB84EB47EED7DCD48C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * _thisAdjusted = reinterpret_cast<Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *>(__this + _offset);
	return Cinfo_GetHashCode_m52D192E832A52B87FB2F03DB84EB47EED7DCD48C(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m515E1A8509A7C1472469FD535B7CBE5D58E45A78 (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Cinfo_Equals_m515E1A8509A7C1472469FD535B7CBE5D58E45A78_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!(obj is Cinfo))
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_il2cpp_TypeInfo_var)))
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
		// return Equals((Cinfo)obj);
		RuntimeObject * L_1 = ___obj0;
		bool L_2 = Cinfo_Equals_m1C37149A7375CC94768E18102A1CB1AED3E3FF77((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)__this, ((*(Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)UnBox(L_1, Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m515E1A8509A7C1472469FD535B7CBE5D58E45A78_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * _thisAdjusted = reinterpret_cast<Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *>(__this + _offset);
	return Cinfo_Equals_m515E1A8509A7C1472469FD535B7CBE5D58E45A78(_thisAdjusted, ___obj0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m1C37149A7375CC94768E18102A1CB1AED3E3FF77 (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Cinfo_Equals_m1C37149A7375CC94768E18102A1CB1AED3E3FF77_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return
		//     string.Equals(id, other.id) &&
		//     (subsystemImplementationType == other.subsystemImplementationType) &&
		//     (supportsInstall == other.supportsInstall) &&
		//     (supportsMatchFrameRate == other.supportsMatchFrameRate);
		String_t* L_0 = Cinfo_get_id_mA521F604882D1F4C6FD30262F3E2C3B0609BFC55_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)__this, /*hidden argument*/NULL);
		String_t* L_1 = Cinfo_get_id_mA521F604882D1F4C6FD30262F3E2C3B0609BFC55_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)(&___other0), /*hidden argument*/NULL);
		bool L_2 = String_Equals_mAFC6038D294F341434D9D67D7EADC7F97C556C9B(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0047;
		}
	}
	{
		Type_t * L_3 = Cinfo_get_subsystemImplementationType_m0DA3A6C9EAC6743D765D06C5388E069FCC60DC74_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)__this, /*hidden argument*/NULL);
		Type_t * L_4 = Cinfo_get_subsystemImplementationType_m0DA3A6C9EAC6743D765D06C5388E069FCC60DC74_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)(&___other0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_5 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0047;
		}
	}
	{
		bool L_6 = Cinfo_get_supportsInstall_m706A828C9AE61FF74DF4640D80E52148CDF4F3AD_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)__this, /*hidden argument*/NULL);
		bool L_7 = Cinfo_get_supportsInstall_m706A828C9AE61FF74DF4640D80E52148CDF4F3AD_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_0047;
		}
	}
	{
		bool L_8 = Cinfo_get_supportsMatchFrameRate_m1E603F47BF0A28EE5E7377A28D9D2BB29BFD3B6F_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)__this, /*hidden argument*/NULL);
		bool L_9 = Cinfo_get_supportsMatchFrameRate_m1E603F47BF0A28EE5E7377A28D9D2BB29BFD3B6F_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)(&___other0), /*hidden argument*/NULL);
		return (bool)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0);
	}

IL_0047:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m1C37149A7375CC94768E18102A1CB1AED3E3FF77_AdjustorThunk (RuntimeObject * __this, Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * _thisAdjusted = reinterpret_cast<Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *>(__this + _offset);
	return Cinfo_Equals_m1C37149A7375CC94768E18102A1CB1AED3E3FF77(_thisAdjusted, ___other0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  BoundedPlane_get_trackableId_m32943441D74DC226DC907A05B5B6C6EBBC70F95B_inline (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method)
{
	{
		// public TrackableId trackableId { get { return m_TrackableId; } }
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_0 = __this->get_m_TrackableId_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  BoundedPlane_get_subsumedById_mD61EFD7A91B5F290F63A1AE59153B75BB33B89CF_inline (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method)
{
	{
		// public TrackableId subsumedById { get { return m_SubsumedById; } }
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_0 = __this->get_m_SubsumedById_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  BoundedPlane_get_pose_m8302E13809156362584FA0AE137DD911D30665BA_inline (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method)
{
	{
		// public Pose pose { get { return m_Pose; } }
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_0 = __this->get_m_Pose_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  BoundedPlane_get_center_mA4667303D86B331F7EC5F278910145E7633EA973_inline (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 center { get { return m_Center; } }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_m_Center_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  BoundedPlane_get_size_m204F4F37C0FB6F7294682D961B53F4F9639E3882_inline (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 size { get { return m_Size; } }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_m_Size_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BoundedPlane_get_alignment_m72B849B54224B1493DFF448BCF2AB8634751DC71_inline (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method)
{
	{
		// public PlaneAlignment alignment { get { return m_Alignment; } }
		int32_t L_0 = __this->get_m_Alignment_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BoundedPlane_get_trackingState_mBF10ADD6DD969A0DA7FCC8299FFA56AEB9B837CA_inline (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method)
{
	{
		// public TrackingState trackingState { get { return m_TrackingState; } }
		int32_t L_0 = __this->get_m_TrackingState_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t BoundedPlane_get_nativePtr_m626921F0179BF37BC5F06C2587D298FB40F31FE9_inline (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method)
{
	{
		// public IntPtr nativePtr { get { return m_NativePtr; } }
		intptr_t L_0 = __this->get_m_NativePtr_8();
		return (intptr_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BoundedPlane_get_classification_m842651162BFE9633C414B16CD1D86FBBE86589A3_inline (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method)
{
	{
		// public PlaneClassification classification => m_Classification;
		int32_t L_0 = __this->get_m_Classification_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_Equals_m6E08A16717F2B9EE8B24EBA6B234A03098D5F05D_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		float L_0 = __this->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___other0;
		float L_2 = L_1.get_x_0();
		if ((!(((float)L_0) == ((float)L_2))))
		{
			goto IL_001f;
		}
	}
	{
		float L_3 = __this->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___other0;
		float L_5 = L_4.get_y_1();
		G_B3_0 = ((((float)L_3) == ((float)L_5))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0023;
	}

IL_0023:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  TrackableId_get_invalidId_m06B698EFFA7748E185299C72B5CEC1AA5B221F85_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableId_get_invalidId_m06B698EFFA7748E185299C72B5CEC1AA5B221F85Unity_XR_ARSubsystems_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static TrackableId invalidId { get { return s_InvalidId; } }
		IL2CPP_RUNTIME_CLASS_INIT(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_il2cpp_TypeInfo_var);
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_0 = ((TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields*)il2cpp_codegen_static_fields_for(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_il2cpp_TypeInfo_var))->get_s_InvalidId_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m7C38252CE360F061914361192300AECA8CB5307B_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptor_set_id_m3394B5AEBBE25A1924FD34FC0608DD5AACABBE2C_inline (SubsystemDescriptor_tF663011CB44AB1D342821BBEF7B6811E799A7245 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemImplementationType_m45C4A6583BBDA8DC5FD506339DC7A80474E88CC2_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = __this->get_U3CsubsystemImplementationTypeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptor_set_subsystemImplementationType_mAEAE9A52920C64D2A9C5B6316E30353AFA581AA4_inline (SubsystemDescriptor_tF663011CB44AB1D342821BBEF7B6811E799A7245 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsTrackableAttachments_m13B6C9977641F3E284C69AA3554EBD19478538B8_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsTrackableAttachments { get; set; }
		bool L_0 = __this->get_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRAnchorSubsystemDescriptor_set_supportsTrackableAttachments_m11271C1EBC306EB3FDA99D24D45D88DB31DCCC38_inline (XRAnchorSubsystemDescriptor_t3BD7F9922EF5C04185D59349C76D625BC1E44E3B * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsTrackableAttachments { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XRCameraSubsystemCinfo_get_id_m606888326128C053029E1B09A00F2CB97B214291_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_0();
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * XRCameraSubsystemCinfo_get_implementationType_mAE66FE753EC633CC784D6D512DFC487427EA1C58_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, const RuntimeMethod* method)
{
	{
		// public Type implementationType { get; set; }
		Type_t * L_0 = __this->get_U3CimplementationTypeU3Ek__BackingField_1();
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRCameraSubsystemCinfo_get_supportsAverageBrightness_mF49B2D16DE8FBC5452C17D87672FBE1EB814145E_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsAverageBrightness { get; set; }
		bool L_0 = __this->get_U3CsupportsAverageBrightnessU3Ek__BackingField_2();
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRCameraSubsystemCinfo_get_supportsAverageColorTemperature_m789041AE11DC92E73ED6C228C5A5B55A87AE736B_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsAverageColorTemperature { get; set; }
		bool L_0 = __this->get_U3CsupportsAverageColorTemperatureU3Ek__BackingField_3();
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRCameraSubsystemCinfo_get_supportsDisplayMatrix_m2107BE8860B1A4D050A80801F6286F0E9798820D_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsDisplayMatrix { get; set; }
		bool L_0 = __this->get_U3CsupportsDisplayMatrixU3Ek__BackingField_5();
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRCameraSubsystemCinfo_get_supportsProjectionMatrix_mAC44711CBD0AEF5600FAF7A65364692FE9FA9D9E_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsProjectionMatrix { get; set; }
		bool L_0 = __this->get_U3CsupportsProjectionMatrixU3Ek__BackingField_6();
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRCameraSubsystemCinfo_get_supportsTimestamp_m0B95FB498C6682EE15E2461F8A5C555B3E397543_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsTimestamp { get; set; }
		bool L_0 = __this->get_U3CsupportsTimestampU3Ek__BackingField_7();
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRCameraSubsystemCinfo_get_supportsCameraConfigurations_mF0168147B6D556F8289DCE665D070EE427430CDD_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsCameraConfigurations { get; set; }
		bool L_0 = __this->get_U3CsupportsCameraConfigurationsU3Ek__BackingField_8();
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRCameraSubsystemCinfo_get_supportsCameraImage_m404883CC80418B38CB13D3ED6DAAFE6D81978A6F_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsCameraImage { get; set; }
		bool L_0 = __this->get_U3CsupportsCameraImageU3Ek__BackingField_9();
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRCameraSubsystemCinfo_get_supportsAverageIntensityInLumens_m5B91C231C060B22D44F1579CF361500D7B54173E_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsAverageIntensityInLumens { get; set; }
		bool L_0 = __this->get_U3CsupportsAverageIntensityInLumensU3Ek__BackingField_10();
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRCameraSubsystemCinfo_get_supportsFocusModes_mA2196338BFF377734A338E919D372089A98417D9_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsFocusModes { get; set; }
		bool L_0 = __this->get_U3CsupportsFocusModesU3Ek__BackingField_11();
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemDescriptor_set_supportsAverageBrightness_m93E308790E7E9F9EB2D4A0AA12EF64F5ACF32275_inline (XRCameraSubsystemDescriptor_t1F8A45C69031E2981B1863518C43793D26E2C5E5 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsAverageBrightness { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsAverageBrightnessU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemDescriptor_set_supportsAverageColorTemperature_m79788019F8E730D1FC139530E9615FE5CBABDDCB_inline (XRCameraSubsystemDescriptor_t1F8A45C69031E2981B1863518C43793D26E2C5E5 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsAverageColorTemperature { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsAverageColorTemperatureU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemDescriptor_set_supportsDisplayMatrix_mE32DBA05CC497A4639E3BDA570E51244BD5E524A_inline (XRCameraSubsystemDescriptor_t1F8A45C69031E2981B1863518C43793D26E2C5E5 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsDisplayMatrix { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsDisplayMatrixU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemDescriptor_set_supportsProjectionMatrix_mECDFAEA74911ED30529FDB70DE87AA3818AA285F_inline (XRCameraSubsystemDescriptor_t1F8A45C69031E2981B1863518C43793D26E2C5E5 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsProjectionMatrix { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsProjectionMatrixU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemDescriptor_set_supportsTimestamp_mDE3970574677648ED3EC4520657BED04613128D3_inline (XRCameraSubsystemDescriptor_t1F8A45C69031E2981B1863518C43793D26E2C5E5 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsTimestamp { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsTimestampU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemDescriptor_set_supportsCameraConfigurations_mE49020DC68025F21123ACCCB96C0ACB0A99A923C_inline (XRCameraSubsystemDescriptor_t1F8A45C69031E2981B1863518C43793D26E2C5E5 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsCameraConfigurations { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsCameraConfigurationsU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemDescriptor_set_supportsCameraImage_m3D2848F2DDBED1D1B613D6CF8E6055D8163EF3F7_inline (XRCameraSubsystemDescriptor_t1F8A45C69031E2981B1863518C43793D26E2C5E5 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsCameraImage { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsCameraImageU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemDescriptor_set_supportsAverageIntensityInLumens_m65A10731DEF111F2BE9325DC6CC26E5B765D07C6_inline (XRCameraSubsystemDescriptor_t1F8A45C69031E2981B1863518C43793D26E2C5E5 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsAverageIntensityInLumens { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsAverageIntensityInLumensU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemDescriptor_set_supportsFocusModes_mB7D094AE9379B0C31386397C907C1A1C1A4189BB_inline (XRCameraSubsystemDescriptor_t1F8A45C69031E2981B1863518C43793D26E2C5E5 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsFocusModes { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsFocusModesU3Ek__BackingField_10(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRDepthSubsystemDescriptor_set_supportsFeaturePoints_mA0C105DA50CA07BC488A7E1BDDB3CD72225BE00C_inline (XRDepthSubsystemDescriptor_t745DBB7D313FB52F756E0B7AA993FBBC26B412C2 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsFeaturePoints { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsFeaturePointsU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRDepthSubsystemDescriptor_set_supportsUniqueIds_m0BBF2BAA5E4E1A704B29F62FE895F5A29A5D93CD_inline (XRDepthSubsystemDescriptor_t745DBB7D313FB52F756E0B7AA993FBBC26B412C2 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsUniqueIds { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsUniqueIdsU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRDepthSubsystemDescriptor_set_supportsConfidence_m877945BE2EB06E5FB0699BEDA781CDC7E88DBC9A_inline (XRDepthSubsystemDescriptor_t745DBB7D313FB52F756E0B7AA993FBBC26B412C2 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsConfidence { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsConfidenceU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbe_set_trackableId_m2FAAA910E6D06256C1ECCCCF8C6D3E72A056199D_inline (XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___value0, const RuntimeMethod* method)
{
	{
		// private set => m_TrackableId = value;
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_0 = ___value0;
		__this->set_m_TrackableId_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbe_set_pose_mAC84C3A2D8788D587F0503EA1CE051294A8A87E9_inline (XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C * __this, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___value0, const RuntimeMethod* method)
{
	{
		// private set => m_Pose = value;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_0 = ___value0;
		__this->set_m_Pose_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XREnvironmentProbeSubsystemCinfo_get_id_mBEA40C4012D8253E65C525083E3454C93BC6F3BE_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_0();
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * XREnvironmentProbeSubsystemCinfo_get_implementationType_m60A843D0968BAEE06DA8AE2F67E0B1190CD49249_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, const RuntimeMethod* method)
{
	{
		// public Type implementationType { get; set; }
		Type_t * L_0 = __this->get_U3CimplementationTypeU3Ek__BackingField_1();
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XREnvironmentProbeSubsystemCinfo_get_supportsManualPlacement_m194C593950367B1C7EFB50D6F00E5705597065BF_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsManualPlacement { get; set; }
		bool L_0 = __this->get_U3CsupportsManualPlacementU3Ek__BackingField_2();
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XREnvironmentProbeSubsystemCinfo_get_supportsRemovalOfManual_m7B2DFDB097FAD2FC7FE6AE7F7A8172FA7B34D406_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsRemovalOfManual { get; set; }
		bool L_0 = __this->get_U3CsupportsRemovalOfManualU3Ek__BackingField_3();
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XREnvironmentProbeSubsystemCinfo_get_supportsAutomaticPlacement_m2EAA567973D53F9FFCF91AAD4233F91957281B11_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsAutomaticPlacement { get; set; }
		bool L_0 = __this->get_U3CsupportsAutomaticPlacementU3Ek__BackingField_4();
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XREnvironmentProbeSubsystemCinfo_get_supportsRemovalOfAutomatic_mFC9AA46EA023D8A0968ED80B1F88F10AA50F549F_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsRemovalOfAutomatic { get; set; }
		bool L_0 = __this->get_U3CsupportsRemovalOfAutomaticU3Ek__BackingField_5();
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XREnvironmentProbeSubsystemCinfo_get_supportsEnvironmentTexture_m3593704263A383A9EC79E765CCC01632707E4A48_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsEnvironmentTexture { get; set; }
		bool L_0 = __this->get_U3CsupportsEnvironmentTextureU3Ek__BackingField_6();
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XREnvironmentProbeSubsystemCinfo_get_supportsEnvironmentTextureHDR_mDD0F30AB731A6010F6F96DBA660415B55FCD580A_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsEnvironmentTextureHDR { get; set; }
		bool L_0 = __this->get_U3CsupportsEnvironmentTextureHDRU3Ek__BackingField_7();
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemDescriptor_set_supportsManualPlacement_mCE20C35437C72E053599F9F900EFE7D5A1B0ECF3_inline (XREnvironmentProbeSubsystemDescriptor_t7C10519F545418330347AC7434FBB10F39DD4243 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsManualPlacement { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsManualPlacementU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemDescriptor_set_supportsRemovalOfManual_m148569DAD1997E9EFC75977FD58B2E2A0E6A3A29_inline (XREnvironmentProbeSubsystemDescriptor_t7C10519F545418330347AC7434FBB10F39DD4243 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsRemovalOfManual { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsRemovalOfManualU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemDescriptor_set_supportsAutomaticPlacement_mE62CB20894AB742E406F1762C9B8C2CE1DA1B359_inline (XREnvironmentProbeSubsystemDescriptor_t7C10519F545418330347AC7434FBB10F39DD4243 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsAutomaticPlacement { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsAutomaticPlacementU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemDescriptor_set_supportsRemovalOfAutomatic_m3210C35AC07979BAFDFA3EA0F6A3677285D6E282_inline (XREnvironmentProbeSubsystemDescriptor_t7C10519F545418330347AC7434FBB10F39DD4243 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsRemovalOfAutomatic { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsRemovalOfAutomaticU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemDescriptor_set_supportsEnvironmentTexture_m67C606821F3D139A11628F487EFE764A2A562CC4_inline (XREnvironmentProbeSubsystemDescriptor_t7C10519F545418330347AC7434FBB10F39DD4243 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsEnvironmentTexture { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsEnvironmentTextureU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemDescriptor_set_supportsEnvironmentTextureHDR_m813F1381535676A236CE05D522515683E6CA795A_inline (XREnvironmentProbeSubsystemDescriptor_t7C10519F545418330347AC7434FBB10F39DD4243 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsEnvironmentTextureHDR { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsEnvironmentTextureHDRU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m7ACB39F94D161A19473B51245A60F0FE3380E9C6_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemImplementationType_m3494B3DBDB5F113CD0DB5380E246F22EBF9FE39A_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = __this->get_U3CsubsystemImplementationTypeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsMovingImages_m7B1E2171F1304A73339266B64548CF305EFEEA91_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsMovingImages { get; set; }
		bool L_0 = __this->get_U3CsupportsMovingImagesU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRImageTrackingSubsystemDescriptor_set_supportsMovingImages_mC063AA8181AC8EBF77D9971D48520BEE6EC004B2_inline (XRImageTrackingSubsystemDescriptor_t3EC191739B144A8AA00CEEE03E8F7FF01D7F833B * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsMovingImages { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsMovingImagesU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_requiresPhysicalImageDimensions_mEED8602BF9D390F19582D3F706A9C93333AFB0C7_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, const RuntimeMethod* method)
{
	{
		// public bool requiresPhysicalImageDimensions { get; set; }
		bool L_0 = __this->get_U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRImageTrackingSubsystemDescriptor_set_requiresPhysicalImageDimensions_m5CCC9D3F1557368927D0AED4E1688F2F8ADA3F14_inline (XRImageTrackingSubsystemDescriptor_t3EC191739B144A8AA00CEEE03E8F7FF01D7F833B * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool requiresPhysicalImageDimensions { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsMutableLibrary_mCD0988DBB5810975CB97BEDD9B2E6B6C168D6E19_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsMutableLibrary { get; set; }
		bool L_0 = __this->get_U3CsupportsMutableLibraryU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRImageTrackingSubsystemDescriptor_set_supportsMutableLibrary_mD005AB53B7850F1B329DE152520E552E23072834_inline (XRImageTrackingSubsystemDescriptor_t3EC191739B144A8AA00CEEE03E8F7FF01D7F833B * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsMutableLibrary { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsMutableLibraryU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRParticipantSubsystemDescriptor_set_capabilities_m3CDF9EDC1BF57F513846DE87A9E4996ED543759A_inline (XRParticipantSubsystemDescriptor_t533EE70DC8D4B105B9C87B76D35A7D59A84BCA55 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public Capabilities capabilities { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CcapabilitiesU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m62022D2EE6912F0B1BDBCA687A4FC63321DE3F86_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemImplementationType_m82A28CC42BE4BA1FF20AE356908C272CC9103F31_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = __this->get_U3CsubsystemImplementationTypeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsHorizontalPlaneDetection_mBC3012C667106D47D9429F9C8001774038A38216_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsHorizontalPlaneDetection { get; set; }
		bool L_0 = __this->get_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_set_supportsHorizontalPlaneDetection_m2BB45C7A44E14368A0FAEADA130A6F6158B1042D_inline (XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsHorizontalPlaneDetection { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsVerticalPlaneDetection_m4E3BE200E11784D049B94A054F15E4C76D29D7C6_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsVerticalPlaneDetection { get; set; }
		bool L_0 = __this->get_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_set_supportsVerticalPlaneDetection_m050259C60036A9B08459ED7BDFC06D24270927B2_inline (XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsVerticalPlaneDetection { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsArbitraryPlaneDetection_mF6CB379C9781FE8B8473949DA99196508EF91DB5_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsArbitraryPlaneDetection { get; set; }
		bool L_0 = __this->get_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_set_supportsArbitraryPlaneDetection_m2A4804EC8ED1137CB21F6589FBAE85CF01B1A5A0_inline (XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsArbitraryPlaneDetection { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsBoundaryVertices_m5BA762B342FCF81EAE6E3645D3BAF04C1E8EAAD9_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsBoundaryVertices { get; set; }
		bool L_0 = __this->get_U3CsupportsBoundaryVerticesU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_set_supportsBoundaryVertices_mDF9E00121A6509790D704D77FF0B863A99436747_inline (XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsBoundaryVertices { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsBoundaryVerticesU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsClassification_m0396A2A62F840D9E283402BFB3681A5CC19C810E_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsClassification { get; set; }
		bool L_0 = __this->get_U3CsupportsClassificationU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_set_supportsClassification_mA74FCEFD28F8CC7E1BB2E97E69DFA8E20BD0904A_inline (XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsClassification { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsClassificationU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  XRPointCloud_get_pose_m4291F970BA7E4F2DE67BB6666D365FF510B8AC39_inline (XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 * __this, const RuntimeMethod* method)
{
	{
		// public Pose pose => m_Pose;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_0 = __this->get_m_Pose_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m9A34BB7AAEFCB43E1627AA047A68C058D730EDC4_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemImplementationType_mDA4920EAF71BB44AED95212F4513B74096E4F7FD_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = __this->get_U3CsubsystemImplementationTypeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsViewportBasedRaycast_m76E31D4FF84E88050FE4E8B6C44FB6E4E71A5A3A_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsViewportBasedRaycast { get; set; }
		bool L_0 = __this->get_U3CsupportsViewportBasedRaycastU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_set_supportsViewportBasedRaycast_m573D624059387ECB8EAB5386DDA18F04A8B74A29_inline (XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsViewportBasedRaycast { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsViewportBasedRaycastU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsWorldBasedRaycast_m5242363FA90D64968F4ED236EC35973B7ABC180A_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsWorldBasedRaycast { get; set; }
		bool L_0 = __this->get_U3CsupportsWorldBasedRaycastU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_set_supportsWorldBasedRaycast_mA63CC456D0FD28CD57DD2D0C3DEB3AC0DEA60C8B_inline (XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsWorldBasedRaycast { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsWorldBasedRaycastU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Cinfo_get_supportedTrackableTypes_m0DA573866D46012B650151C7538796542A3E2C70_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method)
{
	{
		// public TrackableType supportedTrackableTypes { get; set; }
		int32_t L_0 = __this->get_U3CsupportedTrackableTypesU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_set_supportedTrackableTypes_mAFC6D42C7EFE47219C8461162392E994364BBD53_inline (XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public TrackableType supportedTrackableTypes { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CsupportedTrackableTypesU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_mA521F604882D1F4C6FD30262F3E2C3B0609BFC55_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemImplementationType_m0DA3A6C9EAC6743D765D06C5388E069FCC60DC74_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = __this->get_U3CsubsystemImplementationTypeU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsInstall_m706A828C9AE61FF74DF4640D80E52148CDF4F3AD_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsInstall { get; set; }
		bool L_0 = __this->get_U3CsupportsInstallU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor_set_supportsInstall_mE8D2939BADC8A5579685249EEA3C12617416CEF2_inline (XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsInstall { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsInstallU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsMatchFrameRate_m1E603F47BF0A28EE5E7377A28D9D2BB29BFD3B6F_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsMatchFrameRate { get; set; }
		bool L_0 = __this->get_U3CsupportsMatchFrameRateU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor_set_supportsMatchFrameRate_m9FB2B904E2E7E4EC51E2089C8DDE97463F4C031D_inline (XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsMatchFrameRate { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsMatchFrameRateU3Ek__BackingField_3(L_0);
		return;
	}
}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t CameraImagePlaneCinfo_get_dataPtr_m5281CDEFE43F3D6098315A910D52E13850B14939_inline (CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 * __this, const RuntimeMethod* method)
{
	{
		// public IntPtr dataPtr => m_DataPtr;
		intptr_t L_0 = __this->get_m_DataPtr_0();
		return (intptr_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CameraImagePlaneCinfo_get_dataLength_m564E09ED13D1303E1FE1B06E5131D455773EB79A_inline (CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 * __this, const RuntimeMethod* method)
{
	{
		// public int dataLength => m_DataLength;
		int32_t L_0 = __this->get_m_DataLength_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CameraImagePlaneCinfo_get_rowStride_m237F56D214542218ED13F6D64408895038A1789C_inline (CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 * __this, const RuntimeMethod* method)
{
	{
		// public int rowStride => m_RowStride;
		int32_t L_0 = __this->get_m_RowStride_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CameraImagePlaneCinfo_get_pixelStride_mD729A4B48D646AB2DB440E813742FA3723A94C27_inline (CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 * __this, const RuntimeMethod* method)
{
	{
		// public int pixelStride => m_PixelStride;
		int32_t L_0 = __this->get_m_PixelStride_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Cinfo_get_capabilities_m09C807B048E192438A9B0D0C17808FF5BFF81A8A_inline (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, const RuntimeMethod* method)
{
	{
		// Capabilities capabilities { get; set; }
		int32_t L_0 = __this->get_U3CcapabilitiesU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_capabilities_mB2A17E458179A44C2EACB82699FBC5B5611C7580_inline (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// Capabilities capabilities { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CcapabilitiesU3Ek__BackingField_2(L_0);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_requiresPhysicalImageDimensions_mC794914720C62ACB74173F165B3015ED9B5CA2A6_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool requiresPhysicalImageDimensions { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_3(L_0);
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
