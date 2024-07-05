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
struct RigUnit_ChainHarmonics_Reach {
    private: char pad_0[0x28]; public:
    bool get_bEnabled();
    void set_bEnabled(bool value);
    void* get_ReachTarget();
    void* get_ReachAxis();
    float& get_ReachMinimum();
    float& get_ReachMaximum();
    void* get_ReachEase();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
