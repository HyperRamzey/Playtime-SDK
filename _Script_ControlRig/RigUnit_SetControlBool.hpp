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
struct RigUnit_SetControlBool : public RigUnitMutable {
    private: char pad_68[0x20]; public:
    void* get_Control();
    bool get_BoolValue();
    void set_BoolValue(bool value);
    void* get_CachedControlIndex();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x88
#pragma pack(pop)
}
