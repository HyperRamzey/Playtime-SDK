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
struct CRSimPoint {
    private: char pad_0[0x28]; public:
    float& get_Mass();
    float& get_Size();
    float& get_LinearDamping();
    float& get_InheritMotion();
    void* get_Position();
    void* get_LinearVelocity();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
