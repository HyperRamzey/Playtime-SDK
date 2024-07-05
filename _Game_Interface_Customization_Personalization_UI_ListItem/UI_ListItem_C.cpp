#include "..\FUObjectArray.hpp"
#include "UI_ListItem_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void* _Game_Interface_Customization_Personalization_UI_ListItem::UI_ListItem_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
void* _Game_Interface_Customization_Personalization_UI_ListItem::UI_ListItem_C::get_ScreenItemSelected() {
    return (void*)((uintptr_t)this + 0x2b8);
}
_Script_UMG::Image*& _Game_Interface_Customization_Personalization_UI_ListItem::UI_ListItem_C::get_CheckBox() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x268);
}
_Script_UMG::TextBlock*& _Game_Interface_Customization_Personalization_UI_ListItem::UI_ListItem_C::get_DisplayName() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x270);
}
_Script_UMG::Button*& _Game_Interface_Customization_Personalization_UI_ListItem::UI_ListItem_C::get_ScreenPreviewHover() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x278);
}
void* _Game_Interface_Customization_Personalization_UI_ListItem::UI_ListItem_C::get_ScreenItemUnHovered() {
    return (void*)((uintptr_t)this + 0x2a8);
}
void* _Game_Interface_Customization_Personalization_UI_ListItem::UI_ListItem_C::get_Name() {
    return (void*)((uintptr_t)this + 0x280);
}
void* _Game_Interface_Customization_Personalization_UI_ListItem::UI_ListItem_C::get_ScreenItemHovered() {
    return (void*)((uintptr_t)this + 0x298);
}
int32_t& _Game_Interface_Customization_Personalization_UI_ListItem::UI_ListItem_C::get_MyID() {
    return *(int32_t*)((uintptr_t)this + 0x2c8);
}
bool _Game_Interface_Customization_Personalization_UI_ListItem::UI_ListItem_C::get_IsEquipped() {
    return (*(uint8_t*)((uintptr_t)this + 0x2cc + 0)) & 1 != 0;
}
void _Game_Interface_Customization_Personalization_UI_ListItem::UI_ListItem_C::set_IsEquipped(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2cc + 0);
    *(uint8_t*)((uintptr_t)this + 0x2cc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Interface_Customization_Personalization_UI_ListItem::UI_ListItem_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/Customization/Personalization/UI_ListItem.UI_ListItem_C");
    return result;
}
void _Game_Interface_Customization_Personalization_UI_ListItem::UI_ListItem_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_Customization_Personalization_UI_ListItem::UI_ListItem_C::Construct0() {
    return;
}
void _Game_Interface_Customization_Personalization_UI_ListItem::UI_ListItem_C::BndEvt__UI_ScreenItem_ScreenPreviewHover_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Personalization_UI_ListItem::UI_ListItem_C::BndEvt__UI_ScreenItem_ScreenPreviewHover_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Personalization_UI_ListItem::UI_ListItem_C::SetSelected(bool Selected) {
    return;
}
void _Game_Interface_Customization_Personalization_UI_ListItem::UI_ListItem_C::BndEvt__UI_ListItem_ScreenPreviewHover_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Personalization_UI_ListItem::UI_ListItem_C::ExecuteUbergraph_UI_ListItem(int32_t EntryPoint) {
    return;
}
void _Game_Interface_Customization_Personalization_UI_ListItem::UI_ListItem_C::ScreenItemSelected__DelegateSignature(int32_t ID) {
    return;
}
void _Game_Interface_Customization_Personalization_UI_ListItem::UI_ListItem_C::ScreenItemUnHovered__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Personalization_UI_ListItem::UI_ListItem_C::ScreenItemHovered__DelegateSignature() {
    return;
}
