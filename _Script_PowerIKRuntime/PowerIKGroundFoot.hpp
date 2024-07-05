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
struct PowerIKGroundFoot {
    private: char pad_0[0x60]; public:
    void* get_BoneName();
    float& get_PullWeight();
    bool get_NormalizePulling();
    void set_NormalizePulling(bool value);
    void* get_PositivePullFactor();
    void* get_NegativePullFactor();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
