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
struct PowerIKEffector {
    private: char pad_0[0xd0]; public:
    void* get_BoneName();
    void* get_Position();
    void* get_PositionSpace();
    void* get_Rotation();
    void* get_RotationSpace();
    float& get_PullWeight();
    bool get_NormalizePulling();
    void set_NormalizePulling(bool value);
    void* get_PositivePullFactor();
    void* get_NegativePullFactor();
    bool get_RotateBone();
    void set_RotateBone(bool value);
    bool get_RotateLimb();
    void set_RotateLimb(bool value);
    float& get_DeltaSmoothSpeed();
    float& get_AngularDeltaSmoothSpeed();
    void* get_Smoothing();
    void* get_PoleVector();
    bool get_AffectsCenterOfGravity();
    void set_AffectsCenterOfGravity(bool value);
    float& get_Alpha();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xd0
#pragma pack(pop)
}
