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
struct PowerIKCenterOfGravity {
    private: char pad_0[0x10]; public:
    float& get_Alpha();
    float& get_HorizAmount();
    float& get_VertAmount();
    float& get_PullBodyAmount();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}
