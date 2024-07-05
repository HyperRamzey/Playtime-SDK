#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "HostMigrationData.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct HostMigrationData_Escape : public HostMigrationData {
    private: char pad_d0[0x1b0]; public:
    void* get_Escape_MatchData();
    void* get_Escape_PlayerData();
    void* get_MonsterData();
    void* get_ToyPartData();
    void* get_ToyMachineData();
    void* get_TrainData();
    void* get_PuzzleData();
    void* get_ClosedSlamDoors();
    void* get_ClosedGrapples();
    void* get_MiniHuggys();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x280
#pragma pack(pop)
}
