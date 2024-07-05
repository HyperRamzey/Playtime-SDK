#include "..\FUObjectArray.hpp"
#include "UI_Preset_New_C.hpp"
#include "..\_Game_Interface_General_UI_BackButton\UI_BackButton_C.hpp"
#include "..\_Game_Interface_MainMenu_UI_MP_N_MenuButton\UI_MP_N_MenuButton_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\EditableTextBox.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\RichTextBlock.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
_Game_Interface_General_UI_BackButton::UI_BackButton_C*& _Game_Interface_Customization_Cosmetics_UI_Preset_New::UI_Preset_New_C::get_UI_BackButton() {
    return *(_Game_Interface_General_UI_BackButton::UI_BackButton_C**)((uintptr_t)this + 0x298);
}
_Script_UMG::TextBlock*& _Game_Interface_Customization_Cosmetics_UI_Preset_New::UI_Preset_New_C::get_Length() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x278);
}
void* _Game_Interface_Customization_Cosmetics_UI_Preset_New::UI_Preset_New_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::Button*& _Game_Interface_Customization_Cosmetics_UI_Preset_New::UI_Preset_New_C::get_Button() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x268);
}
_Game_Interface_MainMenu_UI_MP_N_MenuButton::UI_MP_N_MenuButton_C*& _Game_Interface_Customization_Cosmetics_UI_Preset_New::UI_Preset_New_C::get_Start() {
    return *(_Game_Interface_MainMenu_UI_MP_N_MenuButton::UI_MP_N_MenuButton_C**)((uintptr_t)this + 0x290);
}
_Script_UMG::RichTextBlock*& _Game_Interface_Customization_Cosmetics_UI_Preset_New::UI_Preset_New_C::get_RichLabel() {
    return *(_Script_UMG::RichTextBlock**)((uintptr_t)this + 0x280);
}
_Script_UMG::Image*& _Game_Interface_Customization_Cosmetics_UI_Preset_New::UI_Preset_New_C::get_Image_100() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x270);
}
_Script_UMG::EditableTextBox*& _Game_Interface_Customization_Cosmetics_UI_Preset_New::UI_Preset_New_C::get_Search() {
    return *(_Script_UMG::EditableTextBox**)((uintptr_t)this + 0x288);
}
void* _Game_Interface_Customization_Cosmetics_UI_Preset_New::UI_Preset_New_C::get_NewName() {
    return (void*)((uintptr_t)this + 0x2a0);
}
void* _Game_Interface_Customization_Cosmetics_UI_Preset_New::UI_Preset_New_C::get_ClickOkayButton() {
    return (void*)((uintptr_t)this + 0x2b0);
}
_Script_CoreUObject::Class* _Game_Interface_Customization_Cosmetics_UI_Preset_New::UI_Preset_New_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/Customization/Cosmetics/UI_Preset_New.UI_Preset_New_C");
    return result;
}
bool _Game_Interface_Customization_Cosmetics_UI_Preset_New::UI_Preset_New_C::ContainsEnglishCharacters(void* String) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Preset_New::UI_Preset_New_C::SetOtherWindowsFocus(bool Is_Focusable) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Preset_New::UI_Preset_New_C::BndEvt__UI_Preset_New_Search_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(void*& Text) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Preset_New::UI_Preset_New_C::BndEvt__UI_Preset_New_Start_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature(_Game_Interface_MainMenu_UI_MP_N_MenuButton::UI_MP_N_MenuButton_C* Caller) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Preset_New::UI_Preset_New_C::BndEvt__UI_Preset_New_UI_BackButton_K2Node_ComponentBoundEvent_2_Released__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Preset_New::UI_Preset_New_C::Construct0() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Preset_New::UI_Preset_New_C::ExecuteUbergraph_UI_Preset_New(int32_t EntryPoint) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Preset_New::UI_Preset_New_C::ClickOkayButton__DelegateSignature(void* Name) {
    return;
}
