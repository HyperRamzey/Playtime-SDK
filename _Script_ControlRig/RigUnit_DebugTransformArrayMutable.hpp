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
struct RigUnit_DebugTransformArrayMutable : public RigUnit_DebugBaseMutable {
    private: char pad_68[0x88]; public:
    void* get_Transforms();
    void* get_Mode();
    void* get_Color();
    float& get_Thickness();
    float& get_Scale();
    void* get_Space();
    void* get_WorldOffset();
    bool get_bEnabled();
    void set_bEnabled(bool value);
    void* get_WorkData();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xf0
#pragma pack(pop)
}
