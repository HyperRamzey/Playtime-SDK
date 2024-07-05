#include "..\FUObjectArray.hpp"
#include "UI_CustomizationTab_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Texture2D.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
bool _Game_Interface_Customization_Cosmetics_UI_CustomizationTab::UI_CustomizationTab_C::get_Retracted() {
    return (*(uint8_t*)((uintptr_t)this + 0x2a0 + 0)) & 1 != 0;
}
void* _Game_Interface_Customization_Cosmetics_UI_CustomizationTab::UI_CustomizationTab_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::Image*& _Game_Interface_Customization_Cosmetics_UI_CustomizationTab::UI_CustomizationTab_C::get_Icon() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x278);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_Customization_Cosmetics_UI_CustomizationTab::UI_CustomizationTab_C::get_Retract() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
_Script_UMG::Button*& _Game_Interface_Customization_Cosmetics_UI_CustomizationTab::UI_CustomizationTab_C::get_Button_27() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x270);
}
_Script_UMG::Image*& _Game_Interface_Customization_Cosmetics_UI_CustomizationTab::UI_CustomizationTab_C::get_Image() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x280);
}
void* _Game_Interface_Customization_Cosmetics_UI_CustomizationTab::UI_CustomizationTab_C::get_TabReleased() {
    return (void*)((uintptr_t)this + 0x288);
}
_Script_Engine::Texture2D*& _Game_Interface_Customization_Cosmetics_UI_CustomizationTab::UI_CustomizationTab_C::get_IconImage() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x298);
}
void _Game_Interface_Customization_Cosmetics_UI_CustomizationTab::UI_CustomizationTab_C::set_Retracted(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2a0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2a0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Interface_Customization_Cosmetics_UI_CustomizationTab::UI_CustomizationTab_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/Customization/Cosmetics/UI_CustomizationTab.UI_CustomizationTab_C");
    return result;
}
void _Game_Interface_Customization_Cosmetics_UI_CustomizationTab::UI_CustomizationTab_C::BndEvt__UI_CustomizationTab_Button_27_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_CustomizationTab::UI_CustomizationTab_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_CustomizationTab::UI_CustomizationTab_C::BndEvt__UI_CustomizationTab_Button_27_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_CustomizationTab::UI_CustomizationTab_C::BndEvt__UI_CustomizationTab_Button_27_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_CustomizationTab::UI_CustomizationTab_C::Animate(bool Retract_) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_CustomizationTab::UI_CustomizationTab_C::ExecuteUbergraph_UI_CustomizationTab(int32_t EntryPoint) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_CustomizationTab::UI_CustomizationTab_C::TabReleased__DelegateSignature() {
    return;
}
