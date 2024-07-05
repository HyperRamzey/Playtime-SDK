#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "JoinLobbyData.hpp"
#include "SteamCoreAsyncAction.hpp"
#include "SteamCoreMatchmakingAsyncActionJoinLobby.hpp"
#include "SteamID.hpp"
void _Script_SteamCore::SteamCoreMatchmakingAsyncActionJoinLobby::HandleCallback(_Script_SteamCore::JoinLobbyData& Data, bool bWasSuccessful) {
    return;
}
void* _Script_SteamCore::SteamCoreMatchmakingAsyncActionJoinLobby::get_OnCallback() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamCoreMatchmakingAsyncActionJoinLobby::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.SteamCoreMatchmakingAsyncActionJoinLobby");
    return result;
}
_Script_SteamCore::SteamCoreMatchmakingAsyncActionJoinLobby* _Script_SteamCore::SteamCoreMatchmakingAsyncActionJoinLobby::JoinLobbyAsync(_Script_CoreUObject::Object* WorldContextObject, _Script_SteamCore::SteamID SteamIDLobby, float Timeout) {
    return;
}
