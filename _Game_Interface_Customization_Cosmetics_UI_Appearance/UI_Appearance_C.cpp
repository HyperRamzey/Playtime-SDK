#include "..\FUObjectArray.hpp"
#include "..\_Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter\BP_CustomizationMenuCharacter_C.hpp"
#include "UI_Appearance_C.hpp"
#include "..\_Game_Interface_Customization_Cosmetics_UI_ColorItem\UI_ColorItem_C.hpp"
#include "..\_Game_Interface_Customization_Cosmetics_UI_ColorSelector\UI_ColorSelector_C.hpp"
#include "..\_Game_Interface_Customization_Cosmetics_UI_CosmeticItem\UI_CosmeticItem_C.hpp"
#include "..\_Game_Interface_Customization_Cosmetics_UI_CosmeticSelectionGrid\UI_CosmeticSelectionGrid_C.hpp"
#include "..\_Game_Interface_Customization_Cosmetics_UI_CosmeticSlotButton\UI_CosmeticSlotButton_C.hpp"
#include "..\_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter\BP_NetworkCharacter_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\Overlay.hpp"
#include "..\_Script_UMG\UniformGridPanel.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetSwitcher.hpp"
_Script_UMG::UniformGridPanel*& _Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C::get_UniformGridPanel_112() {
    return *(_Script_UMG::UniformGridPanel**)((uintptr_t)this + 0x2d0);
}
_Game_Interface_Customization_Cosmetics_UI_CosmeticSlotButton::UI_CosmeticSlotButton_C*& _Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C::get_grabpacks() {
    return *(_Game_Interface_Customization_Cosmetics_UI_CosmeticSlotButton::UI_CosmeticSlotButton_C**)((uintptr_t)this + 0x278);
}
void _Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C::Appearance_UnhoveredItem__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C::BndEvt__UI_Appearance_UI_CosmeticSelectionGrid_K2Node_ComponentBoundEvent_15_Grid_OnPopulate__DelegateSignature(int32_t Equipped_Item_ID) {
    return;
}
void* _Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
void _Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C::SwitchToCosmetics() {
    return;
}
void* _Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C::get_ChangedAppearance() {
    return (void*)((uintptr_t)this + 0x300);
}
_Script_UMG::Button*& _Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C::get_BackButton() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x268);
}
_Game_Interface_Customization_Cosmetics_UI_CosmeticSlotButton::UI_CosmeticSlotButton_C*& _Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C::get_Pants() {
    return *(_Game_Interface_Customization_Cosmetics_UI_CosmeticSlotButton::UI_CosmeticSlotButton_C**)((uintptr_t)this + 0x298);
}
_Script_UMG::Overlay*& _Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C::get_CosmeticSelectionGrid() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x270);
}
void _Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C::Appearance_RequestHideCosmeticInfo__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C::Construct0() {
    return;
}
_Game_Interface_Customization_Cosmetics_UI_CosmeticSlotButton::UI_CosmeticSlotButton_C*& _Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C::get_hats() {
    return *(_Game_Interface_Customization_Cosmetics_UI_CosmeticSlotButton::UI_CosmeticSlotButton_C**)((uintptr_t)this + 0x280);
}
_Script_CoreUObject::Class* _Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/Customization/Cosmetics/UI_Appearance.UI_Appearance_C");
    return result;
}
_Game_Interface_Customization_Cosmetics_UI_CosmeticSlotButton::UI_CosmeticSlotButton_C*& _Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C::get_lefthands() {
    return *(_Game_Interface_Customization_Cosmetics_UI_CosmeticSlotButton::UI_CosmeticSlotButton_C**)((uintptr_t)this + 0x288);
}
_Game_Interface_Customization_Cosmetics_UI_CosmeticSlotButton::UI_CosmeticSlotButton_C*& _Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C::get_masks() {
    return *(_Game_Interface_Customization_Cosmetics_UI_CosmeticSlotButton::UI_CosmeticSlotButton_C**)((uintptr_t)this + 0x290);
}
_Game_Interface_Customization_Cosmetics_UI_CosmeticSlotButton::UI_CosmeticSlotButton_C*& _Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C::get_righthands() {
    return *(_Game_Interface_Customization_Cosmetics_UI_CosmeticSlotButton::UI_CosmeticSlotButton_C**)((uintptr_t)this + 0x2a0);
}
void _Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C::BndEvt__UI_Appearance_grabpacks_K2Node_ComponentBoundEvent_5_Released__DelegateSignature(void* Type) {
    return;
}
_Game_Interface_Customization_Cosmetics_UI_CosmeticSlotButton::UI_CosmeticSlotButton_C*& _Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C::get_shirts() {
    return *(_Game_Interface_Customization_Cosmetics_UI_CosmeticSlotButton::UI_CosmeticSlotButton_C**)((uintptr_t)this + 0x2a8);
}
_Game_Interface_Customization_Cosmetics_UI_CosmeticSlotButton::UI_CosmeticSlotButton_C*& _Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C::get_Shoes() {
    return *(_Game_Interface_Customization_Cosmetics_UI_CosmeticSlotButton::UI_CosmeticSlotButton_C**)((uintptr_t)this + 0x2b0);
}
_Game_Interface_Customization_Cosmetics_UI_CosmeticSlotButton::UI_CosmeticSlotButton_C*& _Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C::get_Skins() {
    return *(_Game_Interface_Customization_Cosmetics_UI_CosmeticSlotButton::UI_CosmeticSlotButton_C**)((uintptr_t)this + 0x2b8);
}
_Game_Interface_Customization_Cosmetics_UI_ColorSelector::UI_ColorSelector_C*& _Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C::get_UI_ColorSelector() {
    return *(_Game_Interface_Customization_Cosmetics_UI_ColorSelector::UI_ColorSelector_C**)((uintptr_t)this + 0x2c0);
}
_Game_Interface_Customization_Cosmetics_UI_CosmeticSelectionGrid::UI_CosmeticSelectionGrid_C*& _Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C::get_UI_CosmeticSelectionGrid() {
    return *(_Game_Interface_Customization_Cosmetics_UI_CosmeticSelectionGrid::UI_CosmeticSelectionGrid_C**)((uintptr_t)this + 0x2c8);
}
_Script_UMG::WidgetSwitcher*& _Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C::get_WidgetSwitcher_200() {
    return *(_Script_UMG::WidgetSwitcher**)((uintptr_t)this + 0x2d8);
}
_Game_Interface_Customization_Cosmetics_UI_CosmeticItem::UI_CosmeticItem_C*& _Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C::get_Previous_Caller() {
    return *(_Game_Interface_Customization_Cosmetics_UI_CosmeticItem::UI_CosmeticItem_C**)((uintptr_t)this + 0x2e0);
}
_Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter::BP_CustomizationMenuCharacter_C*& _Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C::get_Menu_Player_Character() {
    return *(_Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter::BP_CustomizationMenuCharacter_C**)((uintptr_t)this + 0x310);
}
_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C*& _Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C::get_Character() {
    return *(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C**)((uintptr_t)this + 0x2e8);
}
_Game_Interface_Customization_Cosmetics_UI_ColorItem::UI_ColorItem_C*& _Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C::get_CurrentColor() {
    return *(_Game_Interface_Customization_Cosmetics_UI_ColorItem::UI_ColorItem_C**)((uintptr_t)this + 0x2f0);
}
void* _Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C::get_CharacterType() {
    return (void*)((uintptr_t)this + 0x2f8);
}
void* _Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C::get_CosmeticType() {
    return (void*)((uintptr_t)this + 0x2f9);
}
void* _Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C::get_Appearance_HoveredItem() {
    return (void*)((uintptr_t)this + 0x318);
}
void* _Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C::get_Appearance_UnhoveredItem() {
    return (void*)((uintptr_t)this + 0x328);
}
void _Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C::BndEvt__UI_Appearance_pants_K2Node_ComponentBoundEvent_4_Released__DelegateSignature(void* Type) {
    return;
}
void* _Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C::get_Appearance_RequestHideCosmeticInfo() {
    return (void*)((uintptr_t)this + 0x338);
}
void* _Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C::get_Appearance_RequestTitleChange() {
    return (void*)((uintptr_t)this + 0x348);
}
void _Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C::BndEvt__UI_Appearance_hats_K2Node_ComponentBoundEvent_0_Released__DelegateSignature(void* Type) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C::SetCharacterType(void* NewValue) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C::SetMenuCharacter(_Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter::BP_CustomizationMenuCharacter_C* Menu_Character) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C::Appearance_RequestTitleChange__DelegateSignature(void* Title) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C::UpdateVisuals() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C::BndEvt__UI_Appearance_UI_CosmeticSelectionGrid_K2Node_ComponentBoundEvent_11_Grid_OnHovered__DelegateSignature(int32_t Item_ID) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C::BndEvt__UI_Appearance_BackButton_K2Node_ComponentBoundEvent_9_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C::BndEvt__UI_Appearance_UI_CosmeticSelectionGrid_K2Node_ComponentBoundEvent_10_Grid_OnReleased__DelegateSignature(int32_t Item_ID, void* Type, _Game_Interface_Customization_Cosmetics_UI_CosmeticItem::UI_CosmeticItem_C* Caller, void* CosmeticFor) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C::BndEvt__UI_Appearance_lefthands_K2Node_ComponentBoundEvent_1_Released__DelegateSignature(void* Type) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C::Back() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C::FoundInventory(void*& Inventory) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C::BndEvt__UI_Appearance_UI_CosmeticSelectionGrid_K2Node_ComponentBoundEvent_12_Grid_OnUnHovered__DelegateSignature(int32_t Item_ID) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C::BndEvt__UI_Appearance_shoes_K2Node_ComponentBoundEvent_7_Released__DelegateSignature(void* Type) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C::SetColorMenuStatus(int32_t ItemId) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C::SwitchCategory(void* Type) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C::PlaySelectAnimations() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C::BndEvt__UI_Appearance_masks_K2Node_ComponentBoundEvent_8_Released__DelegateSignature(void* Type) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C::SetTypeAnimations(void* Cosmetic_Type) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C::BndEvt__UI_Appearance_skins_K2Node_ComponentBoundEvent_6_Released__DelegateSignature(void* Type) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C::BndEvt__UI_Appearance_shirts_K2Node_ComponentBoundEvent_3_Released__DelegateSignature(void* Type) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C::BndEvt__UI_Appearance_righthands_K2Node_ComponentBoundEvent_2_Released__DelegateSignature(void* Type) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C::Appearance_HoveredItem__DelegateSignature(int32_t ID) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C::Failed(void* ErrorMessage) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C::BndEvt__UI_Appearance_UI_ColorSelector_K2Node_ComponentBoundEvent_12_ColorSelectedMenu__DelegateSignature(int32_t ColorIndex, _Game_Interface_Customization_Cosmetics_UI_ColorItem::UI_ColorItem_C* SelectedColor) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C::ExecuteUbergraph_UI_Appearance(int32_t EntryPoint) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C::ChangedAppearance__DelegateSignature() {
    return;
}
