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
struct RigUnit_SetControlVector : public RigUnitMutable {
    private: char pad_68[0x30]; public:
    void* get_Control();
    float& get_Weight();
    void* get_Vector();
    void* get_Space();
    void* get_CachedControlIndex();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x98
#pragma pack(pop)
}