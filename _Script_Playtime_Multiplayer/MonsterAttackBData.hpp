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
struct MonsterAttackBData {
    private: char pad_0[0x10]; public:
    float& get_AttackDamage();
    float& get_ChargeDuration();
    float& get_KnockbackHorizontal();
    float& get_KnockbackVertical();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}
