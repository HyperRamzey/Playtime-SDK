#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "HostMigrationData.hpp"
int32_t& _Script_Playtime_Multiplayer::HostMigrationData::get_PlayerCount() {
    return *(int32_t*)((uintptr_t)this + 0x38);
}
void* _Script_Playtime_Multiplayer::HostMigrationData::get_MapName() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Playtime_Multiplayer::HostMigrationData::get_SessionData() {
    return (void*)((uintptr_t)this + 0x3c);
}
void _Script_Playtime_Multiplayer::HostMigrationData::ClearSaveData() {
    return;
}
void* _Script_Playtime_Multiplayer::HostMigrationData::get_MatchData() {
    return (void*)((uintptr_t)this + 0x40);
}
int32_t _Script_Playtime_Multiplayer::HostMigrationData::GetExpectedPlayerCount() {
    return;
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::HostMigrationData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.HostMigrationData");
    return result;
}
void* _Script_Playtime_Multiplayer::HostMigrationData::get_PlayerData() {
    return (void*)((uintptr_t)this + 0xc0);
}
