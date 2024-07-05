#include "..\FUObjectArray.hpp"
#include "UI_ColorItem_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void _Game_Interface_Customization_Cosmetics_UI_ColorItem::UI_ColorItem_C::Construct0() {
    return;
}
void* _Game_Interface_Customization_Cosmetics_UI_ColorItem::UI_ColorItem_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::Button*& _Game_Interface_Customization_Cosmetics_UI_ColorItem::UI_ColorItem_C::get_Button_53() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x268);
}
int32_t& _Game_Interface_Customization_Cosmetics_UI_ColorItem::UI_ColorItem_C::get_ColorIndex() {
    return *(int32_t*)((uintptr_t)this + 0x298);
}
_Script_UMG::Image*& _Game_Interface_Customization_Cosmetics_UI_ColorItem::UI_ColorItem_C::get_Check() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x270);
}
void* _Game_Interface_Customization_Cosmetics_UI_ColorItem::UI_ColorItem_C::get_Color() {
    return (void*)((uintptr_t)this + 0x278);
}
void* _Game_Interface_Customization_Cosmetics_UI_ColorItem::UI_ColorItem_C::get_ColorSelectedItem() {
    return (void*)((uintptr_t)this + 0x288);
}
_Script_CoreUObject::Class* _Game_Interface_Customization_Cosmetics_UI_ColorItem::UI_ColorItem_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/Customization/Cosmetics/UI_ColorItem.UI_ColorItem_C");
    return result;
}
void _Game_Interface_Customization_Cosmetics_UI_ColorItem::UI_ColorItem_C::BndEvt__UI_ColorItem_Button_53_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_ColorItem::UI_ColorItem_C::IsSelected(bool Selected) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_ColorItem::UI_ColorItem_C::ExecuteUbergraph_UI_ColorItem(int32_t EntryPoint) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_ColorItem::UI_ColorItem_C::ColorSelectedItem__DelegateSignature(int32_t ColorIndex, _Game_Interface_Customization_Cosmetics_UI_ColorItem::UI_ColorItem_C* SelectedColor) {
    return;
}
