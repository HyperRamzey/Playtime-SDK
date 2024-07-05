#include "..\FUObjectArray.hpp"
#include "UI_FloatSlider_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Slider.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
float& _Game_Interface_General_UI_FloatSlider::UI_FloatSlider_C::get_Value() {
    return *(float*)((uintptr_t)this + 0x288);
}
float& _Game_Interface_General_UI_FloatSlider::UI_FloatSlider_C::get_Max() {
    return *(float*)((uintptr_t)this + 0x284);
}
_Script_UMG::Slider*& _Game_Interface_General_UI_FloatSlider::UI_FloatSlider_C::get_Slider_65() {
    return *(_Script_UMG::Slider**)((uintptr_t)this + 0x268);
}
void* _Game_Interface_General_UI_FloatSlider::UI_FloatSlider_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
void _Game_Interface_General_UI_FloatSlider::UI_FloatSlider_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void* _Game_Interface_General_UI_FloatSlider::UI_FloatSlider_C::get_ValueChanged() {
    return (void*)((uintptr_t)this + 0x270);
}
float& _Game_Interface_General_UI_FloatSlider::UI_FloatSlider_C::get_Min() {
    return *(float*)((uintptr_t)this + 0x280);
}
_Script_CoreUObject::Class* _Game_Interface_General_UI_FloatSlider::UI_FloatSlider_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/General/UI_FloatSlider.UI_FloatSlider_C");
    return result;
}
void _Game_Interface_General_UI_FloatSlider::UI_FloatSlider_C::BndEvt__UI_Slider_Slider_65_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value) {
    return;
}
void _Game_Interface_General_UI_FloatSlider::UI_FloatSlider_C::SetValue(float Value) {
    return;
}
void _Game_Interface_General_UI_FloatSlider::UI_FloatSlider_C::SetMin(float Min) {
    return;
}
void _Game_Interface_General_UI_FloatSlider::UI_FloatSlider_C::SetMax(float Max) {
    return;
}
void _Game_Interface_General_UI_FloatSlider::UI_FloatSlider_C::ExecuteUbergraph_UI_FloatSlider(int32_t EntryPoint) {
    return;
}
void _Game_Interface_General_UI_FloatSlider::UI_FloatSlider_C::ValueChanged__DelegateSignature(float Value) {
    return;
}
