#include "..\FUObjectArray.hpp"
#include "..\_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet\BPC_HandMagnet_C.hpp"
#include "..\_Game_Gameplay_Puzzles_BP_ToyPuzzle\BP_ToyPuzzle_C.hpp"
#include "BP_CollagePuzzle_C.hpp"
#include "..\_Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_TileCollage\BP_TileCollage_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "..\_Script_Playtime_Multiplayer\CollagePuzzleDataAsset.hpp"
#include "..\_Script_Playtime_Multiplayer\CollagePuzzleTile.hpp"
#include "..\_Script_Playtime_Multiplayer\HandMagnetComponent.hpp"
void* _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x3e0);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::get_HandPose6() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x460);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::get_HandPose9() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x3e8);
}
void _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::IdleToInProgress0() {
    return;
}
_Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_TileCollage::BP_TileCollage_C*& _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::get_Tile9() {
    return *(_Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_TileCollage::BP_TileCollage_C**)((uintptr_t)this + 0x400);
}
_Script_Engine::BoxComponent*& _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::get_HandMagnetCollision9() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x3f0);
}
void _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::ToSolved0() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::Shutdown(bool Shut_Down_) {
    return;
}
_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::get_HandMagnet9() {
    return *(_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C**)((uintptr_t)this + 0x3f8);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::get_TileRoot9() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x408);
}
void _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::FailedPuzzle0() {
    return;
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::get_HandPose8() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x410);
}
_Script_Engine::BoxComponent*& _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::get_HandMagnetCollision8() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x418);
}
void _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::DoIncrement0(bool& ShouldComplete_) {
    return;
}
_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::get_HandMagnet8() {
    return *(_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C**)((uintptr_t)this + 0x420);
}
int32_t& _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::get_Mistakes() {
    return *(int32_t*)((uintptr_t)this + 0x550);
}
_Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_TileCollage::BP_TileCollage_C*& _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::get_Tile8() {
    return *(_Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_TileCollage::BP_TileCollage_C**)((uintptr_t)this + 0x428);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::get_TileRoot8() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x430);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::get_HandPose7() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x438);
}
void _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::ToIdle0() {
    return;
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::get_TileRoot4() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x4d0);
}
_Script_Engine::BoxComponent*& _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::get_HandMagnetCollision7() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x440);
}
_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::get_HandMagnet7() {
    return *(_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C**)((uintptr_t)this + 0x448);
}
_Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_TileCollage::BP_TileCollage_C*& _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::get_Tile7() {
    return *(_Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_TileCollage::BP_TileCollage_C**)((uintptr_t)this + 0x450);
}
void _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::BndEvt__BP_CollagePuzzle_Tile2_K2Node_ComponentBoundEvent_1_OnAnimationFinished__DelegateSignature() {
    return;
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::get_TileRoot7() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x458);
}
_Script_Engine::BoxComponent*& _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::get_HandMagnetCollision6() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x468);
}
void _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::OnRep_State_Implementation0() {
    return;
}
_Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_TileCollage::BP_TileCollage_C*& _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::get_Tile5() {
    return *(_Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_TileCollage::BP_TileCollage_C**)((uintptr_t)this + 0x4a0);
}
_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::get_HandMagnet6() {
    return *(_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C**)((uintptr_t)this + 0x470);
}
_Script_CoreUObject::Class* _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Gameplay/Puzzles/Triggers/SlidingPuzzle/BP_CollagePuzzle.BP_CollagePuzzle_C");
    return result;
}
_Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_TileCollage::BP_TileCollage_C*& _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::get_Tile6() {
    return *(_Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_TileCollage::BP_TileCollage_C**)((uintptr_t)this + 0x478);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::get_TileRoot6() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x480);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::get_HandPose5() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x488);
}
_Script_Engine::BoxComponent*& _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::get_HandMagnetCollision5() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x490);
}
_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::get_HandMagnet5() {
    return *(_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C**)((uintptr_t)this + 0x498);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::get_TileRoot5() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x4a8);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::get_HandPose4() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x4b0);
}
_Script_Engine::BoxComponent*& _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::get_HandMagnetCollision4() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x4b8);
}
void _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::IsCompleted(bool& IsCompleted) {
    return;
}
_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::get_HandMagnet4() {
    return *(_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C**)((uintptr_t)this + 0x4c0);
}
_Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_TileCollage::BP_TileCollage_C*& _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::get_Tile4() {
    return *(_Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_TileCollage::BP_TileCollage_C**)((uintptr_t)this + 0x4c8);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::get_HandPose3() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x4d8);
}
_Script_Engine::BoxComponent*& _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::get_HandMagnetCollision3() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x4e0);
}
_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::get_HandMagnet3() {
    return *(_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C**)((uintptr_t)this + 0x4e8);
}
_Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_TileCollage::BP_TileCollage_C*& _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::get_Tile3() {
    return *(_Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_TileCollage::BP_TileCollage_C**)((uintptr_t)this + 0x4f0);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::get_TileRoot3() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x4f8);
}
void _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::BndEvt__BP_CollagePuzzle_Tile1_K2Node_ComponentBoundEvent_0_OnAnimationFinished__DelegateSignature() {
    return;
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::get_HandPose2() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x500);
}
_Script_Engine::BoxComponent*& _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::get_HandMagnetCollision2() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x508);
}
_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::get_HandMagnet2() {
    return *(_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C**)((uintptr_t)this + 0x510);
}
_Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_TileCollage::BP_TileCollage_C*& _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::get_Tile2() {
    return *(_Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_TileCollage::BP_TileCollage_C**)((uintptr_t)this + 0x518);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::get_TileRoot2() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x520);
}
bool _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::StupidDoesCount(_Script_Playtime_Multiplayer::HandMagnetComponent* Target) {
    return;
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::get_HandPose1() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x528);
}
_Script_Engine::BoxComponent*& _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::get_HandMagnetCollision1() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x530);
}
_Script_Playtime_Multiplayer::CollagePuzzleDataAsset*& _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::get_CollagePuzzleDataAsset() {
    return *(_Script_Playtime_Multiplayer::CollagePuzzleDataAsset**)((uintptr_t)this + 0x558);
}
_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::get_HandMagnet1() {
    return *(_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C**)((uintptr_t)this + 0x538);
}
_Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_TileCollage::BP_TileCollage_C*& _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::get_Tile1() {
    return *(_Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_TileCollage::BP_TileCollage_C**)((uintptr_t)this + 0x540);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::get_TileRoot1() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x548);
}
void* _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::get_Tiles() {
    return (void*)((uintptr_t)this + 0x560);
}
bool _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::get_CanBeCompleted_() {
    return (*(uint8_t*)((uintptr_t)this + 0x570 + 0)) & 1 != 0;
}
void _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::set_CanBeCompleted_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x570 + 0);
    *(uint8_t*)((uintptr_t)this + 0x570 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::ToShutDown0() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::IsFailed(bool& IsFailed) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::BndEvt__BP_CollagePuzzle_Tile3_K2Node_ComponentBoundEvent_2_OnAnimationFinished__DelegateSignature() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::BndEvt__BP_CollagePuzzle_Tile4_K2Node_ComponentBoundEvent_3_OnAnimationFinished__DelegateSignature() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::BndEvt__BP_CollagePuzzle_Tile5_K2Node_ComponentBoundEvent_4_OnAnimationFinished__DelegateSignature() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::BndEvt__BP_CollagePuzzle_Tile6_K2Node_ComponentBoundEvent_5_OnAnimationFinished__DelegateSignature() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::BndEvt__BP_CollagePuzzle_Tile7_K2Node_ComponentBoundEvent_6_OnAnimationFinished__DelegateSignature() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::BndEvt__BP_CollagePuzzle_Tile8_K2Node_ComponentBoundEvent_7_OnAnimationFinished__DelegateSignature() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::BndEvt__BP_CollagePuzzle_Tile9_K2Node_ComponentBoundEvent_8_OnAnimationFinished__DelegateSignature() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::BndEvt__BP_CollagePuzzle_HandMagnet1_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::BndEvt__BP_CollagePuzzle_HandMagnet2_K2Node_ComponentBoundEvent_10_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::BndEvt__BP_CollagePuzzle_HandMagnet3_K2Node_ComponentBoundEvent_11_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::BndEvt__BP_CollagePuzzle_HandMagnet4_K2Node_ComponentBoundEvent_12_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::BndEvt__BP_CollagePuzzle_HandMagnet5_K2Node_ComponentBoundEvent_13_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::BndEvt__BP_CollagePuzzle_HandMagnet6_K2Node_ComponentBoundEvent_14_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::BndEvt__BP_CollagePuzzle_HandMagnet7_K2Node_ComponentBoundEvent_15_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::BndEvt__BP_CollagePuzzle_HandMagnet8_K2Node_ComponentBoundEvent_16_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::BndEvt__BP_CollagePuzzle_HandMagnet9_K2Node_ComponentBoundEvent_17_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::Rotate(void* Selection, _Script_Playtime_Multiplayer::CollagePuzzleTile* Tile) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::ReceiveBeginPlay() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::ResetAllTiles() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::Authority_AnimFinished() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::ResetMistakes() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::Authority_SetTextures(int32_t Picture) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle::BP_CollagePuzzle_C::ExecuteUbergraph_BP_CollagePuzzle(int32_t EntryPoint) {
    return;
}
