#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RigUnit_DebugBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct RigUnit_DebugPoint : public RigUnit_DebugBase {
    private: char pad_8[0x78]; public:
    void* get_Vector();
    void* get_Mode();
    void* get_Color();
    float& get_Scale();
    float& get_Thickness();
    void* get_Space();
    void* get_WorldOffset();
    bool get_bEnabled();
    void set_bEnabled(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x80
#pragma pack(pop)
}
