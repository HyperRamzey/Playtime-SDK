#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_PlaytimeCharacterCosmetic\BP_MeshContainer_PlaytimeCharacterCosmetic_C.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
struct PlaytimeCharacter;
}
namespace _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter {
struct BP_NetworkCharacter_C;
}
namespace _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_PlayerCosmetic {
#pragma pack(push, 1)
struct BP_MeshContainer_PlayerCosmetic_C : public _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_PlaytimeCharacterCosmetic::BP_MeshContainer_PlaytimeCharacterCosmetic_C {
    private: char pad_290[0x8]; public:
    void* get_UberGraphFrame();
    static _Script_CoreUObject::Class* static_class();
    void Playtime_Character_Tick0(_Script_Playtime_Multiplayer::PlaytimeCharacter* Playtime_Character);
    void Network_Character_Tick(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C* Network_Character);
    void ExecuteUbergraph_BP_MeshContainer_PlayerCosmetic(int32_t EntryPoint);
}; // Size: 0x298
#pragma pack(pop)
}
