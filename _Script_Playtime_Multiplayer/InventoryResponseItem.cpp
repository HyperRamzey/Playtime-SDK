#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InventoryResponseItem.hpp"
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::InventoryResponseItem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Playtime_Multiplayer.InventoryResponseItem");
    return result;
}
int32_t& _Script_Playtime_Multiplayer::InventoryResponseItem::get_ID() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
void* _Script_Playtime_Multiplayer::InventoryResponseItem::get_Name() {
    return (void*)((uintptr_t)this + 0x8);
}