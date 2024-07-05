#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimInstance.hpp"
namespace _Game_Player_Huggy_BP_NetworkHuggy {
struct BP_NetworkHuggy_C;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct PoseLink;
}
namespace _Game_World_Geometry_Characters_Huggy_Animations_ABP_FPHuggy {
#pragma pack(push, 1)
struct ABP_FPHuggy_C : public _Script_Engine::AnimInstance {
    private: char pad_2c0[0x1b20]; public:
    void* get_UberGraphFrame();
    void* get_AnimGraphNode_Root();
    void* get_AnimGraphNode_TransitionResult_16();
    void* get_AnimGraphNode_TransitionResult_15();
    void* get_AnimGraphNode_TransitionResult_14();
    void* get_AnimGraphNode_TransitionResult_13();
    void* get_AnimGraphNode_TransitionResult_12();
    void* get_AnimGraphNode_TransitionResult_11();
    void* get_AnimGraphNode_TransitionResult_10();
    void* get_AnimGraphNode_TransitionResult_9();
    void* get_AnimGraphNode_TransitionResult_8();
    void* get_AnimGraphNode_TransitionResult_7();
    void* get_AnimGraphNode_TransitionResult_6();
    void* get_AnimGraphNode_TransitionResult_5();
    void* get_AnimGraphNode_TransitionResult_4();
    void* get_AnimGraphNode_TransitionResult_3();
    void* get_AnimGraphNode_SequencePlayer_7();
    void* get_AnimGraphNode_StateResult_7();
    void* get_AnimGraphNode_SequencePlayer_6();
    void* get_AnimGraphNode_StateResult_6();
    void* get_AnimGraphNode_SequencePlayer_5();
    void* get_AnimGraphNode_StateResult_5();
    void* get_AnimGraphNode_TwoWayBlend();
    void* get_AnimGraphNode_SequencePlayer_4();
    void* get_AnimGraphNode_StateResult_4();
    void* get_AnimGraphNode_TransitionResult_2();
    void* get_AnimGraphNode_ModifyBone_9();
    void* get_AnimGraphNode_ComponentToLocalSpace_3();
    void* get_AnimGraphNode_LocalToComponentSpace_3();
    void* get_AnimGraphNode_ModifyBone_8();
    void* get_AnimGraphNode_SequencePlayer_3();
    void* get_AnimGraphNode_StateResult_3();
    void* get_AnimGraphNode_SequencePlayer_2();
    void* get_AnimGraphNode_StateResult_2();
    void* get_AnimGraphNode_StateMachine_1();
    void* get_AnimGraphNode_Slot_1();
    void* get_AnimGraphNode_TransitionResult_1();
    void* get_AnimGraphNode_TransitionResult();
    void* get_AnimGraphNode_SequencePlayer_1();
    void* get_AnimGraphNode_ComponentToLocalSpace_2();
    void* get_AnimGraphNode_LocalToComponentSpace_2();
    void* get_AnimGraphNode_ModifyBone_7();
    void* get_AnimGraphNode_StateResult_1();
    void* get_AnimGraphNode_UseCachedPose_2();
    void* get_AnimGraphNode_StateResult();
    void* get_AnimGraphNode_StateMachine();
    void* get_AnimGraphNode_SaveCachedPose_1();
    void* get_AnimGraphNode_SaveCachedPose();
    void* get_AnimGraphNode_UseCachedPose_1();
    void* get_AnimGraphNode_UseCachedPose();
    void* get_AnimGraphNode_ModifyBone_6();
    void* get_AnimGraphNode_ModifyBone_5();
    void* get_AnimGraphNode_LocalToComponentSpace_1();
    void* get_AnimGraphNode_BlendListByBool();
    void* get_AnimGraphNode_ComponentToLocalSpace_1();
    void* get_AnimGraphNode_LayeredBoneBlend();
    void* get_AnimGraphNode_SequencePlayer();
    void* get_AnimGraphNode_ModifyBone_4();
    void* get_AnimGraphNode_LocalToComponentSpace();
    void* get_AnimGraphNode_ComponentToLocalSpace();
    void* get_AnimGraphNode_ModifyBone_3();
    void* get_AnimGraphNode_ModifyBone_2();
    void* get_AnimGraphNode_ModifyBone_1();
    void* get_AnimGraphNode_ModifyBone();
    void* get_AnimGraphNode_Slot();
    _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C*& get_Network_Huggy();
    _Script_Engine::SkeletalMeshComponent*& get_Network_Huggy_Mesh();
    bool get_Is_Jumpscare_Active();
    void set_Is_Jumpscare_Active(bool value);
    bool get_Is_Falling();
    void set_Is_Falling(bool value);
    bool get_Is_Moving();
    void set_Is_Moving(bool value);
    bool get_Is_Moving_Up();
    void set_Is_Moving_Up(bool value);
    bool get_Arms_Lowered();
    void set_Arms_Lowered(bool value);
    float& get_Delta_Seconds();
    bool get_Is_Carrying();
    void set_Is_Carrying(bool value);
    float& get_Carrying_Weight();
    bool get_Is_Bashing();
    void set_Is_Bashing(bool value);
    static _Script_CoreUObject::Class* static_class();
    void AnimGraph(_Script_Engine::PoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPHuggy_AnimGraphNode_ModifyBone_1576C72845C44830BAD1269FE61158BF();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPHuggy_AnimGraphNode_ModifyBone_8EBA2174429BCBFB2C54A08D05E0047C();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPHuggy_AnimGraphNode_ModifyBone_52DD4A314628E211B9223B8CA325E209();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPHuggy_AnimGraphNode_ModifyBone_F16A01FC49FC35CB978745B3747CEF83();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPHuggy_AnimGraphNode_TransitionResult_6296BD824734CACDCCC119830BAA49E8();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPHuggy_AnimGraphNode_ModifyBone_C84364AC4A8BFF7E5BD3AD9CBCA6DA6D();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPHuggy_AnimGraphNode_TransitionResult_07AC921640A528DCB88A118692C1EC28();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPHuggy_AnimGraphNode_TransitionResult_B4E10B944E9C08B185B9AFAA3D9E735D();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPHuggy_AnimGraphNode_TransitionResult_55C5F44F45242B08ED0504A8A4888C5C();
    void BlueprintUpdateAnimation0(float DeltaTimeX);
    void Play_FP_Attack_Animation();
    void Play_Jumpscare_Animation();
    void Play_FP_Bash_Animation();
    void AnimNotify_BashCameraShake();
    void ExecuteUbergraph_ABP_FPHuggy(int32_t EntryPoint);
}; // Size: 0x1de0
#pragma pack(pop)
}
