#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimInstance.hpp"
namespace _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy {
struct BP_NetworkMommy_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct PoseLink;
}
namespace _Game_World_Geometry_Characters_MommyLongLegs_Animations_ABP_FPMommy {
#pragma pack(push, 1)
struct ABP_FPMommy_C : public _Script_Engine::AnimInstance {
    private: char pad_2c0[0x2ea0]; public:
    void* get_UberGraphFrame();
    void* get_AnimGraphNode_Root();
    void* get_AnimGraphNode_TransitionResult_15();
    void* get_AnimGraphNode_TransitionResult_14();
    void* get_AnimGraphNode_TransitionResult_13();
    void* get_AnimGraphNode_TransitionResult_12();
    void* get_AnimGraphNode_TransitionResult_11();
    void* get_AnimGraphNode_TransitionResult_10();
    void* get_AnimGraphNode_TransitionResult_9();
    void* get_AnimGraphNode_TransitionResult_8();
    void* get_AnimGraphNode_SequencePlayer_11();
    void* get_AnimGraphNode_StateResult_11();
    void* get_AnimGraphNode_SequencePlayer_10();
    void* get_AnimGraphNode_StateResult_10();
    void* get_AnimGraphNode_SequencePlayer_9();
    void* get_AnimGraphNode_StateResult_9();
    void* get_AnimGraphNode_StateResult_8();
    void* get_AnimGraphNode_TransitionResult_7();
    void* get_AnimGraphNode_SequencePlayer_8();
    void* get_AnimGraphNode_StateResult_7();
    void* get_AnimGraphNode_SequencePlayer_7();
    void* get_AnimGraphNode_StateResult_6();
    void* get_AnimGraphNode_StateMachine_2();
    void* get_AnimGraphNode_ModifyBone_5();
    void* get_AnimGraphNode_SaveCachedPose_3();
    void* get_AnimGraphNode_LocalToComponentSpace_3();
    void* get_AnimGraphNode_LayeredBoneBlend_5();
    void* get_AnimGraphNode_ComponentToLocalSpace_3();
    void* get_AnimGraphNode_Slot();
    void* get_AnimGraphNode_TransitionResult_6();
    void* get_AnimGraphNode_TransitionResult_5();
    void* get_AnimGraphNode_BlendBoneByChannel_1();
    void* get_AnimGraphNode_UseCachedPose_8();
    void* get_AnimGraphNode_SequencePlayer_6();
    void* get_AnimGraphNode_LayeredBoneBlend_4();
    void* get_AnimGraphNode_BlendBoneByChannel();
    void* get_AnimGraphNode_UseCachedPose_7();
    void* get_AnimGraphNode_ComponentToLocalSpace_2();
    void* get_AnimGraphNode_LocalToComponentSpace_2();
    void* get_AnimGraphNode_ModifyBone_4();
    void* get_AnimGraphNode_SequencePlayer_5();
    void* get_AnimGraphNode_StateResult_5();
    void* get_AnimGraphNode_UseCachedPose_6();
    void* get_AnimGraphNode_StateResult_4();
    void* get_AnimGraphNode_StateMachine_1();
    void* get_AnimGraphNode_SaveCachedPose_2();
    void* get_AnimGraphNode_UseCachedPose_5();
    void* get_AnimGraphNode_LookAt_2();
    void* get_AnimGraphNode_SequencePlayer_4();
    void* get_AnimGraphNode_LocalToComponentSpace_1();
    void* get_AnimGraphNode_LookAt_1();
    void* get_AnimGraphNode_LookAt();
    void* get_AnimGraphNode_ModifyBone_3();
    void* get_AnimGraphNode_ComponentToLocalSpace_1();
    void* get_AnimGraphNode_ControlRig_1();
    void* get_AnimGraphNode_BlendListByBool_1();
    void* get_AnimGraphNode_LayeredBoneBlend_3();
    void* get_AnimGraphNode_LayeredBoneBlend_2();
    void* get_AnimGraphNode_SequenceEvaluator_1();
    void* get_AnimGraphNode_UseCachedPose_4();
    void* get_AnimGraphNode_SaveCachedPose_1();
    void* get_AnimGraphNode_UseCachedPose_3();
    void* get_AnimGraphNode_UseCachedPose_2();
    void* get_AnimGraphNode_TransitionResult_4();
    void* get_AnimGraphNode_TransitionResult_3();
    void* get_AnimGraphNode_TransitionResult_2();
    void* get_AnimGraphNode_TransitionResult_1();
    void* get_AnimGraphNode_TransitionResult();
    void* get_AnimGraphNode_SequencePlayer_3();
    void* get_AnimGraphNode_StateResult_3();
    void* get_AnimGraphNode_SequenceEvaluator();
    void* get_AnimGraphNode_StateResult_2();
    void* get_AnimGraphNode_SequencePlayer_2();
    void* get_AnimGraphNode_StateResult_1();
    void* get_AnimGraphNode_UseCachedPose_1();
    void* get_AnimGraphNode_StateResult();
    void* get_AnimGraphNode_StateMachine();
    void* get_AnimGraphNode_ModifyBone_2();
    void* get_AnimGraphNode_SaveCachedPose();
    void* get_AnimGraphNode_BlendListByBool();
    void* get_AnimGraphNode_UseCachedPose();
    void* get_AnimGraphNode_SequencePlayer_1();
    void* get_AnimGraphNode_LayeredBoneBlend_1();
    void* get_AnimGraphNode_ModifyBone_1();
    void* get_AnimGraphNode_LocalToComponentSpace();
    void* get_AnimGraphNode_ComponentToLocalSpace();
    void* get_AnimGraphNode_ControlRig();
    void* get_AnimGraphNode_ModifyBone();
    void* get_AnimGraphNode_LayeredBoneBlend();
    void* get_AnimGraphNode_SequencePlayer();
    _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C*& get_Network_Mommy();
    float& get_Delta_Seconds();
    float& get_Horizontal_Speed();
    bool get_Moving_Horizontally();
    void set_Moving_Horizontally(bool value);
    bool get_Vertical_Speed();
    void set_Vertical_Speed(bool value);
    bool get_Is_Falling();
    void set_Is_Falling(bool value);
    bool get_Is_Grappling();
    void set_Is_Grappling(bool value);
    void* get_Grapple_Position();
    float& get_Grapple_Weight();
    bool get_Is_Grapple_Pulling();
    void set_Is_Grapple_Pulling(bool value);
    bool get_Is_Shooting_Webs();
    void set_Is_Shooting_Webs(bool value);
    bool get_Is_Carrying();
    void set_Is_Carrying(bool value);
    void* get_Carrying_Position();
    bool get_Is_Jumpscare_Active();
    void set_Is_Jumpscare_Active(bool value);
    static _Script_CoreUObject::Class* static_class();
    void AnimGraph(_Script_Engine::PoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPMommy_AnimGraphNode_LayeredBoneBlend_C3DFCD7746DC2BB16D2B66BDB203BE88();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPMommy_AnimGraphNode_TransitionResult_53E4F11B4FAC46951501C9B20CC06EF1();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPMommy_AnimGraphNode_TransitionResult_9DF6CF234AD9AB6FDB16489B58A1F18B();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPMommy_AnimGraphNode_TransitionResult_7B5B97C448F16B0CDE7E50B725813C3E();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPMommy_AnimGraphNode_TransitionResult_9F274FE14B832B51F42D17B937DE7642();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPMommy_AnimGraphNode_TransitionResult_BAAE38AD4B8ADAEE4CA94CAAD9FCE516();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPMommy_AnimGraphNode_TransitionResult_6E3135DB4E670B86AD355AAE509DE1B8();
    void BlueprintUpdateAnimation0(float DeltaTimeX);
    void Play_Swipe_Animation(bool Is_Left_Hand);
    void Play_Jumpscare_Animation();
    void ExecuteUbergraph_ABP_FPMommy(int32_t EntryPoint);
}; // Size: 0x3160
#pragma pack(pop)
}
