#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "FriendsEnumerateFollowingList.hpp"
#include "SteamCoreAsyncAction.hpp"
#include "SteamCoreFriendsAsyncActionEnumerateFollowingList.hpp"
void* _Script_SteamCore::SteamCoreFriendsAsyncActionEnumerateFollowingList::get_OnCallback() {
    return (void*)((uintptr_t)this + 0x38);
}
void _Script_SteamCore::SteamCoreFriendsAsyncActionEnumerateFollowingList::HandleCallback(_Script_SteamCore::FriendsEnumerateFollowingList& Data, bool bWasSuccessful) {
    return;
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamCoreFriendsAsyncActionEnumerateFollowingList::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.SteamCoreFriendsAsyncActionEnumerateFollowingList");
    return result;
}
_Script_SteamCore::SteamCoreFriendsAsyncActionEnumerateFollowingList* _Script_SteamCore::SteamCoreFriendsAsyncActionEnumerateFollowingList::EnumerateFollowingListAsync(_Script_CoreUObject::Object* WorldContextObject, int32_t StartIndex, float Timeout) {
    return;
}
