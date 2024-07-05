#include "..\FUObjectArray.hpp"
#include "UI_CosmeticPreviewItem_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void* _Game_Interface_Customization_Cosmetics_UI_CosmeticPreviewItem::UI_CosmeticPreviewItem_C::get_OnHoveredPreviewItem() {
    return (void*)((uintptr_t)this + 0x288);
}
void* _Game_Interface_Customization_Cosmetics_UI_CosmeticPreviewItem::UI_CosmeticPreviewItem_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::Image*& _Game_Interface_Customization_Cosmetics_UI_CosmeticPreviewItem::UI_CosmeticPreviewItem_C::get_ThumbnailBG() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x278);
}
_Script_UMG::Button*& _Game_Interface_Customization_Cosmetics_UI_CosmeticPreviewItem::UI_CosmeticPreviewItem_C::get_CosmeticPreviewButton() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x268);
}
_Script_UMG::Image*& _Game_Interface_Customization_Cosmetics_UI_CosmeticPreviewItem::UI_CosmeticPreviewItem_C::get_Thumbnail() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x270);
}
void _Game_Interface_Customization_Cosmetics_UI_CosmeticPreviewItem::UI_CosmeticPreviewItem_C::Construct0() {
    return;
}
void* _Game_Interface_Customization_Cosmetics_UI_CosmeticPreviewItem::UI_CosmeticPreviewItem_C::get_OnUnHoveredPreviewItem() {
    return (void*)((uintptr_t)this + 0x298);
}
int32_t& _Game_Interface_Customization_Cosmetics_UI_CosmeticPreviewItem::UI_CosmeticPreviewItem_C::get_Preview_Item_ID() {
    return *(int32_t*)((uintptr_t)this + 0x280);
}
void* _Game_Interface_Customization_Cosmetics_UI_CosmeticPreviewItem::UI_CosmeticPreviewItem_C::get_OnReleasedPreviewItem() {
    return (void*)((uintptr_t)this + 0x2a8);
}
_Script_CoreUObject::Class* _Game_Interface_Customization_Cosmetics_UI_CosmeticPreviewItem::UI_CosmeticPreviewItem_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/Customization/Cosmetics/UI_CosmeticPreviewItem.UI_CosmeticPreviewItem_C");
    return result;
}
void _Game_Interface_Customization_Cosmetics_UI_CosmeticPreviewItem::UI_CosmeticPreviewItem_C::BndEvt__UI_CosmeticPreviewItem_CosmeticPreviewButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_CosmeticPreviewItem::UI_CosmeticPreviewItem_C::BndEvt__UI_CosmeticPreviewItem_CosmeticPreviewButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_CosmeticPreviewItem::UI_CosmeticPreviewItem_C::OnHoveredPreviewItem__DelegateSignature(int32_t ItemId) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_CosmeticPreviewItem::UI_CosmeticPreviewItem_C::BndEvt__UI_CosmeticPreviewItem_CosmeticPreviewButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_CosmeticPreviewItem::UI_CosmeticPreviewItem_C::ExecuteUbergraph_UI_CosmeticPreviewItem(int32_t EntryPoint) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_CosmeticPreviewItem::UI_CosmeticPreviewItem_C::OnReleasedPreviewItem__DelegateSignature(int32_t ItemId) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_CosmeticPreviewItem::UI_CosmeticPreviewItem_C::OnUnHoveredPreviewItem__DelegateSignature() {
    return;
}
