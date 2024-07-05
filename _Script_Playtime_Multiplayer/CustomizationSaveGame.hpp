#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\SaveGame.hpp"
#include "PresetSlot.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct CustomizationSaveGame : public _Script_Engine::SaveGame {
    private: char pad_28[0x160]; public:
    void* get_SelectedSurvivorPreset();
    void* get_SurvivorPresets();
    void* get_SelectedBoxyPreset();
    void* get_BoxyPresets();
    void* get_SelectedHuggyPreset();
    void* get_HuggyPresets();
    void* get_SelectedMommyPreset();
    void* get_MommyPresets();
    static _Script_CoreUObject::Class* static_class();
    void UnequipCosmetic(void* Character, void* Type);
    void SetSelectedPreset(void* Character, void* Index);
    void Print();
    bool IsEmoteEquipped(void* Character, int32_t ID);
    bool IsCosmeticEquipped(void* Character, void* Type, int32_t ID);
    _Script_Playtime_Multiplayer::PresetSlot GetSelectedPresetNotByRef(void* Character);
    int32_t GetEquippedEmote(void* Character, int32_t Slot);
    int32_t GetEquippedCosmetic(void* Character, void* Type);
    void EquipEmote(void* Character, int32_t Slot, int32_t ID);
    void EquipCosmeticColor(void* Character, void* Type, int32_t ColorIndex);
    void EquipCosmetic(void* Character, void* Type, int32_t ID);
    void DirectlySetSelectedPreset(void* Character, _Script_Playtime_Multiplayer::PresetSlot Preset);
    void DeletePreset(void* Character, void* Name);
    int32_t ClampPresetRange(int32_t Num);
    void AddNewPreset(void* Character, void* Name, _Script_Playtime_Multiplayer::PresetSlot PresetStruct);
}; // Size: 0x188
#pragma pack(pop)
}
