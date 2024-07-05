#include "..\FUObjectArray.hpp"
#include "..\_Game_Interface_Content_UI_N_RadialProgressBar\UI_N_RadialProgressBar_C.hpp"
#include "UI_Comms_C.hpp"
#include "..\_Game_Interface_HUDComponents_Comms_UI_CommsSlot\UI_CommsSlot_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
_Script_UMG::Image*& _Game_Interface_HUDComponents_Comms_UI_Comms::UI_Comms_C::get_Image_33() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x298);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_HUDComponents_Comms_UI_Comms::UI_Comms_C::get_Disable() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x270);
}
void* _Game_Interface_HUDComponents_Comms_UI_Comms::UI_Comms_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_HUDComponents_Comms_UI_Comms::UI_Comms_C::get_Timeout() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
_Game_Interface_HUDComponents_Comms_UI_CommsSlot::UI_CommsSlot_C*& _Game_Interface_HUDComponents_Comms_UI_Comms::UI_Comms_C::get_HelpComm() {
    return *(_Game_Interface_HUDComponents_Comms_UI_CommsSlot::UI_CommsSlot_C**)((uintptr_t)this + 0x290);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_HUDComponents_Comms_UI_Comms::UI_Comms_C::get_Open() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x278);
}
_Script_UMG::Button*& _Game_Interface_HUDComponents_Comms_UI_Comms::UI_Comms_C::get_Button_90() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x280);
}
_Game_Interface_HUDComponents_Comms_UI_CommsSlot::UI_CommsSlot_C*& _Game_Interface_HUDComponents_Comms_UI_Comms::UI_Comms_C::get_CautionComm() {
    return *(_Game_Interface_HUDComponents_Comms_UI_CommsSlot::UI_CommsSlot_C**)((uintptr_t)this + 0x288);
}
_Script_UMG::Image*& _Game_Interface_HUDComponents_Comms_UI_Comms::UI_Comms_C::get_Image_156() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2a0);
}
_Game_Interface_HUDComponents_Comms_UI_CommsSlot::UI_CommsSlot_C*& _Game_Interface_HUDComponents_Comms_UI_Comms::UI_Comms_C::get_NoComm() {
    return *(_Game_Interface_HUDComponents_Comms_UI_CommsSlot::UI_CommsSlot_C**)((uintptr_t)this + 0x2a8);
}
void _Game_Interface_HUDComponents_Comms_UI_Comms::UI_Comms_C::PreConstruct0(bool IsDesignTime) {
    return;
}
_Game_Interface_HUDComponents_Comms_UI_CommsSlot::UI_CommsSlot_C*& _Game_Interface_HUDComponents_Comms_UI_Comms::UI_Comms_C::get_RegroupComm() {
    return *(_Game_Interface_HUDComponents_Comms_UI_CommsSlot::UI_CommsSlot_C**)((uintptr_t)this + 0x2b0);
}
_Game_Interface_Content_UI_N_RadialProgressBar::UI_N_RadialProgressBar_C*& _Game_Interface_HUDComponents_Comms_UI_Comms::UI_Comms_C::get_UI_N_RadialProgressBar() {
    return *(_Game_Interface_Content_UI_N_RadialProgressBar::UI_N_RadialProgressBar_C**)((uintptr_t)this + 0x2b8);
}
_Game_Interface_HUDComponents_Comms_UI_CommsSlot::UI_CommsSlot_C*& _Game_Interface_HUDComponents_Comms_UI_Comms::UI_Comms_C::get_YesComm() {
    return *(_Game_Interface_HUDComponents_Comms_UI_CommsSlot::UI_CommsSlot_C**)((uintptr_t)this + 0x2c0);
}
void* _Game_Interface_HUDComponents_Comms_UI_Comms::UI_Comms_C::get_AutoHideTimer() {
    return (void*)((uintptr_t)this + 0x2c8);
}
void _Game_Interface_HUDComponents_Comms_UI_Comms::UI_Comms_C::Construct0() {
    return;
}
bool _Game_Interface_HUDComponents_Comms_UI_Comms::UI_Comms_C::get_isShowing() {
    return (*(uint8_t*)((uintptr_t)this + 0x2d0 + 0)) & 1 != 0;
}
void _Game_Interface_HUDComponents_Comms_UI_Comms::UI_Comms_C::set_isShowing(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2d0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2d0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Interface_HUDComponents_Comms_UI_Comms::UI_Comms_C::get_bIsDisabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x2d1 + 0)) & 1 != 0;
}
void _Game_Interface_HUDComponents_Comms_UI_Comms::UI_Comms_C::set_bIsDisabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2d1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2d1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Interface_HUDComponents_Comms_UI_Comms::UI_Comms_C::get_DisableTimer() {
    return (void*)((uintptr_t)this + 0x2d8);
}
void* _Game_Interface_HUDComponents_Comms_UI_Comms::UI_Comms_C::get_Slots() {
    return (void*)((uintptr_t)this + 0x2e0);
}
int32_t& _Game_Interface_HUDComponents_Comms_UI_Comms::UI_Comms_C::get_Selected() {
    return *(int32_t*)((uintptr_t)this + 0x2f0);
}
void* _Game_Interface_HUDComponents_Comms_UI_Comms::UI_Comms_C::get_FiredComm() {
    return (void*)((uintptr_t)this + 0x2f8);
}
_Script_CoreUObject::Class* _Game_Interface_HUDComponents_Comms_UI_Comms::UI_Comms_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/HUDComponents/Comms/UI_Comms.UI_Comms_C");
    return result;
}
void _Game_Interface_HUDComponents_Comms_UI_Comms::UI_Comms_C::DisableComms() {
    return;
}
void _Game_Interface_HUDComponents_Comms_UI_Comms::UI_Comms_C::EnableComms() {
    return;
}
void _Game_Interface_HUDComponents_Comms_UI_Comms::UI_Comms_C::SetSelected(int32_t Selected) {
    return;
}
void _Game_Interface_HUDComponents_Comms_UI_Comms::UI_Comms_C::Tick0(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime) {
    return;
}
void _Game_Interface_HUDComponents_Comms_UI_Comms::UI_Comms_C::BndEvt__UI_EmoteHolder_Button_90_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_HUDComponents_Comms_UI_Comms::UI_Comms_C::HideComms() {
    return;
}
void _Game_Interface_HUDComponents_Comms_UI_Comms::UI_Comms_C::ShowComms() {
    return;
}
void _Game_Interface_HUDComponents_Comms_UI_Comms::UI_Comms_C::ExecuteUbergraph_UI_Comms(int32_t EntryPoint) {
    return;
}
void _Game_Interface_HUDComponents_Comms_UI_Comms::UI_Comms_C::FiredComm__DelegateSignature(int32_t Comm) {
    return;
}
