#include "..\FUObjectArray.hpp"
#include "BP_GameManager_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AudioComponent.hpp"
#include "..\_Script_Engine\BillboardComponent.hpp"
#include "..\_Script_Engine\StaticMesh.hpp"
#include "..\_Script_Playtime_Multiplayer\Monster.hpp"
void* _Game_Gameplay_Game_BP_GameManager::BP_GameManager_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x220);
}
_Script_Engine::AudioComponent*& _Game_Gameplay_Game_BP_GameManager::BP_GameManager_C::get_Music() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x228);
}
_Script_Engine::BillboardComponent*& _Game_Gameplay_Game_BP_GameManager::BP_GameManager_C::get_Billboard() {
    return *(_Script_Engine::BillboardComponent**)((uintptr_t)this + 0x230);
}
void* _Game_Gameplay_Game_BP_GameManager::BP_GameManager_C::get_ToySelection() {
    return (void*)((uintptr_t)this + 0x238);
}
_Script_Playtime_Multiplayer::Monster*& _Game_Gameplay_Game_BP_GameManager::BP_GameManager_C::get_Monster() {
    return *(_Script_Playtime_Multiplayer::Monster**)((uintptr_t)this + 0x248);
}
void* _Game_Gameplay_Game_BP_GameManager::BP_GameManager_C::get_LookForMonsterLoopingTimer() {
    return (void*)((uintptr_t)this + 0x240);
}
void* _Game_Gameplay_Game_BP_GameManager::BP_GameManager_C::get_MonsterFinalLocation() {
    return (void*)((uintptr_t)this + 0x25c);
}
void* _Game_Gameplay_Game_BP_GameManager::BP_GameManager_C::get_MonsterTrendingDirection() {
    return (void*)((uintptr_t)this + 0x250);
}
float& _Game_Gameplay_Game_BP_GameManager::BP_GameManager_C::get_TrendingSensitivityDefault() {
    return *(float*)((uintptr_t)this + 0x268);
}
float& _Game_Gameplay_Game_BP_GameManager::BP_GameManager_C::get_MaxTrend() {
    return *(float*)((uintptr_t)this + 0x26c);
}
void* _Game_Gameplay_Game_BP_GameManager::BP_GameManager_C::get_Cache() {
    return (void*)((uintptr_t)this + 0x270);
}
_Script_CoreUObject::Class* _Game_Gameplay_Game_BP_GameManager::BP_GameManager_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Gameplay/Game/BP_GameManager.BP_GameManager_C");
    return result;
}
void _Game_Gameplay_Game_BP_GameManager::BP_GameManager_C::DetermineMonsterTrend(float& Delta) {
    return;
}
void _Game_Gameplay_Game_BP_GameManager::BP_GameManager_C::GetToyPartMeshFromIndex(int32_t Index, _Script_Engine::StaticMesh*& Output) {
    return;
}
bool _Game_Gameplay_Game_BP_GameManager::BP_GameManager_C::UpdateToysOnHUD() {
    return;
}
void _Game_Gameplay_Game_BP_GameManager::BP_GameManager_C::OnRep_ToySelection() {
    return;
}
void _Game_Gameplay_Game_BP_GameManager::BP_GameManager_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Gameplay_Game_BP_GameManager::BP_GameManager_C::TrainIsFixed() {
    return;
}
void _Game_Gameplay_Game_BP_GameManager::BP_GameManager_C::ReceiveTick0(float DeltaSeconds) {
    return;
}
void _Game_Gameplay_Game_BP_GameManager::BP_GameManager_C::LookForMonster() {
    return;
}
void _Game_Gameplay_Game_BP_GameManager::BP_GameManager_C::ExecuteUbergraph_BP_GameManager(int32_t EntryPoint) {
    return;
}
