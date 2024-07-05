#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreAsyncAction.hpp"
#include "SteamCoreFriendsAsyncActionRequestUserInformation.hpp"
#include "SteamID.hpp"
_Script_CoreUObject::Class* _Script_SteamCore::SteamCoreFriendsAsyncActionRequestUserInformation::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.SteamCoreFriendsAsyncActionRequestUserInformation");
    return result;
}
void* _Script_SteamCore::SteamCoreFriendsAsyncActionRequestUserInformation::get_OnCallback() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_SteamCore::SteamCoreFriendsAsyncActionRequestUserInformation* _Script_SteamCore::SteamCoreFriendsAsyncActionRequestUserInformation::RequestUserInformationAsync(_Script_CoreUObject::Object* WorldContextObject, _Script_SteamCore::SteamID SteamIDUser, bool bRequireNameOnly, float Timeout) {
    return;
}
void _Script_SteamCore::SteamCoreFriendsAsyncActionRequestUserInformation::HandleCallback() {
    return;
}
