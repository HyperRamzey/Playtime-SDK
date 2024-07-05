#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "LobbyMatchList.hpp"
#include "SteamCoreAsyncAction.hpp"
#include "SteamCoreMatchmakingAsyncActionRequestLobbyList.hpp"
_Script_SteamCore::SteamCoreMatchmakingAsyncActionRequestLobbyList* _Script_SteamCore::SteamCoreMatchmakingAsyncActionRequestLobbyList::RequestLobbyListAsync(_Script_CoreUObject::Object* WorldContextObject, float Timeout) {
    return;
}
void* _Script_SteamCore::SteamCoreMatchmakingAsyncActionRequestLobbyList::get_OnCallback() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamCoreMatchmakingAsyncActionRequestLobbyList::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.SteamCoreMatchmakingAsyncActionRequestLobbyList");
    return result;
}
void _Script_SteamCore::SteamCoreMatchmakingAsyncActionRequestLobbyList::HandleCallback(_Script_SteamCore::LobbyMatchList& Data, bool bWasSuccessful) {
    return;
}
