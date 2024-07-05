#include "..\FUObjectArray.hpp"
#include "..\_Game_Interface_Content_UI_N_RadialProgressBar\UI_N_RadialProgressBar_C.hpp"
#include "UI_CrosshairComponent_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_UMG\Border.hpp"
#include "..\_Script_UMG\ProgressBar.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void _Game_Interface_HUDComponents_UI_CrosshairComponent::UI_CrosshairComponent_C::set_IsRadialRecharging(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x290 + 0);
    *(uint8_t*)((uintptr_t)this + 0x290 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Interface_HUDComponents_UI_CrosshairComponent::UI_CrosshairComponent_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_HUDComponents_UI_CrosshairComponent::UI_CrosshairComponent_C::get_HitMarker() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
_Game_Interface_Content_UI_N_RadialProgressBar::UI_N_RadialProgressBar_C*& _Game_Interface_HUDComponents_UI_CrosshairComponent::UI_CrosshairComponent_C::get_RadialBar() {
    return *(_Game_Interface_Content_UI_N_RadialProgressBar::UI_N_RadialProgressBar_C**)((uintptr_t)this + 0x288);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_HUDComponents_UI_CrosshairComponent::UI_CrosshairComponent_C::get_Attack() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x270);
}
_Script_UMG::Border*& _Game_Interface_HUDComponents_UI_CrosshairComponent::UI_CrosshairComponent_C::get_Center() {
    return *(_Script_UMG::Border**)((uintptr_t)this + 0x278);
}
_Script_UMG::ProgressBar*& _Game_Interface_HUDComponents_UI_CrosshairComponent::UI_CrosshairComponent_C::get_LockerOpenProgress() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x280);
}
bool _Game_Interface_HUDComponents_UI_CrosshairComponent::UI_CrosshairComponent_C::get_IsRadialRecharging() {
    return (*(uint8_t*)((uintptr_t)this + 0x290 + 0)) & 1 != 0;
}
float& _Game_Interface_HUDComponents_UI_CrosshairComponent::UI_CrosshairComponent_C::get_RadialRechargeTime() {
    return *(float*)((uintptr_t)this + 0x294);
}
_Script_CoreUObject::Class* _Game_Interface_HUDComponents_UI_CrosshairComponent::UI_CrosshairComponent_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/HUDComponents/UI_CrosshairComponent.UI_CrosshairComponent_C");
    return result;
}
void _Game_Interface_HUDComponents_UI_CrosshairComponent::UI_CrosshairComponent_C::SetLockerOpenVisibility(bool Visible_) {
    return;
}
void _Game_Interface_HUDComponents_UI_CrosshairComponent::UI_CrosshairComponent_C::SetLockerOpenPercent(int32_t Hits) {
    return;
}
void _Game_Interface_HUDComponents_UI_CrosshairComponent::UI_CrosshairComponent_C::ResetRadialRecharge() {
    return;
}
void _Game_Interface_HUDComponents_UI_CrosshairComponent::UI_CrosshairComponent_C::ExecuteUbergraph_UI_CrosshairComponent(int32_t EntryPoint) {
    return;
}
void _Game_Interface_HUDComponents_UI_CrosshairComponent::UI_CrosshairComponent_C::RadialRecharge(float Time) {
    return;
}
void _Game_Interface_HUDComponents_UI_CrosshairComponent::UI_CrosshairComponent_C::SetCrosshairProgress(float Progress) {
    return;
}
void _Game_Interface_HUDComponents_UI_CrosshairComponent::UI_CrosshairComponent_C::PlayHitmarker(float Duration) {
    return;
}
void _Game_Interface_HUDComponents_UI_CrosshairComponent::UI_CrosshairComponent_C::ColorCrosshairRed() {
    return;
}
void _Game_Interface_HUDComponents_UI_CrosshairComponent::UI_CrosshairComponent_C::ColorCrosshairWhite() {
    return;
}
void _Game_Interface_HUDComponents_UI_CrosshairComponent::UI_CrosshairComponent_C::SetCrosshairColor(_Script_CoreUObject::LinearColor Color) {
    return;
}
void _Game_Interface_HUDComponents_UI_CrosshairComponent::UI_CrosshairComponent_C::PlayAttackAnimation(float Duration) {
    return;
}
void _Game_Interface_HUDComponents_UI_CrosshairComponent::UI_CrosshairComponent_C::Tick0(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime) {
    return;
}
