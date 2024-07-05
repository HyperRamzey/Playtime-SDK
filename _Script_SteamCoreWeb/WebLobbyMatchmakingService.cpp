#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SteamCoreWebSubsystem.hpp"
#include "WebLobbyMatchmakingService.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::WebLobbyMatchmakingService::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.WebLobbyMatchmakingService");
    return result;
}
void _Script_SteamCoreWeb::WebLobbyMatchmakingService::RemoveUserFromLobby(void*& Callback, void* Key, int32_t AppID, void* SteamIdToRemove, void* SteamIDLobby, void* InputJson) {
    return;
}
void _Script_SteamCoreWeb::WebLobbyMatchmakingService::CreateLobby(void*& Callback, void* Key, int32_t AppID, int32_t MaxMembers, void* LobbyType, void* LobbyName, void* InputJson, void* SteamIdInvitedMembers, void* LobbyMetaData) {
    return;
}
