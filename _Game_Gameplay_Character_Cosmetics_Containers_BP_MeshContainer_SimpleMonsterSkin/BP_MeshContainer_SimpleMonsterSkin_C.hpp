#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_PlaytimeCharacterCosmetic\BP_MeshContainer_PlaytimeCharacterCosmetic_C.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_Playtime_Multiplayer\Cosmetic.hpp"
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_SimpleMonsterSkin {
#pragma pack(push, 1)
struct BP_MeshContainer_SimpleMonsterSkin_C : public _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_PlaytimeCharacterCosmetic::BP_MeshContainer_PlaytimeCharacterCosmetic_C {
    private: char pad_290[0x10]; public:
    _Script_Engine::SkeletalMeshComponent*& get_HighLowMesh();
    _Script_Engine::SkeletalMeshComponent*& get_AlternateMesh();
    static _Script_CoreUObject::Class* static_class();
    void GetMainSkeletalMeshComponents(void*& Return_Value);
    void GetAllSceneComponents(void*& Scene_Components);
    void SetCosmeticFromStruct(_Script_Playtime_Multiplayer::Cosmetic Cosmetic, _Script_CoreUObject::LinearColor Color);
}; // Size: 0x2a0
#pragma pack(pop)
}
