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
struct RigUnit_MathFloatRemap : public RigUnit_MathFloatBase {
    private: char pad_8[0x20]; public:
    float& get_Value();
    float& get_SourceMinimum();
    float& get_SourceMaximum();
    float& get_TargetMinimum();
    float& get_TargetMaximum();
    bool get_bClamp();
    void set_bClamp(bool value);
    float& get_Result();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
