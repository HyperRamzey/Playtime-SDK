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
namespace _Game_Gameplay_Interaction_BP_Locker {
struct BP_Locker_C;
}
namespace _Game_World_Geometry_Characters_Camera_Animations_ABP_LockerCamera {
#pragma pack(push, 1)
struct ABP_LockerCamera_C : public _Script_Engine::AnimInstance {
    private: char pad_2c0[0x540]; public:
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
    void* get_AnimGraphNode_SequenceEvaluator_1();
    void* get_AnimGraphNode_StateResult_4();
    void* get_AnimGraphNode_SequenceEvaluator();
    void* get_AnimGraphNode_StateResult_3();
    void* get_AnimGraphNode_SequencePlayer_2();
    void* get_AnimGraphNode_StateResult_2();
    void* get_AnimGraphNode_SequencePlayer_1();
    void* get_AnimGraphNode_StateResult_1();
    void* get_AnimGraphNode_SequencePlayer();
    void* get_AnimGraphNode_StateResult();
    void* get_AnimGraphNode_StateMachine();
    bool get_IsEntering();
    void set_IsEntering(bool value);
    bool get_IsInterrupted();
    void set_IsInterrupted(bool value);
    bool get_IsExiting();
    void set_IsExiting(bool value);
    bool get_IsTakeout();
    void set_IsTakeout(bool value);
    static _Script_CoreUObject::Class* static_class();
    void AnimGraph(_Script_Engine::PoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LockerCamera_AnimGraphNode_TransitionResult_AC38B9A64AB3D7DE9ADF53B53137FC4F();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LockerCamera_AnimGraphNode_TransitionResult_B355280E44F0BE2E3CF9FE89E2590B32();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LockerCamera_AnimGraphNode_TransitionResult_A135CD6043F988DD1EFAB38CF7B8817F();
    void BlueprintUpdateAnimation0(float DeltaTimeX);
    void CustomEvent_0(_Game_Gameplay_Interaction_BP_Locker::BP_Locker_C* Locker_Ref);
    void ExecuteUbergraph_ABP_LockerCamera(int32_t EntryPoint);
}; // Size: 0x800
#pragma pack(pop)
}
