#include "..\FUObjectArray.hpp"
#include "..\_Game_Gameplay_Game_BP_Train\BP_Train_C.hpp"
#include "BP_TrainCall_C.hpp"
#include "..\_Game_Gameplay_Puzzles_Triggers_GeneratorPuzzle_BP_MP_HandPanel\BP_MP_HandPanel_C.hpp"
#include "..\_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter\BP_NetworkCharacter_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\SphereComponent.hpp"
void* _Game_Gameplay_Puzzles_Triggers_BP_TrainCall::BP_TrainCall_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x2b8);
}
void* _Game_Gameplay_Puzzles_Triggers_BP_TrainCall::BP_TrainCall_C::get_Train_Travel_Timer_Handle() {
    return (void*)((uintptr_t)this + 0x2d8);
}
_Script_Engine::SphereComponent*& _Game_Gameplay_Puzzles_Triggers_BP_TrainCall::BP_TrainCall_C::get_Sphere() {
    return *(_Script_Engine::SphereComponent**)((uintptr_t)this + 0x2c0);
}
bool _Game_Gameplay_Puzzles_Triggers_BP_TrainCall::BP_TrainCall_C::get_Active() {
    return (*(uint8_t*)((uintptr_t)this + 0x2d0 + 0)) & 1 != 0;
}
_Game_Gameplay_Game_BP_Train::BP_Train_C*& _Game_Gameplay_Puzzles_Triggers_BP_TrainCall::BP_TrainCall_C::get_Train() {
    return *(_Game_Gameplay_Game_BP_Train::BP_Train_C**)((uintptr_t)this + 0x2c8);
}
void _Game_Gameplay_Puzzles_Triggers_BP_TrainCall::BP_TrainCall_C::set_Active(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2d0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2d0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Game_Gameplay_Puzzles_Triggers_BP_TrainCall::BP_TrainCall_C::get_Station() {
    return *(int32_t*)((uintptr_t)this + 0x2d4);
}
void _Game_Gameplay_Puzzles_Triggers_BP_TrainCall::BP_TrainCall_C::Highlight() {
    return;
}
_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C*& _Game_Gameplay_Puzzles_Triggers_BP_TrainCall::BP_TrainCall_C::get_WaitingPlayer() {
    return *(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C**)((uintptr_t)this + 0x2e0);
}
_Script_CoreUObject::Class* _Game_Gameplay_Puzzles_Triggers_BP_TrainCall::BP_TrainCall_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Gameplay/Puzzles/Triggers/BP_TrainCall.BP_TrainCall_C");
    return result;
}
void _Game_Gameplay_Puzzles_Triggers_BP_TrainCall::BP_TrainCall_C::OnRep_Active() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_TrainCall::BP_TrainCall_C::ReceiveBeginPlay() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_TrainCall::BP_TrainCall_C::ToggleActive() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_TrainCall::BP_TrainCall_C::PanelActivated() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_TrainCall::BP_TrainCall_C::IsPlayerNearby() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_TrainCall::BP_TrainCall_C::ReceiveActorEndOverlap(_Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_TrainCall::BP_TrainCall_C::CheckIfTrainArrived() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_TrainCall::BP_TrainCall_C::ExecuteUbergraph_BP_TrainCall(int32_t EntryPoint) {
    return;
}
