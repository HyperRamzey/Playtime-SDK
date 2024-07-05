#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "FriendsIsFollowing.hpp"
#include "SteamCoreAsyncAction.hpp"
#include "SteamCoreFriendsAsyncActionIsFollowing.hpp"
#include "SteamID.hpp"
_Script_CoreUObject::Class* _Script_SteamCore::SteamCoreFriendsAsyncActionIsFollowing::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.SteamCoreFriendsAsyncActionIsFollowing");
    return result;
}
void* _Script_SteamCore::SteamCoreFriendsAsyncActionIsFollowing::get_OnCallback() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_SteamCore::SteamCoreFriendsAsyncActionIsFollowing* _Script_SteamCore::SteamCoreFriendsAsyncActionIsFollowing::IsFollowingAsync(_Script_CoreUObject::Object* WorldContextObject, _Script_SteamCore::SteamID SteamID, float Timeout) {
    return;
}
void _Script_SteamCore::SteamCoreFriendsAsyncActionIsFollowing::HandleCallback(_Script_SteamCore::FriendsIsFollowing& Data, bool bWasSuccessful) {
    return;
}
