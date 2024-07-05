#include "..\FUObjectArray.hpp"
#include "..\_Game_Gameplay_Puzzles_Triggers_GeneratorPuzzle_BP_MP_HandPanel\BP_MP_HandPanel_C.hpp"
#include "BP_NetExtendoHand_C.hpp"
#include "..\_Game_Player_TrainingDummy_Menu_BP_PlayerPreview\BP_PlayerPreview_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\ArrowComponent.hpp"
#include "..\_Script_Engine\AudioComponent.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "..\_Script_Engine\SplineMeshComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
void _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C::EventAttachHandToPanel(_Game_Gameplay_Puzzles_Triggers_GeneratorPuzzle_BP_MP_HandPanel::BP_MP_HandPanel_C* HandPanel) {
    return;
}
float& _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C::get_DeltaSeconds() {
    return *(float*)((uintptr_t)this + 0x2b0);
}
_Script_Engine::SceneComponent*& _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C::get_HighFivePoint() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x230);
}
void _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C::set_UseDistanceDividend(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2a9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2a9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::ArrowComponent*& _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C::get_TraceArrow() {
    return *(_Script_Engine::ArrowComponent**)((uintptr_t)this + 0x228);
}
void _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C::RotateHandToNormal(_Script_CoreUObject::Vector& ImpactNormal) {
    return;
}
void* _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x220);
}
void _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C::OpenPanelChargeGate(bool Condition) {
    return;
}
_Script_Engine::SceneComponent*& _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x258);
}
void _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C::ReceiveBeginPlay0() {
    return;
}
bool _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C::get_HitSomething() {
    return (*(uint8_t*)((uintptr_t)this + 0x281 + 0)) & 1 != 0;
}
_Script_Engine::SceneComponent*& _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C::get_WireEnd() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x238);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C::get_SK_Hand() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x240);
}
void _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C::ToggleRetractionGate(bool Condition) {
    return;
}
void _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C::Hit(_Script_Engine::HitResult& Hit) {
    return;
}
_Script_Engine::AudioComponent*& _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C::get_WindAudio() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x248);
}
void _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C::FitHandOnAttachedItem() {
    return;
}
_Script_Engine::StaticMeshComponent*& _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C::get_HandPivot() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x250);
}
_Game_Gameplay_Puzzles_Triggers_GeneratorPuzzle_BP_MP_HandPanel::BP_MP_HandPanel_C* _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C::Calculate_Panel(_Script_Engine::Actor* ActorToCheck, bool& NoPanel) {
    return;
}
void* _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C::get_RoughEndLocation() {
    return (void*)((uintptr_t)this + 0x260);
}
_Game_Player_TrainingDummy_Menu_BP_PlayerPreview::BP_PlayerPreview_C*& _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C::get_Player() {
    return *(_Game_Player_TrainingDummy_Menu_BP_PlayerPreview::BP_PlayerPreview_C**)((uintptr_t)this + 0x270);
}
void _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C::EventAttachHandToActor() {
    return;
}
bool _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C::get_LeftHand() {
    return (*(uint8_t*)((uintptr_t)this + 0x278 + 0)) & 1 != 0;
}
void _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C::set_LeftHand(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x278 + 0);
    *(uint8_t*)((uintptr_t)this + 0x278 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C::get_DistanceMoved() {
    return *(float*)((uintptr_t)this + 0x27c);
}
bool _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C::get_CanShootForward() {
    return (*(uint8_t*)((uintptr_t)this + 0x280 + 0)) & 1 != 0;
}
void _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C::CheckIfReadyToDestroy() {
    return;
}
void _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C::set_CanShootForward(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x280 + 0);
    *(uint8_t*)((uintptr_t)this + 0x280 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C::set_HitSomething(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x281 + 0);
    *(uint8_t*)((uintptr_t)this + 0x281 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C::get_IsRetractingBackward() {
    return (*(uint8_t*)((uintptr_t)this + 0x282 + 0)) & 1 != 0;
}
void _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C::ExecuteUbergraph_BP_NetExtendoHand(int32_t EntryPoint) {
    return;
}
void _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C::set_IsRetractingBackward(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x282 + 0);
    *(uint8_t*)((uintptr_t)this + 0x282 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C::get_Impact_Normal() {
    return (void*)((uintptr_t)this + 0x284);
}
_Script_Engine::Actor*& _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C::get_Hit_Actor() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x290);
}
void* _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C::get_HandAttached() {
    return (void*)((uintptr_t)this + 0x298);
}
void _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C::ReceiveDestroyed0() {
    return;
}
bool _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C::get_PlayerCanWind() {
    return (*(uint8_t*)((uintptr_t)this + 0x2a8 + 0)) & 1 != 0;
}
void _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C::set_PlayerCanWind(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2a8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2a8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C::get_UseDistanceDividend() {
    return (*(uint8_t*)((uintptr_t)this + 0x2a9 + 0)) & 1 != 0;
}
void _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C::RotateGun() {
    return;
}
float& _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C::get_PullBackDistanceDividend() {
    return *(float*)((uintptr_t)this + 0x2ac);
}
bool _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C::get_Debug() {
    return (*(uint8_t*)((uintptr_t)this + 0x2b4 + 0)) & 1 != 0;
}
void _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C::HandleWireLength() {
    return;
}
void _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C::set_Debug(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2b4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2b4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C::ReceiveTick0(float DeltaSeconds) {
    return;
}
float& _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C::get_PowerOfPullBack() {
    return *(float*)((uintptr_t)this + 0x2b8);
}
void _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C::HandAttached__DelegateSignature(_Script_Engine::Actor* AttachedTo) {
    return;
}
_Script_Engine::SplineMeshComponent*& _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C::get_Wire() {
    return *(_Script_Engine::SplineMeshComponent**)((uintptr_t)this + 0x2c0);
}
_Script_CoreUObject::Class* _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Player/TrainingDummy/Menu/BP_NetExtendoHand.BP_NetExtendoHand_C");
    return result;
}
void _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C::ResetOrigin() {
    return;
}
void _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C::Calculate_Air_High_Five(_Script_CoreUObject::Vector Location, _Script_Engine::Actor* ActorToCheck, bool& NoHighFive) {
    return;
}
void _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C::UnattachAndRetract() {
    return;
}
void _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C::Handle_Wire() {
    return;
}
_Script_Engine::StaticMeshComponent* _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C::GetHitComponent() {
    return;
}
_Script_CoreUObject::Vector _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C::GetReturnVelocity() {
    return;
}
bool _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C::HandleHighFive() {
    return;
}
void _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C::SetLocationByDistanceMoved() {
    return;
}
void _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C::RetractSound() {
    return;
}
void _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C::GrabSound() {
    return;
}
void _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C::TraceForHit() {
    return;
}
void _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C::SetLocationByDirection(float Delta) {
    return;
}
void _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C::ReturnHand() {
    return;
}
void _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C::LaunchSound() {
    return;
}
void _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C::SetHandSide() {
    return;
}
