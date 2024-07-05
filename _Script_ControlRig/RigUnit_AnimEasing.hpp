#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RigUnit_AnimBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct RigUnit_AnimEasing : public RigUnit_AnimBase {
    private: char pad_8[0x20]; public:
    float& get_Value();
    void* get_Type();
    float& get_SourceMinimum();
    float& get_SourceMaximum();
    float& get_TargetMinimum();
    float& get_TargetMaximum();
    float& get_Result();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
