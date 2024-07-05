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
namespace _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy {
struct BP_NetworkMommy_C;
}
namespace _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_MommySkin {
#pragma pack(push, 1)
struct BP_MeshContainer_MommySkin_C : public _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_PlaytimeCharacterCosmetic::BP_MeshContainer_PlaytimeCharacterCosmetic_C {
    private: char pad_290[0x8]; public:
    void* get_UberGraphFrame();
    static _Script_CoreUObject::Class* static_class();
    void Playtime_Character_Tick0(_Script_Playtime_Multiplayer::PlaytimeCharacter* Playtime_Character);
    void Network_Mommy_Tick(_Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C* Network_Mommy);
    void ExecuteUbergraph_BP_MeshContainer_MommySkin(int32_t EntryPoint);
}; // Size: 0x298
#pragma pack(pop)
}
