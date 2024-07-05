#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "MonsterHUDInterface.hpp"
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::MonsterHUDInterface::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.MonsterHUDInterface");
    return result;
}
void _Script_Playtime_Multiplayer::MonsterHUDInterface::UpdateToyCount(void*& ToysFound) {
    return;
}
void _Script_Playtime_Multiplayer::MonsterHUDInterface::SetSabotageIcon(void*& SabotageName) {
    return;
}
void _Script_Playtime_Multiplayer::MonsterHUDInterface::ShowEmotes(void* Character) {
    return;
}
void _Script_Playtime_Multiplayer::MonsterHUDInterface::SetCrosshairColor(_Script_CoreUObject::LinearColor Color) {
    return;
}
void _Script_Playtime_Multiplayer::MonsterHUDInterface::SetCrosshairProgress(float Progress) {
    return;
}
void _Script_Playtime_Multiplayer::MonsterHUDInterface::ResetRadialRecharge() {
    return;
}
void _Script_Playtime_Multiplayer::MonsterHUDInterface::RadialRecharge(float Duration) {
    return;
}
void _Script_Playtime_Multiplayer::MonsterHUDInterface::PlayRechargeAnim(int32_t AbilityIndex, float Cooldown) {
    return;
}
void _Script_Playtime_Multiplayer::MonsterHUDInterface::PlayHitmarker() {
    return;
}
void _Script_Playtime_Multiplayer::MonsterHUDInterface::PlayAttackAnimation(float Duration) {
    return;
}
void _Script_Playtime_Multiplayer::MonsterHUDInterface::CheckDownPlayers() {
    return;
}
