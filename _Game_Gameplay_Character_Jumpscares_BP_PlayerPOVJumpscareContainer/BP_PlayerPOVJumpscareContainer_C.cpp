#include "..\FUObjectArray.hpp"
#include "BP_PlayerPOVJumpscareContainer_C.hpp"
#include "..\_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter\BP_NetworkCharacter_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\CameraComponent.hpp"
#include "..\_Script_Engine\ChildActorComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "..\_Script_Engine\SpotLightComponent.hpp"
#include "..\_Script_Playtime_Multiplayer\Monster.hpp"
_Script_Engine::SceneComponent*& _Game_Gameplay_Character_Jumpscares_BP_PlayerPOVJumpscareContainer::BP_PlayerPOVJumpscareContainer_C::get_CharacterScaler() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x250);
}
void _Game_Gameplay_Character_Jumpscares_BP_PlayerPOVJumpscareContainer::BP_PlayerPOVJumpscareContainer_C::ExecuteUbergraph_BP_PlayerPOVJumpscareContainer(int32_t EntryPoint) {
    return;
}
void* _Game_Gameplay_Character_Jumpscares_BP_PlayerPOVJumpscareContainer::BP_PlayerPOVJumpscareContainer_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x220);
}
void* _Game_Gameplay_Character_Jumpscares_BP_PlayerPOVJumpscareContainer::BP_PlayerPOVJumpscareContainer_C::get_CharacterSkeletalMeshes() {
    return (void*)((uintptr_t)this + 0x300);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Character_Jumpscares_BP_PlayerPOVJumpscareContainer::BP_PlayerPOVJumpscareContainer_C::get_CameraSkeleton() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x240);
}
_Script_Engine::SpotLightComponent*& _Game_Gameplay_Character_Jumpscares_BP_PlayerPOVJumpscareContainer::BP_PlayerPOVJumpscareContainer_C::get_SpotLight() {
    return *(_Script_Engine::SpotLightComponent**)((uintptr_t)this + 0x228);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Character_Jumpscares_BP_PlayerPOVJumpscareContainer::BP_PlayerPOVJumpscareContainer_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x258);
}
_Script_Engine::ChildActorComponent*& _Game_Gameplay_Character_Jumpscares_BP_PlayerPOVJumpscareContainer::BP_PlayerPOVJumpscareContainer_C::get_BP_MeshContainer_SimpleMonsterSkin() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x238);
}
_Script_Engine::CameraComponent*& _Game_Gameplay_Character_Jumpscares_BP_PlayerPOVJumpscareContainer::BP_PlayerPOVJumpscareContainer_C::get_JumpscareCamera() {
    return *(_Script_Engine::CameraComponent**)((uintptr_t)this + 0x230);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Character_Jumpscares_BP_PlayerPOVJumpscareContainer::BP_PlayerPOVJumpscareContainer_C::get_CharacterSkeleton() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x248);
}
void* _Game_Gameplay_Character_Jumpscares_BP_PlayerPOVJumpscareContainer::BP_PlayerPOVJumpscareContainer_C::get_CameraAnimations() {
    return (void*)((uintptr_t)this + 0x260);
}
void* _Game_Gameplay_Character_Jumpscares_BP_PlayerPOVJumpscareContainer::BP_PlayerPOVJumpscareContainer_C::get_JumpscareAnimations() {
    return (void*)((uintptr_t)this + 0x2b0);
}
void* _Game_Gameplay_Character_Jumpscares_BP_PlayerPOVJumpscareContainer::BP_PlayerPOVJumpscareContainer_C::get_CharacterScales() {
    return (void*)((uintptr_t)this + 0x350);
}
_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C*& _Game_Gameplay_Character_Jumpscares_BP_PlayerPOVJumpscareContainer::BP_PlayerPOVJumpscareContainer_C::get_Target_Player() {
    return *(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C**)((uintptr_t)this + 0x3a0);
}
void* _Game_Gameplay_Character_Jumpscares_BP_PlayerPOVJumpscareContainer::BP_PlayerPOVJumpscareContainer_C::get_Character_Type() {
    return (void*)((uintptr_t)this + 0x3a8);
}
void* _Game_Gameplay_Character_Jumpscares_BP_PlayerPOVJumpscareContainer::BP_PlayerPOVJumpscareContainer_C::get_Character_Position() {
    return (void*)((uintptr_t)this + 0x3ac);
}
void* _Game_Gameplay_Character_Jumpscares_BP_PlayerPOVJumpscareContainer::BP_PlayerPOVJumpscareContainer_C::get_Target_Position() {
    return (void*)((uintptr_t)this + 0x3b8);
}
_Script_Playtime_Multiplayer::Monster*& _Game_Gameplay_Character_Jumpscares_BP_PlayerPOVJumpscareContainer::BP_PlayerPOVJumpscareContainer_C::get_Monster_Actor() {
    return *(_Script_Playtime_Multiplayer::Monster**)((uintptr_t)this + 0x3c8);
}
void* _Game_Gameplay_Character_Jumpscares_BP_PlayerPOVJumpscareContainer::BP_PlayerPOVJumpscareContainer_C::get_Anim_Timer_Handle() {
    return (void*)((uintptr_t)this + 0x3d0);
}
_Script_CoreUObject::Class* _Game_Gameplay_Character_Jumpscares_BP_PlayerPOVJumpscareContainer::BP_PlayerPOVJumpscareContainer_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Gameplay/Character/Jumpscares/BP_PlayerPOVJumpscareContainer.BP_PlayerPOVJumpscareContainer_C");
    return result;
}
void _Game_Gameplay_Character_Jumpscares_BP_PlayerPOVJumpscareContainer::BP_PlayerPOVJumpscareContainer_C::Begin_Jumpscare(void* Character_Type, _Script_CoreUObject::Vector Monster_Position) {
    return;
}
void _Game_Gameplay_Character_Jumpscares_BP_PlayerPOVJumpscareContainer::BP_PlayerPOVJumpscareContainer_C::Trigger_Jumpscare(void* Character_Type, _Script_Playtime_Multiplayer::Monster* Monster_Actor) {
    return;
}
void _Game_Gameplay_Character_Jumpscares_BP_PlayerPOVJumpscareContainer::BP_PlayerPOVJumpscareContainer_C::ReturnControl() {
    return;
}
void _Game_Gameplay_Character_Jumpscares_BP_PlayerPOVJumpscareContainer::BP_PlayerPOVJumpscareContainer_C::ReceiveDestroyed0() {
    return;
}
