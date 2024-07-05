#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "..\_Script_Engine\SpringArmComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "ANetworkFist.hpp"
#include "NetworkRope.hpp"
#include "UFistRigPackageComponent.hpp"
_Script_Playtime_Multiplayer::ANetworkFist*& _Script_Playtime_Multiplayer::UFistRigPackageComponent::get_NetworkFist() {
    return *(_Script_Playtime_Multiplayer::ANetworkFist**)((uintptr_t)this + 0xb0);
}
_Script_Engine::SpringArmComponent*& _Script_Playtime_Multiplayer::UFistRigPackageComponent::get_SpringArm() {
    return *(_Script_Engine::SpringArmComponent**)((uintptr_t)this + 0xc0);
}
_Script_Playtime_Multiplayer::NetworkRope*& _Script_Playtime_Multiplayer::UFistRigPackageComponent::get_NetworkRope() {
    return *(_Script_Playtime_Multiplayer::NetworkRope**)((uintptr_t)this + 0xb8);
}
bool _Script_Playtime_Multiplayer::UFistRigPackageComponent::get_bExtended() {
    return (*(uint8_t*)((uintptr_t)this + 0xec + 0)) & 1 != 0;
}
_Script_Engine::StaticMeshComponent*& _Script_Playtime_Multiplayer::UFistRigPackageComponent::get_SM_LauncherGun() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0xc8);
}
_Script_Engine::SkeletalMeshComponent*& _Script_Playtime_Multiplayer::UFistRigPackageComponent::get_SK_Fist() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0xd0);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::UFistRigPackageComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.UFistRigPackageComponent");
    return result;
}
_Script_Engine::SceneComponent*& _Script_Playtime_Multiplayer::UFistRigPackageComponent::get_FistSpawn() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0xd8);
}
void* _Script_Playtime_Multiplayer::UFistRigPackageComponent::get_SpawnScale() {
    return (void*)((uintptr_t)this + 0xe0);
}
void _Script_Playtime_Multiplayer::UFistRigPackageComponent::set_bExtended(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xec + 0);
    *(uint8_t*)((uintptr_t)this + 0xec + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Playtime_Multiplayer::UFistRigPackageComponent::get_NetworkFistClass() {
    return (void*)((uintptr_t)this + 0xf0);
}
void* _Script_Playtime_Multiplayer::UFistRigPackageComponent::get_NetworkRopeClass() {
    return (void*)((uintptr_t)this + 0xf8);
}
void* _Script_Playtime_Multiplayer::UFistRigPackageComponent::get_PlayerTraceChannel() {
    return (void*)((uintptr_t)this + 0x100);
}
void _Script_Playtime_Multiplayer::UFistRigPackageComponent::Server_TryExtendHand(_Script_CoreUObject::Vector Direction) {
    return;
}
void* _Script_Playtime_Multiplayer::UFistRigPackageComponent::get_FistStateChanged() {
    return (void*)((uintptr_t)this + 0x108);
}
void _Script_Playtime_Multiplayer::UFistRigPackageComponent::Server_TryDetachAndRetractHand() {
    return;
}
void _Script_Playtime_Multiplayer::UFistRigPackageComponent::Server_StartRetractBackwards() {
    return;
}
void _Script_Playtime_Multiplayer::UFistRigPackageComponent::Server_BroadcastFistStateChange(void* State) {
    return;
}
void _Script_Playtime_Multiplayer::UFistRigPackageComponent::OnRep_NetworkFist() {
    return;
}
void _Script_Playtime_Multiplayer::UFistRigPackageComponent::Multicast_TryExtendHand(_Script_CoreUObject::Vector Direction) {
    return;
}
void _Script_Playtime_Multiplayer::UFistRigPackageComponent::Multicast_TryDetachAndRetractHand() {
    return;
}
void _Script_Playtime_Multiplayer::UFistRigPackageComponent::Multicast_StartRetractBackwards() {
    return;
}
void _Script_Playtime_Multiplayer::UFistRigPackageComponent::Multicast_ExtensionIsComplete() {
    return;
}
void _Script_Playtime_Multiplayer::UFistRigPackageComponent::Multicast_BroadcastFistStateChange(void* State) {
    return;
}
