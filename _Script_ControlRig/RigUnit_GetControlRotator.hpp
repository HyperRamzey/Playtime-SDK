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
struct RigUnit_GetControlRotator : public RigUnit {
    private: char pad_8[0x48]; public:
    void* get_Control();
    void* get_Space();
    void* get_Rotator();
    void* get_Minimum();
    void* get_Maximum();
    void* get_CachedControlIndex();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
