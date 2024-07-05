#include "..\FUObjectArray.hpp"
#include "BP_MeshContainer_MaskCosmetic_C.hpp"
#include "..\_Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_PlayerCosmetic\BP_MeshContainer_PlayerCosmetic_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_MaskCosmetic::BP_MeshContainer_MaskCosmetic_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Gameplay/Character/Cosmetics/Containers/BP_MeshContainer_MaskCosmetic.BP_MeshContainer_MaskCosmetic_C");
    return result;
}
void _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_MaskCosmetic::BP_MeshContainer_MaskCosmetic_C::SetVisibilityBasedOnHat(int32_t Identifier) {
    return;
}
