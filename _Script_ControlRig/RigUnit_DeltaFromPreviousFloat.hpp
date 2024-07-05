#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RigUnit_SimBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct RigUnit_DeltaFromPreviousFloat : public RigUnit_SimBase {
    private: char pad_8[0x10]; public:
    float& get_Value();
    float& get_Delta();
    float& get_PreviousValue();
    float& get_Cache();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
