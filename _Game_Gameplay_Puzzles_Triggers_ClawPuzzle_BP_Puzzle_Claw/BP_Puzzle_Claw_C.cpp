#include "..\FUObjectArray.hpp"
#include "..\_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet\BPC_HandMagnet_C.hpp"
#include "..\_Game_Gameplay_Puzzles_BP_ToyPuzzle\BP_ToyPuzzle_C.hpp"
#include "BP_Puzzle_Claw_C.hpp"
#include "..\_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter\BP_NetworkCharacter_C.hpp"
#include "..\_Game_Player_TrainingDummy_CPPChildren_BP_NetworkRope\BP_NetworkRope_C.hpp"
#include "..\_Game_Player_TrainingDummy_CPPChildren_BP_Rope\BP_Rope_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AudioComponent.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "..\_Script_Engine\SoundBase.hpp"
#include "..\_Script_Engine\SplineComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
#include "..\_Script_Playtime_Multiplayer\ANetworkHand.hpp"
#include "..\_Script_Playtime_Multiplayer\HandMagnetComponent.hpp"
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::TubeMoving_TL__ChangeDirection__EventFunc() {
    return;
}
void* _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x3e0);
}
float& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_ThrowItem_TL_Vertical_Lerp_9A99ABAD4335B2507918D8AAB937B749() {
    return *(float*)((uintptr_t)this + 0x510);
}
_Game_Player_TrainingDummy_CPPChildren_BP_Rope::BP_Rope_C*& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_GrabRope() {
    return *(_Game_Player_TrainingDummy_CPPChildren_BP_Rope::BP_Rope_C**)((uintptr_t)this + 0x3f0);
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::LEDRandomize_TL__FinishedFunc() {
    return;
}
float& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_HorizontalSpring() {
    return *(float*)((uintptr_t)this + 0x5d0);
}
_Game_Player_TrainingDummy_CPPChildren_BP_Rope::BP_Rope_C*& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_ConnectRope() {
    return *(_Game_Player_TrainingDummy_CPPChildren_BP_Rope::BP_Rope_C**)((uintptr_t)this + 0x3e8);
}
void* _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_ServerHandPos() {
    return (void*)((uintptr_t)this + 0x5e8);
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_Claw_Item_3() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x408);
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::OnRep_ServerTubePos() {
    return;
}
_Script_Engine::TimelineComponent*& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_HandPickup_TL_2() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x530);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_RopeAnchor() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x3f8);
}
_Script_Engine::TimelineComponent*& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_TubeMoving_TL() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x4d8);
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_Claw_Item_2() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x410);
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::OnLoaded_65F522044C76489A1A799F9F16EAF492(_Script_CoreUObject::Object* Loaded) {
    return;
}
_Script_Engine::TimelineComponent*& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_ReturnClaw_TL() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x578);
}
_Script_Engine::SoundBase*& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_GrabSound() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x6b0);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_ItemAnchor() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x400);
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::ReturnClaw_TL__FinishedFunc() {
    return;
}
void* _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_RaiseHand_TL__Direction_1ED76CB44CD4D4D995BCB0A6962AE67D() {
    return (void*)((uintptr_t)this + 0x558);
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_Claw_Item_1() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x418);
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::LowerItems_TL__FinishedFunc() {
    return;
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_Item3AnchorPoint() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x420);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_Item2AnchorPoint() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x428);
}
void* _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_ReturnClaw_TL__Direction_6FD94E8C4B9F83A5EE645FA70B7FCB41() {
    return (void*)((uintptr_t)this + 0x570);
}
_Script_Engine::TimelineComponent*& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_ThrowItem_TL() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x520);
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::BndEvt__BP_Puzzle_BigMeatyClaw_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_Item1AnchorPoint() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x430);
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_ItemtoMove() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x5e0);
}
_Script_Engine::BoxComponent*& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_ItemThunkBox() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x438);
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::TubeMoving_TL__FinishedFunc() {
    return;
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_ConnectingRopeAnchorPoint() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x440);
}
float& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_ThrowItem_TL_Horizontal_lerp_9A99ABAD4335B2507918D8AAB937B749() {
    return *(float*)((uintptr_t)this + 0x514);
}
_Script_Engine::SplineComponent*& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_HorizontalHandPath() {
    return *(_Script_Engine::SplineComponent**)((uintptr_t)this + 0x448);
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::IdleToInProgress0() {
    return;
}
void* _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_DropHand_TL__Direction_AC68C5BC4D4F93F244957CB757437E17() {
    return (void*)((uintptr_t)this + 0x540);
}
_Script_Engine::BoxComponent*& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_DepositBox() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x450);
}
float& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_DropItems_TL_Lerpin_BE962E3845CFFD40D340DCB1511CB147() {
    return *(float*)((uintptr_t)this + 0x4c0);
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_Tube() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x458);
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::Authority_RandomizeItems() {
    return;
}
void* _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_Object_Spawn_Points() {
    return (void*)((uintptr_t)this + 0x5a0);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_GrabberHand() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x460);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_Buttons() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x468);
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::ReceiveBeginPlay() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::DoesTouchCount0(_Script_Playtime_Multiplayer::HandMagnetComponent* Magnet, bool& Counts_, _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C*& Character) {
    return;
}
float& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_ReturnClaw_TL_Hand_Position_Lerp_6FD94E8C4B9F83A5EE645FA70B7FCB41() {
    return *(float*)((uintptr_t)this + 0x56c);
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_Led() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x470);
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::DropHand_TL__FinishedFunc() {
    return;
}
_Script_Engine::BoxComponent*& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_ButtonCollision() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x478);
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::SpawnNewItems_TL__UpdateFunc() {
    return;
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_ButtonHand() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x480);
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_ButtonMesh() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x488);
}
void* _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_RopeBuilding_TL__Direction_1D1C3550409898468D030A96CE7C0C78() {
    return (void*)((uintptr_t)this + 0x4a0);
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::OnRep_Progress_Implementation0() {
    return;
}
_Script_Engine::SplineComponent*& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_VerticalHandMovement() {
    return *(_Script_Engine::SplineComponent**)((uintptr_t)this + 0x490);
}
_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_ButtonHandMagnet() {
    return *(_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C**)((uintptr_t)this + 0x498);
}
_Script_Engine::TimelineComponent*& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_RopeBuilding_TL() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x4a8);
}
float& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_GentleStop_TL_LerpAlpha_8C936E0741645D6CE09B44B9D642541B() {
    return *(float*)((uintptr_t)this + 0x4b0);
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::HandPickupAnim() {
    return;
}
_Script_Engine::SoundBase*& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_FailSound() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x6b8);
}
void* _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_GentleStop_TL__Direction_8C936E0741645D6CE09B44B9D642541B() {
    return (void*)((uintptr_t)this + 0x4b4);
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::ResetPuzzle0() {
    return;
}
_Script_Engine::TimelineComponent*& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_GentleStop_TL() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x4b8);
}
void* _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_DropItems_TL__Direction_BE962E3845CFFD40D340DCB1511CB147() {
    return (void*)((uintptr_t)this + 0x4c4);
}
_Script_Engine::TimelineComponent*& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_DropItems_TL() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x4c8);
}
float& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_TubeMoving_TL_TubeLerp_9632D6AB447F8A7448198298B36AD40B() {
    return *(float*)((uintptr_t)this + 0x4d0);
}
void* _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_TubeMoving_TL__Direction_9632D6AB447F8A7448198298B36AD40B() {
    return (void*)((uintptr_t)this + 0x4d4);
}
float& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_RaiseHand_TL_Scale_1ED76CB44CD4D4D995BCB0A6962AE67D() {
    return *(float*)((uintptr_t)this + 0x550);
}
float& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_LowerItems_TL_Height_Lerp_9CBB6A5C4882C12A5B3F82A2F41EF646() {
    return *(float*)((uintptr_t)this + 0x4e0);
}
void* _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_LowerItems_TL__Direction_9CBB6A5C4882C12A5B3F82A2F41EF646() {
    return (void*)((uintptr_t)this + 0x4e4);
}
_Script_Engine::TimelineComponent*& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_LowerItems_TL() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x4e8);
}
void* _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_LEDFlash_TL__Direction_05C6DA8E4E110E0DD19F51A9B9A466F9() {
    return (void*)((uintptr_t)this + 0x4f0);
}
void* _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_SpawnNewItems_TL__Direction_675C8A59467ECAF058855AAD03564796() {
    return (void*)((uintptr_t)this + 0x584);
}
_Script_Engine::TimelineComponent*& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_LEDFlash_TL() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x4f8);
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::RopeBuilding_TL__UpdateFunc() {
    return;
}
void* _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_LEDRandomize_TL__Direction_CC95EB3E4E661A57718DA48AA8D3A004() {
    return (void*)((uintptr_t)this + 0x500);
}
_Script_Engine::TimelineComponent*& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_LEDRandomize_TL() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x508);
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::ToIdle0() {
    return;
}
void* _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_ThrowItem_TL__Direction_9A99ABAD4335B2507918D8AAB937B749() {
    return (void*)((uintptr_t)this + 0x518);
}
float& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_HandPickup_TL_2_Timeline_5D2C6EDA48161C310A556095DD2C367B() {
    return *(float*)((uintptr_t)this + 0x528);
}
void* _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_HandPickup_TL_2__Direction_5D2C6EDA48161C310A556095DD2C367B() {
    return (void*)((uintptr_t)this + 0x52c);
}
_Script_Engine::SoundBase*& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_ItemSelectedSound() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x688);
}
float& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_DropHand_TL_Scale_AC68C5BC4D4F93F244957CB757437E17() {
    return *(float*)((uintptr_t)this + 0x538);
}
float& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_DropHand_TL_Timeline_AC68C5BC4D4F93F244957CB757437E17() {
    return *(float*)((uintptr_t)this + 0x53c);
}
_Script_Engine::TimelineComponent*& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_DropHand_TL() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x548);
}
float& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_RaiseHand_TL_Timeline_1ED76CB44CD4D4D995BCB0A6962AE67D() {
    return *(float*)((uintptr_t)this + 0x554);
}
_Script_Engine::TimelineComponent*& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_RaiseHand_TL() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x560);
}
float& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_ReturnClaw_TL_Tube_Position_Lerp_6FD94E8C4B9F83A5EE645FA70B7FCB41() {
    return *(float*)((uintptr_t)this + 0x568);
}
float& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_SpawnNewItems_TL_Uhhh_675C8A59467ECAF058855AAD03564796() {
    return *(float*)((uintptr_t)this + 0x580);
}
_Script_Engine::TimelineComponent*& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_SpawnNewItems_TL() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x588);
}
float& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_HandPickup_TL_1_Timeline_3ACB05184721FB6FA4F0E19090E6250B() {
    return *(float*)((uintptr_t)this + 0x590);
}
void* _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_HandPickup_TL_1__Direction_3ACB05184721FB6FA4F0E19090E6250B() {
    return (void*)((uintptr_t)this + 0x594);
}
_Script_Engine::TimelineComponent*& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_HandPickup_TL_1() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x598);
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::RaiseHand_TL__FinishedFunc() {
    return;
}
int32_t& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_IndexOfItemToGet() {
    return *(int32_t*)((uintptr_t)this + 0x5b0);
}
int32_t& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_Streak_Max() {
    return *(int32_t*)((uintptr_t)this + 0x5b4);
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::ThrowItem_TL__FinishedFunc() {
    return;
}
int32_t& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_CachedIndexOfItemToGet() {
    return *(int32_t*)((uintptr_t)this + 0x5b8);
}
int32_t& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_RandomizationIndexer() {
    return *(int32_t*)((uintptr_t)this + 0x674);
}
int32_t& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_LEDcounter() {
    return *(int32_t*)((uintptr_t)this + 0x5bc);
}
int32_t& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_ButtonLEDSetter() {
    return *(int32_t*)((uintptr_t)this + 0x5c0);
}
_Game_Player_TrainingDummy_CPPChildren_BP_NetworkRope::BP_NetworkRope_C*& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_GrabberRope() {
    return *(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkRope::BP_NetworkRope_C**)((uintptr_t)this + 0x5c8);
}
bool _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_isHoldingRightItem() {
    return (*(uint8_t*)((uintptr_t)this + 0x670 + 0)) & 1 != 0;
}
float& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_VerticalSpring() {
    return *(float*)((uintptr_t)this + 0x5d4);
}
void* _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_HorizontalSpringState() {
    return (void*)((uintptr_t)this + 0x5d8);
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::LowerItems() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::RopeBuilding_TL__FinishedFunc() {
    return;
}
void* _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_CachedItemRotation() {
    return (void*)((uintptr_t)this + 0x5f4);
}
void* _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_PossibleItems() {
    return (void*)((uintptr_t)this + 0x600);
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::ReturnClaw() {
    return;
}
void* _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_PossibleLEDs() {
    return (void*)((uintptr_t)this + 0x610);
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::GentleStop_TL__UpdateFunc() {
    return;
}
void* _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_VerticalSpringState() {
    return (void*)((uintptr_t)this + 0x6c4);
}
float& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_HandScale() {
    return *(float*)((uintptr_t)this + 0x620);
}
void* _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_ItemSelectorArray() {
    return (void*)((uintptr_t)this + 0x628);
}
void* _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_SelectedLEDindexes() {
    return (void*)((uintptr_t)this + 0x638);
}
void* _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_CachedHandPos() {
    return (void*)((uintptr_t)this + 0x648);
}
void* _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_ServerTubePos() {
    return (void*)((uintptr_t)this + 0x654);
}
float& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_SpeedIncrease() {
    return *(float*)((uintptr_t)this + 0x660);
}
_Script_Engine::SoundBase*& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_ClawReturnSound() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x6a0);
}
_Game_Player_TrainingDummy_CPPChildren_BP_NetworkRope::BP_NetworkRope_C*& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_ConnectingRope() {
    return *(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkRope::BP_NetworkRope_C**)((uintptr_t)this + 0x668);
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::set_isHoldingRightItem(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x670 + 0);
    *(uint8_t*)((uintptr_t)this + 0x670 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::Randomize_ItemToGet() {
    return;
}
_Script_Engine::SoundBase*& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_ClawMovingSound() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x678);
}
_Script_Engine::AudioComponent*& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_ClawMovingSoundSource() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x680);
}
_Script_Engine::SoundBase*& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_RandomizingSound() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x690);
}
_Script_Engine::SoundBase*& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_SuccessSound() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x698);
}
_Script_Engine::SoundBase*& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_ClawDropSound() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x6a8);
}
void* _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_ClawState() {
    return (void*)((uintptr_t)this + 0x6c0);
}
_Script_Playtime_Multiplayer::ANetworkHand*& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_Attached_Hand() {
    return *(_Script_Playtime_Multiplayer::ANetworkHand**)((uintptr_t)this + 0x6d0);
}
void* _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_Items() {
    return (void*)((uintptr_t)this + 0x6d8);
}
void* _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_PositionToSnap() {
    return (void*)((uintptr_t)this + 0x6e8);
}
_Script_Engine::TimelineComponent*& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_CurrentTubeTimeline() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x6f8);
}
_Script_Engine::TimelineComponent*& _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::get_CurrentHandTimeline() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x700);
}
_Script_CoreUObject::Class* _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Gameplay/Puzzles/Triggers/ClawPuzzle/BP_Puzzle_Claw.BP_Puzzle_Claw_C");
    return result;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::SetAdjustedPositions(float Alpha) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::ToShutDown0() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::DecrementingToInProgress0() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::OnRep_ButtonLEDSetter() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::OnRep_HandScale() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::Set_Items(void*& NewMeshes) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::OnRep_HandPos() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::FailedPuzzle0() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::ToSolved0() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::IncrementingToInProgress0() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::OnRep_ItemToGet() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::DoIncrement0(bool& ShouldComplete_) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::ReturnClaw_TL__UpdateFunc() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::DropHand_TL__UpdateFunc() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::ThrowItem_TL__UpdateFunc() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::LowerItems_TL__UpdateFunc() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::DropItems_TL__FinishedFunc() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::GrabItem() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::DropItems_TL__UpdateFunc() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::HandPickup_TL_1__FinishedFunc() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::HandPickup_TL_1__UpdateFunc() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::HandPickup_TL_1__GrabItem__EventFunc() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::TubeMoving_TL__UpdateFunc() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::MulticastHideRopes() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::RaiseHand_TL__UpdateFunc() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::SpawnNewItems_TL__FinishedFunc() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::HandPickup_TL_2__FinishedFunc() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::HandPickup_TL_2__UpdateFunc() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::LEDRandomize_TL__UpdateFunc() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::LEDRandomize_TL__RandomizeLED__EventFunc() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::LEDFlash_TL__FinishedFunc() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::LEDFlash_TL__UpdateFunc() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::LEDFlash_TL__FlashLED__EventFunc() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::GentleStop_TL__FinishedFunc() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::OnLoaded_9D85731D4D942173C9F08F8F58F5FB43(_Script_CoreUObject::Object* Loaded) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::SpawnClawMovingSound() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::StopClawMovingSound() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::PlayItemSelectedSounds() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::PlayRandomizingSound() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::PlaySuccessSound() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::SpawnClawReturnSound() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::PlayClawDropSound() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::PlayGrabSound() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::SpawnFailSound() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::SpawnItemThunk(_Script_Engine::SceneComponent* Target) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::BndEvt__BP_Puzzle_BigMeatyClaw_DButtonHandMagnet_K2Node_ComponentBoundEvent_1_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::BndEvt__BP_Puzzle_Claw_Fun_HandMagnet_K2Node_ComponentBoundEvent_2_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::ReActivateGrabberButton() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::Prepare_Deposit_Box_For_Item() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::DropInHand() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::SwitchHandAnimation(_Script_Engine::TimelineComponent* New_Timeline) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::Detach() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::DropHeldItem() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::StopTube() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::RaiseUpHand() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::SetGrabberToPlayerHand() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::StartTubeMovement() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::Interrupt_Randomizer() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::Victory_LED() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::DropNewItems() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::Stop_Item_Lowering() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::ThrowItem() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::StopThrow() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::GentleStop() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::SwitchTubeAnimation(_Script_Engine::TimelineComponent* New_Timeline) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::SetSpeed() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw::BP_Puzzle_Claw_C::ExecuteUbergraph_BP_Puzzle_Claw(int32_t EntryPoint) {
    return;
}
