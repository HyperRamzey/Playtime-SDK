#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AugmentedReality {
#pragma pack(push, 1)
struct ARPose2D {
    private: char pad_0[0x48]; public:
    void* get_SkeletonDefinition();
    void* get_JointLocations();
    void* get_IsJointTracked();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
