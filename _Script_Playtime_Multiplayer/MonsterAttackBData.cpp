#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MonsterAttackBData.hpp"
float& _Script_Playtime_Multiplayer::MonsterAttackBData::get_AttackDamage() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_Playtime_Multiplayer::MonsterAttackBData::get_ChargeDuration() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_Playtime_Multiplayer::MonsterAttackBData::get_KnockbackHorizontal() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_Playtime_Multiplayer::MonsterAttackBData::get_KnockbackVertical() {
    return *(float*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::MonsterAttackBData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Playtime_Multiplayer.MonsterAttackBData");
    return result;
}
