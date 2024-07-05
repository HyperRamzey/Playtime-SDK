#include "..\FUObjectArray.hpp"
#include "UI_SelectablePerk_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Border.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\Overlay.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
_Script_UMG::TextBlock*& _Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C::get_LevelText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x298);
}
bool _Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C::get_Active() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e1 + 0)) & 1 != 0;
}
void* _Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::Image*& _Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C::get_LevelBG() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x290);
}
_Script_UMG::Border*& _Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C::get_Border_0() {
    return *(_Script_UMG::Border**)((uintptr_t)this + 0x278);
}
void _Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C::PreConstruct0(bool IsDesignTime) {
    return;
}
_Script_UMG::WidgetAnimation*& _Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C::get_Highlight() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
_Script_UMG::Image*& _Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C::get_ActiveBG() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x270);
}
_Script_UMG::Image*& _Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C::get_CheckIcon() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x280);
}
_Script_UMG::Image*& _Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C::get_Icon() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x288);
}
_Script_UMG::Image*& _Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C::get_lockStatusIcon() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2a0);
}
_Script_UMG::Button*& _Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C::get_PerkButton() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x2a8);
}
void _Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C::PerkButtonReleased__DelegateSignature(void* Type) {
    return;
}
_Script_UMG::Image*& _Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C::get_SelectedBG() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2b0);
}
_Script_UMG::Overlay*& _Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C::get_SelectedContainer() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x2b8);
}
void _Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C::set_Selected(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C::get_Unlocked() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c0 + 0)) & 1 != 0;
}
void _Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C::set_Unlocked(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C::get_Level() {
    return *(int32_t*)((uintptr_t)this + 0x2c4);
}
void* _Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C::get_Perk() {
    return (void*)((uintptr_t)this + 0x2c8);
}
bool _Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C::get_EditorPreviewUnlocked() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e3 + 0)) & 1 != 0;
}
void* _Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C::get_PerkButtonReleased() {
    return (void*)((uintptr_t)this + 0x2d0);
}
bool _Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C::get_Selected() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e0 + 0)) & 1 != 0;
}
void _Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C::set_Active(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C::get_EditorPreviewActive() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e2 + 0)) & 1 != 0;
}
void _Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C::set_EditorPreviewActive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C::set_EditorPreviewUnlocked(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e3 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C::get_EditorPreviewLevel() {
    return *(int32_t*)((uintptr_t)this + 0x2e4);
}
bool _Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C::get_NewVar_0() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e8 + 0)) & 1 != 0;
}
void _Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C::set_NewVar_0(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/Customization/Perks/UI_SelectablePerk.UI_SelectablePerk_C");
    return result;
}
void _Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C::BndEvt__UI_SelectablePerk_TheButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C::Update_Visuals(bool Active, int32_t Level, bool Unlocked) {
    return;
}
void _Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C::Select() {
    return;
}
void _Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C::Deselect() {
    return;
}
void _Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C::MarkEquipped(bool Equipped) {
    return;
}
void _Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C::BndEvt__UI_SelectablePerk_PerkButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C::BndEvt__UI_SelectablePerk_PerkButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Perks_UI_SelectablePerk::UI_SelectablePerk_C::ExecuteUbergraph_UI_SelectablePerk(int32_t EntryPoint) {
    return;
}
