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
namespace _Game_World_Geometry_Characters_MommyLongLegs_Animations_ABP_MommySelectScreen {
#pragma pack(push, 1)
struct ABP_MommySelectScreen_C : public _Script_Engine::AnimInstance {
    private: char pad_2c0[0x1270]; public:
    void* get_UberGraphFrame();
    void* get_AnimGraphNode_Root();
    void* get_AnimGraphNode_ControlRig_1();
    void* get_AnimGraphNode_ControlRig();
    void* get_AnimGraphNode_TransitionResult_1();
    void* get_AnimGraphNode_TransitionResult();
    void* get_AnimGraphNode_SequencePlayer_1();
    void* get_AnimGraphNode_StateResult_2();
    void* get_AnimGraphNode_SequencePlayer();
    void* get_AnimGraphNode_StateResult_1();
    void* get_AnimGraphNode_SequenceEvaluator();
    void* get_AnimGraphNode_StateResult();
    void* get_AnimGraphNode_StateMachine();
    void* get_AnimGraphNode_RigidBody();
    void* get_AnimGraphNode_LocalToComponentSpace();
    void* get_AnimGraphNode_ComponentToLocalSpace();
    bool get_Can_Begin_Transition();
    void set_Can_Begin_Transition(bool value);
    static _Script_CoreUObject::Class* static_class();
    void AnimGraph(_Script_Engine::PoseLink& AnimGraph);
    void BlueprintUpdateAnimation0(float DeltaTimeX);
    void ExecuteUbergraph_ABP_MommySelectScreen(int32_t EntryPoint);
}; // Size: 0x1530
#pragma pack(pop)
}
