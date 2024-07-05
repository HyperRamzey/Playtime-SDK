#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\AnimSequence.hpp"
#include "..\_Script_Engine\CameraComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "..\_Script_Engine\SpringArmComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "ANetworkCharacter.hpp"
#include "KangarooMovementComponent.hpp"
#include "Monster.hpp"
#include "NetworkKangaroo.hpp"
#include "UFistRigPackageComponent.hpp"
_Script_Engine::SpringArmComponent*& _Script_Playtime_Multiplayer::NetworkKangaroo::get_CameraSpringArm() {
    return *(_Script_Engine::SpringArmComponent**)((uintptr_t)this + 0x5d0);
}
_Script_Engine::CameraComponent*& _Script_Playtime_Multiplayer::NetworkKangaroo::get_CameraComponent() {
    return *(_Script_Engine::CameraComponent**)((uintptr_t)this + 0x5d8);
}
_Script_Engine::StaticMeshComponent*& _Script_Playtime_Multiplayer::NetworkKangaroo::get_SM_RightLauncherGun() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x5f0);
}
_Script_Engine::SpringArmComponent*& _Script_Playtime_Multiplayer::NetworkKangaroo::get_ExtendoFist() {
    return *(_Script_Engine::SpringArmComponent**)((uintptr_t)this + 0x5e0);
}
_Script_Engine::SpringArmComponent*& _Script_Playtime_Multiplayer::NetworkKangaroo::get_RightSpringArm() {
    return *(_Script_Engine::SpringArmComponent**)((uintptr_t)this + 0x5e8);
}
_Script_Engine::SkeletalMeshComponent*& _Script_Playtime_Multiplayer::NetworkKangaroo::get_SK_RightFist() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x5f8);
}
_Script_Engine::SceneComponent*& _Script_Playtime_Multiplayer::NetworkKangaroo::get_RightFistSpawn() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x600);
}
_Script_Playtime_Multiplayer::UFistRigPackageComponent*& _Script_Playtime_Multiplayer::NetworkKangaroo::get_FistPkg() {
    return *(_Script_Playtime_Multiplayer::UFistRigPackageComponent**)((uintptr_t)this + 0x608);
}
_Script_Playtime_Multiplayer::KangarooMovementComponent* _Script_Playtime_Multiplayer::NetworkKangaroo::GetBoxyMovementComponent() {
    return;
}
float& _Script_Playtime_Multiplayer::NetworkKangaroo::get_MaxWireLength() {
    return *(float*)((uintptr_t)this + 0x610);
}
void* _Script_Playtime_Multiplayer::NetworkKangaroo::get_NetworkFistClass() {
    return (void*)((uintptr_t)this + 0x618);
}
_Script_Engine::AnimSequence*& _Script_Playtime_Multiplayer::NetworkKangaroo::get_FistRetractedAnim() {
    return *(_Script_Engine::AnimSequence**)((uintptr_t)this + 0x620);
}
float& _Script_Playtime_Multiplayer::NetworkKangaroo::get_AvailableWireLength() {
    return *(float*)((uintptr_t)this + 0x628);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::NetworkKangaroo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.NetworkKangaroo");
    return result;
}
void _Script_Playtime_Multiplayer::NetworkKangaroo::ResetFOV() {
    return;
}
bool _Script_Playtime_Multiplayer::NetworkKangaroo::ParseInputAction_HandExtend_Pressed() {
    return;
}
void _Script_Playtime_Multiplayer::NetworkKangaroo::IsFistRetracting(bool& Retracting) {
    return;
}
void _Script_Playtime_Multiplayer::NetworkKangaroo::IsFistExtended(bool& Extended) {
    return;
}
void _Script_Playtime_Multiplayer::NetworkKangaroo::IncrementBoxyStat(float Amount, void* Stat) {
    return;
}
void _Script_Playtime_Multiplayer::NetworkKangaroo::GetSurvivorProximityMultiplier(_Script_Playtime_Multiplayer::ANetworkCharacter* Character, float MaxDistance, float& Multiplier, int32_t& Index) {
    return;
}
void _Script_Playtime_Multiplayer::NetworkKangaroo::GetFistPosition(_Script_CoreUObject::Vector& Position) {
    return;
}
