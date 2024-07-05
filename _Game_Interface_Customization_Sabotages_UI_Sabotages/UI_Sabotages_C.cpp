#include "..\FUObjectArray.hpp"
#include "..\_Game_Interface_Customization_Perks_UI_ClearPerk\UI_ClearPerk_C.hpp"
#include "..\_Game_Interface_Customization_Perks_UI_EquipPerk\UI_EquipPerk_C.hpp"
#include "..\_Game_Interface_Customization_Perks_UI_UpgradePerk\UI_UpgradePerk_C.hpp"
#include "..\_Game_Interface_Customization_Sabotages_UI_SabotageSlot\UI_SabotageSlot_C.hpp"
#include "UI_Sabotages_C.hpp"
#include "..\_Game_Interface_Customization_Sabotages_UI_SelectableSabotage\UI_SelectableSabotage_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\Overlay.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void* _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
void* _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C::get_StupidPerks() {
    return (void*)((uintptr_t)this + 0x3a8);
}
_Script_UMG::Image*& _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C::get_Image() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x280);
}
_Game_Interface_Customization_Sabotages_UI_SelectableSabotage::UI_SelectableSabotage_C*& _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C::get_AutoCarry() {
    return *(_Game_Interface_Customization_Sabotages_UI_SelectableSabotage::UI_SelectableSabotage_C**)((uintptr_t)this + 0x268);
}
_Game_Interface_Customization_Sabotages_UI_SelectableSabotage::UI_SelectableSabotage_C*& _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C::get_Boobytrap() {
    return *(_Game_Interface_Customization_Sabotages_UI_SelectableSabotage::UI_SelectableSabotage_C**)((uintptr_t)this + 0x270);
}
_Game_Interface_Customization_Perks_UI_EquipPerk::UI_EquipPerk_C*& _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C::get_UI_EquipSab() {
    return *(_Game_Interface_Customization_Perks_UI_EquipPerk::UI_EquipPerk_C**)((uintptr_t)this + 0x370);
}
_Script_UMG::Image*& _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C::get_Image_92() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x288);
}
_Game_Interface_Customization_Sabotages_UI_SelectableSabotage::UI_SelectableSabotage_C*& _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C::get_Directionless() {
    return *(_Game_Interface_Customization_Sabotages_UI_SelectableSabotage::UI_SelectableSabotage_C**)((uintptr_t)this + 0x278);
}
_Script_UMG::Image*& _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C::get_Image_172() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x290);
}
void _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C::BuySabotageSuccess() {
    return;
}
_Script_UMG::Image*& _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C::get_Image_255() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x298);
}
void _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C::OnGetSabotageFailure(void* ErrorMessage) {
    return;
}
_Script_UMG::Image*& _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C::get_Image_381() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2a0);
}
_Script_UMG::Overlay*& _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C::get_infopanel() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x2a8);
}
void _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C::OnGetSabotagesSuccess(void*& Perks) {
    return;
}
_Script_UMG::TextBlock*& _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C::get_Level1Description() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2b0);
}
_Script_UMG::Image*& _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C::get_Level1Icon() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2b8);
}
_Script_UMG::TextBlock*& _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C::get_Level1Label() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2c0);
}
_Script_UMG::TextBlock*& _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C::get_Level2Description() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2c8);
}
_Script_UMG::Image*& _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C::get_Level2Icon() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2d0);
}
_Script_UMG::TextBlock*& _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C::get_Level2Label() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2d8);
}
void* _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C::get_AllSabotageButtons() {
    return (void*)((uintptr_t)this + 0x390);
}
bool _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C::get_Is_Design_Time() {
    return (*(uint8_t*)((uintptr_t)this + 0x3a4 + 0)) & 1 != 0;
}
_Script_UMG::TextBlock*& _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C::get_Level3Description() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2e0);
}
_Script_UMG::Image*& _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C::get_Level3Icon() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2e8);
}
_Script_UMG::TextBlock*& _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C::get_Level3Label() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2f0);
}
_Game_Interface_Customization_Sabotages_UI_SelectableSabotage::UI_SelectableSabotage_C*& _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C::get_LivingNightmare() {
    return *(_Game_Interface_Customization_Sabotages_UI_SelectableSabotage::UI_SelectableSabotage_C**)((uintptr_t)this + 0x2f8);
}
void _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C::PreConstruct0(bool IsDesignTime) {
    return;
}
_Script_UMG::Image*& _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C::get_lvl1lock() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x300);
}
int32_t& _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C::get_SabotageUpgradePrice() {
    return *(int32_t*)((uintptr_t)this + 0x3a0);
}
void _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C::PopulateSabInfo() {
    return;
}
_Script_UMG::Image*& _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C::get_lvl2lock() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x308);
}
_Game_Interface_Customization_Sabotages_UI_SelectableSabotage::UI_SelectableSabotage_C*& _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C::get_NoEscape() {
    return *(_Game_Interface_Customization_Sabotages_UI_SelectableSabotage::UI_SelectableSabotage_C**)((uintptr_t)this + 0x318);
}
_Script_UMG::Image*& _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C::get_lvl3lock() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x310);
}
_Game_Interface_Customization_Sabotages_UI_SelectableSabotage::UI_SelectableSabotage_C*& _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C::get_NoPack() {
    return *(_Game_Interface_Customization_Sabotages_UI_SelectableSabotage::UI_SelectableSabotage_C**)((uintptr_t)this + 0x320);
}
void _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C::GotWallet(int32_t Playcoins, int32_t Tickets) {
    return;
}
_Script_UMG::TextBlock*& _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C::get_SabDescription() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x328);
}
_Script_UMG::TextBlock*& _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C::get_SabName() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x330);
}
_Game_Interface_Customization_Sabotages_UI_SabotageSlot::UI_SabotageSlot_C*& _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C::get_UI_SabotageSlot() {
    return *(_Game_Interface_Customization_Sabotages_UI_SabotageSlot::UI_SabotageSlot_C**)((uintptr_t)this + 0x378);
}
_Game_Interface_Customization_Sabotages_UI_SelectableSabotage::UI_SelectableSabotage_C*& _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C::get_TotalLockdown() {
    return *(_Game_Interface_Customization_Sabotages_UI_SelectableSabotage::UI_SelectableSabotage_C**)((uintptr_t)this + 0x360);
}
_Script_UMG::Image*& _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C::get_SelectedPerkBG() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x338);
}
_Script_UMG::Image*& _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C::get_SelectedPerkIcon() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x340);
}
void* _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C::Get_level1_Text_0() {
    return;
}
_Game_Interface_Customization_Sabotages_UI_SelectableSabotage::UI_SelectableSabotage_C*& _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C::get_Shutdown() {
    return *(_Game_Interface_Customization_Sabotages_UI_SelectableSabotage::UI_SelectableSabotage_C**)((uintptr_t)this + 0x348);
}
_Script_UMG::Image*& _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C::get_TitleBackground() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x350);
}
void _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C::SabotageButtonPressed(void* Sabotage) {
    return;
}
void _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C::UpdateVisuals() {
    return;
}
_Script_UMG::TextBlock*& _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C::get_TitleText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x358);
}
_Game_Interface_Customization_Perks_UI_ClearPerk::UI_ClearPerk_C*& _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C::get_UI_ClearPerk() {
    return *(_Game_Interface_Customization_Perks_UI_ClearPerk::UI_ClearPerk_C**)((uintptr_t)this + 0x368);
}
_Game_Interface_Customization_Perks_UI_UpgradePerk::UI_UpgradePerk_C*& _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C::get_UI_UpgradeSab() {
    return *(_Game_Interface_Customization_Perks_UI_UpgradePerk::UI_UpgradePerk_C**)((uintptr_t)this + 0x380);
}
void _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C::BuySabotageFailure(void* ErrorMessage) {
    return;
}
void* _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C::get_CurrentlyDisplayedSabotage() {
    return (void*)((uintptr_t)this + 0x388);
}
void _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C::set_Is_Design_Time(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3a4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3a4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C::ExecuteUbergraph_UI_Sabotages(int32_t EntryPoint) {
    return;
}
void* _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C::get_SabotageMap() {
    return (void*)((uintptr_t)this + 0x3b8);
}
_Script_CoreUObject::Class* _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/Customization/Sabotages/UI_Sabotages.UI_Sabotages_C");
    return result;
}
void* _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C::Get_level3_Text_0() {
    return;
}
void* _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C::Get_level2_Text_0() {
    return;
}
void _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C::RefreshUpgradeButton() {
    return;
}
void _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C::FailedToGetWallet(void* ErrorMessage) {
    return;
}
void _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C::GotPerks(void*& Perks) {
    return;
}
void _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C::silent_fail_get_perks(void* ErrorMessage) {
    return;
}
void _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C::BndEvt__UI_Sabotages_UI_UpgradeSab_K2Node_ComponentBoundEvent_6_ButtonPressed__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C::BndEvt__UI_Sabotages_UI_EquipSab_K2Node_ComponentBoundEvent_7_ButtonPressed__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C::BndEvt__UI_Sabotages_UI_ClearPerk_K2Node_ComponentBoundEvent_0_Button_Pressed__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C::EquipSabotage() {
    return;
}
