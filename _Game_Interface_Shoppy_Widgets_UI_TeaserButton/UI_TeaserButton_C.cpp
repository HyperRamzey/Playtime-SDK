#include "..\FUObjectArray.hpp"
#include "UI_TeaserButton_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\MaterialInstanceDynamic.hpp"
#include "..\_Script_UMG\Border.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
_Script_Engine::MaterialInstanceDynamic*& _Game_Interface_Shoppy_Widgets_UI_TeaserButton::UI_TeaserButton_C::get_BackgroundMaterial() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x2a0);
}
void* _Game_Interface_Shoppy_Widgets_UI_TeaserButton::UI_TeaserButton_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::Image*& _Game_Interface_Shoppy_Widgets_UI_TeaserButton::UI_TeaserButton_C::get_Frame() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x280);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_Shoppy_Widgets_UI_TeaserButton::UI_TeaserButton_C::get_HighlightFrame() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
_Script_UMG::Image*& _Game_Interface_Shoppy_Widgets_UI_TeaserButton::UI_TeaserButton_C::get_Background() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x270);
}
_Script_UMG::Border*& _Game_Interface_Shoppy_Widgets_UI_TeaserButton::UI_TeaserButton_C::get_Border_59() {
    return *(_Script_UMG::Border**)((uintptr_t)this + 0x278);
}
_Script_UMG::Button*& _Game_Interface_Shoppy_Widgets_UI_TeaserButton::UI_TeaserButton_C::get_TeaserButton() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x288);
}
void* _Game_Interface_Shoppy_Widgets_UI_TeaserButton::UI_TeaserButton_C::get_TeaserButtonPressed() {
    return (void*)((uintptr_t)this + 0x290);
}
_Script_CoreUObject::Class* _Game_Interface_Shoppy_Widgets_UI_TeaserButton::UI_TeaserButton_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/Shoppy/Widgets/UI_TeaserButton.UI_TeaserButton_C");
    return result;
}
void _Game_Interface_Shoppy_Widgets_UI_TeaserButton::UI_TeaserButton_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_TeaserButton::UI_TeaserButton_C::BndEvt__UI_TeaserButton_TeaserButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_TeaserButton::UI_TeaserButton_C::BndEvt__UI_TeaserButton_TeaserButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_TeaserButton::UI_TeaserButton_C::BndEvt__UI_TeaserButton_TeaserButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_TeaserButton::UI_TeaserButton_C::ExecuteUbergraph_UI_TeaserButton(int32_t EntryPoint) {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_TeaserButton::UI_TeaserButton_C::TeaserButtonPressed__DelegateSignature() {
    return;
}
