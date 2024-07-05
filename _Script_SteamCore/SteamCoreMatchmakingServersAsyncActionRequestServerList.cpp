#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "GameServerItem.hpp"
#include "ServerFilter.hpp"
#include "SteamCoreAsyncAction.hpp"
#include "SteamCoreMatchmakingServersAsyncActionRequestServerList.hpp"
_Script_SteamCore::SteamCoreMatchmakingServersAsyncActionRequestServerList* _Script_SteamCore::SteamCoreMatchmakingServersAsyncActionRequestServerList::RequestSpectatorServerListAsync(_Script_CoreUObject::Object* WorldContextObject, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, _Script_SteamCore::ServerFilter* ServerFilter) {
    return;
}
void* _Script_SteamCore::SteamCoreMatchmakingServersAsyncActionRequestServerList::get_OnCallback() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_SteamCore::SteamCoreMatchmakingServersAsyncActionRequestServerList::get_OnRefreshCompleted() {
    return (void*)((uintptr_t)this + 0x48);
}
_Script_SteamCore::SteamCoreMatchmakingServersAsyncActionRequestServerList* _Script_SteamCore::SteamCoreMatchmakingServersAsyncActionRequestServerList::RequestLANServerListAsync(_Script_CoreUObject::Object* WorldContextObject, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, _Script_SteamCore::ServerFilter* ServerFilter) {
    return;
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamCoreMatchmakingServersAsyncActionRequestServerList::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList");
    return result;
}
_Script_SteamCore::SteamCoreMatchmakingServersAsyncActionRequestServerList* _Script_SteamCore::SteamCoreMatchmakingServersAsyncActionRequestServerList::RequestInternetServerListAsync(_Script_CoreUObject::Object* WorldContextObject, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, _Script_SteamCore::ServerFilter* ServerFilter) {
    return;
}
_Script_SteamCore::SteamCoreMatchmakingServersAsyncActionRequestServerList* _Script_SteamCore::SteamCoreMatchmakingServersAsyncActionRequestServerList::RequestFriendsServerListAsync(_Script_CoreUObject::Object* WorldContextObject, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, _Script_SteamCore::ServerFilter* ServerFilter) {
    return;
}
_Script_SteamCore::SteamCoreMatchmakingServersAsyncActionRequestServerList* _Script_SteamCore::SteamCoreMatchmakingServersAsyncActionRequestServerList::RequestHistoryServerListAsync(_Script_CoreUObject::Object* WorldContextObject, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, _Script_SteamCore::ServerFilter* ServerFilter) {
    return;
}
_Script_SteamCore::SteamCoreMatchmakingServersAsyncActionRequestServerList* _Script_SteamCore::SteamCoreMatchmakingServersAsyncActionRequestServerList::RequestFavoritesServerListAsync(_Script_CoreUObject::Object* WorldContextObject, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, _Script_SteamCore::ServerFilter* ServerFilter) {
    return;
}
void _Script_SteamCore::SteamCoreMatchmakingServersAsyncActionRequestServerList::HandleServerListFinished() {
    return;
}
void _Script_SteamCore::SteamCoreMatchmakingServersAsyncActionRequestServerList::HandleCallback(_Script_SteamCore::GameServerItem& Data) {
    return;
}
