#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_PlayerCosmetic\BP_MeshContainer_PlayerCosmetic_C.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_MaskCosmetic {
#pragma pack(push, 1)
struct BP_MeshContainer_MaskCosmetic_C : public _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_PlayerCosmetic::BP_MeshContainer_PlayerCosmetic_C {
    static _Script_CoreUObject::Class* static_class();
    void SetVisibilityBasedOnHat(int32_t Identifier);
}; // Size: 0x298
#pragma pack(pop)
}
