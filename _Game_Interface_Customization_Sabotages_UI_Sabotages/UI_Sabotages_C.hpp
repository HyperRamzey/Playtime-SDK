#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct TextBlock;
}
namespace _Game_Interface_Customization_Sabotages_UI_SelectableSabotage {
struct UI_SelectableSabotage_C;
}
namespace _Game_Interface_Customization_Perks_UI_ClearPerk {
struct UI_ClearPerk_C;
}
namespace _Script_UMG {
struct Overlay;
}
namespace _Script_UMG {
struct Image;
}
namespace _Game_Interface_Customization_Perks_UI_EquipPerk {
struct UI_EquipPerk_C;
}
namespace _Game_Interface_Customization_Sabotages_UI_SabotageSlot {
struct UI_SabotageSlot_C;
}
namespace _Game_Interface_Customization_Perks_UI_UpgradePerk {
struct UI_UpgradePerk_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_Customization_Sabotages_UI_Sabotages {
#pragma pack(push, 1)
struct UI_Sabotages_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x1a8]; public:
    void* get_UberGraphFrame();
    _Game_Interface_Customization_Sabotages_UI_SelectableSabotage::UI_SelectableSabotage_C*& get_AutoCarry();
    _Game_Interface_Customization_Sabotages_UI_SelectableSabotage::UI_SelectableSabotage_C*& get_Boobytrap();
    _Game_Interface_Customization_Sabotages_UI_SelectableSabotage::UI_SelectableSabotage_C*& get_Directionless();
    _Script_UMG::Image*& get_Image();
    _Script_UMG::Image*& get_Image_92();
    _Script_UMG::Image*& get_Image_172();
    _Script_UMG::Image*& get_Image_255();
    _Script_UMG::Image*& get_Image_381();
    _Script_UMG::Overlay*& get_infopanel();
    _Script_UMG::TextBlock*& get_Level1Description();
    _Script_UMG::Image*& get_Level1Icon();
    _Script_UMG::TextBlock*& get_Level1Label();
    _Script_UMG::TextBlock*& get_Level2Description();
    _Script_UMG::Image*& get_Level2Icon();
    _Script_UMG::TextBlock*& get_Level2Label();
    _Script_UMG::TextBlock*& get_Level3Description();
    _Script_UMG::Image*& get_Level3Icon();
    _Script_UMG::TextBlock*& get_Level3Label();
    _Game_Interface_Customization_Sabotages_UI_SelectableSabotage::UI_SelectableSabotage_C*& get_LivingNightmare();
    _Script_UMG::Image*& get_lvl1lock();
    _Script_UMG::Image*& get_lvl2lock();
    _Script_UMG::Image*& get_lvl3lock();
    _Game_Interface_Customization_Sabotages_UI_SelectableSabotage::UI_SelectableSabotage_C*& get_NoEscape();
    _Game_Interface_Customization_Sabotages_UI_SelectableSabotage::UI_SelectableSabotage_C*& get_NoPack();
    _Script_UMG::TextBlock*& get_SabDescription();
    _Script_UMG::TextBlock*& get_SabName();
    _Script_UMG::Image*& get_SelectedPerkBG();
    _Script_UMG::Image*& get_SelectedPerkIcon();
    _Game_Interface_Customization_Sabotages_UI_SelectableSabotage::UI_SelectableSabotage_C*& get_Shutdown();
    _Script_UMG::Image*& get_TitleBackground();
    _Script_UMG::TextBlock*& get_TitleText();
    _Game_Interface_Customization_Sabotages_UI_SelectableSabotage::UI_SelectableSabotage_C*& get_TotalLockdown();
    _Game_Interface_Customization_Perks_UI_ClearPerk::UI_ClearPerk_C*& get_UI_ClearPerk();
    _Game_Interface_Customization_Perks_UI_EquipPerk::UI_EquipPerk_C*& get_UI_EquipSab();
    _Game_Interface_Customization_Sabotages_UI_SabotageSlot::UI_SabotageSlot_C*& get_UI_SabotageSlot();
    _Game_Interface_Customization_Perks_UI_UpgradePerk::UI_UpgradePerk_C*& get_UI_UpgradeSab();
    void* get_CurrentlyDisplayedSabotage();
    void* get_AllSabotageButtons();
    int32_t& get_SabotageUpgradePrice();
    bool get_Is_Design_Time();
    void set_Is_Design_Time(bool value);
    void* get_StupidPerks();
    void* get_SabotageMap();
    static _Script_CoreUObject::Class* static_class();
    void* Get_level3_Text_0();
    void* Get_level2_Text_0();
    void* Get_level1_Text_0();
    void PreConstruct0(bool IsDesignTime);
    void UpdateVisuals();
    void SabotageButtonPressed(void* Sabotage);
    void RefreshUpgradeButton();
    void OnGetSabotagesSuccess(void*& Perks);
    void OnGetSabotageFailure(void* ErrorMessage);
    void BuySabotageSuccess();
    void BuySabotageFailure(void* ErrorMessage);
    void GotWallet(int32_t Playcoins, int32_t Tickets);
    void FailedToGetWallet(void* ErrorMessage);
    void GotPerks(void*& Perks);
    void silent_fail_get_perks(void* ErrorMessage);
    void PopulateSabInfo();
    void BndEvt__UI_Sabotages_UI_UpgradeSab_K2Node_ComponentBoundEvent_6_ButtonPressed__DelegateSignature();
    void BndEvt__UI_Sabotages_UI_EquipSab_K2Node_ComponentBoundEvent_7_ButtonPressed__DelegateSignature();
    void BndEvt__UI_Sabotages_UI_ClearPerk_K2Node_ComponentBoundEvent_0_Button_Pressed__DelegateSignature();
    void EquipSabotage();
    void ExecuteUbergraph_UI_Sabotages(int32_t EntryPoint);
}; // Size: 0x408
#pragma pack(pop)
}
