#include "..\FUObjectArray.hpp"
#include "..\_Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab\UI_CosmeticCatalogTab_C.hpp"
#include "..\_Game_Interface_Shoppy_Widgets_UI_CosmeticFilter\UI_CosmeticFilter_C.hpp"
#include "UI_FilterTab_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void* _Game_Interface_Shoppy_Widgets_UI_FilterTab::UI_FilterTab_C::get_Filter() {
    return (void*)((uintptr_t)this + 0x279);
}
void _Game_Interface_Shoppy_Widgets_UI_FilterTab::UI_FilterTab_C::BndEvt__UI_FilterTab_UI_CosmeticCatalogTab_K2Node_ComponentBoundEvent_0_ButtonRelease__DelegateSignature(_Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C* ObjectReference, void* ItemType, void* CosmeticType, void* SoundPackType) {
    return;
}
void* _Game_Interface_Shoppy_Widgets_UI_FilterTab::UI_FilterTab_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C*& _Game_Interface_Shoppy_Widgets_UI_FilterTab::UI_FilterTab_C::get_UI_CosmeticCatalogTab() {
    return *(_Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C**)((uintptr_t)this + 0x268);
}
_Game_Interface_Shoppy_Widgets_UI_CosmeticFilter::UI_CosmeticFilter_C*& _Game_Interface_Shoppy_Widgets_UI_FilterTab::UI_FilterTab_C::get_UI_CosmeticFilter() {
    return *(_Game_Interface_Shoppy_Widgets_UI_CosmeticFilter::UI_CosmeticFilter_C**)((uintptr_t)this + 0x270);
}
void _Game_Interface_Shoppy_Widgets_UI_FilterTab::UI_FilterTab_C::set_isFilterBoxOpen(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x278 + 0);
    *(uint8_t*)((uintptr_t)this + 0x278 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Interface_Shoppy_Widgets_UI_FilterTab::UI_FilterTab_C::get_ClosingFilter() {
    return (void*)((uintptr_t)this + 0x290);
}
bool _Game_Interface_Shoppy_Widgets_UI_FilterTab::UI_FilterTab_C::get_isFilterBoxOpen() {
    return (*(uint8_t*)((uintptr_t)this + 0x278 + 0)) & 1 != 0;
}
void* _Game_Interface_Shoppy_Widgets_UI_FilterTab::UI_FilterTab_C::get_OpeningFilter() {
    return (void*)((uintptr_t)this + 0x280);
}
_Script_CoreUObject::Class* _Game_Interface_Shoppy_Widgets_UI_FilterTab::UI_FilterTab_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/Shoppy/Widgets/UI_FilterTab.UI_FilterTab_C");
    return result;
}
void _Game_Interface_Shoppy_Widgets_UI_FilterTab::UI_FilterTab_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_FilterTab::UI_FilterTab_C::BndEvt__UI_FilterTab_UI_CosmeticFilter_K2Node_ComponentBoundEvent_1_FilterItems__DelegateSignature(void* Filter) {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_FilterTab::UI_FilterTab_C::CloseFilterBox() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_FilterTab::UI_FilterTab_C::OpenFilterBox() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_FilterTab::UI_FilterTab_C::ExecuteUbergraph_UI_FilterTab(int32_t EntryPoint) {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_FilterTab::UI_FilterTab_C::ClosingFilter__DelegateSignature() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_FilterTab::UI_FilterTab_C::OpeningFilter__DelegateSignature() {
    return;
}
