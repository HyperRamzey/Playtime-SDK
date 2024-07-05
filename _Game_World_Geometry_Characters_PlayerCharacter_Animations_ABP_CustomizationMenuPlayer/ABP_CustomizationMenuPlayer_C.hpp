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
struct AnimMontage;
}
namespace _Script_Engine {
struct PoseLink;
}
namespace _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_CustomizationMenuPlayer {
#pragma pack(push, 1)
struct ABP_CustomizationMenuPlayer_C : public _Script_Engine::AnimInstance {
    private: char pad_2c0[0x13c0]; public:
    void* get_UberGraphFrame();
    void* get_AnimGraphNode_Root();
    void* get_AnimGraphNode_SaveCachedPose_1();
    void* get_AnimGraphNode_SequencePlayer_3();
    void* get_AnimGraphNode_Slot_1();
    void* get_AnimGraphNode_SaveCachedPose();
    void* get_AnimGraphNode_SequencePlayer_2();
    void* get_AnimGraphNode_Slot();
    void* get_AnimGraphNode_TransitionResult_3();
    void* get_AnimGraphNode_TransitionResult_2();
    void* get_AnimGraphNode_TransitionResult_1();
    void* get_AnimGraphNode_TransitionResult();
    void* get_AnimGraphNode_UseCachedPose_1();
    void* get_AnimGraphNode_StateResult_3();
    void* get_AnimGraphNode_SequencePlayer_1();
    void* get_AnimGraphNode_StateResult_2();
    void* get_AnimGraphNode_SequencePlayer();
    void* get_AnimGraphNode_StateResult_1();
    void* get_AnimGraphNode_UseCachedPose();
    void* get_AnimGraphNode_StateResult();
    void* get_AnimGraphNode_StateMachine();
    void* get_AnimGraphNode_RigidBody();
    void* get_AnimGraphNode_LocalToComponentSpace();
    void* get_AnimGraphNode_ComponentToLocalSpace();
    void* get_AnimGraphNode_ControlRig();
    bool get_Is_Customizing_Grabpack();
    void set_Is_Customizing_Grabpack(bool value);
    static _Script_CoreUObject::Class* static_class();
    void AnimGraph(_Script_Engine::PoseLink& AnimGraph);
    void PlaySelectMontage(_Script_Engine::AnimMontage* Montage);
    void ExecuteUbergraph_ABP_CustomizationMenuPlayer(int32_t EntryPoint);
}; // Size: 0x1680
#pragma pack(pop)
}
