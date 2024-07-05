#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
struct ANetworkCharacter;
}
namespace _Script_Playtime_Multiplayer {
struct PerkPackage;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct PerkFunctionLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    float LevelToValue(void* PerkType, int32_t Level);
    void* GetPerkSaveGameSlotName();
    void GetPerkRowName(void* PerkType, void*& Name);
    bool GetPerkData(void* Type, void* Perks, int32_t& Level);
    void GetHighestPerkLevelFromPlayers(void* Players, void* PerkType, int32_t& PerkLevel, _Script_Playtime_Multiplayer::ANetworkCharacter*& CharWithPerk);
    bool DoesOwnPerk(void*& PerkInventory, void* Type);
    void CleanPerkPackage(_Script_Playtime_Multiplayer::PerkPackage& Perks, void*& PerkInventory);
    bool CharHasPerk(_Script_Playtime_Multiplayer::ANetworkCharacter* Character, void* Type, int32_t& Level);
}; // Size: 0x28
#pragma pack(pop)
}
