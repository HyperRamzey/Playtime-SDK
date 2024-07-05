#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MagicLeapController {
#pragma pack(push, 1)
struct MagicLeapTouchpadGesture {
    private: char pad_0[0x30]; public:
    void* get_Hand();
    void* get_MotionSource();
    void* get_Type();
    void* get_Direction();
    void* get_PositionAndForce();
    float& get_Speed();
    float& get_Distance();
    float& get_FingerGap();
    float& get_Radius();
    float& get_Angle();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
