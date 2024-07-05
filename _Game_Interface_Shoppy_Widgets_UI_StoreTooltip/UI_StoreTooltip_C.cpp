#include "..\FUObjectArray.hpp"
#include "UI_StoreTooltip_C.hpp"
#include "..\_Game_Interface_Shoppy_Widgets_UI_StoreTooltipButton\UI_StoreTooltipButton_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\MaterialInstanceDynamic.hpp"
#include "..\_Script_Engine\Texture2D.hpp"
#include "..\_Script_UMG\HorizontalBox.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\Overlay.hpp"
#include "..\_Script_UMG\SizeBox.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\VerticalBox.hpp"
#include "..\_Script_UMG\WidgetSwitcher.hpp"
void* _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Game_Interface_Shoppy_Widgets_UI_StoreTooltipButton::UI_StoreTooltipButton_C*& _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::get_ConfirmPurchaseButton() {
    return *(_Game_Interface_Shoppy_Widgets_UI_StoreTooltipButton::UI_StoreTooltipButton_C**)((uintptr_t)this + 0x280);
}
void _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::BndEvt__UI_StoreTooltip_BuyPlaycoinsButton_K2Node_ComponentBoundEvent_3_ButtonReleased__DelegateSignature() {
    return;
}
_Script_UMG::TextBlock*& _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::get_ConfirmPurchasePriceLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x290);
}
_Script_UMG::Image*& _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::get_Background() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x268);
}
_Game_Interface_Shoppy_Widgets_UI_StoreTooltipButton::UI_StoreTooltipButton_C*& _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::get_BuyPlaycoinsButton() {
    return *(_Game_Interface_Shoppy_Widgets_UI_StoreTooltipButton::UI_StoreTooltipButton_C**)((uintptr_t)this + 0x270);
}
void* _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::get_ItemRarity() {
    return (void*)((uintptr_t)this + 0x3b0);
}
_Game_Interface_Shoppy_Widgets_UI_StoreTooltipButton::UI_StoreTooltipButton_C*& _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::get_CancelButton() {
    return *(_Game_Interface_Shoppy_Widgets_UI_StoreTooltipButton::UI_StoreTooltipButton_C**)((uintptr_t)this + 0x278);
}
void* _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::get_CosmeticType() {
    return (void*)((uintptr_t)this + 0x3d0);
}
_Script_UMG::Overlay*& _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::get_ConfirmPurchaseContainer() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x288);
}
_Script_UMG::SizeBox*& _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::get_HeaderBox() {
    return *(_Script_UMG::SizeBox**)((uintptr_t)this + 0x2c8);
}
_Script_UMG::TextBlock*& _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::get_CosmeticTypeLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x298);
}
_Script_UMG::WidgetSwitcher*& _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::get_WidgetSwitcher() {
    return *(_Script_UMG::WidgetSwitcher**)((uintptr_t)this + 0x380);
}
_Script_UMG::Image*& _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::get_CurrencyIcon() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2a0);
}
_Game_Interface_Shoppy_Widgets_UI_StoreTooltipButton::UI_StoreTooltipButton_C*& _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::get_DenyPurchaseButton() {
    return *(_Game_Interface_Shoppy_Widgets_UI_StoreTooltipButton::UI_StoreTooltipButton_C**)((uintptr_t)this + 0x2a8);
}
_Script_UMG::Image*& _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::get_PlayCoinIcon2() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x330);
}
_Game_Interface_Shoppy_Widgets_UI_StoreTooltipButton::UI_StoreTooltipButton_C*& _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::get_ErrorButton() {
    return *(_Game_Interface_Shoppy_Widgets_UI_StoreTooltipButton::UI_StoreTooltipButton_C**)((uintptr_t)this + 0x2b0);
}
_Script_UMG::Overlay*& _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::get_ErrorContainer() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x2b8);
}
_Script_UMG::Image*& _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::get_HeaderBackground() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2c0);
}
_Script_UMG::Image*& _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::get_HeaderFrame() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2d0);
}
_Script_UMG::VerticalBox*& _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::get_HeaderTextContainer() {
    return *(_Script_UMG::VerticalBox**)((uintptr_t)this + 0x2d8);
}
_Script_UMG::Overlay*& _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::get_ItemDescriptionContainer() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x2e0);
}
_Script_UMG::TextBlock*& _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::get_ItemDescriptionLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2e8);
}
_Script_UMG::TextBlock*& _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::get_ItemNameLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2f0);
}
void _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::TryTicketPurchase(int32_t TicketPrice, int32_t PlayerTicketCount) {
    return;
}
_Script_UMG::Overlay*& _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::get_ItemPurchasedContainer() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x2f8);
}
_Script_UMG::Overlay*& _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::get_NotEnoughPlayCoinsContainer() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x300);
}
_Game_Interface_Shoppy_Widgets_UI_StoreTooltipButton::UI_StoreTooltipButton_C*& _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::get_NotEnoughTicketsButton() {
    return *(_Game_Interface_Shoppy_Widgets_UI_StoreTooltipButton::UI_StoreTooltipButton_C**)((uintptr_t)this + 0x308);
}
_Script_UMG::Overlay*& _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::get_NotEnoughTicketsContainer() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x310);
}
_Script_CoreUObject::Class* _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/Shoppy/Widgets/UI_StoreTooltip.UI_StoreTooltip_C");
    return result;
}
_Script_UMG::Overlay*& _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::get_Overlay_35() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x318);
}
_Script_UMG::TextBlock*& _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::get_OwnedLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x320);
}
_Script_UMG::Image*& _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::get_PLaycoinIcon() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x328);
}
_Script_UMG::SizeBox*& _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::get_PlaycoinIconSizeBox() {
    return *(_Script_UMG::SizeBox**)((uintptr_t)this + 0x338);
}
_Script_UMG::TextBlock*& _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::get_PlaycoinPriceLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x340);
}
_Script_UMG::HorizontalBox*& _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::get_PriceLabelContainer() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x348);
}
_Script_UMG::SizeBox*& _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::get_TicketIconSizeBox() {
    return *(_Script_UMG::SizeBox**)((uintptr_t)this + 0x368);
}
_Script_UMG::TextBlock*& _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::get_RarityLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x350);
}
_Script_UMG::Image*& _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::get_TicketIcon() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x358);
}
_Script_UMG::Image*& _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::get_TicketIcon2() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x360);
}
void _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::TryPlaycoinPurchase(int32_t PlayCoinPrice, int32_t PlayerCoinCount) {
    return;
}
_Script_UMG::TextBlock*& _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::get_TicketPriceLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x370);
}
void* _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::get_ItemDescription() {
    return (void*)((uintptr_t)this + 0x3e8);
}
_Game_Interface_Shoppy_Widgets_UI_StoreTooltipButton::UI_StoreTooltipButton_C*& _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::get_UI_StoreTooltipButton() {
    return *(_Game_Interface_Shoppy_Widgets_UI_StoreTooltipButton::UI_StoreTooltipButton_C**)((uintptr_t)this + 0x378);
}
void _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::BndEvt__UI_StoreTooltip_ConfirmPurchaseButton_K2Node_ComponentBoundEvent_1_ButtonReleased__DelegateSignature() {
    return;
}
void* _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::get_WantsToPurchasePlaycoins() {
    return (void*)((uintptr_t)this + 0x388);
}
void* _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::get_WantsToHide() {
    return (void*)((uintptr_t)this + 0x398);
}
_Script_Engine::MaterialInstanceDynamic*& _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::get_HeaderBGMat() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x3a8);
}
void* _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::get_ItemName() {
    return (void*)((uintptr_t)this + 0x3b8);
}
bool _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::get_bBuyingWithPlaycoins() {
    return (*(uint8_t*)((uintptr_t)this + 0x400 + 0)) & 1 != 0;
}
void _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::set_bBuyingWithPlaycoins(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x400 + 0);
    *(uint8_t*)((uintptr_t)this + 0x400 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::get_bOwned() {
    return (*(uint8_t*)((uintptr_t)this + 0x401 + 0)) & 1 != 0;
}
void _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::set_bOwned(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x401 + 0);
    *(uint8_t*)((uintptr_t)this + 0x401 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::get_ItemId() {
    return *(int32_t*)((uintptr_t)this + 0x404);
}
void* _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::get_CurrencyOption() {
    return (void*)((uintptr_t)this + 0x408);
}
void _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::SetStyle(void* Rarity, void* Type, void* Name, void* Description) {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::ShowError() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::BndEvt__UI_StoreTooltip_ErrorButton_K2Node_ComponentBoundEvent_0_ButtonReleased__DelegateSignature() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::BndEvt__UI_StoreTooltip_CancelButton_K2Node_ComponentBoundEvent_4_ButtonReleased__DelegateSignature() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::BndEvt__UI_StoreTooltip_NotEnoughTicketsButton_K2Node_ComponentBoundEvent_5_ButtonReleased__DelegateSignature() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::BndEvt__UI_StoreTooltip_UI_StoreTooltipButton_K2Node_ComponentBoundEvent_6_ButtonReleased__DelegateSignature() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::BndEvt__UI_StoreTooltip_DenyPurchaseButton_K2Node_ComponentBoundEvent_2_ButtonReleased__DelegateSignature() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::PrimeConfirmPurchaseContainer(void* NewPrice, _Script_Engine::Texture2D* NewIcon, void* Currency) {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::PurchaseSuccess() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::PurchaseFailure(void* ErrorMessage) {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::ExecuteUbergraph_UI_StoreTooltip(int32_t EntryPoint) {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::WantsToHide__DelegateSignature() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C::WantsToPurchasePlaycoins__DelegateSignature() {
    return;
}
