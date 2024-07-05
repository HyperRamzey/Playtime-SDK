#include "..\FUObjectArray.hpp"
#include "..\_Game_Interface_NavSystem_Blueprints_Actors_BP_NavBaseActor\BP_NavBaseActor_C.hpp"
#include "BP_NavDoorRevive_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Game_Interface_NavSystem_Blueprints_Actors_BP_NavDoorRevive::BP_NavDoorRevive_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Interface/NavSystem/Blueprints/Actors/BP_NavDoorRevive.BP_NavDoorRevive_C");
    return result;
}
void* _Game_Interface_NavSystem_Blueprints_Actors_BP_NavDoorRevive::BP_NavDoorRevive_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x240);
}
float& _Game_Interface_NavSystem_Blueprints_Actors_BP_NavDoorRevive::BP_NavDoorRevive_C::get_LifeTime() {
    return *(float*)((uintptr_t)this + 0x248);
}
void _Game_Interface_NavSystem_Blueprints_Actors_BP_NavDoorRevive::BP_NavDoorRevive_C::FadeThenDestroy() {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Actors_BP_NavDoorRevive::BP_NavDoorRevive_C::ExecuteUbergraph_BP_NavDoorRevive(int32_t EntryPoint) {
    return;
}
