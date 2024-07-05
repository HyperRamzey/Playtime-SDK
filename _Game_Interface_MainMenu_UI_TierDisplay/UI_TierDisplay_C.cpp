#include "..\FUObjectArray.hpp"
#include "UI_TierDisplay_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Playtime_Multiplayer\LevelResponse.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\ProgressBar.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\Throbber.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void* _Game_Interface_MainMenu_UI_TierDisplay::UI_TierDisplay_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_UI_TierDisplay::UI_TierDisplay_C::get_BadgeBG() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x268);
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_UI_TierDisplay::UI_TierDisplay_C::get_CurrentProgress() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x270);
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_UI_TierDisplay::UI_TierDisplay_C::get_LevelLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x280);
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_UI_TierDisplay::UI_TierDisplay_C::get_Divider() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x278);
}
_Script_UMG::Throbber*& _Game_Interface_MainMenu_UI_TierDisplay::UI_TierDisplay_C::get_LoadingProgress_Throbber() {
    return *(_Script_UMG::Throbber**)((uintptr_t)this + 0x290);
}
_Script_UMG::Throbber*& _Game_Interface_MainMenu_UI_TierDisplay::UI_TierDisplay_C::get_LoadingBigNumber_Throbber() {
    return *(_Script_UMG::Throbber**)((uintptr_t)this + 0x288);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_UI_TierDisplay::UI_TierDisplay_C::get_ProgressFrame() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x298);
}
_Script_UMG::ProgressBar*& _Game_Interface_MainMenu_UI_TierDisplay::UI_TierDisplay_C::get_Tier_ProgressBar() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x2a0);
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_UI_TierDisplay::UI_TierDisplay_C::get_TotalProgress() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2a8);
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_UI_TierDisplay::UI_TierDisplay_C::get_XPLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2b0);
}
_Script_CoreUObject::Class* _Game_Interface_MainMenu_UI_TierDisplay::UI_TierDisplay_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/MainMenu/UI_TierDisplay.UI_TierDisplay_C");
    return result;
}
void _Game_Interface_MainMenu_UI_TierDisplay::UI_TierDisplay_C::ManualGetXP() {
    return;
}
void _Game_Interface_MainMenu_UI_TierDisplay::UI_TierDisplay_C::OnXPFailure(void* ErrorMessage) {
    return;
}
void _Game_Interface_MainMenu_UI_TierDisplay::UI_TierDisplay_C::OnXPSuccess(_Script_Playtime_Multiplayer::LevelResponse Response) {
    return;
}
void _Game_Interface_MainMenu_UI_TierDisplay::UI_TierDisplay_C::SetLoading(bool IsLoading) {
    return;
}
void _Game_Interface_MainMenu_UI_TierDisplay::UI_TierDisplay_C::OnInitialized0() {
    return;
}
void _Game_Interface_MainMenu_UI_TierDisplay::UI_TierDisplay_C::ExecuteUbergraph_UI_TierDisplay(int32_t EntryPoint) {
    return;
}
