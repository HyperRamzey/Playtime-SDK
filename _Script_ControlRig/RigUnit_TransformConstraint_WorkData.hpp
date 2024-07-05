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
struct RigUnit_TransformConstraint_WorkData {
    private: char pad_0[0x60]; public:
    void* get_ConstraintData();
    void* get_ConstraintDataToTargets();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
