#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SaleResponseItem.hpp"
int32_t& _Script_Playtime_Multiplayer::SaleResponseItem::get_ID() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::SaleResponseItem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Playtime_Multiplayer.SaleResponseItem");
    return result;
}
int32_t& _Script_Playtime_Multiplayer::SaleResponseItem::get_SalePrice() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
int32_t& _Script_Playtime_Multiplayer::SaleResponseItem::get_OriginalPrice() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
