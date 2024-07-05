#include "..\FUObjectArray.hpp"
#include "UI_FilterButton_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
_Script_UMG::TextBlock*& _Game_Interface_Shoppy_Widgets_UI_FilterButton::UI_FilterButton_C::get_Label() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x280);
}
void* _Game_Interface_Shoppy_Widgets_UI_FilterButton::UI_FilterButton_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::Image*& _Game_Interface_Shoppy_Widgets_UI_FilterButton::UI_FilterButton_C::get_CheckBox() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x268);
}
_Script_UMG::Image*& _Game_Interface_Shoppy_Widgets_UI_FilterButton::UI_FilterButton_C::get_checkmark() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x270);
}
_Script_UMG::Button*& _Game_Interface_Shoppy_Widgets_UI_FilterButton::UI_FilterButton_C::get_FilterButton() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x278);
}
void* _Game_Interface_Shoppy_Widgets_UI_FilterButton::UI_FilterButton_C::get_ButtonText() {
    return (void*)((uintptr_t)this + 0x288);
}
void* _Game_Interface_Shoppy_Widgets_UI_FilterButton::UI_FilterButton_C::get_FilterButtonReleased() {
    return (void*)((uintptr_t)this + 0x2a0);
}
void* _Game_Interface_Shoppy_Widgets_UI_FilterButton::UI_FilterButton_C::get_FilterType() {
    return (void*)((uintptr_t)this + 0x2b0);
}
_Script_CoreUObject::Class* _Game_Interface_Shoppy_Widgets_UI_FilterButton::UI_FilterButton_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/Shoppy/Widgets/UI_FilterButton.UI_FilterButton_C");
    return result;
}
void _Game_Interface_Shoppy_Widgets_UI_FilterButton::UI_FilterButton_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_FilterButton::UI_FilterButton_C::BndEvt__UI_FilterButton_FilterButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_FilterButton::UI_FilterButton_C::ShowCheckmark() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_FilterButton::UI_FilterButton_C::HideCheckmark() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_FilterButton::UI_FilterButton_C::ExecuteUbergraph_UI_FilterButton(int32_t EntryPoint) {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_FilterButton::UI_FilterButton_C::FilterButtonReleased__DelegateSignature(_Game_Interface_Shoppy_Widgets_UI_FilterButton::UI_FilterButton_C* ObjectReference, void* Filter) {
    return;
}
