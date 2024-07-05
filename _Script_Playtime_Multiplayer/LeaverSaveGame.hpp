#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\SaveGame.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Timespan;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct LeaverSaveGame : public _Script_Engine::SaveGame {
    private: char pad_28[0x10]; public:
    void* get_LastPunishment();
    int32_t& get_Level();
    static _Script_CoreUObject::Class* static_class();
    bool Does12HourPunishmentExist();
    bool ComparePunishmentLevel(_Script_CoreUObject::Timespan& TimeLeft);
}; // Size: 0x38
#pragma pack(pop)
}
