#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimInstance.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct PoseLink;
}
namespace _Game_World_Depricated_Meshes_Characters_TrainingDummy_Animations_TrainingDummyAnimBP {
#pragma pack(push, 1)
struct TrainingDummyAnimBP_C : public _Script_Engine::AnimInstance {
    private: char pad_2c0[0xd90]; public:
    void* get_UberGraphFrame();
    void* get_AnimGraphNode_Root();
    void* get_AnimGraphNode_TransitionResult_7();
    void* get_AnimGraphNode_TransitionResult_6();
    void* get_AnimGraphNode_TransitionResult_5();
    void* get_AnimGraphNode_TransitionResult_4();
    void* get_AnimGraphNode_TransitionResult_3();
    void* get_AnimGraphNode_TransitionResult_2();
    void* get_AnimGraphNode_TransitionResult_1();
    void* get_AnimGraphNode_TransitionResult();
    void* get_AnimGraphNode_SequencePlayer();
    void* get_AnimGraphNode_StateResult_4();
    void* get_AnimGraphNode_BlendSpacePlayer_3();
    void* get_AnimGraphNode_StateResult_3();
    void* get_AnimGraphNode_BlendSpacePlayer_2();
    void* get_AnimGraphNode_RotationOffsetBlendSpace_2();
    void* get_AnimGraphNode_StateResult_2();
    void* get_AnimGraphNode_RotationOffsetBlendSpace_1();
    void* get_AnimGraphNode_BlendSpacePlayer_1();
    void* get_AnimGraphNode_StateResult_1();
    void* get_AnimGraphNode_BlendSpacePlayer();
    void* get_AnimGraphNode_RotationOffsetBlendSpace();
    void* get_AnimGraphNode_StateResult();
    void* get_AnimGraphNode_StateMachine();
    void* get_AnimGraphNode_SaveCachedPose();
    void* get_AnimGraphNode_UseCachedPose();
    float& get_AnimationDeltaTime();
    float& get_ForwardMovement();
    float& get_RightMovement();
    bool get_Falling();
    void set_Falling(bool value);
    float& get_LookUp();
    bool get_Crouched();
    void set_Crouched(bool value);
    bool get_NeedsRevived();
    void set_NeedsRevived(bool value);
    bool get_IsDashing();
    void set_IsDashing(bool value);
    float& get_DashingAlpha();
    static _Script_CoreUObject::Class* static_class();
    void AnimGraph(_Script_Engine::PoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_TrainingDummyAnimBP_AnimGraphNode_BlendSpacePlayer_9600D0A348109ACF0D209F8B08EE219C();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_TrainingDummyAnimBP_AnimGraphNode_BlendSpacePlayer_6EF2D55444EC7EB5C2A862B4A1BC470C();
    void BlueprintUpdateAnimation0(float DeltaTimeX);
    void ExecuteUbergraph_TrainingDummyAnimBP(int32_t EntryPoint);
}; // Size: 0x1050
#pragma pack(pop)
}
