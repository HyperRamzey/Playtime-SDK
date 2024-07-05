#include "..\FUObjectArray.hpp"
#include "..\_Game_Gameplay_Interaction_BP_Locker\BP_Locker_C.hpp"
#include "..\_Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance\BP_WormholeEntrance_C.hpp"
#include "BP_AIController_TutorialHuggy_C.hpp"
#include "..\_Game_Player_Huggy_BP_NetworkHuggy\BP_NetworkHuggy_C.hpp"
#include "..\_Game_Player_TrainingDummy_BP_AIControllerWaypoint\BP_AIControllerWaypoint_C.hpp"
#include "..\_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter\BP_NetworkCharacter_C.hpp"
#include "..\_Script_AIModule\AIController.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\Pawn.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
void* _Game_Player_Huggy_BP_AIController_TutorialHuggy::BP_AIController_TutorialHuggy_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x328);
}
void* _Game_Player_Huggy_BP_AIController_TutorialHuggy::BP_AIController_TutorialHuggy_C::get_HuntPlayerTL__Direction_DD38F81A4B20B0A79447FC9AFB89E9DC() {
    return (void*)((uintptr_t)this + 0x340);
}
void _Game_Player_Huggy_BP_AIController_TutorialHuggy::BP_AIController_TutorialHuggy_C::ExecuteUbergraph_BP_AIController_TutorialHuggy(int32_t EntryPoint) {
    return;
}
void* _Game_Player_Huggy_BP_AIController_TutorialHuggy::BP_AIController_TutorialHuggy_C::get_AttackLocker__Direction_343B7DBE488E1260B90F7880E7D08B1F() {
    return (void*)((uintptr_t)this + 0x330);
}
_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C*& _Game_Player_Huggy_BP_AIController_TutorialHuggy::BP_AIController_TutorialHuggy_C::get_Player() {
    return *(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C**)((uintptr_t)this + 0x358);
}
_Script_Engine::TimelineComponent*& _Game_Player_Huggy_BP_AIController_TutorialHuggy::BP_AIController_TutorialHuggy_C::get_AttackLocker() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x338);
}
void _Game_Player_Huggy_BP_AIController_TutorialHuggy::BP_AIController_TutorialHuggy_C::OnFail_7B1FBC6140F1BD05ECCDD083CACE42FB(void* MovementResult) {
    return;
}
_Script_Engine::TimelineComponent*& _Game_Player_Huggy_BP_AIController_TutorialHuggy::BP_AIController_TutorialHuggy_C::get_HuntPlayerTL() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x348);
}
_Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C*& _Game_Player_Huggy_BP_AIController_TutorialHuggy::BP_AIController_TutorialHuggy_C::get_Huggy() {
    return *(_Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C**)((uintptr_t)this + 0x350);
}
_Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C*& _Game_Player_Huggy_BP_AIController_TutorialHuggy::BP_AIController_TutorialHuggy_C::get_Hole() {
    return *(_Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C**)((uintptr_t)this + 0x360);
}
void* _Game_Player_Huggy_BP_AIController_TutorialHuggy::BP_AIController_TutorialHuggy_C::get_Waypoints() {
    return (void*)((uintptr_t)this + 0x388);
}
void* _Game_Player_Huggy_BP_AIController_TutorialHuggy::BP_AIController_TutorialHuggy_C::get_TempWaypoints() {
    return (void*)((uintptr_t)this + 0x368);
}
_Game_Player_TrainingDummy_BP_AIControllerWaypoint::BP_AIControllerWaypoint_C*& _Game_Player_Huggy_BP_AIController_TutorialHuggy::BP_AIController_TutorialHuggy_C::get_Cached_Waypoint() {
    return *(_Game_Player_TrainingDummy_BP_AIControllerWaypoint::BP_AIControllerWaypoint_C**)((uintptr_t)this + 0x378);
}
void _Game_Player_Huggy_BP_AIController_TutorialHuggy::BP_AIController_TutorialHuggy_C::AttackLocker__NewTrack_0__EventFunc() {
    return;
}
_Game_Player_TrainingDummy_BP_AIControllerWaypoint::BP_AIControllerWaypoint_C*& _Game_Player_Huggy_BP_AIController_TutorialHuggy::BP_AIController_TutorialHuggy_C::get_NextWayPoint() {
    return *(_Game_Player_TrainingDummy_BP_AIControllerWaypoint::BP_AIControllerWaypoint_C**)((uintptr_t)this + 0x380);
}
void* _Game_Player_Huggy_BP_AIController_TutorialHuggy::BP_AIController_TutorialHuggy_C::get_DetectedPlayers() {
    return (void*)((uintptr_t)this + 0x398);
}
void* _Game_Player_Huggy_BP_AIController_TutorialHuggy::BP_AIController_TutorialHuggy_C::get_AI_Players() {
    return (void*)((uintptr_t)this + 0x3a8);
}
void* _Game_Player_Huggy_BP_AIController_TutorialHuggy::BP_AIController_TutorialHuggy_C::get_SpawnLocation() {
    return (void*)((uintptr_t)this + 0x3b8);
}
_Game_Player_TrainingDummy_BP_AIControllerWaypoint::BP_AIControllerWaypoint_C*& _Game_Player_Huggy_BP_AIController_TutorialHuggy::BP_AIController_TutorialHuggy_C::get_DefaultWaypoint() {
    return *(_Game_Player_TrainingDummy_BP_AIControllerWaypoint::BP_AIControllerWaypoint_C**)((uintptr_t)this + 0x3c8);
}
bool _Game_Player_Huggy_BP_AIController_TutorialHuggy::BP_AIController_TutorialHuggy_C::get_ChasingPlayer() {
    return (*(uint8_t*)((uintptr_t)this + 0x3d0 + 0)) & 1 != 0;
}
void _Game_Player_Huggy_BP_AIController_TutorialHuggy::BP_AIController_TutorialHuggy_C::set_ChasingPlayer(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3d0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3d0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C*& _Game_Player_Huggy_BP_AIController_TutorialHuggy::BP_AIController_TutorialHuggy_C::get_CurrentChaseTarget() {
    return *(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C**)((uintptr_t)this + 0x3d8);
}
void _Game_Player_Huggy_BP_AIController_TutorialHuggy::BP_AIController_TutorialHuggy_C::Resume_Wander(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C* Lost_Player) {
    return;
}
_Script_CoreUObject::Class* _Game_Player_Huggy_BP_AIController_TutorialHuggy::BP_AIController_TutorialHuggy_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Player/Huggy/BP_AIController_TutorialHuggy.BP_AIController_TutorialHuggy_C");
    return result;
}
_Script_Engine::Actor* _Game_Player_Huggy_BP_AIController_TutorialHuggy::BP_AIController_TutorialHuggy_C::Get_Second_Closest_Waypoint(float& Distance) {
    return;
}
void _Game_Player_Huggy_BP_AIController_TutorialHuggy::BP_AIController_TutorialHuggy_C::HuntPlayerTL__FinishedFunc() {
    return;
}
void _Game_Player_Huggy_BP_AIController_TutorialHuggy::BP_AIController_TutorialHuggy_C::bypass_conditions_and_wander() {
    return;
}
void _Game_Player_Huggy_BP_AIController_TutorialHuggy::BP_AIController_TutorialHuggy_C::HuntPlayerTL__UpdateFunc() {
    return;
}
void _Game_Player_Huggy_BP_AIController_TutorialHuggy::BP_AIController_TutorialHuggy_C::AttackLocker__FinishedFunc() {
    return;
}
void _Game_Player_Huggy_BP_AIController_TutorialHuggy::BP_AIController_TutorialHuggy_C::OnSuccess_7B1FBC6140F1BD05ECCDD083CACE42FB(void* MovementResult) {
    return;
}
void _Game_Player_Huggy_BP_AIController_TutorialHuggy::BP_AIController_TutorialHuggy_C::AttackLocker__UpdateFunc() {
    return;
}
void _Game_Player_Huggy_BP_AIController_TutorialHuggy::BP_AIController_TutorialHuggy_C::OnFail_E353255C445FF146EDE5C888632107AF(void* MovementResult) {
    return;
}
void _Game_Player_Huggy_BP_AIController_TutorialHuggy::BP_AIController_TutorialHuggy_C::OnSuccess_E353255C445FF146EDE5C888632107AF(void* MovementResult) {
    return;
}
void _Game_Player_Huggy_BP_AIController_TutorialHuggy::BP_AIController_TutorialHuggy_C::OnFail_4B6E1D5147E270C6F339ABBAAB7A338D(void* MovementResult) {
    return;
}
void _Game_Player_Huggy_BP_AIController_TutorialHuggy::BP_AIController_TutorialHuggy_C::OnSuccess_4B6E1D5147E270C6F339ABBAAB7A338D(void* MovementResult) {
    return;
}
void _Game_Player_Huggy_BP_AIController_TutorialHuggy::BP_AIController_TutorialHuggy_C::OnSuccess_843783E64C584B6C5396AA8309872D78(void* MovementResult) {
    return;
}
void _Game_Player_Huggy_BP_AIController_TutorialHuggy::BP_AIController_TutorialHuggy_C::OnFail_B34023C145351D8F4C7D569A518D4B88(void* MovementResult) {
    return;
}
void _Game_Player_Huggy_BP_AIController_TutorialHuggy::BP_AIController_TutorialHuggy_C::AI_MoveThroughWaypoints(_Game_Player_TrainingDummy_BP_AIControllerWaypoint::BP_AIControllerWaypoint_C* StartingWaypoint, float Delay) {
    return;
}
void _Game_Player_Huggy_BP_AIController_TutorialHuggy::BP_AIController_TutorialHuggy_C::OnSuccess_B34023C145351D8F4C7D569A518D4B88(void* MovementResult) {
    return;
}
void _Game_Player_Huggy_BP_AIController_TutorialHuggy::BP_AIController_TutorialHuggy_C::OnFail_843783E64C584B6C5396AA8309872D78(void* MovementResult) {
    return;
}
void _Game_Player_Huggy_BP_AIController_TutorialHuggy::BP_AIController_TutorialHuggy_C::EnableHuggy() {
    return;
}
void _Game_Player_Huggy_BP_AIController_TutorialHuggy::BP_AIController_TutorialHuggy_C::ReceivePossess(_Script_Engine::Pawn* PossessedPawn) {
    return;
}
void _Game_Player_Huggy_BP_AIController_TutorialHuggy::BP_AIController_TutorialHuggy_C::MoveTo(_Script_Engine::Actor* TargetActor) {
    return;
}
void _Game_Player_Huggy_BP_AIController_TutorialHuggy::BP_AIController_TutorialHuggy_C::Charge() {
    return;
}
void _Game_Player_Huggy_BP_AIController_TutorialHuggy::BP_AIController_TutorialHuggy_C::Hunt_Players(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C* DetectedPlayer) {
    return;
}
void _Game_Player_Huggy_BP_AIController_TutorialHuggy::BP_AIController_TutorialHuggy_C::bypass_conditions_and_hunt() {
    return;
}
void _Game_Player_Huggy_BP_AIController_TutorialHuggy::BP_AIController_TutorialHuggy_C::DepositPlayerInHuggyHole() {
    return;
}
void _Game_Player_Huggy_BP_AIController_TutorialHuggy::BP_AIController_TutorialHuggy_C::Destroy_Locker(_Game_Gameplay_Interaction_BP_Locker::BP_Locker_C* NewParam) {
    return;
}
void _Game_Player_Huggy_BP_AIController_TutorialHuggy::BP_AIController_TutorialHuggy_C::DisableHuggy() {
    return;
}
