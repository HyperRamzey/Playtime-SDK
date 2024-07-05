#include "..\FUObjectArray.hpp"
#include "UI_Scoreboard_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\VerticalBox.hpp"
void* _Game_Interface_IngameScreens_UI_Scoreboard::UI_Scoreboard_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::VerticalBox*& _Game_Interface_IngameScreens_UI_Scoreboard::UI_Scoreboard_C::get_ScoreboardContainer() {
    return *(_Script_UMG::VerticalBox**)((uintptr_t)this + 0x288);
}
_Script_UMG::TextBlock*& _Game_Interface_IngameScreens_UI_Scoreboard::UI_Scoreboard_C::get_MonsterLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x268);
}
_Script_UMG::VerticalBox*& _Game_Interface_IngameScreens_UI_Scoreboard::UI_Scoreboard_C::get_MonstersContainer() {
    return *(_Script_UMG::VerticalBox**)((uintptr_t)this + 0x270);
}
_Script_UMG::VerticalBox*& _Game_Interface_IngameScreens_UI_Scoreboard::UI_Scoreboard_C::get_PlayersContainer() {
    return *(_Script_UMG::VerticalBox**)((uintptr_t)this + 0x278);
}
_Script_UMG::TextBlock*& _Game_Interface_IngameScreens_UI_Scoreboard::UI_Scoreboard_C::get_PlayersLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x280);
}
void _Game_Interface_IngameScreens_UI_Scoreboard::UI_Scoreboard_C::PreConstruct0(bool IsDesignTime) {
    return;
}
_Script_CoreUObject::Class* _Game_Interface_IngameScreens_UI_Scoreboard::UI_Scoreboard_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/IngameScreens/UI_Scoreboard.UI_Scoreboard_C");
    return result;
}
void _Game_Interface_IngameScreens_UI_Scoreboard::UI_Scoreboard_C::UpdateScoreboard() {
    return;
}
void _Game_Interface_IngameScreens_UI_Scoreboard::UI_Scoreboard_C::Update_Localization() {
    return;
}
void _Game_Interface_IngameScreens_UI_Scoreboard::UI_Scoreboard_C::Construct0() {
    return;
}
void _Game_Interface_IngameScreens_UI_Scoreboard::UI_Scoreboard_C::ExecuteUbergraph_UI_Scoreboard(int32_t EntryPoint) {
    return;
}
