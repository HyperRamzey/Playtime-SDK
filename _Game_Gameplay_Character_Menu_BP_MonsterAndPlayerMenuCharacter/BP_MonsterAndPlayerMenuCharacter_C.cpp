#include "..\FUObjectArray.hpp"
#include "..\_Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter\BP_CustomizationMenuCharacter_C.hpp"
#include "BP_MonsterAndPlayerMenuCharacter_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\BillboardComponent.hpp"
#include "..\_Script_Engine\ChildActorComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "..\_Script_Playtime_Multiplayer\PresetSlot.hpp"
void _Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter::BP_MonsterAndPlayerMenuCharacter_C::ResetCharacterAnimations() {
    return;
}
void* _Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter::BP_MonsterAndPlayerMenuCharacter_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x220);
}
_Script_Engine::BillboardComponent*& _Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter::BP_MonsterAndPlayerMenuCharacter_C::get_Loading_Screen_Billboard() {
    return *(_Script_Engine::BillboardComponent**)((uintptr_t)this + 0x228);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter::BP_MonsterAndPlayerMenuCharacter_C::get_MommyMesh() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x258);
}
_Script_Engine::ChildActorComponent*& _Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter::BP_MonsterAndPlayerMenuCharacter_C::get_BP_MeshContainer_HandCosmetic() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x230);
}
_Script_Engine::ChildActorComponent*& _Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter::BP_MonsterAndPlayerMenuCharacter_C::get_BP_MeshContainer_BoxySkin() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x240);
}
void _Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter::BP_MonsterAndPlayerMenuCharacter_C::SetPlayerGrabpackVisibility(bool Visible) {
    return;
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter::BP_MonsterAndPlayerMenuCharacter_C::get_HandMesh() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x238);
}
_Script_Engine::ChildActorComponent*& _Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter::BP_MonsterAndPlayerMenuCharacter_C::get_BP_MeshContainer_MommySkin() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x248);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter::BP_MonsterAndPlayerMenuCharacter_C::get_BoxyMesh() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x250);
}
_Script_Engine::ChildActorComponent*& _Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter::BP_MonsterAndPlayerMenuCharacter_C::get_BP_MeshContainer_HuggySkin() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x260);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter::BP_MonsterAndPlayerMenuCharacter_C::get_HuggyMesh() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x268);
}
_Script_Engine::ChildActorComponent*& _Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter::BP_MonsterAndPlayerMenuCharacter_C::get_BP_CustomizationMenuCharacter() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x270);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter::BP_MonsterAndPlayerMenuCharacter_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x278);
}
_Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter::BP_CustomizationMenuCharacter_C*& _Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter::BP_MonsterAndPlayerMenuCharacter_C::get_PlayerMenuCharacter() {
    return *(_Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter::BP_CustomizationMenuCharacter_C**)((uintptr_t)this + 0x280);
}
void* _Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter::BP_MonsterAndPlayerMenuCharacter_C::get_StartingRotation() {
    return (void*)((uintptr_t)this + 0x288);
}
_Script_CoreUObject::Class* _Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter::BP_MonsterAndPlayerMenuCharacter_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Gameplay/Character/Menu/BP_MonsterAndPlayerMenuCharacter.BP_MonsterAndPlayerMenuCharacter_C");
    return result;
}
void _Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter::BP_MonsterAndPlayerMenuCharacter_C::SetLoadingScreenVisibility(bool Visible) {
    return;
}
void _Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter::BP_MonsterAndPlayerMenuCharacter_C::SetLoadingScreen(int32_t ID) {
    return;
}
void _Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter::BP_MonsterAndPlayerMenuCharacter_C::SetMainCharactersVisibility(bool Visible) {
    return;
}
void _Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter::BP_MonsterAndPlayerMenuCharacter_C::SetHandCosmetic(int32_t ID) {
    return;
}
void _Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter::BP_MonsterAndPlayerMenuCharacter_C::SetHandVisibility(bool Visible) {
    return;
}
void _Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter::BP_MonsterAndPlayerMenuCharacter_C::ResetRotation() {
    return;
}
void _Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter::BP_MonsterAndPlayerMenuCharacter_C::PlayAction(int32_t ID, void* Character_Type) {
    return;
}
void _Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter::BP_MonsterAndPlayerMenuCharacter_C::SetPlayerCosmeticCategory(void* Cosmetic_Type) {
    return;
}
void _Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter::BP_MonsterAndPlayerMenuCharacter_C::PlayUpdateAnimation(void* Cosmetic_Type) {
    return;
}
void _Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter::BP_MonsterAndPlayerMenuCharacter_C::SetVisibleCharacter(void* Character_Type) {
    return;
}
void _Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter::BP_MonsterAndPlayerMenuCharacter_C::SetCharacter(void* Character_Type, _Script_Playtime_Multiplayer::PresetSlot Preset) {
    return;
}
void _Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter::BP_MonsterAndPlayerMenuCharacter_C::RotateLeft() {
    return;
}
void _Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter::BP_MonsterAndPlayerMenuCharacter_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter::BP_MonsterAndPlayerMenuCharacter_C::RotateRight() {
    return;
}
void _Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter::BP_MonsterAndPlayerMenuCharacter_C::ExecuteUbergraph_BP_MonsterAndPlayerMenuCharacter(int32_t EntryPoint) {
    return;
}
