#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_SimpleMonsterSkin\BP_MeshContainer_SimpleMonsterSkin_C.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
struct PlaytimeCharacter;
}
namespace _Game_Player_Huggy_BP_NetworkHuggy {
struct BP_NetworkHuggy_C;
}
namespace _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_HuggySkin {
#pragma pack(push, 1)
struct BP_MeshContainer_HuggySkin_C : public _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_SimpleMonsterSkin::BP_MeshContainer_SimpleMonsterSkin_C {
    private: char pad_2a0[0x8]; public:
    void* get_UberGraphFrame();
    static _Script_CoreUObject::Class* static_class();
    void Playtime_Character_Tick(_Script_Playtime_Multiplayer::PlaytimeCharacter* Playtime_Character);
    void Network_Huggy_Tick(_Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C* Network_Huggy);
    void ExecuteUbergraph_BP_MeshContainer_HuggySkin(int32_t EntryPoint);
}; // Size: 0x2a8
#pragma pack(pop)
}
