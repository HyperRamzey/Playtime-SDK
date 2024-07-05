#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AnimGraphRuntime\AnimNode_SkeletalControlBase.hpp"
namespace _Script_Engine {
struct CurveFloat;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_PowerIKRuntime {
#pragma pack(push, 1)
struct AnimNode_PowerIK_Walk : public _Script_AnimGraphRuntime::AnimNode_SkeletalControlBase {
    private: char pad_c8[0x180]; public:
    void* get_CharacterRoot();
    float& get_RootRotationMultiplier();
    void* get_BodyInertia();
    void* get_Limbs();
    float& get_StepMaxReachDistance();
    float& get_StepDurationMultiplier();
    float& get_StepHeightMultiplier();
    _Script_Engine::CurveFloat*& get_StepHeightCurve();
    _Script_Engine::CurveFloat*& get_StepSpeedCurve();
    float& get_TeleportDistance();
    bool get_PrintTeleportWarning();
    void set_PrintTeleportWarning(bool value);
    void* get_CollisionChannel();
    bool get_TraceComplex();
    void set_TraceComplex(bool value);
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
}; // Size: 0x248
#pragma pack(pop)
}
