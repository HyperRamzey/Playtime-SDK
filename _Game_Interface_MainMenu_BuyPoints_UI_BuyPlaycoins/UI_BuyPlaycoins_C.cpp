#include "..\FUObjectArray.hpp"
#include "..\_Game_Interface_Content_UI_N_Loading\UI_N_Loading_C.hpp"
#include "UI_BuyPlaycoins_C.hpp"
#include "..\_Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoinsButton\UI_BuyPlaycoinsButton_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_SteamCore\MicroTxnAuthorizationResponse.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
#include "..\_Script_VaRest\VaRestRequestJSON.hpp"
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoins::UI_BuyPlaycoins_C::get_NameText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x280);
}
void* _Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoins::UI_BuyPlaycoins_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
void _Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoins::UI_BuyPlaycoins_C::Erorr(void* ErrorMessage) {
    return;
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoins::UI_BuyPlaycoins_C::get_PurchaseConfirmText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x288);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoins::UI_BuyPlaycoins_C::get_Purchase() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoins::UI_BuyPlaycoins_C::get_Transaction() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x270);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoins::UI_BuyPlaycoins_C::get_Init() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x278);
}
_Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoinsButton::UI_BuyPlaycoinsButton_C*& _Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoins::UI_BuyPlaycoins_C::get_Tier2BuyCoins() {
    return *(_Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoinsButton::UI_BuyPlaycoinsButton_C**)((uintptr_t)this + 0x298);
}
_Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoinsButton::UI_BuyPlaycoinsButton_C*& _Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoins::UI_BuyPlaycoins_C::get_Tier1BuyCoins() {
    return *(_Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoinsButton::UI_BuyPlaycoinsButton_C**)((uintptr_t)this + 0x290);
}
_Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoinsButton::UI_BuyPlaycoinsButton_C*& _Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoins::UI_BuyPlaycoins_C::get_Tier3BuyCoins() {
    return *(_Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoinsButton::UI_BuyPlaycoinsButton_C**)((uintptr_t)this + 0x2a0);
}
_Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoinsButton::UI_BuyPlaycoinsButton_C*& _Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoins::UI_BuyPlaycoins_C::get_Tier4BuyCoins() {
    return *(_Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoinsButton::UI_BuyPlaycoinsButton_C**)((uintptr_t)this + 0x2a8);
}
_Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoinsButton::UI_BuyPlaycoinsButton_C*& _Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoins::UI_BuyPlaycoins_C::get_Tier5BuyCoins() {
    return *(_Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoinsButton::UI_BuyPlaycoinsButton_C**)((uintptr_t)this + 0x2b0);
}
_Game_Interface_Content_UI_N_Loading::UI_N_Loading_C*& _Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoins::UI_BuyPlaycoins_C::get_UI_N_Loading() {
    return *(_Game_Interface_Content_UI_N_Loading::UI_N_Loading_C**)((uintptr_t)this + 0x2b8);
}
void _Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoins::UI_BuyPlaycoins_C::Run() {
    return;
}
int32_t& _Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoins::UI_BuyPlaycoins_C::get_BundleToBuy() {
    return *(int32_t*)((uintptr_t)this + 0x2c0);
}
void* _Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoins::UI_BuyPlaycoins_C::get_Updated() {
    return (void*)((uintptr_t)this + 0x2c8);
}
void _Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoins::UI_BuyPlaycoins_C::Complete() {
    return;
}
_Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoinsButton::UI_BuyPlaycoinsButton_C*& _Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoins::UI_BuyPlaycoins_C::get_CurrentPointsButton() {
    return *(_Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoinsButton::UI_BuyPlaycoinsButton_C**)((uintptr_t)this + 0x2d8);
}
bool _Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoins::UI_BuyPlaycoins_C::get_RunningTransaction() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e0 + 0)) & 1 != 0;
}
void* _Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoins::UI_BuyPlaycoins_C::Get_PurchaseConfirmText_Text_0() {
    return;
}
void _Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoins::UI_BuyPlaycoins_C::set_RunningTransaction(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoins::UI_BuyPlaycoins_C::get_BuyButtons() {
    return (void*)((uintptr_t)this + 0x2e8);
}
void* _Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoins::UI_BuyPlaycoins_C::get_TransactionInitCorrelationID() {
    return (void*)((uintptr_t)this + 0x2f8);
}
void* _Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoins::UI_BuyPlaycoins_C::get_FinalizeTransactionID() {
    return (void*)((uintptr_t)this + 0x308);
}
_Script_CoreUObject::Class* _Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoins::UI_BuyPlaycoins_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/MainMenu/BuyPoints/UI_BuyPlaycoins.UI_BuyPlaycoins_C");
    return result;
}
void _Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoins::UI_BuyPlaycoins_C::BndEvt__UI_BuyPoints_UI_N_BuyPointsButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoins::UI_BuyPlaycoins_C::ShowTransactionScreen(bool Condition) {
    return;
}
void _Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoins::UI_BuyPlaycoins_C::BndEvt__UI_BuyPoints_UI_N_BuyPointsButton_3_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoins::UI_BuyPlaycoins_C::OnCallback_4E5A07CA479738E83DFA88B0AC9E0CC2(void* Data, bool bWasSuccessful) {
    return;
}
void _Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoins::UI_BuyPlaycoins_C::Construct0() {
    return;
}
void _Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoins::UI_BuyPlaycoins_C::BndEvt__UI_BuyPoints_UI_N_BuyPointsButton_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoins::UI_BuyPlaycoins_C::BndEvt__UI_BuyPoints_UI_N_BuyPointsButton_2_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoins::UI_BuyPlaycoins_C::BndEvt__UI_BuyPoints_UI_N_BuyPointsButton_4_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoins::UI_BuyPlaycoins_C::OnEscapeInputCapture() {
    return;
}
void _Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoins::UI_BuyPlaycoins_C::RefreshWidget() {
    return;
}
void _Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoins::UI_BuyPlaycoins_C::InitFail(void* ErrorMessage) {
    return;
}
void _Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoins::UI_BuyPlaycoins_C::InitSuccess() {
    return;
}
void _Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoins::UI_BuyPlaycoins_C::MicroTransactionAuthorized(_Script_SteamCore::MicroTxnAuthorizationResponse& Data) {
    return;
}
void _Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoins::UI_BuyPlaycoins_C::Success(_Script_VaRest::VaRestRequestJSON* Request) {
    return;
}
void _Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoins::UI_BuyPlaycoins_C::DoNothing(_Script_VaRest::VaRestRequestJSON* Request) {
    return;
}
void _Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoins::UI_BuyPlaycoins_C::ExecuteUbergraph_UI_BuyPlaycoins(int32_t EntryPoint) {
    return;
}
void _Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoins::UI_BuyPlaycoins_C::Updated__DelegateSignature() {
    return;
}
