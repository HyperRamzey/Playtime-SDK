#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RigUnit_MathBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct RigUnit_MathQuaternionBase : public RigUnit_MathBase {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x8
#pragma pack(pop)
}
