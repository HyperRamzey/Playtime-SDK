#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "..\_Script_Engine\AnimationAsset.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "..\_Script_Engine\SpringArmComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "..\_Script_Engine\Vector_NetQuantize.hpp"
#include "ANetworkCharacter.hpp"
#include "ANetworkHand.hpp"
#include "NetworkRope.hpp"
#include "UHandRigPackageComponent.hpp"
_Script_Engine::SkeletalMeshComponent*& _Script_Playtime_Multiplayer::UHandRigPackageComponent::get_SK_Hand() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0xd8);
}
_Script_Engine::SpringArmComponent*& _Script_Playtime_Multiplayer::UHandRigPackageComponent::get_SpringArm() {
    return *(_Script_Engine::SpringArmComponent**)((uintptr_t)this + 0xc8);
}
void* _Script_Playtime_Multiplayer::UHandRigPackageComponent::get_Limb() {
    return (void*)((uintptr_t)this + 0xb0);
}
void _Script_Playtime_Multiplayer::UHandRigPackageComponent::SetRopeComponent(_Script_Engine::SceneComponent* TP_Rope) {
    return;
}
bool _Script_Playtime_Multiplayer::UHandRigPackageComponent::get_PressedBeforeAttachment() {
    return (*(uint8_t*)((uintptr_t)this + 0xb1 + 0)) & 1 != 0;
}
_Script_Engine::StaticMeshComponent*& _Script_Playtime_Multiplayer::UHandRigPackageComponent::get_SM_LauncherGun() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0xd0);
}
void _Script_Playtime_Multiplayer::UHandRigPackageComponent::set_CheckingWire(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x100 + 0);
    *(uint8_t*)((uintptr_t)this + 0x100 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Playtime_Multiplayer::UHandRigPackageComponent::set_PressedBeforeAttachment(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb1 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Playtime_Multiplayer::UHandRigPackageComponent::set_bQueuedTryExtendHand(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x174 + 0);
    *(uint8_t*)((uintptr_t)this + 0x174 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Playtime_Multiplayer::ANetworkCharacter*& _Script_Playtime_Multiplayer::UHandRigPackageComponent::get_OwningCharacter() {
    return *(_Script_Playtime_Multiplayer::ANetworkCharacter**)((uintptr_t)this + 0x120);
}
_Script_Playtime_Multiplayer::ANetworkHand*& _Script_Playtime_Multiplayer::UHandRigPackageComponent::get_NetworkHand() {
    return *(_Script_Playtime_Multiplayer::ANetworkHand**)((uintptr_t)this + 0xb8);
}
_Script_Engine::SceneComponent* _Script_Playtime_Multiplayer::UHandRigPackageComponent::GetRopeStart() {
    return;
}
_Script_Playtime_Multiplayer::NetworkRope*& _Script_Playtime_Multiplayer::UHandRigPackageComponent::get_NetworkRope() {
    return *(_Script_Playtime_Multiplayer::NetworkRope**)((uintptr_t)this + 0xc0);
}
_Script_Engine::SceneComponent*& _Script_Playtime_Multiplayer::UHandRigPackageComponent::get_HandSpawn() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0xe0);
}
_Script_Engine::SceneComponent*& _Script_Playtime_Multiplayer::UHandRigPackageComponent::get_RopeComponent() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0xe8);
}
bool _Script_Playtime_Multiplayer::UHandRigPackageComponent::get_PseudoConstructHasBeenRun() {
    return (*(uint8_t*)((uintptr_t)this + 0xf0 + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::UHandRigPackageComponent::OnRep_NetworkHand() {
    return;
}
void _Script_Playtime_Multiplayer::UHandRigPackageComponent::set_PseudoConstructHasBeenRun(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xf0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Playtime_Multiplayer::UHandRigPackageComponent::get_SpawnScale() {
    return (void*)((uintptr_t)this + 0xf4);
}
bool _Script_Playtime_Multiplayer::UHandRigPackageComponent::get_CheckingWire() {
    return (*(uint8_t*)((uintptr_t)this + 0x100 + 0)) & 1 != 0;
}
void* _Script_Playtime_Multiplayer::UHandRigPackageComponent::get_OriginalLauncherGunRotation() {
    return (void*)((uintptr_t)this + 0x104);
}
void* _Script_Playtime_Multiplayer::UHandRigPackageComponent::get_HoldingLauncherGunRotation() {
    return (void*)((uintptr_t)this + 0x110);
}
void* _Script_Playtime_Multiplayer::UHandRigPackageComponent::get_NetworkHandClass() {
    return (void*)((uintptr_t)this + 0x128);
}
void* _Script_Playtime_Multiplayer::UHandRigPackageComponent::get_NetworkRopeClass() {
    return (void*)((uintptr_t)this + 0x130);
}
void* _Script_Playtime_Multiplayer::UHandRigPackageComponent::get_PlayersToIgnore() {
    return (void*)((uintptr_t)this + 0x138);
}
void* _Script_Playtime_Multiplayer::UHandRigPackageComponent::get_HandMagnetTraceChannel() {
    return (void*)((uintptr_t)this + 0x148);
}
void* _Script_Playtime_Multiplayer::UHandRigPackageComponent::get_HandMagnetWhilePlayerDownedTraceChannel() {
    return (void*)((uintptr_t)this + 0x149);
}
void _Script_Playtime_Multiplayer::UHandRigPackageComponent::Server_BroadcastHandStateChange(void* State) {
    return;
}
void* _Script_Playtime_Multiplayer::UHandRigPackageComponent::get_PlayerObjectType() {
    return (void*)((uintptr_t)this + 0x14a);
}
_Script_Engine::AnimationAsset*& _Script_Playtime_Multiplayer::UHandRigPackageComponent::get_HandRetractedAnim() {
    return *(_Script_Engine::AnimationAsset**)((uintptr_t)this + 0x150);
}
void* _Script_Playtime_Multiplayer::UHandRigPackageComponent::get_Queued_FromLocation() {
    return (void*)((uintptr_t)this + 0x158);
}
void* _Script_Playtime_Multiplayer::UHandRigPackageComponent::get_Queued_ToLocation() {
    return (void*)((uintptr_t)this + 0x164);
}
int32_t& _Script_Playtime_Multiplayer::UHandRigPackageComponent::get_Queued_ShotCount() {
    return *(int32_t*)((uintptr_t)this + 0x170);
}
bool _Script_Playtime_Multiplayer::UHandRigPackageComponent::get_bQueuedTryExtendHand() {
    return (*(uint8_t*)((uintptr_t)this + 0x174 + 0)) & 1 != 0;
}
void* _Script_Playtime_Multiplayer::UHandRigPackageComponent::get_OwningClientDesiredHandState() {
    return (void*)((uintptr_t)this + 0x175);
}
void* _Script_Playtime_Multiplayer::UHandRigPackageComponent::get_OnHandStateChange() {
    return (void*)((uintptr_t)this + 0x178);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::UHandRigPackageComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.UHandRigPackageComponent");
    return result;
}
void _Script_Playtime_Multiplayer::UHandRigPackageComponent::Server_TryExtendHand(_Script_Engine::Vector_NetQuantize FromLocation, _Script_Engine::Vector_NetQuantize ToLocation) {
    return;
}
void _Script_Playtime_Multiplayer::UHandRigPackageComponent::Server_TryDetachAndRetractHand(void* CallerLocalRole) {
    return;
}
void _Script_Playtime_Multiplayer::UHandRigPackageComponent::Server_StartRetractBackwards(bool CanTriggerStartedPulling) {
    return;
}
void _Script_Playtime_Multiplayer::UHandRigPackageComponent::Server_SetOwningClientDesiredHandState(void* State) {
    return;
}
void _Script_Playtime_Multiplayer::UHandRigPackageComponent::Multicast_TryExtendHand(_Script_Engine::Vector_NetQuantize FromLocation, _Script_Engine::Vector_NetQuantize ToLocation) {
    return;
}
void _Script_Playtime_Multiplayer::UHandRigPackageComponent::Multicast_TryDetachAndRetractHand(void* CallerLocalRole) {
    return;
}
void _Script_Playtime_Multiplayer::UHandRigPackageComponent::Multicast_StartRetractBackwards(bool CanTriggerStartedPulling) {
    return;
}
bool _Script_Playtime_Multiplayer::UHandRigPackageComponent::IsExtended() {
    return;
}
void _Script_Playtime_Multiplayer::UHandRigPackageComponent::CheckWire() {
    return;
}
