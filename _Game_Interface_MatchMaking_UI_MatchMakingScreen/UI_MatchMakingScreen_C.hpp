#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Game_Interface_MatchMaking_UI_MatchmakingMenuButton {
struct UI_MatchmakingMenuButton_C;
}
namespace _Script_UMG {
struct Overlay;
}
namespace _Script_UMG {
struct Image;
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
namespace _Script_UMG {
struct SizeBox;
}
namespace _Game_Interface_MainMenu_Widgets_UI_InvitePlayerButton {
struct UI_InvitePlayerButton_C;
}
namespace _Game_Interface_Customization_Perks_UI_Perks {
struct UI_Perks_C;
}
namespace _Script_UMG {
struct VerticalBox;
}
namespace _Game_Interface_MainMenu_Widgets_UI_SubMenuButton {
struct UI_SubMenuButton_C;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Game_Interface_General_UI_BackButton {
struct UI_BackButton_C;
}
namespace _Game_Gameplay_Game_MonsterSelector_BP_MonsterContainer {
struct BP_MonsterContainer_C;
}
namespace _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog {
struct UI_CosmeticCatalog_C;
}
namespace _Game_Interface_MainMenu_Modals_UI_JoinLobbyModal {
struct UI_JoinLobbyModal_C;
}
namespace _Game_Interface_MainMenu_Matchmaking_UI_MatchmakingStatus {
struct UI_MatchmakingStatus_C;
}
namespace _Game_Interface_Customization_Sabotages_UI_Sabotages {
struct UI_Sabotages_C;
}
namespace _Game_Interface_MainMenu_BP_CameraMoverMain {
struct BP_CameraMoverMain_C;
}
namespace _Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter {
struct BP_CustomizationMenuCharacter_C;
}
namespace _Game_Interface_Customization_Cosmetics_UI_ColorItem {
struct UI_ColorItem_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
struct Widget;
}
namespace _Game_Interface_MatchMaking_UI_MatchMakingScreen {
#pragma pack(push, 1)
struct UI_MatchMakingScreen_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x1a8]; public:
    void* get_UberGraphFrame();
    _Game_Interface_MatchMaking_UI_MatchmakingMenuButton::UI_MatchmakingMenuButton_C*& get_AppearanceButton();
    _Script_UMG::Image*& get_Backstory_BG();
    _Game_Interface_MatchMaking_UI_MatchmakingMenuButton::UI_MatchmakingMenuButton_C*& get_BackstoryButton();
    _Script_UMG::HorizontalBox*& get_CharacterSwitcher();
    _Game_Interface_MatchMaking_UI_MatchmakingMenuButton::UI_MatchmakingMenuButton_C*& get_CustomizationButton();
    _Script_UMG::Overlay*& get_CustomizationMenu();
    _Game_Interface_MatchMaking_UI_MatchmakingMenuButton::UI_MatchmakingMenuButton_C*& get_EmoteButton();
    _Script_UMG::Image*& get_Image_202();
    _Script_UMG::Image*& get_Image_1015();
    _Game_Interface_MainMenu_Widgets_UI_InvitePlayerButton::UI_InvitePlayerButton_C*& get_InvitePlayer1();
    _Game_Interface_MainMenu_Widgets_UI_InvitePlayerButton::UI_InvitePlayerButton_C*& get_InvitePlayer2();
    _Game_Interface_MainMenu_Widgets_UI_InvitePlayerButton::UI_InvitePlayerButton_C*& get_InvitePlayer3();
    _Game_Interface_MainMenu_Widgets_UI_InvitePlayerButton::UI_InvitePlayerButton_C*& get_InvitePlayer4();
    _Game_Interface_MainMenu_Widgets_UI_InvitePlayerButton::UI_InvitePlayerButton_C*& get_InvitePlayer5();
    _Game_Interface_MainMenu_Widgets_UI_InvitePlayerButton::UI_InvitePlayerButton_C*& get_InvitePlayer6();
    _Script_UMG::SizeBox*& get_LButtonContainer();
    _Script_UMG::Image*& get_LeftArrow();
    _Script_UMG::Button*& get_LeftButton();
    _Game_Interface_MatchMaking_UI_MatchmakingMenuButton::UI_MatchmakingMenuButton_C*& get_LoadingScreenButton();
    _Game_Interface_MatchMaking_UI_MatchmakingMenuButton::UI_MatchmakingMenuButton_C*& get_LobbyCodeButton();
    _Script_UMG::Overlay*& get_MainMenu();
    _Script_UMG::WidgetSwitcher*& get_MainSwitcher();
    _Script_UMG::Overlay*& get_ModalContainer();
    _Game_Interface_MatchMaking_UI_MatchmakingMenuButton::UI_MatchmakingMenuButton_C*& get_PerksButton();
    _Script_UMG::VerticalBox*& get_PrivateMatchButtons();
    _Script_UMG::SizeBox*& get_RButtonContainer();
    _Script_UMG::Image*& get_RightArrow();
    _Script_UMG::Button*& get_RightButton();
    _Game_Interface_MatchMaking_UI_MatchmakingMenuButton::UI_MatchmakingMenuButton_C*& get_SoundPackButton();
    _Script_UMG::Overlay*& get_Story();
    _Game_Interface_MatchMaking_UI_MatchmakingMenuButton::UI_MatchmakingMenuButton_C*& get_SwitchCharactersButton();
    _Game_Interface_MainMenu_Widgets_UI_SubMenuButton::UI_SubMenuButton_C*& get_SwitchCharLeft();
    _Game_Interface_MainMenu_Widgets_UI_SubMenuButton::UI_SubMenuButton_C*& get_SwitchCharRight();
    _Script_UMG::TextBlock*& get_TextBlock_127();
    _Script_UMG::Image*& get_TitleBackground();
    _Script_UMG::TextBlock*& get_TitleText();
    _Game_Interface_General_UI_BackButton::UI_BackButton_C*& get_UI_BackButton();
    _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C*& get_UI_CosmeticCatalog();
    _Game_Interface_MainMenu_Modals_UI_JoinLobbyModal::UI_JoinLobbyModal_C*& get_UI_JoinLobbyModal();
    _Game_Interface_MainMenu_Matchmaking_UI_MatchmakingStatus::UI_MatchmakingStatus_C*& get_UI_MatchmakingStatus();
    _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C*& get_UI_Perks();
    _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C*& get_UI_Sabotages();
    void* get_BackPressed();
    int32_t& get_SubMenuLevel();
    void* get_CurrentCharacter();
    _Game_Gameplay_Game_MonsterSelector_BP_MonsterContainer::BP_MonsterContainer_C*& get_CachedMonsterContainer();
    _Game_Interface_MainMenu_BP_CameraMoverMain::BP_CameraMoverMain_C*& get_CamMover();
    bool get_Customizing();
    void set_Customizing(bool value);
    _Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter::BP_CustomizationMenuCharacter_C*& get_MenuCharacter();
    int32_t& get_Item_ID();
    void* get_RefreshInviteTimer();
    _Game_Interface_Customization_Cosmetics_UI_ColorItem::UI_ColorItem_C*& get_CurrentColor();
    static _Script_CoreUObject::Class* static_class();
    void RefreshPlayerInviteButtons();
    void BndEvt__UI_MatchMakingScreen_CustomizationButton_K2Node_ComponentBoundEvent_3_ButtonPressed__DelegateSignature();
    void BndEvt__UI_MatchMakingScreen_AppearanceButton_K2Node_ComponentBoundEvent_4_ButtonPressed__DelegateSignature();
    void BndEvt__UI_MatchMakingScreen_SoundPackButton_K2Node_ComponentBoundEvent_6_ButtonPressed__DelegateSignature();
    void BndEvt__UI_MatchMakingScreen_LoadingScreenButton_K2Node_ComponentBoundEvent_7_ButtonPressed__DelegateSignature();
    void LoadCatalog(void* ItemType, void* CosmeticType, void* CharacterType, void* SoundPackType, void* TabStyle, void* TitleText);
    void Construct0();
    void SetScreenStyle(void* CharacterType, bool PrivateMatch);
    void BndEvt__UI_MatchMakingScreen_LeftButton_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__UI_MatchMakingScreen_RightButton_K2Node_ComponentBoundEvent_9_OnButtonReleasedEvent__DelegateSignature();
    void SwitchCameras(bool SwitchToMonster);
    void BndEvt__UI_MatchMakingScreen_LobbyCodeButton_K2Node_ComponentBoundEvent_10_ButtonPressed__DelegateSignature();
    void BndEvt__UI_MatchMakingScreen_UI_JoinLobbyModal_K2Node_ComponentBoundEvent_11_WantsToHide__DelegateSignature();
    void SwitchWidget(_Script_UMG::Widget* Widget);
    void BndEvt__UI_MatchMakingScreen_UI_CosmeticCatalog_K2Node_ComponentBoundEvent_12_ItemSelected__DelegateSignature(void* Name, int32_t PlayCoinPrice, int32_t TicketPrice, int32_t ItemId);
    void BndEvt__UI_MatchMakingScreen_SwitchCharactersButton_K2Node_ComponentBoundEvent_13_ButtonPressed__DelegateSignature();
    void BndEvt__UI_MatchMakingScreen_UI_CosmeticCatalog_K2Node_ComponentBoundEvent_14_SwitchCosmeticType__DelegateSignature(void* NewType);
    void BndEvt__UI_MatchMakingScreen_UI_BackButton_K2Node_ComponentBoundEvent_2_Released__DelegateSignature();
    void BndEvt__UI_MatchMakingScreen_BackstoryButton_K2Node_ComponentBoundEvent_1_ButtonPressed__DelegateSignature();
    void BndEvt__UI_MatchMakingScreen_PerksButton_K2Node_ComponentBoundEvent_0_ButtonPressed__DelegateSignature();
    void OnInitialized0();
    void UpdateCosmeticColors(int32_t ColorIndex, _Game_Interface_Customization_Cosmetics_UI_ColorItem::UI_ColorItem_C* SelectedColor);
    void SillyShit();
    void BndEvt__UI_MatchMakingScreen_UI_CosmeticCatalog_K2Node_ComponentBoundEvent_5_AppliedPreset__DelegateSignature();
    void BndEvt__UI_MatchMakingScreen_UI_CosmeticCatalog_K2Node_ComponentBoundEvent_15_AddNewPreset__DelegateSignature(void* PresetName);
    void BndEvt__UI_MatchMakingScreen_EmoteButton_K2Node_ComponentBoundEvent_16_ButtonPressed__DelegateSignature();
    void BndEvt__UI_MatchMakingScreen_SwitchCharLeft_K2Node_ComponentBoundEvent_17_ButtonRelease__DelegateSignature();
    void BndEvt__UI_MatchMakingScreen_SwitchCharRight_K2Node_ComponentBoundEvent_18_ButtonRelease__DelegateSignature();
    void ExecuteUbergraph_UI_MatchMakingScreen(int32_t EntryPoint);
    void BackPressed__DelegateSignature();
}; // Size: 0x408
#pragma pack(pop)
}
