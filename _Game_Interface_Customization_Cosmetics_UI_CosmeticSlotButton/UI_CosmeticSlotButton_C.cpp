#include "..\FUObjectArray.hpp"
#include "UI_CosmeticSlotButton_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void* _Game_Interface_Customization_Cosmetics_UI_CosmeticSlotButton::UI_CosmeticSlotButton_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_Customization_Cosmetics_UI_CosmeticSlotButton::UI_CosmeticSlotButton_C::get_Selection() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
void* _Game_Interface_Customization_Cosmetics_UI_CosmeticSlotButton::UI_CosmeticSlotButton_C::get_CosmeticSlot() {
    return (void*)((uintptr_t)this + 0x280);
}
_Script_UMG::Image*& _Game_Interface_Customization_Cosmetics_UI_CosmeticSlotButton::UI_CosmeticSlotButton_C::get_Image_243() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x278);
}
_Script_UMG::Button*& _Game_Interface_Customization_Cosmetics_UI_CosmeticSlotButton::UI_CosmeticSlotButton_C::get_Button_0() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x270);
}
void* _Game_Interface_Customization_Cosmetics_UI_CosmeticSlotButton::UI_CosmeticSlotButton_C::get_CosmeticFor() {
    return (void*)((uintptr_t)this + 0x290);
}
_Script_CoreUObject::Object*& _Game_Interface_Customization_Cosmetics_UI_CosmeticSlotButton::UI_CosmeticSlotButton_C::get_Parent() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x288);
}
void* _Game_Interface_Customization_Cosmetics_UI_CosmeticSlotButton::UI_CosmeticSlotButton_C::get_Released() {
    return (void*)((uintptr_t)this + 0x298);
}
_Script_CoreUObject::Class* _Game_Interface_Customization_Cosmetics_UI_CosmeticSlotButton::UI_CosmeticSlotButton_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/Customization/Cosmetics/UI_CosmeticSlotButton.UI_CosmeticSlotButton_C");
    return result;
}
void _Game_Interface_Customization_Cosmetics_UI_CosmeticSlotButton::UI_CosmeticSlotButton_C::IsActive() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_CosmeticSlotButton::UI_CosmeticSlotButton_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_CosmeticSlotButton::UI_CosmeticSlotButton_C::BndEvt__UI_CosmeticSlotButton_Button_0_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_CosmeticSlotButton::UI_CosmeticSlotButton_C::SetSelectedCosmetic(int32_t Item) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_CosmeticSlotButton::UI_CosmeticSlotButton_C::ResetSelectedCosmetic() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_CosmeticSlotButton::UI_CosmeticSlotButton_C::SetSelected(bool Selected) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_CosmeticSlotButton::UI_CosmeticSlotButton_C::ExecuteUbergraph_UI_CosmeticSlotButton(int32_t EntryPoint) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_CosmeticSlotButton::UI_CosmeticSlotButton_C::Released__DelegateSignature(void* Type) {
    return;
}
