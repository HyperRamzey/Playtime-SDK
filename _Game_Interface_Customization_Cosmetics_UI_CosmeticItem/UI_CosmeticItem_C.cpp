#include "..\FUObjectArray.hpp"
#include "UI_CosmeticItem_C.hpp"
#include "..\_Game_Interface_Customization_Cosmetics_UI_CosmeticSelectionGrid\UI_CosmeticSelectionGrid_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\InvalidationBox.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void* _Game_Interface_Customization_Cosmetics_UI_CosmeticItem::UI_CosmeticItem_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::Image*& _Game_Interface_Customization_Cosmetics_UI_CosmeticItem::UI_CosmeticItem_C::get_BG() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x268);
}
void _Game_Interface_Customization_Cosmetics_UI_CosmeticItem::UI_CosmeticItem_C::BndEvt__UI_N_CosmeticItem_Button_92_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_CosmeticItem::UI_CosmeticItem_C::BndEvt__UI_N_CosmeticItem_Button_92_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
_Script_UMG::Button*& _Game_Interface_Customization_Cosmetics_UI_CosmeticItem::UI_CosmeticItem_C::get_CosmeticItemButton() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x270);
}
_Script_UMG::InvalidationBox*& _Game_Interface_Customization_Cosmetics_UI_CosmeticItem::UI_CosmeticItem_C::get_InvalidationBox_0() {
    return *(_Script_UMG::InvalidationBox**)((uintptr_t)this + 0x278);
}
_Script_UMG::Image*& _Game_Interface_Customization_Cosmetics_UI_CosmeticItem::UI_CosmeticItem_C::get_RarityBG() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x280);
}
_Script_UMG::Image*& _Game_Interface_Customization_Cosmetics_UI_CosmeticItem::UI_CosmeticItem_C::get_Thumbnail() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x290);
}
_Script_UMG::Image*& _Game_Interface_Customization_Cosmetics_UI_CosmeticItem::UI_CosmeticItem_C::get_SelectedImage() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x288);
}
void _Game_Interface_Customization_Cosmetics_UI_CosmeticItem::UI_CosmeticItem_C::Item_OnUnhovered__DelegateSignature(int32_t Item_ID) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_CosmeticItem::UI_CosmeticItem_C::UpdateEnabled() {
    return;
}
_Game_Interface_Customization_Cosmetics_UI_CosmeticSelectionGrid::UI_CosmeticSelectionGrid_C*& _Game_Interface_Customization_Cosmetics_UI_CosmeticItem::UI_CosmeticItem_C::get_Parent() {
    return *(_Game_Interface_Customization_Cosmetics_UI_CosmeticSelectionGrid::UI_CosmeticSelectionGrid_C**)((uintptr_t)this + 0x298);
}
int32_t& _Game_Interface_Customization_Cosmetics_UI_CosmeticItem::UI_CosmeticItem_C::get_ItemId() {
    return *(int32_t*)((uintptr_t)this + 0x2a0);
}
void* _Game_Interface_Customization_Cosmetics_UI_CosmeticItem::UI_CosmeticItem_C::get_Item_OnHovered() {
    return (void*)((uintptr_t)this + 0x2a8);
}
void* _Game_Interface_Customization_Cosmetics_UI_CosmeticItem::UI_CosmeticItem_C::get_Item_OnUnhovered() {
    return (void*)((uintptr_t)this + 0x2b8);
}
void* _Game_Interface_Customization_Cosmetics_UI_CosmeticItem::UI_CosmeticItem_C::get_Item_OnReleased() {
    return (void*)((uintptr_t)this + 0x2c8);
}
bool _Game_Interface_Customization_Cosmetics_UI_CosmeticItem::UI_CosmeticItem_C::get_Equipped() {
    return (*(uint8_t*)((uintptr_t)this + 0x2d8 + 0)) & 1 != 0;
}
void _Game_Interface_Customization_Cosmetics_UI_CosmeticItem::UI_CosmeticItem_C::set_Equipped(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2d8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2d8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Interface_Customization_Cosmetics_UI_CosmeticItem::UI_CosmeticItem_C::get_DefaultStyle() {
    return (void*)((uintptr_t)this + 0x2e0);
}
void* _Game_Interface_Customization_Cosmetics_UI_CosmeticItem::UI_CosmeticItem_C::get_SilentSound() {
    return (void*)((uintptr_t)this + 0x558);
}
_Script_CoreUObject::Class* _Game_Interface_Customization_Cosmetics_UI_CosmeticItem::UI_CosmeticItem_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/Customization/Cosmetics/UI_CosmeticItem.UI_CosmeticItem_C");
    return result;
}
bool _Game_Interface_Customization_Cosmetics_UI_CosmeticItem::UI_CosmeticItem_C::ShouldForceType(void*& Type) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_CosmeticItem::UI_CosmeticItem_C::BndEvt__UI_N_CosmeticItem_Button_92_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_CosmeticItem::UI_CosmeticItem_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_CosmeticItem::UI_CosmeticItem_C::Item_OnHovered__DelegateSignature(int32_t Item_ID) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_CosmeticItem::UI_CosmeticItem_C::Construct0() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_CosmeticItem::UI_CosmeticItem_C::SetEquipStatus(bool Status) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_CosmeticItem::UI_CosmeticItem_C::ExecuteUbergraph_UI_CosmeticItem(int32_t EntryPoint) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_CosmeticItem::UI_CosmeticItem_C::Item_OnReleased__DelegateSignature(int32_t Item_ID, _Game_Interface_Customization_Cosmetics_UI_CosmeticItem::UI_CosmeticItem_C* Caller) {
    return;
}
