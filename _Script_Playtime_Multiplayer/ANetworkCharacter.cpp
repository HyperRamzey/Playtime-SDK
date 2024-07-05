#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AnimSequence.hpp"
#include "..\_Script_Engine\CameraComponent.hpp"
#include "..\_Script_Engine\Controller.hpp"
#include "..\_Script_Engine\DamageType.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SkeletalMesh.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "..\_Script_Engine\SplineComponent.hpp"
#include "..\_Script_Engine\SpringArmComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "ANetworkCharacter.hpp"
#include "Monster.hpp"
#include "PerkPackage.hpp"
#include "PlaytimeCharacter.hpp"
#include "PlaytimeMovementComponent.hpp"
#include "PuzzleSoundPack.hpp"
#include "UHandRigPackageComponent.hpp"
_Script_Engine::CameraComponent*& _Script_Playtime_Multiplayer::ANetworkCharacter::get_CameraComponent() {
    return *(_Script_Engine::CameraComponent**)((uintptr_t)this + 0x5c0);
}
_Script_Engine::SkeletalMesh*& _Script_Playtime_Multiplayer::ANetworkCharacter::get_GrabpackSkeletalMesh() {
    return *(_Script_Engine::SkeletalMesh**)((uintptr_t)this + 0x5b0);
}
void* _Script_Playtime_Multiplayer::ANetworkCharacter::get_OnCommsEnabling() {
    return (void*)((uintptr_t)this + 0x778);
}
void _Script_Playtime_Multiplayer::ANetworkCharacter::set_bIsInWuggyHole(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6a7 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6a7 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::SkeletalMeshComponent*& _Script_Playtime_Multiplayer::ANetworkCharacter::get_SK_LeftHand() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x600);
}
_Script_Engine::SpringArmComponent*& _Script_Playtime_Multiplayer::ANetworkCharacter::get_CameraSpringArm() {
    return *(_Script_Engine::SpringArmComponent**)((uintptr_t)this + 0x5b8);
}
void* _Script_Playtime_Multiplayer::ANetworkCharacter::get_OnPunchingBagPerkShieldChanged() {
    return (void*)((uintptr_t)this + 0x690);
}
_Script_Engine::SplineComponent*& _Script_Playtime_Multiplayer::ANetworkCharacter::get_SwingPath() {
    return *(_Script_Engine::SplineComponent**)((uintptr_t)this + 0x5d8);
}
_Script_Engine::SpringArmComponent*& _Script_Playtime_Multiplayer::ANetworkCharacter::get_ExtendoHands() {
    return *(_Script_Engine::SpringArmComponent**)((uintptr_t)this + 0x5c8);
}
_Script_Playtime_Multiplayer::UHandRigPackageComponent*& _Script_Playtime_Multiplayer::ANetworkCharacter::get_LeftHandPkg() {
    return *(_Script_Playtime_Multiplayer::UHandRigPackageComponent**)((uintptr_t)this + 0x610);
}
_Script_Engine::StaticMeshComponent*& _Script_Playtime_Multiplayer::ANetworkCharacter::get_SM_HeldToyPart() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x5d0);
}
_Script_Engine::StaticMeshComponent*& _Script_Playtime_Multiplayer::ANetworkCharacter::get_SM_RightLauncherGun() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x620);
}
_Script_Engine::Actor*& _Script_Playtime_Multiplayer::ANetworkCharacter::get_WuggyHoleEntranceHatch() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x6a8);
}
bool _Script_Playtime_Multiplayer::ANetworkCharacter::get_bGrabpackBroken() {
    return (*(uint8_t*)((uintptr_t)this + 0x5e0 + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::ANetworkCharacter::SetLocalPerksThenReplicate() {
    return;
}
void* _Script_Playtime_Multiplayer::ANetworkCharacter::get_OnPerkSaveGameChanged() {
    return (void*)((uintptr_t)this + 0x678);
}
void _Script_Playtime_Multiplayer::ANetworkCharacter::set_bGrabpackBroken(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5e0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x5e0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::SkeletalMeshComponent*& _Script_Playtime_Multiplayer::ANetworkCharacter::get_FPGrabpackGuns() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x5e8);
}
float& _Script_Playtime_Multiplayer::ANetworkCharacter::get_SharedLookPitch() {
    return *(float*)((uintptr_t)this + 0x6b8);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::ANetworkCharacter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.ANetworkCharacter");
    return result;
}
void _Script_Playtime_Multiplayer::ANetworkCharacter::InputAction_RightHandExtend_Released() {
    return;
}
_Script_Engine::SpringArmComponent*& _Script_Playtime_Multiplayer::ANetworkCharacter::get_LeftSpringArm() {
    return *(_Script_Engine::SpringArmComponent**)((uintptr_t)this + 0x5f0);
}
_Script_Engine::StaticMeshComponent*& _Script_Playtime_Multiplayer::ANetworkCharacter::get_SM_LeftLauncherGun() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x5f8);
}
float& _Script_Playtime_Multiplayer::ANetworkCharacter::get_MaxWireLength() {
    return *(float*)((uintptr_t)this + 0x6d4);
}
_Script_Engine::SceneComponent*& _Script_Playtime_Multiplayer::ANetworkCharacter::get_LeftHandSpawn() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x608);
}
_Script_Engine::SpringArmComponent*& _Script_Playtime_Multiplayer::ANetworkCharacter::get_RightSpringArm() {
    return *(_Script_Engine::SpringArmComponent**)((uintptr_t)this + 0x618);
}
_Script_Engine::SkeletalMeshComponent*& _Script_Playtime_Multiplayer::ANetworkCharacter::get_SK_RightHand() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x628);
}
void* _Script_Playtime_Multiplayer::ANetworkCharacter::get_OnCommsMenu() {
    return (void*)((uintptr_t)this + 0x768);
}
_Script_Engine::SceneComponent*& _Script_Playtime_Multiplayer::ANetworkCharacter::get_RightHandSpawn() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x630);
}
_Script_Engine::CameraComponent* _Script_Playtime_Multiplayer::ANetworkCharacter::BP_GetCameraComponent() {
    return;
}
_Script_Engine::AnimSequence*& _Script_Playtime_Multiplayer::ANetworkCharacter::get_HandRetractedAnim() {
    return *(_Script_Engine::AnimSequence**)((uintptr_t)this + 0x6e0);
}
_Script_Playtime_Multiplayer::UHandRigPackageComponent*& _Script_Playtime_Multiplayer::ANetworkCharacter::get_RightHandPkg() {
    return *(_Script_Playtime_Multiplayer::UHandRigPackageComponent**)((uintptr_t)this + 0x638);
}
_Script_Engine::SpringArmComponent*& _Script_Playtime_Multiplayer::ANetworkCharacter::get_TP_PawnControlRotationArm() {
    return *(_Script_Engine::SpringArmComponent**)((uintptr_t)this + 0x640);
}
_Script_Engine::SpringArmComponent*& _Script_Playtime_Multiplayer::ANetworkCharacter::get_TP_ShoulderArm() {
    return *(_Script_Engine::SpringArmComponent**)((uintptr_t)this + 0x648);
}
_Script_Engine::SpringArmComponent*& _Script_Playtime_Multiplayer::ANetworkCharacter::get_TP_DistanceArm() {
    return *(_Script_Engine::SpringArmComponent**)((uintptr_t)this + 0x650);
}
_Script_Engine::CameraComponent*& _Script_Playtime_Multiplayer::ANetworkCharacter::get_TP_Camera() {
    return *(_Script_Engine::CameraComponent**)((uintptr_t)this + 0x658);
}
bool _Script_Playtime_Multiplayer::ANetworkCharacter::get_bIsEnteringLocker() {
    return (*(uint8_t*)((uintptr_t)this + 0x6a6 + 0)) & 1 != 0;
}
_Script_Playtime_Multiplayer::PuzzleSoundPack*& _Script_Playtime_Multiplayer::ANetworkCharacter::get_PuzzleSounds() {
    return *(_Script_Playtime_Multiplayer::PuzzleSoundPack**)((uintptr_t)this + 0x660);
}
void _Script_Playtime_Multiplayer::ANetworkCharacter::SuccessfulPerksCallback(void*& PerksResponse) {
    return;
}
void* _Script_Playtime_Multiplayer::ANetworkCharacter::get_OnShotBrokenHand() {
    return (void*)((uintptr_t)this + 0x668);
}
void* _Script_Playtime_Multiplayer::ANetworkCharacter::get_OnCommFired() {
    return (void*)((uintptr_t)this + 0x788);
}
bool _Script_Playtime_Multiplayer::ANetworkCharacter::get_PunchingBagPerkShield() {
    return (*(uint8_t*)((uintptr_t)this + 0x688 + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::ANetworkCharacter::set_PunchingBagPerkShield(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x688 + 0);
    *(uint8_t*)((uintptr_t)this + 0x688 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Playtime_Multiplayer::ANetworkCharacter::get_PunchingBagPerkShieldRechargeTime() {
    return *(float*)((uintptr_t)this + 0x6a0);
}
bool _Script_Playtime_Multiplayer::ANetworkCharacter::get_bPlayerIsDown() {
    return (*(uint8_t*)((uintptr_t)this + 0x6a4 + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::ANetworkCharacter::set_bPlayerIsDown(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6a4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6a4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Playtime_Multiplayer::ANetworkCharacter::Multicast_GetDropped() {
    return;
}
float& _Script_Playtime_Multiplayer::ANetworkCharacter::get_Health() {
    return *(float*)((uintptr_t)this + 0x6d0);
}
bool _Script_Playtime_Multiplayer::ANetworkCharacter::get_bIsInsideLocker() {
    return (*(uint8_t*)((uintptr_t)this + 0x6a5 + 0)) & 1 != 0;
}
_Script_CoreUObject::Object*& _Script_Playtime_Multiplayer::ANetworkCharacter::get_InteractedInterface() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x708);
}
void _Script_Playtime_Multiplayer::ANetworkCharacter::set_bIsInsideLocker(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6a5 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6a5 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Playtime_Multiplayer::ANetworkCharacter::set_bIsEnteringLocker(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6a6 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6a6 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Playtime_Multiplayer::ANetworkCharacter::set_Invulnerable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6c9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6c9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Playtime_Multiplayer::ANetworkCharacter::get_PlayerNeedsRevived() {
    return (*(uint8_t*)((uintptr_t)this + 0x6c8 + 0)) & 1 != 0;
}
bool _Script_Playtime_Multiplayer::ANetworkCharacter::get_bIsInWuggyHole() {
    return (*(uint8_t*)((uintptr_t)this + 0x6a7 + 0)) & 1 != 0;
}
bool _Script_Playtime_Multiplayer::ANetworkCharacter::get_IsThirdPerson() {
    return (*(uint8_t*)((uintptr_t)this + 0x6b0 + 0)) & 1 != 0;
}
void* _Script_Playtime_Multiplayer::ANetworkCharacter::get_OnFearUpdated() {
    return (void*)((uintptr_t)this + 0x740);
}
void _Script_Playtime_Multiplayer::ANetworkCharacter::set_IsThirdPerson(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6b0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6b0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Playtime_Multiplayer::ANetworkCharacter::set_PlayerNeedsRevived(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6c8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6c8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Playtime_Multiplayer::ANetworkCharacter::get_AvailableWireLength() {
    return *(float*)((uintptr_t)this + 0x6b4);
}
void _Script_Playtime_Multiplayer::ANetworkCharacter::OnRep_GrabpackBroken() {
    return;
}
_Script_Playtime_Multiplayer::Monster*& _Script_Playtime_Multiplayer::ANetworkCharacter::get_CarryingMonster() {
    return *(_Script_Playtime_Multiplayer::Monster**)((uintptr_t)this + 0x6c0);
}
void _Script_Playtime_Multiplayer::ANetworkCharacter::HandleComm5() {
    return;
}
bool _Script_Playtime_Multiplayer::ANetworkCharacter::get_Invulnerable() {
    return (*(uint8_t*)((uintptr_t)this + 0x6c9 + 0)) & 1 != 0;
}
int32_t& _Script_Playtime_Multiplayer::ANetworkCharacter::get_HeldToyPartIndex() {
    return *(int32_t*)((uintptr_t)this + 0x710);
}
float& _Script_Playtime_Multiplayer::ANetworkCharacter::get_MaxHealth() {
    return *(float*)((uintptr_t)this + 0x6cc);
}
void* _Script_Playtime_Multiplayer::ANetworkCharacter::get_NetworkHandClass() {
    return (void*)((uintptr_t)this + 0x6d8);
}
void* _Script_Playtime_Multiplayer::ANetworkCharacter::get_JokeTimerHandle() {
    return (void*)((uintptr_t)this + 0x6e8);
}
bool _Script_Playtime_Multiplayer::ANetworkCharacter::IsHoldingToyPart() {
    return;
}
void* _Script_Playtime_Multiplayer::ANetworkCharacter::get_OnAttachmentStateChange() {
    return (void*)((uintptr_t)this + 0x6f0);
}
void _Script_Playtime_Multiplayer::ANetworkCharacter::Server_SetPerks(_Script_Playtime_Multiplayer::PerkPackage In_PerkSaveGame) {
    return;
}
void* _Script_Playtime_Multiplayer::ANetworkCharacter::get_TraceTag() {
    return (void*)((uintptr_t)this + 0x700);
}
void* _Script_Playtime_Multiplayer::ANetworkCharacter::get_Perks() {
    return (void*)((uintptr_t)this + 0x714);
}
void _Script_Playtime_Multiplayer::ANetworkCharacter::TurnOnJokeTimer() {
    return;
}
void _Script_Playtime_Multiplayer::ANetworkCharacter::TurnOffJokeTimer() {
    return;
}
bool _Script_Playtime_Multiplayer::ANetworkCharacter::IsNotHoldingToyPart() {
    return;
}
void _Script_Playtime_Multiplayer::ANetworkCharacter::TakeAnyDamage(_Script_Engine::Actor* DamagedActor, float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser) {
    return;
}
bool _Script_Playtime_Multiplayer::ANetworkCharacter::ShouldLeaveFootprint() {
    return;
}
void _Script_Playtime_Multiplayer::ANetworkCharacter::SetPlayerNeedsRevivedWithNotify(bool Value) {
    return;
}
void _Script_Playtime_Multiplayer::ANetworkCharacter::SetIsInChaseZone(bool bInZone) {
    return;
}
void _Script_Playtime_Multiplayer::ANetworkCharacter::SetInteractedInterface(_Script_CoreUObject::Object* Interactable) {
    return;
}
void _Script_Playtime_Multiplayer::ANetworkCharacter::InputAction_LeftHandExtend_Pressed() {
    return;
}
void _Script_Playtime_Multiplayer::ANetworkCharacter::SetHealthWithNotifyClamped(float& In_Health) {
    return;
}
void _Script_Playtime_Multiplayer::ANetworkCharacter::ServerOnly_DropToyPart(bool SpawnDrop, _Script_CoreUObject::Vector CustomLocation) {
    return;
}
void _Script_Playtime_Multiplayer::ANetworkCharacter::Server_SetSharedLookPitch(float Pitch) {
    return;
}
void _Script_Playtime_Multiplayer::ANetworkCharacter::Server_DropToyPart(_Script_CoreUObject::Vector Location) {
    return;
}
void _Script_Playtime_Multiplayer::ANetworkCharacter::RechargePunchingBagPerkShield() {
    return;
}
void _Script_Playtime_Multiplayer::ANetworkCharacter::PseudoConstruct() {
    return;
}
void _Script_Playtime_Multiplayer::ANetworkCharacter::OnRep_PlayerNeedsRevived() {
    return;
}
void _Script_Playtime_Multiplayer::ANetworkCharacter::OnRep_PerkSaveGame() {
    return;
}
void _Script_Playtime_Multiplayer::ANetworkCharacter::OnRep_HeldToyPartIndex() {
    return;
}
void _Script_Playtime_Multiplayer::ANetworkCharacter::OnRep_Health() {
    return;
}
_Script_CoreUObject::Object* _Script_Playtime_Multiplayer::ANetworkCharacter::ObtainInteractedInterface(bool& OutIsValid) {
    return;
}
void _Script_Playtime_Multiplayer::ANetworkCharacter::Multicast_PlayDamageFX() {
    return;
}
void _Script_Playtime_Multiplayer::ANetworkCharacter::Multicast_GetPickedUp(_Script_Playtime_Multiplayer::Monster* Monster) {
    return;
}
void _Script_Playtime_Multiplayer::ANetworkCharacter::JokeTimer() {
    return;
}
void _Script_Playtime_Multiplayer::ANetworkCharacter::BP_GetDropped() {
    return;
}
void _Script_Playtime_Multiplayer::ANetworkCharacter::InputAction_RightHandExtend_Pressed() {
    return;
}
void _Script_Playtime_Multiplayer::ANetworkCharacter::InputAction_LeftHandExtend_Released() {
    return;
}
void _Script_Playtime_Multiplayer::ANetworkCharacter::IncrementPlayerStat(float Amount, void* Stat) {
    return;
}
void _Script_Playtime_Multiplayer::ANetworkCharacter::HandStateChange(_Script_Playtime_Multiplayer::UHandRigPackageComponent* Pkg, void* HandStateChange) {
    return;
}
void _Script_Playtime_Multiplayer::ANetworkCharacter::HandleComm4() {
    return;
}
void _Script_Playtime_Multiplayer::ANetworkCharacter::HandleComm3() {
    return;
}
void _Script_Playtime_Multiplayer::ANetworkCharacter::HandleComm2() {
    return;
}
void _Script_Playtime_Multiplayer::ANetworkCharacter::BP_OnRep_PerkSaveGame() {
    return;
}
void _Script_Playtime_Multiplayer::ANetworkCharacter::HandleComm1() {
    return;
}
_Script_Playtime_Multiplayer::PlaytimeMovementComponent* _Script_Playtime_Multiplayer::ANetworkCharacter::GetPlaytimeMovementComponent() {
    return;
}
_Script_Playtime_Multiplayer::PerkPackage _Script_Playtime_Multiplayer::ANetworkCharacter::GetPerks() {
    return;
}
bool _Script_Playtime_Multiplayer::ANetworkCharacter::GetIsInChaseZone() {
    return;
}
int32_t _Script_Playtime_Multiplayer::ANetworkCharacter::GetHeldToyPartIndex() {
    return;
}
void* _Script_Playtime_Multiplayer::ANetworkCharacter::GetFearState() {
    return;
}
void _Script_Playtime_Multiplayer::ANetworkCharacter::FireComm(int32_t CommSelected) {
    return;
}
void _Script_Playtime_Multiplayer::ANetworkCharacter::FailedPerksCallback(void* ErrorMessage) {
    return;
}
bool _Script_Playtime_Multiplayer::ANetworkCharacter::CanBePickedUp() {
    return;
}
void _Script_Playtime_Multiplayer::ANetworkCharacter::BreakPunchingBagPerkShield() {
    return;
}
void _Script_Playtime_Multiplayer::ANetworkCharacter::BP_TakeAnyDamageWhileAlive(_Script_Engine::Actor* DamagedActor, float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser, bool bKillingHit) {
    return;
}
void _Script_Playtime_Multiplayer::ANetworkCharacter::BP_SpawnDroppedToyPart(int32_t ToyPartIndex, _Script_CoreUObject::Vector CustomLocation) {
    return;
}
void _Script_Playtime_Multiplayer::ANetworkCharacter::BP_PlayDamageFX() {
    return;
}
void _Script_Playtime_Multiplayer::ANetworkCharacter::BP_OnRep_SavedPerksChanged() {
    return;
}
void _Script_Playtime_Multiplayer::ANetworkCharacter::BP_OnRep_PlayerNeedsRevived() {
    return;
}
void _Script_Playtime_Multiplayer::ANetworkCharacter::BP_OnRep_HeldToyPartIndex() {
    return;
}
void _Script_Playtime_Multiplayer::ANetworkCharacter::BP_OnRep_Health() {
    return;
}
_Script_Engine::SkeletalMeshComponent* _Script_Playtime_Multiplayer::ANetworkCharacter::BP_GetThirdPersonMesh() {
    return;
}
void _Script_Playtime_Multiplayer::ANetworkCharacter::BP_GetPickedUp(_Script_Playtime_Multiplayer::Monster* Monster) {
    return;
}
_Script_Engine::StaticMeshComponent* _Script_Playtime_Multiplayer::ANetworkCharacter::BP_GetHeldToyPart() {
    return;
}
void _Script_Playtime_Multiplayer::ANetworkCharacter::BP_Authority_GetHealed() {
    return;
}
void _Script_Playtime_Multiplayer::ANetworkCharacter::Authority_SetGrabpackBroken(bool In_Broken) {
    return;
}
