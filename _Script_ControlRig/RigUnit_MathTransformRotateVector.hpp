#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RigUnit_MathTransformBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct RigUnit_MathTransformRotateVector : public RigUnit_MathTransformBase {
    private: char pad_8[0x58]; public:
    void* get_Transform();
    void* get_Direction();
    void* get_Result();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
