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
struct WebPlayerService : public SteamCoreWebSubsystem {
    static _Script_CoreUObject::Class* static_class();
    void IsPlayingSharedGame(void*& Callback, void* Key, void* SteamID, int32_t AppIdPlaying);
    void GetSteamLevel(void*& Callback, void* Key, void* SteamID);
    void GetRecentlyPlayedGames(void*& Callback, void* Key, void* SteamID, int32_t Count);
    void GetOwnedGames(void*& Callback, void* Key, void* SteamID, bool bIncludeAppInfo, bool bIncludePlayedFreeGames, void* Filter);
    void GetCommunityBadgeProgress(void*& Callback, void* Key, void* SteamID, int32_t BadgeId);
    void GetBadges(void*& Callback, void* Key, void* SteamID);
}; // Size: 0x48
#pragma pack(pop)
}
