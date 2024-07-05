#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PerkResponseItem.hpp"
void* _Script_Playtime_Multiplayer::PerkResponseItem::get_ID() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_Playtime_Multiplayer::PerkResponseItem::get_Level() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::PerkResponseItem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Playtime_Multiplayer.PerkResponseItem");
    return result;
}
