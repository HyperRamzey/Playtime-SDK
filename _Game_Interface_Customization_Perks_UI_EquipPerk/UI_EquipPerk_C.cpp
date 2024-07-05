#include "..\FUObjectArray.hpp"
#include "UI_EquipPerk_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void* _Game_Interface_Customization_Perks_UI_EquipPerk::UI_EquipPerk_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::Image*& _Game_Interface_Customization_Perks_UI_EquipPerk::UI_EquipPerk_C::get_Background() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x268);
}
_Script_UMG::Button*& _Game_Interface_Customization_Perks_UI_EquipPerk::UI_EquipPerk_C::get_Button_97() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x270);
}
_Script_UMG::TextBlock*& _Game_Interface_Customization_Perks_UI_EquipPerk::UI_EquipPerk_C::get_ButtonLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x278);
}
void* _Game_Interface_Customization_Perks_UI_EquipPerk::UI_EquipPerk_C::get_ButtonPressed() {
    return (void*)((uintptr_t)this + 0x288);
}
_Script_UMG::Image*& _Game_Interface_Customization_Perks_UI_EquipPerk::UI_EquipPerk_C::get_Frame() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x280);
}
_Script_CoreUObject::Class* _Game_Interface_Customization_Perks_UI_EquipPerk::UI_EquipPerk_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/Customization/Perks/UI_EquipPerk.UI_EquipPerk_C");
    return result;
}
void _Game_Interface_Customization_Perks_UI_EquipPerk::UI_EquipPerk_C::BndEvt__UI_EquipPerk_Button_97_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Perks_UI_EquipPerk::UI_EquipPerk_C::BndEvt__UI_EquipPerk_Button_97_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Perks_UI_EquipPerk::UI_EquipPerk_C::BndEvt__UI_EquipPerk_Button_97_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Perks_UI_EquipPerk::UI_EquipPerk_C::ExecuteUbergraph_UI_EquipPerk(int32_t EntryPoint) {
    return;
}
void _Game_Interface_Customization_Perks_UI_EquipPerk::UI_EquipPerk_C::ButtonPressed__DelegateSignature() {
    return;
}
