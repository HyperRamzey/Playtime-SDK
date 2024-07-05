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
struct RigUnit_DistributeRotation_WorkData {
    private: char pad_0[0x50]; public:
    void* get_CachedItems();
    void* get_ItemRotationA();
    void* get_ItemRotationB();
    void* get_ItemRotationT();
    void* get_ItemLocalTransforms();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
