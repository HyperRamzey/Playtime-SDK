#include "..\FUObjectArray.hpp"
#include "UI_HeaderButton_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void* _Game_Interface_General_UI_HeaderButton::UI_HeaderButton_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::Image*& _Game_Interface_General_UI_HeaderButton::UI_HeaderButton_C::get_Background() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x268);
}
_Script_UMG::Button*& _Game_Interface_General_UI_HeaderButton::UI_HeaderButton_C::get_Button_509() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x270);
}
_Script_UMG::Image*& _Game_Interface_General_UI_HeaderButton::UI_HeaderButton_C::get_Frame() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x278);
}
_Script_CoreUObject::Class* _Game_Interface_General_UI_HeaderButton::UI_HeaderButton_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/General/UI_HeaderButton.UI_HeaderButton_C");
    return result;
}
_Script_UMG::TextBlock*& _Game_Interface_General_UI_HeaderButton::UI_HeaderButton_C::get_Label() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x280);
}
void* _Game_Interface_General_UI_HeaderButton::UI_HeaderButton_C::get_ButtonPressed() {
    return (void*)((uintptr_t)this + 0x2a0);
}
void* _Game_Interface_General_UI_HeaderButton::UI_HeaderButton_C::get_HeaderText() {
    return (void*)((uintptr_t)this + 0x288);
}
void _Game_Interface_General_UI_HeaderButton::UI_HeaderButton_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_General_UI_HeaderButton::UI_HeaderButton_C::BndEvt__UI_HeaderButton_Button_509_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_General_UI_HeaderButton::UI_HeaderButton_C::ActivateButton() {
    return;
}
void _Game_Interface_General_UI_HeaderButton::UI_HeaderButton_C::DeactivateButton() {
    return;
}
void _Game_Interface_General_UI_HeaderButton::UI_HeaderButton_C::BndEvt__UI_HeaderButton_Button_509_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_Interface_General_UI_HeaderButton::UI_HeaderButton_C::BndEvt__UI_HeaderButton_Button_509_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_Interface_General_UI_HeaderButton::UI_HeaderButton_C::ExecuteUbergraph_UI_HeaderButton(int32_t EntryPoint) {
    return;
}
void _Game_Interface_General_UI_HeaderButton::UI_HeaderButton_C::ButtonPressed__DelegateSignature() {
    return;
}
