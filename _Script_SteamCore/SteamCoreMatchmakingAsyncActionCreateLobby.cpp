#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "CreateLobbyData.hpp"
#include "SteamCoreAsyncAction.hpp"
#include "SteamCoreMatchmakingAsyncActionCreateLobby.hpp"
void* _Script_SteamCore::SteamCoreMatchmakingAsyncActionCreateLobby::get_OnCallback() {
    return (void*)((uintptr_t)this + 0x38);
}
void _Script_SteamCore::SteamCoreMatchmakingAsyncActionCreateLobby::HandleCallback(_Script_SteamCore::CreateLobbyData& Data, bool bWasSuccessful) {
    return;
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamCoreMatchmakingAsyncActionCreateLobby::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.SteamCoreMatchmakingAsyncActionCreateLobby");
    return result;
}
_Script_SteamCore::SteamCoreMatchmakingAsyncActionCreateLobby* _Script_SteamCore::SteamCoreMatchmakingAsyncActionCreateLobby::CreateLobbyAsync(_Script_CoreUObject::Object* WorldContextObject, void* LobbyType, int32_t MaxMembers, float Timeout) {
    return;
}
