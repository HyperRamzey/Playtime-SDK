#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AttackData.hpp"
bool _Script_Playtime_Multiplayer::AttackData::get_bIsChargedAttack() {
    return (*(uint8_t*)((uintptr_t)this + 0x4 + 0)) & 1 != 0;
}
float& _Script_Playtime_Multiplayer::AttackData::get_AttackDamage() {
    return *(float*)((uintptr_t)this + 0x0);
}
void _Script_Playtime_Multiplayer::AttackData::set_bIsChargedAttack(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::AttackData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Playtime_Multiplayer.AttackData");
    return result;
}
