#include "..\FUObjectArray.hpp"
#include "..\_Game_Interface_General_UI_IntSlider\UI_IntSlider_C.hpp"
#include "UI_IntSliderSetting_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\EditableText.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\Spacer.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
int32_t& _Game_Interface_Settings_UI_IntSliderSetting::UI_IntSliderSetting_C::get_Max() {
    return *(int32_t*)((uintptr_t)this + 0x2a8);
}
void* _Game_Interface_Settings_UI_IntSliderSetting::UI_IntSliderSetting_C::get_Label() {
    return (void*)((uintptr_t)this + 0x290);
}
void _Game_Interface_Settings_UI_IntSliderSetting::UI_IntSliderSetting_C::ExecuteUbergraph_UI_IntSliderSetting(int32_t EntryPoint) {
    return;
}
void* _Game_Interface_Settings_UI_IntSliderSetting::UI_IntSliderSetting_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::EditableText*& _Game_Interface_Settings_UI_IntSliderSetting::UI_IntSliderSetting_C::get_EditableText_175() {
    return *(_Script_UMG::EditableText**)((uintptr_t)this + 0x268);
}
_Script_UMG::Image*& _Game_Interface_Settings_UI_IntSliderSetting::UI_IntSliderSetting_C::get_Image_119() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x270);
}
_Game_Interface_General_UI_IntSlider::UI_IntSlider_C*& _Game_Interface_Settings_UI_IntSliderSetting::UI_IntSliderSetting_C::get_UI_IntSlider() {
    return *(_Game_Interface_General_UI_IntSlider::UI_IntSlider_C**)((uintptr_t)this + 0x288);
}
_Script_UMG::Spacer*& _Game_Interface_Settings_UI_IntSliderSetting::UI_IntSliderSetting_C::get_Spacer_96() {
    return *(_Script_UMG::Spacer**)((uintptr_t)this + 0x278);
}
_Script_UMG::TextBlock*& _Game_Interface_Settings_UI_IntSliderSetting::UI_IntSliderSetting_C::get_TextBlock_133() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x280);
}
int32_t& _Game_Interface_Settings_UI_IntSliderSetting::UI_IntSliderSetting_C::get_Min() {
    return *(int32_t*)((uintptr_t)this + 0x2ac);
}
int32_t& _Game_Interface_Settings_UI_IntSliderSetting::UI_IntSliderSetting_C::get_Value() {
    return *(int32_t*)((uintptr_t)this + 0x2b0);
}
void _Game_Interface_Settings_UI_IntSliderSetting::UI_IntSliderSetting_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void* _Game_Interface_Settings_UI_IntSliderSetting::UI_IntSliderSetting_C::get_ValueChanged() {
    return (void*)((uintptr_t)this + 0x2b8);
}
int32_t& _Game_Interface_Settings_UI_IntSliderSetting::UI_IntSliderSetting_C::get_TabLevel() {
    return *(int32_t*)((uintptr_t)this + 0x2c8);
}
_Script_CoreUObject::Class* _Game_Interface_Settings_UI_IntSliderSetting::UI_IntSliderSetting_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/Settings/UI_IntSliderSetting.UI_IntSliderSetting_C");
    return result;
}
void _Game_Interface_Settings_UI_IntSliderSetting::UI_IntSliderSetting_C::Update_Localization() {
    return;
}
void _Game_Interface_Settings_UI_IntSliderSetting::UI_IntSliderSetting_C::SetLabel(void* Label) {
    return;
}
void _Game_Interface_Settings_UI_IntSliderSetting::UI_IntSliderSetting_C::UpdateVisuals() {
    return;
}
void _Game_Interface_Settings_UI_IntSliderSetting::UI_IntSliderSetting_C::BndEvt__UI_IntSliderSetting_UI_IntSlider_K2Node_ComponentBoundEvent_0_ValueChanged__DelegateSignature(int32_t Value) {
    return;
}
void _Game_Interface_Settings_UI_IntSliderSetting::UI_IntSliderSetting_C::SetValue(int32_t Value) {
    return;
}
void _Game_Interface_Settings_UI_IntSliderSetting::UI_IntSliderSetting_C::BndEvt__UI_IntSliderSetting_EditableText_175_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature(void*& Text, void* CommitMethod) {
    return;
}
void _Game_Interface_Settings_UI_IntSliderSetting::UI_IntSliderSetting_C::Construct0() {
    return;
}
void _Game_Interface_Settings_UI_IntSliderSetting::UI_IntSliderSetting_C::ValueChanged__DelegateSignature(int32_t Value) {
    return;
}
