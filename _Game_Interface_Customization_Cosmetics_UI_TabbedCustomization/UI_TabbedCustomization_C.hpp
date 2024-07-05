#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct TextBlock;
}
namespace _Game_Interface_Customization_Cosmetics_UI_CustomizationTab {
struct UI_CustomizationTab_C;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct Overlay;
}
namespace _Script_UMG {
struct WidgetSwitcher;
}
namespace _Script_UMG {
struct SizeBox;
}
namespace _Game_Interface_Customization_Cosmetics_UI_Appearance {
struct UI_Appearance_C;
}
namespace _Game_Interface_Customization_Cosmetics_UI_CosmeticInfo {
struct UI_CosmeticInfo_C;
}
namespace _Game_Interface_Customization_Cosmetics_UI_Screens {
struct UI_Screens_C;
}
namespace _Game_Interface_Customization_Personalization_UI_SoundPackSelection {
struct UI_SoundPackSelection_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_Customization_Cosmetics_UI_TabbedCustomization {
#pragma pack(push, 1)
struct UI_TabbedCustomization_C : public _Script_UMG::UserWidget {
    private: char pad_260[0xa0]; public:
    void* get_UberGraphFrame();
    _Game_Interface_Customization_Cosmetics_UI_CustomizationTab::UI_CustomizationTab_C*& get_AmbientMusicTab();
    _Script_UMG::TextBlock*& get_CategoryText();
    _Game_Interface_Customization_Cosmetics_UI_CustomizationTab::UI_CustomizationTab_C*& get_ChaseMusicTab();
    _Game_Interface_Customization_Cosmetics_UI_CustomizationTab::UI_CustomizationTab_C*& get_CustomizationTab();
    _Script_UMG::Overlay*& get_DummyEmptyBox();
    _Game_Interface_Customization_Cosmetics_UI_CustomizationTab::UI_CustomizationTab_C*& get_LoadingScreensTab();
    _Game_Interface_Customization_Cosmetics_UI_CustomizationTab::UI_CustomizationTab_C*& get_LobbyMusicTab();
    _Script_UMG::WidgetSwitcher*& get_Previews();
    _Script_UMG::WidgetSwitcher*& get_PrimarySwitcher();
    _Game_Interface_Customization_Cosmetics_UI_CustomizationTab::UI_CustomizationTab_C*& get_PuzzleSoundsTab();
    _Script_UMG::Image*& get_ScreenPreview();
    _Script_UMG::SizeBox*& get_ScreenPreviewSizer();
    _Game_Interface_Customization_Cosmetics_UI_CustomizationTab::UI_CustomizationTab_C*& get_SurvivorSoundsTab();
    _Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C*& get_UI_Appearance();
    _Game_Interface_Customization_Cosmetics_UI_CosmeticInfo::UI_CosmeticInfo_C*& get_UI_CosmeticInfo();
    _Game_Interface_Customization_Cosmetics_UI_Screens::UI_Screens_C*& get_UI_Screens();
    _Game_Interface_Customization_Personalization_UI_SoundPackSelection::UI_SoundPackSelection_C*& get_UI_SoundPackSelection();
    void* get_ChangedAppearance();
    static _Script_CoreUObject::Class* static_class();
    void Update_Localization();
    void PreConstruct0(bool IsDesignTime);
    void Construct0();
    void BndEvt__UI_TabbedCustomization_UI_Screens_K2Node_ComponentBoundEvent_0_RequestScreenPreview__DelegateSignature(void* Screen);
    void BndEvt__UI_TabbedCustomization_UI_Appearance_K2Node_ComponentBoundEvent_1_Appearance_HoveredItem__DelegateSignature(int32_t ID);
    void BndEvt__UI_TabbedCustomization_UI_SoundPackSelection_K2Node_ComponentBoundEvent_2_SoundPacksRequestChangeText__DelegateSignature(void* Title);
    void BndEvt__UI_TabbedCustomization_UI_Appearance_K2Node_ComponentBoundEvent_3_Appearance_RequestTitleChange__DelegateSignature(void* Title);
    void ChangeTitle(void* NewTitle);
    void BndEvt__UI_TabbedCustomization_UI_Appearance_K2Node_ComponentBoundEvent_4_Appearance_RequestHideCosmeticInfo__DelegateSignature();
    void BndEvt__UI_TabbedCustomization_CustomizationTab_K2Node_ComponentBoundEvent_5_TabReleased__DelegateSignature();
    void BndEvt__UI_TabbedCustomization_Wallpapers_K2Node_ComponentBoundEvent_6_TabReleased__DelegateSignature();
    void BndEvt__UI_TabbedCustomization_ChaseMusicTab_K2Node_ComponentBoundEvent_7_TabReleased__DelegateSignature();
    void BndEvt__UI_TabbedCustomization_LobbyMusicTab_K2Node_ComponentBoundEvent_8_TabReleased__DelegateSignature();
    void BndEvt__UI_TabbedCustomization_AmbientMusicTab_K2Node_ComponentBoundEvent_9_TabReleased__DelegateSignature();
    void BndEvt__UI_TabbedCustomization_SurvivorSoundsTab_K2Node_ComponentBoundEvent_10_TabReleased__DelegateSignature();
    void BndEvt__UI_TabbedCustomization_PuzzleSoundsTab_K2Node_ComponentBoundEvent_11_TabReleased__DelegateSignature();
    void BndEvt__UI_TabbedCustomization_UI_Appearance_K2Node_ComponentBoundEvent_12_ChangedAppearance__DelegateSignature();
    void ExecuteUbergraph_UI_TabbedCustomization(int32_t EntryPoint);
    void ChangedAppearance__DelegateSignature();
}; // Size: 0x300
#pragma pack(pop)
}
