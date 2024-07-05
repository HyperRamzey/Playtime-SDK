#include "..\FUObjectArray.hpp"
#include "BP_MeshContainer_GrabpackCosmetic_C.hpp"
#include "..\_Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_HandCosmetic\BP_MeshContainer_HandCosmetic_C.hpp"
#include "..\_Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_PlayerCosmetic\BP_MeshContainer_PlayerCosmetic_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BillboardComponent.hpp"
#include "..\_Script_Engine\ChildActorComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "..\_Script_Playtime_Multiplayer\PlaytimeCharacter.hpp"
#include "..\_Script_Playtime_Multiplayer\PresetSlot.hpp"
void _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GrabpackCosmetic::BP_MeshContainer_GrabpackCosmetic_C::SetHandVisibility(bool Left, bool Visible) {
    return;
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GrabpackCosmetic::BP_MeshContainer_GrabpackCosmetic_C::get_LeftHandAttachFP() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x298);
}
void _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GrabpackCosmetic::BP_MeshContainer_GrabpackCosmetic_C::SetHandSourceComponent(_Script_Engine::SkeletalMeshComponent* Source, bool Left) {
    return;
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GrabpackCosmetic::BP_MeshContainer_GrabpackCosmetic_C::get_RightHandAttach() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x2c8);
}
_Script_Engine::BillboardComponent*& _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GrabpackCosmetic::BP_MeshContainer_GrabpackCosmetic_C::get_Billboard1() {
    return *(_Script_Engine::BillboardComponent**)((uintptr_t)this + 0x2b8);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GrabpackCosmetic::BP_MeshContainer_GrabpackCosmetic_C::get_RightHandAttachFP() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x2a0);
}
_Script_Engine::ChildActorComponent*& _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GrabpackCosmetic::BP_MeshContainer_GrabpackCosmetic_C::get_LeftHand() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x2b0);
}
_Script_Engine::ChildActorComponent*& _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GrabpackCosmetic::BP_MeshContainer_GrabpackCosmetic_C::get_RightHand() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x2a8);
}
_Script_Engine::BillboardComponent*& _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GrabpackCosmetic::BP_MeshContainer_GrabpackCosmetic_C::get_Billboard() {
    return *(_Script_Engine::BillboardComponent**)((uintptr_t)this + 0x2c0);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GrabpackCosmetic::BP_MeshContainer_GrabpackCosmetic_C::get_LeftHandAttach() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x2d0);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GrabpackCosmetic::BP_MeshContainer_GrabpackCosmetic_C::get_LeftHandSourceComponent() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x2d8);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GrabpackCosmetic::BP_MeshContainer_GrabpackCosmetic_C::get_RightHandSourceComponent() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x2e0);
}
bool _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GrabpackCosmetic::BP_MeshContainer_GrabpackCosmetic_C::get_First_Person() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e8 + 0)) & 1 != 0;
}
void _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GrabpackCosmetic::BP_MeshContainer_GrabpackCosmetic_C::set_First_Person(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GrabpackCosmetic::BP_MeshContainer_GrabpackCosmetic_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Gameplay/Character/Cosmetics/Containers/BP_MeshContainer_GrabpackCosmetic.BP_MeshContainer_GrabpackCosmetic_C");
    return result;
}
void _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GrabpackCosmetic::BP_MeshContainer_GrabpackCosmetic_C::Set_Overriding_Visibility(bool Visible) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GrabpackCosmetic::BP_MeshContainer_GrabpackCosmetic_C::SetVisibility(bool Visible) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GrabpackCosmetic::BP_MeshContainer_GrabpackCosmetic_C::UpdateHandCosmetics(_Script_Playtime_Multiplayer::PresetSlot Preset) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GrabpackCosmetic::BP_MeshContainer_GrabpackCosmetic_C::SetPlaytimeCharacter(_Script_Playtime_Multiplayer::PlaytimeCharacter* Playtime_Character) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GrabpackCosmetic::BP_MeshContainer_GrabpackCosmetic_C::GetHand(bool Left, _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_HandCosmetic::BP_MeshContainer_HandCosmetic_C*& Return_Value, bool& Valid) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GrabpackCosmetic::BP_MeshContainer_GrabpackCosmetic_C::UserConstructionScript() {
    return;
}
