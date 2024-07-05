#include "..\FUObjectArray.hpp"
#include "UI_ToyBoxButton_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Playtime_Multiplayer\LevelResponse.hpp"
#include "..\_Script_UMG\Border.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\ProgressBar.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
_Script_UMG::Button*& _Game_Interface_MainMenu_Widgets_UI_ToyBoxButton::UI_ToyBoxButton_C::get_Button_129() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x280);
}
void* _Game_Interface_MainMenu_Widgets_UI_ToyBoxButton::UI_ToyBoxButton_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_Widgets_UI_ToyBoxButton::UI_ToyBoxButton_C::get_Divider() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x290);
}
_Script_UMG::Border*& _Game_Interface_MainMenu_Widgets_UI_ToyBoxButton::UI_ToyBoxButton_C::get_Border_60() {
    return *(_Script_UMG::Border**)((uintptr_t)this + 0x278);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_MainMenu_Widgets_UI_ToyBoxButton::UI_ToyBoxButton_C::get_HighlightFrame() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_Widgets_UI_ToyBoxButton::UI_ToyBoxButton_C::get_Background() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x270);
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_Widgets_UI_ToyBoxButton::UI_ToyBoxButton_C::get_CurrentProgress() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x288);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_Widgets_UI_ToyBoxButton::UI_ToyBoxButton_C::get_Frame() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x298);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_Widgets_UI_ToyBoxButton::UI_ToyBoxButton_C::get_Image_481() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2a0);
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_Widgets_UI_ToyBoxButton::UI_ToyBoxButton_C::get_LevelLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2a8);
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_Widgets_UI_ToyBoxButton::UI_ToyBoxButton_C::get_XPLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2c8);
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_Widgets_UI_ToyBoxButton::UI_ToyBoxButton_C::get_LevelText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2b0);
}
_Script_UMG::ProgressBar*& _Game_Interface_MainMenu_Widgets_UI_ToyBoxButton::UI_ToyBoxButton_C::get_ProgressBar_54() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x2b8);
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_Widgets_UI_ToyBoxButton::UI_ToyBoxButton_C::get_TotalProgress() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2c0);
}
void* _Game_Interface_MainMenu_Widgets_UI_ToyBoxButton::UI_ToyBoxButton_C::get_ToyBoxButtonPressed() {
    return (void*)((uintptr_t)this + 0x2d0);
}
void _Game_Interface_MainMenu_Widgets_UI_ToyBoxButton::UI_ToyBoxButton_C::ToyBoxButtonPressed__DelegateSignature() {
    return;
}
void* _Game_Interface_MainMenu_Widgets_UI_ToyBoxButton::UI_ToyBoxButton_C::get_ToyBoxButtonHovered() {
    return (void*)((uintptr_t)this + 0x2e0);
}
void* _Game_Interface_MainMenu_Widgets_UI_ToyBoxButton::UI_ToyBoxButton_C::get_ToyBoxButtonUnhovered() {
    return (void*)((uintptr_t)this + 0x2f0);
}
void _Game_Interface_MainMenu_Widgets_UI_ToyBoxButton::UI_ToyBoxButton_C::OnXPSuccess(_Script_Playtime_Multiplayer::LevelResponse Response) {
    return;
}
_Script_CoreUObject::Class* _Game_Interface_MainMenu_Widgets_UI_ToyBoxButton::UI_ToyBoxButton_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/MainMenu/Widgets/UI_ToyBoxButton.UI_ToyBoxButton_C");
    return result;
}
void _Game_Interface_MainMenu_Widgets_UI_ToyBoxButton::UI_ToyBoxButton_C::SetLoading(bool IsLoading1) {
    return;
}
void _Game_Interface_MainMenu_Widgets_UI_ToyBoxButton::UI_ToyBoxButton_C::BndEvt__UI_ToyBoxButton_Button_129_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_Widgets_UI_ToyBoxButton::UI_ToyBoxButton_C::ExecuteUbergraph_UI_ToyBoxButton(int32_t EntryPoint) {
    return;
}
void _Game_Interface_MainMenu_Widgets_UI_ToyBoxButton::UI_ToyBoxButton_C::BndEvt__UI_ToyBoxButton_Button_129_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_Widgets_UI_ToyBoxButton::UI_ToyBoxButton_C::ToyBoxButtonUnhovered__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_Widgets_UI_ToyBoxButton::UI_ToyBoxButton_C::BndEvt__UI_ToyBoxButton_Button_129_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_Widgets_UI_ToyBoxButton::UI_ToyBoxButton_C::OnXPFailure(void* ErrorMessage) {
    return;
}
void _Game_Interface_MainMenu_Widgets_UI_ToyBoxButton::UI_ToyBoxButton_C::OnInitialized0() {
    return;
}
void _Game_Interface_MainMenu_Widgets_UI_ToyBoxButton::UI_ToyBoxButton_C::ToyBoxButtonHovered__DelegateSignature() {
    return;
}
