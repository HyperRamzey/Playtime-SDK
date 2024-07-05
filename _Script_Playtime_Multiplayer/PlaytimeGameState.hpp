#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\GameState.hpp"
#include "QueueData.hpp"
namespace _Script_Playtime_Multiplayer {
struct PlaytimeGameInstance;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
struct HostMigrationData;
}
namespace _Script_Engine {
struct PlayerController;
}
namespace _Script_Playtime_Multiplayer {
struct LevelStruct;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct PlaytimeGameState : public _Script_Engine::GameState {
    private: char pad_290[0xa0]; public:
    void* get_HostMigrationType();
    void* get_HostMigrationDataClass();
    float& get_HostUpdateRate();
    float& get_WaitForMigratingClientsDuration();
    void* get_UpdateHostTimer();
    _Script_Playtime_Multiplayer::PlaytimeGameInstance*& get_GameInstance();
    int32_t& get_ConnectedPlayerCount();
    void* get_QueueDatas();
    void* get_ProspectiveMonsters();
    static _Script_CoreUObject::Class* static_class();
    void UpdateBestPotentialHost();
    void StartWaitForMigratingClientsTimer();
    void SaveMigrationData(_Script_Playtime_Multiplayer::HostMigrationData* Data);
    void PrepareLoadData();
    void OnRep_ProspectiveMonsters();
    void Multicast_UpdateMigrationData(void* NewIP, void* HostName, void* LevelName, _Script_Playtime_Multiplayer::LevelStruct& LevelStruct);
    void Multicast_SendMonsterDecision(int32_t PlayerID);
    void LoadMigrationData(_Script_Playtime_Multiplayer::HostMigrationData* Data);
    void* GetQueueDatasAsString();
    void CheckForMigratingPlayers();
    void BeginPlay();
    void Authority_StartUpdateHostMigrationTimer();
    void Authority_ReceiveQueueData(int32_t PlayerID, _Script_Playtime_Multiplayer::QueueData Data);
    _Script_Engine::PlayerController* Authority_ChooseMonster();
}; // Size: 0x330
#pragma pack(pop)
}
