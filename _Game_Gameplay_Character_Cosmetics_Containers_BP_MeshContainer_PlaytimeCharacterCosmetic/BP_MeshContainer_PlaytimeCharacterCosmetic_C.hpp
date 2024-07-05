#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GenericCosmetic\BP_MeshContainer_GenericCosmetic_C.hpp"
namespace _Script_Playtime_Multiplayer {
struct PlaytimeCharacter;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_PlaytimeCharacterCosmetic {
#pragma pack(push, 1)
struct BP_MeshContainer_PlaytimeCharacterCosmetic_C : public _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GenericCosmetic::BP_MeshContainer_GenericCosmetic_C {
    private: char pad_278[0x18]; public:
    void* get_UberGraphFrame0();
    _Script_Playtime_Multiplayer::PlaytimeCharacter*& get_Playtime_Character();
    bool get_Present_On_Playtime_Character();
    void set_Present_On_Playtime_Character(bool value);
    bool get_Set_Character_On_Construct();
    void set_Set_Character_On_Construct(bool value);
    static _Script_CoreUObject::Class* static_class();
    void GetPlaytimeCharacter(_Script_Playtime_Multiplayer::PlaytimeCharacter*& Playtime_Character, bool& Valid);
    void SetPlaytimeCharacter(_Script_Playtime_Multiplayer::PlaytimeCharacter* Playtime_Character);
    void UserConstructionScript0();
    void ReceiveTick(float DeltaSeconds);
    void Playtime_Character_Tick(_Script_Playtime_Multiplayer::PlaytimeCharacter* Playtime_Character);
    void ExecuteUbergraph_BP_MeshContainer_PlaytimeCharacterCosmetic(int32_t EntryPoint);
}; // Size: 0x290
#pragma pack(pop)
}
