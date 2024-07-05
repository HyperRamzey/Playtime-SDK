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
struct RigUnit_GetControlInteger : public RigUnit {
    private: char pad_8[0x28]; public:
    void* get_Control();
    int32_t& get_IntegerValue();
    int32_t& get_Minimum();
    int32_t& get_Maximum();
    void* get_CachedControlIndex();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
