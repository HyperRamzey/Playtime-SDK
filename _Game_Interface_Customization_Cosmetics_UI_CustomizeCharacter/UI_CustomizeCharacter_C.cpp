#include "..\FUObjectArray.hpp"
#include "..\_Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter\BP_CustomizationMenuCharacter_C.hpp"
#include "UI_CustomizeCharacter_C.hpp"
#include "..\_Game_Interface_Customization_Cosmetics_UI_Emotes\UI_Emotes_C.hpp"
#include "..\_Game_Interface_Customization_Cosmetics_UI_Presets\UI_Presets_C.hpp"
#include "..\_Game_Interface_Customization_Cosmetics_UI_TabbedCustomization\UI_TabbedCustomization_C.hpp"
#include "..\_Game_Interface_Customization_Perks_UI_Perks\UI_Perks_C.hpp"
#include "..\_Game_Interface_Customization_Sabotages_UI_Sabotages\UI_Sabotages_C.hpp"
#include "..\_Game_Interface_General_UI_BackButton\UI_BackButton_C.hpp"
#include "..\_Game_Interface_General_UI_BasicButton\UI_BasicButton_C.hpp"
#include "..\_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter\BP_NetworkCharacter_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\CanvasPanel.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
#include "..\_Script_UMG\WidgetSwitcher.hpp"
void _Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter::UI_CustomizeCharacter_C::BackPressed__DelegateSignature() {
    return;
}
_Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter::BP_CustomizationMenuCharacter_C*& _Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter::UI_CustomizeCharacter_C::get_Menu_Character() {
    return *(_Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter::BP_CustomizationMenuCharacter_C**)((uintptr_t)this + 0x358);
}
_Script_UMG::WidgetSwitcher*& _Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter::UI_CustomizeCharacter_C::get_Switcher() {
    return *(_Script_UMG::WidgetSwitcher**)((uintptr_t)this + 0x2c8);
}
_Script_UMG::CanvasPanel*& _Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter::UI_CustomizeCharacter_C::get_Emotes() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x290);
}
void* _Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter::UI_CustomizeCharacter_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
void _Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter::UI_CustomizeCharacter_C::set_RotatingCharacter(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x340 + 0);
    *(uint8_t*)((uintptr_t)this + 0x340 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter::UI_CustomizeCharacter_C::get_ExpandCatalogFull() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
_Game_Interface_General_UI_BasicButton::UI_BasicButton_C*& _Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter::UI_CustomizeCharacter_C::get_EmotesButton() {
    return *(_Game_Interface_General_UI_BasicButton::UI_BasicButton_C**)((uintptr_t)this + 0x298);
}
void _Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter::UI_CustomizeCharacter_C::BndEvt__UI_CustomizeCharacter_Button_559_K2Node_ComponentBoundEvent_9_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C*& _Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter::UI_CustomizeCharacter_C::get_Character() {
    return *(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C**)((uintptr_t)this + 0x308);
}
_Game_Interface_General_UI_BasicButton::UI_BasicButton_C*& _Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter::UI_CustomizeCharacter_C::get_AppearanceButton() {
    return *(_Game_Interface_General_UI_BasicButton::UI_BasicButton_C**)((uintptr_t)this + 0x278);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter::UI_CustomizeCharacter_C::get_ExpandCatalogHalf() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x270);
}
_Script_UMG::CanvasPanel*& _Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter::UI_CustomizeCharacter_C::get_BackPanel() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x280);
}
_Script_UMG::Button*& _Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter::UI_CustomizeCharacter_C::get_CharacterRotator() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x288);
}
void* _Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter::UI_CustomizeCharacter_C::get_PreviousMousePosition() {
    return (void*)((uintptr_t)this + 0x338);
}
_Game_Interface_General_UI_BasicButton::UI_BasicButton_C*& _Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter::UI_CustomizeCharacter_C::get_PerksButton() {
    return *(_Game_Interface_General_UI_BasicButton::UI_BasicButton_C**)((uintptr_t)this + 0x2a0);
}
_Script_UMG::CanvasPanel*& _Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter::UI_CustomizeCharacter_C::get_Presets() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x2a8);
}
void* _Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter::UI_CustomizeCharacter_C::get_ChangedAppearance() {
    return (void*)((uintptr_t)this + 0x318);
}
_Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C*& _Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter::UI_CustomizeCharacter_C::get_UI_Perks() {
    return *(_Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C**)((uintptr_t)this + 0x2e0);
}
_Game_Interface_General_UI_BasicButton::UI_BasicButton_C*& _Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter::UI_CustomizeCharacter_C::get_PresetsButton() {
    return *(_Game_Interface_General_UI_BasicButton::UI_BasicButton_C**)((uintptr_t)this + 0x2b0);
}
void _Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter::UI_CustomizeCharacter_C::ExecuteUbergraph_UI_CustomizeCharacter(int32_t EntryPoint) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter::UI_CustomizeCharacter_C::UpdateVisuals() {
    return;
}
_Game_Interface_Customization_Cosmetics_UI_Presets::UI_Presets_C*& _Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter::UI_CustomizeCharacter_C::get_UI_Presets() {
    return *(_Game_Interface_Customization_Cosmetics_UI_Presets::UI_Presets_C**)((uintptr_t)this + 0x2e8);
}
_Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C*& _Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter::UI_CustomizeCharacter_C::get_Sabotages() {
    return *(_Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C**)((uintptr_t)this + 0x2b8);
}
void* _Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter::UI_CustomizeCharacter_C::get_MouseDragged() {
    return (void*)((uintptr_t)this + 0x348);
}
_Game_Interface_General_UI_BasicButton::UI_BasicButton_C*& _Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter::UI_CustomizeCharacter_C::get_SabotagesButton() {
    return *(_Game_Interface_General_UI_BasicButton::UI_BasicButton_C**)((uintptr_t)this + 0x2c0);
}
_Game_Interface_General_UI_BackButton::UI_BackButton_C*& _Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter::UI_CustomizeCharacter_C::get_UI_BackButton() {
    return *(_Game_Interface_General_UI_BackButton::UI_BackButton_C**)((uintptr_t)this + 0x2d0);
}
void _Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter::UI_CustomizeCharacter_C::SelectFirstPage(void* CharacterType) {
    return;
}
_Game_Interface_Customization_Cosmetics_UI_Emotes::UI_Emotes_C*& _Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter::UI_CustomizeCharacter_C::get_UI_Emotes() {
    return *(_Game_Interface_Customization_Cosmetics_UI_Emotes::UI_Emotes_C**)((uintptr_t)this + 0x2d8);
}
_Game_Interface_Customization_Cosmetics_UI_TabbedCustomization::UI_TabbedCustomization_C*& _Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter::UI_CustomizeCharacter_C::get_UI_TabbedCustomization() {
    return *(_Game_Interface_Customization_Cosmetics_UI_TabbedCustomization::UI_TabbedCustomization_C**)((uintptr_t)this + 0x2f0);
}
void* _Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter::UI_CustomizeCharacter_C::get_BackPressed() {
    return (void*)((uintptr_t)this + 0x2f8);
}
bool _Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter::UI_CustomizeCharacter_C::get_LastWasPerks() {
    return (*(uint8_t*)((uintptr_t)this + 0x310 + 0)) & 1 != 0;
}
void _Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter::UI_CustomizeCharacter_C::set_LastWasPerks(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x310 + 0);
    *(uint8_t*)((uintptr_t)this + 0x310 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter::UI_CustomizeCharacter_C::set_InMonsterSelector(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x312 + 0);
    *(uint8_t*)((uintptr_t)this + 0x312 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter::UI_CustomizeCharacter_C::get_CharacterType() {
    return (void*)((uintptr_t)this + 0x311);
}
bool _Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter::UI_CustomizeCharacter_C::get_InMonsterSelector() {
    return (*(uint8_t*)((uintptr_t)this + 0x312 + 0)) & 1 != 0;
}
void* _Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter::UI_CustomizeCharacter_C::get_UpdateRotatingCharacter() {
    return (void*)((uintptr_t)this + 0x328);
}
bool _Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter::UI_CustomizeCharacter_C::get_RotatingCharacter() {
    return (*(uint8_t*)((uintptr_t)this + 0x340 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter::UI_CustomizeCharacter_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/Customization/Cosmetics/UI_CustomizeCharacter.UI_CustomizeCharacter_C");
    return result;
}
void _Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter::UI_CustomizeCharacter_C::SetCharacterType(void* NewValue) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter::UI_CustomizeCharacter_C::SetCharacter(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C* Character, _Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter::BP_CustomizationMenuCharacter_C* MenuCharacter) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter::UI_CustomizeCharacter_C::BndEvt__UI_Customize_TEMP_SabotagesButton_K2Node_ComponentBoundEvent_5_OnReleased__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter::UI_CustomizeCharacter_C::SetPersistentButtonStyleOnCorrectButton() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter::UI_CustomizeCharacter_C::UpdateRotatingCharacter__DelegateSignature(bool Rotating_) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter::UI_CustomizeCharacter_C::BndEvt__UI_Customize_PresetsButton_K2Node_ComponentBoundEvent_4_OnReleased__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter::UI_CustomizeCharacter_C::BndEvt__UI_Customize_EmotesButton_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter::UI_CustomizeCharacter_C::BndEvt__UI_Customize_PerksButton_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter::UI_CustomizeCharacter_C::BndEvt__UI_Customize_AppearanceButton_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter::UI_CustomizeCharacter_C::BndEvt__UI_CustomizeCharacter_UI_TabbedCustomization_K2Node_ComponentBoundEvent_10_ChangedAppearance__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter::UI_CustomizeCharacter_C::BndEvt__UI_CustomizeCharacter_UI_BackButton_K2Node_ComponentBoundEvent_7_Released__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter::UI_CustomizeCharacter_C::BndEvt__UI_CustomizeCharacter_UI_Emotes_K2Node_ComponentBoundEvent_0_Changed__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter::UI_CustomizeCharacter_C::BndEvt__UI_CustomizeCharacter_Button_559_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter::UI_CustomizeCharacter_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter::UI_CustomizeCharacter_C::Tick0(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter::UI_CustomizeCharacter_C::Construct0() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter::UI_CustomizeCharacter_C::Update_Localization() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter::UI_CustomizeCharacter_C::MouseDragged__DelegateSignature(_Script_CoreUObject::Vector2D DeltaMouse) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter::UI_CustomizeCharacter_C::ChangedAppearance__DelegateSignature() {
    return;
}
