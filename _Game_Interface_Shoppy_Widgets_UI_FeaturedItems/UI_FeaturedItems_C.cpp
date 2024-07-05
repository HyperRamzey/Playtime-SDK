#include "..\FUObjectArray.hpp"
#include "..\_Game_Interface_Shoppy_Widgets_UI_BundleCard\UI_BundleCard_C.hpp"
#include "UI_FeaturedItems_C.hpp"
#include "..\_Game_Interface_Shoppy_Widgets_UI_TeaserButton\UI_TeaserButton_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_UMG\SizeBox.hpp"
#include "..\_Script_UMG\UniformGridPanel.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\VerticalBox.hpp"
_Script_UMG::VerticalBox*& _Game_Interface_Shoppy_Widgets_UI_FeaturedItems::UI_FeaturedItems_C::get_BundleTeaserContainer() {
    return *(_Script_UMG::VerticalBox**)((uintptr_t)this + 0x268);
}
_Game_Interface_Shoppy_Widgets_UI_BundleCard::UI_BundleCard_C*& _Game_Interface_Shoppy_Widgets_UI_FeaturedItems::UI_FeaturedItems_C::get_UI_BundleCard() {
    return *(_Game_Interface_Shoppy_Widgets_UI_BundleCard::UI_BundleCard_C**)((uintptr_t)this + 0x280);
}
_Script_UMG::VerticalBox*& _Game_Interface_Shoppy_Widgets_UI_FeaturedItems::UI_FeaturedItems_C::get_NewItemsContainer() {
    return *(_Script_UMG::VerticalBox**)((uintptr_t)this + 0x270);
}
void _Game_Interface_Shoppy_Widgets_UI_FeaturedItems::UI_FeaturedItems_C::OnInitialized0() {
    return;
}
void* _Game_Interface_Shoppy_Widgets_UI_FeaturedItems::UI_FeaturedItems_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::UniformGridPanel*& _Game_Interface_Shoppy_Widgets_UI_FeaturedItems::UI_FeaturedItems_C::get_SaleItemsContainer() {
    return *(_Script_UMG::UniformGridPanel**)((uintptr_t)this + 0x278);
}
_Game_Interface_Shoppy_Widgets_UI_TeaserButton::UI_TeaserButton_C*& _Game_Interface_Shoppy_Widgets_UI_FeaturedItems::UI_FeaturedItems_C::get_UI_TeaserButton() {
    return *(_Game_Interface_Shoppy_Widgets_UI_TeaserButton::UI_TeaserButton_C**)((uintptr_t)this + 0x288);
}
void _Game_Interface_Shoppy_Widgets_UI_FeaturedItems::UI_FeaturedItems_C::OnLoaded_0F6CBBA74BEF4047D9A8A38E90A182E9(_Script_CoreUObject::Object* Loaded) {
    return;
}
float& _Game_Interface_Shoppy_Widgets_UI_FeaturedItems::UI_FeaturedItems_C::get_BundleTop() {
    return *(float*)((uintptr_t)this + 0x290);
}
float& _Game_Interface_Shoppy_Widgets_UI_FeaturedItems::UI_FeaturedItems_C::get_BundleBottom() {
    return *(float*)((uintptr_t)this + 0x294);
}
float& _Game_Interface_Shoppy_Widgets_UI_FeaturedItems::UI_FeaturedItems_C::get_TeaserTop() {
    return *(float*)((uintptr_t)this + 0x298);
}
float& _Game_Interface_Shoppy_Widgets_UI_FeaturedItems::UI_FeaturedItems_C::get_TeaserBottom() {
    return *(float*)((uintptr_t)this + 0x29c);
}
void* _Game_Interface_Shoppy_Widgets_UI_FeaturedItems::UI_FeaturedItems_C::get_OnFeaturedItemSelected() {
    return (void*)((uintptr_t)this + 0x2a0);
}
void* _Game_Interface_Shoppy_Widgets_UI_FeaturedItems::UI_FeaturedItems_C::get_ShowBundleInfo() {
    return (void*)((uintptr_t)this + 0x2b0);
}
void* _Game_Interface_Shoppy_Widgets_UI_FeaturedItems::UI_FeaturedItems_C::get_FeaturedItems() {
    return (void*)((uintptr_t)this + 0x2c0);
}
void* _Game_Interface_Shoppy_Widgets_UI_FeaturedItems::UI_FeaturedItems_C::get_BundleItems() {
    return (void*)((uintptr_t)this + 0x2d0);
}
void _Game_Interface_Shoppy_Widgets_UI_FeaturedItems::UI_FeaturedItems_C::ShowBundleInfo__DelegateSignature() {
    return;
}
void* _Game_Interface_Shoppy_Widgets_UI_FeaturedItems::UI_FeaturedItems_C::get_SaleItems() {
    return (void*)((uintptr_t)this + 0x2e0);
}
int32_t& _Game_Interface_Shoppy_Widgets_UI_FeaturedItems::UI_FeaturedItems_C::get_BundleId() {
    return *(int32_t*)((uintptr_t)this + 0x2f0);
}
void* _Game_Interface_Shoppy_Widgets_UI_FeaturedItems::UI_FeaturedItems_C::get_OnBundleSelected() {
    return (void*)((uintptr_t)this + 0x2f8);
}
_Script_CoreUObject::Class* _Game_Interface_Shoppy_Widgets_UI_FeaturedItems::UI_FeaturedItems_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/Shoppy/Widgets/UI_FeaturedItems.UI_FeaturedItems_C");
    return result;
}
void _Game_Interface_Shoppy_Widgets_UI_FeaturedItems::UI_FeaturedItems_C::OnFeaturedItemSelected__DelegateSignature(void* Name, int32_t PlayCoinPrice, int32_t TicketPrice, int32_t ID) {
    return;
}
_Script_UMG::SizeBox* _Game_Interface_Shoppy_Widgets_UI_FeaturedItems::UI_FeaturedItems_C::CreateSizeBox(float InMaxDesiredSize) {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_FeaturedItems::UI_FeaturedItems_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_FeaturedItems::UI_FeaturedItems_C::FeaturedItemSelected(void* Name, int32_t PlayCoinPrice, int32_t TicketPrice, int32_t ID) {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_FeaturedItems::UI_FeaturedItems_C::GenerateFeaturedItems() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_FeaturedItems::UI_FeaturedItems_C::BndEvt__UI_FeaturedItems_UI_TeaserButton_K2Node_ComponentBoundEvent_0_TeaserButtonPressed__DelegateSignature() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_FeaturedItems::UI_FeaturedItems_C::BndEvt__UI_FeaturedItems_UI_BundleCard_K2Node_ComponentBoundEvent_1_BundleCardPressed__DelegateSignature() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_FeaturedItems::UI_FeaturedItems_C::OnShoppySuccess(void*& Shoppy) {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_FeaturedItems::UI_FeaturedItems_C::OnShoppyFailure(void* ErrorMessage) {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_FeaturedItems::UI_FeaturedItems_C::ExecuteUbergraph_UI_FeaturedItems(int32_t EntryPoint) {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_FeaturedItems::UI_FeaturedItems_C::OnBundleSelected__DelegateSignature(int32_t BundleId) {
    return;
}
