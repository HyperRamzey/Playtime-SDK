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
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_SteamCore {
struct LeaderboardScoreUploaded;
}
namespace _Script_SteamCore {
#pragma pack(push, 1)
struct SteamCoreUserStatsAsyncActionUploadLeaderboardScore : public SteamCoreAsyncAction {
    private: char pad_38[0x10]; public:
    void* get_OnCallback();
    static _Script_CoreUObject::Class* static_class();
    _Script_SteamCore::SteamCoreUserStatsAsyncActionUploadLeaderboardScore* UploadLeaderboardScoreAsync(_Script_CoreUObject::Object* WorldContextObject, _Script_SteamCore::SteamLeaderboard SteamLeaderboard, void* UploadScoreMethod, int32_t Score, void* ScoreDetails, float Timeout);
    void HandleCallback(_Script_SteamCore::LeaderboardScoreUploaded& Data, bool bWasSuccessful);
}; // Size: 0x48
#pragma pack(pop)
}
