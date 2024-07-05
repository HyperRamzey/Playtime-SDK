#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "FavoritesListChanged.hpp"
void* _Script_SteamCore::FavoritesListChanged::get_SteamID() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_SteamCore::FavoritesListChanged::get_IP() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_SteamCore::FavoritesListChanged::get_QueryPort() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
int32_t& _Script_SteamCore::FavoritesListChanged::get_ConnectionPort() {
    return *(int32_t*)((uintptr_t)this + 0x14);
}
bool _Script_SteamCore::FavoritesListChanged::get_bAdd() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
int32_t& _Script_SteamCore::FavoritesListChanged::get_AppID() {
    return *(int32_t*)((uintptr_t)this + 0x18);
}
void* _Script_SteamCore::FavoritesListChanged::get_Flags() {
    return (void*)((uintptr_t)this + 0x20);
}
void _Script_SteamCore::FavoritesListChanged::set_bAdd(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_SteamCore::FavoritesListChanged::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.FavoritesListChanged");
    return result;
}
