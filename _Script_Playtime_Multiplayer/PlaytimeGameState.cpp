#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\GameState.hpp"
#include "..\_Script_Engine\PlayerController.hpp"
#include "HostMigrationData.hpp"
#include "LevelStruct.hpp"
#include "PlaytimeGameInstance.hpp"
#include "PlaytimeGameState.hpp"
#include "QueueData.hpp"
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::PlaytimeGameState::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.PlaytimeGameState");
    return result;
}
int32_t& _Script_Playtime_Multiplayer::PlaytimeGameState::get_ConnectedPlayerCount() {
    return *(int32_t*)((uintptr_t)this + 0x2c8);
}
void* _Script_Playtime_Multiplayer::PlaytimeGameState::get_HostMigrationType() {
    return (void*)((uintptr_t)this + 0x290);
}
void _Script_Playtime_Multiplayer::PlaytimeGameState::CheckForMigratingPlayers() {
    return;
}
float& _Script_Playtime_Multiplayer::PlaytimeGameState::get_WaitForMigratingClientsDuration() {
    return *(float*)((uintptr_t)this + 0x2a4);
}
void* _Script_Playtime_Multiplayer::PlaytimeGameState::get_HostMigrationDataClass() {
    return (void*)((uintptr_t)this + 0x298);
}
float& _Script_Playtime_Multiplayer::PlaytimeGameState::get_HostUpdateRate() {
    return *(float*)((uintptr_t)this + 0x2a0);
}
void* _Script_Playtime_Multiplayer::PlaytimeGameState::get_UpdateHostTimer() {
    return (void*)((uintptr_t)this + 0x2b8);
}
_Script_Playtime_Multiplayer::PlaytimeGameInstance*& _Script_Playtime_Multiplayer::PlaytimeGameState::get_GameInstance() {
    return *(_Script_Playtime_Multiplayer::PlaytimeGameInstance**)((uintptr_t)this + 0x2c0);
}
void* _Script_Playtime_Multiplayer::PlaytimeGameState::get_QueueDatas() {
    return (void*)((uintptr_t)this + 0x2d0);
}
_Script_Engine::PlayerController* _Script_Playtime_Multiplayer::PlaytimeGameState::Authority_ChooseMonster() {
    return;
}
void* _Script_Playtime_Multiplayer::PlaytimeGameState::get_ProspectiveMonsters() {
    return (void*)((uintptr_t)this + 0x320);
}
void _Script_Playtime_Multiplayer::PlaytimeGameState::UpdateBestPotentialHost() {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeGameState::StartWaitForMigratingClientsTimer() {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeGameState::SaveMigrationData(_Script_Playtime_Multiplayer::HostMigrationData* Data) {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeGameState::PrepareLoadData() {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeGameState::OnRep_ProspectiveMonsters() {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeGameState::Multicast_UpdateMigrationData(void* NewIP, void* HostName, void* LevelName, _Script_Playtime_Multiplayer::LevelStruct& LevelStruct) {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeGameState::Multicast_SendMonsterDecision(int32_t PlayerID) {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeGameState::LoadMigrationData(_Script_Playtime_Multiplayer::HostMigrationData* Data) {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeGameState::Authority_ReceiveQueueData(int32_t PlayerID, _Script_Playtime_Multiplayer::QueueData Data) {
    return;
}
void* _Script_Playtime_Multiplayer::PlaytimeGameState::GetQueueDatasAsString() {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeGameState::BeginPlay() {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeGameState::Authority_StartUpdateHostMigrationTimer() {
    return;
}
