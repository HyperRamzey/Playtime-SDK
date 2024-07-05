#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "FavoritesListAccountsUpdated.hpp"
void* _Script_SteamCore::FavoritesListAccountsUpdated::get_Result() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_SteamCore::FavoritesListAccountsUpdated::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.FavoritesListAccountsUpdated");
    return result;
}
