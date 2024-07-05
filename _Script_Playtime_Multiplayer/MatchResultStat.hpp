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
struct MatchResultStat {
    private: char pad_0[0x20]; public:
    void* get_PlayerID();
    void* get_Status();
    int32_t& get_XP();
    int32_t& get_Tickets();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
