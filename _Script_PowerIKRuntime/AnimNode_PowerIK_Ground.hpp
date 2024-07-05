#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AnimGraphRuntime\AnimNode_SkeletalControlBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_PowerIKRuntime {
#pragma pack(push, 1)
struct AnimNode_PowerIK_Ground : public _Script_AnimGraphRuntime::AnimNode_SkeletalControlBase {
    private: char pad_c8[0x2c8]; public:
    void* get_CharacterRoot();
    void* get_BodyInertia();
    void* get_Feet();
    float& get_FeetDeltaSmoothSpeed();
    float& get_RootRotationMultiplier();
    void* get_GroundCollision();
    void* get_GroundSlope();
    void* get_BendDirections();
    void* get_ExcludedBones();
    void* get_JointLimits();
    int32_t& get_MaxSquashIterations();
    int32_t& get_MaxStretchIterations();
    int32_t& get_MaxFinalIterations();
    bool get_AllowBoneTranslation();
    void set_AllowBoneTranslation(bool value);
    float& get_SolverAlpha();
    float& get_DebugDrawSize();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x390
#pragma pack(pop)
}
