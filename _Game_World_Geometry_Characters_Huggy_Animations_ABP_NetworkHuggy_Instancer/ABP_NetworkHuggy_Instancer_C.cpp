#include "..\FUObjectArray.hpp"
#include "ABP_NetworkHuggy_Instancer_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimInstance.hpp"
#include "..\_Script_Engine\PoseLink.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy_Instancer::ABP_NetworkHuggy_Instancer_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x2c0);
}
void _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy_Instancer::ABP_NetworkHuggy_Instancer_C::AnimGraph(_Script_Engine::PoseLink& AnimGraph) {
    return;
}
_Script_CoreUObject::Class* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy_Instancer::ABP_NetworkHuggy_Instancer_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"AnimBlueprintGeneratedClass /Game/World/Geometry/Characters/Huggy/Animations/ABP_NetworkHuggy_Instancer.ABP_NetworkHuggy_Instancer_C");
    return result;
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy_Instancer::ABP_NetworkHuggy_Instancer_C::get_AnimGraphNode_Root() {
    return (void*)((uintptr_t)this + 0x2c8);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy_Instancer::ABP_NetworkHuggy_Instancer_C::get_AnimGraphNode_CopyPoseFromMesh() {
    return (void*)((uintptr_t)this + 0x2f8);
}
_Script_Engine::SkeletalMeshComponent*& _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy_Instancer::ABP_NetworkHuggy_Instancer_C::get_Skeletal_Mesh() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x4d0);
}
void _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy_Instancer::ABP_NetworkHuggy_Instancer_C::BlueprintUpdateAnimation0(float DeltaTimeX) {
    return;
}
void _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy_Instancer::ABP_NetworkHuggy_Instancer_C::ExecuteUbergraph_ABP_NetworkHuggy_Instancer(int32_t EntryPoint) {
    return;
}
