#include "..\FUObjectArray.hpp"
#include "UI_AbilitiesComponent_C.hpp"
#include "..\_Game_Interface_HUDComponents_UI_AbilityComponent\UI_AbilityComponent_C.hpp"
#include "..\_Game_Interface_MonsterHUDs_UI_SabotageComponent\UI_SabotageComponent_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Texture2D.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
_Game_Interface_HUDComponents_UI_AbilityComponent::UI_AbilityComponent_C*& _Game_Interface_HUDComponents_UI_AbilitiesComponent::UI_AbilitiesComponent_C::get_SecondAbility() {
    return *(_Game_Interface_HUDComponents_UI_AbilityComponent::UI_AbilityComponent_C**)((uintptr_t)this + 0x278);
}
_Script_UMG::Image*& _Game_Interface_HUDComponents_UI_AbilitiesComponent::UI_AbilitiesComponent_C::get_Outline() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x270);
}
void* _Game_Interface_HUDComponents_UI_AbilitiesComponent::UI_AbilitiesComponent_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Game_Interface_HUDComponents_UI_AbilityComponent::UI_AbilityComponent_C*& _Game_Interface_HUDComponents_UI_AbilitiesComponent::UI_AbilitiesComponent_C::get_FirstAbility() {
    return *(_Game_Interface_HUDComponents_UI_AbilityComponent::UI_AbilityComponent_C**)((uintptr_t)this + 0x268);
}
void _Game_Interface_HUDComponents_UI_AbilitiesComponent::UI_AbilitiesComponent_C::ExecuteUbergraph_UI_AbilitiesComponent(int32_t EntryPoint) {
    return;
}
_Script_Engine::Texture2D*& _Game_Interface_HUDComponents_UI_AbilitiesComponent::UI_AbilitiesComponent_C::get_SecondAbilityImage() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x290);
}
_Game_Interface_MonsterHUDs_UI_SabotageComponent::UI_SabotageComponent_C*& _Game_Interface_HUDComponents_UI_AbilitiesComponent::UI_AbilitiesComponent_C::get_UI_SabotageComponent() {
    return *(_Game_Interface_MonsterHUDs_UI_SabotageComponent::UI_SabotageComponent_C**)((uintptr_t)this + 0x280);
}
_Script_Engine::Texture2D*& _Game_Interface_HUDComponents_UI_AbilitiesComponent::UI_AbilitiesComponent_C::get_FirstAbilityImage() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x288);
}
void* _Game_Interface_HUDComponents_UI_AbilitiesComponent::UI_AbilitiesComponent_C::get_FirstAbilityText() {
    return (void*)((uintptr_t)this + 0x298);
}
void* _Game_Interface_HUDComponents_UI_AbilitiesComponent::UI_AbilitiesComponent_C::get_SecondAbilityText() {
    return (void*)((uintptr_t)this + 0x2b0);
}
float& _Game_Interface_HUDComponents_UI_AbilitiesComponent::UI_AbilitiesComponent_C::get_FirstAbilityUIMaximum() {
    return *(float*)((uintptr_t)this + 0x2c8);
}
float& _Game_Interface_HUDComponents_UI_AbilitiesComponent::UI_AbilitiesComponent_C::get_FirstAbilityUIMinimum() {
    return *(float*)((uintptr_t)this + 0x2cc);
}
float& _Game_Interface_HUDComponents_UI_AbilitiesComponent::UI_AbilitiesComponent_C::get_SecondAbilityUIMinimum() {
    return *(float*)((uintptr_t)this + 0x2d0);
}
float& _Game_Interface_HUDComponents_UI_AbilitiesComponent::UI_AbilitiesComponent_C::get_SecondAbilityUIMaximum() {
    return *(float*)((uintptr_t)this + 0x2d4);
}
bool _Game_Interface_HUDComponents_UI_AbilitiesComponent::UI_AbilitiesComponent_C::get_HideSecondAbility() {
    return (*(uint8_t*)((uintptr_t)this + 0x2d8 + 0)) & 1 != 0;
}
void _Game_Interface_HUDComponents_UI_AbilitiesComponent::UI_AbilitiesComponent_C::set_HideSecondAbility(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2d8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2d8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::Texture2D*& _Game_Interface_HUDComponents_UI_AbilitiesComponent::UI_AbilitiesComponent_C::get_SabotageAbilityImage() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x2e0);
}
float& _Game_Interface_HUDComponents_UI_AbilitiesComponent::UI_AbilitiesComponent_C::get_SabotageAbilityUIMinimum() {
    return *(float*)((uintptr_t)this + 0x2e8);
}
float& _Game_Interface_HUDComponents_UI_AbilitiesComponent::UI_AbilitiesComponent_C::get_SabotageAbilityUIMaximum() {
    return *(float*)((uintptr_t)this + 0x2ec);
}
void* _Game_Interface_HUDComponents_UI_AbilitiesComponent::UI_AbilitiesComponent_C::get_SabotageAbilityText() {
    return (void*)((uintptr_t)this + 0x2f0);
}
_Script_CoreUObject::Class* _Game_Interface_HUDComponents_UI_AbilitiesComponent::UI_AbilitiesComponent_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/HUDComponents/UI_AbilitiesComponent.UI_AbilitiesComponent_C");
    return result;
}
void _Game_Interface_HUDComponents_UI_AbilitiesComponent::UI_AbilitiesComponent_C::PlaySabotageAbilityRechargeAnim(float Time) {
    return;
}
void _Game_Interface_HUDComponents_UI_AbilitiesComponent::UI_AbilitiesComponent_C::Init() {
    return;
}
void _Game_Interface_HUDComponents_UI_AbilitiesComponent::UI_AbilitiesComponent_C::PlaySecondAbilityRechargeAnim(float Cooldown) {
    return;
}
void _Game_Interface_HUDComponents_UI_AbilitiesComponent::UI_AbilitiesComponent_C::PlayFirstAbilityRechargeAnim(float Cooldown) {
    return;
}
void _Game_Interface_HUDComponents_UI_AbilitiesComponent::UI_AbilitiesComponent_C::SetAbilityImageIcon(_Script_UMG::Image* Imag, _Script_Engine::Texture2D* Icon) {
    return;
}
void _Game_Interface_HUDComponents_UI_AbilitiesComponent::UI_AbilitiesComponent_C::PreConstruct0(bool IsDesignTime) {
    return;
}
