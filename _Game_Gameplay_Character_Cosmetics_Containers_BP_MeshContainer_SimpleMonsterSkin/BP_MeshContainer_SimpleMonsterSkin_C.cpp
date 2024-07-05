#include "..\FUObjectArray.hpp"
#include "..\_Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_PlaytimeCharacterCosmetic\BP_MeshContainer_PlaytimeCharacterCosmetic_C.hpp"
#include "BP_MeshContainer_SimpleMonsterSkin_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "..\_Script_Playtime_Multiplayer\Cosmetic.hpp"
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_SimpleMonsterSkin::BP_MeshContainer_SimpleMonsterSkin_C::get_HighLowMesh() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x290);
}
_Script_CoreUObject::Class* _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_SimpleMonsterSkin::BP_MeshContainer_SimpleMonsterSkin_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Gameplay/Character/Cosmetics/Containers/BP_MeshContainer_SimpleMonsterSkin.BP_MeshContainer_SimpleMonsterSkin_C");
    return result;
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_SimpleMonsterSkin::BP_MeshContainer_SimpleMonsterSkin_C::get_AlternateMesh() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x298);
}
void _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_SimpleMonsterSkin::BP_MeshContainer_SimpleMonsterSkin_C::GetMainSkeletalMeshComponents(void*& Return_Value) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_SimpleMonsterSkin::BP_MeshContainer_SimpleMonsterSkin_C::GetAllSceneComponents(void*& Scene_Components) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_SimpleMonsterSkin::BP_MeshContainer_SimpleMonsterSkin_C::SetCosmeticFromStruct(_Script_Playtime_Multiplayer::Cosmetic Cosmetic, _Script_CoreUObject::LinearColor Color) {
    return;
}
