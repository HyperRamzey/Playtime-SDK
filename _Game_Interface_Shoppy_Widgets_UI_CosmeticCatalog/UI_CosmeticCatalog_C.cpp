#include "..\FUObjectArray.hpp"
#include "..\_Game_Interface_Customization_Cosmetics_UI_ColorSelector\UI_ColorSelector_C.hpp"
#include "..\_Game_Interface_Customization_Emotes_UI_EmoteHolder\UI_EmoteHolder_C.hpp"
#include "..\_Game_Interface_General_UI_BasicButton\UI_BasicButton_C.hpp"
#include "..\_Game_Interface_MainMenu_Modals_UI_NewPresetModal\UI_NewPresetModal_C.hpp"
#include "..\_Game_Interface_Shoppy_Widgets_UI_CharacterStore\UI_CharacterStore_C.hpp"
#include "UI_CosmeticCatalog_C.hpp"
#include "..\_Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab\UI_CosmeticCatalogTab_C.hpp"
#include "..\_Game_Interface_Shoppy_Widgets_UI_FilterTab\UI_FilterTab_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Playtime_Multiplayer\CustomizationSaveGame.hpp"
#include "..\_Script_Playtime_Multiplayer\PresetSlot.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\HorizontalBox.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\Overlay.hpp"
#include "..\_Script_UMG\PanelWidget.hpp"
#include "..\_Script_UMG\SizeBox.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UniformGridPanel.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
#include "..\_Script_UMG\WidgetSwitcher.hpp"
_Script_UMG::UniformGridPanel*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_BundleGrid() {
    return *(_Script_UMG::UniformGridPanel**)((uintptr_t)this + 0x290);
}
_Script_UMG::UniformGridPanel*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_BoxyGrid() {
    return *(_Script_UMG::UniformGridPanel**)((uintptr_t)this + 0x288);
}
_Script_UMG::UniformGridPanel*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_BoxyEmoteGrid() {
    return *(_Script_UMG::UniformGridPanel**)((uintptr_t)this + 0x280);
}
_Script_UMG::UniformGridPanel*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_AmbientSoundGrid() {
    return *(_Script_UMG::UniformGridPanel**)((uintptr_t)this + 0x270);
}
void* _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
void* _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_SpecialistSoundCards() {
    return (void*)((uintptr_t)this + 0x5e0);
}
_Script_UMG::Overlay*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_NewPresetContainer() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x388);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_NewAnimation() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
_Game_Interface_General_UI_BasicButton::UI_BasicButton_C*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_SavePreset() {
    return *(_Game_Interface_General_UI_BasicButton::UI_BasicButton_C**)((uintptr_t)this + 0x3e0);
}
_Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_AmbientSoundTab() {
    return *(_Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C**)((uintptr_t)this + 0x278);
}
_Script_UMG::Overlay*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_BundleTitle() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x298);
}
_Script_UMG::Image*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_BundleTitleBackground() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2a0);
}
_Script_UMG::TextBlock*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_BundleTitleText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2a8);
}
_Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_MonsterSkinsTab() {
    return *(_Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C**)((uintptr_t)this + 0x368);
}
void* _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_ItemSelected() {
    return (void*)((uintptr_t)this + 0x490);
}
_Script_UMG::Button*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_Button_131() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x2b0);
}
_Script_UMG::WidgetSwitcher*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_ContentSwitcher() {
    return *(_Script_UMG::WidgetSwitcher**)((uintptr_t)this + 0x2b8);
}
_Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_ShoesTab() {
    return *(_Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C**)((uintptr_t)this + 0x400);
}
void _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::BndEvt__UI_CosmeticCatalog_UI_NewPresetModal_K2Node_ComponentBoundEvent_5_WantsToHide__DelegateSignature() {
    return;
}
_Script_UMG::UniformGridPanel*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_EmotesGrid() {
    return *(_Script_UMG::UniformGridPanel**)((uintptr_t)this + 0x2c0);
}
_Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_LobbySoundTab() {
    return *(_Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C**)((uintptr_t)this + 0x338);
}
_Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_EmotesTab() {
    return *(_Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C**)((uintptr_t)this + 0x2c8);
}
_Script_UMG::UniformGridPanel*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_PresetGrid() {
    return *(_Script_UMG::UniformGridPanel**)((uintptr_t)this + 0x3b0);
}
void* _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::Get_Current_Grid_Children() {
    return;
}
_Script_UMG::HorizontalBox*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_EmptyTabs() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x2d0);
}
_Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_LeftHandTab() {
    return *(_Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C**)((uintptr_t)this + 0x318);
}
_Script_UMG::UniformGridPanel*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_GrabPackGrid() {
    return *(_Script_UMG::UniformGridPanel**)((uintptr_t)this + 0x2d8);
}
_Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_GrabpackTab() {
    return *(_Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C**)((uintptr_t)this + 0x2e0);
}
_Game_Interface_MainMenu_Modals_UI_NewPresetModal::UI_NewPresetModal_C*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_UI_NewPresetModal() {
    return *(_Game_Interface_MainMenu_Modals_UI_NewPresetModal::UI_NewPresetModal_C**)((uintptr_t)this + 0x478);
}
_Script_UMG::UniformGridPanel*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_PantsGrid() {
    return *(_Script_UMG::UniformGridPanel**)((uintptr_t)this + 0x3a0);
}
_Script_UMG::UniformGridPanel*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_HatGrid() {
    return *(_Script_UMG::UniformGridPanel**)((uintptr_t)this + 0x2e8);
}
_Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_HatTab() {
    return *(_Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C**)((uintptr_t)this + 0x2f0);
}
_Script_UMG::UniformGridPanel*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_HuggyEmoteGrid() {
    return *(_Script_UMG::UniformGridPanel**)((uintptr_t)this + 0x2f8);
}
_Script_UMG::Image*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_TitleBackground() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x450);
}
_Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_ShirtTab() {
    return *(_Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C**)((uintptr_t)this + 0x3f0);
}
_Script_UMG::UniformGridPanel*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_HuggyGrid() {
    return *(_Script_UMG::UniformGridPanel**)((uintptr_t)this + 0x300);
}
_Script_UMG::HorizontalBox*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_MonsterTabs() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x380);
}
_Script_UMG::Image*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_Image_134() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x308);
}
_Script_UMG::UniformGridPanel*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_LeftHandGrid() {
    return *(_Script_UMG::UniformGridPanel**)((uintptr_t)this + 0x310);
}
_Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_MonsterSoundTab() {
    return *(_Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C**)((uintptr_t)this + 0x378);
}
void* _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_HatCards() {
    return (void*)((uintptr_t)this + 0x4f8);
}
_Script_UMG::TextBlock*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_TitleText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x458);
}
_Script_UMG::UniformGridPanel*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_LoadingScreenGrid() {
    return *(_Script_UMG::UniformGridPanel**)((uintptr_t)this + 0x320);
}
_Script_UMG::Image*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_LoadingScreenPreview() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x328);
}
_Script_UMG::UniformGridPanel*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_LobbySoundGrid() {
    return *(_Script_UMG::UniformGridPanel**)((uintptr_t)this + 0x330);
}
_Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_OutfitTab() {
    return *(_Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C**)((uintptr_t)this + 0x398);
}
_Script_UMG::UniformGridPanel*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_MaskGrid() {
    return *(_Script_UMG::UniformGridPanel**)((uintptr_t)this + 0x340);
}
void* _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_CurrentCosmeticType() {
    return (void*)((uintptr_t)this + 0x4a1);
}
_Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_MaskTab() {
    return *(_Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C**)((uintptr_t)this + 0x348);
}
_Script_UMG::HorizontalBox*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_SpecialistTabs() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x430);
}
_Script_UMG::UniformGridPanel*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_MommyEmoteGrid() {
    return *(_Script_UMG::UniformGridPanel**)((uintptr_t)this + 0x350);
}
_Script_UMG::UniformGridPanel*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_MommyGrid() {
    return *(_Script_UMG::UniformGridPanel**)((uintptr_t)this + 0x358);
}
void* _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_HuggyEmoteCards() {
    return (void*)((uintptr_t)this + 0x590);
}
_Script_UMG::UniformGridPanel*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_RightHandGrid() {
    return *(_Script_UMG::UniformGridPanel**)((uintptr_t)this + 0x3d0);
}
_Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_MonsterEmotesTab() {
    return *(_Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C**)((uintptr_t)this + 0x360);
}
_Script_UMG::UniformGridPanel*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_MonsterSoundGrid() {
    return *(_Script_UMG::UniformGridPanel**)((uintptr_t)this + 0x370);
}
void _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::BndEvt__UI_CosmeticCatalog_Button_131_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
_Script_UMG::UniformGridPanel*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_OutfitGrid() {
    return *(_Script_UMG::UniformGridPanel**)((uintptr_t)this + 0x390);
}
_Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_PantsTab() {
    return *(_Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C**)((uintptr_t)this + 0x3a8);
}
void _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::TryLoadInventory() {
    return;
}
_Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_PresetsTab() {
    return *(_Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C**)((uintptr_t)this + 0x3b8);
}
_Script_UMG::UniformGridPanel*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_PuzzleSoundGrid() {
    return *(_Script_UMG::UniformGridPanel**)((uintptr_t)this + 0x3c0);
}
_Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_PuzzleSoundTab() {
    return *(_Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C**)((uintptr_t)this + 0x3c8);
}
_Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_RightHandTab() {
    return *(_Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C**)((uintptr_t)this + 0x3d8);
}
_Script_UMG::UniformGridPanel*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_ShirtGrid() {
    return *(_Script_UMG::UniformGridPanel**)((uintptr_t)this + 0x3e8);
}
_Script_UMG::UniformGridPanel*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_ShoesGrid() {
    return *(_Script_UMG::UniformGridPanel**)((uintptr_t)this + 0x3f8);
}
_Script_UMG::UniformGridPanel*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_SkinGrid() {
    return *(_Script_UMG::UniformGridPanel**)((uintptr_t)this + 0x408);
}
_Script_UMG::Overlay*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_Title() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x448);
}
_Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_SkinTab() {
    return *(_Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C**)((uintptr_t)this + 0x410);
}
_Script_UMG::HorizontalBox*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_SoundPackTabs() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x418);
}
_Script_UMG::UniformGridPanel*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_SpecialistEmoteGrid() {
    return *(_Script_UMG::UniformGridPanel**)((uintptr_t)this + 0x420);
}
void _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::SwitchCosmeticType__DelegateSignature(void* NewType) {
    return;
}
_Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_SpecialistSoundTab() {
    return *(_Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C**)((uintptr_t)this + 0x428);
}
_Script_UMG::UniformGridPanel*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_SurvivorSoundGrid() {
    return *(_Script_UMG::UniformGridPanel**)((uintptr_t)this + 0x438);
}
_Script_UMG::WidgetSwitcher*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_TabSwitcher() {
    return *(_Script_UMG::WidgetSwitcher**)((uintptr_t)this + 0x440);
}
_Game_Interface_Customization_Cosmetics_UI_ColorSelector::UI_ColorSelector_C*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_UI_ColorSelector() {
    return *(_Game_Interface_Customization_Cosmetics_UI_ColorSelector::UI_ColorSelector_C**)((uintptr_t)this + 0x460);
}
void* _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::GetPresetsByType(_Script_Playtime_Multiplayer::CustomizationSaveGame* SaveGame) {
    return;
}
_Game_Interface_Customization_Emotes_UI_EmoteHolder::UI_EmoteHolder_C*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_UI_EmoteHolder() {
    return *(_Game_Interface_Customization_Emotes_UI_EmoteHolder::UI_EmoteHolder_C**)((uintptr_t)this + 0x468);
}
_Game_Interface_Shoppy_Widgets_UI_FilterTab::UI_FilterTab_C*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_UI_FilterTab() {
    return *(_Game_Interface_Shoppy_Widgets_UI_FilterTab::UI_FilterTab_C**)((uintptr_t)this + 0x470);
}
void* _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_TabArray() {
    return (void*)((uintptr_t)this + 0x480);
}
void* _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_CurrentCharacterType() {
    return (void*)((uintptr_t)this + 0x4a0);
}
void* _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_Filter() {
    return (void*)((uintptr_t)this + 0x4a2);
}
void* _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_SwitchCosmeticType() {
    return (void*)((uintptr_t)this + 0x4a8);
}
void* _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_Inventory() {
    return (void*)((uintptr_t)this + 0x4b8);
}
void* _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_LeftHandCards() {
    return (void*)((uintptr_t)this + 0x4c8);
}
void* _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_GrabPackCards() {
    return (void*)((uintptr_t)this + 0x4d8);
}
void* _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_SkinCards() {
    return (void*)((uintptr_t)this + 0x4e8);
}
void* _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_MaskCards() {
    return (void*)((uintptr_t)this + 0x508);
}
void* _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_ShirtCards() {
    return (void*)((uintptr_t)this + 0x518);
}
_Script_Playtime_Multiplayer::CustomizationSaveGame*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_Customization_Save_Game() {
    return *(_Script_Playtime_Multiplayer::CustomizationSaveGame**)((uintptr_t)this + 0x658);
}
void* _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_PantsCards() {
    return (void*)((uintptr_t)this + 0x528);
}
void* _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_ShoesCards() {
    return (void*)((uintptr_t)this + 0x538);
}
void* _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_BoxyCards() {
    return (void*)((uintptr_t)this + 0x548);
}
void* _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_HuggyCards() {
    return (void*)((uintptr_t)this + 0x558);
}
void* _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_MommyCards() {
    return (void*)((uintptr_t)this + 0x568);
}
void* _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_CurrentItemType() {
    return (void*)((uintptr_t)this + 0x578);
}
void* _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_CurrentSoundPackType() {
    return (void*)((uintptr_t)this + 0x579);
}
void* _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_MommyEmoteCards() {
    return (void*)((uintptr_t)this + 0x580);
}
void* _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_BoxyEmoteCards() {
    return (void*)((uintptr_t)this + 0x5a0);
}
void* _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_SpecialistEmoteCards() {
    return (void*)((uintptr_t)this + 0x5b0);
}
void* _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_LoadingScreenCards() {
    return (void*)((uintptr_t)this + 0x5c0);
}
void* _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_PuzzleSoundCards() {
    return (void*)((uintptr_t)this + 0x5d0);
}
void* _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_LobbySoundCards() {
    return (void*)((uintptr_t)this + 0x5f0);
}
void* _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_AmbientSoundCards() {
    return (void*)((uintptr_t)this + 0x600);
}
void* _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_MonsterSoundCards() {
    return (void*)((uintptr_t)this + 0x610);
}
bool _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_StoreCatalog() {
    return (*(uint8_t*)((uintptr_t)this + 0x620 + 0)) & 1 != 0;
}
void _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::set_StoreCatalog(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x620 + 0);
    *(uint8_t*)((uintptr_t)this + 0x620 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::AppliedPreset__DelegateSignature() {
    return;
}
void* _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_RightHandCards() {
    return (void*)((uintptr_t)this + 0x628);
}
int32_t& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_Item_ID() {
    return *(int32_t*)((uintptr_t)this + 0x638);
}
void* _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_BundleItemCards() {
    return (void*)((uintptr_t)this + 0x640);
}
void* _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_Tab_Style() {
    return (void*)((uintptr_t)this + 0x650);
}
void* _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_Presets() {
    return (void*)((uintptr_t)this + 0x660);
}
void* _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_AppliedPreset() {
    return (void*)((uintptr_t)this + 0x6b0);
}
void* _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_AddNewPreset() {
    return (void*)((uintptr_t)this + 0x6c0);
}
_Game_Interface_Shoppy_Widgets_UI_CharacterStore::UI_CharacterStore_C*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_UI_CharacterStore() {
    return *(_Game_Interface_Shoppy_Widgets_UI_CharacterStore::UI_CharacterStore_C**)((uintptr_t)this + 0x6d0);
}
void* _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_OutfitCards() {
    return (void*)((uintptr_t)this + 0x6d8);
}
bool _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::get_NoStoreCatalog() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e8 + 0)) & 1 != 0;
}
void _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::set_NoStoreCatalog(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/Shoppy/Widgets/UI_CosmeticCatalog.UI_CosmeticCatalog_C");
    return result;
}
void _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::ClearAllInventory() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::GetAllFeaturedItems(void*& CompareIDs, void*& IDs) {
    return;
}
bool _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::PresetNameSimilar(void*& TargetArray, void*& ItemToFind) {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::DestroyPreset(void* Preset, void* Type) {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::ApplyPreset(_Script_Playtime_Multiplayer::PresetSlot Preset, void* Name) {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::HideColorSelecter() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::SortItemsByWidget(void*& Widgets, _Script_UMG::PanelWidget*& ActiveGrid) {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::IsListPopulated(bool& ListIsPopulated) {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::Populate_List(void* ItemType, void* CosmeticType, void* CharacterType, void* SoundPackType) {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::SortItemsByID(void*& InputPin, void*& OutputPin) {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::GetValidShopItems(void*& InIDs, void*& outIDs) {
    return;
}
_Script_UMG::SizeBox* _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::CreateSizeBox(float MaxSize) {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::Set_Active_Tab(_Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C* ActiveTab, void* ItemType, void* CosmeticType, void* SoundPackType) {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::BroadcastItemSelected(void* Name, int32_t PlayCoinPrice, int32_t TicketPrice, int32_t ItemId) {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::SwitchTabs(void* TabStyle, void* CurrentCharacterType, void* TitleText) {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::OnInitialized0() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::ApplyFilter(void* Filter) {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::SuccessfulInventoryGet(void*& Inventory) {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::FailedInventoryGet(void* ErrorMessage) {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::BndEvt__UI_CosmeticCatalog_UI_FilterTab_K2Node_ComponentBoundEvent_1_OpeningFilter__DelegateSignature() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::BndEvt__UI_CosmeticCatalog_UI_FilterTab_K2Node_ComponentBoundEvent_2_ClosingFilter__DelegateSignature() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::BndEvt__UI_CosmeticCatalog_UI_EmoteHolder_K2Node_ComponentBoundEvent_0_ClickedEmote__DelegateSignature(int32_t Index) {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::PopulateBundle(void*& BundleItemIDs) {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::OpenPresetTab(_Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C* ObjectReference, void* ItemType, void* CosmeticType, void* SoundPackType) {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::Refresh_Presets() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::BndEvt__UI_CosmeticCatalog_SavePreset_K2Node_ComponentBoundEvent_4_OnReleased__DelegateSignature() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::BndEvt__UI_CosmeticCatalog_UI_NewPresetModal_K2Node_ComponentBoundEvent_7_SubmitNewPreset__DelegateSignature(void* Name) {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::ExecuteUbergraph_UI_CosmeticCatalog(int32_t EntryPoint) {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::AddNewPreset__DelegateSignature(void* PresetName) {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C::ItemSelected__DelegateSignature(void* Name, int32_t PlayCoinPrice, int32_t TicketPrice, int32_t ItemId) {
    return;
}
