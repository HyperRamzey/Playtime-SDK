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
struct RigUnit_FABRIK : public RigUnit_HighlevelBaseMutable {
    private: char pad_68[0x98]; public:
    void* get_StartBone();
    void* get_EffectorBone();
    void* get_EffectorTransform();
    float& get_Precision();
    float& get_Weight();
    bool get_bPropagateToChildren();
    void set_bPropagateToChildren(bool value);
    int32_t& get_MaxIterations();
    void* get_WorkData();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x100
#pragma pack(pop)
}
