#include "..\FUObjectArray.hpp"
#include "BP_Locker_C.hpp"
#include "..\_Game_Interface_BPC_Tooltip\BPC_Tooltip_C.hpp"
#include "..\_Game_Interface_NavSystem_Blueprints_Actors_BP_NavLockerAlarm\BP_NavLockerAlarm_C.hpp"
#include "..\_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter\BP_NetworkCharacter_C.hpp"
#include "..\_Script_AIModule\AIPerceptionStimuliSourceComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AudioComponent.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\CameraComponent.hpp"
#include "..\_Script_Engine\Character.hpp"
#include "..\_Script_Engine\Controller.hpp"
#include "..\_Script_Engine\RectLightComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
#include "..\_Script_Playtime_Multiplayer\ANetworkCharacter.hpp"
void* _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x220);
}
void _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::GetPrompt(void*& PromptPrefix, void*& PromptSuffix, bool& CanPrompt) {
    return;
}
_Script_Engine::AudioComponent*& _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::get_AlarmSound() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x228);
}
void _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::CancelMonster_TryOpen() {
    return;
}
_Game_Interface_BPC_Tooltip::BPC_Tooltip_C*& _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::get_BPC_Tooltip1() {
    return *(_Game_Interface_BPC_Tooltip::BPC_Tooltip_C**)((uintptr_t)this + 0x258);
}
_Script_AIModule::AIPerceptionStimuliSourceComponent*& _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::get_AIPerceptionStimuliSource() {
    return *(_Script_AIModule::AIPerceptionStimuliSourceComponent**)((uintptr_t)this + 0x298);
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::get_SM_Light_E() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x230);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::get_ToyPartSpawn() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x238);
}
_Script_Engine::RectLightComponent*& _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::get_RectLight() {
    return *(_Script_Engine::RectLightComponent**)((uintptr_t)this + 0x240);
}
void _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::SetLockOpenProgress(_Script_Engine::Character* Monster, int32_t Hits) {
    return;
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::get_Monster() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x250);
}
_Game_Interface_BPC_Tooltip::BPC_Tooltip_C*& _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::get_BPC_Tooltip2() {
    return *(_Game_Interface_BPC_Tooltip::BPC_Tooltip_C**)((uintptr_t)this + 0x248);
}
_Game_Interface_BPC_Tooltip::BPC_Tooltip_C*& _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::get_BPC_Tooltip() {
    return *(_Game_Interface_BPC_Tooltip::BPC_Tooltip_C**)((uintptr_t)this + 0x260);
}
void _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::UserConstructionScript0() {
    return;
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::get_Survivor() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x268);
}
_Script_Engine::CameraComponent*& _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::get_LockerCam() {
    return *(_Script_Engine::CameraComponent**)((uintptr_t)this + 0x278);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::get_Tooltips() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x270);
}
_Script_Engine::TimelineComponent*& _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::get_Timeline_0() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x2c0);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::get_LockerCamSkeleton() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x280);
}
void _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::Trigger_Camping_Alarm() {
    return;
}
_Script_Engine::BoxComponent*& _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::get_Box() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x288);
}
void* _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::get_Locker_Skeletal_Meshes() {
    return (void*)((uintptr_t)this + 0x328);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::get_SkeletalMesh() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x290);
}
void _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::Owner_EndInteraction(_Script_Playtime_Multiplayer::ANetworkCharacter* InteractingActor) {
    return;
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::get_MonsterSnap() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x2a0);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::get_OutsideLocker() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x2a8);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x2b0);
}
void* _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::get_Timeline_0__Direction_BF26DAF24AE6BDC0E2391C82B728D39F() {
    return (void*)((uintptr_t)this + 0x2b8);
}
void _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::set_CantEnterLocker(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::get_CantEnterLocker() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c8 + 0)) & 1 != 0;
}
int32_t& _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::get_Hits() {
    return *(int32_t*)((uintptr_t)this + 0x2cc);
}
int32_t& _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::get_MaxHits() {
    return *(int32_t*)((uintptr_t)this + 0x2d0);
}
_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C*& _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::get_Player_Ref() {
    return *(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C**)((uintptr_t)this + 0x2d8);
}
void* _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::get_OnLockerOpened() {
    return (void*)((uintptr_t)this + 0x2e0);
}
void* _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::get_OnLockerClosed() {
    return (void*)((uintptr_t)this + 0x2f0);
}
void* _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::get_OnEnteredLocker() {
    return (void*)((uintptr_t)this + 0x300);
}
void* _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::get_OnExitLocker() {
    return (void*)((uintptr_t)this + 0x310);
}
float& _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::get_Random_Float() {
    return *(float*)((uintptr_t)this + 0x320);
}
float& _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::get_Min_Flicker_Value() {
    return *(float*)((uintptr_t)this + 0x338);
}
float& _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::get_Max_Flicker_Value() {
    return *(float*)((uintptr_t)this + 0x33c);
}
void _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::Authority_ContinueInteraction(_Script_Playtime_Multiplayer::ANetworkCharacter* InteractingActor, float Progress) {
    return;
}
float& _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::get_Rate_Scale() {
    return *(float*)((uintptr_t)this + 0x340);
}
float& _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::get_Light_Temperature() {
    return *(float*)((uintptr_t)this + 0x344);
}
void _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::ExitLockerCam_Anim() {
    return;
}
void* _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::get_Light_Color() {
    return (void*)((uintptr_t)this + 0x348);
}
_Game_Interface_NavSystem_Blueprints_Actors_BP_NavLockerAlarm::BP_NavLockerAlarm_C*& _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::get_LockerAlarmNavElement() {
    return *(_Game_Interface_NavSystem_Blueprints_Actors_BP_NavLockerAlarm::BP_NavLockerAlarm_C**)((uintptr_t)this + 0x358);
}
bool _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::get_isAlarmActive() {
    return (*(uint8_t*)((uintptr_t)this + 0x360 + 0)) & 1 != 0;
}
void _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::GetOutOfLocker() {
    return;
}
void _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::set_isAlarmActive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x360 + 0);
    *(uint8_t*)((uintptr_t)this + 0x360 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::OpenCloseDoor(bool ShouldOpen) {
    return;
}
_Script_CoreUObject::Class* _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Gameplay/Interaction/BP_Locker.BP_Locker_C");
    return result;
}
void _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::Authority_BeginInteraction(_Script_Playtime_Multiplayer::ANetworkCharacter* InteractingActor, bool& CanContinueInteraction, float& ContinueInteractionDuration) {
    return;
}
void _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::Owner_BeginInteraction(_Script_Playtime_Multiplayer::ANetworkCharacter* InteractingActor, bool& CanContinueInteraction, float& ContinueInteractionDuration) {
    return;
}
void _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::Owner_ContinueInteraction(_Script_Playtime_Multiplayer::ANetworkCharacter* InteractingActor, float Progress) {
    return;
}
void _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::ChangeLockerLightState(bool Alert) {
    return;
}
void _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::Multi_ShakeLocker_Anim() {
    return;
}
void _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::SetLockerOpenVisibility(_Script_Engine::Character* Monster, bool Visible_) {
    return;
}
void _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::SetLockerOpenProgress(_Script_Engine::Character* Monster, int32_t Hits) {
    return;
}
void _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::Timeline_0__FinishedFunc() {
    return;
}
void _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::Timeline_0__UpdateFunc() {
    return;
}
void _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::Authority_EndInteraction(_Script_Playtime_Multiplayer::ANetworkCharacter* InteractingActor) {
    return;
}
void _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::GetInLocker(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C* PlayerRef) {
    return;
}
void _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::Monster_TryOpen(_Script_Engine::Character* Monster, _Script_Engine::Controller* MonsterController) {
    return;
}
void _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::SetLockOpenVisibility(_Script_Engine::Character* Monster, bool Visible_) {
    return;
}
void _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::OnLockerOpened__DelegateSignature() {
    return;
}
void _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::Multi_EnterLocker_Anim() {
    return;
}
void _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::Multi_ExitLocker_Anim() {
    return;
}
void _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::Multi_LockerTakeout_Anim() {
    return;
}
void _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::EnterLockerCam() {
    return;
}
void _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::ExitLockerCam() {
    return;
}
void _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::InterruptLockerCam() {
    return;
}
void _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::TakeoutLockerCam() {
    return;
}
void _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::EnterLockerCam_Anim() {
    return;
}
void _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::Stop_Camping_Alarm() {
    return;
}
void _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::SoundTheAlarm() {
    return;
}
void _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::Sabotage(float Duration) {
    return;
}
void _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::ExecuteUbergraph_BP_Locker(int32_t EntryPoint) {
    return;
}
void _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::OnExitLocker__DelegateSignature() {
    return;
}
void _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::OnEnteredLocker__DelegateSignature() {
    return;
}
void _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C::OnLockerClosed__DelegateSignature() {
    return;
}
