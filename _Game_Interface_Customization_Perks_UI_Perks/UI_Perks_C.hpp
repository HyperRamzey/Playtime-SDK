#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Game_Interface_Customization_Perks_UI_EquipPerk {
struct UI_EquipPerk_C;
}
namespace _Game_Interface_Customization_Perks_UI_SelectablePerk {
struct UI_SelectablePerk_C;
}
namespace _Game_Interface_Customization_Perks_UI_ClearPerk {
struct UI_ClearPerk_C;
}
namespace _Game_Interface_Customization_Perks_UI_PerkSlot {
struct UI_PerkSlot_C;
}
namespace _Script_UMG {
struct Overlay;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Game_Interface_Customization_Perks_UI_UpgradePerk {
struct UI_UpgradePerk_C;
}
namespace _Script_UMG {
struct WidgetSwitcher;
}
namespace _Script_Playtime_Multiplayer {
struct PerkSaveGame;
}
namespace _Script_Playtime_Multiplayer {
struct TicketSaveGame;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_Customization_Perks_UI_Perks {
#pragma pack(push, 1)
struct UI_Perks_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x220]; public:
    void* get_UberGraphFrame();
    _Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C*& get_ClawCollector();
    _Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C*& get_DistantSavior();
    _Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C*& get_Genius();
    _Script_UMG::Image*& get_Image();
    _Script_UMG::Image*& get_Image_92();
    _Script_UMG::Image*& get_Image_172();
    _Script_UMG::Image*& get_Image_255();
    _Script_UMG::Image*& get_Image_381();
    _Script_UMG::Overlay*& get_infopanel();
    _Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C*& get_Leadership();
    _Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C*& get_LeaveNoTrace();
    _Script_UMG::TextBlock*& get_Level1Description();
    _Script_UMG::TextBlock*& get_Level1DisplayLabel();
    _Script_UMG::Image*& get_Level1Icon();
    _Script_UMG::TextBlock*& get_Level2Description();
    _Script_UMG::TextBlock*& get_Level2DisplayLabel();
    _Script_UMG::Image*& get_Level2Icon();
    _Script_UMG::TextBlock*& get_Level3Description();
    _Script_UMG::TextBlock*& get_Level3DisplayLabel();
    _Script_UMG::Image*& get_Level3Icon();
    _Script_UMG::Image*& get_lvl1lock();
    _Script_UMG::Image*& get_lvl2lock();
    _Script_UMG::Image*& get_lvl3lock();
    _Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C*& get_MasterPianist();
    _Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C*& get_Pathfinder();
    _Game_Interface_Customization_Perks_UI_PerkSlot::UI_PerkSlot_C*& get_perk1();
    _Game_Interface_Customization_Perks_UI_PerkSlot::UI_PerkSlot_C*& get_Perk2();
    _Game_Interface_Customization_Perks_UI_PerkSlot::UI_PerkSlot_C*& get_Perk3();
    _Script_UMG::TextBlock*& get_PerkDescription();
    _Script_UMG::TextBlock*& get_PerkName();
    _Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C*& get_PowerWalker();
    _Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C*& get_PunchingBag();
    _Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C*& get_PuzzlePicasso();
    _Script_UMG::Image*& get_SelectedPerkBG();
    _Script_UMG::Image*& get_SelectedPerkIcon();
    _Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C*& get_ShadowWalker();
    _Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C*& get_ThinkFast();
    _Script_UMG::Image*& get_TitleBackground();
    _Script_UMG::TextBlock*& get_TitleText();
    _Game_Interface_Customization_Perks_UI_ClearPerk::UI_ClearPerk_C*& get_UI_ClearPerk();
    _Game_Interface_Customization_Perks_UI_EquipPerk::UI_EquipPerk_C*& get_UI_EquipPerk();
    _Game_Interface_Customization_Perks_UI_UpgradePerk::UI_UpgradePerk_C*& get_UI_UpgradePerk();
    _Script_UMG::WidgetSwitcher*& get_WidgetSwitcher_186();
    void* get_CurrentlyDisplayedPerk();
    _Script_Playtime_Multiplayer::PerkSaveGame*& get_PerkSaveGame();
    void* get_SelectablePerks();
    int32_t& get_PerkUpgradePrice();
    _Script_Playtime_Multiplayer::TicketSaveGame*& get_TickedtSaveGame();
    _Game_Interface_Customization_Perks_UI_PerkSlot::UI_PerkSlot_C*& get_SelectedPerkSlot();
    void* get_PerkSlots();
    int32_t& get_SelectedPerkIndex();
    void* get_Perks();
    void* get_GetPerksCorID();
    void* get_SelectablePerkMap();
    static _Script_CoreUObject::Class* static_class();
    void PreConstruct0(bool IsDesignTime);
    void SelectablePerkPressed(void* Type);
    void UpdateVisuals();
    void OnInitialized0();
    void RefreshUpgradeButton(void*& StupidPerks);
    void SetSelectedPerkSlot(_Game_Interface_Customization_Perks_UI_PerkSlot::UI_PerkSlot_C* Slot);
    void SetSelectablePerksEnabled(bool IsEnabled);
    void UpdateEquippedPerks();
    void GotPerks(void*& Perks);
    void Update();
    void OnSuccessfulBuyPerk();
    void DisplayError(void* Error_Message);
    void GetWalletSuccess(int32_t Playcoins, int32_t Tickets);
    void epic_fail_(void* ErrorMessage);
    void PerkGetSuccess(void*& Perks);
    void PerkGetFailure(void* ErrorMessage);
    void BndEvt__UI_Perks_UI_ClearPerk_K2Node_ComponentBoundEvent_3_Button_Pressed__DelegateSignature();
    void BndEvt__UI_Perks_UI_EquipPerk_K2Node_ComponentBoundEvent_4_ButtonPressed__DelegateSignature();
    void BndEvt__UI_Perks_UI_UpgradePerk_K2Node_ComponentBoundEvent_5_ButtonPressed__DelegateSignature();
    void PopulatePerkInfo();
    void ExecuteUbergraph_UI_Perks(int32_t EntryPoint);
}; // Size: 0x480
#pragma pack(pop)
}
