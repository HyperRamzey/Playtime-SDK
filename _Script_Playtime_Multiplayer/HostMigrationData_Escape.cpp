#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HostMigrationData.hpp"
#include "HostMigrationData_Escape.hpp"
void* _Script_Playtime_Multiplayer::HostMigrationData_Escape::get_ToyPartData() {
    return (void*)((uintptr_t)this + 0x1f0);
}
void* _Script_Playtime_Multiplayer::HostMigrationData_Escape::get_Escape_MatchData() {
    return (void*)((uintptr_t)this + 0xd0);
}
void* _Script_Playtime_Multiplayer::HostMigrationData_Escape::get_TrainData() {
    return (void*)((uintptr_t)this + 0x218);
}
void* _Script_Playtime_Multiplayer::HostMigrationData_Escape::get_Escape_PlayerData() {
    return (void*)((uintptr_t)this + 0x178);
}
void* _Script_Playtime_Multiplayer::HostMigrationData_Escape::get_MonsterData() {
    return (void*)((uintptr_t)this + 0x190);
}
void* _Script_Playtime_Multiplayer::HostMigrationData_Escape::get_ToyMachineData() {
    return (void*)((uintptr_t)this + 0x200);
}
void* _Script_Playtime_Multiplayer::HostMigrationData_Escape::get_PuzzleData() {
    return (void*)((uintptr_t)this + 0x240);
}
void* _Script_Playtime_Multiplayer::HostMigrationData_Escape::get_ClosedSlamDoors() {
    return (void*)((uintptr_t)this + 0x250);
}
void* _Script_Playtime_Multiplayer::HostMigrationData_Escape::get_ClosedGrapples() {
    return (void*)((uintptr_t)this + 0x260);
}
void* _Script_Playtime_Multiplayer::HostMigrationData_Escape::get_MiniHuggys() {
    return (void*)((uintptr_t)this + 0x270);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::HostMigrationData_Escape::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.HostMigrationData_Escape");
    return result;
}
