#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AdvancedSessions\AdvancedFriendsGameInstance.hpp"
#include "LevelStruct.hpp"
#include "QueueData.hpp"
namespace _Script_Playtime_Multiplayer {
struct TooltipSaveGame;
}
namespace _Script_Playtime_Multiplayer {
struct HostMigrationData;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct PlaytimeGameInstance : public _Script_AdvancedSessions::AdvancedFriendsGameInstance {
    private: char pad_228[0xc8]; public:
    _Script_Playtime_Multiplayer::TooltipSaveGame*& get_SaveTooltipsInstance();
    bool get_bHasVisitedSplashScreen();
    void set_bHasVisitedSplashScreen(bool value);
    void* get_TransitionType();
    void* get_NewHostIP();
    void* get_LastLevel();
    void* get_LastLevelStruct();
    bool get_bIsNewHost();
    void set_bIsNewHost(bool value);
    bool get_bIsMigrating();
    void set_bIsMigrating(bool value);
    float& get_HostMigration_ReconnectTimeout();
    _Script_Playtime_Multiplayer::HostMigrationData*& get_HostMigrationData();
    void* get_OnMigrateHost();
    void* get_OnMigrateClient();
    void* get_QueueData();
    static _Script_CoreUObject::Class* static_class();
    bool ToggleWantsToBeMonster();
    void StartMigration();
    void SetWantsToBeMonster(bool bWantsToBeMonster);
    void SetTransitionType(void* In_TransitionType);
    void SetLevelStruct(_Script_Playtime_Multiplayer::LevelStruct LevelStruct);
    void RecieveMonsterChoice(bool bWasSelected);
    bool GetWantsToBeMonster();
    _Script_Playtime_Multiplayer::QueueData GetQueueData();
    int32_t GetNumberOfGamesWithoutMonster();
    void GetBestIP(void*& HostIP, void*& HostName);
    void FlagHasVisitedSplashScreen();
    void DetermineTransition();
}; // Size: 0x2f0
#pragma pack(pop)
}
