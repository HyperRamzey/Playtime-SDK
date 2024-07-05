#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct RigUnit_TwistBones_WorkData {
    private: char pad_0[0x30]; public:
    void* get_CachedItems();
    void* get_ItemRatios();
    void* get_ItemTransforms();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
