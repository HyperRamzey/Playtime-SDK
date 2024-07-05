#include "..\FUObjectArray.hpp"
#include "UI_CosmeticCatalogTab_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Texture2D.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
_Script_Engine::Texture2D*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C::get_IconImage() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x2a0);
}
void* _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::Image*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C::get_Notification() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x288);
}
_Script_UMG::Image*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C::get_Icon() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x280);
}
void _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C::HideNotification() {
    return;
}
_Script_UMG::Image*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C::get_Frame() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x278);
}
_Script_UMG::Button*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C::get_Button_107() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x270);
}
_Script_UMG::Image*& _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C::get_Background() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x268);
}
void* _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C::get_ButtonRelease() {
    return (void*)((uintptr_t)this + 0x290);
}
void* _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C::get_Cosmetic_Type() {
    return (void*)((uintptr_t)this + 0x2a8);
}
void* _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C::get_SoundPackType() {
    return (void*)((uintptr_t)this + 0x2a9);
}
void* _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C::get_ItemType() {
    return (void*)((uintptr_t)this + 0x2aa);
}
bool _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C::get_Is_Active() {
    return (*(uint8_t*)((uintptr_t)this + 0x2ab + 0)) & 1 != 0;
}
void _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C::DeactivateTab() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C::set_Is_Active(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2ab + 0);
    *(uint8_t*)((uintptr_t)this + 0x2ab + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/Shoppy/Widgets/UI_CosmeticCatalogTab.UI_CosmeticCatalogTab_C");
    return result;
}
void _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C::BndEvt__UI_CosmeticCatalogTab_Button_107_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C::ActivateTab() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C::ShowNotification() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C::BndEvt__UI_CosmeticCatalogTab_Button_107_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C::BndEvt__UI_CosmeticCatalogTab_Button_107_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C::ExecuteUbergraph_UI_CosmeticCatalogTab(int32_t EntryPoint) {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C::ButtonRelease__DelegateSignature(_Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C* ObjectReference, void* ItemType, void* CosmeticType, void* SoundPackType) {
    return;
}
