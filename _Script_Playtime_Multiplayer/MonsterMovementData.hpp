#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct MonsterMovementData {
    private: char pad_0[0xc]; public:
    float& get_WalkSpeed();
    float& get_CrouchSpeed();
    float& get_JumpVelocity();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc
#pragma pack(pop)
}
