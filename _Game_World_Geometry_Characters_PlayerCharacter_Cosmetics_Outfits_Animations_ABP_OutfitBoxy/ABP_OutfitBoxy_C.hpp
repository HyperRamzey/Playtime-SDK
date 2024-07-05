#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimInstance.hpp"
#include "..\_Script_Engine\PoseLink.hpp"
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_World_Geometry_Characters_PlayerCharacter_Cosmetics_Outfits_Animations_ABP_OutfitBoxy {
#pragma pack(push, 1)
struct ABP_OutfitBoxy_C : public _Script_Engine::AnimInstance {
    private: char pad_2c0[0x1210]; public:
    void* get_UberGraphFrame();
    void* get_AnimGraphNode_ComponentToLocalSpace_1();
    void* get_AnimGraphNode_SaveCachedPose();
    void* get_AnimGraphNode_ApplyLimits();
    void* get_AnimGraphNode_LookAt();
    void* get_AnimGraphNode_LocalToComponentSpace_1();
    void* get_AnimGraphNode_SpringBone();
    void* get_AnimGraphNode_CopyPoseFromMesh();
    void* get_AnimGraphNode_Root();
    void* get_AnimGraphNode_RigidBody();
    void* get_AnimGraphNode_LocalToComponentSpace();
    void* get_AnimGraphNode_ComponentToLocalSpace();
    void* get_AnimGraphNode_LinkedInputPose();
    void* get_AnimGraphNode_ModifyBone();
    _Script_Engine::SkeletalMeshComponent*& get_Skeletal_Mesh();
    float& get_Timer();
    static _Script_CoreUObject::Class* static_class();
    void AnimGraph(_Script_Engine::PoseLink InPose, _Script_Engine::PoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_OutfitBoxy_AnimGraphNode_ModifyBone_97C35587499CAF00A6BD8FBA1443FE98();
    void BlueprintUpdateAnimation0(float DeltaTimeX);
    void ExecuteUbergraph_ABP_OutfitBoxy(int32_t EntryPoint);
}; // Size: 0x14d0
#pragma pack(pop)
}
