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
struct RigUnit_GetRelativeBoneTransform : public RigUnit {
    private: char pad_8[0x78]; public:
    void* get_Bone();
    void* get_Space();
    void* get_Transform();
    void* get_CachedBone();
    void* get_CachedSpace();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x80
#pragma pack(pop)
}