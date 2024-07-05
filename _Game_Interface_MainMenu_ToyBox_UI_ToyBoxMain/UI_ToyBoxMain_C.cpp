#include "..\FUObjectArray.hpp"
#include "..\_Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter\BP_MonsterAndPlayerMenuCharacter_C.hpp"
#include "..\_Game_Interface_Content_UI_N_Loading\UI_N_Loading_C.hpp"
#include "..\_Game_Interface_Customization_Cosmetics_UI_CosmeticInfo\UI_CosmeticInfo_C.hpp"
#include "..\_Game_Interface_General_UI_BackButton\UI_BackButton_C.hpp"
#include "..\_Game_Interface_MainMenu_ToyBox_UI_N_ToyBoxBottomTier\UI_N_ToyBoxBottomTier_C.hpp"
#include "UI_ToyBoxMain_C.hpp"
#include "..\_Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain\UI_ToyBoxTierMain_C.hpp"
#include "..\_Game_Interface_MainMenu_UI_MP_N_MenuButton_New\UI_MP_N_MenuButton_New_C.hpp"
#include "..\_Game_Interface_MainMenu_UI_MainMenu\UI_MainMenu_C.hpp"
#include "..\_Game_Interface_MainMenu_UI_TierDisplay\UI_TierDisplay_C.hpp"
#include "..\_Game_Interface_UI_EarlyAccess_Overlay\UI_EarlyAccess_Overlay_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SkeletalMeshActor.hpp"
#include "..\_Script_Playtime_Multiplayer\LevelResponse.hpp"
#include "..\_Script_Playtime_Multiplayer\ToyBoxResponse.hpp"
#include "..\_Script_Playtime_Multiplayer\ToyBoxResponseItem.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\HorizontalBox.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\Overlay.hpp"
#include "..\_Script_UMG\SizeBox.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\Throbber.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
_Script_UMG::Button*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_RButtonMain() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x320);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_NextPage() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x280);
}
bool _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_UserOwnsToyBox() {
    return (*(uint8_t*)((uintptr_t)this + 0x458 + 0)) & 1 != 0;
}
void* _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Game_Interface_MainMenu_ToyBox_UI_N_ToyBoxBottomTier::UI_N_ToyBoxBottomTier_C*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_UI_ToyBoxBottomTier_7() {
    return *(_Game_Interface_MainMenu_ToyBox_UI_N_ToyBoxBottomTier::UI_N_ToyBoxBottomTier_C**)((uintptr_t)this + 0x3c0);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_NewPreview() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x278);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_LoopSparks() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x288);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_HoverTBButton() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
_Game_Interface_MainMenu_UI_TierDisplay::UI_TierDisplay_C*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_UI_TierWidget_1() {
    return *(_Game_Interface_MainMenu_UI_TierDisplay::UI_TierDisplay_C**)((uintptr_t)this + 0x380);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_FinishLoading() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x270);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_Init() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x290);
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::BndEvt__UI_ToyBoxMain_UI_ToyBoxTierMain_4_K2Node_ComponentBoundEvent_3_ToyboxTierClicked__DelegateSignature(int32_t ItemId, int32_t Level) {
    return;
}
_Game_Interface_MainMenu_ToyBox_UI_N_ToyBoxBottomTier::UI_N_ToyBoxBottomTier_C*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_UI_ToyBoxBottomTier() {
    return *(_Game_Interface_MainMenu_ToyBox_UI_N_ToyBoxBottomTier::UI_N_ToyBoxBottomTier_C**)((uintptr_t)this + 0x388);
}
_Script_UMG::Button*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_LButtonMain() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x2e0);
}
_Script_UMG::HorizontalBox*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_BottomHorizontalBox() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x298);
}
_Game_Interface_MainMenu_ToyBox_UI_N_ToyBoxBottomTier::UI_N_ToyBoxBottomTier_C*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_UI_ToyBoxBottomTier_2() {
    return *(_Game_Interface_MainMenu_ToyBox_UI_N_ToyBoxBottomTier::UI_N_ToyBoxBottomTier_C**)((uintptr_t)this + 0x398);
}
_Script_UMG::Button*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_Button_192() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x2a0);
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_BuyButtonText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2a8);
}
_Game_Interface_UI_EarlyAccess_Overlay::UI_EarlyAccess_Overlay_C*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_UI_EarlyAccess_Overlay() {
    return *(_Game_Interface_UI_EarlyAccess_Overlay::UI_EarlyAccess_Overlay_C**)((uintptr_t)this + 0x370);
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::BndEvt__UI_BattlePassMain_Button_192_K2Node_ComponentBoundEvent_10_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
_Script_UMG::Button*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_BuyToyboxButton() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x2b0);
}
_Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_UI_ToyBoxTierMain_8() {
    return *(_Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C**)((uintptr_t)this + 0x410);
}
_Game_Interface_MainMenu_UI_MP_N_MenuButton_New::UI_MP_N_MenuButton_New_C*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_closeButton_1() {
    return *(_Game_Interface_MainMenu_UI_MP_N_MenuButton_New::UI_MP_N_MenuButton_New_C**)((uintptr_t)this + 0x2b8);
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_XPToNextTierText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x428);
}
_Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_UI_ToyBoxTierMain_9() {
    return *(_Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C**)((uintptr_t)this + 0x418);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_Image_50() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2c0);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_Image_139() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2c8);
}
_Game_Interface_MainMenu_ToyBox_UI_N_ToyBoxBottomTier::UI_N_ToyBoxBottomTier_C*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_UI_ToyBoxBottomTier_8() {
    return *(_Game_Interface_MainMenu_ToyBox_UI_N_ToyBoxBottomTier::UI_N_ToyBoxBottomTier_C**)((uintptr_t)this + 0x3c8);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_Image_654() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2d0);
}
_Script_UMG::Button*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_LArrowSmall() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x2d8);
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::GeneralFailure(void* ErrorMessage) {
    return;
}
_Script_UMG::Throbber*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_LoadingProgress_Throbber() {
    return *(_Script_UMG::Throbber**)((uintptr_t)this + 0x2e8);
}
int32_t& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_ClickPreviewID() {
    return *(int32_t*)((uintptr_t)this + 0x468);
}
_Script_UMG::Overlay*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_Overlay_3() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x2f0);
}
_Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_UI_ToyBoxTierMain_2() {
    return *(_Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C**)((uintptr_t)this + 0x3e0);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_OwnershipChecked() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2f8);
}
_Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_UI_ToyBoxTierMain_10() {
    return *(_Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C**)((uintptr_t)this + 0x420);
}
_Script_UMG::HorizontalBox*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_OwnershipHorizontalBox() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x300);
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::GetMainMenu(_Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C*& Menu) {
    return;
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_OwnershipText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x308);
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::BndEvt__UI_BattlePassMain_LArrowSmall_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
_Script_UMG::Image*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_OwnershipUnchecked() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x310);
}
_Script_UMG::Button*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_RArrowSmall() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x318);
}
_Script_UMG::Overlay*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_ReqToyBoxOverlay() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x328);
}
_Script_UMG::HorizontalBox*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_RequiresToyBox() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x330);
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_RewardsProgressText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x338);
}
_Script_UMG::SizeBox*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_ScreenPreviewer() {
    return *(_Script_UMG::SizeBox**)((uintptr_t)this + 0x348);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_ScreenPreview() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x340);
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::BndEvt__UI_ToyBoxMain_UI_ToyBoxTierMain_8_K2Node_ComponentBoundEvent_7_ToyboxTierClicked__DelegateSignature(int32_t ItemId, int32_t Level) {
    return;
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_SeasonName() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x350);
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_TimeRemainingText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x358);
}
_Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_UI_ToyBoxTierMain_5() {
    return *(_Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C**)((uintptr_t)this + 0x3f8);
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::GoBack__DelegateSignature() {
    return;
}
_Game_Interface_General_UI_BackButton::UI_BackButton_C*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_UI_BackButton() {
    return *(_Game_Interface_General_UI_BackButton::UI_BackButton_C**)((uintptr_t)this + 0x360);
}
_Game_Interface_Customization_Cosmetics_UI_CosmeticInfo::UI_CosmeticInfo_C*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_UI_CosmeticInfo() {
    return *(_Game_Interface_Customization_Cosmetics_UI_CosmeticInfo::UI_CosmeticInfo_C**)((uintptr_t)this + 0x368);
}
_Game_Interface_Content_UI_N_Loading::UI_N_Loading_C*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_UI_N_Loading() {
    return *(_Game_Interface_Content_UI_N_Loading::UI_N_Loading_C**)((uintptr_t)this + 0x378);
}
_Game_Interface_MainMenu_ToyBox_UI_N_ToyBoxBottomTier::UI_N_ToyBoxBottomTier_C*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_UI_ToyBoxBottomTier_1() {
    return *(_Game_Interface_MainMenu_ToyBox_UI_N_ToyBoxBottomTier::UI_N_ToyBoxBottomTier_C**)((uintptr_t)this + 0x390);
}
_Game_Interface_MainMenu_ToyBox_UI_N_ToyBoxBottomTier::UI_N_ToyBoxBottomTier_C*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_UI_ToyBoxBottomTier_3() {
    return *(_Game_Interface_MainMenu_ToyBox_UI_N_ToyBoxBottomTier::UI_N_ToyBoxBottomTier_C**)((uintptr_t)this + 0x3a0);
}
_Game_Interface_MainMenu_ToyBox_UI_N_ToyBoxBottomTier::UI_N_ToyBoxBottomTier_C*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_UI_ToyBoxBottomTier_4() {
    return *(_Game_Interface_MainMenu_ToyBox_UI_N_ToyBoxBottomTier::UI_N_ToyBoxBottomTier_C**)((uintptr_t)this + 0x3a8);
}
_Game_Interface_MainMenu_ToyBox_UI_N_ToyBoxBottomTier::UI_N_ToyBoxBottomTier_C*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_UI_ToyBoxBottomTier_5() {
    return *(_Game_Interface_MainMenu_ToyBox_UI_N_ToyBoxBottomTier::UI_N_ToyBoxBottomTier_C**)((uintptr_t)this + 0x3b0);
}
_Game_Interface_MainMenu_ToyBox_UI_N_ToyBoxBottomTier::UI_N_ToyBoxBottomTier_C*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_UI_ToyBoxBottomTier_6() {
    return *(_Game_Interface_MainMenu_ToyBox_UI_N_ToyBoxBottomTier::UI_N_ToyBoxBottomTier_C**)((uintptr_t)this + 0x3b8);
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::RefreshToyBoxOwnership() {
    return;
}
_Game_Interface_MainMenu_ToyBox_UI_N_ToyBoxBottomTier::UI_N_ToyBoxBottomTier_C*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_UI_ToyBoxBottomTier_9() {
    return *(_Game_Interface_MainMenu_ToyBox_UI_N_ToyBoxBottomTier::UI_N_ToyBoxBottomTier_C**)((uintptr_t)this + 0x3d0);
}
_Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_UI_ToyBoxTierMain_1() {
    return *(_Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C**)((uintptr_t)this + 0x3d8);
}
_Script_Engine::SkeletalMeshActor*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_Monster() {
    return *(_Script_Engine::SkeletalMeshActor**)((uintptr_t)this + 0x448);
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::LoadRewards(void*& Ints) {
    return;
}
_Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_UI_ToyBoxTierMain_3() {
    return *(_Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C**)((uintptr_t)this + 0x3e8);
}
_Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_UI_ToyBoxTierMain_4() {
    return *(_Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C**)((uintptr_t)this + 0x3f0);
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::previewitem(int32_t ItemId, int32_t Level) {
    return;
}
_Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_UI_ToyBoxTierMain_6() {
    return *(_Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C**)((uintptr_t)this + 0x400);
}
_Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_UI_ToyBoxTierMain_7() {
    return *(_Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C**)((uintptr_t)this + 0x408);
}
void* _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_GoBack() {
    return (void*)((uintptr_t)this + 0x430);
}
int32_t& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_Page() {
    return *(int32_t*)((uintptr_t)this + 0x440);
}
int32_t& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_HoverPreviewID() {
    return *(int32_t*)((uintptr_t)this + 0x444);
}
void* _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_MouseLocationOnRotatorClick() {
    return (void*)((uintptr_t)this + 0x450);
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::set_UserOwnsToyBox(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x458 + 0);
    *(uint8_t*)((uintptr_t)this + 0x458 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_LoadedInventory() {
    return (*(uint8_t*)((uintptr_t)this + 0x459 + 0)) & 1 != 0;
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::BndEvt__UI_ToyBoxMain_UI_ToyBoxTierMain_1_K2Node_ComponentBoundEvent_30_ToyboxTierOnHovered__DelegateSignature(_Script_Playtime_Multiplayer::ToyBoxResponseItem Item) {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::set_LoadedInventory(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x459 + 0);
    *(uint8_t*)((uintptr_t)this + 0x459 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_Ownership_Loading() {
    return (*(uint8_t*)((uintptr_t)this + 0x45a + 0)) & 1 != 0;
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::set_Ownership_Loading(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x45a + 0);
    *(uint8_t*)((uintptr_t)this + 0x45a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter::BP_MonsterAndPlayerMenuCharacter_C*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::get_PreviewCharacterMesh() {
    return *(_Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter::BP_MonsterAndPlayerMenuCharacter_C**)((uintptr_t)this + 0x460);
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::BndEvt__UI_ToyBoxMain_UI_ToyBoxTierMain_5_K2Node_ComponentBoundEvent_4_ToyboxTierClicked__DelegateSignature(int32_t ItemId, int32_t Level) {
    return;
}
_Script_CoreUObject::Class* _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/MainMenu/ToyBox/UI_ToyBoxMain.UI_ToyBoxMain_C");
    return result;
}
void* _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::Get_XPToNextTierText_Text_0() {
    return;
}
void* _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::Get_RewardsProgressText_Text_0() {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::SetOwnershipLoading(bool OwnershipLoading) {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::SetCharacter(_Script_Engine::SkeletalMeshActor* Monster, _Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter::BP_MonsterAndPlayerMenuCharacter_C* PlayerMonsterMenuCharacter) {
    return;
}
float _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::GetBarProgress(int32_t XP, int32_t Page) {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::SetHoverPreviewID(_Script_Playtime_Multiplayer::ToyBoxResponseItem Item) {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::UpdateBottomPages() {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::RedeemAllRewards(void*& RewardsIDs) {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::InitAnimation() {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::BndEvt__UI_ToyBoxMain_UI_ToyBoxBottomTier_K2Node_ComponentBoundEvent_12_OnToyBoxTierClicked__DelegateSignature(int32_t Page) {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::BndEvt__UI_ToyBoxMain_UI_ToyBoxBottomTier_1_K2Node_ComponentBoundEvent_13_OnToyBoxTierClicked__DelegateSignature(int32_t Page) {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::BndEvt__UI_ToyBoxMain_UI_ToyBoxBottomTier_2_K2Node_ComponentBoundEvent_14_OnToyBoxTierClicked__DelegateSignature(int32_t Page) {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::BndEvt__UI_ToyBoxMain_UI_ToyBoxBottomTier_3_K2Node_ComponentBoundEvent_15_OnToyBoxTierClicked__DelegateSignature(int32_t Page) {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::OpenToyBox() {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::BndEvt__UI_ToyBoxMain_UI_ToyBoxBottomTier_4_K2Node_ComponentBoundEvent_16_OnToyBoxTierClicked__DelegateSignature(int32_t Page) {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::BndEvt__UI_ToyBoxMain_UI_ToyBoxBottomTier_5_K2Node_ComponentBoundEvent_17_OnToyBoxTierClicked__DelegateSignature(int32_t Page) {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::GetRewards() {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::BndEvt__UI_ToyBoxMain_UI_ToyBoxBottomTier_6_K2Node_ComponentBoundEvent_18_OnToyBoxTierClicked__DelegateSignature(int32_t Page) {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::OnRedeemRewardSuccess() {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::BndEvt__UI_ToyBoxMain_UI_ToyBoxBottomTier_7_K2Node_ComponentBoundEvent_19_OnToyBoxTierClicked__DelegateSignature(int32_t Page) {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::BndEvt__UI_ToyBoxMain_UI_ToyBoxBottomTier_8_K2Node_ComponentBoundEvent_20_OnToyBoxTierClicked__DelegateSignature(int32_t Page) {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::BndEvt__UI_ToyBoxMain_UI_ToyBoxBottomTier_9_K2Node_ComponentBoundEvent_21_OnToyBoxTierClicked__DelegateSignature(int32_t Page) {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::BndEvt__UI_ToyBoxMain_UI_ToyBoxTierMain_1_K2Node_ComponentBoundEvent_0_ToyboxTierClicked__DelegateSignature(int32_t ItemId, int32_t Level) {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::BndEvt__UI_ToyBoxMain_UI_ToyBoxTierMain_2_K2Node_ComponentBoundEvent_1_ToyboxTierClicked__DelegateSignature(int32_t ItemId, int32_t Level) {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::BndEvt__UI_ToyBoxMain_UI_ToyBoxTierMain_3_K2Node_ComponentBoundEvent_2_ToyboxTierClicked__DelegateSignature(int32_t ItemId, int32_t Level) {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::BndEvt__UI_ToyBoxMain_UI_ToyBoxTierMain_6_K2Node_ComponentBoundEvent_5_ToyboxTierClicked__DelegateSignature(int32_t ItemId, int32_t Level) {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::BndEvt__UI_ToyBoxMain_UI_ToyBoxTierMain_7_K2Node_ComponentBoundEvent_6_ToyboxTierClicked__DelegateSignature(int32_t ItemId, int32_t Level) {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::BndEvt__UI_ToyBoxMain_UI_ToyBoxTierMain_9_K2Node_ComponentBoundEvent_8_ToyboxTierClicked__DelegateSignature(int32_t ItemId, int32_t Level) {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::BndEvt__UI_ToyBoxMain_UI_ToyBoxTierMain_10_K2Node_ComponentBoundEvent_9_ToyboxTierClicked__DelegateSignature(int32_t ItemId, int32_t Level) {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::BndEvt__UI_ToyBoxMain_UI_ToyBoxTierMain_2_K2Node_ComponentBoundEvent_31_ToyboxTierOnHovered__DelegateSignature(_Script_Playtime_Multiplayer::ToyBoxResponseItem Item) {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::BndEvt__UI_BattlePassMain_RArrowSmall_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::BndEvt__UI_ToyBoxMain_UI_ToyBoxTierMain_3_K2Node_ComponentBoundEvent_32_ToyboxTierOnHovered__DelegateSignature(_Script_Playtime_Multiplayer::ToyBoxResponseItem Item) {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::BndEvt__UI_ToyBoxMain_UI_ToyBoxTierMain_4_K2Node_ComponentBoundEvent_33_ToyboxTierOnHovered__DelegateSignature(_Script_Playtime_Multiplayer::ToyBoxResponseItem Item) {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::BndEvt__UI_ToyBoxMain_UI_ToyBoxTierMain_5_K2Node_ComponentBoundEvent_34_ToyboxTierOnHovered__DelegateSignature(_Script_Playtime_Multiplayer::ToyBoxResponseItem Item) {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::BndEvt__UI_ToyBoxMain_UI_ToyBoxTierMain_6_K2Node_ComponentBoundEvent_35_ToyboxTierOnHovered__DelegateSignature(_Script_Playtime_Multiplayer::ToyBoxResponseItem Item) {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::BndEvt__UI_ToyBoxMain_UI_ToyBoxTierMain_7_K2Node_ComponentBoundEvent_36_ToyboxTierOnHovered__DelegateSignature(_Script_Playtime_Multiplayer::ToyBoxResponseItem Item) {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::BndEvt__UI_ToyBoxMain_UI_ToyBoxTierMain_8_K2Node_ComponentBoundEvent_37_ToyboxTierOnHovered__DelegateSignature(_Script_Playtime_Multiplayer::ToyBoxResponseItem Item) {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::BndEvt__UI_ToyBoxMain_UI_ToyBoxTierMain_9_K2Node_ComponentBoundEvent_38_ToyboxTierOnHovered__DelegateSignature(_Script_Playtime_Multiplayer::ToyBoxResponseItem Item) {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::BndEvt__UI_ToyBoxMain_UI_ToyBoxTierMain_10_K2Node_ComponentBoundEvent_39_ToyboxTierOnHovered__DelegateSignature(_Script_Playtime_Multiplayer::ToyBoxResponseItem Item) {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::BndEvt__UI_BattlePassMain_closeButton_1_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature(_Game_Interface_MainMenu_UI_MP_N_MenuButton_New::UI_MP_N_MenuButton_New_C* Caller) {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::Close() {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::OnInitialized0() {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::BndEvt__UI_BattlePassMain_Button_99_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::BndEvt__UI_BattlePassMain_Button_99_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::BndEvt__UI_BattlePassMain_Button_99_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::BndEvt__UI_BattlePassMain_UI_BackButton_K2Node_ComponentBoundEvent_2_Released__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::BndEvt__UI_BattlePassMain_LButtonMain_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::BndEvt__UI_BattlePassMain_RButtonMain_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::BndEvt__UI_BattlePassMain_Button_192_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::Tick0(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime) {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::OnXPUpdate(int32_t XP) {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::FoundOwnership(_Script_Playtime_Multiplayer::LevelResponse Response) {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::SetPage(int32_t NewPage) {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::SetOtherVisibleFields() {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::OnGetToyBoxSuccess(_Script_Playtime_Multiplayer::ToyBoxResponse ToyBox) {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::FailedLoadingRewards(void* ErrorMessage) {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::GetToyBoxSuccess(_Script_Playtime_Multiplayer::ToyBoxResponse ToyBox) {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::GotLevel(_Script_Playtime_Multiplayer::LevelResponse Response) {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::OnRedeemRewardFailure(void* ErrorMessage) {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::OnGetRewardsSuccess(void*& Ints) {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::OnGetRewardsFailure(void* ErrorMessage) {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C::ExecuteUbergraph_UI_ToyBoxMain(int32_t EntryPoint) {
    return;
}
