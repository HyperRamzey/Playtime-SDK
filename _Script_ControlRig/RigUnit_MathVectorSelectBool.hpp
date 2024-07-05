#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RigUnit_MathVectorBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct RigUnit_MathVectorSelectBool : public RigUnit_MathVectorBase {
    private: char pad_8[0x28]; public:
    bool get_Condition();
    void set_Condition(bool value);
    void* get_IfTrue();
    void* get_IfFalse();
    void* get_Result();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
