#include "..\FUObjectArray.hpp"
#include "ABP_HatBalloon_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimInstance.hpp"
#include "..\_Script_Engine\PoseLink.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
_Script_CoreUObject::Class* _Game_World_Geometry_Characters_PlayerCharacter_Cosmetics_Outfits_Animations_ABP_HatBalloon::ABP_HatBalloon_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"AnimBlueprintGeneratedClass /Game/World/Geometry/Characters/PlayerCharacter/Cosmetics/Outfits/Animations/ABP_HatBalloon.ABP_HatBalloon_C");
    return result;
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Cosmetics_Outfits_Animations_ABP_HatBalloon::ABP_HatBalloon_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x2c0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Cosmetics_Outfits_Animations_ABP_HatBalloon::ABP_HatBalloon_C::get_AnimGraphNode_CopyPoseFromMesh() {
    return (void*)((uintptr_t)this + 0x2f8);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Cosmetics_Outfits_Animations_ABP_HatBalloon::ABP_HatBalloon_C::get_AnimGraphNode_Root() {
    return (void*)((uintptr_t)this + 0x2c8);
}
_Script_Engine::SkeletalMeshComponent*& _Game_World_Geometry_Characters_PlayerCharacter_Cosmetics_Outfits_Animations_ABP_HatBalloon::ABP_HatBalloon_C::get_Skeletal_Mesh() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0xd40);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Cosmetics_Outfits_Animations_ABP_HatBalloon::ABP_HatBalloon_C::get_AnimGraphNode_RigidBody() {
    return (void*)((uintptr_t)this + 0x4d0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Cosmetics_Outfits_Animations_ABP_HatBalloon::ABP_HatBalloon_C::get_AnimGraphNode_LocalToComponentSpace() {
    return (void*)((uintptr_t)this + 0xd00);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Cosmetics_Outfits_Animations_ABP_HatBalloon::ABP_HatBalloon_C::get_AnimGraphNode_ComponentToLocalSpace() {
    return (void*)((uintptr_t)this + 0xd20);
}
void _Game_World_Geometry_Characters_PlayerCharacter_Cosmetics_Outfits_Animations_ABP_HatBalloon::ABP_HatBalloon_C::AnimGraph(_Script_Engine::PoseLink& AnimGraph) {
    return;
}
void _Game_World_Geometry_Characters_PlayerCharacter_Cosmetics_Outfits_Animations_ABP_HatBalloon::ABP_HatBalloon_C::ExecuteUbergraph_ABP_HatBalloon(int32_t EntryPoint) {
    return;
}
