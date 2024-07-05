#include "..\FUObjectArray.hpp"
#include "..\_Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_Player\BP_MeshContainer_Player_C.hpp"
#include "BP_CustomizationMenuCharacter_C.hpp"
#include "..\_Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_CustomizationMenuPlayer\ABP_CustomizationMenuPlayer_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\ChildActorComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "..\_Script_Playtime_Multiplayer\PresetSlot.hpp"
void _Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter::BP_CustomizationMenuCharacter_C::UpdateCosmeticsFromPreset(_Script_Playtime_Multiplayer::PresetSlot Preset) {
    return;
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter::BP_CustomizationMenuCharacter_C::get_Mesh() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x240);
}
void* _Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter::BP_CustomizationMenuCharacter_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x220);
}
void* _Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter::BP_CustomizationMenuCharacter_C::get_SelectMontages() {
    return (void*)((uintptr_t)this + 0x258);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter::BP_CustomizationMenuCharacter_C::get_RightHand() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x228);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter::BP_CustomizationMenuCharacter_C::get_LeftHand() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x230);
}
_Script_Engine::ChildActorComponent*& _Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter::BP_CustomizationMenuCharacter_C::get_BP_MeshContainer_Player() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x238);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter::BP_CustomizationMenuCharacter_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x248);
}
_Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_Player::BP_MeshContainer_Player_C*& _Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter::BP_CustomizationMenuCharacter_C::get_Player_Mesh_Container() {
    return *(_Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_Player::BP_MeshContainer_Player_C**)((uintptr_t)this + 0x250);
}
void* _Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter::BP_CustomizationMenuCharacter_C::get_CurrentPreset() {
    return (void*)((uintptr_t)this + 0x2a8);
}
void* _Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter::BP_CustomizationMenuCharacter_C::get_Inventory() {
    return (void*)((uintptr_t)this + 0x300);
}
_Script_CoreUObject::Class* _Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter::BP_CustomizationMenuCharacter_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Gameplay/Character/Menu/BP_CustomizationMenuCharacter.BP_CustomizationMenuCharacter_C");
    return result;
}
void _Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter::BP_CustomizationMenuCharacter_C::PlaySelectEmote(int32_t Emote_ID) {
    return;
}
void _Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter::BP_CustomizationMenuCharacter_C::SetGrabpackVisibility(bool Visible) {
    return;
}
void _Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter::BP_CustomizationMenuCharacter_C::SetVisibility(bool Visible) {
    return;
}
void _Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter::BP_CustomizationMenuCharacter_C::SetType(void* Type) {
    return;
}
void _Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter::BP_CustomizationMenuCharacter_C::GetAnimationBlueprint(_Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_CustomizationMenuPlayer::ABP_CustomizationMenuPlayer_C*& Return_Value) {
    return;
}
void _Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter::BP_CustomizationMenuCharacter_C::UpdateCosmeticsFromSave() {
    return;
}
void _Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter::BP_CustomizationMenuCharacter_C::ExecuteUbergraph_BP_CustomizationMenuCharacter(int32_t EntryPoint) {
    return;
}
void _Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter::BP_CustomizationMenuCharacter_C::PlaySelectAnimation(void* Cosmetic_Type) {
    return;
}
void _Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter::BP_CustomizationMenuCharacter_C::UserConstructionScript0() {
    return;
}
void _Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter::BP_CustomizationMenuCharacter_C::SetSourceComponent() {
    return;
}
void _Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter::BP_CustomizationMenuCharacter_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter::BP_CustomizationMenuCharacter_C::SetInventory(void*& Inventory) {
    return;
}
void _Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter::BP_CustomizationMenuCharacter_C::FailSilently(void* ErrorMessage) {
    return;
}
