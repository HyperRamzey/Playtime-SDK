#include "..\FUObjectArray.hpp"
#include "..\_Game_Interface_General_UI_BackButton\UI_BackButton_C.hpp"
#include "..\_Game_Interface_MainMenu_Components_UI_OptionMenu_Button\UI_OptionMenu_Button_C.hpp"
#include "UI_Credits_C.hpp"
#include "..\_Game_Interface_MainMenu_UI_MP_N_MenuButton\UI_MP_N_MenuButton_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\CanvasPanel.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_UI_Credits::UI_Credits_C::get_CreditsText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x290);
}
void* _Game_Interface_MainMenu_UI_Credits::UI_Credits_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_MainMenu_UI_Credits::UI_Credits_C::get_Fade_In() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_MainMenu_UI_Credits::UI_Credits_C::get_Open() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x270);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_MainMenu_UI_Credits::UI_Credits_C::get_Animation() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x278);
}
_Game_Interface_MainMenu_Components_UI_OptionMenu_Button::UI_OptionMenu_Button_C*& _Game_Interface_MainMenu_UI_Credits::UI_Credits_C::get_ActiveCreditsButton() {
    return *(_Game_Interface_MainMenu_Components_UI_OptionMenu_Button::UI_OptionMenu_Button_C**)((uintptr_t)this + 0x280);
}
_Script_UMG::CanvasPanel*& _Game_Interface_MainMenu_UI_Credits::UI_Credits_C::get_CanvasPanel_0() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x288);
}
void _Game_Interface_MainMenu_UI_Credits::UI_Credits_C::PreConstruct0(bool IsDesignTime) {
    return;
}
_Game_Interface_MainMenu_UI_MP_N_MenuButton::UI_MP_N_MenuButton_C*& _Game_Interface_MainMenu_UI_Credits::UI_Credits_C::get_Exit() {
    return *(_Game_Interface_MainMenu_UI_MP_N_MenuButton::UI_MP_N_MenuButton_C**)((uintptr_t)this + 0x298);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_UI_Credits::UI_Credits_C::get_Image_71() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2a0);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_UI_Credits::UI_Credits_C::get_Image_84() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2a8);
}
_Game_Interface_MainMenu_Components_UI_OptionMenu_Button::UI_OptionMenu_Button_C*& _Game_Interface_MainMenu_UI_Credits::UI_Credits_C::get_LegacyCreditsButton() {
    return *(_Game_Interface_MainMenu_Components_UI_OptionMenu_Button::UI_OptionMenu_Button_C**)((uintptr_t)this + 0x2b0);
}
_Game_Interface_General_UI_BackButton::UI_BackButton_C*& _Game_Interface_MainMenu_UI_Credits::UI_Credits_C::get_UI_BackButton() {
    return *(_Game_Interface_General_UI_BackButton::UI_BackButton_C**)((uintptr_t)this + 0x2b8);
}
void* _Game_Interface_MainMenu_UI_Credits::UI_Credits_C::get_CreditsBack() {
    return (void*)((uintptr_t)this + 0x2c0);
}
bool _Game_Interface_MainMenu_UI_Credits::UI_Credits_C::get_Legacy() {
    return (*(uint8_t*)((uintptr_t)this + 0x2d0 + 0)) & 1 != 0;
}
void _Game_Interface_MainMenu_UI_Credits::UI_Credits_C::set_Legacy(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2d0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2d0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Interface_MainMenu_UI_Credits::UI_Credits_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/MainMenu/UI_Credits.UI_Credits_C");
    return result;
}
void _Game_Interface_MainMenu_UI_Credits::UI_Credits_C::ExecuteUbergraph_UI_Credits(int32_t EntryPoint) {
    return;
}
void _Game_Interface_MainMenu_UI_Credits::UI_Credits_C::Text_Array_To_Verticle_Format_Text(void*& Text, void*& Final_Text) {
    return;
}
void _Game_Interface_MainMenu_UI_Credits::UI_Credits_C::Name_Array_To_Verticle_Text_List(void*& Text, void*& Final_Text) {
    return;
}
void _Game_Interface_MainMenu_UI_Credits::UI_Credits_C::InstantExitCredits() {
    return;
}
void _Game_Interface_MainMenu_UI_Credits::UI_Credits_C::BndEvt__UI_Credits_Exit_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature(_Game_Interface_MainMenu_UI_MP_N_MenuButton::UI_MP_N_MenuButton_C* Caller) {
    return;
}
void _Game_Interface_MainMenu_UI_Credits::UI_Credits_C::EnterCredits() {
    return;
}
void _Game_Interface_MainMenu_UI_Credits::UI_Credits_C::Construct0() {
    return;
}
void _Game_Interface_MainMenu_UI_Credits::UI_Credits_C::Update_Credits() {
    return;
}
void _Game_Interface_MainMenu_UI_Credits::UI_Credits_C::BndEvt__UI_Credits_UI_OptionMenu_Button_K2Node_ComponentBoundEvent_1_OptionMenuButtonReleased__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_UI_Credits::UI_Credits_C::BndEvt__UI_Credits_UI_OptionMenu_Button_1_K2Node_ComponentBoundEvent_2_OptionMenuButtonReleased__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_UI_Credits::UI_Credits_C::Begin_Credits() {
    return;
}
void _Game_Interface_MainMenu_UI_Credits::UI_Credits_C::ExitCredits() {
    return;
}
void _Game_Interface_MainMenu_UI_Credits::UI_Credits_C::BndEvt__UI_Credits_UI_BackButton_K2Node_ComponentBoundEvent_3_Released__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_UI_Credits::UI_Credits_C::CreditsBack__DelegateSignature() {
    return;
}
