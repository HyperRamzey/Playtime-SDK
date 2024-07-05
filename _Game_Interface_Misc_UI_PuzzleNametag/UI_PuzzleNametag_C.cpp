#include "..\FUObjectArray.hpp"
#include "..\_Game_Gameplay_Puzzles_BP_MP_Puzzle_Trigger\BP_MP_Puzzle_Trigger_C.hpp"
#include "UI_PuzzleNametag_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
_Game_Gameplay_Puzzles_BP_MP_Puzzle_Trigger::BP_MP_Puzzle_Trigger_C*& _Game_Interface_Misc_UI_PuzzleNametag::UI_PuzzleNametag_C::get_Parent() {
    return *(_Game_Gameplay_Puzzles_BP_MP_Puzzle_Trigger::BP_MP_Puzzle_Trigger_C**)((uintptr_t)this + 0x280);
}
void* _Game_Interface_Misc_UI_PuzzleNametag::UI_PuzzleNametag_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
void _Game_Interface_Misc_UI_PuzzleNametag::UI_PuzzleNametag_C::AnimFadeOut() {
    return;
}
void _Game_Interface_Misc_UI_PuzzleNametag::UI_PuzzleNametag_C::Start_Next_Phase(int32_t NewPhase) {
    return;
}
_Script_UMG::WidgetAnimation*& _Game_Interface_Misc_UI_PuzzleNametag::UI_PuzzleNametag_C::get_FadeOut() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
_Script_UMG::TextBlock*& _Game_Interface_Misc_UI_PuzzleNametag::UI_PuzzleNametag_C::get_Label() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x278);
}
_Script_UMG::Image*& _Game_Interface_Misc_UI_PuzzleNametag::UI_PuzzleNametag_C::get_Icon() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x270);
}
_Script_CoreUObject::Class* _Game_Interface_Misc_UI_PuzzleNametag::UI_PuzzleNametag_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/Misc/UI_PuzzleNametag.UI_PuzzleNametag_C");
    return result;
}
void _Game_Interface_Misc_UI_PuzzleNametag::UI_PuzzleNametag_C::Set_Distance(float InFloat) {
    return;
}
void _Game_Interface_Misc_UI_PuzzleNametag::UI_PuzzleNametag_C::Solve(bool Condition) {
    return;
}
void _Game_Interface_Misc_UI_PuzzleNametag::UI_PuzzleNametag_C::Construct0() {
    return;
}
void _Game_Interface_Misc_UI_PuzzleNametag::UI_PuzzleNametag_C::ExecuteUbergraph_UI_PuzzleNametag(int32_t EntryPoint) {
    return;
}
