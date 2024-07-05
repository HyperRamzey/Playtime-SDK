#include "..\FUObjectArray.hpp"
#include "UI_WinScreen_C.hpp"
#include "..\_Game_Interface_MainMenu_UI_MP_N_MenuButton\UI_MP_N_MenuButton_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\HorizontalBox.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
_Script_UMG::WidgetAnimation*& _Game_Interface_IngameScreens_UI_WinScreen::UI_WinScreen_C::get_Init() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
_Game_Interface_MainMenu_UI_MP_N_MenuButton::UI_MP_N_MenuButton_C*& _Game_Interface_IngameScreens_UI_WinScreen::UI_WinScreen_C::get_UI_MP_N_MenuButton() {
    return *(_Game_Interface_MainMenu_UI_MP_N_MenuButton::UI_MP_N_MenuButton_C**)((uintptr_t)this + 0x2a0);
}
void* _Game_Interface_IngameScreens_UI_WinScreen::UI_WinScreen_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
int32_t& _Game_Interface_IngameScreens_UI_WinScreen::UI_WinScreen_C::get_NewGameDuration() {
    return *(int32_t*)((uintptr_t)this + 0x2dc);
}
_Script_UMG::TextBlock*& _Game_Interface_IngameScreens_UI_WinScreen::UI_WinScreen_C::get_Subheading() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x290);
}
_Script_UMG::Image*& _Game_Interface_IngameScreens_UI_WinScreen::UI_WinScreen_C::get_BG() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x278);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_IngameScreens_UI_WinScreen::UI_WinScreen_C::get_Anim() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x270);
}
_Script_UMG::HorizontalBox*& _Game_Interface_IngameScreens_UI_WinScreen::UI_WinScreen_C::get_CountdownBox() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x280);
}
_Script_UMG::TextBlock*& _Game_Interface_IngameScreens_UI_WinScreen::UI_WinScreen_C::get_Heading() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x288);
}
_Script_UMG::TextBlock*& _Game_Interface_IngameScreens_UI_WinScreen::UI_WinScreen_C::get_T_Countdown() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x298);
}
void* _Game_Interface_IngameScreens_UI_WinScreen::UI_WinScreen_C::get_HeadingText() {
    return (void*)((uintptr_t)this + 0x2a8);
}
void* _Game_Interface_IngameScreens_UI_WinScreen::UI_WinScreen_C::get_SubheadingText() {
    return (void*)((uintptr_t)this + 0x2c0);
}
void* _Game_Interface_IngameScreens_UI_WinScreen::UI_WinScreen_C::get_PlayerType() {
    return (void*)((uintptr_t)this + 0x2d8);
}
_Script_CoreUObject::Class* _Game_Interface_IngameScreens_UI_WinScreen::UI_WinScreen_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/IngameScreens/UI_WinScreen.UI_WinScreen_C");
    return result;
}
void _Game_Interface_IngameScreens_UI_WinScreen::UI_WinScreen_C::OnFailure_A070BB30474FFF9F1707AE876026909F() {
    return;
}
void _Game_Interface_IngameScreens_UI_WinScreen::UI_WinScreen_C::OnSuccess_A070BB30474FFF9F1707AE876026909F() {
    return;
}
void _Game_Interface_IngameScreens_UI_WinScreen::UI_WinScreen_C::EventLeave() {
    return;
}
void _Game_Interface_IngameScreens_UI_WinScreen::UI_WinScreen_C::SetFont() {
    return;
}
void _Game_Interface_IngameScreens_UI_WinScreen::UI_WinScreen_C::Construct0() {
    return;
}
void _Game_Interface_IngameScreens_UI_WinScreen::UI_WinScreen_C::ExecuteUbergraph_UI_WinScreen(int32_t EntryPoint) {
    return;
}
