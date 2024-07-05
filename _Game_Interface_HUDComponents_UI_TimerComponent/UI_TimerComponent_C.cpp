#include "..\FUObjectArray.hpp"
#include "UI_TimerComponent_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
_Script_UMG::Image*& _Game_Interface_HUDComponents_UI_TimerComponent::UI_TimerComponent_C::get_TimerIcon() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x288);
}
void* _Game_Interface_HUDComponents_UI_TimerComponent::UI_TimerComponent_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_HUDComponents_UI_TimerComponent::UI_TimerComponent_C::get_TimerDangerColor() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_HUDComponents_UI_TimerComponent::UI_TimerComponent_C::get_TimerWarningColor() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x270);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_HUDComponents_UI_TimerComponent::UI_TimerComponent_C::get_ResetTimerColorAndSize() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x278);
}
_Script_UMG::TextBlock*& _Game_Interface_HUDComponents_UI_TimerComponent::UI_TimerComponent_C::get_Timer() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x280);
}
_Script_CoreUObject::Class* _Game_Interface_HUDComponents_UI_TimerComponent::UI_TimerComponent_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/HUDComponents/UI_TimerComponent.UI_TimerComponent_C");
    return result;
}
void _Game_Interface_HUDComponents_UI_TimerComponent::UI_TimerComponent_C::Tick0(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime) {
    return;
}
void _Game_Interface_HUDComponents_UI_TimerComponent::UI_TimerComponent_C::ExecuteUbergraph_UI_TimerComponent(int32_t EntryPoint) {
    return;
}
