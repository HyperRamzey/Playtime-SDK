#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct HostMigrationData : public _Script_CoreUObject::Object {
    private: char pad_28[0xa8]; public:
    void* get_MapName();
    int32_t& get_PlayerCount();
    void* get_SessionData();
    void* get_MatchData();
    void* get_PlayerData();
    static _Script_CoreUObject::Class* static_class();
    int32_t GetExpectedPlayerCount();
    void ClearSaveData();
}; // Size: 0xd0
#pragma pack(pop)
}
