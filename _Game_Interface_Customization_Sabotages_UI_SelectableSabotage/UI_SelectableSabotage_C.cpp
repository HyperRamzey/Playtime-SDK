#include "..\FUObjectArray.hpp"
#include "UI_SelectableSabotage_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Border.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void* _Game_Interface_Customization_Sabotages_UI_SelectableSabotage::UI_SelectableSabotage_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::Image*& _Game_Interface_Customization_Sabotages_UI_SelectableSabotage::UI_SelectableSabotage_C::get_ActiveBG() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x268);
}
_Script_UMG::Border*& _Game_Interface_Customization_Sabotages_UI_SelectableSabotage::UI_SelectableSabotage_C::get_Border_0() {
    return *(_Script_UMG::Border**)((uintptr_t)this + 0x270);
}
void _Game_Interface_Customization_Sabotages_UI_SelectableSabotage::UI_SelectableSabotage_C::set_EditorPreviewUnlocked(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2d8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2d8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_UMG::Image*& _Game_Interface_Customization_Sabotages_UI_SelectableSabotage::UI_SelectableSabotage_C::get_CheckIcon() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x278);
}
_Script_UMG::Image*& _Game_Interface_Customization_Sabotages_UI_SelectableSabotage::UI_SelectableSabotage_C::get_LevelBG() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x288);
}
int32_t& _Game_Interface_Customization_Sabotages_UI_SelectableSabotage::UI_SelectableSabotage_C::get_Level() {
    return *(int32_t*)((uintptr_t)this + 0x2b4);
}
_Script_UMG::Image*& _Game_Interface_Customization_Sabotages_UI_SelectableSabotage::UI_SelectableSabotage_C::get_Icon() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x280);
}
void _Game_Interface_Customization_Sabotages_UI_SelectableSabotage::UI_SelectableSabotage_C::BndEvt__UI_SelectableSabotage_SabButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() {
    return;
}
_Script_UMG::TextBlock*& _Game_Interface_Customization_Sabotages_UI_SelectableSabotage::UI_SelectableSabotage_C::get_LevelText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x290);
}
void _Game_Interface_Customization_Sabotages_UI_SelectableSabotage::UI_SelectableSabotage_C::BndEvt__UI_SelectableSabotage_SabButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
_Script_UMG::Image*& _Game_Interface_Customization_Sabotages_UI_SelectableSabotage::UI_SelectableSabotage_C::get_lockStatusIcon() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x298);
}
_Script_UMG::Button*& _Game_Interface_Customization_Sabotages_UI_SelectableSabotage::UI_SelectableSabotage_C::get_SabButton() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x2a0);
}
_Script_UMG::Image*& _Game_Interface_Customization_Sabotages_UI_SelectableSabotage::UI_SelectableSabotage_C::get_SelectedBG() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2a8);
}
bool _Game_Interface_Customization_Sabotages_UI_SelectableSabotage::UI_SelectableSabotage_C::get_Unlocked() {
    return (*(uint8_t*)((uintptr_t)this + 0x2b0 + 0)) & 1 != 0;
}
bool _Game_Interface_Customization_Sabotages_UI_SelectableSabotage::UI_SelectableSabotage_C::get_Active() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c9 + 0)) & 1 != 0;
}
void _Game_Interface_Customization_Sabotages_UI_SelectableSabotage::UI_SelectableSabotage_C::set_Unlocked(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2b0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2b0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Interface_Customization_Sabotages_UI_SelectableSabotage::UI_SelectableSabotage_C::get_SabotageButtonReleased() {
    return (void*)((uintptr_t)this + 0x2b8);
}
bool _Game_Interface_Customization_Sabotages_UI_SelectableSabotage::UI_SelectableSabotage_C::get_Selected() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c8 + 0)) & 1 != 0;
}
void _Game_Interface_Customization_Sabotages_UI_SelectableSabotage::UI_SelectableSabotage_C::set_Selected(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Interface_Customization_Sabotages_UI_SelectableSabotage::UI_SelectableSabotage_C::ExecuteUbergraph_UI_SelectableSabotage(int32_t EntryPoint) {
    return;
}
void _Game_Interface_Customization_Sabotages_UI_SelectableSabotage::UI_SelectableSabotage_C::set_Active(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Interface_Customization_Sabotages_UI_SelectableSabotage::UI_SelectableSabotage_C::get_Sabotage() {
    return (void*)((uintptr_t)this + 0x2cc);
}
int32_t& _Game_Interface_Customization_Sabotages_UI_SelectableSabotage::UI_SelectableSabotage_C::get_EditorPreviewLevel() {
    return *(int32_t*)((uintptr_t)this + 0x2d4);
}
bool _Game_Interface_Customization_Sabotages_UI_SelectableSabotage::UI_SelectableSabotage_C::get_EditorPreviewUnlocked() {
    return (*(uint8_t*)((uintptr_t)this + 0x2d8 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Game_Interface_Customization_Sabotages_UI_SelectableSabotage::UI_SelectableSabotage_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/Customization/Sabotages/UI_SelectableSabotage.UI_SelectableSabotage_C");
    return result;
}
void _Game_Interface_Customization_Sabotages_UI_SelectableSabotage::UI_SelectableSabotage_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_Customization_Sabotages_UI_SelectableSabotage::UI_SelectableSabotage_C::Update_Visuals(int32_t Level, bool Unlocked, bool Active) {
    return;
}
void _Game_Interface_Customization_Sabotages_UI_SelectableSabotage::UI_SelectableSabotage_C::Select() {
    return;
}
void _Game_Interface_Customization_Sabotages_UI_SelectableSabotage::UI_SelectableSabotage_C::Deselect() {
    return;
}
void _Game_Interface_Customization_Sabotages_UI_SelectableSabotage::UI_SelectableSabotage_C::BndEvt__UI_SelectableSabotage_SabButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Sabotages_UI_SelectableSabotage::UI_SelectableSabotage_C::SabotageButtonReleased__DelegateSignature(void* Type) {
    return;
}
