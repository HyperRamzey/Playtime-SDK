#include "..\FUObjectArray.hpp"
#include "ABP_HatKnight_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimInstance.hpp"
#include "..\_Script_Engine\PoseLink.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
void* _Game_World_Geometry_Characters_PlayerCharacter_Cosmetics_Outfits_Animations_ABP_HatKnight::ABP_HatKnight_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x2c0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Cosmetics_Outfits_Animations_ABP_HatKnight::ABP_HatKnight_C::get_AnimGraphNode_ComponentToLocalSpace() {
    return (void*)((uintptr_t)this + 0x2c8);
}
_Script_CoreUObject::Class* _Game_World_Geometry_Characters_PlayerCharacter_Cosmetics_Outfits_Animations_ABP_HatKnight::ABP_HatKnight_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"AnimBlueprintGeneratedClass /Game/World/Geometry/Characters/PlayerCharacter/Cosmetics/Outfits/Animations/ABP_HatKnight.ABP_HatKnight_C");
    return result;
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Cosmetics_Outfits_Animations_ABP_HatKnight::ABP_HatKnight_C::get_AnimGraphNode_LocalToComponentSpace() {
    return (void*)((uintptr_t)this + 0xb20);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Cosmetics_Outfits_Animations_ABP_HatKnight::ABP_HatKnight_C::get_AnimGraphNode_Root() {
    return (void*)((uintptr_t)this + 0xd18);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Cosmetics_Outfits_Animations_ABP_HatKnight::ABP_HatKnight_C::get_AnimGraphNode_RigidBody() {
    return (void*)((uintptr_t)this + 0x2f0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Cosmetics_Outfits_Animations_ABP_HatKnight::ABP_HatKnight_C::get_AnimGraphNode_CopyPoseFromMesh() {
    return (void*)((uintptr_t)this + 0xb40);
}
_Script_Engine::SkeletalMeshComponent*& _Game_World_Geometry_Characters_PlayerCharacter_Cosmetics_Outfits_Animations_ABP_HatKnight::ABP_HatKnight_C::get_Skeletal_Mesh() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0xd48);
}
void _Game_World_Geometry_Characters_PlayerCharacter_Cosmetics_Outfits_Animations_ABP_HatKnight::ABP_HatKnight_C::AnimGraph(_Script_Engine::PoseLink& AnimGraph) {
    return;
}
void _Game_World_Geometry_Characters_PlayerCharacter_Cosmetics_Outfits_Animations_ABP_HatKnight::ABP_HatKnight_C::ExecuteUbergraph_ABP_HatKnight(int32_t EntryPoint) {
    return;
}
