#include "..\FUObjectArray.hpp"
#include "BP_MeshContainer_GenericCosmetic_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SkeletalMesh.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "..\_Script_Playtime_Multiplayer\Cosmetic.hpp"
#include "..\_Script_Playtime_Multiplayer\CosmeticMeshContainer.hpp"
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GenericCosmetic::BP_MeshContainer_GenericCosmetic_C::get_SourceMesh() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x230);
}
void _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GenericCosmetic::BP_MeshContainer_GenericCosmetic_C::GetAnimationBlueprintClass(_Script_Playtime_Multiplayer::Cosmetic Cosmetic, void*& Return_Value) {
    return;
}
void* _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GenericCosmetic::BP_MeshContainer_GenericCosmetic_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x220);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GenericCosmetic::BP_MeshContainer_GenericCosmetic_C::get_CosmeticMesh() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x228);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GenericCosmetic::BP_MeshContainer_GenericCosmetic_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x238);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GenericCosmetic::BP_MeshContainer_GenericCosmetic_C::get_Source_Pose_Component() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x240);
}
_Script_Engine::SkeletalMesh*& _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GenericCosmetic::BP_MeshContainer_GenericCosmetic_C::get_Preview_Cosmetic_Mesh() {
    return *(_Script_Engine::SkeletalMesh**)((uintptr_t)this + 0x250);
}
void _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GenericCosmetic::BP_MeshContainer_GenericCosmetic_C::set_Uses_Animation_Blueprint(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x248 + 0);
    *(uint8_t*)((uintptr_t)this + 0x248 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GenericCosmetic::BP_MeshContainer_GenericCosmetic_C::get_Uses_Animation_Blueprint() {
    return (*(uint8_t*)((uintptr_t)this + 0x248 + 0)) & 1 != 0;
}
bool _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GenericCosmetic::BP_MeshContainer_GenericCosmetic_C::get_Auto_Update_Source_Pose() {
    return (*(uint8_t*)((uintptr_t)this + 0x26a + 0)) & 1 != 0;
}
void* _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GenericCosmetic::BP_MeshContainer_GenericCosmetic_C::get_Preview_Anim_Blueprint() {
    return (void*)((uintptr_t)this + 0x258);
}
_Script_Engine::SkeletalMesh*& _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GenericCosmetic::BP_MeshContainer_GenericCosmetic_C::get_Source_Mesh() {
    return *(_Script_Engine::SkeletalMesh**)((uintptr_t)this + 0x260);
}
void* _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GenericCosmetic::BP_MeshContainer_GenericCosmetic_C::get_CharacterType() {
    return (void*)((uintptr_t)this + 0x268);
}
void* _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GenericCosmetic::BP_MeshContainer_GenericCosmetic_C::get_Cosmetic_Type() {
    return (void*)((uintptr_t)this + 0x269);
}
void _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GenericCosmetic::BP_MeshContainer_GenericCosmetic_C::set_Auto_Update_Source_Pose(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x26a + 0);
    *(uint8_t*)((uintptr_t)this + 0x26a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GenericCosmetic::BP_MeshContainer_GenericCosmetic_C::get_Default_Cosmetic() {
    return *(int32_t*)((uintptr_t)this + 0x26c);
}
bool _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GenericCosmetic::BP_MeshContainer_GenericCosmetic_C::get_Source_Component_Is_Anim_BP() {
    return (*(uint8_t*)((uintptr_t)this + 0x270 + 0)) & 1 != 0;
}
void _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GenericCosmetic::BP_MeshContainer_GenericCosmetic_C::set_Source_Component_Is_Anim_BP(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x270 + 0);
    *(uint8_t*)((uintptr_t)this + 0x270 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GenericCosmetic::BP_MeshContainer_GenericCosmetic_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Gameplay/Character/Cosmetics/Containers/BP_MeshContainer_GenericCosmetic.BP_MeshContainer_GenericCosmetic_C");
    return result;
}
void _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GenericCosmetic::BP_MeshContainer_GenericCosmetic_C::ApplyMaterialOverrides(_Script_Engine::SkeletalMeshComponent* Mesh, _Script_Playtime_Multiplayer::Cosmetic Cosmetic) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GenericCosmetic::BP_MeshContainer_GenericCosmetic_C::SetAnimationBlueprintOrPoseComponent(void* Animation_Blueprint, _Script_Engine::SkeletalMeshComponent* Skeletal_Mesh_Component) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GenericCosmetic::BP_MeshContainer_GenericCosmetic_C::ApplyColorableCosmeticMaterialParams(_Script_Engine::SkeletalMeshComponent* Mesh, _Script_Playtime_Multiplayer::Cosmetic Cosmetic, _Script_CoreUObject::LinearColor Color) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GenericCosmetic::BP_MeshContainer_GenericCosmetic_C::SetSkeletalMeshFromReference(_Script_Engine::SkeletalMeshComponent* Skeletal_Mesh_Component, void* Reference) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GenericCosmetic::BP_MeshContainer_GenericCosmetic_C::Set_Overriding_Visibility(bool Visible) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GenericCosmetic::BP_MeshContainer_GenericCosmetic_C::SetVisibility(bool Visible) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GenericCosmetic::BP_MeshContainer_GenericCosmetic_C::Set_Master_Pose_Component(bool Attached, _Script_Engine::SkeletalMeshComponent* Skeletal_Mesh_Component) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GenericCosmetic::BP_MeshContainer_GenericCosmetic_C::Update_Source_Pose() {
    return;
}
void _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GenericCosmetic::BP_MeshContainer_GenericCosmetic_C::SetCosmeticFromStruct(_Script_Playtime_Multiplayer::Cosmetic Cosmetic, _Script_CoreUObject::LinearColor Color) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GenericCosmetic::BP_MeshContainer_GenericCosmetic_C::SetCosmeticFromID(int32_t Index, _Script_CoreUObject::LinearColor Color) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GenericCosmetic::BP_MeshContainer_GenericCosmetic_C::SetDefaultCosmetic() {
    return;
}
void _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GenericCosmetic::BP_MeshContainer_GenericCosmetic_C::GetMainSkeletalMeshReference(_Script_Playtime_Multiplayer::Cosmetic Cosmetic, void*& Return_Value) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GenericCosmetic::BP_MeshContainer_GenericCosmetic_C::GetCosmeticVerified(int32_t Index, void* Cosmetic_Type, void* Character_Type, _Script_Playtime_Multiplayer::Cosmetic& Cosmetic, bool& Valid) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GenericCosmetic::BP_MeshContainer_GenericCosmetic_C::GetMainSkeletalMeshComponent(_Script_Engine::SkeletalMeshComponent*& Return_Value) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GenericCosmetic::BP_MeshContainer_GenericCosmetic_C::GetAllSceneComponents(void*& Scene_Components) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GenericCosmetic::BP_MeshContainer_GenericCosmetic_C::SetSourceMesh() {
    return;
}
void _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GenericCosmetic::BP_MeshContainer_GenericCosmetic_C::UserConstructionScript() {
    return;
}
void _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GenericCosmetic::BP_MeshContainer_GenericCosmetic_C::Manually_Set_Source_Pose(_Script_Engine::SkeletalMeshComponent* Skeletal_Mesh_Component) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GenericCosmetic::BP_MeshContainer_GenericCosmetic_C::ExecuteUbergraph_BP_MeshContainer_GenericCosmetic(int32_t EntryPoint) {
    return;
}
