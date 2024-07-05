#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimInstance.hpp"
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct PoseLink;
}
namespace _Game_World_Geometry_Characters_PlayerCharacter_Cosmetics_Outfits_Animations_ABP_OutfitAnimeGirl {
#pragma pack(push, 1)
struct ABP_OutfitAnimeGirl_C : public _Script_Engine::AnimInstance {
    private: char pad_2c0[0xaa0]; public:
    void* get_UberGraphFrame();
    void* get_AnimGraphNode_ComponentToLocalSpace();
    void* get_AnimGraphNode_LocalToComponentSpace();
    void* get_AnimGraphNode_CopyPoseFromMesh();
    void* get_AnimGraphNode_Root();
    void* get_AnimGraphNode_RigidBody();
    _Script_Engine::SkeletalMeshComponent*& get_Skeletal_Mesh();
    void* get_Velocity();
    static _Script_CoreUObject::Class* static_class();
    void AnimGraph(_Script_Engine::PoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_OutfitAnimeGirl(int32_t EntryPoint);
}; // Size: 0xd60
#pragma pack(pop)
}
