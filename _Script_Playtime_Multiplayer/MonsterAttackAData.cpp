#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MonsterAttackAData.hpp"
float& _Script_Playtime_Multiplayer::MonsterAttackAData::get_AttackDamage() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_Playtime_Multiplayer::MonsterAttackAData::get_KnockbackHorizontal() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_Playtime_Multiplayer::MonsterAttackAData::get_KnockbackVertical() {
    return *(float*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::MonsterAttackAData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Playtime_Multiplayer.MonsterAttackAData");
    return result;
}
