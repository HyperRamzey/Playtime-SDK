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
struct RigUnit_DebugTransform : public RigUnit_DebugBase {
    private: char pad_8[0xa8]; public:
    void* get_Transform();
    void* get_Mode();
    void* get_Color();
    float& get_Thickness();
    float& get_Scale();
    void* get_Space();
    void* get_WorldOffset();
    bool get_bEnabled();
    void set_bEnabled(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb0
#pragma pack(pop)
}