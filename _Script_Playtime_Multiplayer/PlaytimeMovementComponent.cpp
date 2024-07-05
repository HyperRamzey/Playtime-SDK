#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\CharacterMovementComponent.hpp"
#include "..\_Script_Engine\SplineComponent.hpp"
#include "PerkPackage.hpp"
#include "PlaytimeMovementComponent.hpp"
float& _Script_Playtime_Multiplayer::PlaytimeMovementComponent::get_WalkSpeed() {
    return *(float*)((uintptr_t)this + 0xaf0);
}
void _Script_Playtime_Multiplayer::PlaytimeMovementComponent::set_RunKeyDown(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe40 + 0);
    *(uint8_t*)((uintptr_t)this + 0xe40 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Playtime_Multiplayer::PlaytimeMovementComponent::get_SplineAcceleration() {
    return *(float*)((uintptr_t)this + 0xe20);
}
float& _Script_Playtime_Multiplayer::PlaytimeMovementComponent::get_RunSpeed() {
    return *(float*)((uintptr_t)this + 0xaf4);
}
float& _Script_Playtime_Multiplayer::PlaytimeMovementComponent::get_RollSpeed() {
    return *(float*)((uintptr_t)this + 0xaf8);
}
float& _Script_Playtime_Multiplayer::PlaytimeMovementComponent::get_DashSpeed() {
    return *(float*)((uintptr_t)this + 0xafc);
}
void _Script_Playtime_Multiplayer::PlaytimeMovementComponent::SetDashDirection(_Script_CoreUObject::Vector In_Target) {
    return;
}
float& _Script_Playtime_Multiplayer::PlaytimeMovementComponent::get_WalkAcceleration() {
    return *(float*)((uintptr_t)this + 0xb08);
}
bool _Script_Playtime_Multiplayer::PlaytimeMovementComponent::get_bWantsToProne() {
    return (*(uint8_t*)((uintptr_t)this + 0xe04 + 0)) & 1 != 0;
}
float& _Script_Playtime_Multiplayer::PlaytimeMovementComponent::get_RollRechargeTimeLeft() {
    return *(float*)((uintptr_t)this + 0xdf4);
}
float& _Script_Playtime_Multiplayer::PlaytimeMovementComponent::get_NeedsRevivedSpeed() {
    return *(float*)((uintptr_t)this + 0xb00);
}
void _Script_Playtime_Multiplayer::PlaytimeMovementComponent::set_bWantsToDash(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe24 + 0);
    *(uint8_t*)((uintptr_t)this + 0xe24 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Playtime_Multiplayer::PlaytimeMovementComponent::NetworkSafe_SetWantsToProne(bool bInWantsToProne) {
    return;
}
float& _Script_Playtime_Multiplayer::PlaytimeMovementComponent::get_RunAcceleration() {
    return *(float*)((uintptr_t)this + 0xb0c);
}
float& _Script_Playtime_Multiplayer::PlaytimeMovementComponent::get_ProneSpeed() {
    return *(float*)((uintptr_t)this + 0xb04);
}
void _Script_Playtime_Multiplayer::PlaytimeMovementComponent::set_WantsToDash(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe34 + 0);
    *(uint8_t*)((uintptr_t)this + 0xe34 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
float& _Script_Playtime_Multiplayer::PlaytimeMovementComponent::get_RollAcceleration() {
    return *(float*)((uintptr_t)this + 0xb10);
}
float& _Script_Playtime_Multiplayer::PlaytimeMovementComponent::get_MinSwingSpeed() {
    return *(float*)((uintptr_t)this + 0xb14);
}
bool _Script_Playtime_Multiplayer::PlaytimeMovementComponent::get_WantsToProne() {
    return (*(uint8_t*)((uintptr_t)this + 0xe34 + 0)) & 4 != 0;
}
float& _Script_Playtime_Multiplayer::PlaytimeMovementComponent::get_MaxSwingSpeed() {
    return *(float*)((uintptr_t)this + 0xb18);
}
float _Script_Playtime_Multiplayer::PlaytimeMovementComponent::GetMaxRollRechargeTime() {
    return;
}
float& _Script_Playtime_Multiplayer::PlaytimeMovementComponent::get_SwingAcceleration() {
    return *(float*)((uintptr_t)this + 0xb1c);
}
float& _Script_Playtime_Multiplayer::PlaytimeMovementComponent::get_DashAcceleration() {
    return *(float*)((uintptr_t)this + 0xb20);
}
void* _Script_Playtime_Multiplayer::PlaytimeMovementComponent::get_RollDirection() {
    return (void*)((uintptr_t)this + 0xdf8);
}
void _Script_Playtime_Multiplayer::PlaytimeMovementComponent::set_bCanRoll(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xda9 + 0);
    *(uint8_t*)((uintptr_t)this + 0xda9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Playtime_Multiplayer::PlaytimeMovementComponent::get_MinDistance() {
    return *(float*)((uintptr_t)this + 0xb24);
}
float& _Script_Playtime_Multiplayer::PlaytimeMovementComponent::get_LocalStrafe() {
    return *(float*)((uintptr_t)this + 0xb28);
}
float& _Script_Playtime_Multiplayer::PlaytimeMovementComponent::get_Perk_RollRechargeTimeModifier() {
    return *(float*)((uintptr_t)this + 0xd50);
}
void _Script_Playtime_Multiplayer::PlaytimeMovementComponent::Server_Stun(float Duration) {
    return;
}
float& _Script_Playtime_Multiplayer::PlaytimeMovementComponent::get_Perk_MasterRollDurationModifier() {
    return *(float*)((uintptr_t)this + 0xd54);
}
float& _Script_Playtime_Multiplayer::PlaytimeMovementComponent::get_Perk_CrouchSpeedModifier() {
    return *(float*)((uintptr_t)this + 0xd58);
}
void* _Script_Playtime_Multiplayer::PlaytimeMovementComponent::get_PerksCopy() {
    return (void*)((uintptr_t)this + 0xd5c);
}
void* _Script_Playtime_Multiplayer::PlaytimeMovementComponent::get_OnEndSpline() {
    return (void*)((uintptr_t)this + 0xd78);
}
float& _Script_Playtime_Multiplayer::PlaytimeMovementComponent::get_MaxSplineSpeed() {
    return *(float*)((uintptr_t)this + 0xe1c);
}
float& _Script_Playtime_Multiplayer::PlaytimeMovementComponent::get_RollCharges() {
    return *(float*)((uintptr_t)this + 0xdac);
}
bool _Script_Playtime_Multiplayer::PlaytimeMovementComponent::get_HitWithWebs() {
    return (*(uint8_t*)((uintptr_t)this + 0xd88 + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::PlaytimeMovementComponent::set_HitWithWebs(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd88 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd88 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Playtime_Multiplayer::PlaytimeMovementComponent::get_SpeedBoostModifier() {
    return *(float*)((uintptr_t)this + 0xd9c);
}
bool _Script_Playtime_Multiplayer::PlaytimeMovementComponent::get_bRechargeDoOnce() {
    return (*(uint8_t*)((uintptr_t)this + 0xe48 + 0)) & 1 != 0;
}
float& _Script_Playtime_Multiplayer::PlaytimeMovementComponent::get_StunSpeedModifier() {
    return *(float*)((uintptr_t)this + 0xda4);
}
bool _Script_Playtime_Multiplayer::PlaytimeMovementComponent::get_WantsToBeStunned() {
    return (*(uint8_t*)((uintptr_t)this + 0xda8 + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::PlaytimeMovementComponent::set_WantsToBeStunned(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xda8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xda8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Playtime_Multiplayer::PlaytimeMovementComponent::get_bCanRoll() {
    return (*(uint8_t*)((uintptr_t)this + 0xda9 + 0)) & 1 != 0;
}
bool _Script_Playtime_Multiplayer::PlaytimeMovementComponent::get_RunKeyDown() {
    return (*(uint8_t*)((uintptr_t)this + 0xe40 + 0)) & 1 != 0;
}
void* _Script_Playtime_Multiplayer::PlaytimeMovementComponent::get_OnRepCanRollEventHandler() {
    return (void*)((uintptr_t)this + 0xdb8);
}
float& _Script_Playtime_Multiplayer::PlaytimeMovementComponent::get_TargetCapsuleHeight() {
    return *(float*)((uintptr_t)this + 0xe50);
}
void* _Script_Playtime_Multiplayer::PlaytimeMovementComponent::get_OnBegunRoll() {
    return (void*)((uintptr_t)this + 0xdc8);
}
void* _Script_Playtime_Multiplayer::PlaytimeMovementComponent::get_OnBeginRollRecharge() {
    return (void*)((uintptr_t)this + 0xdd8);
}
bool _Script_Playtime_Multiplayer::PlaytimeMovementComponent::get_bCrouchingIsClientSimulated() {
    return (*(uint8_t*)((uintptr_t)this + 0xe4b + 0)) & 1 != 0;
}
float& _Script_Playtime_Multiplayer::PlaytimeMovementComponent::get_MaxRollTime() {
    return *(float*)((uintptr_t)this + 0xde8);
}
float& _Script_Playtime_Multiplayer::PlaytimeMovementComponent::get_RollTimeLeft() {
    return *(float*)((uintptr_t)this + 0xdec);
}
bool _Script_Playtime_Multiplayer::PlaytimeMovementComponent::get_bWantsToSwing() {
    return (*(uint8_t*)((uintptr_t)this + 0xe49 + 0)) & 1 != 0;
}
float& _Script_Playtime_Multiplayer::PlaytimeMovementComponent::get_MaxRollRechargeTime() {
    return *(float*)((uintptr_t)this + 0xdf0);
}
void _Script_Playtime_Multiplayer::PlaytimeMovementComponent::set_bWantsToProne(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe04 + 0);
    *(uint8_t*)((uintptr_t)this + 0xe04 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Playtime_Multiplayer::PlaytimeMovementComponent::get_WebSpeedMultiplier() {
    return *(float*)((uintptr_t)this + 0xe44);
}
void* _Script_Playtime_Multiplayer::PlaytimeMovementComponent::get_OnWantsProne() {
    return (void*)((uintptr_t)this + 0xe08);
}
void _Script_Playtime_Multiplayer::PlaytimeMovementComponent::NetworkSafe_SetWantsToDash(bool In_WantsToDash) {
    return;
}
float& _Script_Playtime_Multiplayer::PlaytimeMovementComponent::get_MinSplineSpeed() {
    return *(float*)((uintptr_t)this + 0xe18);
}
bool _Script_Playtime_Multiplayer::PlaytimeMovementComponent::get_bWantsToDash() {
    return (*(uint8_t*)((uintptr_t)this + 0xe24 + 0)) & 1 != 0;
}
bool _Script_Playtime_Multiplayer::PlaytimeMovementComponent::get_WantsToRun() {
    return (*(uint8_t*)((uintptr_t)this + 0xe34 + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::PlaytimeMovementComponent::set_WantsToRun(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe34 + 0);
    *(uint8_t*)((uintptr_t)this + 0xe34 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Playtime_Multiplayer::PlaytimeMovementComponent::get_WantsToDash() {
    return (*(uint8_t*)((uintptr_t)this + 0xe34 + 0)) & 2 != 0;
}
void _Script_Playtime_Multiplayer::PlaytimeMovementComponent::set_WantsToProne(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe34 + 0);
    *(uint8_t*)((uintptr_t)this + 0xe34 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_Playtime_Multiplayer::PlaytimeMovementComponent::set_bRechargeDoOnce(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe48 + 0);
    *(uint8_t*)((uintptr_t)this + 0xe48 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Playtime_Multiplayer::PlaytimeMovementComponent::set_bWantsToSwing(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe49 + 0);
    *(uint8_t*)((uintptr_t)this + 0xe49 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Playtime_Multiplayer::PlaytimeMovementComponent::get_bWantsToSpline() {
    return (*(uint8_t*)((uintptr_t)this + 0xe4a + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::PlaytimeMovementComponent::set_bCrouchingIsClientSimulated(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe4b + 0);
    *(uint8_t*)((uintptr_t)this + 0xe4b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Playtime_Multiplayer::PlaytimeMovementComponent::set_bWantsToSpline(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe4a + 0);
    *(uint8_t*)((uintptr_t)this + 0xe4a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Playtime_Multiplayer::PlaytimeMovementComponent::get_TargetCapsuleRadius() {
    return *(float*)((uintptr_t)this + 0xe4c);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::PlaytimeMovementComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.PlaytimeMovementComponent");
    return result;
}
void _Script_Playtime_Multiplayer::PlaytimeMovementComponent::StopSpeedBoost() {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeMovementComponent::StartSpeedBoost() {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeMovementComponent::SetWantsToProne(bool bInWantsToProne) {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeMovementComponent::SetRunning(bool In_Running) {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeMovementComponent::Server_SyncStrafe(float Strafe) {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeMovementComponent::Server_SetWantsToSwing(bool In_Swinging) {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeMovementComponent::Server_SetWantsToProne(bool bInWantsToProne) {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeMovementComponent::Server_SetWantsToDash(bool In_WantsToDash) {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeMovementComponent::Server_ActivateRoll() {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeMovementComponent::OnRep_CanRoll() {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeMovementComponent::OnRep_bWantsToProne() {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeMovementComponent::OnPerkSaveGameChanged(_Script_Playtime_Multiplayer::PerkPackage In_PerkSaveGame) {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeMovementComponent::NetworkSafe_SwitchSpline(_Script_Engine::SplineComponent* SplineToUse, float In_MinSplineSpeed, float In_MaxSpline, float In_SplineAcceleration) {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeMovementComponent::NetworkSafe_Stun(float Duration) {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeMovementComponent::NetworkSafe_SetWantsToSpline(bool In_WantsToSpline, _Script_Engine::SplineComponent* SplineToUse, float In_MinSplineSpeed, float In_MaxSpline, float In_SplineAcceleration) {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeMovementComponent::NetworkSafe_ActivateRoll() {
    return;
}
bool _Script_Playtime_Multiplayer::PlaytimeMovementComponent::IsRolling() {
    return;
}
bool _Script_Playtime_Multiplayer::PlaytimeMovementComponent::IsCustomMovementMode(void* custom_movement_mode) {
    return;
}
bool _Script_Playtime_Multiplayer::PlaytimeMovementComponent::GetWantsToProne() {
    return;
}
float _Script_Playtime_Multiplayer::PlaytimeMovementComponent::GetSplineProgress() {
    return;
}
float _Script_Playtime_Multiplayer::PlaytimeMovementComponent::GetMaxRollTime() {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeMovementComponent::Client_SyncSpline(void*& SplinePoints) {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeMovementComponent::Client_SwitchSpline(_Script_Engine::SplineComponent* SplineToUse, float In_MinSplineSpeed, float In_MaxSpline, float In_SplineAcceleration) {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeMovementComponent::Client_SetWantsToSpline(bool In_WantsToSpline, _Script_Engine::SplineComponent* SplineToUse, float In_MinSplineSpeed, float In_MaxSpline, float In_SplineAcceleration) {
    return;
}
