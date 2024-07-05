#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_ControlRig\RigUnitMutable.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_PowerIKRuntime {
#pragma pack(push, 1)
struct RigUnit_PowerIK : public _Script_ControlRig::RigUnitMutable {
    private: char pad_68[0x130]; public:
    void* get_CharacterRoot();
    float& get_RootRotationMultiplier();
    void* get_Effectors();
    void* get_BendDirections();
    void* get_ExcludedBones();
    void* get_JointLimits();
    void* get_CenterOfGravityConstraint();
    void* get_Inertia();
    int32_t& get_MaxSquashIterations();
    int32_t& get_MaxStretchIterations();
    int32_t& get_MaxFinalIterations();
    bool get_AllowBoneTranslation();
    void set_AllowBoneTranslation(bool value);
    float& get_SolverAlpha();
    void* get_Core();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x198
#pragma pack(pop)
}
