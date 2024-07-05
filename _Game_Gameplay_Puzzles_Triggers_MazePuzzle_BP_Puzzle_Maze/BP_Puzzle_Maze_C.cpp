#include "..\FUObjectArray.hpp"
#include "..\_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet\BPC_HandMagnet_C.hpp"
#include "..\_Game_Gameplay_Puzzles_BP_ToyPuzzle\BP_ToyPuzzle_C.hpp"
#include "..\_Game_Gameplay_Puzzles_Triggers_MazePuzzle_BP_Maze_Puzzle_Component\BP_Maze_Puzzle_Component_C.hpp"
#include "BP_Puzzle_Maze_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\AudioComponent.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "..\_Script_Engine\SplineComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
void _Game_Gameplay_Puzzles_Triggers_MazePuzzle_BP_Puzzle_Maze::BP_Puzzle_Maze_C::BndEvt__BP_Puzzle_Maze_CWButtonHandMagnet_K2Node_ComponentBoundEvent_1_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange) {
    return;
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Puzzles_Triggers_MazePuzzle_BP_Puzzle_Maze::BP_Puzzle_Maze_C::get_Bottom_Maze_Lights() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x410);
}
_Game_Gameplay_Puzzles_Triggers_MazePuzzle_BP_Maze_Puzzle_Component::BP_Maze_Puzzle_Component_C*& _Game_Gameplay_Puzzles_Triggers_MazePuzzle_BP_Puzzle_Maze::BP_Puzzle_Maze_C::get_MazeOne() {
    return *(_Game_Gameplay_Puzzles_Triggers_MazePuzzle_BP_Maze_Puzzle_Component::BP_Maze_Puzzle_Component_C**)((uintptr_t)this + 0x3f0);
}
void _Game_Gameplay_Puzzles_Triggers_MazePuzzle_BP_Puzzle_Maze::BP_Puzzle_Maze_C::BndEvt__BP_Puzzle_Maze_MazeOne_K2Node_ComponentBoundEvent_2_OnBallPositionChanged__DelegateSignature(_Script_CoreUObject::Vector BallPosition) {
    return;
}
void* _Game_Gameplay_Puzzles_Triggers_MazePuzzle_BP_Puzzle_Maze::BP_Puzzle_Maze_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x3e0);
}
void _Game_Gameplay_Puzzles_Triggers_MazePuzzle_BP_Puzzle_Maze::BP_Puzzle_Maze_C::Flash_Lights__FinishedFunc() {
    return;
}
_Game_Gameplay_Puzzles_Triggers_MazePuzzle_BP_Maze_Puzzle_Component::BP_Maze_Puzzle_Component_C*& _Game_Gameplay_Puzzles_Triggers_MazePuzzle_BP_Puzzle_Maze::BP_Puzzle_Maze_C::get_MazeTwo() {
    return *(_Game_Gameplay_Puzzles_Triggers_MazePuzzle_BP_Maze_Puzzle_Component::BP_Maze_Puzzle_Component_C**)((uintptr_t)this + 0x3e8);
}
void _Game_Gameplay_Puzzles_Triggers_MazePuzzle_BP_Puzzle_Maze::BP_Puzzle_Maze_C::ReceiveTick(float DeltaSeconds) {
    return;
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Puzzles_Triggers_MazePuzzle_BP_Puzzle_Maze::BP_Puzzle_Maze_C::get_SecondPortion() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x3f8);
}
_Script_Engine::TimelineComponent*& _Game_Gameplay_Puzzles_Triggers_MazePuzzle_BP_Puzzle_Maze::BP_Puzzle_Maze_C::get_MoveToEnd() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x480);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Puzzles_Triggers_MazePuzzle_BP_Puzzle_Maze::BP_Puzzle_Maze_C::get_FirstPortion() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x400);
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Puzzles_Triggers_MazePuzzle_BP_Puzzle_Maze::BP_Puzzle_Maze_C::get_Top_Maze_Lights() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x418);
}
_Script_Engine::AudioComponent*& _Game_Gameplay_Puzzles_Triggers_MazePuzzle_BP_Puzzle_Maze::BP_Puzzle_Maze_C::get_BallRollingSound() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x408);
}
_Script_Engine::SplineComponent*& _Game_Gameplay_Puzzles_Triggers_MazePuzzle_BP_Puzzle_Maze::BP_Puzzle_Maze_C::get_WinSpline() {
    return *(_Script_Engine::SplineComponent**)((uintptr_t)this + 0x420);
}
_Script_Engine::TimelineComponent*& _Game_Gameplay_Puzzles_Triggers_MazePuzzle_BP_Puzzle_Maze::BP_Puzzle_Maze_C::get_MoveThroughTransition() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x490);
}
_Script_Engine::SplineComponent*& _Game_Gameplay_Puzzles_Triggers_MazePuzzle_BP_Puzzle_Maze::BP_Puzzle_Maze_C::get_TransitionSpline() {
    return *(_Script_Engine::SplineComponent**)((uintptr_t)this + 0x428);
}
_Script_CoreUObject::Class* _Game_Gameplay_Puzzles_Triggers_MazePuzzle_BP_Puzzle_Maze::BP_Puzzle_Maze_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Gameplay/Puzzles/Triggers/MazePuzzle/BP_Puzzle_Maze.BP_Puzzle_Maze_C");
    return result;
}
_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& _Game_Gameplay_Puzzles_Triggers_MazePuzzle_BP_Puzzle_Maze::BP_Puzzle_Maze_C::get_CCWButtonHandMagnet() {
    return *(_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C**)((uintptr_t)this + 0x430);
}
void _Game_Gameplay_Puzzles_Triggers_MazePuzzle_BP_Puzzle_Maze::BP_Puzzle_Maze_C::MoveThroughTransition__FinishedFunc() {
    return;
}
_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& _Game_Gameplay_Puzzles_Triggers_MazePuzzle_BP_Puzzle_Maze::BP_Puzzle_Maze_C::get_CWButtonHandMagnet() {
    return *(_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C**)((uintptr_t)this + 0x438);
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Puzzles_Triggers_MazePuzzle_BP_Puzzle_Maze::BP_Puzzle_Maze_C::get_Ball() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x440);
}
float& _Game_Gameplay_Puzzles_Triggers_MazePuzzle_BP_Puzzle_Maze::BP_Puzzle_Maze_C::get_MoveThroughTransition_Progress_23C2222C43541DF46C4B7799C8666387() {
    return *(float*)((uintptr_t)this + 0x488);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Puzzles_Triggers_MazePuzzle_BP_Puzzle_Maze::BP_Puzzle_Maze_C::get_Hand1() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x448);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Puzzles_Triggers_MazePuzzle_BP_Puzzle_Maze::BP_Puzzle_Maze_C::get_Hand_0() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x450);
}
_Script_Engine::BoxComponent*& _Game_Gameplay_Puzzles_Triggers_MazePuzzle_BP_Puzzle_Maze::BP_Puzzle_Maze_C::get_CWBoxCollision() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x458);
}
_Script_Engine::BoxComponent*& _Game_Gameplay_Puzzles_Triggers_MazePuzzle_BP_Puzzle_Maze::BP_Puzzle_Maze_C::get_CCWBoxCollision() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x460);
}
void* _Game_Gameplay_Puzzles_Triggers_MazePuzzle_BP_Puzzle_Maze::BP_Puzzle_Maze_C::get_Flash_Lights__Direction_37B990CC49547DCA387A5B97D4BD6BB4() {
    return (void*)((uintptr_t)this + 0x468);
}
_Script_Engine::TimelineComponent*& _Game_Gameplay_Puzzles_Triggers_MazePuzzle_BP_Puzzle_Maze::BP_Puzzle_Maze_C::get_Flash_Lights() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x470);
}
float& _Game_Gameplay_Puzzles_Triggers_MazePuzzle_BP_Puzzle_Maze::BP_Puzzle_Maze_C::get_MoveToEnd_Progress_A391DB8343730811AF2661AE067BB8F1() {
    return *(float*)((uintptr_t)this + 0x478);
}
void* _Game_Gameplay_Puzzles_Triggers_MazePuzzle_BP_Puzzle_Maze::BP_Puzzle_Maze_C::get_MoveToEnd__Direction_A391DB8343730811AF2661AE067BB8F1() {
    return (void*)((uintptr_t)this + 0x47c);
}
void* _Game_Gameplay_Puzzles_Triggers_MazePuzzle_BP_Puzzle_Maze::BP_Puzzle_Maze_C::get_MoveThroughTransition__Direction_23C2222C43541DF46C4B7799C8666387() {
    return (void*)((uintptr_t)this + 0x48c);
}
void _Game_Gameplay_Puzzles_Triggers_MazePuzzle_BP_Puzzle_Maze::BP_Puzzle_Maze_C::OnRep_Progress_Implementation0() {
    return;
}
float& _Game_Gameplay_Puzzles_Triggers_MazePuzzle_BP_Puzzle_Maze::BP_Puzzle_Maze_C::get_PreviousBallExitSpeed() {
    return *(float*)((uintptr_t)this + 0x498);
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Puzzles_Triggers_MazePuzzle_BP_Puzzle_Maze::BP_Puzzle_Maze_C::get_Currently_Flashing_Maze_Lights() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x4a0);
}
void _Game_Gameplay_Puzzles_Triggers_MazePuzzle_BP_Puzzle_Maze::BP_Puzzle_Maze_C::ResetPuzzle0() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_MazePuzzle_BP_Puzzle_Maze::BP_Puzzle_Maze_C::OnRep_State_Implementation0() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_MazePuzzle_BP_Puzzle_Maze::BP_Puzzle_Maze_C::ToSolved0() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_MazePuzzle_BP_Puzzle_Maze::BP_Puzzle_Maze_C::ToIdle0() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_MazePuzzle_BP_Puzzle_Maze::BP_Puzzle_Maze_C::DoIncrement0(bool& ShouldComplete_) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_MazePuzzle_BP_Puzzle_Maze::BP_Puzzle_Maze_C::IdleToInProgress0() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_MazePuzzle_BP_Puzzle_Maze::BP_Puzzle_Maze_C::MoveThroughTransition__UpdateFunc() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_MazePuzzle_BP_Puzzle_Maze::BP_Puzzle_Maze_C::MoveToEnd__FinishedFunc() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_MazePuzzle_BP_Puzzle_Maze::BP_Puzzle_Maze_C::MoveToEnd__UpdateFunc() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_MazePuzzle_BP_Puzzle_Maze::BP_Puzzle_Maze_C::Flash_Lights__UpdateFunc() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_MazePuzzle_BP_Puzzle_Maze::BP_Puzzle_Maze_C::Flash_Lights__Off__EventFunc() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_MazePuzzle_BP_Puzzle_Maze::BP_Puzzle_Maze_C::SetBallPosition(_Script_CoreUObject::Vector Position) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_MazePuzzle_BP_Puzzle_Maze::BP_Puzzle_Maze_C::Flash_Lights__On__EventFunc() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_MazePuzzle_BP_Puzzle_Maze::BP_Puzzle_Maze_C::ReceiveBeginPlay() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_MazePuzzle_BP_Puzzle_Maze::BP_Puzzle_Maze_C::BndEvt__BP_Puzzle_Maze_CCWButtonHandMagnet_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_MazePuzzle_BP_Puzzle_Maze::BP_Puzzle_Maze_C::Event_Increment_Progress(float Ball_Exit_Speed) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_MazePuzzle_BP_Puzzle_Maze::BP_Puzzle_Maze_C::BndEvt__BP_Puzzle_Maze_MazeTwo_K2Node_ComponentBoundEvent_3_OnBallPositionChanged__DelegateSignature(_Script_CoreUObject::Vector BallPosition) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_MazePuzzle_BP_Puzzle_Maze::BP_Puzzle_Maze_C::BndEvt__BP_Puzzle_Maze_MazeOne_K2Node_ComponentBoundEvent_4_OnMazeComplete__DelegateSignature(float BallSpeed) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_MazePuzzle_BP_Puzzle_Maze::BP_Puzzle_Maze_C::BndEvt__BP_Puzzle_Maze_MazeTwo_K2Node_ComponentBoundEvent_5_OnMazeComplete__DelegateSignature(float BallSpeed) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_MazePuzzle_BP_Puzzle_Maze::BP_Puzzle_Maze_C::ExecuteUbergraph_BP_Puzzle_Maze(int32_t EntryPoint) {
    return;
}
