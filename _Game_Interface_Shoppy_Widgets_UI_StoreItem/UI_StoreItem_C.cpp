#include "..\FUObjectArray.hpp"
#include "..\_Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog\UI_CosmeticCatalog_C.hpp"
#include "UI_StoreItem_C.hpp"
#include "..\_Game_Interface_Shoppy_Widgets_UI_StoreTooltip\UI_StoreTooltip_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\MaterialInstanceDynamic.hpp"
#include "..\_Script_Playtime_Multiplayer\CustomizationSaveGame.hpp"
#include "..\_Script_UMG\Border.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\CanvasPanel.hpp"
#include "..\_Script_UMG\HorizontalBox.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\Overlay.hpp"
#include "..\_Script_UMG\SizeBox.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void* _Game_Interface_Shoppy_Widgets_UI_StoreItem::UI_StoreItem_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
int32_t& _Game_Interface_Shoppy_Widgets_UI_StoreItem::UI_StoreItem_C::get_TicketPrice() {
    return *(int32_t*)((uintptr_t)this + 0x38c);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_Shoppy_Widgets_UI_StoreItem::UI_StoreItem_C::get_HighlightFrame() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
_Script_UMG::Image*& _Game_Interface_Shoppy_Widgets_UI_StoreItem::UI_StoreItem_C::get_Fade() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x298);
}
_Script_UMG::Image*& _Game_Interface_Shoppy_Widgets_UI_StoreItem::UI_StoreItem_C::get_Background() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x270);
}
_Script_UMG::TextBlock*& _Game_Interface_Shoppy_Widgets_UI_StoreItem::UI_StoreItem_C::get_ItemNameLabel_1() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2b0);
}
_Script_UMG::Image*& _Game_Interface_Shoppy_Widgets_UI_StoreItem::UI_StoreItem_C::get_Divider() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x290);
}
float& _Game_Interface_Shoppy_Widgets_UI_StoreItem::UI_StoreItem_C::get_CardHeight() {
    return *(float*)((uintptr_t)this + 0x3a0);
}
_Script_UMG::Border*& _Game_Interface_Shoppy_Widgets_UI_StoreItem::UI_StoreItem_C::get_Border_220() {
    return *(_Script_UMG::Border**)((uintptr_t)this + 0x278);
}
_Script_UMG::Button*& _Game_Interface_Shoppy_Widgets_UI_StoreItem::UI_StoreItem_C::get_Button_367() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x280);
}
_Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C*& _Game_Interface_Shoppy_Widgets_UI_StoreItem::UI_StoreItem_C::get_Cosmetic_Catalog_Reference() {
    return *(_Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C**)((uintptr_t)this + 0x3c8);
}
_Script_UMG::CanvasPanel*& _Game_Interface_Shoppy_Widgets_UI_StoreItem::UI_StoreItem_C::get_checkmark() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x288);
}
_Script_UMG::Image*& _Game_Interface_Shoppy_Widgets_UI_StoreItem::UI_StoreItem_C::get_Frame() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2a0);
}
_Script_UMG::SizeBox*& _Game_Interface_Shoppy_Widgets_UI_StoreItem::UI_StoreItem_C::get_ItemBox() {
    return *(_Script_UMG::SizeBox**)((uintptr_t)this + 0x2a8);
}
_Script_UMG::TextBlock*& _Game_Interface_Shoppy_Widgets_UI_StoreItem::UI_StoreItem_C::get_ItemTypeLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2b8);
}
_Script_UMG::Overlay*& _Game_Interface_Shoppy_Widgets_UI_StoreItem::UI_StoreItem_C::get_NotificationContainer() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x2c0);
}
_Script_UMG::Image*& _Game_Interface_Shoppy_Widgets_UI_StoreItem::UI_StoreItem_C::get_NotificationIcon() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2c8);
}
_Script_UMG::TextBlock*& _Game_Interface_Shoppy_Widgets_UI_StoreItem::UI_StoreItem_C::get_NotificationLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2d0);
}
_Script_UMG::TextBlock*& _Game_Interface_Shoppy_Widgets_UI_StoreItem::UI_StoreItem_C::get_OwnedLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2d8);
}
_Script_UMG::Image*& _Game_Interface_Shoppy_Widgets_UI_StoreItem::UI_StoreItem_C::get_PLaycoinIcon() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2e0);
}
_Script_UMG::HorizontalBox*& _Game_Interface_Shoppy_Widgets_UI_StoreItem::UI_StoreItem_C::get_PlayCoinPriceContainer() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x2e8);
}
_Script_UMG::TextBlock*& _Game_Interface_Shoppy_Widgets_UI_StoreItem::UI_StoreItem_C::get_PlaycoinPriceLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2f0);
}
_Script_UMG::Image*& _Game_Interface_Shoppy_Widgets_UI_StoreItem::UI_StoreItem_C::get_ShopItemRender() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2f8);
}
void _Game_Interface_Shoppy_Widgets_UI_StoreItem::UI_StoreItem_C::ItemSelected__DelegateSignature(void* Name, int32_t PlayCoinPrice, int32_t TicketPrice, int32_t ItemId) {
    return;
}
_Script_UMG::Image*& _Game_Interface_Shoppy_Widgets_UI_StoreItem::UI_StoreItem_C::get_TicketIcon() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x300);
}
_Script_UMG::TextBlock*& _Game_Interface_Shoppy_Widgets_UI_StoreItem::UI_StoreItem_C::get_TicketPriceLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x310);
}
_Script_UMG::HorizontalBox*& _Game_Interface_Shoppy_Widgets_UI_StoreItem::UI_StoreItem_C::get_TicketPriceContainer() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x308);
}
void* _Game_Interface_Shoppy_Widgets_UI_StoreItem::UI_StoreItem_C::get_NotificationText() {
    return (void*)((uintptr_t)this + 0x318);
}
void* _Game_Interface_Shoppy_Widgets_UI_StoreItem::UI_StoreItem_C::get_Name() {
    return (void*)((uintptr_t)this + 0x330);
}
void* _Game_Interface_Shoppy_Widgets_UI_StoreItem::UI_StoreItem_C::get_Rarity() {
    return (void*)((uintptr_t)this + 0x348);
}
void* _Game_Interface_Shoppy_Widgets_UI_StoreItem::UI_StoreItem_C::get_RenderImage() {
    return (void*)((uintptr_t)this + 0x350);
}
bool _Game_Interface_Shoppy_Widgets_UI_StoreItem::UI_StoreItem_C::get_HasTooltip() {
    return (*(uint8_t*)((uintptr_t)this + 0x3b1 + 0)) & 1 != 0;
}
void* _Game_Interface_Shoppy_Widgets_UI_StoreItem::UI_StoreItem_C::get_ItemSelected() {
    return (void*)((uintptr_t)this + 0x378);
}
int32_t& _Game_Interface_Shoppy_Widgets_UI_StoreItem::UI_StoreItem_C::get_PlayCoinPrice() {
    return *(int32_t*)((uintptr_t)this + 0x388);
}
int32_t& _Game_Interface_Shoppy_Widgets_UI_StoreItem::UI_StoreItem_C::get_Item_ID() {
    return *(int32_t*)((uintptr_t)this + 0x390);
}
void _Game_Interface_Shoppy_Widgets_UI_StoreItem::UI_StoreItem_C::set_ShopCard(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3b2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3b2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::MaterialInstanceDynamic*& _Game_Interface_Shoppy_Widgets_UI_StoreItem::UI_StoreItem_C::get_BackgroundMaterial() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x398);
}
void _Game_Interface_Shoppy_Widgets_UI_StoreItem::UI_StoreItem_C::OnInventorySuccess(void*& Inventory) {
    return;
}
_Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C*& _Game_Interface_Shoppy_Widgets_UI_StoreItem::UI_StoreItem_C::get_Tooltip() {
    return *(_Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C**)((uintptr_t)this + 0x3a8);
}
bool _Game_Interface_Shoppy_Widgets_UI_StoreItem::UI_StoreItem_C::get_Owned() {
    return (*(uint8_t*)((uintptr_t)this + 0x3b0 + 0)) & 1 != 0;
}
void _Game_Interface_Shoppy_Widgets_UI_StoreItem::UI_StoreItem_C::set_Owned(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3b0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3b0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Interface_Shoppy_Widgets_UI_StoreItem::UI_StoreItem_C::set_HasTooltip(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3b1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3b1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Interface_Shoppy_Widgets_UI_StoreItem::UI_StoreItem_C::get_ShopCard() {
    return (*(uint8_t*)((uintptr_t)this + 0x3b2 + 0)) & 1 != 0;
}
_Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C*& _Game_Interface_Shoppy_Widgets_UI_StoreItem::UI_StoreItem_C::get_Store_Tooltip() {
    return *(_Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C**)((uintptr_t)this + 0x3b8);
}
_Script_Playtime_Multiplayer::CustomizationSaveGame*& _Game_Interface_Shoppy_Widgets_UI_StoreItem::UI_StoreItem_C::get_CosmeticSaveGame() {
    return *(_Script_Playtime_Multiplayer::CustomizationSaveGame**)((uintptr_t)this + 0x3c0);
}
_Script_CoreUObject::Class* _Game_Interface_Shoppy_Widgets_UI_StoreItem::UI_StoreItem_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/Shoppy/Widgets/UI_StoreItem.UI_StoreItem_C");
    return result;
}
void _Game_Interface_Shoppy_Widgets_UI_StoreItem::UI_StoreItem_C::Set_Checkmark_Visibility() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_StoreItem::UI_StoreItem_C::OnLoaded_3C2677F2465599460E8F9DA01B909341(_Script_CoreUObject::Object* Loaded) {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_StoreItem::UI_StoreItem_C::OnLoaded_8D70CE244980D0D10360CC82D5AF8B46(_Script_CoreUObject::Object* Loaded) {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_StoreItem::UI_StoreItem_C::BndEvt__UI_StoreItem_Button_367_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_StoreItem::UI_StoreItem_C::BndEvt__UI_StoreItem_Button_367_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_StoreItem::UI_StoreItem_C::BndEvt__UI_StoreItem_Button_367_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_StoreItem::UI_StoreItem_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_StoreItem::UI_StoreItem_C::UpdatePrice(int32_t Price) {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_StoreItem::UI_StoreItem_C::Construct0() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_StoreItem::UI_StoreItem_C::Refresh() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_StoreItem::UI_StoreItem_C::OnInventoryFailure(void* ErrorMessage) {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_StoreItem::UI_StoreItem_C::ExecuteUbergraph_UI_StoreItem(int32_t EntryPoint) {
    return;
}
