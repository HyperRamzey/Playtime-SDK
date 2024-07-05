#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RigUnit_MathFloatBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct RigUnit_MathFloatLess : public RigUnit_MathFloatBase {
    private: char pad_8[0x10]; public:
    float& get_A();
    float& get_B();
    bool get_Result();
    void set_Result(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
