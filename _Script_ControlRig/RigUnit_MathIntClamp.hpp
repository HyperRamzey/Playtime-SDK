#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RigUnit_MathIntBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct RigUnit_MathIntClamp : public RigUnit_MathIntBase {
    private: char pad_8[0x10]; public:
    int32_t& get_Value();
    int32_t& get_Minimum();
    int32_t& get_Maximum();
    int32_t& get_Result();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
