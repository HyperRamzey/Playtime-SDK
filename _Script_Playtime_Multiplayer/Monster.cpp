#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "ANetworkCharacter.hpp"
#include "Monster.hpp"
#include "PlaytimeCharacter.hpp"
void _Script_Playtime_Multiplayer::Monster::Server_TryPunch() {
    return;
}
_Script_Playtime_Multiplayer::ANetworkCharacter*& _Script_Playtime_Multiplayer::Monster::get_CarriedPlayer() {
    return *(_Script_Playtime_Multiplayer::ANetworkCharacter**)((uintptr_t)this + 0x5b0);
}
void _Script_Playtime_Multiplayer::Monster::BP_SetSabotageIconFromName(void* Name) {
    return;
}
int32_t& _Script_Playtime_Multiplayer::Monster::get_AttackDamage() {
    return *(int32_t*)((uintptr_t)this + 0x5a0);
}
void _Script_Playtime_Multiplayer::Monster::set_CanPunch(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5ac + 0);
    *(uint8_t*)((uintptr_t)this + 0x5ac + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Playtime_Multiplayer::Monster::get_SabotageName() {
    return (void*)((uintptr_t)this + 0x5bc);
}
void _Script_Playtime_Multiplayer::Monster::set_bCarryingPlayer(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5ad + 0);
    *(uint8_t*)((uintptr_t)this + 0x5ad + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Playtime_Multiplayer::Monster::get_AttackRange() {
    return *(float*)((uintptr_t)this + 0x5a4);
}
float& _Script_Playtime_Multiplayer::Monster::get_AttackCooldown() {
    return *(float*)((uintptr_t)this + 0x5a8);
}
_Script_Playtime_Multiplayer::ANetworkCharacter* _Script_Playtime_Multiplayer::Monster::GetCarriedPlayer() {
    return;
}
bool _Script_Playtime_Multiplayer::Monster::get_bIsInVent() {
    return (*(uint8_t*)((uintptr_t)this + 0x5b8 + 0)) & 1 != 0;
}
bool _Script_Playtime_Multiplayer::Monster::get_CanPunch() {
    return (*(uint8_t*)((uintptr_t)this + 0x5ac + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::Monster::DropPlayer() {
    return;
}
bool _Script_Playtime_Multiplayer::Monster::get_bCarryingPlayer() {
    return (*(uint8_t*)((uintptr_t)this + 0x5ad + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::Monster::set_bIsInVent(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5b8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x5b8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Playtime_Multiplayer::Monster::get_ClientDesiredSabotageName() {
    return (void*)((uintptr_t)this + 0x5c4);
}
int32_t& _Script_Playtime_Multiplayer::Monster::get_SabotageLevel() {
    return *(int32_t*)((uintptr_t)this + 0x5cc);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::Monster::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.Monster");
    return result;
}
void _Script_Playtime_Multiplayer::Monster::TraceAttack() {
    return;
}
void _Script_Playtime_Multiplayer::Monster::PickupPlayer(_Script_Playtime_Multiplayer::ANetworkCharacter* Player) {
    return;
}
void _Script_Playtime_Multiplayer::Monster::OnRep_CarryingPlayer() {
    return;
}
void _Script_Playtime_Multiplayer::Monster::OnGetPerksSuccess(void*& Perks) {
    return;
}
void _Script_Playtime_Multiplayer::Monster::LoadSabotages() {
    return;
}
void _Script_Playtime_Multiplayer::Monster::OnGetPerksFailure(void* Message) {
    return;
}
void _Script_Playtime_Multiplayer::Monster::BP_OnAttackHit(_Script_Playtime_Multiplayer::ANetworkCharacter* Player) {
    return;
}
void _Script_Playtime_Multiplayer::Monster::Multicast_PickupPlayer(_Script_Playtime_Multiplayer::ANetworkCharacter* Survivor) {
    return;
}
void _Script_Playtime_Multiplayer::Monster::Multicast_DropPlayer(_Script_Playtime_Multiplayer::ANetworkCharacter* Survivor) {
    return;
}
bool _Script_Playtime_Multiplayer::Monster::IsCarryingPlayer() {
    return;
}
void* _Script_Playtime_Multiplayer::Monster::GetSelectedSabotage() {
    return;
}
int32_t _Script_Playtime_Multiplayer::Monster::GetSabotageLevel() {
    return;
}
void _Script_Playtime_Multiplayer::Monster::GetSabotageData(void*& Name, int32_t& Level) {
    return;
}
void* _Script_Playtime_Multiplayer::Monster::GetMonsterName() {
    return;
}
void* _Script_Playtime_Multiplayer::Monster::GetMonsterHud() {
    return;
}
void _Script_Playtime_Multiplayer::Monster::BP_ShowHoleNav(bool Shown) {
    return;
}
void _Script_Playtime_Multiplayer::Monster::BP_OnRep_CarryingPlayer() {
    return;
}
void _Script_Playtime_Multiplayer::Monster::BP_OnAttack() {
    return;
}
void _Script_Playtime_Multiplayer::Monster::BP_Jumpscare(_Script_Playtime_Multiplayer::ANetworkCharacter* Player) {
    return;
}
bool _Script_Playtime_Multiplayer::Monster::BP_CheckLocker(_Script_Engine::Actor* Actor) {
    return;
}
bool _Script_Playtime_Multiplayer::Monster::BP_CheckBoogieBot(_Script_Engine::Actor* Actor) {
    return;
}
bool _Script_Playtime_Multiplayer::Monster::AttackTripleTrace(_Script_CoreUObject::Vector Start, _Script_CoreUObject::Vector End, float CapsuleHalfHeight) {
    return;
}
_Script_Engine::HitResult _Script_Playtime_Multiplayer::Monster::AttackTrace() {
    return;
}
