#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_PlayerCosmetic\BP_MeshContainer_PlayerCosmetic_C.hpp"
#include "..\_Script_Playtime_Multiplayer\Cosmetic.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_HandCosmetic {
#pragma pack(push, 1)
struct BP_MeshContainer_HandCosmetic_C : public _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_PlayerCosmetic::BP_MeshContainer_PlayerCosmetic_C {
    private: char pad_298[0x10]; public:
    void* get_UberGraphFrame0();
    bool get_Left();
    void set_Left(bool value);
    static _Script_CoreUObject::Class* static_class();
    void GetMainSkeletalMeshReference(_Script_Playtime_Multiplayer::Cosmetic Cosmetic, void*& Return_Value);
    void Update_Source_Pose();
    void ExecuteUbergraph_BP_MeshContainer_HandCosmetic(int32_t EntryPoint);
}; // Size: 0x2a8
#pragma pack(pop)
}
