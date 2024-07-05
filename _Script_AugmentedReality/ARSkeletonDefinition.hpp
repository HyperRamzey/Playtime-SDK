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
struct ARSkeletonDefinition {
    private: char pad_0[0x28]; public:
    int32_t& get_NumJoints();
    void* get_JointNames();
    void* get_ParentIndices();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
