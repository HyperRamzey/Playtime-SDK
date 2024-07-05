#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\TableRowBase.hpp"
#include "Action.hpp"
bool _Script_Playtime_Multiplayer::Action::get_bIsGesture() {
    return (*(uint8_t*)((uintptr_t)this + 0x20 + 0)) & 1 != 0;
}
void* _Script_Playtime_Multiplayer::Action::get_Name() {
    return (void*)((uintptr_t)this + 0x8);
}
void _Script_Playtime_Multiplayer::Action::set_bIsGesture(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20 + 0);
    *(uint8_t*)((uintptr_t)this + 0x20 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Playtime_Multiplayer::Action::get_Rarity() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Playtime_Multiplayer::Action::get_FirstPersonEmote() {
    return (void*)((uintptr_t)this + 0x80);
}
int32_t& _Script_Playtime_Multiplayer::Action::get_Price() {
    return *(int32_t*)((uintptr_t)this + 0x24);
}
void* _Script_Playtime_Multiplayer::Action::get_CharacterType() {
    return (void*)((uintptr_t)this + 0x29);
}
void* _Script_Playtime_Multiplayer::Action::get_RightHandGesture() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Playtime_Multiplayer::Action::get_LeftHandGesture() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_Playtime_Multiplayer::Action::get_ThirdPersonEmote() {
    return (void*)((uintptr_t)this + 0xa8);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::Action::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Playtime_Multiplayer.Action");
    return result;
}
