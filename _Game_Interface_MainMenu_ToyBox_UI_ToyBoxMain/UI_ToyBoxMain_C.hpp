#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Playtime_Multiplayer\LevelResponse.hpp"
#include "..\_Script_Playtime_Multiplayer\ToyBoxResponse.hpp"
#include "..\_Script_Playtime_Multiplayer\ToyBoxResponseItem.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_UMG {
struct Throbber;
}
namespace _Script_UMG {
struct Button;
}
namespace _Script_UMG {
struct HorizontalBox;
}
namespace _Game_Interface_MainMenu_UI_MP_N_MenuButton_New {
struct UI_MP_N_MenuButton_New_C;
}
namespace _Script_UMG {
struct Overlay;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct SizeBox;
}
namespace _Game_Interface_General_UI_BackButton {
struct UI_BackButton_C;
}
namespace _Game_Interface_Customization_Cosmetics_UI_CosmeticInfo {
struct UI_CosmeticInfo_C;
}
namespace _Game_Interface_UI_EarlyAccess_Overlay {
struct UI_EarlyAccess_Overlay_C;
}
namespace _Game_Interface_Content_UI_N_Loading {
struct UI_N_Loading_C;
}
namespace _Game_Interface_MainMenu_UI_TierDisplay {
struct UI_TierDisplay_C;
}
namespace _Game_Interface_MainMenu_ToyBox_UI_N_ToyBoxBottomTier {
struct UI_N_ToyBoxBottomTier_C;
}
namespace _Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain {
struct UI_ToyBoxTierMain_C;
}
namespace _Script_Engine {
struct SkeletalMeshActor;
}
namespace _Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter {
struct BP_MonsterAndPlayerMenuCharacter_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_MainMenu_UI_MainMenu {
struct UI_MainMenu_C;
}
namespace _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain {
#pragma pack(push, 1)
struct UI_ToyBoxMain_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x210]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_HoverTBButton();
    _Script_UMG::WidgetAnimation*& get_FinishLoading();
    _Script_UMG::WidgetAnimation*& get_NewPreview();
    _Script_UMG::WidgetAnimation*& get_NextPage();
    _Script_UMG::WidgetAnimation*& get_LoopSparks();
    _Script_UMG::WidgetAnimation*& get_Init();
    _Script_UMG::HorizontalBox*& get_BottomHorizontalBox();
    _Script_UMG::Button*& get_Button_192();
    _Script_UMG::TextBlock*& get_BuyButtonText();
    _Script_UMG::Button*& get_BuyToyboxButton();
    _Game_Interface_MainMenu_UI_MP_N_MenuButton_New::UI_MP_N_MenuButton_New_C*& get_closeButton_1();
    _Script_UMG::Image*& get_Image_50();
    _Script_UMG::Image*& get_Image_139();
    _Script_UMG::Image*& get_Image_654();
    _Script_UMG::Button*& get_LArrowSmall();
    _Script_UMG::Button*& get_LButtonMain();
    _Script_UMG::Throbber*& get_LoadingProgress_Throbber();
    _Script_UMG::Overlay*& get_Overlay_3();
    _Script_UMG::Image*& get_OwnershipChecked();
    _Script_UMG::HorizontalBox*& get_OwnershipHorizontalBox();
    _Script_UMG::TextBlock*& get_OwnershipText();
    _Script_UMG::Image*& get_OwnershipUnchecked();
    _Script_UMG::Button*& get_RArrowSmall();
    _Script_UMG::Button*& get_RButtonMain();
    _Script_UMG::Overlay*& get_ReqToyBoxOverlay();
    _Script_UMG::HorizontalBox*& get_RequiresToyBox();
    _Script_UMG::TextBlock*& get_RewardsProgressText();
    _Script_UMG::Image*& get_ScreenPreview();
    _Script_UMG::SizeBox*& get_ScreenPreviewer();
    _Script_UMG::TextBlock*& get_SeasonName();
    _Script_UMG::TextBlock*& get_TimeRemainingText();
    _Game_Interface_General_UI_BackButton::UI_BackButton_C*& get_UI_BackButton();
    _Game_Interface_Customization_Cosmetics_UI_CosmeticInfo::UI_CosmeticInfo_C*& get_UI_CosmeticInfo();
    _Game_Interface_UI_EarlyAccess_Overlay::UI_EarlyAccess_Overlay_C*& get_UI_EarlyAccess_Overlay();
    _Game_Interface_Content_UI_N_Loading::UI_N_Loading_C*& get_UI_N_Loading();
    _Game_Interface_MainMenu_UI_TierDisplay::UI_TierDisplay_C*& get_UI_TierWidget_1();
    _Game_Interface_MainMenu_ToyBox_UI_N_ToyBoxBottomTier::UI_N_ToyBoxBottomTier_C*& get_UI_ToyBoxBottomTier();
    _Game_Interface_MainMenu_ToyBox_UI_N_ToyBoxBottomTier::UI_N_ToyBoxBottomTier_C*& get_UI_ToyBoxBottomTier_1();
    _Game_Interface_MainMenu_ToyBox_UI_N_ToyBoxBottomTier::UI_N_ToyBoxBottomTier_C*& get_UI_ToyBoxBottomTier_2();
    _Game_Interface_MainMenu_ToyBox_UI_N_ToyBoxBottomTier::UI_N_ToyBoxBottomTier_C*& get_UI_ToyBoxBottomTier_3();
    _Game_Interface_MainMenu_ToyBox_UI_N_ToyBoxBottomTier::UI_N_ToyBoxBottomTier_C*& get_UI_ToyBoxBottomTier_4();
    _Game_Interface_MainMenu_ToyBox_UI_N_ToyBoxBottomTier::UI_N_ToyBoxBottomTier_C*& get_UI_ToyBoxBottomTier_5();
    _Game_Interface_MainMenu_ToyBox_UI_N_ToyBoxBottomTier::UI_N_ToyBoxBottomTier_C*& get_UI_ToyBoxBottomTier_6();
    _Game_Interface_MainMenu_ToyBox_UI_N_ToyBoxBottomTier::UI_N_ToyBoxBottomTier_C*& get_UI_ToyBoxBottomTier_7();
    _Game_Interface_MainMenu_ToyBox_UI_N_ToyBoxBottomTier::UI_N_ToyBoxBottomTier_C*& get_UI_ToyBoxBottomTier_8();
    _Game_Interface_MainMenu_ToyBox_UI_N_ToyBoxBottomTier::UI_N_ToyBoxBottomTier_C*& get_UI_ToyBoxBottomTier_9();
    _Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C*& get_UI_ToyBoxTierMain_1();
    _Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C*& get_UI_ToyBoxTierMain_2();
    _Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C*& get_UI_ToyBoxTierMain_3();
    _Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C*& get_UI_ToyBoxTierMain_4();
    _Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C*& get_UI_ToyBoxTierMain_5();
    _Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C*& get_UI_ToyBoxTierMain_6();
    _Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C*& get_UI_ToyBoxTierMain_7();
    _Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C*& get_UI_ToyBoxTierMain_8();
    _Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C*& get_UI_ToyBoxTierMain_9();
    _Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C*& get_UI_ToyBoxTierMain_10();
    _Script_UMG::TextBlock*& get_XPToNextTierText();
    void* get_GoBack();
    int32_t& get_Page();
    int32_t& get_HoverPreviewID();
    _Script_Engine::SkeletalMeshActor*& get_Monster();
    void* get_MouseLocationOnRotatorClick();
    bool get_UserOwnsToyBox();
    void set_UserOwnsToyBox(bool value);
    bool get_LoadedInventory();
    void set_LoadedInventory(bool value);
    bool get_Ownership_Loading();
    void set_Ownership_Loading(bool value);
    _Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter::BP_MonsterAndPlayerMenuCharacter_C*& get_PreviewCharacterMesh();
    int32_t& get_ClickPreviewID();
    static _Script_CoreUObject::Class* static_class();
    void* Get_XPToNextTierText_Text_0();
    void* Get_RewardsProgressText_Text_0();
    void GetMainMenu(_Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C*& Menu);
    void SetCharacter(_Script_Engine::SkeletalMeshActor* Monster, _Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter::BP_MonsterAndPlayerMenuCharacter_C* PlayerMonsterMenuCharacter);
    float GetBarProgress(int32_t XP, int32_t Page);
    void SetHoverPreviewID(_Script_Playtime_Multiplayer::ToyBoxResponseItem Item);
    void UpdateBottomPages();
    void InitAnimation();
    void BndEvt__UI_ToyBoxMain_UI_ToyBoxBottomTier_K2Node_ComponentBoundEvent_12_OnToyBoxTierClicked__DelegateSignature(int32_t Page);
    void BndEvt__UI_ToyBoxMain_UI_ToyBoxBottomTier_1_K2Node_ComponentBoundEvent_13_OnToyBoxTierClicked__DelegateSignature(int32_t Page);
    void BndEvt__UI_ToyBoxMain_UI_ToyBoxBottomTier_2_K2Node_ComponentBoundEvent_14_OnToyBoxTierClicked__DelegateSignature(int32_t Page);
    void BndEvt__UI_ToyBoxMain_UI_ToyBoxBottomTier_3_K2Node_ComponentBoundEvent_15_OnToyBoxTierClicked__DelegateSignature(int32_t Page);
    void BndEvt__UI_ToyBoxMain_UI_ToyBoxBottomTier_4_K2Node_ComponentBoundEvent_16_OnToyBoxTierClicked__DelegateSignature(int32_t Page);
    void BndEvt__UI_ToyBoxMain_UI_ToyBoxBottomTier_5_K2Node_ComponentBoundEvent_17_OnToyBoxTierClicked__DelegateSignature(int32_t Page);
    void BndEvt__UI_ToyBoxMain_UI_ToyBoxBottomTier_6_K2Node_ComponentBoundEvent_18_OnToyBoxTierClicked__DelegateSignature(int32_t Page);
    void BndEvt__UI_ToyBoxMain_UI_ToyBoxBottomTier_7_K2Node_ComponentBoundEvent_19_OnToyBoxTierClicked__DelegateSignature(int32_t Page);
    void BndEvt__UI_ToyBoxMain_UI_ToyBoxBottomTier_8_K2Node_ComponentBoundEvent_20_OnToyBoxTierClicked__DelegateSignature(int32_t Page);
    void BndEvt__UI_ToyBoxMain_UI_ToyBoxBottomTier_9_K2Node_ComponentBoundEvent_21_OnToyBoxTierClicked__DelegateSignature(int32_t Page);
    void BndEvt__UI_ToyBoxMain_UI_ToyBoxTierMain_1_K2Node_ComponentBoundEvent_0_ToyboxTierClicked__DelegateSignature(int32_t ItemId, int32_t Level);
    void BndEvt__UI_ToyBoxMain_UI_ToyBoxTierMain_2_K2Node_ComponentBoundEvent_1_ToyboxTierClicked__DelegateSignature(int32_t ItemId, int32_t Level);
    void BndEvt__UI_ToyBoxMain_UI_ToyBoxTierMain_3_K2Node_ComponentBoundEvent_2_ToyboxTierClicked__DelegateSignature(int32_t ItemId, int32_t Level);
    void BndEvt__UI_ToyBoxMain_UI_ToyBoxTierMain_4_K2Node_ComponentBoundEvent_3_ToyboxTierClicked__DelegateSignature(int32_t ItemId, int32_t Level);
    void BndEvt__UI_ToyBoxMain_UI_ToyBoxTierMain_5_K2Node_ComponentBoundEvent_4_ToyboxTierClicked__DelegateSignature(int32_t ItemId, int32_t Level);
    void BndEvt__UI_ToyBoxMain_UI_ToyBoxTierMain_6_K2Node_ComponentBoundEvent_5_ToyboxTierClicked__DelegateSignature(int32_t ItemId, int32_t Level);
    void BndEvt__UI_ToyBoxMain_UI_ToyBoxTierMain_7_K2Node_ComponentBoundEvent_6_ToyboxTierClicked__DelegateSignature(int32_t ItemId, int32_t Level);
    void BndEvt__UI_ToyBoxMain_UI_ToyBoxTierMain_8_K2Node_ComponentBoundEvent_7_ToyboxTierClicked__DelegateSignature(int32_t ItemId, int32_t Level);
    void BndEvt__UI_ToyBoxMain_UI_ToyBoxTierMain_9_K2Node_ComponentBoundEvent_8_ToyboxTierClicked__DelegateSignature(int32_t ItemId, int32_t Level);
    void BndEvt__UI_ToyBoxMain_UI_ToyBoxTierMain_10_K2Node_ComponentBoundEvent_9_ToyboxTierClicked__DelegateSignature(int32_t ItemId, int32_t Level);
    void previewitem(int32_t ItemId, int32_t Level);
    void BndEvt__UI_ToyBoxMain_UI_ToyBoxTierMain_1_K2Node_ComponentBoundEvent_30_ToyboxTierOnHovered__DelegateSignature(_Script_Playtime_Multiplayer::ToyBoxResponseItem Item);
    void BndEvt__UI_ToyBoxMain_UI_ToyBoxTierMain_2_K2Node_ComponentBoundEvent_31_ToyboxTierOnHovered__DelegateSignature(_Script_Playtime_Multiplayer::ToyBoxResponseItem Item);
    void BndEvt__UI_ToyBoxMain_UI_ToyBoxTierMain_3_K2Node_ComponentBoundEvent_32_ToyboxTierOnHovered__DelegateSignature(_Script_Playtime_Multiplayer::ToyBoxResponseItem Item);
    void BndEvt__UI_ToyBoxMain_UI_ToyBoxTierMain_4_K2Node_ComponentBoundEvent_33_ToyboxTierOnHovered__DelegateSignature(_Script_Playtime_Multiplayer::ToyBoxResponseItem Item);
    void BndEvt__UI_ToyBoxMain_UI_ToyBoxTierMain_5_K2Node_ComponentBoundEvent_34_ToyboxTierOnHovered__DelegateSignature(_Script_Playtime_Multiplayer::ToyBoxResponseItem Item);
    void BndEvt__UI_ToyBoxMain_UI_ToyBoxTierMain_6_K2Node_ComponentBoundEvent_35_ToyboxTierOnHovered__DelegateSignature(_Script_Playtime_Multiplayer::ToyBoxResponseItem Item);
    void BndEvt__UI_ToyBoxMain_UI_ToyBoxTierMain_7_K2Node_ComponentBoundEvent_36_ToyboxTierOnHovered__DelegateSignature(_Script_Playtime_Multiplayer::ToyBoxResponseItem Item);
    void BndEvt__UI_ToyBoxMain_UI_ToyBoxTierMain_8_K2Node_ComponentBoundEvent_37_ToyboxTierOnHovered__DelegateSignature(_Script_Playtime_Multiplayer::ToyBoxResponseItem Item);
    void BndEvt__UI_ToyBoxMain_UI_ToyBoxTierMain_9_K2Node_ComponentBoundEvent_38_ToyboxTierOnHovered__DelegateSignature(_Script_Playtime_Multiplayer::ToyBoxResponseItem Item);
    void BndEvt__UI_ToyBoxMain_UI_ToyBoxTierMain_10_K2Node_ComponentBoundEvent_39_ToyboxTierOnHovered__DelegateSignature(_Script_Playtime_Multiplayer::ToyBoxResponseItem Item);
    void BndEvt__UI_BattlePassMain_closeButton_1_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature(_Game_Interface_MainMenu_UI_MP_N_MenuButton_New::UI_MP_N_MenuButton_New_C* Caller);
    void Close();
    void OnInitialized0();
    void OpenToyBox();
    void BndEvt__UI_BattlePassMain_Button_99_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__UI_BattlePassMain_Button_99_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_BattlePassMain_Button_99_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_BattlePassMain_UI_BackButton_K2Node_ComponentBoundEvent_2_Released__DelegateSignature();
    void BndEvt__UI_BattlePassMain_LButtonMain_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__UI_BattlePassMain_RButtonMain_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__UI_BattlePassMain_LArrowSmall_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__UI_BattlePassMain_RArrowSmall_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__UI_BattlePassMain_Button_192_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__UI_BattlePassMain_Button_192_K2Node_ComponentBoundEvent_10_OnButtonReleasedEvent__DelegateSignature();
    void Tick0(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime);
    void RefreshToyBoxOwnership();
    void OnXPUpdate(int32_t XP);
    void SetOwnershipLoading(bool OwnershipLoading);
    void FoundOwnership(_Script_Playtime_Multiplayer::LevelResponse Response);
    void SetPage(int32_t NewPage);
    void GeneralFailure(void* ErrorMessage);
    void SetOtherVisibleFields();
    void OnGetToyBoxSuccess(_Script_Playtime_Multiplayer::ToyBoxResponse ToyBox);
    void GetRewards();
    void LoadRewards(void*& Ints);
    void FailedLoadingRewards(void* ErrorMessage);
    void GetToyBoxSuccess(_Script_Playtime_Multiplayer::ToyBoxResponse ToyBox);
    void GotLevel(_Script_Playtime_Multiplayer::LevelResponse Response);
    void RedeemAllRewards(void*& RewardsIDs);
    void OnRedeemRewardFailure(void* ErrorMessage);
    void OnRedeemRewardSuccess();
    void OnGetRewardsSuccess(void*& Ints);
    void OnGetRewardsFailure(void* ErrorMessage);
    void ExecuteUbergraph_UI_ToyBoxMain(int32_t EntryPoint);
    void GoBack__DelegateSignature();
}; // Size: 0x470
#pragma pack(pop)
}
