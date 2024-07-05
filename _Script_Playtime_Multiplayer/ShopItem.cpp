#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\TableRowBase.hpp"
#include "ShopItem.hpp"
void* _Script_Playtime_Multiplayer::ShopItem::get_Name() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Playtime_Multiplayer::ShopItem::get_BigThumbnail() {
    return (void*)((uintptr_t)this + 0x68);
}
int32_t& _Script_Playtime_Multiplayer::ShopItem::get_Price() {
    return *(int32_t*)((uintptr_t)this + 0x20);
}
void* _Script_Playtime_Multiplayer::ShopItem::get_EventName() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Playtime_Multiplayer::ShopItem::get_Rarity() {
    return (void*)((uintptr_t)this + 0x38);
}
int32_t& _Script_Playtime_Multiplayer::ShopItem::get_TicketPrice() {
    return *(int32_t*)((uintptr_t)this + 0x24);
}
bool _Script_Playtime_Multiplayer::ShopItem::get_bGetPriceFromTypeAndRarity() {
    return (*(uint8_t*)((uintptr_t)this + 0x39 + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::ShopItem::set_bGetPriceFromTypeAndRarity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x39 + 0);
    *(uint8_t*)((uintptr_t)this + 0x39 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Playtime_Multiplayer::ShopItem::get_OverridePrice() {
    return *(int32_t*)((uintptr_t)this + 0x3c);
}
void* _Script_Playtime_Multiplayer::ShopItem::get_Thumbnail() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::ShopItem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Playtime_Multiplayer.ShopItem");
    return result;
}
