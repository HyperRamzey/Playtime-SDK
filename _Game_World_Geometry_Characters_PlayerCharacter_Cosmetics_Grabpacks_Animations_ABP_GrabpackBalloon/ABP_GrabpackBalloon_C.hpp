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
namespace _Game_World_Geometry_Characters_PlayerCharacter_Cosmetics_Grabpacks_Animations_ABP_GrabpackBalloon {
#pragma pack(push, 1)
struct ABP_GrabpackBalloon_C : public _Script_Engine::AnimInstance {
    private: char pad_2c0[0xba0]; public:
    void* get_UberGraphFrame();
    void* get_AnimGraphNode_Root();
    void* get_AnimGraphNode_RigidBody();
    void* get_AnimGraphNode_CopyPoseFromMesh();
    void* get_AnimGraphNode_LocalToComponentSpace();
    void* get_AnimGraphNode_ComponentToLocalSpace();
    void* get_AnimGraphNode_ModifyBone();
    float& get_Timer();
    static _Script_CoreUObject::Class* static_class();
    void AnimGraph(_Script_Engine::PoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GrabpackBalloon_AnimGraphNode_ModifyBone_3629C14B44E98511DF792E94695ADE0C();
    void BlueprintUpdateAnimation0(float DeltaTimeX);
    void ExecuteUbergraph_ABP_GrabpackBalloon(int32_t EntryPoint);
}; // Size: 0xe60
#pragma pack(pop)
}
