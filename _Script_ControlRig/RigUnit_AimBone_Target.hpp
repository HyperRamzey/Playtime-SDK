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
struct RigUnit_AimBone_Target {
    private: char pad_0[0x28]; public:
    float& get_Weight();
    void* get_Axis();
    void* get_Target();
    void* get_Kind();
    void* get_Space();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
