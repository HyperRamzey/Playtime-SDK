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
struct LevelResponse {
    private: char pad_0[0x14]; public:
    int32_t& get_XP();
    int32_t& get_Level();
    bool get_bHasPremiumToyBox();
    void set_bHasPremiumToyBox(bool value);
    int32_t& get_BeginningOfLevelInXP();
    int32_t& get_BeginningOfNextLevelInXP();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x14
#pragma pack(pop)
}
