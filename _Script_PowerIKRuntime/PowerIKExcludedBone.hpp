#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_PowerIKRuntime {
#pragma pack(push, 1)
struct PowerIKExcludedBone {
    private: char pad_0[0x8]; public:
    void* get_BoneName();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x8
#pragma pack(pop)
}