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
struct RigUnit_MathTransformSelectBool : public RigUnit_MathTransformBase {
    private: char pad_8[0x98]; public:
    bool get_Condition();
    void set_Condition(bool value);
    void* get_IfTrue();
    void* get_IfFalse();
    void* get_Result();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa0
#pragma pack(pop)
}
