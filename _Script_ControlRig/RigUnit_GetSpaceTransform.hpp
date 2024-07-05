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
struct RigUnit_GetSpaceTransform : public RigUnit {
    private: char pad_8[0x68]; public:
    void* get_Space();
    void* get_SpaceType();
    void* get_Transform();
    void* get_CachedSpaceIndex();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x70
#pragma pack(pop)
}
