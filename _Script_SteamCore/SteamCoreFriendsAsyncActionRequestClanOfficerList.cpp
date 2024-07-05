#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "ClanOfficerListResponse.hpp"
#include "SteamCoreAsyncAction.hpp"
#include "SteamCoreFriendsAsyncActionRequestClanOfficerList.hpp"
#include "SteamID.hpp"
_Script_CoreUObject::Class* _Script_SteamCore::SteamCoreFriendsAsyncActionRequestClanOfficerList::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.SteamCoreFriendsAsyncActionRequestClanOfficerList");
    return result;
}
void* _Script_SteamCore::SteamCoreFriendsAsyncActionRequestClanOfficerList::get_OnCallback() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_SteamCore::SteamCoreFriendsAsyncActionRequestClanOfficerList* _Script_SteamCore::SteamCoreFriendsAsyncActionRequestClanOfficerList::RequestClanOfficerListAsync(_Script_CoreUObject::Object* WorldContextObject, _Script_SteamCore::SteamID SteamIDClan, float Timeout) {
    return;
}
void _Script_SteamCore::SteamCoreFriendsAsyncActionRequestClanOfficerList::HandleCallback(_Script_SteamCore::ClanOfficerListResponse& Data, bool bWasSuccessful) {
    return;
}
