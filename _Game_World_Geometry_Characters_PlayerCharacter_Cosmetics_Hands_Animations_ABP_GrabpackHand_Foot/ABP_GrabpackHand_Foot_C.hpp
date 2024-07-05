#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimInstance.hpp"
namespace _Script_Engine {
struct Pawn;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct PoseLink;
}
namespace _Game_World_Geometry_Characters_PlayerCharacter_Cosmetics_Hands_Animations_ABP_GrabpackHand_Foot {
#pragma pack(push, 1)
struct ABP_GrabpackHand_Foot_C : public _Script_Engine::AnimInstance {
    private: char pad_2c0[0xa90]; public:
    void* get_UberGraphFrame();
    void* get_AnimGraphNode_Root();
    void* get_AnimGraphNode_RigidBody();
    void* get_AnimGraphNode_ComponentToLocalSpace();
    void* get_AnimGraphNode_CopyPoseFromMesh();
    void* get_AnimGraphNode_LocalToComponentSpace();
    _Script_Engine::Pawn*& get_NewVar_0();
    static _Script_CoreUObject::Class* static_class();
    void AnimGraph(_Script_Engine::PoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_GrabpackHand_Foot(int32_t EntryPoint);
}; // Size: 0xd50
#pragma pack(pop)
}
