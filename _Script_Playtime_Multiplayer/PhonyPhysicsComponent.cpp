#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "PhonyPhysicsComponent.hpp"
_Script_Engine::SceneComponent*& _Script_Playtime_Multiplayer::PhonyPhysicsComponent::get_Target() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x1f8);
}
void _Script_Playtime_Multiplayer::PhonyPhysicsComponent::set_bDrawDebug(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x200 + 0);
    *(uint8_t*)((uintptr_t)this + 0x200 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Playtime_Multiplayer::PhonyPhysicsComponent::get_bReturnsToStartOrEnd() {
    return (*(uint8_t*)((uintptr_t)this + 0x201 + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::PhonyPhysicsComponent::set_bReturnsToStartOrEnd(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x201 + 0);
    *(uint8_t*)((uintptr_t)this + 0x201 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Playtime_Multiplayer::PhonyPhysicsComponent::get_bDrawDebug() {
    return (*(uint8_t*)((uintptr_t)this + 0x200 + 0)) & 1 != 0;
}
float& _Script_Playtime_Multiplayer::PhonyPhysicsComponent::get_Threshold() {
    return *(float*)((uintptr_t)this + 0x204);
}
float& _Script_Playtime_Multiplayer::PhonyPhysicsComponent::get_ReturnAcceleration() {
    return *(float*)((uintptr_t)this + 0x208);
}
float& _Script_Playtime_Multiplayer::PhonyPhysicsComponent::get_MaxSpeed() {
    return *(float*)((uintptr_t)this + 0x20c);
}
float& _Script_Playtime_Multiplayer::PhonyPhysicsComponent::get_Acceleration() {
    return *(float*)((uintptr_t)this + 0x210);
}
bool _Script_Playtime_Multiplayer::PhonyPhysicsComponent::get_bIsBeingPulled() {
    return (*(uint8_t*)((uintptr_t)this + 0x270 + 0)) & 1 != 0;
}
float& _Script_Playtime_Multiplayer::PhonyPhysicsComponent::get_Deceleration() {
    return *(float*)((uintptr_t)this + 0x214);
}
float& _Script_Playtime_Multiplayer::PhonyPhysicsComponent::get_DirectionalInfluence() {
    return *(float*)((uintptr_t)this + 0x218);
}
bool _Script_Playtime_Multiplayer::PhonyPhysicsComponent::get_bLocalHasPassedThreshold() {
    return (*(uint8_t*)((uintptr_t)this + 0x242 + 0)) & 1 != 0;
}
void* _Script_Playtime_Multiplayer::PhonyPhysicsComponent::get_ProgressMilestoneFlags() {
    return (void*)((uintptr_t)this + 0x220);
}
void* _Script_Playtime_Multiplayer::PhonyPhysicsComponent::get_ServerOnly_OnProgressMilestone() {
    return (void*)((uintptr_t)this + 0x230);
}
bool _Script_Playtime_Multiplayer::PhonyPhysicsComponent::get_bSpeedWasSetThisFrame() {
    return (*(uint8_t*)((uintptr_t)this + 0x240 + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::PhonyPhysicsComponent::set_bSpeedWasSetThisFrame(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x240 + 0);
    *(uint8_t*)((uintptr_t)this + 0x240 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Playtime_Multiplayer::PhonyPhysicsComponent::get_bNetHasPassedThreshold() {
    return (*(uint8_t*)((uintptr_t)this + 0x241 + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::PhonyPhysicsComponent::set_bNetHasPassedThreshold(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x241 + 0);
    *(uint8_t*)((uintptr_t)this + 0x241 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Playtime_Multiplayer::PhonyPhysicsComponent::HasPullingHands() {
    return;
}
void _Script_Playtime_Multiplayer::PhonyPhysicsComponent::set_bLocalHasPassedThreshold(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x242 + 0);
    *(uint8_t*)((uintptr_t)this + 0x242 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Playtime_Multiplayer::PhonyPhysicsComponent::get_bPlayerInputLock() {
    return (*(uint8_t*)((uintptr_t)this + 0x243 + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::PhonyPhysicsComponent::set_bPlayerInputLock(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x243 + 0);
    *(uint8_t*)((uintptr_t)this + 0x243 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Playtime_Multiplayer::PhonyPhysicsComponent::get_LocalProgress() {
    return *(float*)((uintptr_t)this + 0x244);
}
float& _Script_Playtime_Multiplayer::PhonyPhysicsComponent::get_NetProgress() {
    return *(float*)((uintptr_t)this + 0x248);
}
bool _Script_Playtime_Multiplayer::PhonyPhysicsComponent::HasAttachedHands() {
    return;
}
float& _Script_Playtime_Multiplayer::PhonyPhysicsComponent::get_LocalSpeed() {
    return *(float*)((uintptr_t)this + 0x24c);
}
float& _Script_Playtime_Multiplayer::PhonyPhysicsComponent::get_NetSpeed() {
    return *(float*)((uintptr_t)this + 0x250);
}
float& _Script_Playtime_Multiplayer::PhonyPhysicsComponent::get_CorrectionAlpha() {
    return *(float*)((uintptr_t)this + 0x254);
}
float& _Script_Playtime_Multiplayer::PhonyPhysicsComponent::get_TimeTillFinalCorrection() {
    return *(float*)((uintptr_t)this + 0x258);
}
bool _Script_Playtime_Multiplayer::PhonyPhysicsComponent::get_HasDoneFinalCorrection() {
    return (*(uint8_t*)((uintptr_t)this + 0x25c + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::PhonyPhysicsComponent::set_HasDoneFinalCorrection(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x25c + 0);
    *(uint8_t*)((uintptr_t)this + 0x25c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Playtime_Multiplayer::PhonyPhysicsComponent::get_HandMagnets() {
    return (void*)((uintptr_t)this + 0x260);
}
void _Script_Playtime_Multiplayer::PhonyPhysicsComponent::set_bIsBeingPulled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x270 + 0);
    *(uint8_t*)((uintptr_t)this + 0x270 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Playtime_Multiplayer::PhonyPhysicsComponent::get_TimeSinceLastAcceleration() {
    return *(float*)((uintptr_t)this + 0x274);
}
float& _Script_Playtime_Multiplayer::PhonyPhysicsComponent::get_ProgressTarget() {
    return *(float*)((uintptr_t)this + 0x278);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::PhonyPhysicsComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.PhonyPhysicsComponent");
    return result;
}
void _Script_Playtime_Multiplayer::PhonyPhysicsComponent::PseudoConstruct(_Script_Engine::SceneComponent* In_Target, void* In_HandMagnetComponents) {
    return;
}
void _Script_Playtime_Multiplayer::PhonyPhysicsComponent::OnRep_NetSpeed() {
    return;
}
void _Script_Playtime_Multiplayer::PhonyPhysicsComponent::OnRep_NetProgress() {
    return;
}
void _Script_Playtime_Multiplayer::PhonyPhysicsComponent::OnRep_NetHasPassedThreshold() {
    return;
}
float _Script_Playtime_Multiplayer::PhonyPhysicsComponent::GetPullAmount() {
    return;
}
void _Script_Playtime_Multiplayer::PhonyPhysicsComponent::DrawDebug() {
    return;
}
void _Script_Playtime_Multiplayer::PhonyPhysicsComponent::Accelerate(float& DeltaTime, float In_Acceleration) {
    return;
}
