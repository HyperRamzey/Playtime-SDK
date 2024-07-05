#include "..\FUObjectArray.hpp"
#include "UI_SoundPackSelection_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\VerticalBox.hpp"
#include "..\_Script_UMG\WidgetSwitcher.hpp"
bool _Game_Interface_Customization_Personalization_UI_SoundPackSelection::UI_SoundPackSelection_C::get_IsWallpaper() {
    return (*(uint8_t*)((uintptr_t)this + 0x279 + 0)) & 1 != 0;
}
_Script_UMG::VerticalBox*& _Game_Interface_Customization_Personalization_UI_SoundPackSelection::UI_SoundPackSelection_C::get_VerticalBox_88() {
    return *(_Script_UMG::VerticalBox**)((uintptr_t)this + 0x268);
}
void _Game_Interface_Customization_Personalization_UI_SoundPackSelection::UI_SoundPackSelection_C::SoundPacksRequestChangeText__DelegateSignature(void* Title) {
    return;
}
void* _Game_Interface_Customization_Personalization_UI_SoundPackSelection::UI_SoundPackSelection_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
void* _Game_Interface_Customization_Personalization_UI_SoundPackSelection::UI_SoundPackSelection_C::get_SoundPacksRequestChangeText() {
    return (void*)((uintptr_t)this + 0x280);
}
_Script_UMG::WidgetSwitcher*& _Game_Interface_Customization_Personalization_UI_SoundPackSelection::UI_SoundPackSelection_C::get_WidgetSwitcher_0() {
    return *(_Script_UMG::WidgetSwitcher**)((uintptr_t)this + 0x270);
}
void* _Game_Interface_Customization_Personalization_UI_SoundPackSelection::UI_SoundPackSelection_C::get_Sound_Pack_Type() {
    return (void*)((uintptr_t)this + 0x278);
}
void _Game_Interface_Customization_Personalization_UI_SoundPackSelection::UI_SoundPackSelection_C::set_IsWallpaper(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x279 + 0);
    *(uint8_t*)((uintptr_t)this + 0x279 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Interface_Customization_Personalization_UI_SoundPackSelection::UI_SoundPackSelection_C::get_IsSurvivor() {
    return (*(uint8_t*)((uintptr_t)this + 0x290 + 0)) & 1 != 0;
}
void _Game_Interface_Customization_Personalization_UI_SoundPackSelection::UI_SoundPackSelection_C::set_IsSurvivor(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x290 + 0);
    *(uint8_t*)((uintptr_t)this + 0x290 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Interface_Customization_Personalization_UI_SoundPackSelection::UI_SoundPackSelection_C::get_SoundPacksOnChanged() {
    return (void*)((uintptr_t)this + 0x298);
}
void _Game_Interface_Customization_Personalization_UI_SoundPackSelection::UI_SoundPackSelection_C::FailedInventoryGet(void* ErrorMessage) {
    return;
}
_Script_CoreUObject::Class* _Game_Interface_Customization_Personalization_UI_SoundPackSelection::UI_SoundPackSelection_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/Customization/Personalization/UI_SoundPackSelection.UI_SoundPackSelection_C");
    return result;
}
void _Game_Interface_Customization_Personalization_UI_SoundPackSelection::UI_SoundPackSelection_C::SwitchCategory(void* SoundPackType) {
    return;
}
void _Game_Interface_Customization_Personalization_UI_SoundPackSelection::UI_SoundPackSelection_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_Customization_Personalization_UI_SoundPackSelection::UI_SoundPackSelection_C::Construct0() {
    return;
}
void _Game_Interface_Customization_Personalization_UI_SoundPackSelection::UI_SoundPackSelection_C::Clicked(int32_t ID) {
    return;
}
void _Game_Interface_Customization_Personalization_UI_SoundPackSelection::UI_SoundPackSelection_C::UpdateVisuals() {
    return;
}
void _Game_Interface_Customization_Personalization_UI_SoundPackSelection::UI_SoundPackSelection_C::SuccessfulInventoryGet(void*& Inventory) {
    return;
}
void _Game_Interface_Customization_Personalization_UI_SoundPackSelection::UI_SoundPackSelection_C::Populate(void*& Array) {
    return;
}
void _Game_Interface_Customization_Personalization_UI_SoundPackSelection::UI_SoundPackSelection_C::ExecuteUbergraph_UI_SoundPackSelection(int32_t EntryPoint) {
    return;
}
void _Game_Interface_Customization_Personalization_UI_SoundPackSelection::UI_SoundPackSelection_C::SoundPacksOnChanged__DelegateSignature(void* Type) {
    return;
}
