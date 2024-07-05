#include "..\FUObjectArray.hpp"
#include "..\_Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GrabpackCosmetic\BP_MeshContainer_GrabpackCosmetic_C.hpp"
#include "BP_MeshContainer_GrabpackCosmeticPotOfGold_C.hpp"
#include "..\_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter\BP_NetworkCharacter_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Niagara\NiagaraComponent.hpp"
void _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GrabpackCosmeticPotOfGold::BP_MeshContainer_GrabpackCosmeticPotOfGold_C::Network_Character_Tick(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C* Network_Character) {
    return;
}
void* _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GrabpackCosmeticPotOfGold::BP_MeshContainer_GrabpackCosmeticPotOfGold_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x2f0);
}
_Script_Niagara::NiagaraComponent*& _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GrabpackCosmeticPotOfGold::BP_MeshContainer_GrabpackCosmeticPotOfGold_C::get_Coins() {
    return *(_Script_Niagara::NiagaraComponent**)((uintptr_t)this + 0x2f8);
}
_Script_CoreUObject::Class* _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GrabpackCosmeticPotOfGold::BP_MeshContainer_GrabpackCosmeticPotOfGold_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Gameplay/Character/Cosmetics/Containers/BP_MeshContainer_GrabpackCosmeticPotOfGold.BP_MeshContainer_GrabpackCosmeticPotOfGold_C");
    return result;
}
void _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GrabpackCosmeticPotOfGold::BP_MeshContainer_GrabpackCosmeticPotOfGold_C::ExecuteUbergraph_BP_MeshContainer_GrabpackCosmeticPotOfGold(int32_t EntryPoint) {
    return;
}
