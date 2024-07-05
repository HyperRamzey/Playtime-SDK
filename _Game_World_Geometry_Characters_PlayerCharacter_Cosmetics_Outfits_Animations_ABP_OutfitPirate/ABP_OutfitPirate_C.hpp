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
namespace _Game_World_Geometry_Characters_PlayerCharacter_Cosmetics_Outfits_Animations_ABP_OutfitPirate {
#pragma pack(push, 1)
struct ABP_OutfitPirate_C : public _Script_Engine::AnimInstance {
    private: char pad_2c0[0x1090]; public:
    void* get_UberGraphFrame();
    void* get_AnimGraphNode_Root();
    void* get_AnimGraphNode_RigidBody();
    void* get_AnimGraphNode_CopyPoseFromMesh();
    void* get_AnimGraphNode_LocalToComponentSpace_1();
    void* get_AnimGraphNode_ComponentToLocalSpace_2();
    void* get_AnimGraphNode_ModifyBone_1();
    void* get_AnimGraphNode_ComponentToLocalSpace_1();
    void* get_AnimGraphNode_TwoBoneIK();
    void* get_AnimGraphNode_LayeredBoneBlend();
    void* get_AnimGraphNode_CopyBone();
    void* get_AnimGraphNode_ModifyBone();
    void* get_AnimGraphNode_ComponentToLocalSpace();
    void* get_AnimGraphNode_LocalToComponentSpace();
    static _Script_CoreUObject::Class* static_class();
    void AnimGraph(_Script_Engine::PoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_OutfitPirate(int32_t EntryPoint);
}; // Size: 0x1350
#pragma pack(pop)
}
