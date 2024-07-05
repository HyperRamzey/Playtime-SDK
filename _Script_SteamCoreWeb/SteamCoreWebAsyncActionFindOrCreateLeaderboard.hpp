#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SteamCoreWebAsyncAction.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_SteamCoreWeb {
#pragma pack(push, 1)
struct SteamCoreWebAsyncActionFindOrCreateLeaderboard : public SteamCoreWebAsyncAction {
    static _Script_CoreUObject::Class* static_class();
    _Script_SteamCoreWeb::SteamCoreWebAsyncActionFindOrCreateLeaderboard* FindOrCreateLeaderboardAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, int32_t AppID, void* Name, void* SortMethod, void* DisplayType, bool bCreateIfNotFound, bool bOnlyTrustedWrites, bool bOnlyFriendsReads);
}; // Size: 0x58
#pragma pack(pop)
}
