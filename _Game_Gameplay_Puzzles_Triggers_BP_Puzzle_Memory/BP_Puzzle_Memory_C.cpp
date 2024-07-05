#include "..\FUObjectArray.hpp"
#include "..\_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet\BPC_HandMagnet_C.hpp"
#include "..\_Game_Gameplay_Puzzles_BP_ToyPuzzle\BP_ToyPuzzle_C.hpp"
#include "BP_Puzzle_Memory_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AudioComponent.hpp"
#include "..\_Script_Engine\Material.hpp"
#include "..\_Script_Engine\MaterialInstance.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "..\_Script_Engine\SoundBase.hpp"
#include "..\_Script_Engine\SphereComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_Tile12() {
    return *(_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C**)((uintptr_t)this + 0x498);
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::AllButtonHighlight(_Script_Engine::Material* Mat) {
    return;
}
void* _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x3e0);
}
_Script_Engine::SphereComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_HMC_Collider16() {
    return *(_Script_Engine::SphereComponent**)((uintptr_t)this + 0x3e8);
}
_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_Tile16() {
    return *(_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C**)((uintptr_t)this + 0x418);
}
_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_Tile17() {
    return *(_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C**)((uintptr_t)this + 0x3f8);
}
_Script_CoreUObject::Class* _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Gameplay/Puzzles/Triggers/BP_Puzzle_Memory.BP_Puzzle_Memory_C");
    return result;
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_HandPos16() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x3f0);
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_BMesh_017() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x400);
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::set_IsGeneratingPattern(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6c4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6c4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::SphereComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_HMC_Collider15() {
    return *(_Script_Engine::SphereComponent**)((uintptr_t)this + 0x408);
}
_Script_Engine::SoundBase*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_ButtonCorrectSound() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x6d0);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_HandPos15() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x410);
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_BMesh_016() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x420);
}
_Script_Engine::SphereComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_HMC_Collider14() {
    return *(_Script_Engine::SphereComponent**)((uintptr_t)this + 0x428);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_HandPos14() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x430);
}
_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_Tile15() {
    return *(_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C**)((uintptr_t)this + 0x438);
}
_Script_Engine::SphereComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_HMC_Collider12() {
    return *(_Script_Engine::SphereComponent**)((uintptr_t)this + 0x468);
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_BMesh_015() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x440);
}
_Script_Engine::SphereComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_HMC_Collider13() {
    return *(_Script_Engine::SphereComponent**)((uintptr_t)this + 0x448);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_HandPos13() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x450);
}
_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_Tile14() {
    return *(_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C**)((uintptr_t)this + 0x458);
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_BMesh_014() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x460);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_HandPos12() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x470);
}
bool _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_IsGeneratingPattern() {
    return (*(uint8_t*)((uintptr_t)this + 0x6c4 + 0)) & 1 != 0;
}
_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_Tile13() {
    return *(_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C**)((uintptr_t)this + 0x478);
}
_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_Tile10() {
    return *(_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C**)((uintptr_t)this + 0x4d8);
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_BMesh_013() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x480);
}
_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_Tile4() {
    return *(_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C**)((uintptr_t)this + 0x598);
}
_Script_Engine::TimelineComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_FailureTimeline() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x630);
}
_Script_Engine::SphereComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_HMC_Collider11() {
    return *(_Script_Engine::SphereComponent**)((uintptr_t)this + 0x488);
}
_Script_Engine::SphereComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_HMC_Collider1() {
    return *(_Script_Engine::SphereComponent**)((uintptr_t)this + 0x5c8);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_HandPos2() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x5b0);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_HandPos11() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x490);
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_BMesh_012() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x4a0);
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_BMesh_06() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x560);
}
int32_t& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_StreakMax() {
    return *(int32_t*)((uintptr_t)this + 0x690);
}
_Script_Engine::SphereComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_HMC_Collider10() {
    return *(_Script_Engine::SphereComponent**)((uintptr_t)this + 0x4a8);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_HandPos10() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x4b0);
}
_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_Tile11() {
    return *(_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C**)((uintptr_t)this + 0x4b8);
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_BMesh_011() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x4c0);
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::NewPatternTimeline__FlashOn__EventFunc() {
    return;
}
_Script_Engine::SphereComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_HMC_Collider3() {
    return *(_Script_Engine::SphereComponent**)((uintptr_t)this + 0x588);
}
_Script_Engine::SphereComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_HMC_Collider9() {
    return *(_Script_Engine::SphereComponent**)((uintptr_t)this + 0x4c8);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_HandPos1() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x5d0);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_HandPos9() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x4d0);
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_BMesh_010() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x4e0);
}
_Script_Engine::SphereComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_HMC_Collider8() {
    return *(_Script_Engine::SphereComponent**)((uintptr_t)this + 0x4e8);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_HandPos8() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x4f0);
}
_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_Tile9() {
    return *(_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C**)((uintptr_t)this + 0x4f8);
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_BMesh_09() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x500);
}
_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_Tile8() {
    return *(_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C**)((uintptr_t)this + 0x518);
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::FailureTimeline__UpdateFunc() {
    return;
}
_Script_Engine::SphereComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_HMC_Collider7() {
    return *(_Script_Engine::SphereComponent**)((uintptr_t)this + 0x508);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_HandPos7() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x510);
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::GenerateNewPatternAndShowIt() {
    return;
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_BMesh_08() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x520);
}
_Script_Engine::TimelineComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_SuccessTimeline() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x620);
}
_Script_Engine::SphereComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_HMC_Collider6() {
    return *(_Script_Engine::SphereComponent**)((uintptr_t)this + 0x528);
}
_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_Tile3() {
    return *(_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C**)((uintptr_t)this + 0x5b8);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_HandPos6() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x530);
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_BMesh_03() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x5c0);
}
void* _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_SuccessTimeline__Direction_FA74225C4BBDE2FB9889DC8C98EB26A0() {
    return (void*)((uintptr_t)this + 0x618);
}
_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_Tile7() {
    return *(_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C**)((uintptr_t)this + 0x538);
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_BMesh_07() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x540);
}
_Script_Engine::SphereComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_HMC_Collider5() {
    return *(_Script_Engine::SphereComponent**)((uintptr_t)this + 0x548);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_HandPos5() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x550);
}
_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_Tile2() {
    return *(_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C**)((uintptr_t)this + 0x5d8);
}
_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_Tile6() {
    return *(_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C**)((uintptr_t)this + 0x558);
}
_Script_Engine::SphereComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_HMC_Collider4() {
    return *(_Script_Engine::SphereComponent**)((uintptr_t)this + 0x568);
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::OnRep_IsGeneratingPattern() {
    return;
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_HandPos4() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x570);
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::Multicast_StopNewPatternTimeline() {
    return;
}
_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_Tile5() {
    return *(_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C**)((uintptr_t)this + 0x578);
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::AnyASC(void* ASC, int32_t Index) {
    return;
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_BMesh_05() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x580);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_HandPos3() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x590);
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_BMesh_04() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x5a0);
}
_Script_Engine::SphereComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_HMC_Collider2() {
    return *(_Script_Engine::SphereComponent**)((uintptr_t)this + 0x5a8);
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_BMesh_02() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x5e0);
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::BndEvt__BP_Puzzle_Memory_Tile7_K2Node_ComponentBoundEvent_6_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange) {
    return;
}
_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_Tile1() {
    return *(_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C**)((uintptr_t)this + 0x5e8);
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_BMesh_01() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x5f0);
}
_Script_Engine::SphereComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_HMC_Collider() {
    return *(_Script_Engine::SphereComponent**)((uintptr_t)this + 0x5f8);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_HandPos() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x600);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_TileRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x608);
}
_Script_Engine::AudioComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_RandomizingSound() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x610);
}
void* _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_FailureTimeline__Direction_8D4AECB54333D80F52C101BD99115548() {
    return (void*)((uintptr_t)this + 0x628);
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::ExecuteUbergraph_BP_Puzzle_Memory(int32_t EntryPoint) {
    return;
}
void* _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_NewPatternTimeline__Direction_8A419DCE4B61BB7E41E781AECCF69CFD() {
    return (void*)((uintptr_t)this + 0x638);
}
_Script_Engine::TimelineComponent*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_NewPatternTimeline() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x640);
}
int32_t& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_PatternLength() {
    return *(int32_t*)((uintptr_t)this + 0x648);
}
_Script_Engine::Material*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_DefaultMat() {
    return *(_Script_Engine::Material**)((uintptr_t)this + 0x650);
}
_Script_Engine::MaterialInstance*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_HighlightMat() {
    return *(_Script_Engine::MaterialInstance**)((uintptr_t)this + 0x658);
}
_Script_Engine::MaterialInstance*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_CorrectMat() {
    return *(_Script_Engine::MaterialInstance**)((uintptr_t)this + 0x660);
}
_Script_Engine::MaterialInstance*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_IncorrectMat() {
    return *(_Script_Engine::MaterialInstance**)((uintptr_t)this + 0x668);
}
void* _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_PlayerPattern() {
    return (void*)((uintptr_t)this + 0x670);
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::BndEvt__BP_Puzzle_Memory_Tile1_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange) {
    return;
}
void* _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_ButtonArray() {
    return (void*)((uintptr_t)this + 0x680);
}
float& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_WaitTime() {
    return *(float*)((uintptr_t)this + 0x694);
}
int32_t& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_Columns() {
    return *(int32_t*)((uintptr_t)this + 0x698);
}
int32_t& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_Rows() {
    return *(int32_t*)((uintptr_t)this + 0x69c);
}
void* _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_I_TargetPattern() {
    return (void*)((uintptr_t)this + 0x6a0);
}
void* _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_I_PlayerPattern() {
    return (void*)((uintptr_t)this + 0x6b0);
}
int32_t& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_NumButtons() {
    return *(int32_t*)((uintptr_t)this + 0x6c0);
}
int32_t& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_MemorySoundReplicator() {
    return *(int32_t*)((uintptr_t)this + 0x6c8);
}
_Script_Engine::SoundBase*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_PatternCorrectSound() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x6d8);
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::BndEvt__BP_Puzzle_Memory_Tile4_K2Node_ComponentBoundEvent_3_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange) {
    return;
}
_Script_Engine::SoundBase*& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_Button_IncorrectSound() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x6e0);
}
int32_t& _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_Mistakes() {
    return *(int32_t*)((uintptr_t)this + 0x6e8);
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::DecrementingToInProgress0() {
    return;
}
void* _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::get_ButtonMeshes() {
    return (void*)((uintptr_t)this + 0x6f0);
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::ResetPuzzle0() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::SuccessTimeline__On__EventFunc() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::OnRep_MemorySoundReplicator() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::SuccessTimeline__Off__EventFunc() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::OnRep_I_PlayerPattern() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::ToSolved0() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::GenerateRandomPattern(void*& GeneratedPattern) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::Multicast_ClearButtons() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::ButtonHighlight(void*& ButtonsToHighlight, _Script_Engine::MaterialInstance* Mat, bool ClearPreviousHighlights_) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::OnRep_State_Implementation0() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::ToIdle0() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::IncrementingToInProgress0() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::IdleToInProgress0() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::FailureTimeline__Off__EventFunc() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::DoIncrement0(bool& ShouldComplete_) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::BndEvt__BP_Puzzle_Memory_Tile14_K2Node_ComponentBoundEvent_13_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::Select(int32_t Index) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::UserConstructionScript() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::NewPatternTimeline__FinishedFunc() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::NewPatternTimeline__UpdateFunc() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::BndEvt__BP_Puzzle_Memory_Tile9_K2Node_ComponentBoundEvent_8_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::NewPatternTimeline__CyclePattern__EventFunc() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::NewPatternTimeline__FlashOff__EventFunc() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::FailureTimeline__FinishedFunc() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::FailureTimeline__On__EventFunc() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::SuccessTimeline__FinishedFunc() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::SuccessTimeline__UpdateFunc() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::BndEvt__BP_Puzzle_Memory_Tile2_K2Node_ComponentBoundEvent_1_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::BndEvt__BP_Puzzle_Memory_Tile3_K2Node_ComponentBoundEvent_2_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::BndEvt__BP_Puzzle_Memory_Tile5_K2Node_ComponentBoundEvent_4_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::BndEvt__BP_Puzzle_Memory_Tile6_K2Node_ComponentBoundEvent_5_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::BndEvt__BP_Puzzle_Memory_Tile8_K2Node_ComponentBoundEvent_7_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::BndEvt__BP_Puzzle_Memory_Tile10_K2Node_ComponentBoundEvent_9_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::BndEvt__BP_Puzzle_Memory_Tile11_K2Node_ComponentBoundEvent_10_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::BndEvt__BP_Puzzle_Memory_Tile12_K2Node_ComponentBoundEvent_11_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::BndEvt__BP_Puzzle_Memory_Tile13_K2Node_ComponentBoundEvent_12_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::BndEvt__BP_Puzzle_Memory_Tile15_K2Node_ComponentBoundEvent_14_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::BndEvt__BP_Puzzle_Memory_Tile16_K2Node_ComponentBoundEvent_15_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::BndEvt__BP_Puzzle_Memory_Tile17_K2Node_ComponentBoundEvent_16_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::PlayRandomizingSound(bool Play) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::PlayButtonSound(bool Correct_) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::ShowPlayerPattern() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::ReceiveBeginPlay() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::Multicast_StartNewPatternTimeline() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::Solved_ButtonGlow() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Memory::BP_Puzzle_Memory_C::PlaySuccessAnimation() {
    return;
}
