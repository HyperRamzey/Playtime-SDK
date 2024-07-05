#include "..\FUObjectArray.hpp"
#include "AC_MP_Puzzle_EndGoal_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
void _Game_Gameplay_Puzzles_AC_MP_Puzzle_EndGoal::AC_MP_Puzzle_EndGoal_C::UpdatePhase(bool Forward) {
    return;
}
void* _Game_Gameplay_Puzzles_AC_MP_Puzzle_EndGoal::AC_MP_Puzzle_EndGoal_C::get_CheckPuzzles() {
    return (void*)((uintptr_t)this + 0xb0);
}
void* _Game_Gameplay_Puzzles_AC_MP_Puzzle_EndGoal::AC_MP_Puzzle_EndGoal_C::get_Triggers() {
    return (void*)((uintptr_t)this + 0xc0);
}
void _Game_Gameplay_Puzzles_AC_MP_Puzzle_EndGoal::AC_MP_Puzzle_EndGoal_C::CheckPuzzles__DelegateSignature() {
    return;
}
int32_t& _Game_Gameplay_Puzzles_AC_MP_Puzzle_EndGoal::AC_MP_Puzzle_EndGoal_C::get_Phase() {
    return *(int32_t*)((uintptr_t)this + 0xd0);
}
_Script_CoreUObject::Class* _Game_Gameplay_Puzzles_AC_MP_Puzzle_EndGoal::AC_MP_Puzzle_EndGoal_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Gameplay/Puzzles/AC_MP_Puzzle_EndGoal.AC_MP_Puzzle_EndGoal_C");
    return result;
}
