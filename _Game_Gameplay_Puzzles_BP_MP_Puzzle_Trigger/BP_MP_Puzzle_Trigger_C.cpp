#include "..\FUObjectArray.hpp"
#include "..\_Game_Gameplay_Puzzles_BP_MP_Puzzle_EndGoal\BP_MP_Puzzle_EndGoal_C.hpp"
#include "BP_MP_Puzzle_Trigger_C.hpp"
#include "..\_Game_Interface_Misc_UI_PuzzleNametag\UI_PuzzleNametag_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_UMG\WidgetComponent.hpp"
void* _Game_Gameplay_Puzzles_BP_MP_Puzzle_Trigger::BP_MP_Puzzle_Trigger_C::get_Name() {
    return (void*)((uintptr_t)this + 0x250);
}
void* _Game_Gameplay_Puzzles_BP_MP_Puzzle_Trigger::BP_MP_Puzzle_Trigger_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x220);
}
_Script_UMG::WidgetComponent*& _Game_Gameplay_Puzzles_BP_MP_Puzzle_Trigger::BP_MP_Puzzle_Trigger_C::get_Widget() {
    return *(_Script_UMG::WidgetComponent**)((uintptr_t)this + 0x228);
}
bool _Game_Gameplay_Puzzles_BP_MP_Puzzle_Trigger::BP_MP_Puzzle_Trigger_C::get_Solved() {
    return (*(uint8_t*)((uintptr_t)this + 0x238 + 0)) & 1 != 0;
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Puzzles_BP_MP_Puzzle_Trigger::BP_MP_Puzzle_Trigger_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x230);
}
void _Game_Gameplay_Puzzles_BP_MP_Puzzle_Trigger::BP_MP_Puzzle_Trigger_C::set_Solved(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x238 + 0);
    *(uint8_t*)((uintptr_t)this + 0x238 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Game_Gameplay_Puzzles_BP_MP_Puzzle_Trigger::BP_MP_Puzzle_Trigger_C::get_Phase() {
    return *(int32_t*)((uintptr_t)this + 0x248);
}
_Game_Gameplay_Puzzles_BP_MP_Puzzle_EndGoal::BP_MP_Puzzle_EndGoal_C*& _Game_Gameplay_Puzzles_BP_MP_Puzzle_Trigger::BP_MP_Puzzle_Trigger_C::get_EndGoal() {
    return *(_Game_Gameplay_Puzzles_BP_MP_Puzzle_EndGoal::BP_MP_Puzzle_EndGoal_C**)((uintptr_t)this + 0x240);
}
void _Game_Gameplay_Puzzles_BP_MP_Puzzle_Trigger::BP_MP_Puzzle_Trigger_C::ReceiveBeginPlay0() {
    return;
}
_Script_CoreUObject::Class* _Game_Gameplay_Puzzles_BP_MP_Puzzle_Trigger::BP_MP_Puzzle_Trigger_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Gameplay/Puzzles/BP_MP_Puzzle_Trigger.BP_MP_Puzzle_Trigger_C");
    return result;
}
void _Game_Gameplay_Puzzles_BP_MP_Puzzle_Trigger::BP_MP_Puzzle_Trigger_C::SetWidgetSolve(bool Condition) {
    return;
}
_Game_Interface_Misc_UI_PuzzleNametag::UI_PuzzleNametag_C* _Game_Gameplay_Puzzles_BP_MP_Puzzle_Trigger::BP_MP_Puzzle_Trigger_C::Get_Puzzle_Name_Tag() {
    return;
}
void _Game_Gameplay_Puzzles_BP_MP_Puzzle_Trigger::BP_MP_Puzzle_Trigger_C::SetWidgetDistance(float InFloat) {
    return;
}
void _Game_Gameplay_Puzzles_BP_MP_Puzzle_Trigger::BP_MP_Puzzle_Trigger_C::Check_All_Goals() {
    return;
}
void _Game_Gameplay_Puzzles_BP_MP_Puzzle_Trigger::BP_MP_Puzzle_Trigger_C::OnRep_Solved() {
    return;
}
void _Game_Gameplay_Puzzles_BP_MP_Puzzle_Trigger::BP_MP_Puzzle_Trigger_C::ReceiveTick0(float DeltaSeconds) {
    return;
}
void _Game_Gameplay_Puzzles_BP_MP_Puzzle_Trigger::BP_MP_Puzzle_Trigger_C::ExecuteUbergraph_BP_MP_Puzzle_Trigger(int32_t EntryPoint) {
    return;
}
