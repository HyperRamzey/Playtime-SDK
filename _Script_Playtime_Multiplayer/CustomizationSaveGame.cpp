#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SaveGame.hpp"
#include "CustomizationSaveGame.hpp"
#include "PresetSlot.hpp"
void* _Script_Playtime_Multiplayer::CustomizationSaveGame::get_SelectedSurvivorPreset() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Playtime_Multiplayer::CustomizationSaveGame::get_MommyPresets() {
    return (void*)((uintptr_t)this + 0x138);
}
void* _Script_Playtime_Multiplayer::CustomizationSaveGame::get_SurvivorPresets() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Playtime_Multiplayer::CustomizationSaveGame::get_SelectedMommyPreset() {
    return (void*)((uintptr_t)this + 0x130);
}
void* _Script_Playtime_Multiplayer::CustomizationSaveGame::get_SelectedHuggyPreset() {
    return (void*)((uintptr_t)this + 0xd8);
}
void* _Script_Playtime_Multiplayer::CustomizationSaveGame::get_SelectedBoxyPreset() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_Playtime_Multiplayer::CustomizationSaveGame::get_BoxyPresets() {
    return (void*)((uintptr_t)this + 0x88);
}
void* _Script_Playtime_Multiplayer::CustomizationSaveGame::get_HuggyPresets() {
    return (void*)((uintptr_t)this + 0xe0);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::CustomizationSaveGame::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.CustomizationSaveGame");
    return result;
}
void _Script_Playtime_Multiplayer::CustomizationSaveGame::UnequipCosmetic(void* Character, void* Type) {
    return;
}
void _Script_Playtime_Multiplayer::CustomizationSaveGame::SetSelectedPreset(void* Character, void* Index) {
    return;
}
void _Script_Playtime_Multiplayer::CustomizationSaveGame::Print() {
    return;
}
bool _Script_Playtime_Multiplayer::CustomizationSaveGame::IsEmoteEquipped(void* Character, int32_t ID) {
    return;
}
bool _Script_Playtime_Multiplayer::CustomizationSaveGame::IsCosmeticEquipped(void* Character, void* Type, int32_t ID) {
    return;
}
_Script_Playtime_Multiplayer::PresetSlot _Script_Playtime_Multiplayer::CustomizationSaveGame::GetSelectedPresetNotByRef(void* Character) {
    return;
}
int32_t _Script_Playtime_Multiplayer::CustomizationSaveGame::GetEquippedEmote(void* Character, int32_t Slot) {
    return;
}
int32_t _Script_Playtime_Multiplayer::CustomizationSaveGame::GetEquippedCosmetic(void* Character, void* Type) {
    return;
}
void _Script_Playtime_Multiplayer::CustomizationSaveGame::EquipEmote(void* Character, int32_t Slot, int32_t ID) {
    return;
}
void _Script_Playtime_Multiplayer::CustomizationSaveGame::EquipCosmeticColor(void* Character, void* Type, int32_t ColorIndex) {
    return;
}
void _Script_Playtime_Multiplayer::CustomizationSaveGame::EquipCosmetic(void* Character, void* Type, int32_t ID) {
    return;
}
void _Script_Playtime_Multiplayer::CustomizationSaveGame::DirectlySetSelectedPreset(void* Character, _Script_Playtime_Multiplayer::PresetSlot Preset) {
    return;
}
void _Script_Playtime_Multiplayer::CustomizationSaveGame::DeletePreset(void* Character, void* Name) {
    return;
}
int32_t _Script_Playtime_Multiplayer::CustomizationSaveGame::ClampPresetRange(int32_t Num) {
    return;
}
void _Script_Playtime_Multiplayer::CustomizationSaveGame::AddNewPreset(void* Character, void* Name, _Script_Playtime_Multiplayer::PresetSlot PresetStruct) {
    return;
}
