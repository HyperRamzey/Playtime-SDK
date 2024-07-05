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
namespace _Game_World_Geometry_Characters_PlayerCharacter_Cosmetics_Grabpacks_Animations_ABP_GrabpackBabyLongLegs {
#pragma pack(push, 1)
struct ABP_GrabpackBabyLongLegs_C : public _Script_Engine::AnimInstance {
    private: char pad_2c0[0xa80]; public:
    void* get_UberGraphFrame();
    void* get_AnimGraphNode_Root();
    void* get_AnimGraphNode_CopyPoseFromMesh();
    void* get_AnimGraphNode_RigidBody();
    void* get_AnimGraphNode_LocalToComponentSpace();
    void* get_AnimGraphNode_ComponentToLocalSpace();
    static _Script_CoreUObject::Class* static_class();
    void AnimGraph(_Script_Engine::PoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_GrabpackBabyLongLegs(int32_t EntryPoint);
}; // Size: 0xd40
#pragma pack(pop)
}
