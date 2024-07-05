#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Playtime_Multiplayer\PresetSlot.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_UMG {
struct UniformGridPanel;
}
namespace _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab {
struct UI_CosmeticCatalogTab_C;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_Playtime_Multiplayer {
struct CustomizationSaveGame;
}
namespace _Script_UMG {
struct PanelWidget;
}
namespace _Script_UMG {
struct Overlay;
}
namespace _Script_UMG {
struct WidgetSwitcher;
}
namespace _Script_UMG {
struct Button;
}
namespace _Script_UMG {
struct HorizontalBox;
}
namespace _Game_Interface_General_UI_BasicButton {
struct UI_BasicButton_C;
}
namespace _Game_Interface_Customization_Cosmetics_UI_ColorSelector {
struct UI_ColorSelector_C;
}
namespace _Script_UMG {
struct SizeBox;
}
namespace _Game_Interface_Customization_Emotes_UI_EmoteHolder {
struct UI_EmoteHolder_C;
}
namespace _Game_Interface_Shoppy_Widgets_UI_FilterTab {
struct UI_FilterTab_C;
}
namespace _Game_Interface_MainMenu_Modals_UI_NewPresetModal {
struct UI_NewPresetModal_C;
}
namespace _Game_Interface_Shoppy_Widgets_UI_CharacterStore {
struct UI_CharacterStore_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog {
#pragma pack(push, 1)
struct UI_CosmeticCatalog_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x490]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_NewAnimation();
    _Script_UMG::UniformGridPanel*& get_AmbientSoundGrid();
    _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C*& get_AmbientSoundTab();
    _Script_UMG::UniformGridPanel*& get_BoxyEmoteGrid();
    _Script_UMG::UniformGridPanel*& get_BoxyGrid();
    _Script_UMG::UniformGridPanel*& get_BundleGrid();
    _Script_UMG::Overlay*& get_BundleTitle();
    _Script_UMG::Image*& get_BundleTitleBackground();
    _Script_UMG::TextBlock*& get_BundleTitleText();
    _Script_UMG::Button*& get_Button_131();
    _Script_UMG::WidgetSwitcher*& get_ContentSwitcher();
    _Script_UMG::UniformGridPanel*& get_EmotesGrid();
    _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C*& get_EmotesTab();
    _Script_UMG::HorizontalBox*& get_EmptyTabs();
    _Script_UMG::UniformGridPanel*& get_GrabPackGrid();
    _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C*& get_GrabpackTab();
    _Script_UMG::UniformGridPanel*& get_HatGrid();
    _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C*& get_HatTab();
    _Script_UMG::UniformGridPanel*& get_HuggyEmoteGrid();
    _Script_UMG::UniformGridPanel*& get_HuggyGrid();
    _Script_UMG::Image*& get_Image_134();
    _Script_UMG::UniformGridPanel*& get_LeftHandGrid();
    _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C*& get_LeftHandTab();
    _Script_UMG::UniformGridPanel*& get_LoadingScreenGrid();
    _Script_UMG::Image*& get_LoadingScreenPreview();
    _Script_UMG::UniformGridPanel*& get_LobbySoundGrid();
    _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C*& get_LobbySoundTab();
    _Script_UMG::UniformGridPanel*& get_MaskGrid();
    _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C*& get_MaskTab();
    _Script_UMG::UniformGridPanel*& get_MommyEmoteGrid();
    _Script_UMG::UniformGridPanel*& get_MommyGrid();
    _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C*& get_MonsterEmotesTab();
    _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C*& get_MonsterSkinsTab();
    _Script_UMG::UniformGridPanel*& get_MonsterSoundGrid();
    _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C*& get_MonsterSoundTab();
    _Script_UMG::HorizontalBox*& get_MonsterTabs();
    _Script_UMG::Overlay*& get_NewPresetContainer();
    _Script_UMG::UniformGridPanel*& get_OutfitGrid();
    _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C*& get_OutfitTab();
    _Script_UMG::UniformGridPanel*& get_PantsGrid();
    _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C*& get_PantsTab();
    _Script_UMG::UniformGridPanel*& get_PresetGrid();
    _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C*& get_PresetsTab();
    _Script_UMG::UniformGridPanel*& get_PuzzleSoundGrid();
    _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C*& get_PuzzleSoundTab();
    _Script_UMG::UniformGridPanel*& get_RightHandGrid();
    _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C*& get_RightHandTab();
    _Game_Interface_General_UI_BasicButton::UI_BasicButton_C*& get_SavePreset();
    _Script_UMG::UniformGridPanel*& get_ShirtGrid();
    _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C*& get_ShirtTab();
    _Script_UMG::UniformGridPanel*& get_ShoesGrid();
    _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C*& get_ShoesTab();
    _Script_UMG::UniformGridPanel*& get_SkinGrid();
    _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C*& get_SkinTab();
    _Script_UMG::HorizontalBox*& get_SoundPackTabs();
    _Script_UMG::UniformGridPanel*& get_SpecialistEmoteGrid();
    _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C*& get_SpecialistSoundTab();
    _Script_UMG::HorizontalBox*& get_SpecialistTabs();
    _Script_UMG::UniformGridPanel*& get_SurvivorSoundGrid();
    _Script_UMG::WidgetSwitcher*& get_TabSwitcher();
    _Script_UMG::Overlay*& get_Title();
    _Script_UMG::Image*& get_TitleBackground();
    _Script_UMG::TextBlock*& get_TitleText();
    _Game_Interface_Customization_Cosmetics_UI_ColorSelector::UI_ColorSelector_C*& get_UI_ColorSelector();
    _Game_Interface_Customization_Emotes_UI_EmoteHolder::UI_EmoteHolder_C*& get_UI_EmoteHolder();
    _Game_Interface_Shoppy_Widgets_UI_FilterTab::UI_FilterTab_C*& get_UI_FilterTab();
    _Game_Interface_MainMenu_Modals_UI_NewPresetModal::UI_NewPresetModal_C*& get_UI_NewPresetModal();
    void* get_TabArray();
    void* get_ItemSelected();
    void* get_CurrentCharacterType();
    void* get_CurrentCosmeticType();
    void* get_Filter();
    void* get_SwitchCosmeticType();
    void* get_Inventory();
    void* get_LeftHandCards();
    void* get_GrabPackCards();
    void* get_SkinCards();
    void* get_HatCards();
    void* get_MaskCards();
    void* get_ShirtCards();
    void* get_PantsCards();
    void* get_ShoesCards();
    void* get_BoxyCards();
    void* get_HuggyCards();
    void* get_MommyCards();
    void* get_CurrentItemType();
    void* get_CurrentSoundPackType();
    void* get_MommyEmoteCards();
    void* get_HuggyEmoteCards();
    void* get_BoxyEmoteCards();
    void* get_SpecialistEmoteCards();
    void* get_LoadingScreenCards();
    void* get_PuzzleSoundCards();
    void* get_SpecialistSoundCards();
    void* get_LobbySoundCards();
    void* get_AmbientSoundCards();
    void* get_MonsterSoundCards();
    bool get_StoreCatalog();
    void set_StoreCatalog(bool value);
    void* get_RightHandCards();
    int32_t& get_Item_ID();
    void* get_BundleItemCards();
    void* get_Tab_Style();
    _Script_Playtime_Multiplayer::CustomizationSaveGame*& get_Customization_Save_Game();
    void* get_Presets();
    void* get_AppliedPreset();
    void* get_AddNewPreset();
    _Game_Interface_Shoppy_Widgets_UI_CharacterStore::UI_CharacterStore_C*& get_UI_CharacterStore();
    void* get_OutfitCards();
    bool get_NoStoreCatalog();
    void set_NoStoreCatalog(bool value);
    static _Script_CoreUObject::Class* static_class();
    void ClearAllInventory();
    void GetAllFeaturedItems(void*& CompareIDs, void*& IDs);
    void* Get_Current_Grid_Children();
    bool PresetNameSimilar(void*& TargetArray, void*& ItemToFind);
    void DestroyPreset(void* Preset, void* Type);
    void ApplyPreset(_Script_Playtime_Multiplayer::PresetSlot Preset, void* Name);
    void* GetPresetsByType(_Script_Playtime_Multiplayer::CustomizationSaveGame* SaveGame);
    void HideColorSelecter();
    void SortItemsByWidget(void*& Widgets, _Script_UMG::PanelWidget*& ActiveGrid);
    void IsListPopulated(bool& ListIsPopulated);
    void Populate_List(void* ItemType, void* CosmeticType, void* CharacterType, void* SoundPackType);
    void SortItemsByID(void*& InputPin, void*& OutputPin);
    void GetValidShopItems(void*& InIDs, void*& outIDs);
    _Script_UMG::SizeBox* CreateSizeBox(float MaxSize);
    void Set_Active_Tab(_Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C* ActiveTab, void* ItemType, void* CosmeticType, void* SoundPackType);
    void PreConstruct0(bool IsDesignTime);
    void BroadcastItemSelected(void* Name, int32_t PlayCoinPrice, int32_t TicketPrice, int32_t ItemId);
    void SwitchTabs(void* TabStyle, void* CurrentCharacterType, void* TitleText);
    void OnInitialized0();
    void ApplyFilter(void* Filter);
    void SuccessfulInventoryGet(void*& Inventory);
    void FailedInventoryGet(void* ErrorMessage);
    void BndEvt__UI_CosmeticCatalog_UI_FilterTab_K2Node_ComponentBoundEvent_1_OpeningFilter__DelegateSignature();
    void BndEvt__UI_CosmeticCatalog_UI_FilterTab_K2Node_ComponentBoundEvent_2_ClosingFilter__DelegateSignature();
    void BndEvt__UI_CosmeticCatalog_Button_131_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature();
    void TryLoadInventory();
    void BndEvt__UI_CosmeticCatalog_UI_EmoteHolder_K2Node_ComponentBoundEvent_0_ClickedEmote__DelegateSignature(int32_t Index);
    void PopulateBundle(void*& BundleItemIDs);
    void OpenPresetTab(_Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C* ObjectReference, void* ItemType, void* CosmeticType, void* SoundPackType);
    void Refresh_Presets();
    void BndEvt__UI_CosmeticCatalog_SavePreset_K2Node_ComponentBoundEvent_4_OnReleased__DelegateSignature();
    void BndEvt__UI_CosmeticCatalog_UI_NewPresetModal_K2Node_ComponentBoundEvent_5_WantsToHide__DelegateSignature();
    void BndEvt__UI_CosmeticCatalog_UI_NewPresetModal_K2Node_ComponentBoundEvent_7_SubmitNewPreset__DelegateSignature(void* Name);
    void ExecuteUbergraph_UI_CosmeticCatalog(int32_t EntryPoint);
    void AddNewPreset__DelegateSignature(void* PresetName);
    void AppliedPreset__DelegateSignature();
    void SwitchCosmeticType__DelegateSignature(void* NewType);
    void ItemSelected__DelegateSignature(void* Name, int32_t PlayCoinPrice, int32_t TicketPrice, int32_t ItemId);
}; // Size: 0x6f0
#pragma pack(pop)
}
