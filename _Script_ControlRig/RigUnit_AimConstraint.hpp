#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RigUnitMutable.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct RigUnit_AimConstraint : public RigUnitMutable {
    private: char pad_68[0x58]; public:
    void* get_Joint();
    void* get_AimMode();
    void* get_UpMode();
    void* get_AimVector();
    void* get_UpVector();
    void* get_AimTargets();
    void* get_UpTargets();
    void* get_WorkData();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc0
#pragma pack(pop)
}
