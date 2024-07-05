#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreAsyncAction.hpp"
#include "SteamCoreCreateSession.hpp"
void* _Script_SteamCore::SteamCoreCreateSession::get_OnSuccess() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_SteamCore::SteamCoreCreateSession::get_OnFailure() {
    return (void*)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamCoreCreateSession::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.SteamCoreCreateSession");
    return result;
}
_Script_SteamCore::SteamCoreCreateSession* _Script_SteamCore::SteamCoreCreateSession::CreateSteamCoreSession(_Script_CoreUObject::Object* WorldContextObject, void* SessionSettings, void* SessionName, int32_t MaxPlayers, bool bUseLAN, bool bAllowInvites, bool bUsesPresence, bool bAllowJoinViaPresence, bool bAllowJoinViaPresenceFriendsOnly, bool bAntiCheatProtected, bool bUsesStats, bool bShouldAdvertise, bool bAllowJoinInProgress, bool bUseLobbiesVoiceChatIfAvailable, float Timeout) {
    return;
}
