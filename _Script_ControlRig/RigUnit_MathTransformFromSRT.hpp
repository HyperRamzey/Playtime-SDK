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
struct RigUnit_MathTransformFromSRT : public RigUnit_MathTransformBase {
    private: char pad_8[0x88]; public:
    void* get_Location();
    void* get_Rotation();
    void* get_RotationOrder();
    void* get_Scale();
    void* get_Transform();
    void* get_EulerTransform();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x90
#pragma pack(pop)
}
