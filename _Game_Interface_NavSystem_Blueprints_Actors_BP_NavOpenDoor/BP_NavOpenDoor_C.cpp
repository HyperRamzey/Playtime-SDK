#include "..\FUObjectArray.hpp"
#include "..\_Game_Interface_NavSystem_Blueprints_Actors_BP_NavBaseActor\BP_NavBaseActor_C.hpp"
#include "BP_NavOpenDoor_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void _Game_Interface_NavSystem_Blueprints_Actors_BP_NavOpenDoor::BP_NavOpenDoor_C::ExecuteUbergraph_BP_NavOpenDoor(int32_t EntryPoint) {
    return;
}
void* _Game_Interface_NavSystem_Blueprints_Actors_BP_NavOpenDoor::BP_NavOpenDoor_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x240);
}
float& _Game_Interface_NavSystem_Blueprints_Actors_BP_NavOpenDoor::BP_NavOpenDoor_C::get_LifeTime() {
    return *(float*)((uintptr_t)this + 0x248);
}
_Script_CoreUObject::Class* _Game_Interface_NavSystem_Blueprints_Actors_BP_NavOpenDoor::BP_NavOpenDoor_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Interface/NavSystem/Blueprints/Actors/BP_NavOpenDoor.BP_NavOpenDoor_C");
    return result;
}
void _Game_Interface_NavSystem_Blueprints_Actors_BP_NavOpenDoor::BP_NavOpenDoor_C::ReceiveBeginPlay() {
    return;
}
