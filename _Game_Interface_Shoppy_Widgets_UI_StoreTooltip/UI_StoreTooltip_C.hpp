#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct Overlay;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct WidgetSwitcher;
}
namespace _Script_UMG {
struct HorizontalBox;
}
namespace _Game_Interface_Shoppy_Widgets_UI_StoreTooltipButton {
struct UI_StoreTooltipButton_C;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_UMG {
struct VerticalBox;
}
namespace _Script_UMG {
struct SizeBox;
}
namespace _Script_Engine {
struct MaterialInstanceDynamic;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_Shoppy_Widgets_UI_StoreTooltip {
#pragma pack(push, 1)
struct UI_StoreTooltip_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x1b0]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Image*& get_Background();
    _Game_Interface_Shoppy_Widgets_UI_StoreTooltipButton::UI_StoreTooltipButton_C*& get_BuyPlaycoinsButton();
    _Game_Interface_Shoppy_Widgets_UI_StoreTooltipButton::UI_StoreTooltipButton_C*& get_CancelButton();
    _Game_Interface_Shoppy_Widgets_UI_StoreTooltipButton::UI_StoreTooltipButton_C*& get_ConfirmPurchaseButton();
    _Script_UMG::Overlay*& get_ConfirmPurchaseContainer();
    _Script_UMG::TextBlock*& get_ConfirmPurchasePriceLabel();
    _Script_UMG::TextBlock*& get_CosmeticTypeLabel();
    _Script_UMG::Image*& get_CurrencyIcon();
    _Game_Interface_Shoppy_Widgets_UI_StoreTooltipButton::UI_StoreTooltipButton_C*& get_DenyPurchaseButton();
    _Game_Interface_Shoppy_Widgets_UI_StoreTooltipButton::UI_StoreTooltipButton_C*& get_ErrorButton();
    _Script_UMG::Overlay*& get_ErrorContainer();
    _Script_UMG::Image*& get_HeaderBackground();
    _Script_UMG::SizeBox*& get_HeaderBox();
    _Script_UMG::Image*& get_HeaderFrame();
    _Script_UMG::VerticalBox*& get_HeaderTextContainer();
    _Script_UMG::Overlay*& get_ItemDescriptionContainer();
    _Script_UMG::TextBlock*& get_ItemDescriptionLabel();
    _Script_UMG::TextBlock*& get_ItemNameLabel();
    _Script_UMG::Overlay*& get_ItemPurchasedContainer();
    _Script_UMG::Overlay*& get_NotEnoughPlayCoinsContainer();
    _Game_Interface_Shoppy_Widgets_UI_StoreTooltipButton::UI_StoreTooltipButton_C*& get_NotEnoughTicketsButton();
    _Script_UMG::Overlay*& get_NotEnoughTicketsContainer();
    _Script_UMG::Overlay*& get_Overlay_35();
    _Script_UMG::TextBlock*& get_OwnedLabel();
    _Script_UMG::Image*& get_PLaycoinIcon();
    _Script_UMG::Image*& get_PlayCoinIcon2();
    _Script_UMG::SizeBox*& get_PlaycoinIconSizeBox();
    _Script_UMG::TextBlock*& get_PlaycoinPriceLabel();
    _Script_UMG::HorizontalBox*& get_PriceLabelContainer();
    _Script_UMG::TextBlock*& get_RarityLabel();
    _Script_UMG::Image*& get_TicketIcon();
    _Script_UMG::Image*& get_TicketIcon2();
    _Script_UMG::SizeBox*& get_TicketIconSizeBox();
    _Script_UMG::TextBlock*& get_TicketPriceLabel();
    _Game_Interface_Shoppy_Widgets_UI_StoreTooltipButton::UI_StoreTooltipButton_C*& get_UI_StoreTooltipButton();
    _Script_UMG::WidgetSwitcher*& get_WidgetSwitcher();
    void* get_WantsToPurchasePlaycoins();
    void* get_WantsToHide();
    _Script_Engine::MaterialInstanceDynamic*& get_HeaderBGMat();
    void* get_ItemRarity();
    void* get_ItemName();
    void* get_CosmeticType();
    void* get_ItemDescription();
    bool get_bBuyingWithPlaycoins();
    void set_bBuyingWithPlaycoins(bool value);
    bool get_bOwned();
    void set_bOwned(bool value);
    int32_t& get_ItemId();
    void* get_CurrencyOption();
    static _Script_CoreUObject::Class* static_class();
    void SetStyle(void* Rarity, void* Type, void* Name, void* Description);
    void PreConstruct0(bool IsDesignTime);
    void ShowError();
    void BndEvt__UI_StoreTooltip_ErrorButton_K2Node_ComponentBoundEvent_0_ButtonReleased__DelegateSignature();
    void TryPlaycoinPurchase(int32_t PlayCoinPrice, int32_t PlayerCoinCount);
    void TryTicketPurchase(int32_t TicketPrice, int32_t PlayerTicketCount);
    void BndEvt__UI_StoreTooltip_BuyPlaycoinsButton_K2Node_ComponentBoundEvent_3_ButtonReleased__DelegateSignature();
    void BndEvt__UI_StoreTooltip_CancelButton_K2Node_ComponentBoundEvent_4_ButtonReleased__DelegateSignature();
    void BndEvt__UI_StoreTooltip_NotEnoughTicketsButton_K2Node_ComponentBoundEvent_5_ButtonReleased__DelegateSignature();
    void BndEvt__UI_StoreTooltip_UI_StoreTooltipButton_K2Node_ComponentBoundEvent_6_ButtonReleased__DelegateSignature();
    void BndEvt__UI_StoreTooltip_ConfirmPurchaseButton_K2Node_ComponentBoundEvent_1_ButtonReleased__DelegateSignature();
    void BndEvt__UI_StoreTooltip_DenyPurchaseButton_K2Node_ComponentBoundEvent_2_ButtonReleased__DelegateSignature();
    void PrimeConfirmPurchaseContainer(void* NewPrice, _Script_Engine::Texture2D* NewIcon, void* Currency);
    void PurchaseSuccess();
    void PurchaseFailure(void* ErrorMessage);
    void ExecuteUbergraph_UI_StoreTooltip(int32_t EntryPoint);
    void WantsToHide__DelegateSignature();
    void WantsToPurchasePlaycoins__DelegateSignature();
}; // Size: 0x410
#pragma pack(pop)
}
