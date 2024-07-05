#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MagicLeapPlanes {
#pragma pack(push, 1)
struct MagicLeapPlaneBoundaries {
    private: char pad_0[0x20]; public:
    void* get_ID();
    void* get_Boundaries();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}