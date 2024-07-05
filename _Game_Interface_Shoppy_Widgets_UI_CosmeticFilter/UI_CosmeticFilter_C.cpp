#include "..\FUObjectArray.hpp"
#include "UI_CosmeticFilter_C.hpp"
#include "..\_Game_Interface_Shoppy_Widgets_UI_FilterButton\UI_FilterButton_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void* _Game_Interface_Shoppy_Widgets_UI_CosmeticFilter::UI_CosmeticFilter_C::get_FilterButtons() {
    return (void*)((uintptr_t)this + 0x288);
}
void* _Game_Interface_Shoppy_Widgets_UI_CosmeticFilter::UI_CosmeticFilter_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::Image*& _Game_Interface_Shoppy_Widgets_UI_CosmeticFilter::UI_CosmeticFilter_C::get_FilterBackground() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x270);
}
_Game_Interface_Shoppy_Widgets_UI_FilterButton::UI_FilterButton_C*& _Game_Interface_Shoppy_Widgets_UI_CosmeticFilter::UI_CosmeticFilter_C::get_AlphabeticalFilterButton() {
    return *(_Game_Interface_Shoppy_Widgets_UI_FilterButton::UI_FilterButton_C**)((uintptr_t)this + 0x268);
}
_Game_Interface_Shoppy_Widgets_UI_FilterButton::UI_FilterButton_C*& _Game_Interface_Shoppy_Widgets_UI_CosmeticFilter::UI_CosmeticFilter_C::get_NewestFilterButton() {
    return *(_Game_Interface_Shoppy_Widgets_UI_FilterButton::UI_FilterButton_C**)((uintptr_t)this + 0x278);
}
_Game_Interface_Shoppy_Widgets_UI_FilterButton::UI_FilterButton_C*& _Game_Interface_Shoppy_Widgets_UI_CosmeticFilter::UI_CosmeticFilter_C::get_RarityFilterButton() {
    return *(_Game_Interface_Shoppy_Widgets_UI_FilterButton::UI_FilterButton_C**)((uintptr_t)this + 0x280);
}
void* _Game_Interface_Shoppy_Widgets_UI_CosmeticFilter::UI_CosmeticFilter_C::get_FilterItems() {
    return (void*)((uintptr_t)this + 0x298);
}
void _Game_Interface_Shoppy_Widgets_UI_CosmeticFilter::UI_CosmeticFilter_C::ExecuteUbergraph_UI_CosmeticFilter(int32_t EntryPoint) {
    return;
}
_Script_CoreUObject::Class* _Game_Interface_Shoppy_Widgets_UI_CosmeticFilter::UI_CosmeticFilter_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/Shoppy/Widgets/UI_CosmeticFilter.UI_CosmeticFilter_C");
    return result;
}
void _Game_Interface_Shoppy_Widgets_UI_CosmeticFilter::UI_CosmeticFilter_C::SetActiveFilter(_Game_Interface_Shoppy_Widgets_UI_FilterButton::UI_FilterButton_C* ObjectReference, void* Filter) {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_CosmeticFilter::UI_CosmeticFilter_C::OnInitialized0() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_CosmeticFilter::UI_CosmeticFilter_C::FilterItems__DelegateSignature(void* Filter) {
    return;
}
