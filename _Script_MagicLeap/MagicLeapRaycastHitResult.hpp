#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MagicLeap {
#pragma pack(push, 1)
struct MagicLeapRaycastHitResult {
    private: char pad_0[0x24]; public:
    void* get_HitState();
    void* get_HitPoint();
    void* get_Normal();
    float& get_Confidence();
    int32_t& get_UserData();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x24
#pragma pack(pop)
}
