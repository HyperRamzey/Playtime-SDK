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
struct ARPose3D {
    private: char pad_0[0x50]; public:
    void* get_SkeletonDefinition();
    void* get_JointTransforms();
    void* get_IsJointTracked();
    void* get_JointTransformSpace();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
