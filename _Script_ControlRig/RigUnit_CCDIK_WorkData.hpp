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
struct RigUnit_CCDIK_WorkData {
    private: char pad_0[0x58]; public:
    void* get_Chain();
    void* get_CachedItems();
    void* get_RotationLimitIndex();
    void* get_RotationLimitsPerItem();
    void* get_CachedEffector();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
