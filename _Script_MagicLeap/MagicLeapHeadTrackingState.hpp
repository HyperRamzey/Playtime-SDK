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
struct MagicLeapHeadTrackingState {
    private: char pad_0[0x8]; public:
    void* get_Mode();
    void* get_Error();
    float& get_Confidence();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x8
#pragma pack(pop)
}
