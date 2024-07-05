#include "..\FUObjectArray.hpp"
#include "UI_BasicButton_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Texture2D.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\SizeBox.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void* _Game_Interface_General_UI_BasicButton::UI_BasicButton_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
void* _Game_Interface_General_UI_BasicButton::UI_BasicButton_C::get_OnReleased() {
    return (void*)((uintptr_t)this + 0x2a0);
}
_Script_UMG::Image*& _Game_Interface_General_UI_BasicButton::UI_BasicButton_C::get_Background() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x268);
}
_Script_UMG::Button*& _Game_Interface_General_UI_BasicButton::UI_BasicButton_C::get_Button_509() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x270);
}
_Script_UMG::SizeBox*& _Game_Interface_General_UI_BasicButton::UI_BasicButton_C::get_SizeBox() {
    return *(_Script_UMG::SizeBox**)((uintptr_t)this + 0x288);
}
_Script_UMG::Image*& _Game_Interface_General_UI_BasicButton::UI_BasicButton_C::get_Frame() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x278);
}
_Script_UMG::TextBlock*& _Game_Interface_General_UI_BasicButton::UI_BasicButton_C::get_Label() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x280);
}
void* _Game_Interface_General_UI_BasicButton::UI_BasicButton_C::get_OnPressed() {
    return (void*)((uintptr_t)this + 0x290);
}
void _Game_Interface_General_UI_BasicButton::UI_BasicButton_C::BndEvt__UI_BasicButton_Button_509_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void* _Game_Interface_General_UI_BasicButton::UI_BasicButton_C::get_OnHovered() {
    return (void*)((uintptr_t)this + 0x2b0);
}
void* _Game_Interface_General_UI_BasicButton::UI_BasicButton_C::get_OnUnhovered() {
    return (void*)((uintptr_t)this + 0x2c0);
}
bool _Game_Interface_General_UI_BasicButton::UI_BasicButton_C::get_BeginActivated() {
    return (*(uint8_t*)((uintptr_t)this + 0x2d0 + 0)) & 1 != 0;
}
void _Game_Interface_General_UI_BasicButton::UI_BasicButton_C::BndEvt__UI_BasicButton_Button_509_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_Interface_General_UI_BasicButton::UI_BasicButton_C::set_BeginActivated(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2d0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2d0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Interface_General_UI_BasicButton::UI_BasicButton_C::get_ButtonWidth() {
    return *(float*)((uintptr_t)this + 0x2f0);
}
void* _Game_Interface_General_UI_BasicButton::UI_BasicButton_C::get_ButtonText() {
    return (void*)((uintptr_t)this + 0x2d8);
}
float& _Game_Interface_General_UI_BasicButton::UI_BasicButton_C::get_ButtonHeight() {
    return *(float*)((uintptr_t)this + 0x2f4);
}
_Script_Engine::Texture2D*& _Game_Interface_General_UI_BasicButton::UI_BasicButton_C::get_ActiveTexture() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x2f8);
}
_Script_Engine::Texture2D*& _Game_Interface_General_UI_BasicButton::UI_BasicButton_C::get_InactiveTexture() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x300);
}
void _Game_Interface_General_UI_BasicButton::UI_BasicButton_C::PreConstruct0(bool IsDesignTime) {
    return;
}
_Script_CoreUObject::Class* _Game_Interface_General_UI_BasicButton::UI_BasicButton_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/General/UI_BasicButton.UI_BasicButton_C");
    return result;
}
void _Game_Interface_General_UI_BasicButton::UI_BasicButton_C::ActivateButton() {
    return;
}
void _Game_Interface_General_UI_BasicButton::UI_BasicButton_C::DeactivateButton() {
    return;
}
void _Game_Interface_General_UI_BasicButton::UI_BasicButton_C::BndEvt__UI_BasicButton_Button_509_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_General_UI_BasicButton::UI_BasicButton_C::UpdateLabel(void* InText) {
    return;
}
void _Game_Interface_General_UI_BasicButton::UI_BasicButton_C::ExecuteUbergraph_UI_BasicButton(int32_t EntryPoint) {
    return;
}
void _Game_Interface_General_UI_BasicButton::UI_BasicButton_C::OnUnhovered__DelegateSignature() {
    return;
}
void _Game_Interface_General_UI_BasicButton::UI_BasicButton_C::OnHovered__DelegateSignature() {
    return;
}
void _Game_Interface_General_UI_BasicButton::UI_BasicButton_C::OnReleased__DelegateSignature() {
    return;
}
void _Game_Interface_General_UI_BasicButton::UI_BasicButton_C::OnPressed__DelegateSignature() {
    return;
}
