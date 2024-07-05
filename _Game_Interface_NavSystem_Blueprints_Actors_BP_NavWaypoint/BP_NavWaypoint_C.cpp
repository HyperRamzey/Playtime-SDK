#include "..\FUObjectArray.hpp"
#include "..\_Game_Interface_NavSystem_Blueprints_Actors_BP_NavBaseActor\BP_NavBaseActor_C.hpp"
#include "BP_NavWaypoint_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ParticleSystemComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
void _Game_Interface_NavSystem_Blueprints_Actors_BP_NavWaypoint::BP_NavWaypoint_C::ReceiveBeginPlay() {
    return;
}
void* _Game_Interface_NavSystem_Blueprints_Actors_BP_NavWaypoint::BP_NavWaypoint_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x240);
}
_Script_Engine::StaticMeshComponent*& _Game_Interface_NavSystem_Blueprints_Actors_BP_NavWaypoint::BP_NavWaypoint_C::get_Cube() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x250);
}
_Script_Engine::ParticleSystemComponent*& _Game_Interface_NavSystem_Blueprints_Actors_BP_NavWaypoint::BP_NavWaypoint_C::get_ParticleSystem() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x248);
}
float& _Game_Interface_NavSystem_Blueprints_Actors_BP_NavWaypoint::BP_NavWaypoint_C::get_LifeTime() {
    return *(float*)((uintptr_t)this + 0x258);
}
_Script_CoreUObject::Class* _Game_Interface_NavSystem_Blueprints_Actors_BP_NavWaypoint::BP_NavWaypoint_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Interface/NavSystem/Blueprints/Actors/BP_NavWaypoint.BP_NavWaypoint_C");
    return result;
}
void _Game_Interface_NavSystem_Blueprints_Actors_BP_NavWaypoint::BP_NavWaypoint_C::ExecuteUbergraph_BP_NavWaypoint(int32_t EntryPoint) {
    return;
}
