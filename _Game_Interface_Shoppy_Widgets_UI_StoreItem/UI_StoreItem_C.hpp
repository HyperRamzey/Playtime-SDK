#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_UMG {
struct Overlay;
}
namespace _Script_UMG {
struct Border;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_Playtime_Multiplayer {
struct CustomizationSaveGame;
}
namespace _Script_UMG {
struct Button;
}
namespace _Script_UMG {
struct CanvasPanel;
}
namespace _Script_UMG {
struct SizeBox;
}
namespace _Script_UMG {
struct HorizontalBox;
}
namespace _Script_Engine {
struct MaterialInstanceDynamic;
}
namespace _Game_Interface_Shoppy_Widgets_UI_StoreTooltip {
struct UI_StoreTooltip_C;
}
namespace _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog {
struct UI_CosmeticCatalog_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Game_Interface_Shoppy_Widgets_UI_StoreItem {
#pragma pack(push, 1)
struct UI_StoreItem_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x170]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_HighlightFrame();
    _Script_UMG::Image*& get_Background();
    _Script_UMG::Border*& get_Border_220();
    _Script_UMG::Button*& get_Button_367();
    _Script_UMG::CanvasPanel*& get_checkmark();
    _Script_UMG::Image*& get_Divider();
    _Script_UMG::Image*& get_Fade();
    _Script_UMG::Image*& get_Frame();
    _Script_UMG::SizeBox*& get_ItemBox();
    _Script_UMG::TextBlock*& get_ItemNameLabel_1();
    _Script_UMG::TextBlock*& get_ItemTypeLabel();
    _Script_UMG::Overlay*& get_NotificationContainer();
    _Script_UMG::Image*& get_NotificationIcon();
    _Script_UMG::TextBlock*& get_NotificationLabel();
    _Script_UMG::TextBlock*& get_OwnedLabel();
    _Script_UMG::Image*& get_PLaycoinIcon();
    _Script_UMG::HorizontalBox*& get_PlayCoinPriceContainer();
    _Script_UMG::TextBlock*& get_PlaycoinPriceLabel();
    _Script_UMG::Image*& get_ShopItemRender();
    _Script_UMG::Image*& get_TicketIcon();
    _Script_UMG::HorizontalBox*& get_TicketPriceContainer();
    _Script_UMG::TextBlock*& get_TicketPriceLabel();
    void* get_NotificationText();
    void* get_Name();
    void* get_Rarity();
    void* get_RenderImage();
    void* get_ItemSelected();
    int32_t& get_PlayCoinPrice();
    int32_t& get_TicketPrice();
    int32_t& get_Item_ID();
    _Script_Engine::MaterialInstanceDynamic*& get_BackgroundMaterial();
    float& get_CardHeight();
    _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C*& get_Tooltip();
    bool get_Owned();
    void set_Owned(bool value);
    bool get_HasTooltip();
    void set_HasTooltip(bool value);
    bool get_ShopCard();
    void set_ShopCard(bool value);
    _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C*& get_Store_Tooltip();
    _Script_Playtime_Multiplayer::CustomizationSaveGame*& get_CosmeticSaveGame();
    _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C*& get_Cosmetic_Catalog_Reference();
    static _Script_CoreUObject::Class* static_class();
    void Set_Checkmark_Visibility();
    void OnLoaded_3C2677F2465599460E8F9DA01B909341(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_8D70CE244980D0D10360CC82D5AF8B46(_Script_CoreUObject::Object* Loaded);
    void BndEvt__UI_StoreItem_Button_367_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_StoreItem_Button_367_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_StoreItem_Button_367_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void PreConstruct0(bool IsDesignTime);
    void UpdatePrice(int32_t Price);
    void Construct0();
    void Refresh();
    void OnInventorySuccess(void*& Inventory);
    void OnInventoryFailure(void* ErrorMessage);
    void ExecuteUbergraph_UI_StoreItem(int32_t EntryPoint);
    void ItemSelected__DelegateSignature(void* Name, int32_t PlayCoinPrice, int32_t TicketPrice, int32_t ItemId);
}; // Size: 0x3d0
#pragma pack(pop)
}
