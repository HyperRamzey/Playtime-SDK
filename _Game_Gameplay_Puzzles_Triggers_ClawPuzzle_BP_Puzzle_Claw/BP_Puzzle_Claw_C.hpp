#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Gameplay_Puzzles_BP_ToyPuzzle\BP_ToyPuzzle_C.hpp"
namespace _Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet {
struct BPC_HandMagnet_C;
}
namespace _Game_Player_TrainingDummy_CPPChildren_BP_Rope {
struct BP_Rope_C;
}
namespace _Script_Engine {
struct BoxComponent;
}
namespace _Script_Engine {
struct AudioComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct SplineComponent;
}
namespace _Script_Engine {
struct TimelineComponent;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Game_Player_TrainingDummy_CPPChildren_BP_NetworkRope {
struct BP_NetworkRope_C;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct SoundBase;
}
namespace _Script_Playtime_Multiplayer {
struct ANetworkHand;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
struct HandMagnetComponent;
}
namespace _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter {
struct BP_NetworkCharacter_C;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Game_Gameplay_Puzzles_Triggers_ClawPuzzle_BP_Puzzle_Claw {
#pragma pack(push, 1)
struct BP_Puzzle_Claw_C : public _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C {
    private: char pad_3e0[0x328]; public:
    void* get_UberGraphFrame0();
    _Game_Player_TrainingDummy_CPPChildren_BP_Rope::BP_Rope_C*& get_ConnectRope();
    _Game_Player_TrainingDummy_CPPChildren_BP_Rope::BP_Rope_C*& get_GrabRope();
    _Script_Engine::SceneComponent*& get_RopeAnchor();
    _Script_Engine::SceneComponent*& get_ItemAnchor();
    _Script_Engine::StaticMeshComponent*& get_Claw_Item_3();
    _Script_Engine::StaticMeshComponent*& get_Claw_Item_2();
    _Script_Engine::StaticMeshComponent*& get_Claw_Item_1();
    _Script_Engine::SceneComponent*& get_Item3AnchorPoint();
    _Script_Engine::SceneComponent*& get_Item2AnchorPoint();
    _Script_Engine::SceneComponent*& get_Item1AnchorPoint();
    _Script_Engine::BoxComponent*& get_ItemThunkBox();
    _Script_Engine::SceneComponent*& get_ConnectingRopeAnchorPoint();
    _Script_Engine::SplineComponent*& get_HorizontalHandPath();
    _Script_Engine::BoxComponent*& get_DepositBox();
    _Script_Engine::StaticMeshComponent*& get_Tube();
    _Script_Engine::SkeletalMeshComponent*& get_GrabberHand();
    _Script_Engine::SceneComponent*& get_Buttons();
    _Script_Engine::StaticMeshComponent*& get_Led();
    _Script_Engine::BoxComponent*& get_ButtonCollision();
    _Script_Engine::SkeletalMeshComponent*& get_ButtonHand();
    _Script_Engine::StaticMeshComponent*& get_ButtonMesh();
    _Script_Engine::SplineComponent*& get_VerticalHandMovement();
    _Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& get_ButtonHandMagnet();
    void* get_RopeBuilding_TL__Direction_1D1C3550409898468D030A96CE7C0C78();
    _Script_Engine::TimelineComponent*& get_RopeBuilding_TL();
    float& get_GentleStop_TL_LerpAlpha_8C936E0741645D6CE09B44B9D642541B();
    void* get_GentleStop_TL__Direction_8C936E0741645D6CE09B44B9D642541B();
    _Script_Engine::TimelineComponent*& get_GentleStop_TL();
    float& get_DropItems_TL_Lerpin_BE962E3845CFFD40D340DCB1511CB147();
    void* get_DropItems_TL__Direction_BE962E3845CFFD40D340DCB1511CB147();
    _Script_Engine::TimelineComponent*& get_DropItems_TL();
    float& get_TubeMoving_TL_TubeLerp_9632D6AB447F8A7448198298B36AD40B();
    void* get_TubeMoving_TL__Direction_9632D6AB447F8A7448198298B36AD40B();
    _Script_Engine::TimelineComponent*& get_TubeMoving_TL();
    float& get_LowerItems_TL_Height_Lerp_9CBB6A5C4882C12A5B3F82A2F41EF646();
    void* get_LowerItems_TL__Direction_9CBB6A5C4882C12A5B3F82A2F41EF646();
    _Script_Engine::TimelineComponent*& get_LowerItems_TL();
    void* get_LEDFlash_TL__Direction_05C6DA8E4E110E0DD19F51A9B9A466F9();
    _Script_Engine::TimelineComponent*& get_LEDFlash_TL();
    void* get_LEDRandomize_TL__Direction_CC95EB3E4E661A57718DA48AA8D3A004();
    _Script_Engine::TimelineComponent*& get_LEDRandomize_TL();
    float& get_ThrowItem_TL_Vertical_Lerp_9A99ABAD4335B2507918D8AAB937B749();
    float& get_ThrowItem_TL_Horizontal_lerp_9A99ABAD4335B2507918D8AAB937B749();
    void* get_ThrowItem_TL__Direction_9A99ABAD4335B2507918D8AAB937B749();
    _Script_Engine::TimelineComponent*& get_ThrowItem_TL();
    float& get_HandPickup_TL_2_Timeline_5D2C6EDA48161C310A556095DD2C367B();
    void* get_HandPickup_TL_2__Direction_5D2C6EDA48161C310A556095DD2C367B();
    _Script_Engine::TimelineComponent*& get_HandPickup_TL_2();
    float& get_DropHand_TL_Scale_AC68C5BC4D4F93F244957CB757437E17();
    float& get_DropHand_TL_Timeline_AC68C5BC4D4F93F244957CB757437E17();
    void* get_DropHand_TL__Direction_AC68C5BC4D4F93F244957CB757437E17();
    _Script_Engine::TimelineComponent*& get_DropHand_TL();
    float& get_RaiseHand_TL_Scale_1ED76CB44CD4D4D995BCB0A6962AE67D();
    float& get_RaiseHand_TL_Timeline_1ED76CB44CD4D4D995BCB0A6962AE67D();
    void* get_RaiseHand_TL__Direction_1ED76CB44CD4D4D995BCB0A6962AE67D();
    _Script_Engine::TimelineComponent*& get_RaiseHand_TL();
    float& get_ReturnClaw_TL_Tube_Position_Lerp_6FD94E8C4B9F83A5EE645FA70B7FCB41();
    float& get_ReturnClaw_TL_Hand_Position_Lerp_6FD94E8C4B9F83A5EE645FA70B7FCB41();
    void* get_ReturnClaw_TL__Direction_6FD94E8C4B9F83A5EE645FA70B7FCB41();
    _Script_Engine::TimelineComponent*& get_ReturnClaw_TL();
    float& get_SpawnNewItems_TL_Uhhh_675C8A59467ECAF058855AAD03564796();
    void* get_SpawnNewItems_TL__Direction_675C8A59467ECAF058855AAD03564796();
    _Script_Engine::TimelineComponent*& get_SpawnNewItems_TL();
    float& get_HandPickup_TL_1_Timeline_3ACB05184721FB6FA4F0E19090E6250B();
    void* get_HandPickup_TL_1__Direction_3ACB05184721FB6FA4F0E19090E6250B();
    _Script_Engine::TimelineComponent*& get_HandPickup_TL_1();
    void* get_Object_Spawn_Points();
    int32_t& get_IndexOfItemToGet();
    int32_t& get_Streak_Max();
    int32_t& get_CachedIndexOfItemToGet();
    int32_t& get_LEDcounter();
    int32_t& get_ButtonLEDSetter();
    _Game_Player_TrainingDummy_CPPChildren_BP_NetworkRope::BP_NetworkRope_C*& get_GrabberRope();
    float& get_HorizontalSpring();
    float& get_VerticalSpring();
    void* get_HorizontalSpringState();
    _Script_Engine::StaticMeshComponent*& get_ItemtoMove();
    void* get_ServerHandPos();
    void* get_CachedItemRotation();
    void* get_PossibleItems();
    void* get_PossibleLEDs();
    float& get_HandScale();
    void* get_ItemSelectorArray();
    void* get_SelectedLEDindexes();
    void* get_CachedHandPos();
    void* get_ServerTubePos();
    float& get_SpeedIncrease();
    _Game_Player_TrainingDummy_CPPChildren_BP_NetworkRope::BP_NetworkRope_C*& get_ConnectingRope();
    bool get_isHoldingRightItem();
    void set_isHoldingRightItem(bool value);
    int32_t& get_RandomizationIndexer();
    _Script_Engine::SoundBase*& get_ClawMovingSound();
    _Script_Engine::AudioComponent*& get_ClawMovingSoundSource();
    _Script_Engine::SoundBase*& get_ItemSelectedSound();
    _Script_Engine::SoundBase*& get_RandomizingSound();
    _Script_Engine::SoundBase*& get_SuccessSound();
    _Script_Engine::SoundBase*& get_ClawReturnSound();
    _Script_Engine::SoundBase*& get_ClawDropSound();
    _Script_Engine::SoundBase*& get_GrabSound();
    _Script_Engine::SoundBase*& get_FailSound();
    void* get_ClawState();
    void* get_VerticalSpringState();
    _Script_Playtime_Multiplayer::ANetworkHand*& get_Attached_Hand();
    void* get_Items();
    void* get_PositionToSnap();
    _Script_Engine::TimelineComponent*& get_CurrentTubeTimeline();
    _Script_Engine::TimelineComponent*& get_CurrentHandTimeline();
    static _Script_CoreUObject::Class* static_class();
    void ResetPuzzle0();
    void ToShutDown0();
    void OnRep_ServerTubePos();
    void OnRep_Progress_Implementation0();
    void DecrementingToInProgress0();
    void OnRep_ButtonLEDSetter();
    void OnRep_HandScale();
    void Authority_RandomizeItems();
    void OnRep_HandPos();
    void FailedPuzzle0();
    void ToSolved0();
    void IncrementingToInProgress0();
    void DoesTouchCount0(_Script_Playtime_Multiplayer::HandMagnetComponent* Magnet, bool& Counts_, _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C*& Character);
    void OnRep_ItemToGet();
    void DoIncrement0(bool& ShouldComplete_);
    void ToIdle0();
    void IdleToInProgress0();
    void RopeBuilding_TL__FinishedFunc();
    void RopeBuilding_TL__UpdateFunc();
    void ReturnClaw_TL__FinishedFunc();
    void ReturnClaw_TL__UpdateFunc();
    void DropHand_TL__FinishedFunc();
    void DropHand_TL__UpdateFunc();
    void ThrowItem_TL__FinishedFunc();
    void ThrowItem_TL__UpdateFunc();
    void LowerItems_TL__FinishedFunc();
    void LowerItems_TL__UpdateFunc();
    void DropItems_TL__FinishedFunc();
    void DropItems_TL__UpdateFunc();
    void HandPickup_TL_1__FinishedFunc();
    void HandPickup_TL_1__UpdateFunc();
    void HandPickup_TL_1__GrabItem__EventFunc();
    void TubeMoving_TL__FinishedFunc();
    void TubeMoving_TL__UpdateFunc();
    void TubeMoving_TL__ChangeDirection__EventFunc();
    void RaiseHand_TL__FinishedFunc();
    void RaiseHand_TL__UpdateFunc();
    void SpawnNewItems_TL__FinishedFunc();
    void SpawnNewItems_TL__UpdateFunc();
    void HandPickup_TL_2__FinishedFunc();
    void HandPickup_TL_2__UpdateFunc();
    void LEDRandomize_TL__FinishedFunc();
    void LEDRandomize_TL__UpdateFunc();
    void LEDRandomize_TL__RandomizeLED__EventFunc();
    void LEDFlash_TL__FinishedFunc();
    void LEDFlash_TL__UpdateFunc();
    void LEDFlash_TL__FlashLED__EventFunc();
    void GentleStop_TL__FinishedFunc();
    void GentleStop_TL__UpdateFunc();
    void OnLoaded_65F522044C76489A1A799F9F16EAF492(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_9D85731D4D942173C9F08F8F58F5FB43(_Script_CoreUObject::Object* Loaded);
    void SpawnClawMovingSound();
    void StopClawMovingSound();
    void PlayItemSelectedSounds();
    void PlayRandomizingSound();
    void PlaySuccessSound();
    void SpawnClawReturnSound();
    void PlayClawDropSound();
    void PlayGrabSound();
    void SpawnFailSound();
    void SpawnItemThunk(_Script_Engine::SceneComponent* Target);
    void BndEvt__BP_Puzzle_BigMeatyClaw_DButtonHandMagnet_K2Node_ComponentBoundEvent_1_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange);
    void BndEvt__BP_Puzzle_Claw_Fun_HandMagnet_K2Node_ComponentBoundEvent_2_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange);
    void ReActivateGrabberButton();
    void ReceiveBeginPlay();
    void BndEvt__BP_Puzzle_BigMeatyClaw_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void Prepare_Deposit_Box_For_Item();
    void DropInHand();
    void HandPickupAnim();
    void SwitchHandAnimation(_Script_Engine::TimelineComponent* New_Timeline);
    void Detach();
    void DropHeldItem();
    void LowerItems();
    void StopTube();
    void RaiseUpHand();
    void SetGrabberToPlayerHand();
    void Set_Items(void*& NewMeshes);
    void SetAdjustedPositions(float Alpha);
    void GrabItem();
    void StartTubeMovement();
    void ReturnClaw();
    void Randomize_ItemToGet();
    void Interrupt_Randomizer();
    void Victory_LED();
    void DropNewItems();
    void Stop_Item_Lowering();
    void ThrowItem();
    void StopThrow();
    void GentleStop();
    void SwitchTubeAnimation(_Script_Engine::TimelineComponent* New_Timeline);
    void SetSpeed();
    void MulticastHideRopes();
    void ExecuteUbergraph_BP_Puzzle_Claw(int32_t EntryPoint);
}; // Size: 0x708
#pragma pack(pop)
}
