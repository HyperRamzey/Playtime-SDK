#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_Playtime_Multiplayer\ToyBoxResponse.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Game_Interface_MainMenu_UI_GearMenu {
struct UI_GearMenu_C;
}
namespace _Script_UMG {
struct WidgetSwitcher;
}
namespace _Script_UMG {
struct Button;
}
namespace _Game_Interface_MainMenu_Widgets_UI_MenuButton {
struct UI_MenuButton_C;
}
namespace _Script_UMG {
struct Image;
}
namespace _Game_Interface_MainMenu_Widgets_UI_PlayAsButton {
struct UI_PlayAsButton_C;
}
namespace _Game_Interface_MainMenu_Widgets_UI_SubMenuButton {
struct UI_SubMenuButton_C;
}
namespace _Game_Interface_MainMenu_Widgets_UI_ShopButton {
struct UI_ShopButton_C;
}
namespace _Game_Interface_MainMenu_Components_T_CurrencyDisplay {
struct T_CurrencyDisplay_C;
}
namespace _Game_Interface_Shoppy_Widgets_UI_AnnouncmentInfo {
struct UI_AnnouncmentInfo_C;
}
namespace _Script_UMG {
struct Widget;
}
namespace _Game_Interface_MainMenu_DailyReward_UI_DailyReward {
struct UI_DailyReward_C;
}
namespace _Game_Interface_UI_EarlyAccess_Overlay {
struct UI_EarlyAccess_Overlay_C;
}
namespace _Game_Interface_MatchMaking_UI_MatchMakingScreen {
struct UI_MatchMakingScreen_C;
}
namespace _Game_Interface_MainMenu_Widgets_UI_NewsTicker {
struct UI_NewsTicker_C;
}
namespace _Game_Interface_Customization_Perks_UI_Perks {
struct UI_Perks_C;
}
namespace _Game_Interface_MainMenu_Play_UI_Play {
struct UI_Play_C;
}
namespace _Game_Interface_Stats_UI_StatsScreen {
struct UI_StatsScreen_C;
}
namespace _Game_Interface_Shoppy_Widgets_UI_Store {
struct UI_Store_C;
}
namespace _Game_Interface_MainMenu_UI_Theater {
struct UI_Theater_C;
}
namespace _Game_Interface_MainMenu_Widgets_UI_ToyBoxButton {
struct UI_ToyBoxButton_C;
}
namespace _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain {
struct UI_ToyBoxMain_C;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct AudioComponent;
}
namespace _Game_Interface_MainMenu_BP_CameraMoverMain {
struct BP_CameraMoverMain_C;
}
namespace _Script_Engine {
struct SoundWave;
}
namespace _Script_Engine {
struct SkeletalMeshActor;
}
namespace _Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter {
struct BP_CustomizationMenuCharacter_C;
}
namespace _Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter {
struct BP_MonsterAndPlayerMenuCharacter_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_MainMenu_UI_MainMenu {
#pragma pack(push, 1)
struct UI_MainMenu_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x240]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_MoveOtherOut();
    _Script_UMG::WidgetAnimation*& get_MoveOut();
    _Script_UMG::WidgetAnimation*& get_FadeIn();
    _Script_UMG::Button*& get_B_CosmeticTesting();
    _Script_UMG::Image*& get_BlackScreen();
    _Script_UMG::Image*& get_EventSplash();
    _Script_UMG::Image*& get_Image_55();
    _Game_Interface_MainMenu_Widgets_UI_SubMenuButton::UI_SubMenuButton_C*& get_OptionsButton();
    _Script_UMG::WidgetSwitcher*& get_OtherMenus();
    _Game_Interface_MainMenu_Widgets_UI_PlayAsButton::UI_PlayAsButton_C*& get_PlayAsMonsterButton();
    _Game_Interface_MainMenu_Widgets_UI_PlayAsButton::UI_PlayAsButton_C*& get_PlayAsSurvivorButton();
    _Game_Interface_MainMenu_Widgets_UI_MenuButton::UI_MenuButton_C*& get_PrivateMatchButton();
    _Game_Interface_MainMenu_Widgets_UI_MenuButton::UI_MenuButton_C*& get_ScreeningRoomButton();
    _Game_Interface_MainMenu_Widgets_UI_ShopButton::UI_ShopButton_C*& get_ShopButton();
    _Game_Interface_MainMenu_Components_T_CurrencyDisplay::T_CurrencyDisplay_C*& get_T_CurrencyDisplay();
    _Game_Interface_Shoppy_Widgets_UI_AnnouncmentInfo::UI_AnnouncmentInfo_C*& get_UI_AnnouncmentInfo();
    _Game_Interface_MainMenu_DailyReward_UI_DailyReward::UI_DailyReward_C*& get_UI_DailyReward();
    _Game_Interface_UI_EarlyAccess_Overlay::UI_EarlyAccess_Overlay_C*& get_UI_EarlyAccess_Overlay();
    _Game_Interface_MainMenu_UI_GearMenu::UI_GearMenu_C*& get_UI_GearMenu();
    _Game_Interface_MatchMaking_UI_MatchMakingScreen::UI_MatchMakingScreen_C*& get_UI_MatchMakingScreen();
    _Game_Interface_MainMenu_Widgets_UI_NewsTicker::UI_NewsTicker_C*& get_UI_NewsTicker();
    _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C*& get_UI_Perks();
    _Game_Interface_MainMenu_Play_UI_Play::UI_Play_C*& get_UI_Play();
    _Game_Interface_Stats_UI_StatsScreen::UI_StatsScreen_C*& get_UI_StatsScreen();
    _Game_Interface_Shoppy_Widgets_UI_Store::UI_Store_C*& get_UI_Store();
    _Game_Interface_MainMenu_UI_Theater::UI_Theater_C*& get_UI_Theater();
    _Game_Interface_MainMenu_Widgets_UI_ToyBoxButton::UI_ToyBoxButton_C*& get_UI_ToyBoxButton();
    _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C*& get_UI_ToyBoxMain();
    _Script_Engine::AudioComponent*& get_MainMenuAudioComponent();
    void* get_TutorialMessage();
    float& get_Customize_Start_Time();
    float& get_Alpha();
    float& get_CameraMoveSpeed();
    void* get_TargetTransform();
    void* get_PreviousTransform();
    void* get_OriginalCharacterRotation();
    void* get_Reset_Player_Smooth();
    float& get_TargetFOV();
    float& get_PreviousFOV();
    _Script_Engine::Actor*& get_MovieScreen();
    void* get_Tapes();
    void* get_First_Tape_Date();
    _Game_Interface_MainMenu_BP_CameraMoverMain::BP_CameraMoverMain_C*& get_CameraManager();
    bool get_AtMainMenu();
    void set_AtMainMenu(bool value);
    _Script_Engine::SkeletalMeshActor*& get_ToyBoxMonster();
    void* get_Spring_State();
    float& get_ToyButtonScale();
    bool get_ToyButtonHighlighted();
    void set_ToyButtonHighlighted(bool value);
    _Script_Engine::SoundWave*& get_MenuMusic();
    void* get_UpdateRotatingCharacter();
    void* get_MouseDragged();
    _Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter::BP_CustomizationMenuCharacter_C*& get_Menu_Player_Character();
    _Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter::BP_MonsterAndPlayerMenuCharacter_C*& get_PlayerMonsterMenuCharacterShop();
    _Script_Engine::Actor*& get_SpinningPreviewActor();
    _Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter::BP_MonsterAndPlayerMenuCharacter_C*& get_PlayerMonsterMenuCharacterToybox();
    float& get_RetryDuration();
    static _Script_CoreUObject::Class* static_class();
    void EnablePurchase(bool bInIsEnabled);
    void* Get_TimeRemainingText_Text_0();
    bool GetTimePassedFromFirstTapeStamp(int32_t Days);
    void SetCanEscQuit(bool CanEscQuit);
    void FadeOut();
    void OnCallback_6D860937408E3604BE930CA434F0FF23(void*& Results);
    void OnFailure_3D69071947FAD79E55BA238859444384();
    void OnSuccess_3D69071947FAD79E55BA238859444384();
    void OnFailure_34FFF2BB4DAE17E2FA1F3F9CBC3B2E31();
    void OnSuccess_34FFF2BB4DAE17E2FA1F3F9CBC3B2E31();
    void OnFailure_1FBF49BF46D9F261BC8273A034EA0D92();
    void OnSuccess_1FBF49BF46D9F261BC8273A034EA0D92();
    void OnFailure_2CFE5ED8482FAE57C3E9BDB514BDB0BB();
    void OnSuccess_2CFE5ED8482FAE57C3E9BDB514BDB0BB();
    void GetRewardsFailure(void* ErrorMessage);
    void GetRewardsSuccess(void*& Ints);
    void FadeBack();
    void BndEvt__UI_MainMenu_UI_PlayAsButton_K2Node_ComponentBoundEvent_24_ButtonPressed__DelegateSignature();
    void BndEvt__UI_MainMenu_UI_PlayAsButton_1_K2Node_ComponentBoundEvent_25_ButtonPressed__DelegateSignature();
    void BndEvt__UI_MainMenu_UI_ShopButton_K2Node_ComponentBoundEvent_16_ShopButtonPressed__DelegateSignature();
    void OpenShop();
    void BndEvt__UI_MainMenu_UI_ScreeningRoom_K2Node_ComponentBoundEvent_21_ButtonPressed__DelegateSignature();
    void FadeBackToMenu(float Speed);
    void BndEvt__UI_MainMenu_UI_GearMenu_K2Node_ComponentBoundEvent_20_GearMenu_BackPressed__DelegateSignature();
    void BndEvt__UI_MainMenu_OptionsButton_K2Node_ComponentBoundEvent_26_ButtonRelease__DelegateSignature();
    void Update_Localization();
    void BndEvt__UI_MainMenu_UI_PrivateMatch_K2Node_ComponentBoundEvent_5_ButtonPressed__DelegateSignature();
    void BackFromCustomizing(void* Current_Visible_Character);
    void BndEvt__UI_MainMenu_UI_Store_K2Node_ComponentBoundEvent_6_BackReleased__DelegateSignature();
    void BndEvt__UI_MainMenu_UI_ToyBoxButton_K2Node_ComponentBoundEvent_10_ToyBoxButtonPressed__DelegateSignature();
    void BndEvt__UI_MainMenu_B_CosmeticTesting_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature();
    void CheckBackendHealth();
    void Healthy();
    void Sickly(void* ErrorMessage);
    void loadPlaycoinsTab();
    void BndEvt__UI_MainMenu_UI_MatchMakingScreen_K2Node_ComponentBoundEvent_0_BackPressed__DelegateSignature();
    void BndEvt__UI_MainMenu_UI_NewsTicker_K2Node_ComponentBoundEvent_3_AnnoucnmentButtonPressed__DelegateSignature();
    void BndEvt__UI_MainMenu_UI_AnnouncmentInfo_K2Node_ComponentBoundEvent_8_CloseTeaser__DelegateSignature();
    void SwitchSelectedScreen(_Script_UMG::Widget* Widget, float Speed, void* Camera);
    void ReplayMonsterTutorial();
    void BndEvt__UI_MP_MainMenu_New_UI_BattlePassMain_K2Node_ComponentBoundEvent_2_GoBack__DelegateSignature();
    void OnInitialized0();
    void EscapeReleased();
    void PreConstruct0(bool IsDesignTime);
    void GetToyBoxFailure(void* ErrorMessage);
    void GotToyBox(_Script_Playtime_Multiplayer::ToyBoxResponse ToyBox);
    void BackToMainMenu(float Speed);
    void ReloadTutorial();
    void BndEvt__UI_MainMenu_UI_Theater_K2Node_ComponentBoundEvent_4_BackReleased__DelegateSignature();
    void BndEvt__UI_MainMenu_UI_StatsScreen_K2Node_ComponentBoundEvent_1_Back__DelegateSignature();
    void Construct0();
    void EscapePressed();
    void EventHost(bool bUseLAN, bool bShouldAdvertise, bool bAllowInvites, void* Level);
    void EventHostNEW(bool bUseLAN, bool bShouldAdvertise, bool bFriendsOnly, void* Level);
    void BndEvt__UI_MP_MainMenu_New_UI_Play_K2Node_ComponentBoundEvent_7_GoBack__DelegateSignature();
    void ExecuteUbergraph_UI_MainMenu(int32_t EntryPoint);
    void MouseDragged__DelegateSignature(_Script_CoreUObject::Vector2D Delta_Mouse);
    void UpdateRotatingCharacter__DelegateSignature(bool Update_Rotating_Character);
    void Reset_Player_Smooth__DelegateSignature();
}; // Size: 0x4a0
#pragma pack(pop)
}
