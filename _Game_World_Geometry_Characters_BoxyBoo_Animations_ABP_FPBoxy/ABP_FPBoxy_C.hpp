#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimInstance.hpp"
namespace _Game_Player_Boxy_BP_NetworkBoxy {
struct BP_NetworkBoxy_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct PoseLink;
}
namespace _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_FPBoxy {
#pragma pack(push, 1)
struct ABP_FPBoxy_C : public _Script_Engine::AnimInstance {
    private: char pad_2c0[0x32f0]; public:
    void* get_UberGraphFrame();
    void* get_AnimGraphNode_TransitionResult_21();
    void* get_AnimGraphNode_TransitionResult_20();
    void* get_AnimGraphNode_TransitionResult_19();
    void* get_AnimGraphNode_TransitionResult_18();
    void* get_AnimGraphNode_TransitionResult_17();
    void* get_AnimGraphNode_TransitionResult_16();
    void* get_AnimGraphNode_TransitionResult_15();
    void* get_AnimGraphNode_SequencePlayer_9();
    void* get_AnimGraphNode_StateResult_11();
    void* get_AnimGraphNode_TransitionResult_14();
    void* get_AnimGraphNode_SequencePlayer_8();
    void* get_AnimGraphNode_StateResult_10();
    void* get_AnimGraphNode_SequencePlayer_7();
    void* get_AnimGraphNode_StateResult_9();
    void* get_AnimGraphNode_StateMachine_3();
    void* get_AnimGraphNode_SaveCachedPose_5();
    void* get_AnimGraphNode_TransitionResult_13();
    void* get_AnimGraphNode_TransitionResult_12();
    void* get_AnimGraphNode_TransitionResult_11();
    void* get_AnimGraphNode_TransitionResult_10();
    void* get_AnimGraphNode_TransitionResult_9();
    void* get_AnimGraphNode_TransitionResult_8();
    void* get_AnimGraphNode_TransitionResult_7();
    void* get_AnimGraphNode_SequencePlayer_6();
    void* get_AnimGraphNode_StateResult_8();
    void* get_AnimGraphNode_SequencePlayer_5();
    void* get_AnimGraphNode_StateResult_7();
    void* get_AnimGraphNode_SequencePlayer_4();
    void* get_AnimGraphNode_StateResult_6();
    void* get_AnimGraphNode_TransitionResult_6();
    void* get_AnimGraphNode_UseCachedPose_5();
    void* get_AnimGraphNode_StateResult_5();
    void* get_AnimGraphNode_StateMachine_2();
    void* get_AnimGraphNode_SaveCachedPose_4();
    void* get_AnimGraphNode_TransitionResult_5();
    void* get_AnimGraphNode_TransitionResult_4();
    void* get_AnimGraphNode_TransitionResult_3();
    void* get_AnimGraphNode_TransitionResult_2();
    void* get_AnimGraphNode_SequencePlayer_3();
    void* get_AnimGraphNode_StateResult_4();
    void* get_AnimGraphNode_SequencePlayer_2();
    void* get_AnimGraphNode_StateResult_3();
    void* get_AnimGraphNode_UseCachedPose_4();
    void* get_AnimGraphNode_StateResult_2();
    void* get_AnimGraphNode_StateMachine_1();
    void* get_AnimGraphNode_SaveCachedPose_3();
    void* get_AnimGraphNode_UseCachedPose_3();
    void* get_AnimGraphNode_Slot();
    void* get_AnimGraphNode_ControlRig_3();
    void* get_AnimGraphNode_SaveCachedPose_2();
    void* get_AnimGraphNode_LayeredBoneBlend();
    void* get_AnimGraphNode_LocalToComponentSpace_1();
    void* get_AnimGraphNode_ComponentToLocalSpace_1();
    void* get_AnimGraphNode_LookAt_3();
    void* get_AnimGraphNode_LookAt_2();
    void* get_AnimGraphNode_LookAt_1();
    void* get_AnimGraphNode_LookAt();
    void* get_AnimGraphNode_LocalToComponentSpace();
    void* get_AnimGraphNode_SequenceEvaluator_1();
    void* get_AnimGraphNode_ComponentToLocalSpace();
    void* get_AnimGraphNode_ModifyBone_1();
    void* get_AnimGraphNode_ControlRig_2();
    void* get_AnimGraphNode_ControlRig_1();
    void* get_AnimGraphNode_BoneDrivenController_1();
    void* get_AnimGraphNode_BoneDrivenController();
    void* get_AnimGraphNode_UseCachedPose_2();
    void* get_AnimGraphNode_ControlRig();
    void* get_AnimGraphNode_SequenceEvaluator();
    void* get_AnimGraphNode_SequencePlayer_1();
    void* get_AnimGraphNode_BlendListByBool_1();
    void* get_AnimGraphNode_BlendListByBool();
    void* get_AnimGraphNode_UseCachedPose_1();
    void* get_AnimGraphNode_SaveCachedPose_1();
    void* get_AnimGraphNode_ModifyBone();
    void* get_AnimGraphNode_Root();
    void* get_AnimGraphNode_TransitionResult_1();
    void* get_AnimGraphNode_TransitionResult();
    void* get_AnimGraphNode_SequencePlayer();
    void* get_AnimGraphNode_StateResult_1();
    void* get_AnimGraphNode_UseCachedPose();
    void* get_AnimGraphNode_StateResult();
    void* get_AnimGraphNode_StateMachine();
    void* get_AnimGraphNode_SaveCachedPose();
    float& get_Master_Timer();
    float& get_Delta_Seconds();
    _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C*& get_Network_Boxy();
    bool get_Is_Moving();
    void set_Is_Moving(bool value);
    bool get_Is_Charging_Launch();
    void set_Is_Charging_Launch(bool value);
    bool get_Is_Crouching();
    void set_Is_Crouching(bool value);
    bool get_Should_Lower_Hands();
    void set_Should_Lower_Hands(bool value);
    bool get_Is_Falling();
    void set_Is_Falling(bool value);
    float& get_Vertical_Movement_Speed();
    void* get_Fist_Position();
    bool get_Is_Fist_Extended();
    void set_Is_Fist_Extended(bool value);
    bool get_Is_Fist_Retracting();
    void set_Is_Fist_Retracting(bool value);
    void* get_World_Location();
    bool get_Is_Jumpscare_Active();
    void set_Is_Jumpscare_Active(bool value);
    static _Script_CoreUObject::Class* static_class();
    void AnimGraph(_Script_Engine::PoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPBoxy_AnimGraphNode_LookAt_E90D19AB441FF4B5E860D2A76DC400C0();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPBoxy_AnimGraphNode_LookAt_1E6A34CD4A011365E6CAB4B5F6E4A203();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPBoxy_AnimGraphNode_TransitionResult_10E46F7F4B7B739015C37687D1EDCA35();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPBoxy_AnimGraphNode_TransitionResult_7E983C9D40E9007348813B947340ECEB();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPBoxy_AnimGraphNode_TransitionResult_D273E2524D0788C2D89B8CAAE5412883();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPBoxy_AnimGraphNode_TransitionResult_DACC41BE44D61149C3B970A0490A8CAE();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPBoxy_AnimGraphNode_TransitionResult_AD76152F448C9C5B6126D5AA6DAD6E3B();
    void BlueprintUpdateAnimation0(float DeltaTimeX);
    void PlayAttackAnimation(bool Left);
    void Play_Jumpscare_Animation();
    void ExecuteUbergraph_ABP_FPBoxy(int32_t EntryPoint);
}; // Size: 0x35b0
#pragma pack(pop)
}
