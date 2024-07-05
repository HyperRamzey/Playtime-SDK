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
namespace _Game_World_Geometry_Characters_PlayerCharacter_Cosmetics_Outfits_Animations_ABP_OutfitCRT {
#pragma pack(push, 1)
struct ABP_OutfitCRT_C : public _Script_Engine::AnimInstance {
    private: char pad_2c0[0x360]; public:
    void* get_UberGraphFrame();
    void* get_AnimGraphNode_Root();
    void* get_AnimGraphNode_CopyPoseFromMesh();
    void* get_AnimGraphNode_ModifyBone();
    void* get_AnimGraphNode_LocalToComponentSpace();
    void* get_AnimGraphNode_ComponentToLocalSpace();
    float& get_Timer();
    static _Script_CoreUObject::Class* static_class();
    void AnimGraph(_Script_Engine::PoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_OutfitCRT_AnimGraphNode_ModifyBone_9453752741878B0D178704BD5F26142D();
    void BlueprintUpdateAnimation0(float DeltaTimeX);
    void ExecuteUbergraph_ABP_OutfitCRT(int32_t EntryPoint);
}; // Size: 0x620
#pragma pack(pop)
}
