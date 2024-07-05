#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SteamCore {
#pragma pack(push, 1)
struct InputMotionData {
    private: char pad_0[0x28]; public:
    float& get_RotQuatX();
    float& get_RotQuatY();
    float& get_RotQuatZ();
    float& get_RotQuatW();
    float& get_PosAccelX();
    float& get_PosAccelY();
    float& get_PosAccelZ();
    float& get_RotVelX();
    float& get_RotVelY();
    float& get_RotVelZ();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
