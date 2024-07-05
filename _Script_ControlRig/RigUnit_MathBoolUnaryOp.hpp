#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RigUnit_MathBoolBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct RigUnit_MathBoolUnaryOp : public RigUnit_MathBoolBase {
    private: char pad_8[0x8]; public:
    bool get_Value();
    void set_Value(bool value);
    bool get_Result();
    void set_Result(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}
