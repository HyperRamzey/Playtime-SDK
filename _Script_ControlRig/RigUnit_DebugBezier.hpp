#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RigUnit_DebugBaseMutable.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct RigUnit_DebugBezier : public RigUnit_DebugBaseMutable {
    private: char pad_68[0x98]; public:
    void* get_Bezier();
    float& get_MinimumU();
    float& get_MaximumU();
    void* get_Color();
    float& get_Thickness();
    int32_t& get_Detail();
    void* get_Space();
    void* get_WorldOffset();
    bool get_bEnabled();
    void set_bEnabled(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x100
#pragma pack(pop)
}
