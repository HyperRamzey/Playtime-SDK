#include "..\FUObjectArray.hpp"
#include "..\_Game_Interface_Customization_Perks_UI_ClearPerk\UI_ClearPerk_C.hpp"
#include "..\_Game_Interface_Customization_Perks_UI_EquipPerk\UI_EquipPerk_C.hpp"
#include "..\_Game_Interface_Customization_Perks_UI_PerkSlot\UI_PerkSlot_C.hpp"
#include "UI_Perks_C.hpp"
#include "..\_Game_Interface_Customization_Perks_UI_SelectablePerk\UI_SelectablePerk_C.hpp"
#include "..\_Game_Interface_Customization_Perks_UI_UpgradePerk\UI_UpgradePerk_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Playtime_Multiplayer\PerkSaveGame.hpp"
#include "..\_Script_Playtime_Multiplayer\TicketSaveGame.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\Overlay.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetSwitcher.hpp"
_Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C*& _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::get_DistantSavior() {
    return *(_Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C**)((uintptr_t)this + 0x270);
}
void* _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
void* _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::get_SelectablePerks() {
    return (void*)((uintptr_t)this + 0x3d0);
}
_Script_UMG::TextBlock*& _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::get_PerkDescription() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x348);
}
_Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C*& _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::get_ClawCollector() {
    return *(_Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C**)((uintptr_t)this + 0x268);
}
_Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C*& _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::get_Genius() {
    return *(_Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C**)((uintptr_t)this + 0x278);
}
void* _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::get_GetPerksCorID() {
    return (void*)((uintptr_t)this + 0x420);
}
void* _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::get_CurrentlyDisplayedPerk() {
    return (void*)((uintptr_t)this + 0x3c0);
}
_Script_UMG::Image*& _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::get_Image() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x280);
}
void _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::OnInitialized0() {
    return;
}
_Script_UMG::Image*& _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::get_Image_92() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x288);
}
_Game_Interface_Customization_Perks_UI_PerkSlot::UI_PerkSlot_C*& _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::get_SelectedPerkSlot() {
    return *(_Game_Interface_Customization_Perks_UI_PerkSlot::UI_PerkSlot_C**)((uintptr_t)this + 0x3f0);
}
_Script_UMG::Image*& _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::get_Image_172() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x290);
}
_Script_UMG::Image*& _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::get_Image_255() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x298);
}
_Script_UMG::Image*& _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::get_Image_381() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2a0);
}
_Script_UMG::Overlay*& _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::get_infopanel() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x2a8);
}
_Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C*& _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::get_Leadership() {
    return *(_Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C**)((uintptr_t)this + 0x2b0);
}
_Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C*& _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::get_LeaveNoTrace() {
    return *(_Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C**)((uintptr_t)this + 0x2b8);
}
_Script_UMG::TextBlock*& _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::get_Level1Description() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2c0);
}
void _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::SetSelectablePerksEnabled(bool IsEnabled) {
    return;
}
_Script_UMG::TextBlock*& _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::get_Level1DisplayLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2c8);
}
_Script_CoreUObject::Class* _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/Customization/Perks/UI_Perks.UI_Perks_C");
    return result;
}
_Script_UMG::Image*& _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::get_Level1Icon() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2d0);
}
_Script_UMG::Image*& _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::get_lvl2lock() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x310);
}
_Script_UMG::TextBlock*& _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::get_Level2Description() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2d8);
}
_Script_UMG::TextBlock*& _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::get_Level2DisplayLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2e0);
}
_Script_UMG::Image*& _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::get_Level2Icon() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2e8);
}
_Script_UMG::TextBlock*& _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::get_Level3Description() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2f0);
}
_Script_UMG::TextBlock*& _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::get_Level3DisplayLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2f8);
}
void _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::SetSelectedPerkSlot(_Game_Interface_Customization_Perks_UI_PerkSlot::UI_PerkSlot_C* Slot) {
    return;
}
_Script_UMG::Image*& _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::get_Level3Icon() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x300);
}
void _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::UpdateEquippedPerks() {
    return;
}
_Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C*& _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::get_ShadowWalker() {
    return *(_Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C**)((uintptr_t)this + 0x380);
}
void _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::DisplayError(void* Error_Message) {
    return;
}
_Script_UMG::Image*& _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::get_lvl1lock() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x308);
}
void _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::GotPerks(void*& Perks) {
    return;
}
_Script_UMG::Image*& _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::get_lvl3lock() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x318);
}
_Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C*& _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::get_MasterPianist() {
    return *(_Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C**)((uintptr_t)this + 0x320);
}
_Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C*& _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::get_Pathfinder() {
    return *(_Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C**)((uintptr_t)this + 0x328);
}
_Game_Interface_Customization_Perks_UI_PerkSlot::UI_PerkSlot_C*& _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::get_perk1() {
    return *(_Game_Interface_Customization_Perks_UI_PerkSlot::UI_PerkSlot_C**)((uintptr_t)this + 0x330);
}
_Game_Interface_Customization_Perks_UI_PerkSlot::UI_PerkSlot_C*& _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::get_Perk2() {
    return *(_Game_Interface_Customization_Perks_UI_PerkSlot::UI_PerkSlot_C**)((uintptr_t)this + 0x338);
}
_Game_Interface_Customization_Perks_UI_PerkSlot::UI_PerkSlot_C*& _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::get_Perk3() {
    return *(_Game_Interface_Customization_Perks_UI_PerkSlot::UI_PerkSlot_C**)((uintptr_t)this + 0x340);
}
_Script_UMG::TextBlock*& _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::get_PerkName() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x350);
}
_Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C*& _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::get_PowerWalker() {
    return *(_Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C**)((uintptr_t)this + 0x358);
}
_Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C*& _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::get_PunchingBag() {
    return *(_Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C**)((uintptr_t)this + 0x360);
}
_Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C*& _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::get_PuzzlePicasso() {
    return *(_Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C**)((uintptr_t)this + 0x368);
}
_Script_UMG::Image*& _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::get_SelectedPerkBG() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x370);
}
_Script_UMG::Image*& _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::get_SelectedPerkIcon() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x378);
}
_Script_UMG::TextBlock*& _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::get_TitleText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x398);
}
_Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C*& _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::get_ThinkFast() {
    return *(_Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C**)((uintptr_t)this + 0x388);
}
_Script_UMG::Image*& _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::get_TitleBackground() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x390);
}
void _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::BndEvt__UI_Perks_UI_UpgradePerk_K2Node_ComponentBoundEvent_5_ButtonPressed__DelegateSignature() {
    return;
}
_Game_Interface_Customization_Perks_UI_ClearPerk::UI_ClearPerk_C*& _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::get_UI_ClearPerk() {
    return *(_Game_Interface_Customization_Perks_UI_ClearPerk::UI_ClearPerk_C**)((uintptr_t)this + 0x3a0);
}
_Game_Interface_Customization_Perks_UI_EquipPerk::UI_EquipPerk_C*& _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::get_UI_EquipPerk() {
    return *(_Game_Interface_Customization_Perks_UI_EquipPerk::UI_EquipPerk_C**)((uintptr_t)this + 0x3a8);
}
_Game_Interface_Customization_Perks_UI_UpgradePerk::UI_UpgradePerk_C*& _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::get_UI_UpgradePerk() {
    return *(_Game_Interface_Customization_Perks_UI_UpgradePerk::UI_UpgradePerk_C**)((uintptr_t)this + 0x3b0);
}
void* _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::get_PerkSlots() {
    return (void*)((uintptr_t)this + 0x3f8);
}
_Script_UMG::WidgetSwitcher*& _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::get_WidgetSwitcher_186() {
    return *(_Script_UMG::WidgetSwitcher**)((uintptr_t)this + 0x3b8);
}
_Script_Playtime_Multiplayer::PerkSaveGame*& _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::get_PerkSaveGame() {
    return *(_Script_Playtime_Multiplayer::PerkSaveGame**)((uintptr_t)this + 0x3c8);
}
int32_t& _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::get_PerkUpgradePrice() {
    return *(int32_t*)((uintptr_t)this + 0x3e0);
}
_Script_Playtime_Multiplayer::TicketSaveGame*& _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::get_TickedtSaveGame() {
    return *(_Script_Playtime_Multiplayer::TicketSaveGame**)((uintptr_t)this + 0x3e8);
}
void _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::PreConstruct0(bool IsDesignTime) {
    return;
}
int32_t& _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::get_SelectedPerkIndex() {
    return *(int32_t*)((uintptr_t)this + 0x408);
}
void* _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::get_Perks() {
    return (void*)((uintptr_t)this + 0x410);
}
void* _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::get_SelectablePerkMap() {
    return (void*)((uintptr_t)this + 0x430);
}
void _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::SelectablePerkPressed(void* Type) {
    return;
}
void _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::UpdateVisuals() {
    return;
}
void _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::RefreshUpgradeButton(void*& StupidPerks) {
    return;
}
void _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::Update() {
    return;
}
void _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::OnSuccessfulBuyPerk() {
    return;
}
void _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::GetWalletSuccess(int32_t Playcoins, int32_t Tickets) {
    return;
}
void _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::epic_fail_(void* ErrorMessage) {
    return;
}
void _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::PerkGetSuccess(void*& Perks) {
    return;
}
void _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::PerkGetFailure(void* ErrorMessage) {
    return;
}
void _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::BndEvt__UI_Perks_UI_ClearPerk_K2Node_ComponentBoundEvent_3_Button_Pressed__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::BndEvt__UI_Perks_UI_EquipPerk_K2Node_ComponentBoundEvent_4_ButtonPressed__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::PopulatePerkInfo() {
    return;
}
void _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C::ExecuteUbergraph_UI_Perks(int32_t EntryPoint) {
    return;
}
