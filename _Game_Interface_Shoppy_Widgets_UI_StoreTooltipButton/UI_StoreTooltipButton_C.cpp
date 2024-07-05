#include "..\FUObjectArray.hpp"
#include "UI_StoreTooltipButton_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\SizeBox.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void* _Game_Interface_Shoppy_Widgets_UI_StoreTooltipButton::UI_StoreTooltipButton_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::Button*& _Game_Interface_Shoppy_Widgets_UI_StoreTooltipButton::UI_StoreTooltipButton_C::get_Button_100() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x268);
}
_Script_UMG::Image*& _Game_Interface_Shoppy_Widgets_UI_StoreTooltipButton::UI_StoreTooltipButton_C::get_ButtonFrame() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x280);
}
_Script_UMG::Image*& _Game_Interface_Shoppy_Widgets_UI_StoreTooltipButton::UI_StoreTooltipButton_C::get_ButtonBG() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x270);
}
void _Game_Interface_Shoppy_Widgets_UI_StoreTooltipButton::UI_StoreTooltipButton_C::ExecuteUbergraph_UI_StoreTooltipButton(int32_t EntryPoint) {
    return;
}
_Script_UMG::TextBlock*& _Game_Interface_Shoppy_Widgets_UI_StoreTooltipButton::UI_StoreTooltipButton_C::get_ButtonLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x288);
}
_Script_UMG::SizeBox*& _Game_Interface_Shoppy_Widgets_UI_StoreTooltipButton::UI_StoreTooltipButton_C::get_ButtonBox() {
    return *(_Script_UMG::SizeBox**)((uintptr_t)this + 0x278);
}
void* _Game_Interface_Shoppy_Widgets_UI_StoreTooltipButton::UI_StoreTooltipButton_C::get_ButtonReleased() {
    return (void*)((uintptr_t)this + 0x290);
}
void* _Game_Interface_Shoppy_Widgets_UI_StoreTooltipButton::UI_StoreTooltipButton_C::get_ButtonText() {
    return (void*)((uintptr_t)this + 0x2a0);
}
bool _Game_Interface_Shoppy_Widgets_UI_StoreTooltipButton::UI_StoreTooltipButton_C::get_StartSelected() {
    return (*(uint8_t*)((uintptr_t)this + 0x2b8 + 0)) & 1 != 0;
}
void _Game_Interface_Shoppy_Widgets_UI_StoreTooltipButton::UI_StoreTooltipButton_C::set_StartSelected(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2b8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2b8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Interface_Shoppy_Widgets_UI_StoreTooltipButton::UI_StoreTooltipButton_C::get_ButtonWidth() {
    return *(float*)((uintptr_t)this + 0x2bc);
}
float& _Game_Interface_Shoppy_Widgets_UI_StoreTooltipButton::UI_StoreTooltipButton_C::get_ButtonHeight() {
    return *(float*)((uintptr_t)this + 0x2c0);
}
_Script_CoreUObject::Class* _Game_Interface_Shoppy_Widgets_UI_StoreTooltipButton::UI_StoreTooltipButton_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/Shoppy/Widgets/UI_StoreTooltipButton.UI_StoreTooltipButton_C");
    return result;
}
void _Game_Interface_Shoppy_Widgets_UI_StoreTooltipButton::UI_StoreTooltipButton_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_StoreTooltipButton::UI_StoreTooltipButton_C::BndEvt__UI_StoreTooltipButton_Button_100_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_StoreTooltipButton::UI_StoreTooltipButton_C::ActivateButton() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_StoreTooltipButton::UI_StoreTooltipButton_C::DeactivateButton() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_StoreTooltipButton::UI_StoreTooltipButton_C::UpdateButtonLabelText(void* NewText) {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_StoreTooltipButton::UI_StoreTooltipButton_C::BndEvt__UI_StoreTooltipButton_Button_100_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_StoreTooltipButton::UI_StoreTooltipButton_C::BndEvt__UI_StoreTooltipButton_Button_100_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_StoreTooltipButton::UI_StoreTooltipButton_C::ButtonReleased__DelegateSignature() {
    return;
}
