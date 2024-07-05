#include "..\FUObjectArray.hpp"
#include "BP_MeshContainer_HandCosmetic_C.hpp"
#include "..\_Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_PlayerCosmetic\BP_MeshContainer_PlayerCosmetic_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Playtime_Multiplayer\Cosmetic.hpp"
void* _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_HandCosmetic::BP_MeshContainer_HandCosmetic_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x298);
}
bool _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_HandCosmetic::BP_MeshContainer_HandCosmetic_C::get_Left() {
    return (*(uint8_t*)((uintptr_t)this + 0x2a0 + 0)) & 1 != 0;
}
void _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_HandCosmetic::BP_MeshContainer_HandCosmetic_C::set_Left(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2a0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2a0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_HandCosmetic::BP_MeshContainer_HandCosmetic_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Gameplay/Character/Cosmetics/Containers/BP_MeshContainer_HandCosmetic.BP_MeshContainer_HandCosmetic_C");
    return result;
}
void _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_HandCosmetic::BP_MeshContainer_HandCosmetic_C::ExecuteUbergraph_BP_MeshContainer_HandCosmetic(int32_t EntryPoint) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_HandCosmetic::BP_MeshContainer_HandCosmetic_C::GetMainSkeletalMeshReference(_Script_Playtime_Multiplayer::Cosmetic Cosmetic, void*& Return_Value) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_HandCosmetic::BP_MeshContainer_HandCosmetic_C::Update_Source_Pose() {
    return;
}
