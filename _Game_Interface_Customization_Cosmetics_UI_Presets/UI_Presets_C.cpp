#include "..\FUObjectArray.hpp"
#include "..\_Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter\BP_CustomizationMenuCharacter_C.hpp"
#include "..\_Game_Interface_Customization_Cosmetics_UI_PresetIndividual\UI_PresetIndividual_C.hpp"
#include "UI_Presets_C.hpp"
#include "..\_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter\BP_NetworkCharacter_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Playtime_Multiplayer\CustomizationSaveGame.hpp"
#include "..\_Script_Playtime_Multiplayer\PresetSlot.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\ScrollBox.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UniformGridPanel.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
_Game_Interface_Customization_Cosmetics_UI_PresetIndividual::UI_PresetIndividual_C*& _Game_Interface_Customization_Cosmetics_UI_Presets::UI_Presets_C::get_UI_PresetIndividual() {
    return *(_Game_Interface_Customization_Cosmetics_UI_PresetIndividual::UI_PresetIndividual_C**)((uintptr_t)this + 0x290);
}
_Script_UMG::TextBlock*& _Game_Interface_Customization_Cosmetics_UI_Presets::UI_Presets_C::get_NoPresets() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x280);
}
void* _Game_Interface_Customization_Cosmetics_UI_Presets::UI_Presets_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::Button*& _Game_Interface_Customization_Cosmetics_UI_Presets::UI_Presets_C::get_Button_107() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x268);
}
_Game_Interface_Customization_Cosmetics_UI_PresetIndividual::UI_PresetIndividual_C*& _Game_Interface_Customization_Cosmetics_UI_Presets::UI_Presets_C::get_UI_PresetIndividual_1() {
    return *(_Game_Interface_Customization_Cosmetics_UI_PresetIndividual::UI_PresetIndividual_C**)((uintptr_t)this + 0x298);
}
_Script_UMG::TextBlock*& _Game_Interface_Customization_Cosmetics_UI_Presets::UI_Presets_C::get_CategoryText_1() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x278);
}
_Script_UMG::TextBlock*& _Game_Interface_Customization_Cosmetics_UI_Presets::UI_Presets_C::get_CategoryText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x270);
}
_Script_UMG::ScrollBox*& _Game_Interface_Customization_Cosmetics_UI_Presets::UI_Presets_C::get_ScrollBox_154() {
    return *(_Script_UMG::ScrollBox**)((uintptr_t)this + 0x288);
}
_Game_Interface_Customization_Cosmetics_UI_PresetIndividual::UI_PresetIndividual_C*& _Game_Interface_Customization_Cosmetics_UI_Presets::UI_Presets_C::get_UI_PresetIndividual_2() {
    return *(_Game_Interface_Customization_Cosmetics_UI_PresetIndividual::UI_PresetIndividual_C**)((uintptr_t)this + 0x2a0);
}
_Script_UMG::UniformGridPanel*& _Game_Interface_Customization_Cosmetics_UI_Presets::UI_Presets_C::get_UniformGridPanel_66() {
    return *(_Script_UMG::UniformGridPanel**)((uintptr_t)this + 0x2a8);
}
void* _Game_Interface_Customization_Cosmetics_UI_Presets::UI_Presets_C::get_Type() {
    return (void*)((uintptr_t)this + 0x2b0);
}
_Script_Playtime_Multiplayer::CustomizationSaveGame*& _Game_Interface_Customization_Cosmetics_UI_Presets::UI_Presets_C::get_Customization_Save_Game() {
    return *(_Script_Playtime_Multiplayer::CustomizationSaveGame**)((uintptr_t)this + 0x2b8);
}
void* _Game_Interface_Customization_Cosmetics_UI_Presets::UI_Presets_C::get_CurrentConfig() {
    return (void*)((uintptr_t)this + 0x2c0);
}
_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C*& _Game_Interface_Customization_Cosmetics_UI_Presets::UI_Presets_C::get_Character() {
    return *(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C**)((uintptr_t)this + 0x318);
}
_Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter::BP_CustomizationMenuCharacter_C*& _Game_Interface_Customization_Cosmetics_UI_Presets::UI_Presets_C::get_MainMenuCharacter() {
    return *(_Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter::BP_CustomizationMenuCharacter_C**)((uintptr_t)this + 0x320);
}
_Script_CoreUObject::Class* _Game_Interface_Customization_Cosmetics_UI_Presets::UI_Presets_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/Customization/Cosmetics/UI_Presets.UI_Presets_C");
    return result;
}
void _Game_Interface_Customization_Cosmetics_UI_Presets::UI_Presets_C::Update_Localization() {
    return;
}
_Script_Playtime_Multiplayer::PresetSlot _Game_Interface_Customization_Cosmetics_UI_Presets::UI_Presets_C::FilterOutEmotes(_Script_Playtime_Multiplayer::PresetSlot Input) {
    return;
}
bool _Game_Interface_Customization_Cosmetics_UI_Presets::UI_Presets_C::PresetNameSimilar(void*& TargetArray, void*& ItemToFind) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Presets::UI_Presets_C::EquipAllInPreset(void* Name) {
    return;
}
void* _Game_Interface_Customization_Cosmetics_UI_Presets::UI_Presets_C::GetPresetsByType(_Script_Playtime_Multiplayer::CustomizationSaveGame* SaveGame) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Presets::UI_Presets_C::LoadPresets(_Script_Playtime_Multiplayer::CustomizationSaveGame* CustomizationSave) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Presets::UI_Presets_C::RefreshPresets() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Presets::UI_Presets_C::ExecuteUbergraph_UI_Presets(int32_t EntryPoint) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Presets::UI_Presets_C::BndEvt__UI_Presets_Button_107_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Presets::UI_Presets_C::MakeNewPreset(void* Name) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Presets::UI_Presets_C::DeletePreset(void* Name, void* Type) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Presets::UI_Presets_C::ApplyPreset(_Script_Playtime_Multiplayer::PresetSlot Preset, void* Name) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Presets::UI_Presets_C::Construct0() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Presets::UI_Presets_C::PreConstruct0(bool IsDesignTime) {
    return;
}
