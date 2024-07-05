#include "..\FUObjectArray.hpp"
#include "..\_Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter\BP_CustomizationMenuCharacter_C.hpp"
#include "..\_Game_Gameplay_Game_MonsterSelector_BP_MonsterContainer\BP_MonsterContainer_C.hpp"
#include "..\_Game_Interface_Customization_Cosmetics_UI_ColorItem\UI_ColorItem_C.hpp"
#include "..\_Game_Interface_Customization_Perks_UI_Perks\UI_Perks_C.hpp"
#include "..\_Game_Interface_Customization_Sabotages_UI_Sabotages\UI_Sabotages_C.hpp"
#include "..\_Game_Interface_General_UI_BackButton\UI_BackButton_C.hpp"
#include "..\_Game_Interface_MainMenu_BP_CameraMoverMain\BP_CameraMoverMain_C.hpp"
#include "..\_Game_Interface_MainMenu_Matchmaking_UI_MatchmakingStatus\UI_MatchmakingStatus_C.hpp"
#include "..\_Game_Interface_MainMenu_Modals_UI_JoinLobbyModal\UI_JoinLobbyModal_C.hpp"
#include "..\_Game_Interface_MainMenu_Widgets_UI_InvitePlayerButton\UI_InvitePlayerButton_C.hpp"
#include "..\_Game_Interface_MainMenu_Widgets_UI_SubMenuButton\UI_SubMenuButton_C.hpp"
#include "UI_MatchMakingScreen_C.hpp"
#include "..\_Game_Interface_MatchMaking_UI_MatchmakingMenuButton\UI_MatchmakingMenuButton_C.hpp"
#include "..\_Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog\UI_CosmeticCatalog_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\HorizontalBox.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\Overlay.hpp"
#include "..\_Script_UMG\SizeBox.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\VerticalBox.hpp"
#include "..\_Script_UMG\Widget.hpp"
#include "..\_Script_UMG\WidgetSwitcher.hpp"
void _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::BndEvt__UI_MatchMakingScreen_LobbyCodeButton_K2Node_ComponentBoundEvent_10_ButtonPressed__DelegateSignature() {
    return;
}
_Script_UMG::HorizontalBox*& _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::get_CharacterSwitcher() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x280);
}
void* _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
void* _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::get_CurrentCharacter() {
    return (void*)((uintptr_t)this + 0x3cc);
}
_Game_Interface_MainMenu_Widgets_UI_InvitePlayerButton::UI_InvitePlayerButton_C*& _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::get_InvitePlayer1() {
    return *(_Game_Interface_MainMenu_Widgets_UI_InvitePlayerButton::UI_InvitePlayerButton_C**)((uintptr_t)this + 0x2b0);
}
_Script_UMG::Overlay*& _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::get_CustomizationMenu() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x290);
}
_Game_Interface_MatchMaking_UI_MatchmakingMenuButton::UI_MatchmakingMenuButton_C*& _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::get_CustomizationButton() {
    return *(_Game_Interface_MatchMaking_UI_MatchmakingMenuButton::UI_MatchmakingMenuButton_C**)((uintptr_t)this + 0x288);
}
_Game_Interface_MatchMaking_UI_MatchmakingMenuButton::UI_MatchmakingMenuButton_C*& _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::get_AppearanceButton() {
    return *(_Game_Interface_MatchMaking_UI_MatchmakingMenuButton::UI_MatchmakingMenuButton_C**)((uintptr_t)this + 0x268);
}
_Game_Interface_MatchMaking_UI_MatchmakingMenuButton::UI_MatchmakingMenuButton_C*& _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::get_BackstoryButton() {
    return *(_Game_Interface_MatchMaking_UI_MatchmakingMenuButton::UI_MatchmakingMenuButton_C**)((uintptr_t)this + 0x278);
}
_Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter::BP_CustomizationMenuCharacter_C*& _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::get_MenuCharacter() {
    return *(_Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter::BP_CustomizationMenuCharacter_C**)((uintptr_t)this + 0x3e8);
}
_Script_UMG::Image*& _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::get_Backstory_BG() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x270);
}
_Game_Interface_MatchMaking_UI_MatchmakingMenuButton::UI_MatchmakingMenuButton_C*& _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::get_EmoteButton() {
    return *(_Game_Interface_MatchMaking_UI_MatchmakingMenuButton::UI_MatchmakingMenuButton_C**)((uintptr_t)this + 0x298);
}
void _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::set_Customizing(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3e0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3e0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_UMG::Image*& _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::get_Image_202() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2a0);
}
_Script_UMG::VerticalBox*& _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::get_PrivateMatchButtons() {
    return *(_Script_UMG::VerticalBox**)((uintptr_t)this + 0x328);
}
_Script_UMG::Image*& _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::get_Image_1015() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2a8);
}
_Game_Interface_MainMenu_Widgets_UI_InvitePlayerButton::UI_InvitePlayerButton_C*& _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::get_InvitePlayer2() {
    return *(_Game_Interface_MainMenu_Widgets_UI_InvitePlayerButton::UI_InvitePlayerButton_C**)((uintptr_t)this + 0x2b8);
}
void _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::BndEvt__UI_MatchMakingScreen_CustomizationButton_K2Node_ComponentBoundEvent_3_ButtonPressed__DelegateSignature() {
    return;
}
_Game_Interface_MainMenu_Widgets_UI_InvitePlayerButton::UI_InvitePlayerButton_C*& _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::get_InvitePlayer3() {
    return *(_Game_Interface_MainMenu_Widgets_UI_InvitePlayerButton::UI_InvitePlayerButton_C**)((uintptr_t)this + 0x2c0);
}
void _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::UpdateCosmeticColors(int32_t ColorIndex, _Game_Interface_Customization_Cosmetics_UI_ColorItem::UI_ColorItem_C* SelectedColor) {
    return;
}
_Game_Interface_MainMenu_Widgets_UI_InvitePlayerButton::UI_InvitePlayerButton_C*& _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::get_InvitePlayer4() {
    return *(_Game_Interface_MainMenu_Widgets_UI_InvitePlayerButton::UI_InvitePlayerButton_C**)((uintptr_t)this + 0x2c8);
}
_Script_UMG::TextBlock*& _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::get_TextBlock_127() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x370);
}
_Game_Interface_MainMenu_Widgets_UI_InvitePlayerButton::UI_InvitePlayerButton_C*& _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::get_InvitePlayer5() {
    return *(_Game_Interface_MainMenu_Widgets_UI_InvitePlayerButton::UI_InvitePlayerButton_C**)((uintptr_t)this + 0x2d0);
}
_Game_Interface_MainMenu_Widgets_UI_InvitePlayerButton::UI_InvitePlayerButton_C*& _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::get_InvitePlayer6() {
    return *(_Game_Interface_MainMenu_Widgets_UI_InvitePlayerButton::UI_InvitePlayerButton_C**)((uintptr_t)this + 0x2d8);
}
int32_t& _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::get_Item_ID() {
    return *(int32_t*)((uintptr_t)this + 0x3f0);
}
_Script_UMG::SizeBox*& _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::get_LButtonContainer() {
    return *(_Script_UMG::SizeBox**)((uintptr_t)this + 0x2e0);
}
_Game_Interface_General_UI_BackButton::UI_BackButton_C*& _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::get_UI_BackButton() {
    return *(_Game_Interface_General_UI_BackButton::UI_BackButton_C**)((uintptr_t)this + 0x388);
}
_Script_UMG::Overlay*& _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::get_Story() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x350);
}
_Script_UMG::Image*& _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::get_LeftArrow() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2e8);
}
_Script_UMG::Button*& _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::get_LeftButton() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x2f0);
}
_Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C*& _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::get_UI_CosmeticCatalog() {
    return *(_Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C**)((uintptr_t)this + 0x390);
}
void* _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::get_RefreshInviteTimer() {
    return (void*)((uintptr_t)this + 0x3f8);
}
void _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::SillyShit() {
    return;
}
_Game_Interface_MatchMaking_UI_MatchmakingMenuButton::UI_MatchmakingMenuButton_C*& _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::get_LoadingScreenButton() {
    return *(_Game_Interface_MatchMaking_UI_MatchmakingMenuButton::UI_MatchmakingMenuButton_C**)((uintptr_t)this + 0x2f8);
}
void _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::BndEvt__UI_MatchMakingScreen_LeftButton_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
_Game_Interface_MatchMaking_UI_MatchmakingMenuButton::UI_MatchmakingMenuButton_C*& _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::get_LobbyCodeButton() {
    return *(_Game_Interface_MatchMaking_UI_MatchmakingMenuButton::UI_MatchmakingMenuButton_C**)((uintptr_t)this + 0x300);
}
_Script_UMG::Overlay*& _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::get_MainMenu() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x308);
}
_Game_Interface_MainMenu_Widgets_UI_SubMenuButton::UI_SubMenuButton_C*& _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::get_SwitchCharLeft() {
    return *(_Game_Interface_MainMenu_Widgets_UI_SubMenuButton::UI_SubMenuButton_C**)((uintptr_t)this + 0x360);
}
void _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::SetScreenStyle(void* CharacterType, bool PrivateMatch) {
    return;
}
_Game_Interface_Customization_Cosmetics_UI_ColorItem::UI_ColorItem_C*& _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::get_CurrentColor() {
    return *(_Game_Interface_Customization_Cosmetics_UI_ColorItem::UI_ColorItem_C**)((uintptr_t)this + 0x400);
}
_Script_UMG::WidgetSwitcher*& _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::get_MainSwitcher() {
    return *(_Script_UMG::WidgetSwitcher**)((uintptr_t)this + 0x310);
}
_Script_UMG::Overlay*& _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::get_ModalContainer() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x318);
}
void _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::RefreshPlayerInviteButtons() {
    return;
}
_Game_Interface_MatchMaking_UI_MatchmakingMenuButton::UI_MatchmakingMenuButton_C*& _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::get_PerksButton() {
    return *(_Game_Interface_MatchMaking_UI_MatchmakingMenuButton::UI_MatchmakingMenuButton_C**)((uintptr_t)this + 0x320);
}
_Script_UMG::SizeBox*& _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::get_RButtonContainer() {
    return *(_Script_UMG::SizeBox**)((uintptr_t)this + 0x330);
}
_Script_UMG::Image*& _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::get_RightArrow() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x338);
}
_Script_UMG::Button*& _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::get_RightButton() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x340);
}
_Game_Interface_MatchMaking_UI_MatchmakingMenuButton::UI_MatchmakingMenuButton_C*& _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::get_SoundPackButton() {
    return *(_Game_Interface_MatchMaking_UI_MatchmakingMenuButton::UI_MatchmakingMenuButton_C**)((uintptr_t)this + 0x348);
}
_Game_Interface_MatchMaking_UI_MatchmakingMenuButton::UI_MatchmakingMenuButton_C*& _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::get_SwitchCharactersButton() {
    return *(_Game_Interface_MatchMaking_UI_MatchmakingMenuButton::UI_MatchmakingMenuButton_C**)((uintptr_t)this + 0x358);
}
_Game_Interface_MainMenu_Widgets_UI_SubMenuButton::UI_SubMenuButton_C*& _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::get_SwitchCharRight() {
    return *(_Game_Interface_MainMenu_Widgets_UI_SubMenuButton::UI_SubMenuButton_C**)((uintptr_t)this + 0x368);
}
_Game_Interface_MainMenu_BP_CameraMoverMain::BP_CameraMoverMain_C*& _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::get_CamMover() {
    return *(_Game_Interface_MainMenu_BP_CameraMoverMain::BP_CameraMoverMain_C**)((uintptr_t)this + 0x3d8);
}
void _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::BndEvt__UI_MatchMakingScreen_UI_CosmeticCatalog_K2Node_ComponentBoundEvent_15_AddNewPreset__DelegateSignature(void* PresetName) {
    return;
}
_Script_UMG::Image*& _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::get_TitleBackground() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x378);
}
_Script_UMG::TextBlock*& _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::get_TitleText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x380);
}
void _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::BndEvt__UI_MatchMakingScreen_AppearanceButton_K2Node_ComponentBoundEvent_4_ButtonPressed__DelegateSignature() {
    return;
}
_Game_Interface_MainMenu_Modals_UI_JoinLobbyModal::UI_JoinLobbyModal_C*& _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::get_UI_JoinLobbyModal() {
    return *(_Game_Interface_MainMenu_Modals_UI_JoinLobbyModal::UI_JoinLobbyModal_C**)((uintptr_t)this + 0x398);
}
_Game_Interface_MainMenu_Matchmaking_UI_MatchmakingStatus::UI_MatchmakingStatus_C*& _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::get_UI_MatchmakingStatus() {
    return *(_Game_Interface_MainMenu_Matchmaking_UI_MatchmakingStatus::UI_MatchmakingStatus_C**)((uintptr_t)this + 0x3a0);
}
_Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C*& _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::get_UI_Perks() {
    return *(_Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C**)((uintptr_t)this + 0x3a8);
}
_Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C*& _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::get_UI_Sabotages() {
    return *(_Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C**)((uintptr_t)this + 0x3b0);
}
void* _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::get_BackPressed() {
    return (void*)((uintptr_t)this + 0x3b8);
}
int32_t& _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::get_SubMenuLevel() {
    return *(int32_t*)((uintptr_t)this + 0x3c8);
}
_Game_Gameplay_Game_MonsterSelector_BP_MonsterContainer::BP_MonsterContainer_C*& _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::get_CachedMonsterContainer() {
    return *(_Game_Gameplay_Game_MonsterSelector_BP_MonsterContainer::BP_MonsterContainer_C**)((uintptr_t)this + 0x3d0);
}
bool _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::get_Customizing() {
    return (*(uint8_t*)((uintptr_t)this + 0x3e0 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/MatchMaking/UI_MatchMakingScreen.UI_MatchMakingScreen_C");
    return result;
}
void _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::BndEvt__UI_MatchMakingScreen_SoundPackButton_K2Node_ComponentBoundEvent_6_ButtonPressed__DelegateSignature() {
    return;
}
void _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::BndEvt__UI_MatchMakingScreen_LoadingScreenButton_K2Node_ComponentBoundEvent_7_ButtonPressed__DelegateSignature() {
    return;
}
void _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::LoadCatalog(void* ItemType, void* CosmeticType, void* CharacterType, void* SoundPackType, void* TabStyle, void* TitleText) {
    return;
}
void _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::Construct0() {
    return;
}
void _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::BndEvt__UI_MatchMakingScreen_RightButton_K2Node_ComponentBoundEvent_9_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::SwitchCameras(bool SwitchToMonster) {
    return;
}
void _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::BndEvt__UI_MatchMakingScreen_UI_JoinLobbyModal_K2Node_ComponentBoundEvent_11_WantsToHide__DelegateSignature() {
    return;
}
void _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::SwitchWidget(_Script_UMG::Widget* Widget) {
    return;
}
void _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::BndEvt__UI_MatchMakingScreen_UI_CosmeticCatalog_K2Node_ComponentBoundEvent_12_ItemSelected__DelegateSignature(void* Name, int32_t PlayCoinPrice, int32_t TicketPrice, int32_t ItemId) {
    return;
}
void _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::BndEvt__UI_MatchMakingScreen_SwitchCharactersButton_K2Node_ComponentBoundEvent_13_ButtonPressed__DelegateSignature() {
    return;
}
void _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::BndEvt__UI_MatchMakingScreen_UI_CosmeticCatalog_K2Node_ComponentBoundEvent_14_SwitchCosmeticType__DelegateSignature(void* NewType) {
    return;
}
void _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::BndEvt__UI_MatchMakingScreen_UI_BackButton_K2Node_ComponentBoundEvent_2_Released__DelegateSignature() {
    return;
}
void _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::BndEvt__UI_MatchMakingScreen_BackstoryButton_K2Node_ComponentBoundEvent_1_ButtonPressed__DelegateSignature() {
    return;
}
void _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::BndEvt__UI_MatchMakingScreen_PerksButton_K2Node_ComponentBoundEvent_0_ButtonPressed__DelegateSignature() {
    return;
}
void _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::OnInitialized0() {
    return;
}
void _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::BndEvt__UI_MatchMakingScreen_UI_CosmeticCatalog_K2Node_ComponentBoundEvent_5_AppliedPreset__DelegateSignature() {
    return;
}
void _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::BndEvt__UI_MatchMakingScreen_EmoteButton_K2Node_ComponentBoundEvent_16_ButtonPressed__DelegateSignature() {
    return;
}
void _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::BndEvt__UI_MatchMakingScreen_SwitchCharLeft_K2Node_ComponentBoundEvent_17_ButtonRelease__DelegateSignature() {
    return;
}
void _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::BndEvt__UI_MatchMakingScreen_SwitchCharRight_K2Node_ComponentBoundEvent_18_ButtonRelease__DelegateSignature() {
    return;
}
void _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::ExecuteUbergraph_UI_MatchMakingScreen(int32_t EntryPoint) {
    return;
}
void _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C::BackPressed__DelegateSignature() {
    return;
}
