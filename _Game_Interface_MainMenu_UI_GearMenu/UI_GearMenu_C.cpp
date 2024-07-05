#include "..\FUObjectArray.hpp"
#include "..\_Game_Interface_General_UI_BackButton\UI_BackButton_C.hpp"
#include "..\_Game_Interface_General_UI_BasicButton\UI_BasicButton_C.hpp"
#include "..\_Game_Interface_MainMenu_Components_UI_OptionMenu_Button\UI_OptionMenu_Button_C.hpp"
#include "..\_Game_Interface_MainMenu_UI_Credits\UI_Credits_C.hpp"
#include "UI_GearMenu_C.hpp"
#include "..\_Game_Interface_Settings_UI_Settings_Menu\UI_Settings_Menu_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\Overlay.hpp"
#include "..\_Script_UMG\RichTextBlock.hpp"
#include "..\_Script_UMG\ScrollBox.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
#include "..\_Script_UMG\WidgetSwitcher.hpp"
void _Game_Interface_MainMenu_UI_GearMenu::UI_GearMenu_C::Update_Localization() {
    return;
}
void* _Game_Interface_MainMenu_UI_GearMenu::UI_GearMenu_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Game_Interface_General_UI_BasicButton::UI_BasicButton_C*& _Game_Interface_MainMenu_UI_GearMenu::UI_GearMenu_C::get_ExitPatchNotes() {
    return *(_Game_Interface_General_UI_BasicButton::UI_BasicButton_C**)((uintptr_t)this + 0x280);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_MainMenu_UI_GearMenu::UI_GearMenu_C::get_FadeIn() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
_Script_UMG::Button*& _Game_Interface_MainMenu_UI_GearMenu::UI_GearMenu_C::get_Button_61() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x270);
}
_Game_Interface_MainMenu_Components_UI_OptionMenu_Button::UI_OptionMenu_Button_C*& _Game_Interface_MainMenu_UI_GearMenu::UI_GearMenu_C::get_CreditsButton() {
    return *(_Game_Interface_MainMenu_Components_UI_OptionMenu_Button::UI_OptionMenu_Button_C**)((uintptr_t)this + 0x278);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_UI_GearMenu::UI_GearMenu_C::get_Image() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x288);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_UI_GearMenu::UI_GearMenu_C::get_Image_327() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x290);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_UI_GearMenu::UI_GearMenu_C::get_PatchNoteBackground() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x298);
}
_Script_UMG::RichTextBlock*& _Game_Interface_MainMenu_UI_GearMenu::UI_GearMenu_C::get_Patchnotebody() {
    return *(_Script_UMG::RichTextBlock**)((uintptr_t)this + 0x2a0);
}
_Script_UMG::Overlay*& _Game_Interface_MainMenu_UI_GearMenu::UI_GearMenu_C::get_PatchNotes() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x2a8);
}
_Game_Interface_MainMenu_Components_UI_OptionMenu_Button::UI_OptionMenu_Button_C*& _Game_Interface_MainMenu_UI_GearMenu::UI_GearMenu_C::get_PatchNotesButton() {
    return *(_Game_Interface_MainMenu_Components_UI_OptionMenu_Button::UI_OptionMenu_Button_C**)((uintptr_t)this + 0x2b0);
}
void _Game_Interface_MainMenu_UI_GearMenu::UI_GearMenu_C::BndEvt__UI_GearMenu_UI_Credits_K2Node_ComponentBoundEvent_3_CreditsBack__DelegateSignature() {
    return;
}
_Script_UMG::ScrollBox*& _Game_Interface_MainMenu_UI_GearMenu::UI_GearMenu_C::get_PatchNotesScroll() {
    return *(_Script_UMG::ScrollBox**)((uintptr_t)this + 0x2b8);
}
void _Game_Interface_MainMenu_UI_GearMenu::UI_GearMenu_C::Update() {
    return;
}
_Script_UMG::Overlay*& _Game_Interface_MainMenu_UI_GearMenu::UI_GearMenu_C::get_PrimaryContent() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x2c0);
}
_Script_UMG::WidgetSwitcher*& _Game_Interface_MainMenu_UI_GearMenu::UI_GearMenu_C::get_PrimaryWidgetSwitcher() {
    return *(_Script_UMG::WidgetSwitcher**)((uintptr_t)this + 0x2c8);
}
_Game_Interface_MainMenu_Components_UI_OptionMenu_Button::UI_OptionMenu_Button_C*& _Game_Interface_MainMenu_UI_GearMenu::UI_GearMenu_C::get_QuitGameButton() {
    return *(_Game_Interface_MainMenu_Components_UI_OptionMenu_Button::UI_OptionMenu_Button_C**)((uintptr_t)this + 0x2d0);
}
_Game_Interface_MainMenu_Components_UI_OptionMenu_Button::UI_OptionMenu_Button_C*& _Game_Interface_MainMenu_UI_GearMenu::UI_GearMenu_C::get_ReportABugButton() {
    return *(_Game_Interface_MainMenu_Components_UI_OptionMenu_Button::UI_OptionMenu_Button_C**)((uintptr_t)this + 0x2d8);
}
_Game_Interface_MainMenu_Components_UI_OptionMenu_Button::UI_OptionMenu_Button_C*& _Game_Interface_MainMenu_UI_GearMenu::UI_GearMenu_C::get_SettingsButton() {
    return *(_Game_Interface_MainMenu_Components_UI_OptionMenu_Button::UI_OptionMenu_Button_C**)((uintptr_t)this + 0x2e0);
}
_Game_Interface_MainMenu_Components_UI_OptionMenu_Button::UI_OptionMenu_Button_C*& _Game_Interface_MainMenu_UI_GearMenu::UI_GearMenu_C::get_SocialsButton() {
    return *(_Game_Interface_MainMenu_Components_UI_OptionMenu_Button::UI_OptionMenu_Button_C**)((uintptr_t)this + 0x2e8);
}
_Game_Interface_General_UI_BackButton::UI_BackButton_C*& _Game_Interface_MainMenu_UI_GearMenu::UI_GearMenu_C::get_UI_BackButton() {
    return *(_Game_Interface_General_UI_BackButton::UI_BackButton_C**)((uintptr_t)this + 0x2f0);
}
void _Game_Interface_MainMenu_UI_GearMenu::UI_GearMenu_C::Text_Array_To_Verticle_Format_Text(void*& Text, void*& Final_Text) {
    return;
}
_Game_Interface_MainMenu_UI_Credits::UI_Credits_C*& _Game_Interface_MainMenu_UI_GearMenu::UI_GearMenu_C::get_UI_Credits() {
    return *(_Game_Interface_MainMenu_UI_Credits::UI_Credits_C**)((uintptr_t)this + 0x2f8);
}
_Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C*& _Game_Interface_MainMenu_UI_GearMenu::UI_GearMenu_C::get_UI_Settings_Menu() {
    return *(_Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C**)((uintptr_t)this + 0x300);
}
void* _Game_Interface_MainMenu_UI_GearMenu::UI_GearMenu_C::get_GearMenu_BackPressed() {
    return (void*)((uintptr_t)this + 0x308);
}
_Script_CoreUObject::Class* _Game_Interface_MainMenu_UI_GearMenu::UI_GearMenu_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/MainMenu/UI_GearMenu.UI_GearMenu_C");
    return result;
}
void _Game_Interface_MainMenu_UI_GearMenu::UI_GearMenu_C::Name_Array_To_Verticle_Text_List(void*& Text, void*& Final_Text) {
    return;
}
void _Game_Interface_MainMenu_UI_GearMenu::UI_GearMenu_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_MainMenu_UI_GearMenu::UI_GearMenu_C::Construct0() {
    return;
}
void _Game_Interface_MainMenu_UI_GearMenu::UI_GearMenu_C::BndEvt__UI_GearMenu_UI_Settings_Menu_K2Node_ComponentBoundEvent_1_Back__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_UI_GearMenu::UI_GearMenu_C::BndEvt__UI_GearMenu_SettingsButton_K2Node_ComponentBoundEvent_2_OptionMenuButtonReleased__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_UI_GearMenu::UI_GearMenu_C::BndEvt__UI_GearMenu_CreditsButton_K2Node_ComponentBoundEvent_4_OptionMenuButtonReleased__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_UI_GearMenu::UI_GearMenu_C::BndEvt__UI_GearMenu_ExitPatchNotes_K2Node_ComponentBoundEvent_5_OnReleased__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_UI_GearMenu::UI_GearMenu_C::BndEvt__UI_GearMenu_PatchNotesButton_K2Node_ComponentBoundEvent_6_OptionMenuButtonReleased__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_UI_GearMenu::UI_GearMenu_C::BndEvt__UI_GearMenu_ReportABugButton_K2Node_ComponentBoundEvent_7_OptionMenuButtonReleased__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_UI_GearMenu::UI_GearMenu_C::BndEvt__UI_GearMenu_SocialsButton_K2Node_ComponentBoundEvent_9_OptionMenuButtonReleased__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_UI_GearMenu::UI_GearMenu_C::BndEvt__UI_GearMenu_QuitGameButton_K2Node_ComponentBoundEvent_8_OptionMenuButtonReleased__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_UI_GearMenu::UI_GearMenu_C::BndEvt__UI_GearMenu_UI_BackButton_K2Node_ComponentBoundEvent_12_Released__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_UI_GearMenu::UI_GearMenu_C::ExecuteUbergraph_UI_GearMenu(int32_t EntryPoint) {
    return;
}
void _Game_Interface_MainMenu_UI_GearMenu::UI_GearMenu_C::GearMenu_BackPressed__DelegateSignature() {
    return;
}
