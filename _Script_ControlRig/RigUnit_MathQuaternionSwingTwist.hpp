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
struct RigUnit_MathQuaternionSwingTwist : public RigUnit_MathQuaternionBase {
    private: char pad_8[0x48]; public:
    void* get_Input();
    void* get_TwistAxis();
    void* get_Swing();
    void* get_Twist();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
