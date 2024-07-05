#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ToyBoxResponseItem.hpp"
int32_t& _Script_Playtime_Multiplayer::ToyBoxResponseItem::get_ID() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
bool _Script_Playtime_Multiplayer::ToyBoxResponseItem::get_bFree() {
    return (*(uint8_t*)((uintptr_t)this + 0x4 + 0)) & 1 != 0;
}
int32_t& _Script_Playtime_Multiplayer::ToyBoxResponseItem::get_Level() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
void _Script_Playtime_Multiplayer::ToyBoxResponseItem::set_bFree(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::ToyBoxResponseItem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Playtime_Multiplayer.ToyBoxResponseItem");
    return result;
}
