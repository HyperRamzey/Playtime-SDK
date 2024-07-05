#include "..\FUObjectArray.hpp"
#include "..\_Game_Gameplay_Interaction_BP_Locker\BP_Locker_C.hpp"
#include "..\_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet\BPC_HandMagnet_C.hpp"
#include "..\_Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint\BP_WhackAWuggySpawnPoint_C.hpp"
#include "..\_Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance\BP_WormholeEntrance_C.hpp"
#include "..\_Game_Gameplay_Puzzles_BP_ToyPuzzle\BP_ToyPuzzle_C.hpp"
#include "..\_Game_Player_TrainingDummy_BP_AIControllerWaypoint\BP_AIControllerWaypoint_C.hpp"
#include "BP_AIController_TutorialPlayer_C.hpp"
#include "..\_Game_Player_TrainingDummy_BP_AISurvivorWaypoint\BP_AISurvivorWaypoint_C.hpp"
#include "..\_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter\BP_NetworkCharacter_C.hpp"
#include "..\_Script_AIModule\AIController.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\Pawn.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
void* _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x328);
}
void* _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::get_Timeline_1__Direction_C4CCF9484F77148726BC63AFF72CE242() {
    return (void*)((uintptr_t)this + 0x334);
}
float& _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::get_Timeline_1_Alpha_C4CCF9484F77148726BC63AFF72CE242() {
    return *(float*)((uintptr_t)this + 0x330);
}
_Script_Engine::TimelineComponent*& _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::get_Timeline_1() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x338);
}
void* _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::get_TL_LookAtToyMachineMagnet__Direction_22A4F596413A165E4C6A0C88BD236408() {
    return (void*)((uintptr_t)this + 0x340);
}
_Script_Engine::TimelineComponent*& _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::get_Timeline_0() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x358);
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::OnSuccess_689501234CDFAB0D130362B0F34A16BF(void* MovementResult) {
    return;
}
_Script_Engine::TimelineComponent*& _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::get_TL_LookAtToyMachineMagnet() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x348);
}
void* _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::get_Timeline_0__Direction_95898AEE4D329F9F18A8BDABF1E363EE() {
    return (void*)((uintptr_t)this + 0x350);
}
_Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C*& _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::get_Puzzle() {
    return *(_Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C**)((uintptr_t)this + 0x428);
}
void* _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::get_StopRunningAway_TL__Direction_23D1EE2F42960D694CE6C99F7F2365B0() {
    return (void*)((uintptr_t)this + 0x360);
}
_Script_Engine::TimelineComponent*& _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::get_StopRunningAway_TL() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x368);
}
void* _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::get_Lockers() {
    return (void*)((uintptr_t)this + 0x488);
}
float& _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::get_PlayGameTL_Alpha_039D69E54499417E1A66588F3AD8846D() {
    return *(float*)((uintptr_t)this + 0x370);
}
void* _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::get_PlayGameTL__Direction_039D69E54499417E1A66588F3AD8846D() {
    return (void*)((uintptr_t)this + 0x374);
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::set_bRunningFromMonster(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x461 + 0);
    *(uint8_t*)((uintptr_t)this + 0x461 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::TL_AimAtGrapple__UpdateFunc() {
    return;
}
_Script_Engine::TimelineComponent*& _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::get_PlayGameTL() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x378);
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::IsTargetWuggyStillValid_(bool& Value) {
    return;
}
float& _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::get_TL_LookATHandPanel_Alpha_A78F06F341EC2E580C7DCBAB595B4FFD() {
    return *(float*)((uintptr_t)this + 0x380);
}
bool _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::get_Monster_Nearby() {
    return (*(uint8_t*)((uintptr_t)this + 0x4c1 + 0)) & 1 != 0;
}
void* _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::get_TL_LookATHandPanel__Direction_A78F06F341EC2E580C7DCBAB595B4FFD() {
    return (void*)((uintptr_t)this + 0x384);
}
void* _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::get_CurrentTask() {
    return (void*)((uintptr_t)this + 0x4c4);
}
_Script_Engine::TimelineComponent*& _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::get_TL_LookATHandPanel() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x388);
}
float& _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::get_Cached_Speed() {
    return *(float*)((uintptr_t)this + 0x4c8);
}
float& _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::get_TL_AimAtGrapple_Alpha_B24B8C4B4FE12B318D8AEF99B2463482() {
    return *(float*)((uintptr_t)this + 0x390);
}
_Script_Engine::TimelineComponent*& _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::get_TL_AimAtGrapple() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x398);
}
void* _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::get_TL_AimAtGrapple__Direction_B24B8C4B4FE12B318D8AEF99B2463482() {
    return (void*)((uintptr_t)this + 0x394);
}
float& _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::get_TL_LookAtHole_Alpha_0FCBC9754BAFE1ECBFBC89865408DB44() {
    return *(float*)((uintptr_t)this + 0x3a0);
}
void* _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::get_TempWaypoints() {
    return (void*)((uintptr_t)this + 0x450);
}
void* _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::get_TL_LookAtHole__Direction_0FCBC9754BAFE1ECBFBC89865408DB44() {
    return (void*)((uintptr_t)this + 0x3a4);
}
bool _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::get_InHuggyHole() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c8 + 0)) & 1 != 0;
}
_Game_Gameplay_Interaction_BP_Locker::BP_Locker_C*& _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::get_As_BP_Locker() {
    return *(_Game_Gameplay_Interaction_BP_Locker::BP_Locker_C**)((uintptr_t)this + 0x498);
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::OnFail_FD0F23834894CBEC2E4A2FB147BD437C(void* MovementResult) {
    return;
}
_Script_Engine::TimelineComponent*& _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::get_TL_LookAtHole() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x3a8);
}
float& _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::get_TL_LookTowards_Alpha_54D3281C4B0B0FB25F3DE2A49C75F7B5() {
    return *(float*)((uintptr_t)this + 0x3b0);
}
void* _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::get_NavPoints() {
    return (void*)((uintptr_t)this + 0x418);
}
void* _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::get_TL_LookTowards__Direction_54D3281C4B0B0FB25F3DE2A49C75F7B5() {
    return (void*)((uintptr_t)this + 0x3b4);
}
bool _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::get_RescuePlayer() {
    return (*(uint8_t*)((uintptr_t)this + 0x3f0 + 0)) & 1 != 0;
}
_Script_Engine::TimelineComponent*& _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::get_TL_LookTowards() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x3b8);
}
_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C*& _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::get_AIPlayer() {
    return *(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C**)((uintptr_t)this + 0x3c0);
}
bool _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::get_RevivingPlayers() {
    return (*(uint8_t*)((uintptr_t)this + 0x4c2 + 0)) & 1 != 0;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::set_InHuggyHole(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_Player_TrainingDummy_BP_AIControllerWaypoint::BP_AIControllerWaypoint_C*& _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::get_NextWayPoint() {
    return *(_Game_Player_TrainingDummy_BP_AIControllerWaypoint::BP_AIControllerWaypoint_C**)((uintptr_t)this + 0x448);
}
void* _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::get_LastRotation() {
    return (void*)((uintptr_t)this + 0x3cc);
}
_Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C*& _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::get_TargetWuggy() {
    return *(_Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C**)((uintptr_t)this + 0x3d8);
}
void* _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::get_WuggyAnims() {
    return (void*)((uintptr_t)this + 0x3e0);
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::set_RescuePlayer(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3f0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3f0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C*& _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::get_FailedTarget() {
    return *(_Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C**)((uintptr_t)this + 0x3f8);
}
_Script_Engine::SceneComponent*& _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::get_SelectedPuzzleMagnet() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x480);
}
_Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C*& _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::get_WormholeEntrance() {
    return *(_Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C**)((uintptr_t)this + 0x400);
}
void* _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::get_PullingPlayerFromHole() {
    return (void*)((uintptr_t)this + 0x408);
}
void* _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::get_DefaultUsername() {
    return (void*)((uintptr_t)this + 0x430);
}
_Game_Player_TrainingDummy_BP_AIControllerWaypoint::BP_AIControllerWaypoint_C*& _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::get_Cached_Waypoint() {
    return *(_Game_Player_TrainingDummy_BP_AIControllerWaypoint::BP_AIControllerWaypoint_C**)((uintptr_t)this + 0x440);
}
bool _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::get_Grappling() {
    return (*(uint8_t*)((uintptr_t)this + 0x460 + 0)) & 1 != 0;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::set_Grappling(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x460 + 0);
    *(uint8_t*)((uintptr_t)this + 0x460 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::get_bRunningFromMonster() {
    return (*(uint8_t*)((uintptr_t)this + 0x461 + 0)) & 1 != 0;
}
void* _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::get_Waypoints() {
    return (void*)((uintptr_t)this + 0x468);
}
_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::get_Hand_Magnet() {
    return *(_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C**)((uintptr_t)this + 0x478);
}
void* _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::get_WuggyHoles() {
    return (void*)((uintptr_t)this + 0x4a0);
}
void* _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::get_Wuggys_to_Whack() {
    return (void*)((uintptr_t)this + 0x4b0);
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::OnSuccess_04FD208842A05C41AF262CA01A2C00AC(void* MovementResult) {
    return;
}
bool _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::get_HuntingWuggy() {
    return (*(uint8_t*)((uintptr_t)this + 0x4c0 + 0)) & 1 != 0;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::set_HuntingWuggy(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4c0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4c0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::OnSuccess_2C8F206C45C56777B93EDB9B24D13330(void* MovementResult) {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::set_Monster_Nearby(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4c1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4c1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::set_RevivingPlayers(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4c2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4c2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::get_Queue_Run_To_Train() {
    return (*(uint8_t*)((uintptr_t)this + 0x4c3 + 0)) & 1 != 0;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::set_Queue_Run_To_Train(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4c3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4c3 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::get_PreviousTask() {
    return (void*)((uintptr_t)this + 0x4c5);
}
_Script_CoreUObject::Class* _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Player/TrainingDummy/BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C");
    return result;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::OnSuccess_6F31769947BEDFD6363706BA065091DD(void* MovementResult) {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::GetNearestWaypoint(_Game_Player_TrainingDummy_BP_AISurvivorWaypoint::BP_AISurvivorWaypoint_C*& AsBP_AISurvivor_Waypoint) {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::SanitizeMovement() {
    return;
}
_Script_Engine::Actor* _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::GetSecondClosestWaypoint(float& Distance) {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::AI_MoveThroughWaypoints(_Game_Player_TrainingDummy_BP_AIControllerWaypoint::BP_AIControllerWaypoint_C* StartingWaypoint, float Delay) {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::Retract() {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::GetRandomPuzzleMagnet(_Script_Engine::SceneComponent*& OutItem) {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::GetRandomPuzzleOnNearestPuzzlePillar(_Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C*& AsBP_Toy_Puzzle) {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::GetRandomNavPoint(_Script_Engine::Actor*& Output) {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::IsWuggyTaken_(_Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C* Wuggy, bool& Taken_) {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::FaceActor(float Alpha, _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C* Wuggy, _Script_Engine::Actor* Actor) {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::ScanWuggyHoles(_Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C*& Wuggy) {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::SetUsername() {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::TL_LookAtHole__FinishedFunc() {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::TL_LookAtHole__UpdateFunc() {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::TL_LookAtHole__Fire_Hand__EventFunc() {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::OnFail_862F6E4D41B0E64437F61BBA01404954(void* MovementResult) {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::TL_AimAtGrapple__FinishedFunc() {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::TL_LookAtToyMachineMagnet__FinishedFunc() {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::TL_LookAtToyMachineMagnet__UpdateFunc() {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::PullPlayerOutOfHole() {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::TL_LookAtToyMachineMagnet__Fire_Hand__EventFunc() {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::Escaped_WuggyHole(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C* Revived_Player) {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::Timeline_1__FinishedFunc() {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::Timeline_1__UpdateFunc() {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::Timeline_1__Fire_Hand__EventFunc() {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::Timeline_0__FinishedFunc() {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::Timeline_0__UpdateFunc() {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::StopRunningAway_TL__FinishedFunc() {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::StopRunningAway_TL__UpdateFunc() {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::PlayGameTL__FinishedFunc() {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::PlayGameTL__UpdateFunc() {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::TL_LookATHandPanel__FinishedFunc() {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::TL_LookATHandPanel__UpdateFunc() {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::TL_LookTowards__FinishedFunc() {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::TL_LookTowards__UpdateFunc() {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::OnSuccess_862F6E4D41B0E64437F61BBA01404954(void* MovementResult) {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::OnFail_04FD208842A05C41AF262CA01A2C00AC(void* MovementResult) {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::OnFail_042E323842921A96C0D1EEB356FFEE1C(void* MovementResult) {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::OnSuccess_042E323842921A96C0D1EEB356FFEE1C(void* MovementResult) {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::OnFail_2C8F206C45C56777B93EDB9B24D13330(void* MovementResult) {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::OnFail_AC7343674213B09947C48796236BDDEB(void* MovementResult) {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::OnSuccess_AC7343674213B09947C48796236BDDEB(void* MovementResult) {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::OnFail_DE53FA5F4E52F89C623067904CBD41E5(void* MovementResult) {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::OnSuccess_DE53FA5F4E52F89C623067904CBD41E5(void* MovementResult) {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::OnFail_CC110DF4411146EA404E2DABDE73D61B(void* MovementResult) {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::OnSuccess_CC110DF4411146EA404E2DABDE73D61B(void* MovementResult) {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::OnSuccess_FD0F23834894CBEC2E4A2FB147BD437C(void* MovementResult) {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::OnFail_689501234CDFAB0D130362B0F34A16BF(void* MovementResult) {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::OnFail_6F31769947BEDFD6363706BA065091DD(void* MovementResult) {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::ReceivePossess(_Script_Engine::Pawn* PossessedPawn) {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::Grapple() {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::Revive_Player() {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::PullToyPipe() {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::RunToTrain() {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::ExtendAtTarget(_Script_Engine::Actor* Target, _Script_CoreUObject::Vector Location, bool Pull_) {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::Prime_RunAwayFromMonster() {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::CheckIfSafeToExitLocekr() {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::Stop_Running_From_Monster() {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::RunAwayFromMonster() {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::Is_our_solved_puzzle(_Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C* Solved_Puzzle) {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::PlayPuzzle() {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::FindPuzzle() {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::Check_for_Wuggys() {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::AddWuggyToList(bool Crawl, _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C* WuggyToWhack) {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::RemoveWuggyFromList(_Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C* WhackedWuggy) {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::WhackWuggy(_Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C* Wuggy) {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::LookForWuggy() {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::ExecuteUbergraph_BP_AIController_TutorialPlayer(int32_t EntryPoint) {
    return;
}
void _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer::BP_AIController_TutorialPlayer_C::PullingPlayerFromHole__DelegateSignature() {
    return;
}
