#include "..\FUObjectArray.hpp"
#include "BP_SpawnSequence_C.hpp"
#include "..\_Script_CinematicCamera\CineCameraComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\PlayerStart.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SplineComponent.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void* _Game_Gameplay_Sequences_SpawnSequence_BP_SpawnSequence::BP_SpawnSequence_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x220);
}
float& _Game_Gameplay_Sequences_SpawnSequence_BP_SpawnSequence::BP_SpawnSequence_C::get_TL_CameraSequence_Alpha_E0F2E4DD4EECC768E51E24BCD9C84614() {
    return *(float*)((uintptr_t)this + 0x244);
}
_Script_CinematicCamera::CineCameraComponent*& _Game_Gameplay_Sequences_SpawnSequence_BP_SpawnSequence::BP_SpawnSequence_C::get_CineCamera() {
    return *(_Script_CinematicCamera::CineCameraComponent**)((uintptr_t)this + 0x228);
}
_Script_Engine::SplineComponent*& _Game_Gameplay_Sequences_SpawnSequence_BP_SpawnSequence::BP_SpawnSequence_C::get_CameraRail() {
    return *(_Script_Engine::SplineComponent**)((uintptr_t)this + 0x230);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Sequences_SpawnSequence_BP_SpawnSequence::BP_SpawnSequence_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x238);
}
float& _Game_Gameplay_Sequences_SpawnSequence_BP_SpawnSequence::BP_SpawnSequence_C::get_TL_CameraSequence_Fade_E0F2E4DD4EECC768E51E24BCD9C84614() {
    return *(float*)((uintptr_t)this + 0x240);
}
void* _Game_Gameplay_Sequences_SpawnSequence_BP_SpawnSequence::BP_SpawnSequence_C::get_TL_CameraSequence__Direction_E0F2E4DD4EECC768E51E24BCD9C84614() {
    return (void*)((uintptr_t)this + 0x248);
}
_Script_Engine::TimelineComponent*& _Game_Gameplay_Sequences_SpawnSequence_BP_SpawnSequence::BP_SpawnSequence_C::get_TL_CameraSequence() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x250);
}
void _Game_Gameplay_Sequences_SpawnSequence_BP_SpawnSequence::BP_SpawnSequence_C::ReservePlayerStart(_Script_Engine::PlayerStart*& PlayerStart) {
    return;
}
void* _Game_Gameplay_Sequences_SpawnSequence_BP_SpawnSequence::BP_SpawnSequence_C::get_SpawnTransform() {
    return (void*)((uintptr_t)this + 0x258);
}
void* _Game_Gameplay_Sequences_SpawnSequence_BP_SpawnSequence::BP_SpawnSequence_C::get_Character() {
    return (void*)((uintptr_t)this + 0x268);
}
_Script_Engine::PlayerStart*& _Game_Gameplay_Sequences_SpawnSequence_BP_SpawnSequence::BP_SpawnSequence_C::get_PlayerStart() {
    return *(_Script_Engine::PlayerStart**)((uintptr_t)this + 0x270);
}
float& _Game_Gameplay_Sequences_SpawnSequence_BP_SpawnSequence::BP_SpawnSequence_C::get_CameraProgress() {
    return *(float*)((uintptr_t)this + 0x278);
}
bool _Game_Gameplay_Sequences_SpawnSequence_BP_SpawnSequence::BP_SpawnSequence_C::get_DebugCameraRail() {
    return (*(uint8_t*)((uintptr_t)this + 0x27c + 0)) & 1 != 0;
}
void _Game_Gameplay_Sequences_SpawnSequence_BP_SpawnSequence::BP_SpawnSequence_C::set_DebugCameraRail(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x27c + 0);
    *(uint8_t*)((uintptr_t)this + 0x27c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Gameplay_Sequences_SpawnSequence_BP_SpawnSequence::BP_SpawnSequence_C::get_OnIntroPlayed() {
    return (void*)((uintptr_t)this + 0x280);
}
void* _Game_Gameplay_Sequences_SpawnSequence_BP_SpawnSequence::BP_SpawnSequence_C::get_PlayerStarts() {
    return (void*)((uintptr_t)this + 0x290);
}
_Script_CoreUObject::Class* _Game_Gameplay_Sequences_SpawnSequence_BP_SpawnSequence::BP_SpawnSequence_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Gameplay/Sequences/SpawnSequence/BP_SpawnSequence.BP_SpawnSequence_C");
    return result;
}
void _Game_Gameplay_Sequences_SpawnSequence_BP_SpawnSequence::BP_SpawnSequence_C::TogglePlayerMesh(bool Hide) {
    return;
}
void _Game_Gameplay_Sequences_SpawnSequence_BP_SpawnSequence::BP_SpawnSequence_C::GetMonsterHud(_Script_UMG::UserWidget*& HUD) {
    return;
}
void _Game_Gameplay_Sequences_SpawnSequence_BP_SpawnSequence::BP_SpawnSequence_C::GetCameraTarget(_Script_CoreUObject::Vector& Location, _Script_CoreUObject::Rotator& Roation) {
    return;
}
void _Game_Gameplay_Sequences_SpawnSequence_BP_SpawnSequence::BP_SpawnSequence_C::ConvertStartTransform(_Script_CoreUObject::Transform InTransform, _Script_CoreUObject::Transform& OutTransform) {
    return;
}
void _Game_Gameplay_Sequences_SpawnSequence_BP_SpawnSequence::BP_SpawnSequence_C::UserConstructionScript0() {
    return;
}
void _Game_Gameplay_Sequences_SpawnSequence_BP_SpawnSequence::BP_SpawnSequence_C::TL_CameraSequence__FinishedFunc() {
    return;
}
void _Game_Gameplay_Sequences_SpawnSequence_BP_SpawnSequence::BP_SpawnSequence_C::TL_CameraSequence__UpdateFunc() {
    return;
}
void _Game_Gameplay_Sequences_SpawnSequence_BP_SpawnSequence::BP_SpawnSequence_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Gameplay_Sequences_SpawnSequence_BP_SpawnSequence::BP_SpawnSequence_C::PlaySequence() {
    return;
}
void _Game_Gameplay_Sequences_SpawnSequence_BP_SpawnSequence::BP_SpawnSequence_C::ExecuteUbergraph_BP_SpawnSequence(int32_t EntryPoint) {
    return;
}
void _Game_Gameplay_Sequences_SpawnSequence_BP_SpawnSequence::BP_SpawnSequence_C::OnIntroPlayed__DelegateSignature() {
    return;
}
