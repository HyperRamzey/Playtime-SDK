#include "..\FUObjectArray.hpp"
#include "BP_MP_Puzzle_EndGoal_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
_Script_Engine::SceneComponent*& _Game_Gameplay_Puzzles_BP_MP_Puzzle_EndGoal::BP_MP_Puzzle_EndGoal_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x220);
}
void* _Game_Gameplay_Puzzles_BP_MP_Puzzle_EndGoal::BP_MP_Puzzle_EndGoal_C::get_Triggers() {
    return (void*)((uintptr_t)this + 0x228);
}
_Script_CoreUObject::Class* _Game_Gameplay_Puzzles_BP_MP_Puzzle_EndGoal::BP_MP_Puzzle_EndGoal_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Gameplay/Puzzles/BP_MP_Puzzle_EndGoal.BP_MP_Puzzle_EndGoal_C");
    return result;
}
int32_t& _Game_Gameplay_Puzzles_BP_MP_Puzzle_EndGoal::BP_MP_Puzzle_EndGoal_C::get_Phase() {
    return *(int32_t*)((uintptr_t)this + 0x248);
}
void* _Game_Gameplay_Puzzles_BP_MP_Puzzle_EndGoal::BP_MP_Puzzle_EndGoal_C::get_CheckPuzzles() {
    return (void*)((uintptr_t)this + 0x238);
}
void _Game_Gameplay_Puzzles_BP_MP_Puzzle_EndGoal::BP_MP_Puzzle_EndGoal_C::CheckPuzzles__DelegateSignature() {
    return;
}
void _Game_Gameplay_Puzzles_BP_MP_Puzzle_EndGoal::BP_MP_Puzzle_EndGoal_C::Update_Phase(bool Forward) {
    return;
}
