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
struct RigUnit_SetSpaceTransform : public RigUnitMutable {
    private: char pad_68[0x68]; public:
    void* get_Space();
    float& get_Weight();
    void* get_Transform();
    void* get_SpaceType();
    void* get_CachedSpaceIndex();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xd0
#pragma pack(pop)
}
