#include "..\FUObjectArray.hpp"
#include "UI_ScreenItem_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void* _Game_Interface_Customization_Cosmetics_UI_ScreenItem::UI_ScreenItem_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::Image*& _Game_Interface_Customization_Cosmetics_UI_ScreenItem::UI_ScreenItem_C::get_Background() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x268);
}
void* _Game_Interface_Customization_Cosmetics_UI_ScreenItem::UI_ScreenItem_C::get_MyScreenName() {
    return (void*)((uintptr_t)this + 0x290);
}
_Script_UMG::Image*& _Game_Interface_Customization_Cosmetics_UI_ScreenItem::UI_ScreenItem_C::get_ScreenFavoritedImage() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x280);
}
_Script_UMG::Button*& _Game_Interface_Customization_Cosmetics_UI_ScreenItem::UI_ScreenItem_C::get_FavoriteButton() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x278);
}
_Script_UMG::TextBlock*& _Game_Interface_Customization_Cosmetics_UI_ScreenItem::UI_ScreenItem_C::get_DisplayName() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x270);
}
_Script_UMG::Button*& _Game_Interface_Customization_Cosmetics_UI_ScreenItem::UI_ScreenItem_C::get_SelectButton() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x288);
}
void* _Game_Interface_Customization_Cosmetics_UI_ScreenItem::UI_ScreenItem_C::get_ScreenItemHovered() {
    return (void*)((uintptr_t)this + 0x2a8);
}
void _Game_Interface_Customization_Cosmetics_UI_ScreenItem::UI_ScreenItem_C::BndEvt__UI_ScreenItem_ScreenPreviewHover_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void* _Game_Interface_Customization_Cosmetics_UI_ScreenItem::UI_ScreenItem_C::get_ScreenItemUnHovered() {
    return (void*)((uintptr_t)this + 0x2b8);
}
void* _Game_Interface_Customization_Cosmetics_UI_ScreenItem::UI_ScreenItem_C::get_ScreenItemSelected() {
    return (void*)((uintptr_t)this + 0x2c8);
}
int32_t& _Game_Interface_Customization_Cosmetics_UI_ScreenItem::UI_ScreenItem_C::get_MyID() {
    return *(int32_t*)((uintptr_t)this + 0x2d8);
}
bool _Game_Interface_Customization_Cosmetics_UI_ScreenItem::UI_ScreenItem_C::get_Equipped() {
    return (*(uint8_t*)((uintptr_t)this + 0x2dc + 0)) & 1 != 0;
}
void _Game_Interface_Customization_Cosmetics_UI_ScreenItem::UI_ScreenItem_C::set_Equipped(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2dc + 0);
    *(uint8_t*)((uintptr_t)this + 0x2dc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Interface_Customization_Cosmetics_UI_ScreenItem::UI_ScreenItem_C::get_Favorited() {
    return (*(uint8_t*)((uintptr_t)this + 0x2dd + 0)) & 1 != 0;
}
void _Game_Interface_Customization_Cosmetics_UI_ScreenItem::UI_ScreenItem_C::set_Favorited(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2dd + 0);
    *(uint8_t*)((uintptr_t)this + 0x2dd + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Interface_Customization_Cosmetics_UI_ScreenItem::UI_ScreenItem_C::get_ScreenItemFavoritedPressed() {
    return (void*)((uintptr_t)this + 0x2e0);
}
void* _Game_Interface_Customization_Cosmetics_UI_ScreenItem::UI_ScreenItem_C::get_Image() {
    return (void*)((uintptr_t)this + 0x2f0);
}
_Script_CoreUObject::Class* _Game_Interface_Customization_Cosmetics_UI_ScreenItem::UI_ScreenItem_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/Customization/Cosmetics/UI_ScreenItem.UI_ScreenItem_C");
    return result;
}
void _Game_Interface_Customization_Cosmetics_UI_ScreenItem::UI_ScreenItem_C::Construct0() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_ScreenItem::UI_ScreenItem_C::BndEvt__UI_ScreenItem_ScreenPreviewHover_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_ScreenItem::UI_ScreenItem_C::BndEvt__UI_ScreenItem_ScreenPreviewHover_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_ScreenItem::UI_ScreenItem_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_ScreenItem::UI_ScreenItem_C::ScreenItem_UpdateVisuals() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_ScreenItem::UI_ScreenItem_C::BndEvt__UI_ScreenItem_FavoriteButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_ScreenItem::UI_ScreenItem_C::BndEvt__UI_ScreenItem_FavoriteButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_ScreenItem::UI_ScreenItem_C::BndEvt__UI_ScreenItem_FavoriteButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_ScreenItem::UI_ScreenItem_C::SetFavorited(bool Favorited) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_ScreenItem::UI_ScreenItem_C::SetEquipped(bool Equipped) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_ScreenItem::UI_ScreenItem_C::ExecuteUbergraph_UI_ScreenItem(int32_t EntryPoint) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_ScreenItem::UI_ScreenItem_C::ScreenItemFavoritedPressed__DelegateSignature(int32_t ID, _Game_Interface_Customization_Cosmetics_UI_ScreenItem::UI_ScreenItem_C* Object) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_ScreenItem::UI_ScreenItem_C::ScreenItemSelected__DelegateSignature(_Game_Interface_Customization_Cosmetics_UI_ScreenItem::UI_ScreenItem_C* Screen, int32_t ScreenID) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_ScreenItem::UI_ScreenItem_C::ScreenItemUnHovered__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_ScreenItem::UI_ScreenItem_C::ScreenItemHovered__DelegateSignature(void* ScreenImage) {
    return;
}
