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
struct RigUnit_SpringIK_WorkData {
    private: char pad_0[0xb0]; public:
    void* get_CachedBones();
    void* get_CachedPoleVector();
    void* get_Transforms();
    void* get_Simulation();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb0
#pragma pack(pop)
}
