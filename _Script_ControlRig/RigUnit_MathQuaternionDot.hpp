#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RigUnit_MathQuaternionBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct RigUnit_MathQuaternionDot : public RigUnit_MathQuaternionBase {
    private: char pad_8[0x38]; public:
    void* get_A();
    void* get_B();
    float& get_Result();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}