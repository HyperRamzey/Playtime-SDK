#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\CharacterMovementComponent.hpp"
#include "..\_Script_Engine\CurveFloat.hpp"
#include "KangarooMovementComponent.hpp"
#include "NetworkKangaroo.hpp"
bool _Script_Playtime_Multiplayer::KangarooMovementComponent::NetworkSafe_JumpReleaseCharge(float ChargeAmount) {
    return;
}
bool _Script_Playtime_Multiplayer::KangarooMovementComponent::get_bIgnoreShrinker() {
    return (*(uint8_t*)((uintptr_t)this + 0xcf8 + 0)) & 1 != 0;
}
bool _Script_Playtime_Multiplayer::KangarooMovementComponent::get_bIsSlowed() {
    return (*(uint8_t*)((uintptr_t)this + 0xcfa + 0)) & 1 != 0;
}
float& _Script_Playtime_Multiplayer::KangarooMovementComponent::get_PunchCooldown() {
    return *(float*)((uintptr_t)this + 0xd64);
}
void _Script_Playtime_Multiplayer::KangarooMovementComponent::set_bIgnoreShrinker(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xcf8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xcf8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Playtime_Multiplayer::KangarooMovementComponent::get_bIsChargingLaunch() {
    return (*(uint8_t*)((uintptr_t)this + 0xcf9 + 0)) & 1 != 0;
}
_Script_Playtime_Multiplayer::NetworkKangaroo*& _Script_Playtime_Multiplayer::KangarooMovementComponent::get_Owner() {
    return *(_Script_Playtime_Multiplayer::NetworkKangaroo**)((uintptr_t)this + 0xd10);
}
bool _Script_Playtime_Multiplayer::KangarooMovementComponent::NetworkSafe_JumpBeginCharge() {
    return;
}
void _Script_Playtime_Multiplayer::KangarooMovementComponent::set_bIsChargingLaunch(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xcf9 + 0);
    *(uint8_t*)((uintptr_t)this + 0xcf9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Playtime_Multiplayer::KangarooMovementComponent::get_BarrageAcceleration() {
    return *(float*)((uintptr_t)this + 0xd38);
}
void* _Script_Playtime_Multiplayer::KangarooMovementComponent::get_EndedBarraging() {
    return (void*)((uintptr_t)this + 0xd00);
}
void _Script_Playtime_Multiplayer::KangarooMovementComponent::set_bBarraging(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd40 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd40 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Playtime_Multiplayer::KangarooMovementComponent::set_bIsSlowed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xcfa + 0);
    *(uint8_t*)((uintptr_t)this + 0xcfa + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Playtime_Multiplayer::KangarooMovementComponent::get_MonsterShrinkerClass() {
    return (void*)((uintptr_t)this + 0xd18);
}
float& _Script_Playtime_Multiplayer::KangarooMovementComponent::get_RunSpeed() {
    return *(float*)((uintptr_t)this + 0xd20);
}
float& _Script_Playtime_Multiplayer::KangarooMovementComponent::get_AttackSlowDuration() {
    return *(float*)((uintptr_t)this + 0xd24);
}
float& _Script_Playtime_Multiplayer::KangarooMovementComponent::get_PostAttackSpeed() {
    return *(float*)((uintptr_t)this + 0xd28);
}
float& _Script_Playtime_Multiplayer::KangarooMovementComponent::get_BarrageSpeed() {
    return *(float*)((uintptr_t)this + 0xd2c);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::KangarooMovementComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.KangarooMovementComponent");
    return result;
}
float& _Script_Playtime_Multiplayer::KangarooMovementComponent::get_SlowedSpeed() {
    return *(float*)((uintptr_t)this + 0xd30);
}
float& _Script_Playtime_Multiplayer::KangarooMovementComponent::get_RunAcceleration() {
    return *(float*)((uintptr_t)this + 0xd34);
}
float& _Script_Playtime_Multiplayer::KangarooMovementComponent::get_MaxFallSpeed() {
    return *(float*)((uintptr_t)this + 0xd3c);
}
bool _Script_Playtime_Multiplayer::KangarooMovementComponent::get_bBarraging() {
    return (*(uint8_t*)((uintptr_t)this + 0xd40 + 0)) & 1 != 0;
}
float& _Script_Playtime_Multiplayer::KangarooMovementComponent::get_BarrageTimeRemaining() {
    return *(float*)((uintptr_t)this + 0xd44);
}
float& _Script_Playtime_Multiplayer::KangarooMovementComponent::get_PostPunchBarrageDuration() {
    return *(float*)((uintptr_t)this + 0xd48);
}
bool _Script_Playtime_Multiplayer::KangarooMovementComponent::get_AttackSlow() {
    return (*(uint8_t*)((uintptr_t)this + 0xd4c + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::KangarooMovementComponent::set_AttackSlow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd4c + 0);
    *(uint8_t*)((uintptr_t)this + 0xd4c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Playtime_Multiplayer::KangarooMovementComponent::get_BP_Punch() {
    return (void*)((uintptr_t)this + 0xd50);
}
float& _Script_Playtime_Multiplayer::KangarooMovementComponent::get_PunchTimer() {
    return *(float*)((uintptr_t)this + 0xd60);
}
float& _Script_Playtime_Multiplayer::KangarooMovementComponent::get_CurrentJumpChargeAmount() {
    return *(float*)((uintptr_t)this + 0xd78);
}
void _Script_Playtime_Multiplayer::KangarooMovementComponent::DrawProjectedPath() {
    return;
}
_Script_Engine::CurveFloat*& _Script_Playtime_Multiplayer::KangarooMovementComponent::get_LaunchPitchToJumpPowerCurve() {
    return *(_Script_Engine::CurveFloat**)((uintptr_t)this + 0xd80);
}
_Script_Engine::CurveFloat*& _Script_Playtime_Multiplayer::KangarooMovementComponent::get_LookPitchToLaunchPitchCurve() {
    return *(_Script_Engine::CurveFloat**)((uintptr_t)this + 0xd88);
}
float& _Script_Playtime_Multiplayer::KangarooMovementComponent::get_CurrentFOV() {
    return *(float*)((uintptr_t)this + 0xd90);
}
float& _Script_Playtime_Multiplayer::KangarooMovementComponent::get_InitFOV() {
    return *(float*)((uintptr_t)this + 0xd94);
}
float& _Script_Playtime_Multiplayer::KangarooMovementComponent::get_JumpChargeTime() {
    return *(float*)((uintptr_t)this + 0xd98);
}
float& _Script_Playtime_Multiplayer::KangarooMovementComponent::get_JumpMaxLaunchPower() {
    return *(float*)((uintptr_t)this + 0xd9c);
}
void _Script_Playtime_Multiplayer::KangarooMovementComponent::Multicast_Punch() {
    return;
}
void* _Script_Playtime_Multiplayer::KangarooMovementComponent::get_HasFullyCharged() {
    return (void*)((uintptr_t)this + 0xda8);
}
void _Script_Playtime_Multiplayer::KangarooMovementComponent::StartAttackSlow() {
    return;
}
void _Script_Playtime_Multiplayer::KangarooMovementComponent::SetPunchPressed(bool In_PunchPressed) {
    return;
}
void _Script_Playtime_Multiplayer::KangarooMovementComponent::Server_Punch() {
    return;
}
void _Script_Playtime_Multiplayer::KangarooMovementComponent::Server_JumpReleaseCharge(float ChargeAmount) {
    return;
}
void _Script_Playtime_Multiplayer::KangarooMovementComponent::Server_JumpBeginCharge() {
    return;
}
void _Script_Playtime_Multiplayer::KangarooMovementComponent::PseudoConstruct(_Script_Playtime_Multiplayer::NetworkKangaroo* In_Owner) {
    return;
}
void _Script_Playtime_Multiplayer::KangarooMovementComponent::NetworkSafe_Punch() {
    return;
}
bool _Script_Playtime_Multiplayer::KangarooMovementComponent::IsLaunchVerified(float AmountToCheck) {
    return;
}
bool _Script_Playtime_Multiplayer::KangarooMovementComponent::IsBoxyBarraging() {
    return;
}
void _Script_Playtime_Multiplayer::KangarooMovementComponent::EndAttackSlow() {
    return;
}
