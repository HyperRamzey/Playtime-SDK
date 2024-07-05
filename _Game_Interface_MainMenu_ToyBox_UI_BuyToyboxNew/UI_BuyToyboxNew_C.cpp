#include "..\FUObjectArray.hpp"
#include "..\_Game_Interface_Content_UI_N_Loading\UI_N_Loading_C.hpp"
#include "..\_Game_Interface_General_UI_BackButton\UI_BackButton_C.hpp"
#include "..\_Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoins\UI_BuyPlaycoins_C.hpp"
#include "UI_BuyToyboxNew_C.hpp"
#include "..\_Game_Interface_MainMenu_ToyBox_UI_PreviewToyBox\UI_PreviewToyBox_C.hpp"
#include "..\_Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain\UI_ToyBoxMain_C.hpp"
#include "..\_Game_Interface_UI_EarlyAccess_Overlay\UI_EarlyAccess_Overlay_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\CanvasPanel.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\Overlay.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\Widget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
#include "..\_Script_UMG\WidgetSwitcher.hpp"
_Script_UMG::WidgetAnimation*& _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::get_Purchase() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x278);
}
void* _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::get_premiumrewardsinfo() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x330);
}
void _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::SequenceEvent__ENTRYPOINTUI_BuyToyboxNew_0(_Script_UMG::WidgetSwitcher* Widgets) {
    return;
}
_Script_UMG::Button*& _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::get_BuyAndUnlockButton() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x298);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::get_Transition_Backward() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
float& _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::get_TimeoutAfter() {
    return *(float*)((uintptr_t)this + 0x390);
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::get_TextBlock_81() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x340);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::get_Transition() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x270);
}
_Script_UMG::Overlay*& _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::get_Overlay_69() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x328);
}
void* _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::Get_PremiumDescription_1_Text_0() {
    return;
}
_Script_UMG::WidgetAnimation*& _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::get_Init() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x280);
}
_Game_Interface_MainMenu_ToyBox_UI_PreviewToyBox::UI_PreviewToyBox_C*& _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::get_UI_PreviewToyBox() {
    return *(_Game_Interface_MainMenu_ToyBox_UI_PreviewToyBox::UI_PreviewToyBox_C**)((uintptr_t)this + 0x370);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::get_blackBG() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x288);
}
_Script_CoreUObject::Class* _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/MainMenu/ToyBox/UI_BuyToyboxNew.UI_BuyToyboxNew_C");
    return result;
}
_Script_UMG::Button*& _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::get_Buy25TiersButton() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x290);
}
_Script_UMG::Button*& _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::get_BuyButton() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x2a0);
}
_Script_UMG::CanvasPanel*& _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::get_Buying() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x2a8);
}
_Game_Interface_Content_UI_N_Loading::UI_N_Loading_C*& _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::get_UI_N_Loading_126() {
    return *(_Game_Interface_Content_UI_N_Loading::UI_N_Loading_C**)((uintptr_t)this + 0x360);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::get_Image_102() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2e8);
}
_Script_UMG::Button*& _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::get_BuyTheToyBox() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x2b0);
}
void* _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::get_ToyboxCorrelation() {
    return (void*)((uintptr_t)this + 0x3c0);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::get_Image() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2b8);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::get_Image_1() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2c0);
}
_Game_Interface_General_UI_BackButton::UI_BackButton_C*& _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::get_UI_BackButton() {
    return *(_Game_Interface_General_UI_BackButton::UI_BackButton_C**)((uintptr_t)this + 0x348);
}
void _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::set_InMainPage(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x394 + 0);
    *(uint8_t*)((uintptr_t)this + 0x394 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::set_BuyingTiersToo(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x384 + 0);
    *(uint8_t*)((uintptr_t)this + 0x384 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::OnTimeout() {
    return;
}
bool _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::get_DoingCharge() {
    return (*(uint8_t*)((uintptr_t)this + 0x3a8 + 0)) & 1 != 0;
}
_Script_UMG::Image*& _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::get_Image_2() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2c8);
}
void _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::BndEvt__UI_BuyBattlePass_BuyAndUnlockButton_1_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::Name_Array_To_Verticle_Text_List(void*& Text, void*& Final_Text) {
    return;
}
_Script_UMG::Image*& _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::get_Image_110() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2f0);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::get_Image_3() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2d0);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::get_Image_4() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2d8);
}
_Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoins::UI_BuyPlaycoins_C*& _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::get_UI_BuyPlaycoins() {
    return *(_Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoins::UI_BuyPlaycoins_C**)((uintptr_t)this + 0x350);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::get_Image_69() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2e0);
}
void* _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::get_PostChargeCorrelation() {
    return (void*)((uintptr_t)this + 0x3b0);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::get_Image_291() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2f8);
}
_Script_UMG::CanvasPanel*& _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::get_Info() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x300);
}
_Script_UMG::Button*& _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::get_InfoButton() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x308);
}
void _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::BuyBattlePass() {
    return;
}
_Script_UMG::Overlay*& _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::get_LoadingScreen() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x310);
}
_Script_UMG::Overlay*& _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::get_Main() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x318);
}
_Script_UMG::WidgetSwitcher*& _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::get_MasterWidgetSwitcher() {
    return *(_Script_UMG::WidgetSwitcher**)((uintptr_t)this + 0x320);
}
_Script_UMG::Widget*& _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::get_DesiredWidget() {
    return *(_Script_UMG::Widget**)((uintptr_t)this + 0x398);
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::get_PurchaseConfirmText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x338);
}
_Game_Interface_UI_EarlyAccess_Overlay::UI_EarlyAccess_Overlay_C*& _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::get_UI_EarlyAccess_Overlay() {
    return *(_Game_Interface_UI_EarlyAccess_Overlay::UI_EarlyAccess_Overlay_C**)((uintptr_t)this + 0x358);
}
bool _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::get_InMainPage() {
    return (*(uint8_t*)((uintptr_t)this + 0x394 + 0)) & 1 != 0;
}
_Game_Interface_MainMenu_ToyBox_UI_PreviewToyBox::UI_PreviewToyBox_C*& _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::get_UI_Preview25ToyBox() {
    return *(_Game_Interface_MainMenu_ToyBox_UI_PreviewToyBox::UI_PreviewToyBox_C**)((uintptr_t)this + 0x368);
}
_Script_UMG::WidgetSwitcher*& _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::get_Widgets() {
    return *(_Script_UMG::WidgetSwitcher**)((uintptr_t)this + 0x378);
}
int32_t& _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::get_BundleToBuy() {
    return *(int32_t*)((uintptr_t)this + 0x380);
}
bool _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::get_BuyingTiersToo() {
    return (*(uint8_t*)((uintptr_t)this + 0x384 + 0)) & 1 != 0;
}
_Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C*& _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::get_Parent() {
    return *(_Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C**)((uintptr_t)this + 0x388);
}
void* _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::get_TimeoutHandler() {
    return (void*)((uintptr_t)this + 0x3a0);
}
void _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::set_DoingCharge(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3a8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3a8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::get_FromBuy25TiersButton() {
    return (*(uint8_t*)((uintptr_t)this + 0x3a9 + 0)) & 1 != 0;
}
void _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::set_FromBuy25TiersButton(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3a9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3a9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::get_IsInPlaycoinsScreen() {
    return (*(uint8_t*)((uintptr_t)this + 0x3aa + 0)) & 1 != 0;
}
void _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::set_IsInPlaycoinsScreen(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3aa + 0);
    *(uint8_t*)((uintptr_t)this + 0x3aa + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::get_RewardCorrelation() {
    return (void*)((uintptr_t)this + 0x3d0);
}
void _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::SequenceEvent__ENTRYPOINTUI_BuyToyboxNew_1(_Script_UMG::WidgetSwitcher* Widgets) {
    return;
}
void* _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::Get_PremiumDescription_Text_0() {
    return;
}
void* _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::GetText_0() {
    return;
}
void* _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::Get_PurchaseConfirmText_Text_0() {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::CheckHasEnoughCoinsForSoloPurchaseOf25Tiers(void*& Array, bool& Enough_) {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::CheckHasEnoughCoins(void*& Array, bool& Enough_) {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::ShowTransactionScreen(bool Condition) {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::Widgets_SwitchToDesiredWidget(_Script_UMG::WidgetSwitcher* Widgets) {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::Construct0() {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::BndEvt__UI_BuyBattlePass_BuyButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::BndEvt__UI_BuyBattlePass_UI_BackButton_K2Node_ComponentBoundEvent_4_Released__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::BndEvt__UI_BuyBattlePass_BuyAndUnlockButton_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::BndEvt__UI_BuyBattlePass_Button_84_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::BndEvt__UI_BuyBattlePass_InfoButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::TransitionToDesiredWidget(_Script_UMG::Widget* DesiredWidget, bool UseBackward) {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::RemoveFromParentIfChargeDone() {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::RunLocalGetRewards() {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::SayYesTo25Tiers() {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::BuyToyBoxSuccess() {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::BackendFailure(void* ErrorMessage) {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::GotRewards(void*& Ints) {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::FailedRewards(void* ErrorMessage) {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::BoughtLevels() {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::FailedToBuyLevels(void* ErrorMessage) {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::ToyboxFail(void* ErrorMessage) {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::Update_Localization() {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew::UI_BuyToyboxNew_C::ExecuteUbergraph_UI_BuyToyboxNew(int32_t EntryPoint) {
    return;
}
