#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RigUnitMutable.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct RigUnit_TwoBoneIKFK : public RigUnitMutable {
    private: char pad_68[0x1b8]; public:
    void* get_StartJoint();
    void* get_EndJoint();
    void* get_PoleTarget();
    float& get_Spin();
    void* get_EndEffector();
    float& get_IKBlend();
    void* get_StartJointFKTransform();
    void* get_MidJointFKTransform();
    void* get_EndJointFKTransform();
    float& get_PreviousFKIKBlend();
    void* get_StartJointIKTransform();
    void* get_MidJointIKTransform();
    void* get_EndJointIKTransform();
    int32_t& get_StartJointIndex();
    int32_t& get_MidJointIndex();
    int32_t& get_EndJointIndex();
    float& get_UpperLimbLength();
    float& get_LowerLimbLength();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x220
#pragma pack(pop)
}
