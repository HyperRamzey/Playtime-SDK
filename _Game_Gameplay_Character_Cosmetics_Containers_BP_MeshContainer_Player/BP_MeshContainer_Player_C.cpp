#include "..\FUObjectArray.hpp"
#include "BP_MeshContainer_Player_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\ChildActorComponent.hpp"
#include "..\_Script_Engine\SkeletalMesh.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "..\_Script_Playtime_Multiplayer\PresetSlot.hpp"
_Script_Engine::ChildActorComponent*& _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_Player::BP_MeshContainer_Player_C::get_OutfitGrabpack() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x220);
}
_Script_Engine::ChildActorComponent*& _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_Player::BP_MeshContainer_Player_C::get_OutfitMask() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x228);
}
_Script_Engine::ChildActorComponent*& _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_Player::BP_MeshContainer_Player_C::get_OutfitPants() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x240);
}
_Script_Engine::ChildActorComponent*& _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_Player::BP_MeshContainer_Player_C::get_OutfitShoes() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x230);
}
_Script_Engine::ChildActorComponent*& _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_Player::BP_MeshContainer_Player_C::get_OutfitHat() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x238);
}
_Script_Engine::ChildActorComponent*& _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_Player::BP_MeshContainer_Player_C::get_OutfitShirt() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x248);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_Player::BP_MeshContainer_Player_C::get_PlayerSourceMesh() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x250);
}
_Script_Engine::SkeletalMesh*& _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_Player::BP_MeshContainer_Player_C::get_Source_Mesh() {
    return *(_Script_Engine::SkeletalMesh**)((uintptr_t)this + 0x258);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_Player::BP_MeshContainer_Player_C::get_LeftHandSourceComponent() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x260);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_Player::BP_MeshContainer_Player_C::get_RightHandSourceComponent() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x268);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_Player::BP_MeshContainer_Player_C::get_PlayerSourceComponent() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x270);
}
_Script_CoreUObject::Class* _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_Player::BP_MeshContainer_Player_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Gameplay/Character/Cosmetics/Containers/BP_MeshContainer_Player.BP_MeshContainer_Player_C");
    return result;
}
void _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_Player::BP_MeshContainer_Player_C::SetIndividualCosmeticVisibility(void* Cosmetic_Type, bool Visible) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_Player::BP_MeshContainer_Player_C::ResetCosmetics() {
    return;
}
void _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_Player::BP_MeshContainer_Player_C::ResetIndividualCosmeticVisibility() {
    return;
}
void _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_Player::BP_MeshContainer_Player_C::SetHandSourceComponent(_Script_Engine::SkeletalMeshComponent* Source, bool Left) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_Player::BP_MeshContainer_Player_C::SetPlayerSourceComponent(_Script_Engine::SkeletalMeshComponent* Source) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_Player::BP_MeshContainer_Player_C::SetNetworkCharacterOnContainers() {
    return;
}
void _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_Player::BP_MeshContainer_Player_C::SetHandVisibility(bool Left, bool Visible) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_Player::BP_MeshContainer_Player_C::SetVisibility(bool Visible) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_Player::BP_MeshContainer_Player_C::SetOverridingVisbility(bool Visible) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_Player::BP_MeshContainer_Player_C::UpdateCosmeticsFromPreset(_Script_Playtime_Multiplayer::PresetSlot Preset) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_Player::BP_MeshContainer_Player_C::GetAllMeshContainers(void*& Return_Value) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_Player::BP_MeshContainer_Player_C::UserConstructionScript0() {
    return;
}
