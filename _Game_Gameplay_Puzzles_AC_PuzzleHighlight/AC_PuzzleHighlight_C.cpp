#include "..\FUObjectArray.hpp"
#include "AC_PuzzleHighlight_C.hpp"
#include "..\_Game_Gameplay_Puzzles_BP_PuzzlePillar\BP_PuzzlePillar_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
void* _Game_Gameplay_Puzzles_AC_PuzzleHighlight::AC_PuzzleHighlight_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0xb0);
}
void* _Game_Gameplay_Puzzles_AC_PuzzleHighlight::AC_PuzzleHighlight_C::get_OnPuzzleHighlightsOff() {
    return (void*)((uintptr_t)this + 0xd0);
}
void* _Game_Gameplay_Puzzles_AC_PuzzleHighlight::AC_PuzzleHighlight_C::get_PuzzlePillars() {
    return (void*)((uintptr_t)this + 0xb8);
}
int32_t& _Game_Gameplay_Puzzles_AC_PuzzleHighlight::AC_PuzzleHighlight_C::get_MaxHighlights() {
    return *(int32_t*)((uintptr_t)this + 0xc8);
}
bool _Game_Gameplay_Puzzles_AC_PuzzleHighlight::AC_PuzzleHighlight_C::get_ForceHighlightOff() {
    return (*(uint8_t*)((uintptr_t)this + 0xcc + 0)) & 1 != 0;
}
void _Game_Gameplay_Puzzles_AC_PuzzleHighlight::AC_PuzzleHighlight_C::GetNearestPuzzle(void*& Puzzles, _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C*& Puzzle) {
    return;
}
void _Game_Gameplay_Puzzles_AC_PuzzleHighlight::AC_PuzzleHighlight_C::set_ForceHighlightOff(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xcc + 0);
    *(uint8_t*)((uintptr_t)this + 0xcc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Gameplay_Puzzles_AC_PuzzleHighlight::AC_PuzzleHighlight_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Gameplay/Puzzles/AC_PuzzleHighlight.AC_PuzzleHighlight_C");
    return result;
}
void _Game_Gameplay_Puzzles_AC_PuzzleHighlight::AC_PuzzleHighlight_C::GetNumHighlights(void*& Puzzles) {
    return;
}
void _Game_Gameplay_Puzzles_AC_PuzzleHighlight::AC_PuzzleHighlight_C::ClearHighlights() {
    return;
}
void _Game_Gameplay_Puzzles_AC_PuzzleHighlight::AC_PuzzleHighlight_C::IsLocal(bool& Value) {
    return;
}
void _Game_Gameplay_Puzzles_AC_PuzzleHighlight::AC_PuzzleHighlight_C::SetForceHighlightOff(bool Value) {
    return;
}
void _Game_Gameplay_Puzzles_AC_PuzzleHighlight::AC_PuzzleHighlight_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Gameplay_Puzzles_AC_PuzzleHighlight::AC_PuzzleHighlight_C::TogglePuzzleHighlight() {
    return;
}
void _Game_Gameplay_Puzzles_AC_PuzzleHighlight::AC_PuzzleHighlight_C::ExecuteUbergraph_AC_PuzzleHighlight(int32_t EntryPoint) {
    return;
}
void _Game_Gameplay_Puzzles_AC_PuzzleHighlight::AC_PuzzleHighlight_C::OnPuzzleHighlightsOff__DelegateSignature() {
    return;
}
