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
struct RigUnit_ChainHarmonics_Pendulum {
    private: char pad_0[0x3c]; public:
    bool get_bEnabled();
    void set_bEnabled(bool value);
    float& get_PendulumStiffness();
    void* get_PendulumGravity();
    float& get_PendulumBlend();
    float& get_PendulumDrag();
    float& get_PendulumMinimum();
    float& get_PendulumMaximum();
    void* get_PendulumEase();
    void* get_UnwindAxis();
    float& get_UnwindMinimum();
    float& get_UnwindMaximum();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x3c
#pragma pack(pop)
}
