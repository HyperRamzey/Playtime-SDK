#include "..\FUObjectArray.hpp"
#include "..\_Game_Base_BP_MultiplayerPlayerState\BP_MultiplayerPlayerState_C.hpp"
#include "..\_Game_Interface_Content_UI_N_RadialProgressBar\UI_N_RadialProgressBar_C.hpp"
#include "..\_Game_Interface_General_UI_BackButton\UI_BackButton_C.hpp"
#include "..\_Game_Interface_General_UI_BasicButton\UI_BasicButton_C.hpp"
#include "..\_Game_Interface_General_UI_WhiteBGButton\UI_WhiteBGButton_C.hpp"
#include "..\_Game_Interface_IngameScreens_UI_MissionResultInfoBox\UI_MissionResultInfoBox_C.hpp"
#include "UI_MissionResultScreen_C.hpp"
#include "..\_Game_Interface_IngameScreens_UI_Scoreboard\UI_Scoreboard_C.hpp"
#include "..\_Game_Interface_IngameScreens_UI_ScoreboardHeader\UI_ScoreboardHeader_C.hpp"
#include "..\_Game_Interface_IngameScreens_UI_ScoreboardInfoBox\UI_ScoreboardInfoBox_C.hpp"
#include "..\_Game_Interface_MainMenu_ServerBrowser_UI_MP_Notif\UI_MP_Notif_C.hpp"
#include "..\_Game_Interface_MainMenu_UI_MissionResultsTierDisplay\UI_MissionResultsTierDisplay_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DataTable.hpp"
#include "..\_Script_MediaAssets\MediaPlayer.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_UMG\HorizontalBox.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\Overlay.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\VerticalBox.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
#include "..\_Script_UMG\WidgetSwitcher.hpp"
_Script_UMG::WidgetAnimation*& _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::get_Appear() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
void* _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::Overlay*& _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::get_Background() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x270);
}
_Script_UMG::Image*& _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::get_Divider_1() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x278);
}
_Game_Interface_MainMenu_UI_MissionResultsTierDisplay::UI_MissionResultsTierDisplay_C*& _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::get_UI_TierWidget() {
    return *(_Game_Interface_MainMenu_UI_MissionResultsTierDisplay::UI_MissionResultsTierDisplay_C**)((uintptr_t)this + 0x378);
}
_Script_UMG::Overlay*& _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::get_Information() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x298);
}
_Game_Interface_IngameScreens_UI_MissionResultInfoBox::UI_MissionResultInfoBox_C*& _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::get_GainedXPBox() {
    return *(_Game_Interface_IngameScreens_UI_MissionResultInfoBox::UI_MissionResultInfoBox_C**)((uintptr_t)this + 0x280);
}
_Script_UMG::TextBlock*& _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::get_Header() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x288);
}
_Script_UMG::Image*& _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::get_Image_144() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x290);
}
void _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::set_MenuIsHidden(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x418 + 0);
    *(uint8_t*)((uintptr_t)this + 0x418 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_UMG::TextBlock*& _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::get_MATCHTIME() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2a0);
}
_Game_Interface_IngameScreens_UI_ScoreboardInfoBox::UI_ScoreboardInfoBox_C*& _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::get_Monster_UI_ScoreboardInfoBox() {
    return *(_Game_Interface_IngameScreens_UI_ScoreboardInfoBox::UI_ScoreboardInfoBox_C**)((uintptr_t)this + 0x2a8);
}
_Script_UMG::Image*& _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::get_ResultBackground() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2b0);
}
void _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::PopulateMonster(_Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C*& MultiplayerPlayerState) {
    return;
}
_Game_Interface_IngameScreens_UI_MissionResultInfoBox::UI_MissionResultInfoBox_C*& _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::get_SafeExtractionBox() {
    return *(_Game_Interface_IngameScreens_UI_MissionResultInfoBox::UI_MissionResultInfoBox_C**)((uintptr_t)this + 0x2b8);
}
_Script_UMG::VerticalBox*& _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::get_Scoreboard_VerticalBox() {
    return *(_Script_UMG::VerticalBox**)((uintptr_t)this + 0x2c0);
}
_Game_Interface_General_UI_BasicButton::UI_BasicButton_C*& _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::get_ScoreboardButton() {
    return *(_Game_Interface_General_UI_BasicButton::UI_BasicButton_C**)((uintptr_t)this + 0x2c8);
}
_Script_UMG::Overlay*& _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::get_ScoreboardTab() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x2d0);
}
_Game_Interface_IngameScreens_UI_ScoreboardInfoBox::UI_ScoreboardInfoBox_C*& _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::get_Specialist1() {
    return *(_Game_Interface_IngameScreens_UI_ScoreboardInfoBox::UI_ScoreboardInfoBox_C**)((uintptr_t)this + 0x2d8);
}
_Game_Interface_IngameScreens_UI_MissionResultInfoBox::UI_MissionResultInfoBox_C*& _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::get_Stat1Box() {
    return *(_Game_Interface_IngameScreens_UI_MissionResultInfoBox::UI_MissionResultInfoBox_C**)((uintptr_t)this + 0x2e0);
}
void _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::BndEvt__UI_MissionResultScreen_Scoreboard_UI_BasicButton_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature() {
    return;
}
void _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::SequenceEvent__ENTRYPOINTUI_MissionResultScreen_0() {
    return;
}
_Game_Interface_IngameScreens_UI_MissionResultInfoBox::UI_MissionResultInfoBox_C*& _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::get_Stat2Box() {
    return *(_Game_Interface_IngameScreens_UI_MissionResultInfoBox::UI_MissionResultInfoBox_C**)((uintptr_t)this + 0x2e8);
}
void _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::Construct0() {
    return;
}
_Game_Interface_IngameScreens_UI_Scoreboard::UI_Scoreboard_C*& _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::get_UI_Scoreboard() {
    return *(_Game_Interface_IngameScreens_UI_Scoreboard::UI_Scoreboard_C**)((uintptr_t)this + 0x338);
}
_Script_UMG::VerticalBox*& _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::get_Summary_VerticalBox() {
    return *(_Script_UMG::VerticalBox**)((uintptr_t)this + 0x2f0);
}
void _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::Update_Localization() {
    return;
}
_Game_Interface_General_UI_BasicButton::UI_BasicButton_C*& _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::get_SummaryButton() {
    return *(_Game_Interface_General_UI_BasicButton::UI_BasicButton_C**)((uintptr_t)this + 0x2f8);
}
_Script_MediaAssets::MediaPlayer*& _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::get_MediaPlayer() {
    return *(_Script_MediaAssets::MediaPlayer**)((uintptr_t)this + 0x3c8);
}
_Script_UMG::Overlay*& _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::get_SummaryTab() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x300);
}
_Script_UMG::WidgetSwitcher*& _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::get_TabWidgetSwitcher() {
    return *(_Script_UMG::WidgetSwitcher**)((uintptr_t)this + 0x308);
}
_Script_CoreUObject::Class* _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/IngameScreens/UI_MissionResultScreen.UI_MissionResultScreen_C");
    return result;
}
int32_t& _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::get_Timer() {
    return *(int32_t*)((uintptr_t)this + 0x3b8);
}
_Game_Interface_IngameScreens_UI_MissionResultInfoBox::UI_MissionResultInfoBox_C*& _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::get_TicketsEarnedBox() {
    return *(_Game_Interface_IngameScreens_UI_MissionResultInfoBox::UI_MissionResultInfoBox_C**)((uintptr_t)this + 0x310);
}
_Game_Interface_IngameScreens_UI_ScoreboardInfoBox::UI_ScoreboardInfoBox_C*& _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::get_UI_ScoreboardInfoBox_5() {
    return *(_Game_Interface_IngameScreens_UI_ScoreboardInfoBox::UI_ScoreboardInfoBox_C**)((uintptr_t)this + 0x368);
}
_Script_UMG::HorizontalBox*& _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::get_TimerBox() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x318);
}
void _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::Populate_XP(int32_t XP_Gained, bool XP_Doubled) {
    return;
}
_Script_UMG::TextBlock*& _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::get_TimerLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x320);
}
_Game_Interface_General_UI_BackButton::UI_BackButton_C*& _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::get_UI_BackButton() {
    return *(_Game_Interface_General_UI_BackButton::UI_BackButton_C**)((uintptr_t)this + 0x328);
}
int32_t& _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::get_PlayersDeposited() {
    return *(int32_t*)((uintptr_t)this + 0x414);
}
_Game_Interface_Content_UI_N_RadialProgressBar::UI_N_RadialProgressBar_C*& _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::get_UI_N_RadialProgressBar() {
    return *(_Game_Interface_Content_UI_N_RadialProgressBar::UI_N_RadialProgressBar_C**)((uintptr_t)this + 0x330);
}
_Game_Interface_IngameScreens_UI_ScoreboardHeader::UI_ScoreboardHeader_C*& _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::get_UI_ScoreboardHeader() {
    return *(_Game_Interface_IngameScreens_UI_ScoreboardHeader::UI_ScoreboardHeader_C**)((uintptr_t)this + 0x340);
}
void _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::DontQuit() {
    return;
}
_Game_Interface_MainMenu_ServerBrowser_UI_MP_Notif::UI_MP_Notif_C*& _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::get_W_Notif() {
    return *(_Game_Interface_MainMenu_ServerBrowser_UI_MP_Notif::UI_MP_Notif_C**)((uintptr_t)this + 0x3b0);
}
_Game_Interface_IngameScreens_UI_ScoreboardHeader::UI_ScoreboardHeader_C*& _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::get_UI_ScoreboardHeader_1() {
    return *(_Game_Interface_IngameScreens_UI_ScoreboardHeader::UI_ScoreboardHeader_C**)((uintptr_t)this + 0x348);
}
_Game_Interface_IngameScreens_UI_ScoreboardInfoBox::UI_ScoreboardInfoBox_C*& _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::get_UI_ScoreboardInfoBox_2() {
    return *(_Game_Interface_IngameScreens_UI_ScoreboardInfoBox::UI_ScoreboardInfoBox_C**)((uintptr_t)this + 0x350);
}
void* _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::get_MissionResultInfoBoxes() {
    return (void*)((uintptr_t)this + 0x3a0);
}
_Game_Interface_IngameScreens_UI_ScoreboardInfoBox::UI_ScoreboardInfoBox_C*& _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::get_UI_ScoreboardInfoBox_3() {
    return *(_Game_Interface_IngameScreens_UI_ScoreboardInfoBox::UI_ScoreboardInfoBox_C**)((uintptr_t)this + 0x358);
}
_Game_Interface_IngameScreens_UI_ScoreboardInfoBox::UI_ScoreboardInfoBox_C*& _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::get_UI_ScoreboardInfoBox_4() {
    return *(_Game_Interface_IngameScreens_UI_ScoreboardInfoBox::UI_ScoreboardInfoBox_C**)((uintptr_t)this + 0x360);
}
void _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::PopulateMatchResult(void* EndGameCategory, float MATCHTIME) {
    return;
}
_Game_Interface_IngameScreens_UI_ScoreboardInfoBox::UI_ScoreboardInfoBox_C*& _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::get_UI_ScoreboardInfoBox_6() {
    return *(_Game_Interface_IngameScreens_UI_ScoreboardInfoBox::UI_ScoreboardInfoBox_C**)((uintptr_t)this + 0x370);
}
void _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::SetTicketsEarned(int32_t TicketAmount, void*& RewardableActions) {
    return;
}
_Game_Interface_General_UI_WhiteBGButton::UI_WhiteBGButton_C*& _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::get_UI_WhiteBGButton() {
    return *(_Game_Interface_General_UI_WhiteBGButton::UI_WhiteBGButton_C**)((uintptr_t)this + 0x380);
}
void* _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::get_SurvivorScoreboardInfoBoxes() {
    return (void*)((uintptr_t)this + 0x388);
}
_Script_Engine::DataTable*& _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::get_Ticket_Rewards_Data_Table() {
    return *(_Script_Engine::DataTable**)((uintptr_t)this + 0x398);
}
void* _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::get_TimerHandle() {
    return (void*)((uintptr_t)this + 0x3c0);
}
void* _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::get_Match_Points_Criterion_Def() {
    return (void*)((uintptr_t)this + 0x3d0);
}
int32_t& _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::get_ToysDeposited() {
    return *(int32_t*)((uintptr_t)this + 0x410);
}
bool _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::Get_ScoreboardButton_bIsEnabled_0() {
    return;
}
bool _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::get_MenuIsHidden() {
    return (*(uint8_t*)((uintptr_t)this + 0x418 + 0)) & 1 != 0;
}
void _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::PopulateSurvivorList(void*& MultiplayerPlayerStates) {
    return;
}
void _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::ManualSelectScoreboard() {
    return;
}
void _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::ManualSelectSummary() {
    return;
}
void _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::SetBackground(void* Monster, void* EndGameCategory) {
    return;
}
void _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::BndEvt__UI_MissionResultScreen_Summary_UI_BasicButton_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature() {
    return;
}
void _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::Tick0(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime) {
    return;
}
void _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::BndEvt__UI_MissionResultScreen_UI_BackButton_K2Node_ComponentBoundEvent_5_Released__DelegateSignature() {
    return;
}
void _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::BeginTimer() {
    return;
}
void _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::Set2ndStatBoxData() {
    return;
}
void _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::NextMatchTimer() {
    return;
}
void _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::OnMatchEnded() {
    return;
}
void _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::QuitToMenu() {
    return;
}
void _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::BndEvt__UI_MissionResultScreen_UI_WhiteBGButton_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature() {
    return;
}
void _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C::ExecuteUbergraph_UI_MissionResultScreen(int32_t EntryPoint) {
    return;
}
