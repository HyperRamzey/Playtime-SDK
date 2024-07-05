#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SteamCoreAsyncAction.hpp"
#include "SteamLeaderboard.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SteamCore {
struct LeaderboardScoresDownloaded;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_SteamCore {
#pragma pack(push, 1)
struct SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries : public SteamCoreAsyncAction {
    private: char pad_38[0x10]; public:
    void* get_OnCallback();
    static _Script_CoreUObject::Class* static_class();
    void HandleCallback(_Script_SteamCore::LeaderboardScoresDownloaded& Data, bool bWasSuccessful);
    _Script_SteamCore::SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries* DownloadLeaderboardEntriesAsync(_Script_CoreUObject::Object* WorldContextObject, _Script_SteamCore::SteamLeaderboard SteamLeaderboard, void* Request, int32_t RangeStart, int32_t RangeEnd, float Timeout);
}; // Size: 0x48
#pragma pack(pop)
}
