#include "..\FUObjectArray.hpp"
#include "UI_IntSlider_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Slider.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
_Script_CoreUObject::Class* _Game_Interface_General_UI_IntSlider::UI_IntSlider_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/General/UI_IntSlider.UI_IntSlider_C");
    return result;
}
void* _Game_Interface_General_UI_IntSlider::UI_IntSlider_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
int32_t& _Game_Interface_General_UI_IntSlider::UI_IntSlider_C::get_Min() {
    return *(int32_t*)((uintptr_t)this + 0x280);
}
_Script_UMG::Slider*& _Game_Interface_General_UI_IntSlider::UI_IntSlider_C::get_Slider_65() {
    return *(_Script_UMG::Slider**)((uintptr_t)this + 0x268);
}
void* _Game_Interface_General_UI_IntSlider::UI_IntSlider_C::get_ValueChanged() {
    return (void*)((uintptr_t)this + 0x270);
}
int32_t& _Game_Interface_General_UI_IntSlider::UI_IntSlider_C::get_Value() {
    return *(int32_t*)((uintptr_t)this + 0x288);
}
int32_t& _Game_Interface_General_UI_IntSlider::UI_IntSlider_C::get_Max() {
    return *(int32_t*)((uintptr_t)this + 0x284);
}
void _Game_Interface_General_UI_IntSlider::UI_IntSlider_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_General_UI_IntSlider::UI_IntSlider_C::BndEvt__UI_Slider_Slider_65_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value) {
    return;
}
void _Game_Interface_General_UI_IntSlider::UI_IntSlider_C::SetValue(int32_t Value) {
    return;
}
void _Game_Interface_General_UI_IntSlider::UI_IntSlider_C::SetMax(int32_t Max) {
    return;
}
void _Game_Interface_General_UI_IntSlider::UI_IntSlider_C::SetMin(int32_t Min) {
    return;
}
void _Game_Interface_General_UI_IntSlider::UI_IntSlider_C::ExecuteUbergraph_UI_IntSlider(int32_t EntryPoint) {
    return;
}
void _Game_Interface_General_UI_IntSlider::UI_IntSlider_C::ValueChanged__DelegateSignature(int32_t Value) {
    return;
}
