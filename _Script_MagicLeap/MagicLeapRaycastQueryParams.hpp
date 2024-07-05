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
struct MagicLeapRaycastQueryParams {
    private: char pad_0[0x38]; public:
    void* get_Position();
    void* get_Direction();
    void* get_UpVector();
    int32_t& get_Width();
    int32_t& get_Height();
    float& get_HorizontalFovDegrees();
    bool get_CollideWithUnobserved();
    void set_CollideWithUnobserved(bool value);
    int32_t& get_UserData();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
