#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\TableRowBase.hpp"
#include "ItemDefinition.hpp"
void* _Script_Playtime_Multiplayer::ItemDefinition::get_Name() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::ItemDefinition::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Playtime_Multiplayer.ItemDefinition");
    return result;
}
void* _Script_Playtime_Multiplayer::ItemDefinition::get_Rarity() {
    return (void*)((uintptr_t)this + 0x3c);
}
void* _Script_Playtime_Multiplayer::ItemDefinition::get_Description() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_Playtime_Multiplayer::ItemDefinition::get_BigThumbnail() {
    return (void*)((uintptr_t)this + 0x68);
}
int32_t& _Script_Playtime_Multiplayer::ItemDefinition::get_ItemFlags() {
    return *(int32_t*)((uintptr_t)this + 0x38);
}
void* _Script_Playtime_Multiplayer::ItemDefinition::get_Item() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_Playtime_Multiplayer::ItemDefinition::get_Thumbnail() {
    return (void*)((uintptr_t)this + 0x40);
}
bool _Script_Playtime_Multiplayer::ItemDefinition::get_bUnlockedByDefault() {
    return (*(uint8_t*)((uintptr_t)this + 0xb8 + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::ItemDefinition::set_bUnlockedByDefault(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
