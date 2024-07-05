#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
#include "MonsterDataAsset.hpp"
void* _Script_Playtime_Multiplayer::MonsterDataAsset::get_AttackA() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Playtime_Multiplayer::MonsterDataAsset::get_MonsterMovementData() {
    return (void*)((uintptr_t)this + 0x30);
}
float& _Script_Playtime_Multiplayer::MonsterDataAsset::get_AttackRange() {
    return *(float*)((uintptr_t)this + 0x3c);
}
void* _Script_Playtime_Multiplayer::MonsterDataAsset::get_AttackB() {
    return (void*)((uintptr_t)this + 0x4c);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::MonsterDataAsset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.MonsterDataAsset");
    return result;
}
