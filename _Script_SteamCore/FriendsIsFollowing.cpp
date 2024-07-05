#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "FriendsIsFollowing.hpp"
void* _Script_SteamCore::FriendsIsFollowing::get_Result() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_SteamCore::FriendsIsFollowing::get_SteamID() {
    return (void*)((uintptr_t)this + 0x8);
}
bool _Script_SteamCore::FriendsIsFollowing::get_bIsFollowing() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 1 != 0;
}
void _Script_SteamCore::FriendsIsFollowing::set_bIsFollowing(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_SteamCore::FriendsIsFollowing::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.FriendsIsFollowing");
    return result;
}
