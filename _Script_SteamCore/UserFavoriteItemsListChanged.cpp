#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "UserFavoriteItemsListChanged.hpp"
void* _Script_SteamCore::UserFavoriteItemsListChanged::get_PublishedFileID() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_SteamCore::UserFavoriteItemsListChanged::get_Result() {
    return (void*)((uintptr_t)this + 0x8);
}
bool _Script_SteamCore::UserFavoriteItemsListChanged::get_bWasAddRequest() {
    return (*(uint8_t*)((uintptr_t)this + 0x9 + 0)) & 1 != 0;
}
void _Script_SteamCore::UserFavoriteItemsListChanged::set_bWasAddRequest(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_SteamCore::UserFavoriteItemsListChanged::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.UserFavoriteItemsListChanged");
    return result;
}
