#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct RigUnit_AimConstraint_WorkData {
    private: char pad_0[0x10]; public:
    void* get_ConstraintData();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}