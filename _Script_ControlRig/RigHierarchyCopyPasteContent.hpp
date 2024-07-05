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
struct RigHierarchyCopyPasteContent {
    private: char pad_0[0x40]; public:
    void* get_Types();
    void* get_Contents();
    void* get_LocalTransforms();
    void* get_GlobalTransforms();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
