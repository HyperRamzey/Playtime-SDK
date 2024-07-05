#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\TableRowBase.hpp"
#include "Bundle.hpp"
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::Bundle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Playtime_Multiplayer.Bundle");
    return result;
}
void* _Script_Playtime_Multiplayer::Bundle::get_BundleContent() {
    return (void*)((uintptr_t)this + 0x30);
}
int32_t& _Script_Playtime_Multiplayer::Bundle::get_Price() {
    return *(int32_t*)((uintptr_t)this + 0x20);
}
void* _Script_Playtime_Multiplayer::Bundle::get_Name() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Playtime_Multiplayer::Bundle::get_Rarity() {
    return (void*)((uintptr_t)this + 0x24);
}
bool _Script_Playtime_Multiplayer::Bundle::get_bOutfit() {
    return (*(uint8_t*)((uintptr_t)this + 0x25 + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::Bundle::set_bOutfit(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x25 + 0);
    *(uint8_t*)((uintptr_t)this + 0x25 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Playtime_Multiplayer::Bundle::get_BundlePreviewClass() {
    return (void*)((uintptr_t)this + 0x28);
}
