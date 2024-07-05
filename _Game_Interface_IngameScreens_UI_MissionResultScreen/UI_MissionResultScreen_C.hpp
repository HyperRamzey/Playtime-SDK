#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Game_Interface_IngameScreens_UI_ScoreboardInfoBox {
struct UI_ScoreboardInfoBox_C;
}
namespace _Game_Interface_IngameScreens_UI_MissionResultInfoBox {
struct UI_MissionResultInfoBox_C;
}
namespace _Script_UMG {
struct Overlay;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct VerticalBox;
}
namespace _Game_Interface_General_UI_BasicButton {
struct UI_BasicButton_C;
}
namespace _Script_UMG {
struct WidgetSwitcher;
}
namespace _Script_UMG {
struct HorizontalBox;
}
namespace _Game_Interface_General_UI_BackButton {
struct UI_BackButton_C;
}
namespace _Game_Interface_IngameScreens_UI_ScoreboardHeader {
struct UI_ScoreboardHeader_C;
}
namespace _Game_Interface_Content_UI_N_RadialProgressBar {
struct UI_N_RadialProgressBar_C;
}
namespace _Game_Interface_IngameScreens_UI_Scoreboard {
struct UI_Scoreboard_C;
}
namespace _Game_Interface_MainMenu_UI_MissionResultsTierDisplay {
struct UI_MissionResultsTierDisplay_C;
}
namespace _Game_Interface_General_UI_WhiteBGButton {
struct UI_WhiteBGButton_C;
}
namespace _Script_Engine {
struct DataTable;
}
namespace _Game_Interface_MainMenu_ServerBrowser_UI_MP_Notif {
struct UI_MP_Notif_C;
}
namespace _Script_MediaAssets {
struct MediaPlayer;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Base_BP_MultiplayerPlayerState {
struct BP_MultiplayerPlayerState_C;
}
namespace _Game_Interface_IngameScreens_UI_MissionResultScreen {
#pragma pack(push, 1)
struct UI_MissionResultScreen_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x1c0]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Appear();
    _Script_UMG::Overlay*& get_Background();
    _Script_UMG::Image*& get_Divider_1();
    _Game_Interface_IngameScreens_UI_MissionResultInfoBox::UI_MissionResultInfoBox_C*& get_GainedXPBox();
    _Script_UMG::TextBlock*& get_Header();
    _Script_UMG::Image*& get_Image_144();
    _Script_UMG::Overlay*& get_Information();
    _Script_UMG::TextBlock*& get_MATCHTIME();
    _Game_Interface_IngameScreens_UI_ScoreboardInfoBox::UI_ScoreboardInfoBox_C*& get_Monster_UI_ScoreboardInfoBox();
    _Script_UMG::Image*& get_ResultBackground();
    _Game_Interface_IngameScreens_UI_MissionResultInfoBox::UI_MissionResultInfoBox_C*& get_SafeExtractionBox();
    _Script_UMG::VerticalBox*& get_Scoreboard_VerticalBox();
    _Game_Interface_General_UI_BasicButton::UI_BasicButton_C*& get_ScoreboardButton();
    _Script_UMG::Overlay*& get_ScoreboardTab();
    _Game_Interface_IngameScreens_UI_ScoreboardInfoBox::UI_ScoreboardInfoBox_C*& get_Specialist1();
    _Game_Interface_IngameScreens_UI_MissionResultInfoBox::UI_MissionResultInfoBox_C*& get_Stat1Box();
    _Game_Interface_IngameScreens_UI_MissionResultInfoBox::UI_MissionResultInfoBox_C*& get_Stat2Box();
    _Script_UMG::VerticalBox*& get_Summary_VerticalBox();
    _Game_Interface_General_UI_BasicButton::UI_BasicButton_C*& get_SummaryButton();
    _Script_UMG::Overlay*& get_SummaryTab();
    _Script_UMG::WidgetSwitcher*& get_TabWidgetSwitcher();
    _Game_Interface_IngameScreens_UI_MissionResultInfoBox::UI_MissionResultInfoBox_C*& get_TicketsEarnedBox();
    _Script_UMG::HorizontalBox*& get_TimerBox();
    _Script_UMG::TextBlock*& get_TimerLabel();
    _Game_Interface_General_UI_BackButton::UI_BackButton_C*& get_UI_BackButton();
    _Game_Interface_Content_UI_N_RadialProgressBar::UI_N_RadialProgressBar_C*& get_UI_N_RadialProgressBar();
    _Game_Interface_IngameScreens_UI_Scoreboard::UI_Scoreboard_C*& get_UI_Scoreboard();
    _Game_Interface_IngameScreens_UI_ScoreboardHeader::UI_ScoreboardHeader_C*& get_UI_ScoreboardHeader();
    _Game_Interface_IngameScreens_UI_ScoreboardHeader::UI_ScoreboardHeader_C*& get_UI_ScoreboardHeader_1();
    _Game_Interface_IngameScreens_UI_ScoreboardInfoBox::UI_ScoreboardInfoBox_C*& get_UI_ScoreboardInfoBox_2();
    _Game_Interface_IngameScreens_UI_ScoreboardInfoBox::UI_ScoreboardInfoBox_C*& get_UI_ScoreboardInfoBox_3();
    _Game_Interface_IngameScreens_UI_ScoreboardInfoBox::UI_ScoreboardInfoBox_C*& get_UI_ScoreboardInfoBox_4();
    _Game_Interface_IngameScreens_UI_ScoreboardInfoBox::UI_ScoreboardInfoBox_C*& get_UI_ScoreboardInfoBox_5();
    _Game_Interface_IngameScreens_UI_ScoreboardInfoBox::UI_ScoreboardInfoBox_C*& get_UI_ScoreboardInfoBox_6();
    _Game_Interface_MainMenu_UI_MissionResultsTierDisplay::UI_MissionResultsTierDisplay_C*& get_UI_TierWidget();
    _Game_Interface_General_UI_WhiteBGButton::UI_WhiteBGButton_C*& get_UI_WhiteBGButton();
    void* get_SurvivorScoreboardInfoBoxes();
    _Script_Engine::DataTable*& get_Ticket_Rewards_Data_Table();
    void* get_MissionResultInfoBoxes();
    _Game_Interface_MainMenu_ServerBrowser_UI_MP_Notif::UI_MP_Notif_C*& get_W_Notif();
    int32_t& get_Timer();
    void* get_TimerHandle();
    _Script_MediaAssets::MediaPlayer*& get_MediaPlayer();
    void* get_Match_Points_Criterion_Def();
    int32_t& get_ToysDeposited();
    int32_t& get_PlayersDeposited();
    bool get_MenuIsHidden();
    void set_MenuIsHidden(bool value);
    static _Script_CoreUObject::Class* static_class();
    void SequenceEvent__ENTRYPOINTUI_MissionResultScreen_0();
    bool Get_ScoreboardButton_bIsEnabled_0();
    void Update_Localization();
    void Populate_XP(int32_t XP_Gained, bool XP_Doubled);
    void PopulateMatchResult(void* EndGameCategory, float MATCHTIME);
    void SetTicketsEarned(int32_t TicketAmount, void*& RewardableActions);
    void PopulateMonster(_Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C*& MultiplayerPlayerState);
    void PopulateSurvivorList(void*& MultiplayerPlayerStates);
    void ManualSelectScoreboard();
    void ManualSelectSummary();
    void SetBackground(void* Monster, void* EndGameCategory);
    void BndEvt__UI_MissionResultScreen_Summary_UI_BasicButton_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature();
    void BndEvt__UI_MissionResultScreen_Scoreboard_UI_BasicButton_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature();
    void Construct0();
    void PreConstruct0(bool IsDesignTime);
    void Tick0(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime);
    void BndEvt__UI_MissionResultScreen_UI_BackButton_K2Node_ComponentBoundEvent_5_Released__DelegateSignature();
    void BeginTimer();
    void Set2ndStatBoxData();
    void NextMatchTimer();
    void OnMatchEnded();
    void QuitToMenu();
    void BndEvt__UI_MissionResultScreen_UI_WhiteBGButton_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature();
    void DontQuit();
    void ExecuteUbergraph_UI_MissionResultScreen(int32_t EntryPoint);
}; // Size: 0x420
#pragma pack(pop)
}
