#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\CharacterMovementComponent.hpp"
#include "HuggyMovementComponent.hpp"
void _Script_Playtime_Multiplayer::HuggyMovementComponent::set_AttackSlow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd1d + 0);
    *(uint8_t*)((uintptr_t)this + 0xd1d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Playtime_Multiplayer::HuggyMovementComponent::get_bIgnoreShrinker() {
    return (*(uint8_t*)((uintptr_t)this + 0xd10 + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::HuggyMovementComponent::set_bIgnoreShrinker(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd10 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd10 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Playtime_Multiplayer::HuggyMovementComponent::get_ChargeCooldown() {
    return *(float*)((uintptr_t)this + 0xd14);
}
void _Script_Playtime_Multiplayer::HuggyMovementComponent::set_CanCharge(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd1c + 0);
    *(uint8_t*)((uintptr_t)this + 0xd1c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Playtime_Multiplayer::HuggyMovementComponent::get_EndedCharging() {
    return (void*)((uintptr_t)this + 0xd30);
}
float& _Script_Playtime_Multiplayer::HuggyMovementComponent::get_AttackSlowTimer() {
    return *(float*)((uintptr_t)this + 0xd18);
}
bool _Script_Playtime_Multiplayer::HuggyMovementComponent::get_CanCharge() {
    return (*(uint8_t*)((uintptr_t)this + 0xd1c + 0)) & 1 != 0;
}
bool _Script_Playtime_Multiplayer::HuggyMovementComponent::get_AttackSlow() {
    return (*(uint8_t*)((uintptr_t)this + 0xd1d + 0)) & 1 != 0;
}
void* _Script_Playtime_Multiplayer::HuggyMovementComponent::get_StartedCharging() {
    return (void*)((uintptr_t)this + 0xd20);
}
void* _Script_Playtime_Multiplayer::HuggyMovementComponent::get_HuggyShrinkerClass() {
    return (void*)((uintptr_t)this + 0xd40);
}
float& _Script_Playtime_Multiplayer::HuggyMovementComponent::get_RunSpeed() {
    return *(float*)((uintptr_t)this + 0xd48);
}
bool _Script_Playtime_Multiplayer::HuggyMovementComponent::IsHuggyCharging() {
    return;
}
void _Script_Playtime_Multiplayer::HuggyMovementComponent::TimerForRecharge() {
    return;
}
float& _Script_Playtime_Multiplayer::HuggyMovementComponent::get_PostAttackSpeed() {
    return *(float*)((uintptr_t)this + 0xd4c);
}
float& _Script_Playtime_Multiplayer::HuggyMovementComponent::get_ChargeSpeed() {
    return *(float*)((uintptr_t)this + 0xd50);
}
float& _Script_Playtime_Multiplayer::HuggyMovementComponent::get_RunAcceleration() {
    return *(float*)((uintptr_t)this + 0xd54);
}
float& _Script_Playtime_Multiplayer::HuggyMovementComponent::get_ChargeAcceleration() {
    return *(float*)((uintptr_t)this + 0xd58);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::HuggyMovementComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.HuggyMovementComponent");
    return result;
}
void _Script_Playtime_Multiplayer::HuggyMovementComponent::Server_BeginCharging(bool Is_Charging) {
    return;
}
void _Script_Playtime_Multiplayer::HuggyMovementComponent::NetworkSafe_BeginCharging(bool Is_Charging) {
    return;
}
void _Script_Playtime_Multiplayer::HuggyMovementComponent::EndCharging() {
    return;
}
void _Script_Playtime_Multiplayer::HuggyMovementComponent::AfterAttackSlow(float DeltaTime) {
    return;
}
