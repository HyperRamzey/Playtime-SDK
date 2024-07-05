#include "..\FUObjectArray.hpp"
#include "UI_PurchaseButton_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void* _Game_Interface_Shoppy_Widgets_UI_PurchaseButton::UI_PurchaseButton_C::get_ButtonReleased() {
    return (void*)((uintptr_t)this + 0x298);
}
void _Game_Interface_Shoppy_Widgets_UI_PurchaseButton::UI_PurchaseButton_C::SetPrice(void* Price) {
    return;
}
_Script_UMG::Image*& _Game_Interface_Shoppy_Widgets_UI_PurchaseButton::UI_PurchaseButton_C::get_Icon() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x288);
}
_Script_UMG::Image*& _Game_Interface_Shoppy_Widgets_UI_PurchaseButton::UI_PurchaseButton_C::get_Background() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x268);
}
void* _Game_Interface_Shoppy_Widgets_UI_PurchaseButton::UI_PurchaseButton_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::Button*& _Game_Interface_Shoppy_Widgets_UI_PurchaseButton::UI_PurchaseButton_C::get_Button_99() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x270);
}
_Script_UMG::TextBlock*& _Game_Interface_Shoppy_Widgets_UI_PurchaseButton::UI_PurchaseButton_C::get_PriceLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x290);
}
_Script_UMG::TextBlock*& _Game_Interface_Shoppy_Widgets_UI_PurchaseButton::UI_PurchaseButton_C::get_BuyWith() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x278);
}
_Script_UMG::Image*& _Game_Interface_Shoppy_Widgets_UI_PurchaseButton::UI_PurchaseButton_C::get_Frame() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x280);
}
bool _Game_Interface_Shoppy_Widgets_UI_PurchaseButton::UI_PurchaseButton_C::get_bIsTicket() {
    return (*(uint8_t*)((uintptr_t)this + 0x2a8 + 0)) & 1 != 0;
}
void _Game_Interface_Shoppy_Widgets_UI_PurchaseButton::UI_PurchaseButton_C::set_bIsTicket(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2a8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2a8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Interface_Shoppy_Widgets_UI_PurchaseButton::UI_PurchaseButton_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/Shoppy/Widgets/UI_PurchaseButton.UI_PurchaseButton_C");
    return result;
}
void _Game_Interface_Shoppy_Widgets_UI_PurchaseButton::UI_PurchaseButton_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_PurchaseButton::UI_PurchaseButton_C::BndEvt__UI_PurchaseButton_Button_99_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_PurchaseButton::UI_PurchaseButton_C::BndEvt__UI_PurchaseButton_Button_99_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_PurchaseButton::UI_PurchaseButton_C::BndEvt__UI_PurchaseButton_Button_99_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_PurchaseButton::UI_PurchaseButton_C::ExecuteUbergraph_UI_PurchaseButton(int32_t EntryPoint) {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_PurchaseButton::UI_PurchaseButton_C::ButtonReleased__DelegateSignature() {
    return;
}
