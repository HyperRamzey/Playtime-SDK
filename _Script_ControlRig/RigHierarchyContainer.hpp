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
struct RigHierarchyContainer {
    private: char pad_0[0x368]; public:
    void* get_BoneHierarchy();
    void* get_SpaceHierarchy();
    void* get_ControlHierarchy();
    void* get_CurveContainer();
    int32_t& get_Version();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x368
#pragma pack(pop)
}
