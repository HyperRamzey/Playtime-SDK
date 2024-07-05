#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RigUnitMutable.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct RigUnit_SetControlInteger : public RigUnitMutable {
    private: char pad_68[0x28]; public:
    void* get_Control();
    int32_t& get_Weight();
    int32_t& get_IntegerValue();
    void* get_CachedControlIndex();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x90
#pragma pack(pop)
}