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
struct RigUnit_VisualDebugVectorItemSpace : public RigUnit_DebugBase {
    private: char pad_8[0x38]; public:
    void* get_Value();
    bool get_bEnabled();
    void set_bEnabled(bool value);
    void* get_Mode();
    void* get_Color();
    float& get_Thickness();
    float& get_Scale();
    void* get_Space();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
