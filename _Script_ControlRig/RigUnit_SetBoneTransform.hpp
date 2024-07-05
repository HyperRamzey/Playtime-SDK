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
struct RigUnit_SetBoneTransform : public RigUnitMutable {
    private: char pad_68[0x88]; public:
    void* get_Bone();
    void* get_Transform();
    void* get_Result();
    void* get_Space();
    float& get_Weight();
    bool get_bPropagateToChildren();
    void set_bPropagateToChildren(bool value);
    void* get_CachedBone();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xf0
#pragma pack(pop)
}
