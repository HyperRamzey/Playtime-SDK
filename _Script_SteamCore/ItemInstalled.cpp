#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ItemInstalled.hpp"
void* _Script_SteamCore::ItemInstalled::get_PublishedFileID() {
    return (void*)((uintptr_t)this + 0x8);
}
int32_t& _Script_SteamCore::ItemInstalled::get_AppID() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_SteamCore::ItemInstalled::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.ItemInstalled");
    return result;
}
