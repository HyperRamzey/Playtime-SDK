#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AnimMontage.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "ANetworkCharacter.hpp"
#include "HidingSpot.hpp"
void* _Script_Playtime_Multiplayer::HidingSpot::get_EnterLocation() {
    return (void*)((uintptr_t)this + 0x240);
}
_Script_Engine::SceneComponent*& _Script_Playtime_Multiplayer::HidingSpot::get_Enter() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x228);
}
_Script_Engine::SceneComponent*& _Script_Playtime_Multiplayer::HidingSpot::get_Hide() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x230);
}
void* _Script_Playtime_Multiplayer::HidingSpot::get_HideLocation() {
    return (void*)((uintptr_t)this + 0x270);
}
_Script_Playtime_Multiplayer::ANetworkCharacter*& _Script_Playtime_Multiplayer::HidingSpot::get_Player() {
    return *(_Script_Playtime_Multiplayer::ANetworkCharacter**)((uintptr_t)this + 0x2a0);
}
bool _Script_Playtime_Multiplayer::HidingSpot::get_UsingRootMotion() {
    return (*(uint8_t*)((uintptr_t)this + 0x2b0 + 0)) & 1 != 0;
}
void* _Script_Playtime_Multiplayer::HidingSpot::get_NameInDataTable() {
    return (void*)((uintptr_t)this + 0x2a8);
}
void _Script_Playtime_Multiplayer::HidingSpot::set_UsingRootMotion(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2b0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2b0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::AnimMontage*& _Script_Playtime_Multiplayer::HidingSpot::get_EnterPose() {
    return *(_Script_Engine::AnimMontage**)((uintptr_t)this + 0x2b8);
}
_Script_Engine::AnimMontage*& _Script_Playtime_Multiplayer::HidingSpot::get_ExitPose() {
    return *(_Script_Engine::AnimMontage**)((uintptr_t)this + 0x2c0);
}
_Script_Engine::AnimMontage*& _Script_Playtime_Multiplayer::HidingSpot::get_MonsterInteractVacant() {
    return *(_Script_Engine::AnimMontage**)((uintptr_t)this + 0x2d0);
}
_Script_Engine::AnimMontage*& _Script_Playtime_Multiplayer::HidingSpot::get_HidePose() {
    return *(_Script_Engine::AnimMontage**)((uintptr_t)this + 0x2c8);
}
_Script_Engine::AnimMontage*& _Script_Playtime_Multiplayer::HidingSpot::get_MonsterInteractOccupied() {
    return *(_Script_Engine::AnimMontage**)((uintptr_t)this + 0x2d8);
}
bool _Script_Playtime_Multiplayer::HidingSpot::get_bHidingPlayer() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e0 + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::HidingSpot::set_bHidingPlayer(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Playtime_Multiplayer::HidingSpot::get_MidTransition() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e1 + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::HidingSpot::set_MidTransition(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::HidingSpot::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.HidingSpot");
    return result;
}
void _Script_Playtime_Multiplayer::HidingSpot::SurvivorExitHide() {
    return;
}
void _Script_Playtime_Multiplayer::HidingSpot::SurvivorEnterHide(_Script_Playtime_Multiplayer::ANetworkCharacter* PlayerChar) {
    return;
}
void _Script_Playtime_Multiplayer::HidingSpot::BP_PlayObjectMontage(_Script_Engine::AnimMontage* Montage) {
    return;
}
void _Script_Playtime_Multiplayer::HidingSpot::BP_ForceFirstPersonProne(bool setProne) {
    return;
}
void _Script_Playtime_Multiplayer::HidingSpot::Authority_BeginInteraction_Implementation(_Script_Playtime_Multiplayer::ANetworkCharacter* InteractingActor, bool& CanContinueInteraction, float& ContinueInteractionDuration) {
    return;
}
