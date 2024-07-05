#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SteamCoreAsyncAction.hpp"
#include "SteamLeaderboard.hpp"
#include "SteamUGCHandle.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SteamCore {
struct AttachLeaderboardUGCData;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_SteamCore {
#pragma pack(push, 1)
struct SteamCoreUserStatsAsyncActionAttachLeaderboardUGC : public SteamCoreAsyncAction {
    private: char pad_38[0x10]; public:
    void* get_OnCallback();
    static _Script_CoreUObject::Class* static_class();
    void HandleCallback(_Script_SteamCore::AttachLeaderboardUGCData& Data, bool bWasSuccessful);
    _Script_SteamCore::SteamCoreUserStatsAsyncActionAttachLeaderboardUGC* AttachLeaderboardUGCAsync(_Script_CoreUObject::Object* WorldContextObject, _Script_SteamCore::SteamLeaderboard SteamLeaderboard, _Script_SteamCore::SteamUGCHandle Handle, float Timeout);
}; // Size: 0x48
#pragma pack(pop)
}
