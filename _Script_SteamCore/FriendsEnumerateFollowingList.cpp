#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "FriendsEnumerateFollowingList.hpp"
void* _Script_SteamCore::FriendsEnumerateFollowingList::get_SteamIDs() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_SteamCore::FriendsEnumerateFollowingList::get_Result() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_SteamCore::FriendsEnumerateFollowingList::get_Results() {
    return *(int32_t*)((uintptr_t)this + 0x18);
}
int32_t& _Script_SteamCore::FriendsEnumerateFollowingList::get_TotalResult() {
    return *(int32_t*)((uintptr_t)this + 0x1c);
}
_Script_CoreUObject::Class* _Script_SteamCore::FriendsEnumerateFollowingList::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.FriendsEnumerateFollowingList");
    return result;
}
