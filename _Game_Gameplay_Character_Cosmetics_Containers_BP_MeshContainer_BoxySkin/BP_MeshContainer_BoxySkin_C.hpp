#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_PlaytimeCharacterCosmetic\BP_MeshContainer_PlaytimeCharacterCosmetic_C.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_Playtime_Multiplayer\Cosmetic.hpp"
namespace _Script_Engine {
struct DecalComponent;
}
namespace _Game_Player_Boxy_BP_NetworkBoxy {
struct BP_NetworkBoxy_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
struct PlaytimeCharacter;
}
namespace _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_BoxySkin {
#pragma pack(push, 1)
struct BP_MeshContainer_BoxySkin_C : public _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_PlaytimeCharacterCosmetic::BP_MeshContainer_PlaytimeCharacterCosmetic_C {
    private: char pad_290[0x18]; public:
    void* get_UberGraphFrame();
    _Script_Engine::DecalComponent*& get_RightEyeDecal();
    _Script_Engine::DecalComponent*& get_LeftEyeDecal();
    static _Script_CoreUObject::Class* static_class();
    void SetCosmeticFromStruct(_Script_Playtime_Multiplayer::Cosmetic Cosmetic, _Script_CoreUObject::LinearColor Color);
    void SetEyeDecalVisibility(bool Visible);
    void Playtime_Character_Tick0(_Script_Playtime_Multiplayer::PlaytimeCharacter* Playtime_Character);
    void Network_Boxy_Tick(_Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C* Network_Boxy);
    void ExecuteUbergraph_BP_MeshContainer_BoxySkin(int32_t EntryPoint);
}; // Size: 0x2a8
#pragma pack(pop)
}
