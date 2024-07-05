#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_PlayerCosmetic\BP_MeshContainer_PlayerCosmetic_C.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_Playtime_Multiplayer\Cosmetic.hpp"
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_OutfitCosmetic {
#pragma pack(push, 1)
struct BP_MeshContainer_OutfitCosmetic_C : public _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_PlayerCosmetic::BP_MeshContainer_PlayerCosmetic_C {
    private: char pad_298[0x18]; public:
    void* get_UberGraphFrame0();
    _Script_Engine::SkeletalMeshComponent*& get_SkinMesh();
    void* get_OutfitSkinType();
    int32_t& get_DefaultSkin();
    static _Script_CoreUObject::Class* static_class();
    void SetVisibility(bool Visible);
    void Set_Overriding_Visibility(bool Visible);
    void SetDefaultCosmetic();
    void SetSkinFromID(int32_t Identifier, _Script_CoreUObject::LinearColor Color);
    void GetDefaultSkinType(void* Cosmetic_Type, void*& Return_Value);
    void VerifySkinType(void* Skin_Type, void* Cosmetic_Type, bool& Valid);
    void SetCosmeticFromStruct(_Script_Playtime_Multiplayer::Cosmetic Cosmetic, _Script_CoreUObject::LinearColor Color);
    void UserConstructionScript();
    void OnLoaded_4F31B9074DE4B27CB283518368ABF648(_Script_CoreUObject::Object* Loaded);
    void Load_Skin(void* NewParam);
    void ExecuteUbergraph_BP_MeshContainer_OutfitCosmetic(int32_t EntryPoint);
}; // Size: 0x2b0
#pragma pack(pop)
}
