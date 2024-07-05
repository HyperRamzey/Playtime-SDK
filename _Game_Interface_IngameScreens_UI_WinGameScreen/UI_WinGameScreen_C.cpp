#include "..\FUObjectArray.hpp"
#include "UI_WinGameScreen_C.hpp"
#include "..\_Game_Interface_MainMenu_UI_MP_N_MenuButton\UI_MP_N_MenuButton_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void* _Game_Interface_IngameScreens_UI_WinGameScreen::UI_WinGameScreen_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_IngameScreens_UI_WinGameScreen::UI_WinGameScreen_C::get_Init() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
_Game_Interface_MainMenu_UI_MP_N_MenuButton::UI_MP_N_MenuButton_C*& _Game_Interface_IngameScreens_UI_WinGameScreen::UI_WinGameScreen_C::get_UI_MP_N_MenuButton() {
    return *(_Game_Interface_MainMenu_UI_MP_N_MenuButton::UI_MP_N_MenuButton_C**)((uintptr_t)this + 0x290);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_IngameScreens_UI_WinGameScreen::UI_WinGameScreen_C::get_Anim() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x270);
}
_Script_UMG::TextBlock*& _Game_Interface_IngameScreens_UI_WinGameScreen::UI_WinGameScreen_C::get_Subheading() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x288);
}
_Script_UMG::Image*& _Game_Interface_IngameScreens_UI_WinGameScreen::UI_WinGameScreen_C::get_BG() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x278);
}
_Script_UMG::TextBlock*& _Game_Interface_IngameScreens_UI_WinGameScreen::UI_WinGameScreen_C::get_Heading() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x280);
}
int32_t& _Game_Interface_IngameScreens_UI_WinGameScreen::UI_WinGameScreen_C::get_PointsByCount() {
    return *(int32_t*)((uintptr_t)this + 0x298);
}
void _Game_Interface_IngameScreens_UI_WinGameScreen::UI_WinGameScreen_C::OnSuccess_02BBAA10401390C9AC553689D90391FA() {
    return;
}
_Script_CoreUObject::Class* _Game_Interface_IngameScreens_UI_WinGameScreen::UI_WinGameScreen_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/IngameScreens/UI_WinGameScreen.UI_WinGameScreen_C");
    return result;
}
void _Game_Interface_IngameScreens_UI_WinGameScreen::UI_WinGameScreen_C::OnFailure_02BBAA10401390C9AC553689D90391FA() {
    return;
}
void _Game_Interface_IngameScreens_UI_WinGameScreen::UI_WinGameScreen_C::EventLeave() {
    return;
}
void _Game_Interface_IngameScreens_UI_WinGameScreen::UI_WinGameScreen_C::Construct0() {
    return;
}
void _Game_Interface_IngameScreens_UI_WinGameScreen::UI_WinGameScreen_C::ExecuteUbergraph_UI_WinGameScreen(int32_t EntryPoint) {
    return;
}
