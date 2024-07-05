#include "..\FUObjectArray.hpp"
#include "..\_Game_Interface_Shoppy_UI_Shoppy\UI_Shoppy_C.hpp"
#include "UI_Shoppy_Button_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Texture2D.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\Overlay.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
_Script_UMG::TextBlock*& _Game_Interface_Shoppy_UI_Shoppy_Button::UI_Shoppy_Button_C::get_Text() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x298);
}
void* _Game_Interface_Shoppy_UI_Shoppy_Button::UI_Shoppy_Button_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::Button*& _Game_Interface_Shoppy_UI_Shoppy_Button::UI_Shoppy_Button_C::get_ShoppyButton() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x290);
}
void _Game_Interface_Shoppy_UI_Shoppy_Button::UI_Shoppy_Button_C::BndEvt__UI_Shoppy_Button_Button_54_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Shoppy_UI_Shoppy_Button::UI_Shoppy_Button_C::set_EventButton(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_UMG::Image*& _Game_Interface_Shoppy_UI_Shoppy_Button::UI_Shoppy_Button_C::get_Border() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x278);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_Shoppy_UI_Shoppy_Button::UI_Shoppy_Button_C::get_Hover() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
_Script_UMG::Image*& _Game_Interface_Shoppy_UI_Shoppy_Button::UI_Shoppy_Button_C::get_BG_Image() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x270);
}
_Script_UMG::Image*& _Game_Interface_Shoppy_UI_Shoppy_Button::UI_Shoppy_Button_C::get_Lock() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x280);
}
void _Game_Interface_Shoppy_UI_Shoppy_Button::UI_Shoppy_Button_C::SetActive(bool Condition) {
    return;
}
_Script_UMG::Overlay*& _Game_Interface_Shoppy_UI_Shoppy_Button::UI_Shoppy_Button_C::get_Overlay_0() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x288);
}
int32_t& _Game_Interface_Shoppy_UI_Shoppy_Button::UI_Shoppy_Button_C::get_Size() {
    return *(int32_t*)((uintptr_t)this + 0x2a0);
}
bool _Game_Interface_Shoppy_UI_Shoppy_Button::UI_Shoppy_Button_C::get_DisableButton() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e0 + 0)) & 1 != 0;
}
void* _Game_Interface_Shoppy_UI_Shoppy_Button::UI_Shoppy_Button_C::get_Label() {
    return (void*)((uintptr_t)this + 0x2a8);
}
void* _Game_Interface_Shoppy_UI_Shoppy_Button::UI_Shoppy_Button_C::get_DisplayName() {
    return (void*)((uintptr_t)this + 0x2c0);
}
bool _Game_Interface_Shoppy_UI_Shoppy_Button::UI_Shoppy_Button_C::get_EventButton() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e1 + 0)) & 1 != 0;
}
_Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C*& _Game_Interface_Shoppy_UI_Shoppy_Button::UI_Shoppy_Button_C::get_Parent() {
    return *(_Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C**)((uintptr_t)this + 0x2d8);
}
void _Game_Interface_Shoppy_UI_Shoppy_Button::UI_Shoppy_Button_C::set_DisableButton(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::Texture2D*& _Game_Interface_Shoppy_UI_Shoppy_Button::UI_Shoppy_Button_C::get_Alt_Texture_Icon() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x2e8);
}
bool _Game_Interface_Shoppy_UI_Shoppy_Button::UI_Shoppy_Button_C::get_IsActive() {
    return (*(uint8_t*)((uintptr_t)this + 0x2f0 + 0)) & 1 != 0;
}
void _Game_Interface_Shoppy_UI_Shoppy_Button::UI_Shoppy_Button_C::set_IsActive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2f0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2f0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Interface_Shoppy_UI_Shoppy_Button::UI_Shoppy_Button_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/Shoppy/UI_Shoppy_Button.UI_Shoppy_Button_C");
    return result;
}
void _Game_Interface_Shoppy_UI_Shoppy_Button::UI_Shoppy_Button_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_Shoppy_UI_Shoppy_Button::UI_Shoppy_Button_C::BndEvt__UI_Shoppy_Button_Button_54_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Shoppy_UI_Shoppy_Button::UI_Shoppy_Button_C::BndEvt__UI_Shoppy_Button_Button_54_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Shoppy_UI_Shoppy_Button::UI_Shoppy_Button_C::ExecuteUbergraph_UI_Shoppy_Button(int32_t EntryPoint) {
    return;
}
