#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\CharacterMovementComponent.hpp"
#include "MommyMovementComponent.hpp"
#include "NetworkMommy.hpp"
void _Script_Playtime_Multiplayer::MommyMovementComponent::Server_SetWantsToGrapple(bool In_WantsToGrapple) {
    return;
}
bool _Script_Playtime_Multiplayer::MommyMovementComponent::get_bCanPunch() {
    return (*(uint8_t*)((uintptr_t)this + 0xcf9 + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::MommyMovementComponent::set_bIgnoreShrinker(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xcf8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xcf8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Playtime_Multiplayer::MommyMovementComponent::get_bIgnoreShrinker() {
    return (*(uint8_t*)((uintptr_t)this + 0xcf8 + 0)) & 1 != 0;
}
bool _Script_Playtime_Multiplayer::MommyMovementComponent::get_bAttackSlow() {
    return (*(uint8_t*)((uintptr_t)this + 0xd04 + 0)) & 1 != 0;
}
float& _Script_Playtime_Multiplayer::MommyMovementComponent::get_MaxFallSpeed() {
    return *(float*)((uintptr_t)this + 0xd30);
}
float& _Script_Playtime_Multiplayer::MommyMovementComponent::get_AttackCooldown() {
    return *(float*)((uintptr_t)this + 0xcfc);
}
void _Script_Playtime_Multiplayer::MommyMovementComponent::set_bCanPunch(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xcf9 + 0);
    *(uint8_t*)((uintptr_t)this + 0xcf9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Playtime_Multiplayer::MommyMovementComponent::get_AttackSlowTimer() {
    return *(float*)((uintptr_t)this + 0xd00);
}
void _Script_Playtime_Multiplayer::MommyMovementComponent::set_bAttackSlow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd04 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd04 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Playtime_Multiplayer::NetworkMommy*& _Script_Playtime_Multiplayer::MommyMovementComponent::get_Owner() {
    return *(_Script_Playtime_Multiplayer::NetworkMommy**)((uintptr_t)this + 0xd08);
}
float& _Script_Playtime_Multiplayer::MommyMovementComponent::get_RunSpeed() {
    return *(float*)((uintptr_t)this + 0xd10);
}
bool _Script_Playtime_Multiplayer::MommyMovementComponent::get_bWantsToGrapple() {
    return (*(uint8_t*)((uintptr_t)this + 0xd14 + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::MommyMovementComponent::set_bWantsToGrapple(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd14 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd14 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Playtime_Multiplayer::MommyMovementComponent::get_MaxGrappleSpeed() {
    return *(float*)((uintptr_t)this + 0xd18);
}
float& _Script_Playtime_Multiplayer::MommyMovementComponent::get_GrappleAcceleration() {
    return *(float*)((uintptr_t)this + 0xd1c);
}
void* _Script_Playtime_Multiplayer::MommyMovementComponent::get_MonsterShrinkerClass() {
    return (void*)((uintptr_t)this + 0xd20);
}
float& _Script_Playtime_Multiplayer::MommyMovementComponent::get_PostAttackSpeed() {
    return *(float*)((uintptr_t)this + 0xd28);
}
float& _Script_Playtime_Multiplayer::MommyMovementComponent::get_RunAcceleration() {
    return *(float*)((uintptr_t)this + 0xd2c);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::MommyMovementComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.MommyMovementComponent");
    return result;
}
void _Script_Playtime_Multiplayer::MommyMovementComponent::PseudoConstruct(_Script_Playtime_Multiplayer::NetworkMommy* In_Owner) {
    return;
}
void _Script_Playtime_Multiplayer::MommyMovementComponent::AfterAttackSlow(float DeltaTime) {
    return;
}
