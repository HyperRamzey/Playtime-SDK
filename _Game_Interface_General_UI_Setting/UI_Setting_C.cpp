#include "..\FUObjectArray.hpp"
#include "..\_Game_Interface_General_UI_BasicButton\UI_BasicButton_C.hpp"
#include "UI_Setting_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\CanvasPanel.hpp"
#include "..\_Script_UMG\CheckBox.hpp"
#include "..\_Script_UMG\ComboBoxString.hpp"
#include "..\_Script_UMG\HorizontalBox.hpp"
#include "..\_Script_UMG\Slider.hpp"
#include "..\_Script_UMG\Spacer.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetSwitcher.hpp"
bool _Game_Interface_General_UI_Setting::UI_Setting_C::get_RequiresApply() {
    return (*(uint8_t*)((uintptr_t)this + 0x320 + 0)) & 1 != 0;
}
_Script_UMG::TextBlock*& _Game_Interface_General_UI_Setting::UI_Setting_C::get_Name() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x298);
}
void* _Game_Interface_General_UI_Setting::UI_Setting_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::CheckBox*& _Game_Interface_General_UI_Setting::UI_Setting_C::get_CheckBox_125() {
    return *(_Script_UMG::CheckBox**)((uintptr_t)this + 0x268);
}
_Script_UMG::CanvasPanel*& _Game_Interface_General_UI_Setting::UI_Setting_C::get_Label() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x280);
}
_Script_UMG::ComboBoxString*& _Game_Interface_General_UI_Setting::UI_Setting_C::get_ComboBox() {
    return *(_Script_UMG::ComboBoxString**)((uintptr_t)this + 0x270);
}
_Game_Interface_General_UI_BasicButton::UI_BasicButton_C*& _Game_Interface_General_UI_Setting::UI_Setting_C::get_High() {
    return *(_Game_Interface_General_UI_BasicButton::UI_BasicButton_C**)((uintptr_t)this + 0x278);
}
_Game_Interface_General_UI_BasicButton::UI_BasicButton_C*& _Game_Interface_General_UI_Setting::UI_Setting_C::get_Low() {
    return *(_Game_Interface_General_UI_BasicButton::UI_BasicButton_C**)((uintptr_t)this + 0x288);
}
_Game_Interface_General_UI_BasicButton::UI_BasicButton_C*& _Game_Interface_General_UI_Setting::UI_Setting_C::get_Medium() {
    return *(_Game_Interface_General_UI_BasicButton::UI_BasicButton_C**)((uintptr_t)this + 0x290);
}
_Script_UMG::HorizontalBox*& _Game_Interface_General_UI_Setting::UI_Setting_C::get_Quality() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x2a0);
}
void _Game_Interface_General_UI_Setting::UI_Setting_C::Update_Localization() {
    return;
}
_Script_UMG::WidgetSwitcher*& _Game_Interface_General_UI_Setting::UI_Setting_C::get_Selector() {
    return *(_Script_UMG::WidgetSwitcher**)((uintptr_t)this + 0x2a8);
}
_Script_UMG::HorizontalBox*& _Game_Interface_General_UI_Setting::UI_Setting_C::get_Slider() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x2b0);
}
_Script_UMG::Slider*& _Game_Interface_General_UI_Setting::UI_Setting_C::get_Slider_85() {
    return *(_Script_UMG::Slider**)((uintptr_t)this + 0x2b8);
}
_Script_UMG::TextBlock*& _Game_Interface_General_UI_Setting::UI_Setting_C::get_SliderValue() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2c0);
}
_Script_UMG::Spacer*& _Game_Interface_General_UI_Setting::UI_Setting_C::get_Spacer_130() {
    return *(_Script_UMG::Spacer**)((uintptr_t)this + 0x2c8);
}
void* _Game_Interface_General_UI_Setting::UI_Setting_C::get_SettingName() {
    return (void*)((uintptr_t)this + 0x2d0);
}
void _Game_Interface_General_UI_Setting::UI_Setting_C::set_RequiresApply(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x320 + 0);
    *(uint8_t*)((uintptr_t)this + 0x320 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Interface_General_UI_Setting::UI_Setting_C::get_SettingType() {
    return (void*)((uintptr_t)this + 0x2e8);
}
void* _Game_Interface_General_UI_Setting::UI_Setting_C::get_ValueChanged() {
    return (void*)((uintptr_t)this + 0x2f0);
}
float& _Game_Interface_General_UI_Setting::UI_Setting_C::get_MinSliderValue() {
    return *(float*)((uintptr_t)this + 0x300);
}
float& _Game_Interface_General_UI_Setting::UI_Setting_C::get_MaxSliderValue() {
    return *(float*)((uintptr_t)this + 0x304);
}
void* _Game_Interface_General_UI_Setting::UI_Setting_C::get_ComboBoxOptions() {
    return (void*)((uintptr_t)this + 0x308);
}
int32_t& _Game_Interface_General_UI_Setting::UI_Setting_C::get_DefaultSelectedOption() {
    return *(int32_t*)((uintptr_t)this + 0x318);
}
int32_t& _Game_Interface_General_UI_Setting::UI_Setting_C::get_TabLevel() {
    return *(int32_t*)((uintptr_t)this + 0x31c);
}
_Script_CoreUObject::Class* _Game_Interface_General_UI_Setting::UI_Setting_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/General/UI_Setting.UI_Setting_C");
    return result;
}
void _Game_Interface_General_UI_Setting::UI_Setting_C::SetComboBoxOptions_(void*& ComboBoxOptions) {
    return;
}
void _Game_Interface_General_UI_Setting::UI_Setting_C::SetSliderValue(float InValue) {
    return;
}
void _Game_Interface_General_UI_Setting::UI_Setting_C::SetSliderValueRaw(float Value_[0_1]) {
    return;
}
void _Game_Interface_General_UI_Setting::UI_Setting_C::BndEvt__UI_Setting_Slider_85_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value) {
    return;
}
void _Game_Interface_General_UI_Setting::UI_Setting_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_General_UI_Setting::UI_Setting_C::BndEvt__UI_Setting_CheckBox_125_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked) {
    return;
}
void _Game_Interface_General_UI_Setting::UI_Setting_C::BndEvt__UI_Setting_ComboBox_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(void* SelectedItem, void* SelectionType) {
    return;
}
void _Game_Interface_General_UI_Setting::UI_Setting_C::Construct0() {
    return;
}
void _Game_Interface_General_UI_Setting::UI_Setting_C::ExecuteUbergraph_UI_Setting(int32_t EntryPoint) {
    return;
}
void _Game_Interface_General_UI_Setting::UI_Setting_C::ValueChanged__DelegateSignature(float Slider, int32_t IntValue, bool CheckBox, bool RequiresApply) {
    return;
}
