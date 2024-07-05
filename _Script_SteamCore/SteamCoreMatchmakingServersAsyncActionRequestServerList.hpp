#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SteamCoreAsyncAction.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_SteamCore {
struct GameServerItem;
}
namespace _Script_SteamCore {
struct ServerFilter;
}
namespace _Script_SteamCore {
#pragma pack(push, 1)
struct SteamCoreMatchmakingServersAsyncActionRequestServerList : public SteamCoreAsyncAction {
    private: char pad_38[0x20]; public:
    void* get_OnCallback();
    void* get_OnRefreshCompleted();
    static _Script_CoreUObject::Class* static_class();
    _Script_SteamCore::SteamCoreMatchmakingServersAsyncActionRequestServerList* RequestSpectatorServerListAsync(_Script_CoreUObject::Object* WorldContextObject, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, _Script_SteamCore::ServerFilter* ServerFilter);
    _Script_SteamCore::SteamCoreMatchmakingServersAsyncActionRequestServerList* RequestLANServerListAsync(_Script_CoreUObject::Object* WorldContextObject, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, _Script_SteamCore::ServerFilter* ServerFilter);
    _Script_SteamCore::SteamCoreMatchmakingServersAsyncActionRequestServerList* RequestInternetServerListAsync(_Script_CoreUObject::Object* WorldContextObject, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, _Script_SteamCore::ServerFilter* ServerFilter);
    _Script_SteamCore::SteamCoreMatchmakingServersAsyncActionRequestServerList* RequestHistoryServerListAsync(_Script_CoreUObject::Object* WorldContextObject, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, _Script_SteamCore::ServerFilter* ServerFilter);
    _Script_SteamCore::SteamCoreMatchmakingServersAsyncActionRequestServerList* RequestFriendsServerListAsync(_Script_CoreUObject::Object* WorldContextObject, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, _Script_SteamCore::ServerFilter* ServerFilter);
    _Script_SteamCore::SteamCoreMatchmakingServersAsyncActionRequestServerList* RequestFavoritesServerListAsync(_Script_CoreUObject::Object* WorldContextObject, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, _Script_SteamCore::ServerFilter* ServerFilter);
    void HandleServerListFinished();
    void HandleCallback(_Script_SteamCore::GameServerItem& Data);
}; // Size: 0x58
#pragma pack(pop)
}
