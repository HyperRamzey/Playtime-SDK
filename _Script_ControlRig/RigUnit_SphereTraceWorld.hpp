#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RigUnit.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct RigUnit_SphereTraceWorld : public RigUnit {
    private: char pad_8[0x40]; public:
    void* get_Start();
    void* get_End();
    void* get_Channel();
    float& get_Radius();
    bool get_bHit();
    void set_bHit(bool value);
    void* get_HitLocation();
    void* get_HitNormal();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
