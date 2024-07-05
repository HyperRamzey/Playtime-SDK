#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AnimInstance.hpp"
#include "..\_Script_Engine\AnimSequence.hpp"
#include "..\_Script_Engine\CurveFloat.hpp"
#include "..\_Script_Engine\PhysicsConstraintActor.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "ANetworkCharacter.hpp"
#include "ANetworkHand.hpp"
#include "UHandRigPackageComponent.hpp"
bool _Script_Playtime_Multiplayer::ANetworkHand::IsPulling() {
    return;
}
_Script_Engine::StaticMeshComponent*& _Script_Playtime_Multiplayer::ANetworkHand::get_HandPivot() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x250);
}
void* _Script_Playtime_Multiplayer::ANetworkHand::get_Limb() {
    return (void*)((uintptr_t)this + 0x220);
}
float& _Script_Playtime_Multiplayer::ANetworkHand::get_GrabbedThickness() {
    return *(float*)((uintptr_t)this + 0x318);
}
_Script_Playtime_Multiplayer::UHandRigPackageComponent*& _Script_Playtime_Multiplayer::ANetworkHand::get_FromPkg() {
    return *(_Script_Playtime_Multiplayer::UHandRigPackageComponent**)((uintptr_t)this + 0x228);
}
_Script_Engine::SkeletalMeshComponent*& _Script_Playtime_Multiplayer::ANetworkHand::get_SK_Hand() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x258);
}
float& _Script_Playtime_Multiplayer::ANetworkHand::get_DistanceFromPalm() {
    return *(float*)((uintptr_t)this + 0x31c);
}
_Script_Engine::PhysicsConstraintActor*& _Script_Playtime_Multiplayer::ANetworkHand::get_AttachConstraint() {
    return *(_Script_Engine::PhysicsConstraintActor**)((uintptr_t)this + 0x230);
}
float& _Script_Playtime_Multiplayer::ANetworkHand::get_CurrentWireLength() {
    return *(float*)((uintptr_t)this + 0x2b4);
}
_Script_CoreUObject::Object*& _Script_Playtime_Multiplayer::ANetworkHand::get_GrabbedGrabbable() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x238);
}
_Script_Engine::SceneComponent*& _Script_Playtime_Multiplayer::ANetworkHand::get_RootScene() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x240);
}
void* _Script_Playtime_Multiplayer::ANetworkHand::GetHandState() {
    return;
}
_Script_Engine::SceneComponent*& _Script_Playtime_Multiplayer::ANetworkHand::get_HandScene() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x248);
}
_Script_Engine::SceneComponent*& _Script_Playtime_Multiplayer::ANetworkHand::get_RopeAttachmentScene() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x260);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::ANetworkHand::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.ANetworkHand");
    return result;
}
_Script_Engine::SceneComponent*& _Script_Playtime_Multiplayer::ANetworkHand::get_AttachConstraintScene() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x268);
}
void* _Script_Playtime_Multiplayer::ANetworkHand::get_SK_HandInitialAnimation() {
    return (void*)((uintptr_t)this + 0x360);
}
void* _Script_Playtime_Multiplayer::ANetworkHand::get_HandMagnetTraceChannel() {
    return (void*)((uintptr_t)this + 0x270);
}
void _Script_Playtime_Multiplayer::ANetworkHand::DetachAndRetract() {
    return;
}
void* _Script_Playtime_Multiplayer::ANetworkHand::get_PlayerHandsCollisionChannel() {
    return (void*)((uintptr_t)this + 0x271);
}
void _Script_Playtime_Multiplayer::ANetworkHand::BP_HandStateCorrectionIssued(void* In_PreviousState) {
    return;
}
float& _Script_Playtime_Multiplayer::ANetworkHand::get_ShootSpeed() {
    return *(float*)((uintptr_t)this + 0x274);
}
void _Script_Playtime_Multiplayer::ANetworkHand::BP_BeginTouch(float GrabbedThickness_, float DistanceFromPalm_, _Script_Engine::AnimSequence* AnimToPlay) {
    return;
}
float& _Script_Playtime_Multiplayer::ANetworkHand::get_PullSpeed() {
    return *(float*)((uintptr_t)this + 0x278);
}
float& _Script_Playtime_Multiplayer::ANetworkHand::get_InitialShootSpeed() {
    return *(float*)((uintptr_t)this + 0x27c);
}
float& _Script_Playtime_Multiplayer::ANetworkHand::get_GravityStrength() {
    return *(float*)((uintptr_t)this + 0x280);
}
_Script_Engine::CurveFloat*& _Script_Playtime_Multiplayer::ANetworkHand::get_GravityOverDistance() {
    return *(_Script_Engine::CurveFloat**)((uintptr_t)this + 0x288);
}
float& _Script_Playtime_Multiplayer::ANetworkHand::get_MasterArcSpeed() {
    return *(float*)((uintptr_t)this + 0x290);
}
_Script_Engine::CurveFloat*& _Script_Playtime_Multiplayer::ANetworkHand::get_ArcSpeedOverDistance() {
    return *(_Script_Engine::CurveFloat**)((uintptr_t)this + 0x298);
}
float& _Script_Playtime_Multiplayer::ANetworkHand::get_MaxWireLength() {
    return *(float*)((uintptr_t)this + 0x2b0);
}
float& _Script_Playtime_Multiplayer::ANetworkHand::get_CancellationPause() {
    return *(float*)((uintptr_t)this + 0x2b8);
}
float& _Script_Playtime_Multiplayer::ANetworkHand::get_CurrentCancellationTimer() {
    return *(float*)((uintptr_t)this + 0x2bc);
}
void* _Script_Playtime_Multiplayer::ANetworkHand::get_OriginalHandPivotTransform() {
    return (void*)((uintptr_t)this + 0x2c0);
}
void* _Script_Playtime_Multiplayer::ANetworkHand::get_OriginalCollisionResponses() {
    return (void*)((uintptr_t)this + 0x2f0);
}
bool _Script_Playtime_Multiplayer::ANetworkHand::get_bIsTouching() {
    return (*(uint8_t*)((uintptr_t)this + 0x320 + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::ANetworkHand::set_bIsTouching(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x320 + 0);
    *(uint8_t*)((uintptr_t)this + 0x320 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::SceneComponent*& _Script_Playtime_Multiplayer::ANetworkHand::get_SpawnPoint() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x368);
}
void* _Script_Playtime_Multiplayer::ANetworkHand::get_NetHandState() {
    return (void*)((uintptr_t)this + 0x370);
}
void* _Script_Playtime_Multiplayer::ANetworkHand::get_LocalHandState() {
    return (void*)((uintptr_t)this + 0x371);
}
void _Script_Playtime_Multiplayer::ANetworkHand::OnRep_HandState() {
    return;
}
bool _Script_Playtime_Multiplayer::ANetworkHand::IsActive() {
    return;
}
_Script_Playtime_Multiplayer::ANetworkCharacter* _Script_Playtime_Multiplayer::ANetworkHand::GetOwningCharacter() {
    return;
}
_Script_Engine::AnimInstance* _Script_Playtime_Multiplayer::ANetworkHand::GetAnimInstance() {
    return;
}
void _Script_Playtime_Multiplayer::ANetworkHand::DetermineVisuals() {
    return;
}
void _Script_Playtime_Multiplayer::ANetworkHand::CheckWire() {
    return;
}
bool _Script_Playtime_Multiplayer::ANetworkHand::CanGrabOntoGrabbable() {
    return;
}
void _Script_Playtime_Multiplayer::ANetworkHand::BP_PseudoSpawn() {
    return;
}
void _Script_Playtime_Multiplayer::ANetworkHand::BP_PseudoDestroy() {
    return;
}
void _Script_Playtime_Multiplayer::ANetworkHand::BP_EndTouch() {
    return;
}
