#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct RigUnit_FitChainToCurve_DebugSettings {
    private: char pad_0[0x60]; public:
    bool get_bEnabled();
    void set_bEnabled(bool value);
    float& get_Scale();
    void* get_CurveColor();
    void* get_SegmentsColor();
    void* get_WorldOffset();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}