#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Game_Interface_HUDComponents_UI_ControlledPlayerStatus {
struct UI_ControlledPlayerStatus_C;
}
namespace _Game_Interface_HUDComponents_UI_PrimaryObjective {
struct UI_PrimaryObjective_C;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_UMG {
struct Image;
}
namespace _Game_Interface_Content_UI_N_RadialProgressBar {
struct UI_N_RadialProgressBar_C;
}
namespace _Game_Interface_HUDComponents_Comms_UI_Comms {
struct UI_Comms_C;
}
namespace _Game_Interface_HUDComponents_UI_ActionPrompt {
struct UI_ActionPrompt_C;
}
namespace _Game_Player_TrainingDummy_BP_ZoneDetectionComponent {
struct BP_ZoneDetectionComponent_C;
}
namespace _Game_Interface_IngameScreens_UI_Damage {
struct UI_Damage_C;
}
namespace _Game_Interface_Customization_Emotes_UI_EmoteHolder {
struct UI_EmoteHolder_C;
}
namespace _Game_Interface_HUDComponents_UI_InGameNotificationList {
struct UI_InGameNotificationList_C;
}
namespace _Game_Interface_HUDComponents_UI_InteractPrompt {
struct UI_InteractPrompt_C;
}
namespace _Game_Interface_HUDComponents_UI_LockerContainer {
struct UI_LockerContainer_C;
}
namespace _Game_Interface_IngameScreens_UI_PlayerStatus {
struct UI_PlayerStatus_C;
}
namespace _Game_Interface_IngameScreens_UI_SabotageIconContainer {
struct UI_SabotageIconContainer_C;
}
namespace _Game_Interface_IngameScreens_UI_Scoreboard {
struct UI_Scoreboard_C;
}
namespace _Game_Interface_HUDComponents_UI_TimerComponent {
struct UI_TimerComponent_C;
}
namespace _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter {
struct BP_NetworkCharacter_C;
}
namespace _Game_Interface_IngameScreens_UI_SabotageSplashText {
struct UI_SabotageSplashText_C;
}
namespace _Game_Player_TrainingDummy_CPPChildren_BP_NetworkHand {
struct BP_NetworkHand_C;
}
namespace _Script_Engine {
struct MaterialInstanceDynamic;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_HUDComponents_UI_SurvivorHUD {
#pragma pack(push, 1)
struct UI_SurvivorHUD_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x1b0]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_ShowAFKCountdown();
    _Script_UMG::WidgetAnimation*& get_CompletedRevive();
    _Script_UMG::WidgetAnimation*& get_ShowHP();
    _Script_UMG::WidgetAnimation*& get_TutorialInit();
    _Script_UMG::WidgetAnimation*& get_Init();
    _Script_UMG::WidgetAnimation*& get_StartRevive();
    _Script_UMG::WidgetAnimation*& get_LaunchHand();
    _Script_UMG::TextBlock*& get_AFKKickText();
    _Script_UMG::TextBlock*& get_Commslocation();
    _Script_UMG::Image*& get_Fader();
    _Game_Interface_HUDComponents_UI_PrimaryObjective::UI_PrimaryObjective_C*& get_PrimaryObjective();
    _Game_Interface_Content_UI_N_RadialProgressBar::UI_N_RadialProgressBar_C*& get_RadialBar();
    _Game_Interface_Content_UI_N_RadialProgressBar::UI_N_RadialProgressBar_C*& get_RevivePlayerBar();
    _Script_UMG::Image*& get_ScreenPreview();
    _Game_Interface_HUDComponents_UI_ActionPrompt::UI_ActionPrompt_C*& get_UI_ActionPrompt();
    _Game_Interface_HUDComponents_Comms_UI_Comms::UI_Comms_C*& get_UI_Comms();
    _Game_Interface_HUDComponents_UI_ControlledPlayerStatus::UI_ControlledPlayerStatus_C*& get_UI_ControlledPlayerStatus();
    _Game_Interface_IngameScreens_UI_Damage::UI_Damage_C*& get_UI_Damage();
    _Game_Interface_Customization_Emotes_UI_EmoteHolder::UI_EmoteHolder_C*& get_UI_EmoteHolder();
    _Game_Interface_HUDComponents_UI_InGameNotificationList::UI_InGameNotificationList_C*& get_UI_InGameNotificationList();
    _Game_Interface_HUDComponents_UI_InteractPrompt::UI_InteractPrompt_C*& get_UI_InteractPrompt();
    _Game_Interface_HUDComponents_UI_LockerContainer::UI_LockerContainer_C*& get_UI_LockerContainer();
    _Game_Interface_IngameScreens_UI_PlayerStatus::UI_PlayerStatus_C*& get_UI_PlayerStatus();
    _Game_Interface_IngameScreens_UI_SabotageIconContainer::UI_SabotageIconContainer_C*& get_UI_SabotageIconContainer();
    _Game_Interface_IngameScreens_UI_Scoreboard::UI_Scoreboard_C*& get_UI_Scoreboard();
    _Game_Interface_HUDComponents_UI_TimerComponent::UI_TimerComponent_C*& get_UI_TimerComponent();
    _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C*& get_Player_Reference();
    _Game_Interface_IngameScreens_UI_SabotageSplashText::UI_SabotageSplashText_C*& get_SabotageSplashReference();
    void* get_ToySelection();
    bool get_InTutorial();
    void set_InTutorial(bool value);
    _Game_Player_TrainingDummy_CPPChildren_BP_NetworkHand::BP_NetworkHand_C*& get_HandReference();
    float& get_PreviousUpdateHealth();
    bool get_HealthBarIsVisible();
    void set_HealthBarIsVisible(bool value);
    void* get_SabotageDurationText();
    void* get_SabotageDurationHandle();
    float& get_SabotageStartDuration();
    bool get_NoSabotageDuration();
    void set_NoSabotageDuration(bool value);
    void* get_CurrentObjective();
    void* get_PreviousSecondaryObjective();
    _Script_Engine::Texture2D*& get_Toy1CollectedImage();
    _Script_Engine::Texture2D*& get_Toy2CollectedImage();
    _Script_Engine::Texture2D*& get_Toy3CollectedImage();
    _Script_Engine::Texture2D*& get_Toy4CollectedImage();
    _Script_Engine::Texture2D*& get_Toy5CollectedImage();
    _Script_Engine::Texture2D*& get_Toy6CollectedImage();
    bool get_AFKTimerVisible();
    void set_AFKTimerVisible(bool value);
    void* get_AFKTimerTicker();
    int32_t& get_AFKTime();
    void* get_HealthColor();
    _Script_Engine::MaterialInstanceDynamic*& get_EKGMaterial();
    _Game_Player_TrainingDummy_BP_ZoneDetectionComponent::BP_ZoneDetectionComponent_C*& get_BP_Zone_Detection_Component();
    static _Script_CoreUObject::Class* static_class();
    void Change_Shield_Color(_Script_CoreUObject::LinearColor Color);
    void* Get_StarterObjective_Text_0();
    void AbilityInit();
    void ConvertTime(float TimeToConvert, void*& ConvertedTime);
    void Show_HideHP(bool IsVisible);
    void UpdateHealth();
    void UpdatePlayersHoldingToy();
    void LoadToys();
    void Set_Toy_Collected_UI(_Script_UMG::Image* DefaultToyImage, _Script_Engine::Texture2D* CollectedToyImage, bool IsCollected, _Script_UMG::Image* Toy_Part_BG, _Script_UMG::Image* ToyHighlight);
    void UpdateToyPartsUI(void*& ToysFound);
    void InitToyImages();
    void SetToyImages(_Script_Engine::Texture2D* Toy1, _Script_Engine::Texture2D* Toy2, _Script_Engine::Texture2D* Toy3, _Script_Engine::Texture2D* Toy4, _Script_Engine::Texture2D* Toy5, _Script_Engine::Texture2D* Toy6);
    void AnimateInit();
    void PlayHandAnimation();
    void UpdateCrosshair();
    void Construct0();
    void StartAutoReviving(bool Reset);
    void ShowStrikes(int32_t Strikes);
    void Event_Show_Emotes();
    void OnInitialized0();
    void Tick0(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime);
    void SetNonEssentialHUDVisibility(bool Visible);
    void BndEvt__UI_MP_Crosshair_UI_EmoteHolder_K2Node_ComponentBoundEvent_1_ClickedEmote__DelegateSignature(int32_t Index);
    void PreConstruct0(bool IsDesignTime);
    void Destruct0();
    void ShowMonsterReleasedSplash(void* Monster);
    void OnDeath();
    void PrimaryObjectiveAnim(void* ObjName);
    void ChangePrimObjective();
    void StartAFKKickTimer();
    void SetAFKTimerText();
    void EndAFKKickTimer();
    void GetPlayerReference();
    void SetCheckmarkVisibility(bool IsVisible);
    void ExitedLocker();
    void EnteredLocker();
    void Show_Comms();
    void SetHitHatchUIVisibility(bool Visible_);
    void CommsEnabling();
    void BndEvt__UI_SurvivorHUD_UI_Comms_K2Node_ComponentBoundEvent_0_FiredComm__DelegateSignature(int32_t Comm);
    void ShowSuccessfulRevive();
    void ExecuteUbergraph_UI_SurvivorHUD(int32_t EntryPoint);
}; // Size: 0x410
#pragma pack(pop)
}
