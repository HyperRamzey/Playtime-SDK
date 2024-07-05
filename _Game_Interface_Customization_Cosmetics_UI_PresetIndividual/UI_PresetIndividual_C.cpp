#include "..\FUObjectArray.hpp"
#include "UI_PresetIndividual_C.hpp"
#include "..\_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter\BP_NetworkCharacter_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Playtime_Multiplayer\PresetSlot.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void* _Game_Interface_Customization_Cosmetics_UI_PresetIndividual::UI_PresetIndividual_C::get_Preset() {
    return (void*)((uintptr_t)this + 0x290);
}
void* _Game_Interface_Customization_Cosmetics_UI_PresetIndividual::UI_PresetIndividual_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::Button*& _Game_Interface_Customization_Cosmetics_UI_PresetIndividual::UI_PresetIndividual_C::get_Button_0() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x270);
}
_Script_UMG::Image*& _Game_Interface_Customization_Cosmetics_UI_PresetIndividual::UI_PresetIndividual_C::get_Applied() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x268);
}
_Script_UMG::Button*& _Game_Interface_Customization_Cosmetics_UI_PresetIndividual::UI_PresetIndividual_C::get_Button_54() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x278);
}
_Script_UMG::TextBlock*& _Game_Interface_Customization_Cosmetics_UI_PresetIndividual::UI_PresetIndividual_C::get_PresetName() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x280);
}
void* _Game_Interface_Customization_Cosmetics_UI_PresetIndividual::UI_PresetIndividual_C::get_Name() {
    return (void*)((uintptr_t)this + 0x288);
}
void* _Game_Interface_Customization_Cosmetics_UI_PresetIndividual::UI_PresetIndividual_C::get_Type() {
    return (void*)((uintptr_t)this + 0x2e8);
}
void _Game_Interface_Customization_Cosmetics_UI_PresetIndividual::UI_PresetIndividual_C::set_CanDelete(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x318 + 0);
    *(uint8_t*)((uintptr_t)this + 0x318 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Interface_Customization_Cosmetics_UI_PresetIndividual::UI_PresetIndividual_C::get_DeletePreset() {
    return (void*)((uintptr_t)this + 0x2f0);
}
void* _Game_Interface_Customization_Cosmetics_UI_PresetIndividual::UI_PresetIndividual_C::get_ApplyPreset() {
    return (void*)((uintptr_t)this + 0x300);
}
_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C*& _Game_Interface_Customization_Cosmetics_UI_PresetIndividual::UI_PresetIndividual_C::get_Character() {
    return *(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C**)((uintptr_t)this + 0x310);
}
bool _Game_Interface_Customization_Cosmetics_UI_PresetIndividual::UI_PresetIndividual_C::get_CanDelete() {
    return (*(uint8_t*)((uintptr_t)this + 0x318 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Game_Interface_Customization_Cosmetics_UI_PresetIndividual::UI_PresetIndividual_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/Customization/Cosmetics/UI_PresetIndividual.UI_PresetIndividual_C");
    return result;
}
void _Game_Interface_Customization_Cosmetics_UI_PresetIndividual::UI_PresetIndividual_C::CheckIfApplied() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_PresetIndividual::UI_PresetIndividual_C::BndEvt__UI_PresetIndividual_Button_54_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_PresetIndividual::UI_PresetIndividual_C::ConfirmDelete() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_PresetIndividual::UI_PresetIndividual_C::Construct0() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_PresetIndividual::UI_PresetIndividual_C::BndEvt__UI_PresetIndividual_Button_0_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_PresetIndividual::UI_PresetIndividual_C::ExecuteUbergraph_UI_PresetIndividual(int32_t EntryPoint) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_PresetIndividual::UI_PresetIndividual_C::ApplyPreset__DelegateSignature(_Script_Playtime_Multiplayer::PresetSlot Preset, void* Name) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_PresetIndividual::UI_PresetIndividual_C::DeletePreset__DelegateSignature(void* Preset, void* Type) {
    return;
}
