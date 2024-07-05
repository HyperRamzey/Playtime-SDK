#include "..\FUObjectArray.hpp"
#include "BP_AIControllerWaypoint_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
void* _Game_Player_TrainingDummy_BP_AIControllerWaypoint::BP_AIControllerWaypoint_C::get_AlternateWaypoints() {
    return (void*)((uintptr_t)this + 0x240);
}
void* _Game_Player_TrainingDummy_BP_AIControllerWaypoint::BP_AIControllerWaypoint_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x220);
}
void* _Game_Player_TrainingDummy_BP_AIControllerWaypoint::BP_AIControllerWaypoint_C::get_Waypoints() {
    return (void*)((uintptr_t)this + 0x230);
}
_Script_Engine::SceneComponent*& _Game_Player_TrainingDummy_BP_AIControllerWaypoint::BP_AIControllerWaypoint_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x228);
}
_Script_CoreUObject::Class* _Game_Player_TrainingDummy_BP_AIControllerWaypoint::BP_AIControllerWaypoint_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Player/TrainingDummy/BP_AIControllerWaypoint.BP_AIControllerWaypoint_C");
    return result;
}
void _Game_Player_TrainingDummy_BP_AIControllerWaypoint::BP_AIControllerWaypoint_C::ExecuteUbergraph_BP_AIControllerWaypoint(int32_t EntryPoint) {
    return;
}
