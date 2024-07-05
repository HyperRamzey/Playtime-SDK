#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RigUnit_HighlevelBaseMutable.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct RigUnit_CCDIK : public RigUnit_HighlevelBaseMutable {
    private: char pad_68[0xd8]; public:
    void* get_StartBone();
    void* get_EffectorBone();
    void* get_EffectorTransform();
    float& get_Precision();
    float& get_Weight();
    int32_t& get_MaxIterations();
    bool get_bStartFromTail();
    void set_bStartFromTail(bool value);
    float& get_BaseRotationLimit();
    void* get_RotationLimits();
    bool get_bPropagateToChildren();
    void set_bPropagateToChildren(bool value);
    void* get_WorkData();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x140
#pragma pack(pop)
}
