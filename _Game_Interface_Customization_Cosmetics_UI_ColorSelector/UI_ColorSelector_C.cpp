#include "..\FUObjectArray.hpp"
#include "..\_Game_Interface_Customization_Cosmetics_UI_ColorItem\UI_ColorItem_C.hpp"
#include "UI_ColorSelector_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UniformGridPanel.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void* _Game_Interface_Customization_Cosmetics_UI_ColorSelector::UI_ColorSelector_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::UniformGridPanel*& _Game_Interface_Customization_Cosmetics_UI_ColorSelector::UI_ColorSelector_C::get_ColorGrid() {
    return *(_Script_UMG::UniformGridPanel**)((uintptr_t)this + 0x268);
}
_Script_UMG::Image*& _Game_Interface_Customization_Cosmetics_UI_ColorSelector::UI_ColorSelector_C::get_Image_331() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x270);
}
int32_t& _Game_Interface_Customization_Cosmetics_UI_ColorSelector::UI_ColorSelector_C::get_Int() {
    return *(int32_t*)((uintptr_t)this + 0x278);
}
void _Game_Interface_Customization_Cosmetics_UI_ColorSelector::UI_ColorSelector_C::Construct0() {
    return;
}
_Script_CoreUObject::Class* _Game_Interface_Customization_Cosmetics_UI_ColorSelector::UI_ColorSelector_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/Customization/Cosmetics/UI_ColorSelector.UI_ColorSelector_C");
    return result;
}
void* _Game_Interface_Customization_Cosmetics_UI_ColorSelector::UI_ColorSelector_C::get_ColorSelectedMenu() {
    return (void*)((uintptr_t)this + 0x280);
}
void _Game_Interface_Customization_Cosmetics_UI_ColorSelector::UI_ColorSelector_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_ColorSelector::UI_ColorSelector_C::PopulateColorMenu(void*& Colors) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_ColorSelector::UI_ColorSelector_C::ColorSelectedMenu_Event(int32_t ColorIndex, _Game_Interface_Customization_Cosmetics_UI_ColorItem::UI_ColorItem_C* SelectedColor) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_ColorSelector::UI_ColorSelector_C::ColorSelectedMenu__DelegateSignature(int32_t ColorIndex, _Game_Interface_Customization_Cosmetics_UI_ColorItem::UI_ColorItem_C* SelectedColor) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_ColorSelector::UI_ColorSelector_C::ExecuteUbergraph_UI_ColorSelector(int32_t EntryPoint) {
    return;
}
