#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MatchData.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct Escape_MatchData : public MatchData {
    private: char pad_80[0x28]; public:
    float& get_RemainingTime();
    float& get_MonsterSelectTime();
    void* get_ToyType();
    int32_t& get_ToyPartIndex();
    bool get_bEarlyDeparture();
    void set_bEarlyDeparture(bool value);
    bool get_bIsAutoCarry();
    void set_bIsAutoCarry(bool value);
    void* get_PlayersInHole();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa8
#pragma pack(pop)
}
