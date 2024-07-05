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
struct RigUnit_TwistBones : public RigUnit_HighlevelBaseMutable {
    private: char pad_68[0x68]; public:
    void* get_StartBone();
    void* get_EndBone();
    void* get_TwistAxis();
    void* get_PoleAxis();
    void* get_TwistEaseType();
    float& get_Weight();
    bool get_bPropagateToChildren();
    void set_bPropagateToChildren(bool value);
    void* get_WorkData();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xd0
#pragma pack(pop)
}
