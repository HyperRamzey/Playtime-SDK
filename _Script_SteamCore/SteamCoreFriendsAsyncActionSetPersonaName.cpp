#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SetPersonaNameResponse.hpp"
#include "SteamCoreAsyncAction.hpp"
#include "SteamCoreFriendsAsyncActionSetPersonaName.hpp"
void* _Script_SteamCore::SteamCoreFriendsAsyncActionSetPersonaName::get_OnCallback() {
    return (void*)((uintptr_t)this + 0x38);
}
void _Script_SteamCore::SteamCoreFriendsAsyncActionSetPersonaName::HandleCallback(_Script_SteamCore::SetPersonaNameResponse& Data, bool bWasSuccessful) {
    return;
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamCoreFriendsAsyncActionSetPersonaName::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.SteamCoreFriendsAsyncActionSetPersonaName");
    return result;
}
_Script_SteamCore::SteamCoreFriendsAsyncActionSetPersonaName* _Script_SteamCore::SteamCoreFriendsAsyncActionSetPersonaName::SetPersonaNameAsync(_Script_CoreUObject::Object* WorldContextObject, void* Name, float Timeout) {
    return;
}
