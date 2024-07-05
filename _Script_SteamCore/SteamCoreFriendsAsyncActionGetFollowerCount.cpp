#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "FriendsGetFollowerCount.hpp"
#include "SteamCoreAsyncAction.hpp"
#include "SteamCoreFriendsAsyncActionGetFollowerCount.hpp"
#include "SteamID.hpp"
void* _Script_SteamCore::SteamCoreFriendsAsyncActionGetFollowerCount::get_OnCallback() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamCoreFriendsAsyncActionGetFollowerCount::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.SteamCoreFriendsAsyncActionGetFollowerCount");
    return result;
}
void _Script_SteamCore::SteamCoreFriendsAsyncActionGetFollowerCount::HandleCallback(_Script_SteamCore::FriendsGetFollowerCount& Data, bool bWasSuccessful) {
    return;
}
_Script_SteamCore::SteamCoreFriendsAsyncActionGetFollowerCount* _Script_SteamCore::SteamCoreFriendsAsyncActionGetFollowerCount::GetFollowerCountAsync(_Script_CoreUObject::Object* WorldContextObject, _Script_SteamCore::SteamID SteamID, float Timeout) {
    return;
}
