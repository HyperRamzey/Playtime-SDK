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
namespace _Game_World_Depricated_Meshes_Characters_Mommy_LongLegs_Arms_Animations_MommyArms_AnimBlueprint {
#pragma pack(push, 1)
struct MommyArms_AnimBlueprint_C : public _Script_Engine::AnimInstance {
    private: char pad_2c0[0x450]; public:
    void* get_UberGraphFrame();
    void* get_AnimGraphNode_Root();
    void* get_AnimGraphNode_SequencePlayer();
    void* get_AnimGraphNode_StateResult();
    void* get_AnimGraphNode_StateMachine();
    void* get_AnimGraphNode_SaveCachedPose();
    void* get_AnimGraphNode_UseCachedPose_1();
    void* get_AnimGraphNode_Slot();
    void* get_AnimGraphNode_LayeredBoneBlend();
    void* get_AnimGraphNode_UseCachedPose();
    float& get_Speed();
    static _Script_CoreUObject::Class* static_class();
    void AnimGraph(_Script_Engine::PoseLink& AnimGraph);
    void BlueprintUpdateAnimation0(float DeltaTimeX);
    void ExecuteUbergraph_MommyArms_AnimBlueprint(int32_t EntryPoint);
}; // Size: 0x710
#pragma pack(pop)
}
