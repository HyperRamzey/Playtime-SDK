#include "..\FUObjectArray.hpp"
#include "T_CurrencyDisplay_C.hpp"
#include "..\_Game_Interface_MainMenu_Widgets_UI_SubMenuButton\UI_SubMenuButton_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_SteamCore\SteamItemDetails.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\Overlay.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
_Script_UMG::Image*& _Game_Interface_MainMenu_Components_T_CurrencyDisplay::T_CurrencyDisplay_C::get_PlaycoinImage() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x288);
}
void _Game_Interface_MainMenu_Components_T_CurrencyDisplay::T_CurrencyDisplay_C::PreConstruct0(bool IsDesignTime) {
    return;
}
int32_t& _Game_Interface_MainMenu_Components_T_CurrencyDisplay::T_CurrencyDisplay_C::get_Coins() {
    return *(int32_t*)((uintptr_t)this + 0x2cc);
}
_Script_UMG::Overlay*& _Game_Interface_MainMenu_Components_T_CurrencyDisplay::T_CurrencyDisplay_C::get_PlayCoinCountDisplay_1() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x280);
}
void* _Game_Interface_MainMenu_Components_T_CurrencyDisplay::T_CurrencyDisplay_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
void _Game_Interface_MainMenu_Components_T_CurrencyDisplay::T_CurrencyDisplay_C::Construct0() {
    return;
}
_Script_UMG::Image*& _Game_Interface_MainMenu_Components_T_CurrencyDisplay::T_CurrencyDisplay_C::get_PlaycoinImage_1() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x290);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_Components_T_CurrencyDisplay::T_CurrencyDisplay_C::get_Background_1() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x270);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_Components_T_CurrencyDisplay::T_CurrencyDisplay_C::get_Background() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x268);
}
_Script_UMG::Overlay*& _Game_Interface_MainMenu_Components_T_CurrencyDisplay::T_CurrencyDisplay_C::get_PlayCoinCountDisplay() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x278);
}
void _Game_Interface_MainMenu_Components_T_CurrencyDisplay::T_CurrencyDisplay_C::BndEvt__T_CurrencyDisplay_UI_SubMenuButton_K2Node_ComponentBoundEvent_0_ButtonRelease__DelegateSignature() {
    return;
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_Components_T_CurrencyDisplay::T_CurrencyDisplay_C::get_PlaycoinsCount() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x298);
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_Components_T_CurrencyDisplay::T_CurrencyDisplay_C::get_TicketsCount() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2a0);
}
_Game_Interface_MainMenu_Widgets_UI_SubMenuButton::UI_SubMenuButton_C*& _Game_Interface_MainMenu_Components_T_CurrencyDisplay::T_CurrencyDisplay_C::get_UI_SubMenuButton() {
    return *(_Game_Interface_MainMenu_Widgets_UI_SubMenuButton::UI_SubMenuButton_C**)((uintptr_t)this + 0x2a8);
}
void _Game_Interface_MainMenu_Components_T_CurrencyDisplay::T_CurrencyDisplay_C::UpdateCoins(int32_t NewTotal) {
    return;
}
void* _Game_Interface_MainMenu_Components_T_CurrencyDisplay::T_CurrencyDisplay_C::get_Inventory_Handle() {
    return (void*)((uintptr_t)this + 0x2b0);
}
void* _Game_Interface_MainMenu_Components_T_CurrencyDisplay::T_CurrencyDisplay_C::get_Steam_Inventory() {
    return (void*)((uintptr_t)this + 0x2b8);
}
void _Game_Interface_MainMenu_Components_T_CurrencyDisplay::T_CurrencyDisplay_C::set_Waiting(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2d0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2d0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Interface_MainMenu_Components_T_CurrencyDisplay::T_CurrencyDisplay_C::get_LoadedInventory() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c8 + 0)) & 1 != 0;
}
void _Game_Interface_MainMenu_Components_T_CurrencyDisplay::T_CurrencyDisplay_C::set_LoadedInventory(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Interface_MainMenu_Components_T_CurrencyDisplay::T_CurrencyDisplay_C::get_Waiting() {
    return (*(uint8_t*)((uintptr_t)this + 0x2d0 + 0)) & 1 != 0;
}
bool _Game_Interface_MainMenu_Components_T_CurrencyDisplay::T_CurrencyDisplay_C::get_ShouldHideCoins() {
    return (*(uint8_t*)((uintptr_t)this + 0x2d1 + 0)) & 1 != 0;
}
void _Game_Interface_MainMenu_Components_T_CurrencyDisplay::T_CurrencyDisplay_C::set_ShouldHideCoins(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2d1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2d1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Interface_MainMenu_Components_T_CurrencyDisplay::T_CurrencyDisplay_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/MainMenu/Components/T_CurrencyDisplay.T_CurrencyDisplay_C");
    return result;
}
bool _Game_Interface_MainMenu_Components_T_CurrencyDisplay::T_CurrencyDisplay_C::BeforeDec15() {
    return;
}
bool _Game_Interface_MainMenu_Components_T_CurrencyDisplay::T_CurrencyDisplay_C::HasHazmatSuit(void*& SteamItems, _Script_SteamCore::SteamItemDetails& ItemDefinition) {
    return;
}
void _Game_Interface_MainMenu_Components_T_CurrencyDisplay::T_CurrencyDisplay_C::Refresh() {
    return;
}
void _Game_Interface_MainMenu_Components_T_CurrencyDisplay::T_CurrencyDisplay_C::OnInitialized0() {
    return;
}
void _Game_Interface_MainMenu_Components_T_CurrencyDisplay::T_CurrencyDisplay_C::GetPlaycoinsAndTickets(int32_t Playcoins, int32_t Tickets) {
    return;
}
void _Game_Interface_MainMenu_Components_T_CurrencyDisplay::T_CurrencyDisplay_C::FailWallet(void* ErrorMessage) {
    return;
}
void _Game_Interface_MainMenu_Components_T_CurrencyDisplay::T_CurrencyDisplay_C::SetPlaycoinsVisible(bool ShouldHideCoins) {
    return;
}
void _Game_Interface_MainMenu_Components_T_CurrencyDisplay::T_CurrencyDisplay_C::ExecuteUbergraph_T_CurrencyDisplay(int32_t EntryPoint) {
    return;
}
