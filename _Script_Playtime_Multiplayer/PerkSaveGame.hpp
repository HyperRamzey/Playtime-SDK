#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
struct PerkPackage;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct PerkSaveGame : public _Script_CoreUObject::Object {
    private: char pad_28[0x38]; public:
    void* get_Perks();
    static _Script_CoreUObject::Class* static_class();
    void UnequipPerk(void* Perk);
    void* StringToPerkType(void* In);
    void SetPerkLevel(void* Perk, int32_t Level);
    void Save();
    void* PerkTypeToString(void*& In);
    _Script_Playtime_Multiplayer::PerkSaveGame* LoadPerkSaveGame();
    void LevelUpPerk(void* Perk);
    bool IsPerkTypeSelected(void* Perk, int32_t& Level);
    void* GetSelectedPerks(_Script_Playtime_Multiplayer::PerkPackage& Package);
    void* GetSelectedPerkList();
    int32_t GetPerkLevel(void* Perk);
    void GetLevelFromPerks(_Script_Playtime_Multiplayer::PerkPackage& Package, void* Type, int32_t& Level);
    void EquipPerk(void* Perk, int32_t PerkIndex, bool& Success);
}; // Size: 0x60
#pragma pack(pop)
}
