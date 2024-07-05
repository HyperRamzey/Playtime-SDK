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
struct RigUnit_AddBoneTransform : public RigUnitMutable {
    private: char pad_68[0x58]; public:
    void* get_Bone();
    void* get_Transform();
    float& get_Weight();
    bool get_bPostMultiply();
    void set_bPostMultiply(bool value);
    bool get_bPropagateToChildren();
    void set_bPropagateToChildren(bool value);
    void* get_CachedBone();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc0
#pragma pack(pop)
}
