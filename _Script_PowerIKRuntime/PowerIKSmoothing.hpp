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
struct PowerIKSmoothing {
    private: char pad_0[0x18]; public:
    bool get_SmoothPositionOverTime();
    void set_SmoothPositionOverTime(bool value);
    float& get_MaxPositionSpeed();
    float& get_MaxPositionDistance();
    bool get_SmoothRotationOverTime();
    void set_SmoothRotationOverTime(bool value);
    float& get_MaxDegreesSpeed();
    float& get_MaxDegreesDistance();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
