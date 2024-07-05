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
namespace _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_BoxySelectScreen {
#pragma pack(push, 1)
struct ABP_BoxySelectScreen_C : public _Script_Engine::AnimInstance {
    private: char pad_2c0[0x720]; public:
    void* get_UberGraphFrame();
    void* get_AnimGraphNode_ControlRig();
    void* get_AnimGraphNode_TransitionResult();
    void* get_AnimGraphNode_SequencePlayer_1();
    void* get_AnimGraphNode_StateResult_1();
    void* get_AnimGraphNode_ComponentToLocalSpace();
    void* get_AnimGraphNode_LocalToComponentSpace();
    void* get_AnimGraphNode_ModifyBone();
    void* get_AnimGraphNode_SequencePlayer();
    void* get_AnimGraphNode_StateResult();
    void* get_AnimGraphNode_StateMachine();
    void* get_AnimGraphNode_Root();
    static _Script_CoreUObject::Class* static_class();
    void AnimGraph(_Script_Engine::PoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_BoxySelectScreen(int32_t EntryPoint);
}; // Size: 0x9e0
#pragma pack(pop)
}
