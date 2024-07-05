#include "..\FUObjectArray.hpp"
#include "UI_PerkSlot_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Texture2D.hpp"
#include "..\_Script_UMG\Border.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\Overlay.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void _Game_Interface_Customization_Perks_UI_PerkSlot::UI_PerkSlot_C::EquipPerk(void* Perk, bool EquipSuccess, void*& Perk_Inventory) {
    return;
}
_Script_UMG::Overlay*& _Game_Interface_Customization_Perks_UI_PerkSlot::UI_PerkSlot_C::get_LevelBullshit() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x278);
}
void* _Game_Interface_Customization_Perks_UI_PerkSlot::UI_PerkSlot_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::Border*& _Game_Interface_Customization_Perks_UI_PerkSlot::UI_PerkSlot_C::get_Border_40() {
    return *(_Script_UMG::Border**)((uintptr_t)this + 0x268);
}
_Script_UMG::Button*& _Game_Interface_Customization_Perks_UI_PerkSlot::UI_PerkSlot_C::get_Button_97() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x270);
}
_Script_UMG::Image*& _Game_Interface_Customization_Perks_UI_PerkSlot::UI_PerkSlot_C::get_LevelContainer() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x280);
}
_Script_UMG::TextBlock*& _Game_Interface_Customization_Perks_UI_PerkSlot::UI_PerkSlot_C::get_LevelLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x288);
}
_Script_UMG::Image*& _Game_Interface_Customization_Perks_UI_PerkSlot::UI_PerkSlot_C::get_PerkBG() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x290);
}
_Script_UMG::Image*& _Game_Interface_Customization_Perks_UI_PerkSlot::UI_PerkSlot_C::get_PerkIcon() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x298);
}
void* _Game_Interface_Customization_Perks_UI_PerkSlot::UI_PerkSlot_C::get_PerkSlotSelected() {
    return (void*)((uintptr_t)this + 0x2a0);
}
void* _Game_Interface_Customization_Perks_UI_PerkSlot::UI_PerkSlot_C::get_DefaultSlotStyle() {
    return (void*)((uintptr_t)this + 0x2b0);
}
void* _Game_Interface_Customization_Perks_UI_PerkSlot::UI_PerkSlot_C::get_MyPerk() {
    return (void*)((uintptr_t)this + 0x528);
}
bool _Game_Interface_Customization_Perks_UI_PerkSlot::UI_PerkSlot_C::get_bIsSelected() {
    return (*(uint8_t*)((uintptr_t)this + 0x529 + 0)) & 1 != 0;
}
void _Game_Interface_Customization_Perks_UI_PerkSlot::UI_PerkSlot_C::set_bIsSelected(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x529 + 0);
    *(uint8_t*)((uintptr_t)this + 0x529 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::Texture2D*& _Game_Interface_Customization_Perks_UI_PerkSlot::UI_PerkSlot_C::get_UnequippedBG() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x530);
}
_Script_Engine::Texture2D*& _Game_Interface_Customization_Perks_UI_PerkSlot::UI_PerkSlot_C::get_EquippedBG() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x538);
}
_Script_CoreUObject::Class* _Game_Interface_Customization_Perks_UI_PerkSlot::UI_PerkSlot_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/Customization/Perks/UI_PerkSlot.UI_PerkSlot_C");
    return result;
}
void _Game_Interface_Customization_Perks_UI_PerkSlot::UI_PerkSlot_C::ClearSlot() {
    return;
}
void _Game_Interface_Customization_Perks_UI_PerkSlot::UI_PerkSlot_C::BndEvt__UI_PerkSlot_Button_97_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Perks_UI_PerkSlot::UI_PerkSlot_C::SelectButton() {
    return;
}
void _Game_Interface_Customization_Perks_UI_PerkSlot::UI_PerkSlot_C::DeselectButton() {
    return;
}
void _Game_Interface_Customization_Perks_UI_PerkSlot::UI_PerkSlot_C::InitPerkSlot(void* Perk, void*& PerkInventory) {
    return;
}
void _Game_Interface_Customization_Perks_UI_PerkSlot::UI_PerkSlot_C::Construct0() {
    return;
}
void _Game_Interface_Customization_Perks_UI_PerkSlot::UI_PerkSlot_C::BndEvt__UI_PerkSlot_Button_97_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Perks_UI_PerkSlot::UI_PerkSlot_C::BndEvt__UI_PerkSlot_Button_97_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Perks_UI_PerkSlot::UI_PerkSlot_C::ExecuteUbergraph_UI_PerkSlot(int32_t EntryPoint) {
    return;
}
void _Game_Interface_Customization_Perks_UI_PerkSlot::UI_PerkSlot_C::PerkSlotSelected__DelegateSignature(_Game_Interface_Customization_Perks_UI_PerkSlot::UI_PerkSlot_C* Slot) {
    return;
}
