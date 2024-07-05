#include "..\FUObjectArray.hpp"
#include "..\_Game_Interface_Content_UI_N_Loading\UI_N_Loading_C.hpp"
#include "..\_Game_Interface_MainMenu_BP_CameraMoverMain\BP_CameraMoverMain_C.hpp"
#include "UI_ShopItem_C.hpp"
#include "..\_Game_Interface_Shoppy_UI_Shoppy\UI_Shoppy_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\Overlay.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void* _Game_Interface_Shoppy_UI_ShopItem::UI_ShopItem_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_Shoppy_UI_ShopItem::UI_ShopItem_C::get_Hover() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
_Script_UMG::Image*& _Game_Interface_Shoppy_UI_ShopItem::UI_ShopItem_C::get_Image_169() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x290);
}
void _Game_Interface_Shoppy_UI_ShopItem::UI_ShopItem_C::ExecuteUbergraph_UI_ShopItem(int32_t EntryPoint) {
    return;
}
_Script_UMG::Image*& _Game_Interface_Shoppy_UI_ShopItem::UI_ShopItem_C::get_Image_1() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x280);
}
void _Game_Interface_Shoppy_UI_ShopItem::UI_ShopItem_C::BndEvt__UI_ShopItem_Button_71_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
_Script_UMG::WidgetAnimation*& _Game_Interface_Shoppy_UI_ShopItem::UI_ShopItem_C::get_Refresh() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x270);
}
_Script_UMG::Image*& _Game_Interface_Shoppy_UI_ShopItem::UI_ShopItem_C::get_EventOverlay() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x278);
}
void _Game_Interface_Shoppy_UI_ShopItem::UI_ShopItem_C::BndEvt__UI_ShopItem_Button_71_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() {
    return;
}
_Script_UMG::Image*& _Game_Interface_Shoppy_UI_ShopItem::UI_ShopItem_C::get_Image_72() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x288);
}
_Script_UMG::TextBlock*& _Game_Interface_Shoppy_UI_ShopItem::UI_ShopItem_C::get_ItemName() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x298);
}
void _Game_Interface_Shoppy_UI_ShopItem::UI_ShopItem_C::ShopItemReleased__DelegateSignature(int32_t ItemId) {
    return;
}
_Script_UMG::TextBlock*& _Game_Interface_Shoppy_UI_ShopItem::UI_ShopItem_C::get_Price() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2a0);
}
_Script_UMG::Button*& _Game_Interface_Shoppy_UI_ShopItem::UI_ShopItem_C::get_ShopItemButton() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x2a8);
}
_Script_UMG::Overlay*& _Game_Interface_Shoppy_UI_ShopItem::UI_ShopItem_C::get_ShopItemContainer() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x2b0);
}
_Script_UMG::Image*& _Game_Interface_Shoppy_UI_ShopItem::UI_ShopItem_C::get_Thumb() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2b8);
}
void _Game_Interface_Shoppy_UI_ShopItem::UI_ShopItem_C::PreConstruct0(bool IsDesignTime) {
    return;
}
_Game_Interface_Content_UI_N_Loading::UI_N_Loading_C*& _Game_Interface_Shoppy_UI_ShopItem::UI_ShopItem_C::get_UI_N_Loading() {
    return *(_Game_Interface_Content_UI_N_Loading::UI_N_Loading_C**)((uintptr_t)this + 0x2c0);
}
int32_t& _Game_Interface_Shoppy_UI_ShopItem::UI_ShopItem_C::get_Item() {
    return *(int32_t*)((uintptr_t)this + 0x2c8);
}
float& _Game_Interface_Shoppy_UI_ShopItem::UI_ShopItem_C::get_TimeoutAfter() {
    return *(float*)((uintptr_t)this + 0x2cc);
}
void _Game_Interface_Shoppy_UI_ShopItem::UI_ShopItem_C::set_Finished(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2da + 0);
    *(uint8_t*)((uintptr_t)this + 0x2da + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C*& _Game_Interface_Shoppy_UI_ShopItem::UI_ShopItem_C::get_Parent() {
    return *(_Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C**)((uintptr_t)this + 0x2d0);
}
bool _Game_Interface_Shoppy_UI_ShopItem::UI_ShopItem_C::get_Big() {
    return (*(uint8_t*)((uintptr_t)this + 0x2d8 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Game_Interface_Shoppy_UI_ShopItem::UI_ShopItem_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/Shoppy/UI_ShopItem.UI_ShopItem_C");
    return result;
}
void _Game_Interface_Shoppy_UI_ShopItem::UI_ShopItem_C::set_Big(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2d8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2d8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Interface_Shoppy_UI_ShopItem::UI_ShopItem_C::get_LG_Thumb() {
    return (*(uint8_t*)((uintptr_t)this + 0x2d9 + 0)) & 1 != 0;
}
void _Game_Interface_Shoppy_UI_ShopItem::UI_ShopItem_C::set_LG_Thumb(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2d9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2d9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Interface_Shoppy_UI_ShopItem::UI_ShopItem_C::get_Finished() {
    return (*(uint8_t*)((uintptr_t)this + 0x2da + 0)) & 1 != 0;
}
bool _Game_Interface_Shoppy_UI_ShopItem::UI_ShopItem_C::get_Preset_Item() {
    return (*(uint8_t*)((uintptr_t)this + 0x2db + 0)) & 1 != 0;
}
void _Game_Interface_Shoppy_UI_ShopItem::UI_ShopItem_C::set_Preset_Item(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2db + 0);
    *(uint8_t*)((uintptr_t)this + 0x2db + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Game_Interface_Shoppy_UI_ShopItem::UI_ShopItem_C::get_Set_Item() {
    return *(int32_t*)((uintptr_t)this + 0x2dc);
}
void _Game_Interface_Shoppy_UI_ShopItem::UI_ShopItem_C::BndEvt__UI_ShopItem_Button_71_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature() {
    return;
}
_Game_Interface_MainMenu_BP_CameraMoverMain::BP_CameraMoverMain_C*& _Game_Interface_Shoppy_UI_ShopItem::UI_ShopItem_C::get_CameraManager() {
    return *(_Game_Interface_MainMenu_BP_CameraMoverMain::BP_CameraMoverMain_C**)((uintptr_t)this + 0x2e0);
}
void* _Game_Interface_Shoppy_UI_ShopItem::UI_ShopItem_C::get_ShopItemReleased() {
    return (void*)((uintptr_t)this + 0x2e8);
}
void _Game_Interface_Shoppy_UI_ShopItem::UI_ShopItem_C::SetParent(_Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C* Parent) {
    return;
}
void _Game_Interface_Shoppy_UI_ShopItem::UI_ShopItem_C::SetItem(int32_t Item) {
    return;
}
void _Game_Interface_Shoppy_UI_ShopItem::UI_ShopItem_C::Construct0() {
    return;
}
