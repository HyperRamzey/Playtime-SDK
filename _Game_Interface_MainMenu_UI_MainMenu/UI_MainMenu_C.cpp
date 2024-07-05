#include "..\FUObjectArray.hpp"
#include "..\_Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter\BP_CustomizationMenuCharacter_C.hpp"
#include "..\_Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter\BP_MonsterAndPlayerMenuCharacter_C.hpp"
#include "..\_Game_Interface_Customization_Perks_UI_Perks\UI_Perks_C.hpp"
#include "..\_Game_Interface_MainMenu_BP_CameraMoverMain\BP_CameraMoverMain_C.hpp"
#include "..\_Game_Interface_MainMenu_Components_T_CurrencyDisplay\T_CurrencyDisplay_C.hpp"
#include "..\_Game_Interface_MainMenu_DailyReward_UI_DailyReward\UI_DailyReward_C.hpp"
#include "..\_Game_Interface_MainMenu_Play_UI_Play\UI_Play_C.hpp"
#include "..\_Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain\UI_ToyBoxMain_C.hpp"
#include "..\_Game_Interface_MainMenu_UI_GearMenu\UI_GearMenu_C.hpp"
#include "UI_MainMenu_C.hpp"
#include "..\_Game_Interface_MainMenu_UI_Theater\UI_Theater_C.hpp"
#include "..\_Game_Interface_MainMenu_Widgets_UI_MenuButton\UI_MenuButton_C.hpp"
#include "..\_Game_Interface_MainMenu_Widgets_UI_NewsTicker\UI_NewsTicker_C.hpp"
#include "..\_Game_Interface_MainMenu_Widgets_UI_PlayAsButton\UI_PlayAsButton_C.hpp"
#include "..\_Game_Interface_MainMenu_Widgets_UI_ShopButton\UI_ShopButton_C.hpp"
#include "..\_Game_Interface_MainMenu_Widgets_UI_SubMenuButton\UI_SubMenuButton_C.hpp"
#include "..\_Game_Interface_MainMenu_Widgets_UI_ToyBoxButton\UI_ToyBoxButton_C.hpp"
#include "..\_Game_Interface_MatchMaking_UI_MatchMakingScreen\UI_MatchMakingScreen_C.hpp"
#include "..\_Game_Interface_Shoppy_Widgets_UI_AnnouncmentInfo\UI_AnnouncmentInfo_C.hpp"
#include "..\_Game_Interface_Shoppy_Widgets_UI_Store\UI_Store_C.hpp"
#include "..\_Game_Interface_Stats_UI_StatsScreen\UI_StatsScreen_C.hpp"
#include "..\_Game_Interface_UI_EarlyAccess_Overlay\UI_EarlyAccess_Overlay_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AudioComponent.hpp"
#include "..\_Script_Engine\SkeletalMeshActor.hpp"
#include "..\_Script_Engine\SoundWave.hpp"
#include "..\_Script_Playtime_Multiplayer\ToyBoxResponse.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\Widget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
#include "..\_Script_UMG\WidgetSwitcher.hpp"
void* _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
void* _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::get_TargetTransform() {
    return (void*)((uintptr_t)this + 0x380);
}
_Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C*& _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::get_UI_Perks() {
    return *(_Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C**)((uintptr_t)this + 0x310);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::get_EventSplash() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x290);
}
_Script_Engine::SoundWave*& _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::get_MenuMusic() {
    return *(_Script_Engine::SoundWave**)((uintptr_t)this + 0x450);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::get_MoveOtherOut() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
_Game_Interface_MainMenu_Play_UI_Play::UI_Play_C*& _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::get_UI_Play() {
    return *(_Game_Interface_MainMenu_Play_UI_Play::UI_Play_C**)((uintptr_t)this + 0x318);
}
float& _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::get_Customize_Start_Time() {
    return *(float*)((uintptr_t)this + 0x368);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::get_MoveOut() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x270);
}
void _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::Construct0() {
    return;
}
bool _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::get_ToyButtonHighlighted() {
    return (*(uint8_t*)((uintptr_t)this + 0x44c + 0)) & 1 != 0;
}
_Script_UMG::Image*& _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::get_BlackScreen() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x288);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::get_FadeIn() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x278);
}
_Game_Interface_MainMenu_Widgets_UI_ShopButton::UI_ShopButton_C*& _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::get_ShopButton() {
    return *(_Game_Interface_MainMenu_Widgets_UI_ShopButton::UI_ShopButton_C**)((uintptr_t)this + 0x2d0);
}
void _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::OnFailure_1FBF49BF46D9F261BC8273A034EA0D92() {
    return;
}
_Script_UMG::Button*& _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::get_B_CosmeticTesting() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x280);
}
float& _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::get_RetryDuration() {
    return *(float*)((uintptr_t)this + 0x498);
}
float& _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::get_CameraMoveSpeed() {
    return *(float*)((uintptr_t)this + 0x370);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::get_Image_55() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x298);
}
_Game_Interface_MainMenu_Widgets_UI_SubMenuButton::UI_SubMenuButton_C*& _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::get_OptionsButton() {
    return *(_Game_Interface_MainMenu_Widgets_UI_SubMenuButton::UI_SubMenuButton_C**)((uintptr_t)this + 0x2a0);
}
_Game_Interface_MainMenu_Widgets_UI_PlayAsButton::UI_PlayAsButton_C*& _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::get_PlayAsSurvivorButton() {
    return *(_Game_Interface_MainMenu_Widgets_UI_PlayAsButton::UI_PlayAsButton_C**)((uintptr_t)this + 0x2b8);
}
_Script_UMG::WidgetSwitcher*& _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::get_OtherMenus() {
    return *(_Script_UMG::WidgetSwitcher**)((uintptr_t)this + 0x2a8);
}
_Game_Interface_MainMenu_Widgets_UI_PlayAsButton::UI_PlayAsButton_C*& _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::get_PlayAsMonsterButton() {
    return *(_Game_Interface_MainMenu_Widgets_UI_PlayAsButton::UI_PlayAsButton_C**)((uintptr_t)this + 0x2b0);
}
_Game_Interface_MainMenu_Widgets_UI_ToyBoxButton::UI_ToyBoxButton_C*& _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::get_UI_ToyBoxButton() {
    return *(_Game_Interface_MainMenu_Widgets_UI_ToyBoxButton::UI_ToyBoxButton_C**)((uintptr_t)this + 0x338);
}
_Script_Engine::Actor*& _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::get_MovieScreen() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x408);
}
_Game_Interface_MainMenu_Widgets_UI_MenuButton::UI_MenuButton_C*& _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::get_PrivateMatchButton() {
    return *(_Game_Interface_MainMenu_Widgets_UI_MenuButton::UI_MenuButton_C**)((uintptr_t)this + 0x2c0);
}
_Game_Interface_MainMenu_Widgets_UI_MenuButton::UI_MenuButton_C*& _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::get_ScreeningRoomButton() {
    return *(_Game_Interface_MainMenu_Widgets_UI_MenuButton::UI_MenuButton_C**)((uintptr_t)this + 0x2c8);
}
float& _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::get_Alpha() {
    return *(float*)((uintptr_t)this + 0x36c);
}
void _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::BndEvt__UI_MainMenu_UI_Theater_K2Node_ComponentBoundEvent_4_BackReleased__DelegateSignature() {
    return;
}
_Game_Interface_MainMenu_Components_T_CurrencyDisplay::T_CurrencyDisplay_C*& _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::get_T_CurrencyDisplay() {
    return *(_Game_Interface_MainMenu_Components_T_CurrencyDisplay::T_CurrencyDisplay_C**)((uintptr_t)this + 0x2d8);
}
float& _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::get_PreviousFOV() {
    return *(float*)((uintptr_t)this + 0x404);
}
_Game_Interface_Shoppy_Widgets_UI_AnnouncmentInfo::UI_AnnouncmentInfo_C*& _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::get_UI_AnnouncmentInfo() {
    return *(_Game_Interface_Shoppy_Widgets_UI_AnnouncmentInfo::UI_AnnouncmentInfo_C**)((uintptr_t)this + 0x2e0);
}
_Game_Interface_MainMenu_DailyReward_UI_DailyReward::UI_DailyReward_C*& _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::get_UI_DailyReward() {
    return *(_Game_Interface_MainMenu_DailyReward_UI_DailyReward::UI_DailyReward_C**)((uintptr_t)this + 0x2e8);
}
void _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::set_AtMainMenu(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x430 + 0);
    *(uint8_t*)((uintptr_t)this + 0x430 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_Interface_UI_EarlyAccess_Overlay::UI_EarlyAccess_Overlay_C*& _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::get_UI_EarlyAccess_Overlay() {
    return *(_Game_Interface_UI_EarlyAccess_Overlay::UI_EarlyAccess_Overlay_C**)((uintptr_t)this + 0x2f0);
}
_Game_Interface_MainMenu_UI_GearMenu::UI_GearMenu_C*& _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::get_UI_GearMenu() {
    return *(_Game_Interface_MainMenu_UI_GearMenu::UI_GearMenu_C**)((uintptr_t)this + 0x2f8);
}
_Script_CoreUObject::Class* _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/MainMenu/UI_MainMenu.UI_MainMenu_C");
    return result;
}
_Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C*& _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::get_UI_MatchMakingScreen() {
    return *(_Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C**)((uintptr_t)this + 0x300);
}
_Game_Interface_MainMenu_Widgets_UI_NewsTicker::UI_NewsTicker_C*& _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::get_UI_NewsTicker() {
    return *(_Game_Interface_MainMenu_Widgets_UI_NewsTicker::UI_NewsTicker_C**)((uintptr_t)this + 0x308);
}
_Game_Interface_Stats_UI_StatsScreen::UI_StatsScreen_C*& _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::get_UI_StatsScreen() {
    return *(_Game_Interface_Stats_UI_StatsScreen::UI_StatsScreen_C**)((uintptr_t)this + 0x320);
}
_Game_Interface_Shoppy_Widgets_UI_Store::UI_Store_C*& _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::get_UI_Store() {
    return *(_Game_Interface_Shoppy_Widgets_UI_Store::UI_Store_C**)((uintptr_t)this + 0x328);
}
void* _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::get_First_Tape_Date() {
    return (void*)((uintptr_t)this + 0x420);
}
_Game_Interface_MainMenu_UI_Theater::UI_Theater_C*& _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::get_UI_Theater() {
    return *(_Game_Interface_MainMenu_UI_Theater::UI_Theater_C**)((uintptr_t)this + 0x330);
}
_Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C*& _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::get_UI_ToyBoxMain() {
    return *(_Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C**)((uintptr_t)this + 0x340);
}
void* _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::get_TutorialMessage() {
    return (void*)((uintptr_t)this + 0x350);
}
_Script_Engine::AudioComponent*& _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::get_MainMenuAudioComponent() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x348);
}
void* _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::get_PreviousTransform() {
    return (void*)((uintptr_t)this + 0x3b0);
}
void* _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::get_OriginalCharacterRotation() {
    return (void*)((uintptr_t)this + 0x3e0);
}
bool _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::get_AtMainMenu() {
    return (*(uint8_t*)((uintptr_t)this + 0x430 + 0)) & 1 != 0;
}
void* _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::get_Reset_Player_Smooth() {
    return (void*)((uintptr_t)this + 0x3f0);
}
void _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::UpdateRotatingCharacter__DelegateSignature(bool Update_Rotating_Character) {
    return;
}
float& _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::get_TargetFOV() {
    return *(float*)((uintptr_t)this + 0x400);
}
void* _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::get_Tapes() {
    return (void*)((uintptr_t)this + 0x410);
}
_Game_Interface_MainMenu_BP_CameraMoverMain::BP_CameraMoverMain_C*& _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::get_CameraManager() {
    return *(_Game_Interface_MainMenu_BP_CameraMoverMain::BP_CameraMoverMain_C**)((uintptr_t)this + 0x428);
}
_Script_Engine::SkeletalMeshActor*& _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::get_ToyBoxMonster() {
    return *(_Script_Engine::SkeletalMeshActor**)((uintptr_t)this + 0x438);
}
void* _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::get_Spring_State() {
    return (void*)((uintptr_t)this + 0x440);
}
float& _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::get_ToyButtonScale() {
    return *(float*)((uintptr_t)this + 0x448);
}
void _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::set_ToyButtonHighlighted(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x44c + 0);
    *(uint8_t*)((uintptr_t)this + 0x44c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::get_UpdateRotatingCharacter() {
    return (void*)((uintptr_t)this + 0x458);
}
void* _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::get_MouseDragged() {
    return (void*)((uintptr_t)this + 0x468);
}
_Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter::BP_CustomizationMenuCharacter_C*& _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::get_Menu_Player_Character() {
    return *(_Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter::BP_CustomizationMenuCharacter_C**)((uintptr_t)this + 0x478);
}
_Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter::BP_MonsterAndPlayerMenuCharacter_C*& _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::get_PlayerMonsterMenuCharacterShop() {
    return *(_Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter::BP_MonsterAndPlayerMenuCharacter_C**)((uintptr_t)this + 0x480);
}
_Script_Engine::Actor*& _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::get_SpinningPreviewActor() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x488);
}
_Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter::BP_MonsterAndPlayerMenuCharacter_C*& _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::get_PlayerMonsterMenuCharacterToybox() {
    return *(_Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter::BP_MonsterAndPlayerMenuCharacter_C**)((uintptr_t)this + 0x490);
}
void _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::EnablePurchase(bool bInIsEnabled) {
    return;
}
void* _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::Get_TimeRemainingText_Text_0() {
    return;
}
bool _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::GetTimePassedFromFirstTapeStamp(int32_t Days) {
    return;
}
void _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::SetCanEscQuit(bool CanEscQuit) {
    return;
}
void _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::FadeOut() {
    return;
}
void _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::OnCallback_6D860937408E3604BE930CA434F0FF23(void*& Results) {
    return;
}
void _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::OnFailure_3D69071947FAD79E55BA238859444384() {
    return;
}
void _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::OnSuccess_3D69071947FAD79E55BA238859444384() {
    return;
}
void _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::OnFailure_34FFF2BB4DAE17E2FA1F3F9CBC3B2E31() {
    return;
}
void _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::OnSuccess_34FFF2BB4DAE17E2FA1F3F9CBC3B2E31() {
    return;
}
void _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::OnSuccess_1FBF49BF46D9F261BC8273A034EA0D92() {
    return;
}
void _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::OnFailure_2CFE5ED8482FAE57C3E9BDB514BDB0BB() {
    return;
}
void _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::OnSuccess_2CFE5ED8482FAE57C3E9BDB514BDB0BB() {
    return;
}
void _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::MouseDragged__DelegateSignature(_Script_CoreUObject::Vector2D Delta_Mouse) {
    return;
}
void _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::GetRewardsFailure(void* ErrorMessage) {
    return;
}
void _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::GetRewardsSuccess(void*& Ints) {
    return;
}
void _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::FadeBack() {
    return;
}
void _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::BndEvt__UI_MainMenu_UI_PlayAsButton_K2Node_ComponentBoundEvent_24_ButtonPressed__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::BndEvt__UI_MainMenu_UI_PlayAsButton_1_K2Node_ComponentBoundEvent_25_ButtonPressed__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::BndEvt__UI_MainMenu_UI_ShopButton_K2Node_ComponentBoundEvent_16_ShopButtonPressed__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::OpenShop() {
    return;
}
void _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::BndEvt__UI_MainMenu_UI_ScreeningRoom_K2Node_ComponentBoundEvent_21_ButtonPressed__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::FadeBackToMenu(float Speed) {
    return;
}
void _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::BndEvt__UI_MainMenu_UI_GearMenu_K2Node_ComponentBoundEvent_20_GearMenu_BackPressed__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::BndEvt__UI_MainMenu_OptionsButton_K2Node_ComponentBoundEvent_26_ButtonRelease__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::Update_Localization() {
    return;
}
void _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::BndEvt__UI_MainMenu_UI_PrivateMatch_K2Node_ComponentBoundEvent_5_ButtonPressed__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::BackFromCustomizing(void* Current_Visible_Character) {
    return;
}
void _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::BndEvt__UI_MainMenu_UI_Store_K2Node_ComponentBoundEvent_6_BackReleased__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::BndEvt__UI_MainMenu_UI_ToyBoxButton_K2Node_ComponentBoundEvent_10_ToyBoxButtonPressed__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::BndEvt__UI_MainMenu_B_CosmeticTesting_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::CheckBackendHealth() {
    return;
}
void _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::Healthy() {
    return;
}
void _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::Sickly(void* ErrorMessage) {
    return;
}
void _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::loadPlaycoinsTab() {
    return;
}
void _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::BndEvt__UI_MainMenu_UI_MatchMakingScreen_K2Node_ComponentBoundEvent_0_BackPressed__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::BndEvt__UI_MainMenu_UI_NewsTicker_K2Node_ComponentBoundEvent_3_AnnoucnmentButtonPressed__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::BndEvt__UI_MainMenu_UI_AnnouncmentInfo_K2Node_ComponentBoundEvent_8_CloseTeaser__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::SwitchSelectedScreen(_Script_UMG::Widget* Widget, float Speed, void* Camera) {
    return;
}
void _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::ReplayMonsterTutorial() {
    return;
}
void _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::BndEvt__UI_MP_MainMenu_New_UI_BattlePassMain_K2Node_ComponentBoundEvent_2_GoBack__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::OnInitialized0() {
    return;
}
void _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::EscapeReleased() {
    return;
}
void _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::GetToyBoxFailure(void* ErrorMessage) {
    return;
}
void _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::GotToyBox(_Script_Playtime_Multiplayer::ToyBoxResponse ToyBox) {
    return;
}
void _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::BackToMainMenu(float Speed) {
    return;
}
void _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::ReloadTutorial() {
    return;
}
void _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::BndEvt__UI_MainMenu_UI_StatsScreen_K2Node_ComponentBoundEvent_1_Back__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::EscapePressed() {
    return;
}
void _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::EventHost(bool bUseLAN, bool bShouldAdvertise, bool bAllowInvites, void* Level) {
    return;
}
void _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::EventHostNEW(bool bUseLAN, bool bShouldAdvertise, bool bFriendsOnly, void* Level) {
    return;
}
void _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::BndEvt__UI_MP_MainMenu_New_UI_Play_K2Node_ComponentBoundEvent_7_GoBack__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::ExecuteUbergraph_UI_MainMenu(int32_t EntryPoint) {
    return;
}
void _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C::Reset_Player_Smooth__DelegateSignature() {
    return;
}
