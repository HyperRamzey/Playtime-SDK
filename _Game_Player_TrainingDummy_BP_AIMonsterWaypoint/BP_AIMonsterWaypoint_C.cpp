#include "..\FUObjectArray.hpp"
#include "..\_Game_Player_TrainingDummy_BP_AIControllerWaypoint\BP_AIControllerWaypoint_C.hpp"
#include "BP_AIMonsterWaypoint_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BillboardComponent.hpp"
_Script_Engine::BillboardComponent*& _Game_Player_TrainingDummy_BP_AIMonsterWaypoint::BP_AIMonsterWaypoint_C::get_Billboard() {
    return *(_Script_Engine::BillboardComponent**)((uintptr_t)this + 0x250);
}
_Script_CoreUObject::Class* _Game_Player_TrainingDummy_BP_AIMonsterWaypoint::BP_AIMonsterWaypoint_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Player/TrainingDummy/BP_AIMonsterWaypoint.BP_AIMonsterWaypoint_C");
    return result;
}
