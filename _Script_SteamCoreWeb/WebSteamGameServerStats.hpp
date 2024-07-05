#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SteamCoreWebSubsystem.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SteamCoreWeb {
#pragma pack(push, 1)
struct WebSteamGameServerStats : public SteamCoreWebSubsystem {
    static _Script_CoreUObject::Class* static_class();
    void GetGameServerPlayerStatsForGame(void*& Callback, void* Key, void* GameID, int32_t AppID, void* RangeStart, void* RangeEnd, int32_t MaxResults);
}; // Size: 0x48
#pragma pack(pop)
}
