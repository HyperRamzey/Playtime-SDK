#include "..\FUObjectArray.hpp"
#include "..\_Game_Gameplay_Game_ToyData_BP_ToyPart\BP_ToyPart_C.hpp"
#include "BP_PuzzlePillar_C.hpp"
#include "..\_Game_Gameplay_Puzzles_BP_ToyPuzzle\BP_ToyPuzzle_C.hpp"
#include "..\_Game_Gameplay_Puzzles_FPillarSaveStruct\FPillarSaveStruct.hpp"
#include "..\_Game_Interface_BPC_Tooltip\BPC_Tooltip_C.hpp"
#include "..\_Game_Interface_NavSystem_Blueprints_Actors_BP_NavPillarIndicator\BP_NavPillarIndicator_C.hpp"
#include "..\_Script_AIModule\AIPerceptionStimuliSourceComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\ArrowComponent.hpp"
#include "..\_Script_Engine\Character.hpp"
#include "..\_Script_Engine\RectLightComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SplineComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "..\_Script_Engine\TextRenderComponent.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
#include "..\_Script_Playtime_Multiplayer\PuzzleList.hpp"
void _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::DestroyPuzzle() {
    return;
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_TopLights() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x240);
}
void _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::set_TestMode(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x410 + 0);
    *(uint8_t*)((uintptr_t)this + 0x410 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_PuzzleSpawn_2() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x348);
}
void* _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x220);
}
int32_t& _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_Progress_Iterator() {
    return *(int32_t*)((uintptr_t)this + 0x478);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_Puzzle3Anchor() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x228);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_Puzzle2Anchor() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x230);
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_MidLights() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x248);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_Puzzle1Anchor() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x238);
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_BottomLights() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x250);
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_CompletionIndicator() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x258);
}
int32_t& _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_Puzzle2MaxStreak() {
    return *(int32_t*)((uintptr_t)this + 0x3f8);
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_PuzzlePillar() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x2c0);
}
_Script_Engine::SplineComponent*& _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_Spline_ToyPart() {
    return *(_Script_Engine::SplineComponent**)((uintptr_t)this + 0x260);
}
_Game_Interface_BPC_Tooltip::BPC_Tooltip_C*& _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_BPC_Tooltip1() {
    return *(_Game_Interface_BPC_Tooltip::BPC_Tooltip_C**)((uintptr_t)this + 0x268);
}
_Game_Interface_BPC_Tooltip::BPC_Tooltip_C*& _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_BPC_Tooltip3() {
    return *(_Game_Interface_BPC_Tooltip::BPC_Tooltip_C**)((uintptr_t)this + 0x270);
}
int32_t& _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_MostRecentlySolvedPuzzle() {
    return *(int32_t*)((uintptr_t)this + 0x404);
}
_Game_Interface_BPC_Tooltip::BPC_Tooltip_C*& _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_BPC_Tooltip2() {
    return *(_Game_Interface_BPC_Tooltip::BPC_Tooltip_C**)((uintptr_t)this + 0x278);
}
void* _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_TL_PuzzleDoor__Direction_D5BA772E4845E8DC9A41E8B333B1CE04() {
    return (void*)((uintptr_t)this + 0x37c);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_Tooltips_HandPanels() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x280);
}
void _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::AllPuzzlesSolved_(bool& Value) {
    return;
}
bool _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_Solved_() {
    return (*(uint8_t*)((uintptr_t)this + 0x411 + 0)) & 1 != 0;
}
_Game_Interface_BPC_Tooltip::BPC_Tooltip_C*& _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_BPC_Tooltip() {
    return *(_Game_Interface_BPC_Tooltip::BPC_Tooltip_C**)((uintptr_t)this + 0x288);
}
int32_t& _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_FinalPuzzleSolved() {
    return *(int32_t*)((uintptr_t)this + 0x400);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_Tooltips() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x290);
}
void _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::GetPuzzleTypes() {
    return;
}
_Script_AIModule::AIPerceptionStimuliSourceComponent*& _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_AIPerceptionStimuliSource() {
    return *(_Script_AIModule::AIPerceptionStimuliSourceComponent**)((uintptr_t)this + 0x298);
}
_Script_Engine::RectLightComponent*& _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_RectLight5() {
    return *(_Script_Engine::RectLightComponent**)((uintptr_t)this + 0x2a0);
}
_Script_Engine::RectLightComponent*& _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_RectLight4() {
    return *(_Script_Engine::RectLightComponent**)((uintptr_t)this + 0x2a8);
}
int32_t& _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_Puzzle1MaxStreak() {
    return *(int32_t*)((uintptr_t)this + 0x3f4);
}
_Script_Engine::RectLightComponent*& _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_RectLight3() {
    return *(_Script_Engine::RectLightComponent**)((uintptr_t)this + 0x2b0);
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_SM_PuzzlePillarLights() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x2b8);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_MonsterPivot_3() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x2c8);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_MonsterPivot_2() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x2d0);
}
_Script_Engine::ArrowComponent*& _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_Arrow_MonsterPivot_3() {
    return *(_Script_Engine::ArrowComponent**)((uintptr_t)this + 0x2d8);
}
_Game_Gameplay_Game_ToyData_BP_ToyPart::BP_ToyPart_C*& _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_Spawned_Toy_Part() {
    return *(_Game_Gameplay_Game_ToyData_BP_ToyPart::BP_ToyPart_C**)((uintptr_t)this + 0x408);
}
_Script_Engine::TextRenderComponent*& _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_Text_MonsterPivot_3() {
    return *(_Script_Engine::TextRenderComponent**)((uintptr_t)this + 0x2e0);
}
_Script_Engine::Character*& _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_Monster() {
    return *(_Script_Engine::Character**)((uintptr_t)this + 0x3e0);
}
_Script_Engine::ArrowComponent*& _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_Arrow_MonsterPivot_2() {
    return *(_Script_Engine::ArrowComponent**)((uintptr_t)this + 0x2e8);
}
_Script_Engine::TextRenderComponent*& _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_Text_MonsterPivot_2() {
    return *(_Script_Engine::TextRenderComponent**)((uintptr_t)this + 0x2f0);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_MonsterPivot_1() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x2f8);
}
_Script_Engine::ArrowComponent*& _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_Arrow_MonsterPivot_1() {
    return *(_Script_Engine::ArrowComponent**)((uintptr_t)this + 0x300);
}
_Script_Engine::TextRenderComponent*& _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_Text_Puzzle_1() {
    return *(_Script_Engine::TextRenderComponent**)((uintptr_t)this + 0x338);
}
_Script_Engine::TextRenderComponent*& _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_Text_MonsterPivot_1() {
    return *(_Script_Engine::TextRenderComponent**)((uintptr_t)this + 0x308);
}
_Script_Engine::TimelineComponent*& _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_TL_ToyPart() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x370);
}
void _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::OnOpenDoor() {
    return;
}
_Script_Engine::ArrowComponent*& _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_Arrow_ToySpawn() {
    return *(_Script_Engine::ArrowComponent**)((uintptr_t)this + 0x310);
}
_Script_Engine::TextRenderComponent*& _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_Text_ToySpawn() {
    return *(_Script_Engine::TextRenderComponent**)((uintptr_t)this + 0x318);
}
void _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::MulticastUpdateLights() {
    return;
}
bool _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_IsBoobyTrapped() {
    return (*(uint8_t*)((uintptr_t)this + 0x3f0 + 0)) & 1 != 0;
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_ToySpawnPoint() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x320);
}
void* _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_PuzzleToRemove() {
    return (void*)((uintptr_t)this + 0x450);
}
_Script_Engine::TextRenderComponent*& _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_Text_Puzzle_3() {
    return *(_Script_Engine::TextRenderComponent**)((uintptr_t)this + 0x328);
}
void* _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_ToyPartSpawned() {
    return (void*)((uintptr_t)this + 0x4c0);
}
_Script_Engine::TextRenderComponent*& _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_Text_Puzzle_2() {
    return *(_Script_Engine::TextRenderComponent**)((uintptr_t)this + 0x330);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_PuzzleSpawn_3() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x340);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_PuzzleSpawn_1() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x350);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_PuzzleSpawns() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x358);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x360);
}
void _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::Multicast_Set_Final_Puzzle(int32_t Puzzle_Index) {
    return;
}
_Script_Engine::TimelineComponent*& _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_TL_PuzzleDoor() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x380);
}
float& _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_TL_ToyPart_Alpha_0C66EC3B4D15A77348AF689ED9FBC2BC() {
    return *(float*)((uintptr_t)this + 0x368);
}
void* _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_TL_ToyPart__Direction_0C66EC3B4D15A77348AF689ED9FBC2BC() {
    return (void*)((uintptr_t)this + 0x36c);
}
float& _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_TL_PuzzleDoor_Alpha_D5BA772E4845E8DC9A41E8B333B1CE04() {
    return *(float*)((uintptr_t)this + 0x378);
}
void* _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_Light_Color() {
    return (void*)((uintptr_t)this + 0x388);
}
void* _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_Puzzles() {
    return (void*)((uintptr_t)this + 0x398);
}
void* _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_MonsterPivots() {
    return (void*)((uintptr_t)this + 0x3a8);
}
int32_t& _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_Puzzle3MaxStreak() {
    return *(int32_t*)((uintptr_t)this + 0x3fc);
}
bool _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_Highlighted() {
    return (*(uint8_t*)((uintptr_t)this + 0x3b8 + 0)) & 1 != 0;
}
void _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::set_Solved_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x411 + 0);
    *(uint8_t*)((uintptr_t)this + 0x411 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::set_Highlighted(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3b8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3b8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_SolvedPuzzles() {
    return (void*)((uintptr_t)this + 0x418);
}
void* _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_SabotageTimer() {
    return (void*)((uintptr_t)this + 0x3c0);
}
int32_t& _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_Hits() {
    return *(int32_t*)((uintptr_t)this + 0x3c8);
}
void* _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_WireBoards() {
    return (void*)((uintptr_t)this + 0x3d0);
}
void _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::OnRep_DoorMatSetter() {
    return;
}
_Game_Interface_NavSystem_Blueprints_Actors_BP_NavPillarIndicator::BP_NavPillarIndicator_C*& _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_NavIndicator() {
    return *(_Game_Interface_NavSystem_Blueprints_Actors_BP_NavPillarIndicator::BP_NavPillarIndicator_C**)((uintptr_t)this + 0x3e8);
}
void _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::set_IsBoobyTrapped(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3f0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3f0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_TestMode() {
    return (*(uint8_t*)((uintptr_t)this + 0x410 + 0)) & 1 != 0;
}
void* _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_PuzzleProgress() {
    return (void*)((uintptr_t)this + 0x428);
}
_Script_Playtime_Multiplayer::PuzzleList*& _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_PuzzleList() {
    return *(_Script_Playtime_Multiplayer::PuzzleList**)((uintptr_t)this + 0x438);
}
void* _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_LocalPuzzleList() {
    return (void*)((uintptr_t)this + 0x440);
}
bool _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_IsTutorial() {
    return (*(uint8_t*)((uintptr_t)this + 0x458 + 0)) & 1 != 0;
}
void _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::set_IsTutorial(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x458 + 0);
    *(uint8_t*)((uintptr_t)this + 0x458 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_PuzzleTypes() {
    return (void*)((uintptr_t)this + 0x460);
}
void* _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_Stream() {
    return (void*)((uintptr_t)this + 0x470);
}
void* _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_CustomRenderMeshes() {
    return (void*)((uintptr_t)this + 0x480);
}
void* _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_PuzzleAnchors() {
    return (void*)((uintptr_t)this + 0x490);
}
_Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C*& _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_Puzzle3() {
    return *(_Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C**)((uintptr_t)this + 0x4a0);
}
void _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::ToyPartSpawned__DelegateSignature() {
    return;
}
_Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C*& _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_Puzzle2() {
    return *(_Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C**)((uintptr_t)this + 0x4a8);
}
_Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C*& _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_Puzzle1() {
    return *(_Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C**)((uintptr_t)this + 0x4b0);
}
bool _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::get_PuzzlesRandomized() {
    return (*(uint8_t*)((uintptr_t)this + 0x4b8 + 0)) & 1 != 0;
}
void _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::set_PuzzlesRandomized(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4b8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4b8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Gameplay/Puzzles/BP_PuzzlePillar.BP_PuzzlePillar_C");
    return result;
}
void _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::OnRep_Puzzles() {
    return;
}
void _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::RandomizePuzzles() {
    return;
}
void _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::UpdatePuzzleData() {
    return;
}
void _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::OnRep_FinalPuzzleSolved() {
    return;
}
void _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::LoadPillarFromSaveStruct(_Game_Gameplay_Puzzles_FPillarSaveStruct::FPillarSaveStruct Save) {
    return;
}
void _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::GetPillarSaveStruct(_Game_Gameplay_Puzzles_FPillarSaveStruct::FPillarSaveStruct& State) {
    return;
}
void _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::Sabotage_Boobytrap(float unused) {
    return;
}
void _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::AllPuzzlesActive_(bool& Value) {
    return;
}
void _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::AnyPuzzlesActive_(bool& Value) {
    return;
}
void _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::Num_Puzzles_Active(int32_t& Num) {
    return;
}
void _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::NumPuzzlesSolved(int32_t& Num) {
    return;
}
void _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::UserConstructionScript0() {
    return;
}
void _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::TL_PuzzleDoor__FinishedFunc() {
    return;
}
void _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::TL_PuzzleDoor__UpdateFunc() {
    return;
}
void _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::TL_ToyPart__FinishedFunc() {
    return;
}
void _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::TL_ToyPart__UpdateFunc() {
    return;
}
void _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::CheckSolved(int32_t PuzzleIndex) {
    return;
}
void _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::SetHighlight(bool Highlight) {
    return;
}
void _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::UpdatePlayersIndicator() {
    return;
}
void _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::CheckForSabotaged() {
    return;
}
void _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::BindPuzzleEvents() {
    return;
}
void _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C::ExecuteUbergraph_BP_PuzzlePillar(int32_t EntryPoint) {
    return;
}
