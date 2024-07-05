#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RigUnit.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct RigUnit_MapRange_Float : public RigUnit {
    private: char pad_8[0x18]; public:
    float& get_Value();
    float& get_MinIn();
    float& get_MaxIn();
    float& get_MinOut();
    float& get_MaxOut();
    float& get_Result();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
