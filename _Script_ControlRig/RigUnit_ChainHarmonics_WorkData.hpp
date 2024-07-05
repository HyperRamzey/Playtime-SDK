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
struct RigUnit_ChainHarmonics_WorkData {
    private: char pad_0[0x90]; public:
    void* get_Time();
    void* get_Items();
    void* get_Ratio();
    void* get_LocalTip();
    void* get_PendulumTip();
    void* get_PendulumPosition();
    void* get_PendulumVelocity();
    void* get_HierarchyLine();
    void* get_VelocityLines();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x90
#pragma pack(pop)
}
