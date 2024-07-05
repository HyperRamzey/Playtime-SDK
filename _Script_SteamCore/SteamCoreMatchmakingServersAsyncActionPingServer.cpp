#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "GameServerItem.hpp"
#include "SteamCoreAsyncAction.hpp"
#include "SteamCoreMatchmakingServersAsyncActionPingServer.hpp"
void* _Script_SteamCore::SteamCoreMatchmakingServersAsyncActionPingServer::get_OnCallback() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamCoreMatchmakingServersAsyncActionPingServer::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.SteamCoreMatchmakingServersAsyncActionPingServer");
    return result;
}
_Script_SteamCore::SteamCoreMatchmakingServersAsyncActionPingServer* _Script_SteamCore::SteamCoreMatchmakingServersAsyncActionPingServer::PingServerAsync(_Script_CoreUObject::Object* WorldContextObject, void* IP, int32_t Port, float Timeout) {
    return;
}
void _Script_SteamCore::SteamCoreMatchmakingServersAsyncActionPingServer::HandleCallback(_Script_SteamCore::GameServerItem& Data, bool bWasSuccessful) {
    return;
}
