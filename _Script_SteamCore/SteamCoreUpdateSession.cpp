#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreAsyncAction.hpp"
#include "SteamCoreUpdateSession.hpp"
_Script_SteamCore::SteamCoreUpdateSession* _Script_SteamCore::SteamCoreUpdateSession::UpdateSteamCoreSession(_Script_CoreUObject::Object* WorldContextObject, void* Settings, void* SessionName, int32_t MaxPlayers, bool bAllowJoinInProgress) {
    return;
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamCoreUpdateSession::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.SteamCoreUpdateSession");
    return result;
}
void* _Script_SteamCore::SteamCoreUpdateSession::get_OnCallback() {
    return (void*)((uintptr_t)this + 0x38);
}
void _Script_SteamCore::SteamCoreUpdateSession::OnCompleted(void* SessionName, bool bWasSuccessful) {
    return;
}
