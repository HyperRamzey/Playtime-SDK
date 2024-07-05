#include "..\FUObjectArray.hpp"
#include "UI_SabotageSlot_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Border.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\Overlay.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void* _Game_Interface_Customization_Sabotages_UI_SabotageSlot::UI_SabotageSlot_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::Button*& _Game_Interface_Customization_Sabotages_UI_SabotageSlot::UI_SabotageSlot_C::get_Button_97() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x270);
}
_Script_UMG::Border*& _Game_Interface_Customization_Sabotages_UI_SabotageSlot::UI_SabotageSlot_C::get_Border_40() {
    return *(_Script_UMG::Border**)((uintptr_t)this + 0x268);
}
_Script_UMG::Overlay*& _Game_Interface_Customization_Sabotages_UI_SabotageSlot::UI_SabotageSlot_C::get_LevelBullshit() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x278);
}
_Script_UMG::Image*& _Game_Interface_Customization_Sabotages_UI_SabotageSlot::UI_SabotageSlot_C::get_SabIcon() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x298);
}
_Script_UMG::Image*& _Game_Interface_Customization_Sabotages_UI_SabotageSlot::UI_SabotageSlot_C::get_LevelContainer() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x280);
}
_Script_UMG::TextBlock*& _Game_Interface_Customization_Sabotages_UI_SabotageSlot::UI_SabotageSlot_C::get_LevelLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x288);
}
_Script_UMG::Image*& _Game_Interface_Customization_Sabotages_UI_SabotageSlot::UI_SabotageSlot_C::get_SabBG() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x290);
}
bool _Game_Interface_Customization_Sabotages_UI_SabotageSlot::UI_SabotageSlot_C::get_bIsSelected() {
    return (*(uint8_t*)((uintptr_t)this + 0x2a0 + 0)) & 1 != 0;
}
void _Game_Interface_Customization_Sabotages_UI_SabotageSlot::UI_SabotageSlot_C::set_bIsSelected(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2a0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2a0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Interface_Customization_Sabotages_UI_SabotageSlot::UI_SabotageSlot_C::get_SabSlotSelected() {
    return (void*)((uintptr_t)this + 0x2a8);
}
void* _Game_Interface_Customization_Sabotages_UI_SabotageSlot::UI_SabotageSlot_C::get_Selected_Sabotage() {
    return (void*)((uintptr_t)this + 0x2b8);
}
_Script_CoreUObject::Class* _Game_Interface_Customization_Sabotages_UI_SabotageSlot::UI_SabotageSlot_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/Customization/Sabotages/UI_SabotageSlot.UI_SabotageSlot_C");
    return result;
}
void _Game_Interface_Customization_Sabotages_UI_SabotageSlot::UI_SabotageSlot_C::EquipSabotage(void* SelectedSabotage, bool EquipSuccess, void*& Perk_Inventory) {
    return;
}
void _Game_Interface_Customization_Sabotages_UI_SabotageSlot::UI_SabotageSlot_C::ClearSlot() {
    return;
}
void _Game_Interface_Customization_Sabotages_UI_SabotageSlot::UI_SabotageSlot_C::ExecuteUbergraph_UI_SabotageSlot(int32_t EntryPoint) {
    return;
}
void _Game_Interface_Customization_Sabotages_UI_SabotageSlot::UI_SabotageSlot_C::SabSlotSelected__DelegateSignature(_Game_Interface_Customization_Sabotages_UI_SabotageSlot::UI_SabotageSlot_C* Slot) {
    return;
}
