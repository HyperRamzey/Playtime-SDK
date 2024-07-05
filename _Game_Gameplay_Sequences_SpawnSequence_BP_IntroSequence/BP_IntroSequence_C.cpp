#include "..\FUObjectArray.hpp"
#include "BP_IntroSequence_C.hpp"
#include "..\_Game_Interface_UI_MapIntro\UI_MapIntro_C.hpp"
#include "..\_Script_CinematicCamera\CineCameraComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SplineComponent.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void* _Game_Gameplay_Sequences_SpawnSequence_BP_IntroSequence::BP_IntroSequence_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x220);
}
float& _Game_Gameplay_Sequences_SpawnSequence_BP_IntroSequence::BP_IntroSequence_C::get_TL_CameraSequence_Fade_2CAF406B400FDEC53F2DD1A404FD0956() {
    return *(float*)((uintptr_t)this + 0x240);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Sequences_SpawnSequence_BP_IntroSequence::BP_IntroSequence_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x238);
}
_Script_CinematicCamera::CineCameraComponent*& _Game_Gameplay_Sequences_SpawnSequence_BP_IntroSequence::BP_IntroSequence_C::get_CineCamera() {
    return *(_Script_CinematicCamera::CineCameraComponent**)((uintptr_t)this + 0x228);
}
_Script_Engine::SplineComponent*& _Game_Gameplay_Sequences_SpawnSequence_BP_IntroSequence::BP_IntroSequence_C::get_Rail() {
    return *(_Script_Engine::SplineComponent**)((uintptr_t)this + 0x230);
}
_Script_Engine::TimelineComponent*& _Game_Gameplay_Sequences_SpawnSequence_BP_IntroSequence::BP_IntroSequence_C::get_TL_CameraSequence() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x250);
}
void* _Game_Gameplay_Sequences_SpawnSequence_BP_IntroSequence::BP_IntroSequence_C::get_TL_CameraSequence__Direction_2CAF406B400FDEC53F2DD1A404FD0956() {
    return (void*)((uintptr_t)this + 0x248);
}
float& _Game_Gameplay_Sequences_SpawnSequence_BP_IntroSequence::BP_IntroSequence_C::get_TL_CameraSequence_Alpha_2CAF406B400FDEC53F2DD1A404FD0956() {
    return *(float*)((uintptr_t)this + 0x244);
}
void _Game_Gameplay_Sequences_SpawnSequence_BP_IntroSequence::BP_IntroSequence_C::CreateIntroWidget() {
    return;
}
float& _Game_Gameplay_Sequences_SpawnSequence_BP_IntroSequence::BP_IntroSequence_C::get_Length() {
    return *(float*)((uintptr_t)this + 0x258);
}
float& _Game_Gameplay_Sequences_SpawnSequence_BP_IntroSequence::BP_IntroSequence_C::get_Progress() {
    return *(float*)((uintptr_t)this + 0x25c);
}
void* _Game_Gameplay_Sequences_SpawnSequence_BP_IntroSequence::BP_IntroSequence_C::get_OnIntroPlayed() {
    return (void*)((uintptr_t)this + 0x260);
}
_Game_Interface_UI_MapIntro::UI_MapIntro_C*& _Game_Gameplay_Sequences_SpawnSequence_BP_IntroSequence::BP_IntroSequence_C::get_MapIntroUI() {
    return *(_Game_Interface_UI_MapIntro::UI_MapIntro_C**)((uintptr_t)this + 0x270);
}
_Script_CoreUObject::Class* _Game_Gameplay_Sequences_SpawnSequence_BP_IntroSequence::BP_IntroSequence_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Gameplay/Sequences/SpawnSequence/BP_IntroSequence.BP_IntroSequence_C");
    return result;
}
void* _Game_Gameplay_Sequences_SpawnSequence_BP_IntroSequence::BP_IntroSequence_C::GetLevelName() {
    return;
}
void _Game_Gameplay_Sequences_SpawnSequence_BP_IntroSequence::BP_IntroSequence_C::GetPlayerHUD(_Script_UMG::UserWidget*& HUD) {
    return;
}
void _Game_Gameplay_Sequences_SpawnSequence_BP_IntroSequence::BP_IntroSequence_C::GetCameraTarget(_Script_CoreUObject::Vector& Location, _Script_CoreUObject::Rotator& Roation) {
    return;
}
void _Game_Gameplay_Sequences_SpawnSequence_BP_IntroSequence::BP_IntroSequence_C::UserConstructionScript0() {
    return;
}
void _Game_Gameplay_Sequences_SpawnSequence_BP_IntroSequence::BP_IntroSequence_C::TL_CameraSequence__FinishedFunc() {
    return;
}
void _Game_Gameplay_Sequences_SpawnSequence_BP_IntroSequence::BP_IntroSequence_C::TL_CameraSequence__UpdateFunc() {
    return;
}
void _Game_Gameplay_Sequences_SpawnSequence_BP_IntroSequence::BP_IntroSequence_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Gameplay_Sequences_SpawnSequence_BP_IntroSequence::BP_IntroSequence_C::PlaySequence() {
    return;
}
void _Game_Gameplay_Sequences_SpawnSequence_BP_IntroSequence::BP_IntroSequence_C::ExecuteUbergraph_BP_IntroSequence(int32_t EntryPoint) {
    return;
}
void _Game_Gameplay_Sequences_SpawnSequence_BP_IntroSequence::BP_IntroSequence_C::OnIntroPlayed__DelegateSignature() {
    return;
}
