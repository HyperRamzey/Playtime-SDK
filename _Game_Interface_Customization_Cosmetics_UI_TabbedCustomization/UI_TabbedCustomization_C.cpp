#include "..\FUObjectArray.hpp"
#include "..\_Game_Interface_Customization_Cosmetics_UI_Appearance\UI_Appearance_C.hpp"
#include "..\_Game_Interface_Customization_Cosmetics_UI_CosmeticInfo\UI_CosmeticInfo_C.hpp"
#include "..\_Game_Interface_Customization_Cosmetics_UI_CustomizationTab\UI_CustomizationTab_C.hpp"
#include "..\_Game_Interface_Customization_Cosmetics_UI_Screens\UI_Screens_C.hpp"
#include "UI_TabbedCustomization_C.hpp"
#include "..\_Game_Interface_Customization_Personalization_UI_SoundPackSelection\UI_SoundPackSelection_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\Overlay.hpp"
#include "..\_Script_UMG\SizeBox.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetSwitcher.hpp"
void* _Game_Interface_Customization_Cosmetics_UI_TabbedCustomization::UI_TabbedCustomization_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Game_Interface_Customization_Cosmetics_UI_CustomizationTab::UI_CustomizationTab_C*& _Game_Interface_Customization_Cosmetics_UI_TabbedCustomization::UI_TabbedCustomization_C::get_AmbientMusicTab() {
    return *(_Game_Interface_Customization_Cosmetics_UI_CustomizationTab::UI_CustomizationTab_C**)((uintptr_t)this + 0x268);
}
void _Game_Interface_Customization_Cosmetics_UI_TabbedCustomization::UI_TabbedCustomization_C::BndEvt__UI_TabbedCustomization_UI_SoundPackSelection_K2Node_ComponentBoundEvent_2_SoundPacksRequestChangeText__DelegateSignature(void* Title) {
    return;
}
_Script_UMG::TextBlock*& _Game_Interface_Customization_Cosmetics_UI_TabbedCustomization::UI_TabbedCustomization_C::get_CategoryText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x270);
}
_Game_Interface_Customization_Cosmetics_UI_CustomizationTab::UI_CustomizationTab_C*& _Game_Interface_Customization_Cosmetics_UI_TabbedCustomization::UI_TabbedCustomization_C::get_ChaseMusicTab() {
    return *(_Game_Interface_Customization_Cosmetics_UI_CustomizationTab::UI_CustomizationTab_C**)((uintptr_t)this + 0x278);
}
void _Game_Interface_Customization_Cosmetics_UI_TabbedCustomization::UI_TabbedCustomization_C::BndEvt__UI_TabbedCustomization_UI_Appearance_K2Node_ComponentBoundEvent_3_Appearance_RequestTitleChange__DelegateSignature(void* Title) {
    return;
}
_Game_Interface_Customization_Cosmetics_UI_CustomizationTab::UI_CustomizationTab_C*& _Game_Interface_Customization_Cosmetics_UI_TabbedCustomization::UI_TabbedCustomization_C::get_LoadingScreensTab() {
    return *(_Game_Interface_Customization_Cosmetics_UI_CustomizationTab::UI_CustomizationTab_C**)((uintptr_t)this + 0x290);
}
void _Game_Interface_Customization_Cosmetics_UI_TabbedCustomization::UI_TabbedCustomization_C::Update_Localization() {
    return;
}
_Game_Interface_Customization_Cosmetics_UI_CustomizationTab::UI_CustomizationTab_C*& _Game_Interface_Customization_Cosmetics_UI_TabbedCustomization::UI_TabbedCustomization_C::get_CustomizationTab() {
    return *(_Game_Interface_Customization_Cosmetics_UI_CustomizationTab::UI_CustomizationTab_C**)((uintptr_t)this + 0x280);
}
_Game_Interface_Customization_Cosmetics_UI_CustomizationTab::UI_CustomizationTab_C*& _Game_Interface_Customization_Cosmetics_UI_TabbedCustomization::UI_TabbedCustomization_C::get_LobbyMusicTab() {
    return *(_Game_Interface_Customization_Cosmetics_UI_CustomizationTab::UI_CustomizationTab_C**)((uintptr_t)this + 0x298);
}
_Script_UMG::Overlay*& _Game_Interface_Customization_Cosmetics_UI_TabbedCustomization::UI_TabbedCustomization_C::get_DummyEmptyBox() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x288);
}
_Script_UMG::WidgetSwitcher*& _Game_Interface_Customization_Cosmetics_UI_TabbedCustomization::UI_TabbedCustomization_C::get_Previews() {
    return *(_Script_UMG::WidgetSwitcher**)((uintptr_t)this + 0x2a0);
}
_Script_UMG::WidgetSwitcher*& _Game_Interface_Customization_Cosmetics_UI_TabbedCustomization::UI_TabbedCustomization_C::get_PrimarySwitcher() {
    return *(_Script_UMG::WidgetSwitcher**)((uintptr_t)this + 0x2a8);
}
_Game_Interface_Customization_Cosmetics_UI_CustomizationTab::UI_CustomizationTab_C*& _Game_Interface_Customization_Cosmetics_UI_TabbedCustomization::UI_TabbedCustomization_C::get_PuzzleSoundsTab() {
    return *(_Game_Interface_Customization_Cosmetics_UI_CustomizationTab::UI_CustomizationTab_C**)((uintptr_t)this + 0x2b0);
}
_Script_UMG::Image*& _Game_Interface_Customization_Cosmetics_UI_TabbedCustomization::UI_TabbedCustomization_C::get_ScreenPreview() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2b8);
}
_Script_UMG::SizeBox*& _Game_Interface_Customization_Cosmetics_UI_TabbedCustomization::UI_TabbedCustomization_C::get_ScreenPreviewSizer() {
    return *(_Script_UMG::SizeBox**)((uintptr_t)this + 0x2c0);
}
void _Game_Interface_Customization_Cosmetics_UI_TabbedCustomization::UI_TabbedCustomization_C::ExecuteUbergraph_UI_TabbedCustomization(int32_t EntryPoint) {
    return;
}
_Game_Interface_Customization_Cosmetics_UI_CustomizationTab::UI_CustomizationTab_C*& _Game_Interface_Customization_Cosmetics_UI_TabbedCustomization::UI_TabbedCustomization_C::get_SurvivorSoundsTab() {
    return *(_Game_Interface_Customization_Cosmetics_UI_CustomizationTab::UI_CustomizationTab_C**)((uintptr_t)this + 0x2c8);
}
_Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C*& _Game_Interface_Customization_Cosmetics_UI_TabbedCustomization::UI_TabbedCustomization_C::get_UI_Appearance() {
    return *(_Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C**)((uintptr_t)this + 0x2d0);
}
_Game_Interface_Customization_Cosmetics_UI_CosmeticInfo::UI_CosmeticInfo_C*& _Game_Interface_Customization_Cosmetics_UI_TabbedCustomization::UI_TabbedCustomization_C::get_UI_CosmeticInfo() {
    return *(_Game_Interface_Customization_Cosmetics_UI_CosmeticInfo::UI_CosmeticInfo_C**)((uintptr_t)this + 0x2d8);
}
_Game_Interface_Customization_Cosmetics_UI_Screens::UI_Screens_C*& _Game_Interface_Customization_Cosmetics_UI_TabbedCustomization::UI_TabbedCustomization_C::get_UI_Screens() {
    return *(_Game_Interface_Customization_Cosmetics_UI_Screens::UI_Screens_C**)((uintptr_t)this + 0x2e0);
}
_Game_Interface_Customization_Personalization_UI_SoundPackSelection::UI_SoundPackSelection_C*& _Game_Interface_Customization_Cosmetics_UI_TabbedCustomization::UI_TabbedCustomization_C::get_UI_SoundPackSelection() {
    return *(_Game_Interface_Customization_Personalization_UI_SoundPackSelection::UI_SoundPackSelection_C**)((uintptr_t)this + 0x2e8);
}
void _Game_Interface_Customization_Cosmetics_UI_TabbedCustomization::UI_TabbedCustomization_C::BndEvt__UI_TabbedCustomization_UI_Appearance_K2Node_ComponentBoundEvent_1_Appearance_HoveredItem__DelegateSignature(int32_t ID) {
    return;
}
void* _Game_Interface_Customization_Cosmetics_UI_TabbedCustomization::UI_TabbedCustomization_C::get_ChangedAppearance() {
    return (void*)((uintptr_t)this + 0x2f0);
}
_Script_CoreUObject::Class* _Game_Interface_Customization_Cosmetics_UI_TabbedCustomization::UI_TabbedCustomization_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/Customization/Cosmetics/UI_TabbedCustomization.UI_TabbedCustomization_C");
    return result;
}
void _Game_Interface_Customization_Cosmetics_UI_TabbedCustomization::UI_TabbedCustomization_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_TabbedCustomization::UI_TabbedCustomization_C::BndEvt__UI_TabbedCustomization_AmbientMusicTab_K2Node_ComponentBoundEvent_9_TabReleased__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_TabbedCustomization::UI_TabbedCustomization_C::BndEvt__UI_TabbedCustomization_Wallpapers_K2Node_ComponentBoundEvent_6_TabReleased__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_TabbedCustomization::UI_TabbedCustomization_C::Construct0() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_TabbedCustomization::UI_TabbedCustomization_C::BndEvt__UI_TabbedCustomization_UI_Screens_K2Node_ComponentBoundEvent_0_RequestScreenPreview__DelegateSignature(void* Screen) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_TabbedCustomization::UI_TabbedCustomization_C::ChangeTitle(void* NewTitle) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_TabbedCustomization::UI_TabbedCustomization_C::BndEvt__UI_TabbedCustomization_UI_Appearance_K2Node_ComponentBoundEvent_4_Appearance_RequestHideCosmeticInfo__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_TabbedCustomization::UI_TabbedCustomization_C::BndEvt__UI_TabbedCustomization_CustomizationTab_K2Node_ComponentBoundEvent_5_TabReleased__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_TabbedCustomization::UI_TabbedCustomization_C::BndEvt__UI_TabbedCustomization_ChaseMusicTab_K2Node_ComponentBoundEvent_7_TabReleased__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_TabbedCustomization::UI_TabbedCustomization_C::BndEvt__UI_TabbedCustomization_LobbyMusicTab_K2Node_ComponentBoundEvent_8_TabReleased__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_TabbedCustomization::UI_TabbedCustomization_C::BndEvt__UI_TabbedCustomization_SurvivorSoundsTab_K2Node_ComponentBoundEvent_10_TabReleased__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_TabbedCustomization::UI_TabbedCustomization_C::BndEvt__UI_TabbedCustomization_PuzzleSoundsTab_K2Node_ComponentBoundEvent_11_TabReleased__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_TabbedCustomization::UI_TabbedCustomization_C::BndEvt__UI_TabbedCustomization_UI_Appearance_K2Node_ComponentBoundEvent_12_ChangedAppearance__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_TabbedCustomization::UI_TabbedCustomization_C::ChangedAppearance__DelegateSignature() {
    return;
}
