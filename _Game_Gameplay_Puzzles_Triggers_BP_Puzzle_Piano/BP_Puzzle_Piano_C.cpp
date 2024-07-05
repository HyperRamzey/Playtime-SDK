#include "..\FUObjectArray.hpp"
#include "..\_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet\BPC_HandMagnet_C.hpp"
#include "..\_Game_Gameplay_Puzzles_BP_ToyPuzzle\BP_ToyPuzzle_C.hpp"
#include "BP_Puzzle_Piano_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\MaterialInstance.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
#include "..\_Script_Playtime_Multiplayer\HandMagnetComponent.hpp"
_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::get_BPC_HandMagnet6() {
    return *(_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C**)((uintptr_t)this + 0x438);
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::get_Key_5() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x408);
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::FailedPuzzle0() {
    return;
}
void* _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x3e0);
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::TL_Piano__Display__EventFunc() {
    return;
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::get_Key_1() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x400);
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::get_BlackKey_1() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x3e8);
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::get_BlackKey_3() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x3f0);
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::get_Key_3() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x418);
}
_Script_Playtime_Multiplayer::HandMagnetComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::get_HandMagnet2() {
    return *(_Script_Playtime_Multiplayer::HandMagnetComponent**)((uintptr_t)this + 0x4a0);
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::get_Key_4() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x410);
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::get_BlackKey_2() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x3f8);
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::get_Key_2() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x420);
}
_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::get_BPC_HandMagnet8() {
    return *(_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C**)((uintptr_t)this + 0x428);
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::set_ShowingPattern_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x530 + 0);
    *(uint8_t*)((uintptr_t)this + 0x530 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::get_BPC_HandMagnet7() {
    return *(_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C**)((uintptr_t)this + 0x430);
}
_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::get_BPC_HandMagnet5() {
    return *(_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C**)((uintptr_t)this + 0x440);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::get_HandPos8() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x448);
}
_Script_Engine::BoxComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::get_Trigger9() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x450);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::get_HandPos7() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x458);
}
_Script_Engine::BoxComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::get_Trigger8() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x460);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::get_HandPos6() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x468);
}
_Script_Engine::BoxComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::get_Trigger7() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x470);
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::TL_Piano__FinishedFunc() {
    return;
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::get_HandPos5() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x478);
}
_Script_Engine::BoxComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::get_Trigger6() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x480);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::get_HandPos4() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x488);
}
int32_t& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::get_PianoSoundReplicator() {
    return *(int32_t*)((uintptr_t)this + 0x538);
}
_Script_Engine::BoxComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::get_Trigger5() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x490);
}
_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::get_BPC_HandMagnet4() {
    return *(_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C**)((uintptr_t)this + 0x498);
}
_Script_Playtime_Multiplayer::HandMagnetComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::get_HandMagnet4() {
    return *(_Script_Playtime_Multiplayer::HandMagnetComponent**)((uintptr_t)this + 0x4a8);
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::set_LoseProgress_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x53c + 0);
    *(uint8_t*)((uintptr_t)this + 0x53c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Playtime_Multiplayer::HandMagnetComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::get_HandMagnet3() {
    return *(_Script_Playtime_Multiplayer::HandMagnetComponent**)((uintptr_t)this + 0x4b0);
}
_Script_Playtime_Multiplayer::HandMagnetComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::get_HandMagnet1() {
    return *(_Script_Playtime_Multiplayer::HandMagnetComponent**)((uintptr_t)this + 0x4b8);
}
void* _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::get_TL_Piano__Direction_4EFB320E4054422064590ABA803195E3() {
    return (void*)((uintptr_t)this + 0x4c0);
}
_Script_Engine::TimelineComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::get_TL_Piano() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x4c8);
}
int32_t& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::get_CurrentKey() {
    return *(int32_t*)((uintptr_t)this + 0x4d0);
}
int32_t& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::get_PatternLength() {
    return *(int32_t*)((uintptr_t)this + 0x4d4);
}
void* _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::get_KeyMesh() {
    return (void*)((uintptr_t)this + 0x4d8);
}
_Script_Engine::MaterialInstance*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::get_RejectedMat() {
    return *(_Script_Engine::MaterialInstance**)((uintptr_t)this + 0x4e8);
}
void* _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::get_KeySounds() {
    return (void*)((uintptr_t)this + 0x4f0);
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::IdleToInProgress0() {
    return;
}
void* _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::get_CorrectPattern() {
    return (void*)((uintptr_t)this + 0x500);
}
void* _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::get_DefaultMats() {
    return (void*)((uintptr_t)this + 0x510);
}
void* _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::get_HighlightMats() {
    return (void*)((uintptr_t)this + 0x520);
}
bool _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::get_ShowingPattern_() {
    return (*(uint8_t*)((uintptr_t)this + 0x530 + 0)) & 1 != 0;
}
int32_t& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::get_SubProgress() {
    return *(int32_t*)((uintptr_t)this + 0x534);
}
bool _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::get_LoseProgress_() {
    return (*(uint8_t*)((uintptr_t)this + 0x53c + 0)) & 1 != 0;
}
int32_t& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::get_PreviousProgress() {
    return *(int32_t*)((uintptr_t)this + 0x540);
}
_Script_CoreUObject::Class* _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Gameplay/Puzzles/Triggers/BP_Puzzle_Piano.BP_Puzzle_Piano_C");
    return result;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::ResetPuzzle0() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::OnRep_PianoSoundReplicator() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::ToSolved0() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::DecrementingToInProgress0() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::OnRep_State_Implementation0() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::DoIncrement0(bool& ShouldComplete_) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::ToggleKeyMat_Sound(int32_t KeyIndex, bool IsCorrect_) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::DoesKeyCount_(int32_t Key, bool& Value) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::ClearKeys(bool ClearCurrentKey_) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::TL_Piano__UpdateFunc() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::TL_Piano__Clear__EventFunc() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::BndEvt__BP_Puzzle_Piano_BPC_HandMagnet4_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::BndEvt__BP_Puzzle_Piano_BPC_HandMagnet5_K2Node_ComponentBoundEvent_1_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::BndEvt__BP_Puzzle_Piano_BPC_HandMagnet6_K2Node_ComponentBoundEvent_2_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::BndEvt__BP_Puzzle_Piano_BPC_HandMagnet7_K2Node_ComponentBoundEvent_3_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::BndEvt__BP_Puzzle_Piano_BPC_HandMagnet8_K2Node_ComponentBoundEvent_4_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::ReceiveBeginPlay() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::R_Sequence(bool Play_) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::R_Select(int32_t KeyIndex) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::PlayKey(int32_t KeyIndex, bool Cancel_, bool IsCorrect_) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::MultiCast_DisplaySequence() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::MultiCast_PlayKey(int32_t KeyIndex, bool IsCorrect_) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::Solved_ButtonGlow() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano::BP_Puzzle_Piano_C::ExecuteUbergraph_BP_Puzzle_Piano(int32_t EntryPoint) {
    return;
}
