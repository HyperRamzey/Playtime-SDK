#include "..\FUObjectArray.hpp"
#include "UI_AbilityComponent_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\ProgressBar.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void* _Game_Interface_HUDComponents_UI_AbilityComponent::UI_AbilityComponent_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::Image*& _Game_Interface_HUDComponents_UI_AbilityComponent::UI_AbilityComponent_C::get_AbilityOutline() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x280);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_HUDComponents_UI_AbilityComponent::UI_AbilityComponent_C::get_AbilityReady() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_HUDComponents_UI_AbilityComponent::UI_AbilityComponent_C::get_AbilityRefill() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x270);
}
_Script_UMG::TextBlock*& _Game_Interface_HUDComponents_UI_AbilityComponent::UI_AbilityComponent_C::get_Label() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x290);
}
float& _Game_Interface_HUDComponents_UI_AbilityComponent::UI_AbilityComponent_C::get_Minimum() {
    return *(float*)((uintptr_t)this + 0x298);
}
_Script_UMG::Image*& _Game_Interface_HUDComponents_UI_AbilityComponent::UI_AbilityComponent_C::get_AbilityIcon() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x278);
}
_Script_UMG::ProgressBar*& _Game_Interface_HUDComponents_UI_AbilityComponent::UI_AbilityComponent_C::get_AbilityProgressBar() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x288);
}
void _Game_Interface_HUDComponents_UI_AbilityComponent::UI_AbilityComponent_C::SetTextFillColorAndOpacity(float InOpacity) {
    return;
}
float& _Game_Interface_HUDComponents_UI_AbilityComponent::UI_AbilityComponent_C::get_Maximum() {
    return *(float*)((uintptr_t)this + 0x29c);
}
float& _Game_Interface_HUDComponents_UI_AbilityComponent::UI_AbilityComponent_C::get_Percent() {
    return *(float*)((uintptr_t)this + 0x2a0);
}
void* _Game_Interface_HUDComponents_UI_AbilityComponent::UI_AbilityComponent_C::get_Initial_Color() {
    return (void*)((uintptr_t)this + 0x2a4);
}
void _Game_Interface_HUDComponents_UI_AbilityComponent::UI_AbilityComponent_C::SetAbilityFillColorAndOpacity(float InOpacity) {
    return;
}
_Script_CoreUObject::Class* _Game_Interface_HUDComponents_UI_AbilityComponent::UI_AbilityComponent_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/HUDComponents/UI_AbilityComponent.UI_AbilityComponent_C");
    return result;
}
void _Game_Interface_HUDComponents_UI_AbilityComponent::UI_AbilityComponent_C::SetMappedPercent(float Percent) {
    return;
}
void _Game_Interface_HUDComponents_UI_AbilityComponent::UI_AbilityComponent_C::DoRefill(float Time) {
    return;
}
void _Game_Interface_HUDComponents_UI_AbilityComponent::UI_AbilityComponent_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_HUDComponents_UI_AbilityComponent::UI_AbilityComponent_C::ResetFillColorAndOpacity() {
    return;
}
void _Game_Interface_HUDComponents_UI_AbilityComponent::UI_AbilityComponent_C::SetFillColorAndOpacity(_Script_CoreUObject::LinearColor InColor) {
    return;
}
void _Game_Interface_HUDComponents_UI_AbilityComponent::UI_AbilityComponent_C::AbilityRecharged() {
    return;
}
void _Game_Interface_HUDComponents_UI_AbilityComponent::UI_AbilityComponent_C::SetAbilityIconScale(_Script_CoreUObject::Vector2D Scale) {
    return;
}
void _Game_Interface_HUDComponents_UI_AbilityComponent::UI_AbilityComponent_C::ExecuteUbergraph_UI_AbilityComponent(int32_t EntryPoint) {
    return;
}
