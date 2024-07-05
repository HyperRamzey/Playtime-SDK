#include "..\FUObjectArray.hpp"
#include "BP_MonsterContainer_C.hpp"
#include "..\_Script_CinematicCamera\CineCameraComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\ChildActorComponent.hpp"
#include "..\_Script_Engine\PlayerController.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
#include "..\_Script_Playtime_Multiplayer\CustomizationSaveGame.hpp"
void* _Game_Gameplay_Game_MonsterSelector_BP_MonsterContainer::BP_MonsterContainer_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x220);
}
_Script_Engine::ChildActorComponent*& _Game_Gameplay_Game_MonsterSelector_BP_MonsterContainer::BP_MonsterContainer_C::get_BP_MeshContainer_HuggySkin() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x230);
}
_Script_Engine::ChildActorComponent*& _Game_Gameplay_Game_MonsterSelector_BP_MonsterContainer::BP_MonsterContainer_C::get_BP_MeshContainer_MommySkin() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x228);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Game_MonsterSelector_BP_MonsterContainer::BP_MonsterContainer_C::get_CameraMover() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x248);
}
_Script_Engine::ChildActorComponent*& _Game_Gameplay_Game_MonsterSelector_BP_MonsterContainer::BP_MonsterContainer_C::get_BP_MeshContainer_BoxySkin() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x238);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Game_MonsterSelector_BP_MonsterContainer::BP_MonsterContainer_C::get_MommyCosmetic() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x250);
}
_Script_CinematicCamera::CineCameraComponent*& _Game_Gameplay_Game_MonsterSelector_BP_MonsterContainer::BP_MonsterContainer_C::get_CineCamera() {
    return *(_Script_CinematicCamera::CineCameraComponent**)((uintptr_t)this + 0x240);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Game_MonsterSelector_BP_MonsterContainer::BP_MonsterContainer_C::get_BoxyCosmetic() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x258);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Game_MonsterSelector_BP_MonsterContainer::BP_MonsterContainer_C::get_HuggyCosmetic() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x260);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Game_MonsterSelector_BP_MonsterContainer::BP_MonsterContainer_C::get_Mommy() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x268);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Game_MonsterSelector_BP_MonsterContainer::BP_MonsterContainer_C::get_Huggy() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x270);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Game_MonsterSelector_BP_MonsterContainer::BP_MonsterContainer_C::get_Boxy() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x278);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Game_MonsterSelector_BP_MonsterContainer::BP_MonsterContainer_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x280);
}
float& _Game_Gameplay_Game_MonsterSelector_BP_MonsterContainer::BP_MonsterContainer_C::get_CameraTranslationTimeline_ReverseMovement_3343ADEF48ACC1FD792B8D93E702994B() {
    return *(float*)((uintptr_t)this + 0x288);
}
_Script_CoreUObject::Class* _Game_Gameplay_Game_MonsterSelector_BP_MonsterContainer::BP_MonsterContainer_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Gameplay/Game/MonsterSelector/BP_MonsterContainer.BP_MonsterContainer_C");
    return result;
}
float& _Game_Gameplay_Game_MonsterSelector_BP_MonsterContainer::BP_MonsterContainer_C::get_CameraTranslationTimeline_Movement_3343ADEF48ACC1FD792B8D93E702994B() {
    return *(float*)((uintptr_t)this + 0x28c);
}
void* _Game_Gameplay_Game_MonsterSelector_BP_MonsterContainer::BP_MonsterContainer_C::get_CameraTranslationTimeline__Direction_3343ADEF48ACC1FD792B8D93E702994B() {
    return (void*)((uintptr_t)this + 0x290);
}
_Script_Engine::TimelineComponent*& _Game_Gameplay_Game_MonsterSelector_BP_MonsterContainer::BP_MonsterContainer_C::get_CameraTranslationTimeline() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x298);
}
void* _Game_Gameplay_Game_MonsterSelector_BP_MonsterContainer::BP_MonsterContainer_C::get_Character() {
    return (void*)((uintptr_t)this + 0x2a0);
}
void* _Game_Gameplay_Game_MonsterSelector_BP_MonsterContainer::BP_MonsterContainer_C::get_Timer() {
    return (void*)((uintptr_t)this + 0x2a8);
}
_Script_Engine::PlayerController*& _Game_Gameplay_Game_MonsterSelector_BP_MonsterContainer::BP_MonsterContainer_C::get_CharPicking() {
    return *(_Script_Engine::PlayerController**)((uintptr_t)this + 0x2b0);
}
bool _Game_Gameplay_Game_MonsterSelector_BP_MonsterContainer::BP_MonsterContainer_C::get_Invert_Cam_Movement() {
    return (*(uint8_t*)((uintptr_t)this + 0x2b8 + 0)) & 1 != 0;
}
void _Game_Gameplay_Game_MonsterSelector_BP_MonsterContainer::BP_MonsterContainer_C::set_Invert_Cam_Movement(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2b8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2b8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Playtime_Multiplayer::CustomizationSaveGame*& _Game_Gameplay_Game_MonsterSelector_BP_MonsterContainer::BP_MonsterContainer_C::get_Save_Game() {
    return *(_Script_Playtime_Multiplayer::CustomizationSaveGame**)((uintptr_t)this + 0x2c0);
}
void _Game_Gameplay_Game_MonsterSelector_BP_MonsterContainer::BP_MonsterContainer_C::GetMonsterIndex(void* Character, int32_t& Index) {
    return;
}
void _Game_Gameplay_Game_MonsterSelector_BP_MonsterContainer::BP_MonsterContainer_C::CameraTranslationTimeline__FinishedFunc() {
    return;
}
void _Game_Gameplay_Game_MonsterSelector_BP_MonsterContainer::BP_MonsterContainer_C::Owning_Capture(_Script_Engine::PlayerController* Controller) {
    return;
}
void _Game_Gameplay_Game_MonsterSelector_BP_MonsterContainer::BP_MonsterContainer_C::CameraTranslationTimeline__UpdateFunc() {
    return;
}
void _Game_Gameplay_Game_MonsterSelector_BP_MonsterContainer::BP_MonsterContainer_C::Server_Capture(_Script_Engine::PlayerController* CharPicking) {
    return;
}
void _Game_Gameplay_Game_MonsterSelector_BP_MonsterContainer::BP_MonsterContainer_C::ExecuteUbergraph_BP_MonsterContainer(int32_t EntryPoint) {
    return;
}
void _Game_Gameplay_Game_MonsterSelector_BP_MonsterContainer::BP_MonsterContainer_C::StartAnimation() {
    return;
}
void _Game_Gameplay_Game_MonsterSelector_BP_MonsterContainer::BP_MonsterContainer_C::Main_Menu_View_Target() {
    return;
}
void _Game_Gameplay_Game_MonsterSelector_BP_MonsterContainer::BP_MonsterContainer_C::RefreshVisuals(bool Delay) {
    return;
}
void _Game_Gameplay_Game_MonsterSelector_BP_MonsterContainer::BP_MonsterContainer_C::SetCharacter(void* CharacterType) {
    return;
}
