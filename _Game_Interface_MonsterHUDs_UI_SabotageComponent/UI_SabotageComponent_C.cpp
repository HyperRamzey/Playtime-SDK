#include "..\FUObjectArray.hpp"
#include "UI_SabotageComponent_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_Playtime_Multiplayer\SabotageDef.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\ProgressBar.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void* _Game_Interface_MonsterHUDs_UI_SabotageComponent::UI_SabotageComponent_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::Image*& _Game_Interface_MonsterHUDs_UI_SabotageComponent::UI_SabotageComponent_C::get_SabotageIcon() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x288);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_MonsterHUDs_UI_SabotageComponent::UI_SabotageComponent_C::get_SabotageReady() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_MonsterHUDs_UI_SabotageComponent::UI_SabotageComponent_C::get_SabotageRefill() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x270);
}
void _Game_Interface_MonsterHUDs_UI_SabotageComponent::UI_SabotageComponent_C::SetTextFillColorAndOpacity(float InOpacity) {
    return;
}
_Script_UMG::TextBlock*& _Game_Interface_MonsterHUDs_UI_SabotageComponent::UI_SabotageComponent_C::get_SabotageControlLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x278);
}
_Script_UMG::ProgressBar*& _Game_Interface_MonsterHUDs_UI_SabotageComponent::UI_SabotageComponent_C::get_SabotageProgressBar() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x298);
}
_Script_UMG::TextBlock*& _Game_Interface_MonsterHUDs_UI_SabotageComponent::UI_SabotageComponent_C::get_SabotageCooldown() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x280);
}
_Script_UMG::Image*& _Game_Interface_MonsterHUDs_UI_SabotageComponent::UI_SabotageComponent_C::get_SabotageOutline() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x290);
}
void* _Game_Interface_MonsterHUDs_UI_SabotageComponent::UI_SabotageComponent_C::get_Initial_Color() {
    return (void*)((uintptr_t)this + 0x2a0);
}
float& _Game_Interface_MonsterHUDs_UI_SabotageComponent::UI_SabotageComponent_C::get_SabotagePercent() {
    return *(float*)((uintptr_t)this + 0x2b0);
}
float& _Game_Interface_MonsterHUDs_UI_SabotageComponent::UI_SabotageComponent_C::get_SabotageMin() {
    return *(float*)((uintptr_t)this + 0x2b4);
}
void _Game_Interface_MonsterHUDs_UI_SabotageComponent::UI_SabotageComponent_C::PreConstruct0(bool IsDesignTime) {
    return;
}
float& _Game_Interface_MonsterHUDs_UI_SabotageComponent::UI_SabotageComponent_C::get_SabotageMax() {
    return *(float*)((uintptr_t)this + 0x2b8);
}
void* _Game_Interface_MonsterHUDs_UI_SabotageComponent::UI_SabotageComponent_C::get_SabotageCooldownHandle() {
    return (void*)((uintptr_t)this + 0x2c0);
}
_Script_CoreUObject::Class* _Game_Interface_MonsterHUDs_UI_SabotageComponent::UI_SabotageComponent_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/MonsterHUDs/UI_SabotageComponent.UI_SabotageComponent_C");
    return result;
}
void _Game_Interface_MonsterHUDs_UI_SabotageComponent::UI_SabotageComponent_C::SetMappedPercent(float Percent) {
    return;
}
void _Game_Interface_MonsterHUDs_UI_SabotageComponent::UI_SabotageComponent_C::ResetFillColorAndOpacity() {
    return;
}
void _Game_Interface_MonsterHUDs_UI_SabotageComponent::UI_SabotageComponent_C::SetFillColorAndOpacity(_Script_CoreUObject::LinearColor InColor) {
    return;
}
void _Game_Interface_MonsterHUDs_UI_SabotageComponent::UI_SabotageComponent_C::DoRefillAbility(float Time) {
    return;
}
void _Game_Interface_MonsterHUDs_UI_SabotageComponent::UI_SabotageComponent_C::SetSabotageCooldown(_Script_Playtime_Multiplayer::SabotageDef SabotageDef) {
    return;
}
void _Game_Interface_MonsterHUDs_UI_SabotageComponent::UI_SabotageComponent_C::DisableSabotageCooldown() {
    return;
}
void _Game_Interface_MonsterHUDs_UI_SabotageComponent::UI_SabotageComponent_C::Tick0(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime) {
    return;
}
void _Game_Interface_MonsterHUDs_UI_SabotageComponent::UI_SabotageComponent_C::DisableSabotage() {
    return;
}
void _Game_Interface_MonsterHUDs_UI_SabotageComponent::UI_SabotageComponent_C::ExecuteUbergraph_UI_SabotageComponent(int32_t EntryPoint) {
    return;
}
