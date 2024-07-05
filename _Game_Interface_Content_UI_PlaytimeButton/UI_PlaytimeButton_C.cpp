#include "..\FUObjectArray.hpp"
#include "UI_PlaytimeButton_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void _Game_Interface_Content_UI_PlaytimeButton::UI_PlaytimeButton_C::BndEvt__UI_PlaytimeButton_HollowButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
void* _Game_Interface_Content_UI_PlaytimeButton::UI_PlaytimeButton_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::Button*& _Game_Interface_Content_UI_PlaytimeButton::UI_PlaytimeButton_C::get_FullButton() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x268);
}
void* _Game_Interface_Content_UI_PlaytimeButton::UI_PlaytimeButton_C::get_Label() {
    return (void*)((uintptr_t)this + 0x298);
}
void* _Game_Interface_Content_UI_PlaytimeButton::UI_PlaytimeButton_C::get_Released() {
    return (void*)((uintptr_t)this + 0x288);
}
_Script_UMG::Button*& _Game_Interface_Content_UI_PlaytimeButton::UI_PlaytimeButton_C::get_HollowButton() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x270);
}
_Script_UMG::TextBlock*& _Game_Interface_Content_UI_PlaytimeButton::UI_PlaytimeButton_C::get_TextBlock_79() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x278);
}
void _Game_Interface_Content_UI_PlaytimeButton::UI_PlaytimeButton_C::set_Hollow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x280 + 0);
    *(uint8_t*)((uintptr_t)this + 0x280 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Interface_Content_UI_PlaytimeButton::UI_PlaytimeButton_C::get_Hollow() {
    return (*(uint8_t*)((uintptr_t)this + 0x280 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Game_Interface_Content_UI_PlaytimeButton::UI_PlaytimeButton_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/Content/UI_PlaytimeButton.UI_PlaytimeButton_C");
    return result;
}
void _Game_Interface_Content_UI_PlaytimeButton::UI_PlaytimeButton_C::ExecuteUbergraph_UI_PlaytimeButton(int32_t EntryPoint) {
    return;
}
void _Game_Interface_Content_UI_PlaytimeButton::UI_PlaytimeButton_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_Content_UI_PlaytimeButton::UI_PlaytimeButton_C::BndEvt__UI_PlaytimeButton_FullButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Content_UI_PlaytimeButton::UI_PlaytimeButton_C::Released__DelegateSignature() {
    return;
}
