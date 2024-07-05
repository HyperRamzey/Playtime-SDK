#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LiveLinkInterface {
#pragma pack(push, 1)
struct LiveLinkInterpolationSettings {
    private: char pad_0[0x8]; public:
    bool get_bUseInterpolation();
    void set_bUseInterpolation(bool value);
    float& get_InterpolationOffset();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x8
#pragma pack(pop)
}
