#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\TableRowBase.hpp"
#include "Item.hpp"
void* _Script_Playtime_Multiplayer::Item::get_Name() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Playtime_Multiplayer::Item::get_ItemType() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_Playtime_Multiplayer::Item::get_Rarity() {
    return (void*)((uintptr_t)this + 0x21);
}
void* _Script_Playtime_Multiplayer::Item::get_Thumbnail() {
    return (void*)((uintptr_t)this + 0x28);
}
bool _Script_Playtime_Multiplayer::Item::get_bUnlockedByDefault() {
    return (*(uint8_t*)((uintptr_t)this + 0x50 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::Item::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Playtime_Multiplayer.Item");
    return result;
}
void _Script_Playtime_Multiplayer::Item::set_bUnlockedByDefault(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x50 + 0);
    *(uint8_t*)((uintptr_t)this + 0x50 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
