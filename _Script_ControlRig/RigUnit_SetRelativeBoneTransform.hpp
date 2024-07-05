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
struct RigUnit_SetRelativeBoneTransform : public RigUnitMutable {
    private: char pad_68[0x78]; public:
    void* get_Bone();
    void* get_Space();
    void* get_Transform();
    float& get_Weight();
    bool get_bPropagateToChildren();
    void set_bPropagateToChildren(bool value);
    void* get_CachedBone();
    void* get_CachedSpaceIndex();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xe0
#pragma pack(pop)
}
