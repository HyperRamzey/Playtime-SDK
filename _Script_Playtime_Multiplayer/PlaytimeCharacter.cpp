#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\AIPerceptionComponent.hpp"
#include "..\_Script_AIModule\AISenseConfig_Sight.hpp"
#include "..\_Script_AIModule\AIStimulus.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\Character.hpp"
#include "PlaytimeCharacter.hpp"
#include "PresetSlot.hpp"
#include "TooltipComponent.hpp"
void* _Script_Playtime_Multiplayer::PlaytimeCharacter::get_OwnerDesiredPreset() {
    return (void*)((uintptr_t)this + 0x530);
}
_Script_AIModule::AISenseConfig_Sight*& _Script_Playtime_Multiplayer::PlaytimeCharacter::get_Sight() {
    return *(_Script_AIModule::AISenseConfig_Sight**)((uintptr_t)this + 0x4b8);
}
void* _Script_Playtime_Multiplayer::PlaytimeCharacter::get_Preset() {
    return (void*)((uintptr_t)this + 0x4d8);
}
void _Script_Playtime_Multiplayer::PlaytimeCharacter::Owner_ResetIdleTimer() {
    return;
}
_Script_AIModule::AIPerceptionComponent*& _Script_Playtime_Multiplayer::PlaytimeCharacter::get_PerceptionComponent() {
    return *(_Script_AIModule::AIPerceptionComponent**)((uintptr_t)this + 0x4c0);
}
void _Script_Playtime_Multiplayer::PlaytimeCharacter::ShowTooltipIfAllowed(_Script_Engine::Actor* Actor, _Script_Playtime_Multiplayer::TooltipComponent* Tooltip) {
    return;
}
bool _Script_Playtime_Multiplayer::PlaytimeCharacter::get_IdleTimerEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x4d0 + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::PlaytimeCharacter::set_IdleTimerEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4d0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4d0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Playtime_Multiplayer::PlaytimeCharacter::get_bIsAFKKickEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x589 + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::PlaytimeCharacter::set_bIsAFKKickEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x589 + 0);
    *(uint8_t*)((uintptr_t)this + 0x589 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Playtime_Multiplayer::PlaytimeCharacter::get_TotalKickTime() {
    return *(float*)((uintptr_t)this + 0x58c);
}
void* _Script_Playtime_Multiplayer::PlaytimeCharacter::get_IdleWarningTimer() {
    return (void*)((uintptr_t)this + 0x590);
}
void* _Script_Playtime_Multiplayer::PlaytimeCharacter::get_IdleTimer() {
    return (void*)((uintptr_t)this + 0x598);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::PlaytimeCharacter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.PlaytimeCharacter");
    return result;
}
void _Script_Playtime_Multiplayer::PlaytimeCharacter::SetIsInVent(bool InVent) {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeCharacter::Server_SetCosmetics(_Script_Playtime_Multiplayer::PresetSlot Cosmetics) {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeCharacter::Server_KnockBack(_Script_CoreUObject::Vector KnockBackOrigin, float Horizontal, float Vertical) {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeCharacter::Owner_TryResetIdleTimer(float InputMagnitude) {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeCharacter::Owner_SetCosmetics(_Script_Playtime_Multiplayer::PresetSlot Cosmetics) {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeCharacter::BP_ShowIdleWarning() {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeCharacter::OnTargetPerceptionUpdated(_Script_Engine::Actor* Actor, _Script_AIModule::AIStimulus Stimulus) {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeCharacter::OnSetCosmeticsInventorySuccess(void*& Items) {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeCharacter::OnSetCosmeticsInventoryFailure(void* FailureMessage) {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeCharacter::OnRep_Preset() {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeCharacter::OnExitedVent() {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeCharacter::OnEnteredVent() {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeCharacter::KickIdlePlayer() {
    return;
}
bool _Script_Playtime_Multiplayer::PlaytimeCharacter::IsInVent() {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeCharacter::IdleTimerTimeout() {
    return;
}
_Script_Playtime_Multiplayer::PresetSlot _Script_Playtime_Multiplayer::PlaytimeCharacter::GetCosmetics() {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeCharacter::EnableIdleTimer(bool Enabled) {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeCharacter::Client_ResetIdleTimer() {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeCharacter::BP_OnRep_Preset() {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeCharacter::BP_KickPlayer() {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeCharacter::BP_IdleKickReset() {
    return;
}
