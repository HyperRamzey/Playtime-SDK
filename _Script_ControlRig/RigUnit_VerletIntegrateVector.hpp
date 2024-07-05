#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RigUnit_SimBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct RigUnit_VerletIntegrateVector : public RigUnit_SimBase {
    private: char pad_8[0x68]; public:
    void* get_Target();
    float& get_Strength();
    float& get_Damp();
    float& get_Blend();
    void* get_Position();
    void* get_Velocity();
    void* get_Acceleration();
    void* get_Point();
    bool get_bInitialized();
    void set_bInitialized(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x70
#pragma pack(pop)
}
