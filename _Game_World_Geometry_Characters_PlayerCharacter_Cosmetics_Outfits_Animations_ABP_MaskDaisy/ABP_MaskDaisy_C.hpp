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
namespace _Game_World_Geometry_Characters_PlayerCharacter_Cosmetics_Outfits_Animations_ABP_MaskDaisy {
#pragma pack(push, 1)
struct ABP_MaskDaisy_C : public _Script_Engine::AnimInstance {
    private: char pad_2c0[0x6b0]; public:
    void* get_UberGraphFrame();
    void* get_AnimGraphNode_Root();
    void* get_AnimGraphNode_CopyPoseFromMesh();
    void* get_AnimGraphNode_LookAt_1();
    void* get_AnimGraphNode_LocalToComponentSpace();
    void* get_AnimGraphNode_ApplyLimits();
    void* get_AnimGraphNode_ComponentToLocalSpace();
    void* get_AnimGraphNode_LookAt();
    float& get_Eye_Aim_Multiplier();
    void* get_Camera_Location();
    static _Script_CoreUObject::Class* static_class();
    void AnimGraph(_Script_Engine::PoseLink& AnimGraph);
    void BlueprintUpdateAnimation0(float DeltaTimeX);
    void ExecuteUbergraph_ABP_MaskDaisy(int32_t EntryPoint);
}; // Size: 0x970
#pragma pack(pop)
}
