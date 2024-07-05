#include "..\FUObjectArray.hpp"
#include "..\_Game_Interface_NavSystem_Blueprints_Actors_BP_NavBaseActor\BP_NavBaseActor_C.hpp"
#include "BP_CommsComponent_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
void _Game_Player_TrainingDummy_BP_CommsComponent::BP_CommsComponent_C::DestroyComm() {
    return;
}
void* _Game_Player_TrainingDummy_BP_CommsComponent::BP_CommsComponent_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0xb0);
}
void _Game_Player_TrainingDummy_BP_CommsComponent::BP_CommsComponent_C::Print_Ping(void* Type) {
    return;
}
_Game_Interface_NavSystem_Blueprints_Actors_BP_NavBaseActor::BP_NavBaseActor_C*& _Game_Player_TrainingDummy_BP_CommsComponent::BP_CommsComponent_C::get_Comm() {
    return *(_Game_Interface_NavSystem_Blueprints_Actors_BP_NavBaseActor::BP_NavBaseActor_C**)((uintptr_t)this + 0xb8);
}
_Script_CoreUObject::Class* _Game_Player_TrainingDummy_BP_CommsComponent::BP_CommsComponent_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Player/TrainingDummy/BP_CommsComponent.BP_CommsComponent_C");
    return result;
}
void _Game_Player_TrainingDummy_BP_CommsComponent::BP_CommsComponent_C::ServerSpawnCommIndicator(void* Type, _Script_CoreUObject::Vector Spawn_Transform_Location) {
    return;
}
void _Game_Player_TrainingDummy_BP_CommsComponent::BP_CommsComponent_C::MulticastSpawnComm(void* InputPin, _Script_CoreUObject::Vector Spawn_Transform_Location) {
    return;
}
void _Game_Player_TrainingDummy_BP_CommsComponent::BP_CommsComponent_C::ReceiveEndPlay0(void* EndPlayReason) {
    return;
}
void _Game_Player_TrainingDummy_BP_CommsComponent::BP_CommsComponent_C::ExecuteUbergraph_BP_CommsComponent(int32_t EntryPoint) {
    return;
}
