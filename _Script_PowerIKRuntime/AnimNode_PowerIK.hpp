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
struct AnimNode_PowerIK : public _Script_AnimGraphRuntime::AnimNode_SkeletalControlBase {
    private: char pad_c8[0x140]; public:
    void* get_CharacterRoot();
    float& get_RootRotationMultiplier();
    void* get_BodyInertia();
    void* get_BendDirections();
    void* get_ExcludedBones();
    void* get_JointLimits();
    void* get_Effectors();
    float& get_SmoothingMaxSpeedMultiplier();
    float& get_SmoothingMaxDistanceMultiplier();
    void* get_CenterOfGravityConstraint();
    int32_t& get_MaxSquashIterations();
    int32_t& get_MaxStretchIterations();
    int32_t& get_MaxFinalIterations();
    bool get_AllowBoneTranslation();
    void set_AllowBoneTranslation(bool value);
    float& get_SolverAlpha();
    float& get_DebugDrawSize();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x208
#pragma pack(pop)
}
