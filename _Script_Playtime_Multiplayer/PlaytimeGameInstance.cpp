#include "..\FUObjectArray.hpp"
#include "..\_Script_AdvancedSessions\AdvancedFriendsGameInstance.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HostMigrationData.hpp"
#include "LevelStruct.hpp"
#include "PlaytimeGameInstance.hpp"
#include "QueueData.hpp"
#include "TooltipSaveGame.hpp"
void* _Script_Playtime_Multiplayer::PlaytimeGameInstance::get_NewHostIP() {
    return (void*)((uintptr_t)this + 0x238);
}
_Script_Playtime_Multiplayer::TooltipSaveGame*& _Script_Playtime_Multiplayer::PlaytimeGameInstance::get_SaveTooltipsInstance() {
    return *(_Script_Playtime_Multiplayer::TooltipSaveGame**)((uintptr_t)this + 0x228);
}
bool _Script_Playtime_Multiplayer::PlaytimeGameInstance::get_bHasVisitedSplashScreen() {
    return (*(uint8_t*)((uintptr_t)this + 0x230 + 0)) & 1 != 0;
}
bool _Script_Playtime_Multiplayer::PlaytimeGameInstance::get_bIsNewHost() {
    return (*(uint8_t*)((uintptr_t)this + 0x2b8 + 0)) & 1 != 0;
}
void* _Script_Playtime_Multiplayer::PlaytimeGameInstance::get_TransitionType() {
    return (void*)((uintptr_t)this + 0x231);
}
void _Script_Playtime_Multiplayer::PlaytimeGameInstance::set_bHasVisitedSplashScreen(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x230 + 0);
    *(uint8_t*)((uintptr_t)this + 0x230 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Playtime_Multiplayer::PlaytimeGameInstance::get_LastLevel() {
    return (void*)((uintptr_t)this + 0x248);
}
void _Script_Playtime_Multiplayer::PlaytimeGameInstance::set_bIsMigrating(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2b9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2b9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Playtime_Multiplayer::PlaytimeGameInstance::get_LastLevelStruct() {
    return (void*)((uintptr_t)this + 0x258);
}
void _Script_Playtime_Multiplayer::PlaytimeGameInstance::set_bIsNewHost(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2b8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2b8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Playtime_Multiplayer::PlaytimeGameInstance::get_bIsMigrating() {
    return (*(uint8_t*)((uintptr_t)this + 0x2b9 + 0)) & 1 != 0;
}
float& _Script_Playtime_Multiplayer::PlaytimeGameInstance::get_HostMigration_ReconnectTimeout() {
    return *(float*)((uintptr_t)this + 0x2bc);
}
_Script_Playtime_Multiplayer::HostMigrationData*& _Script_Playtime_Multiplayer::PlaytimeGameInstance::get_HostMigrationData() {
    return *(_Script_Playtime_Multiplayer::HostMigrationData**)((uintptr_t)this + 0x2c0);
}
void* _Script_Playtime_Multiplayer::PlaytimeGameInstance::get_QueueData() {
    return (void*)((uintptr_t)this + 0x2e8);
}
void* _Script_Playtime_Multiplayer::PlaytimeGameInstance::get_OnMigrateHost() {
    return (void*)((uintptr_t)this + 0x2c8);
}
void* _Script_Playtime_Multiplayer::PlaytimeGameInstance::get_OnMigrateClient() {
    return (void*)((uintptr_t)this + 0x2d8);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::PlaytimeGameInstance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.PlaytimeGameInstance");
    return result;
}
bool _Script_Playtime_Multiplayer::PlaytimeGameInstance::ToggleWantsToBeMonster() {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeGameInstance::StartMigration() {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeGameInstance::SetWantsToBeMonster(bool bWantsToBeMonster) {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeGameInstance::SetTransitionType(void* In_TransitionType) {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeGameInstance::SetLevelStruct(_Script_Playtime_Multiplayer::LevelStruct LevelStruct) {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeGameInstance::RecieveMonsterChoice(bool bWasSelected) {
    return;
}
bool _Script_Playtime_Multiplayer::PlaytimeGameInstance::GetWantsToBeMonster() {
    return;
}
_Script_Playtime_Multiplayer::QueueData _Script_Playtime_Multiplayer::PlaytimeGameInstance::GetQueueData() {
    return;
}
int32_t _Script_Playtime_Multiplayer::PlaytimeGameInstance::GetNumberOfGamesWithoutMonster() {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeGameInstance::GetBestIP(void*& HostIP, void*& HostName) {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeGameInstance::FlagHasVisitedSplashScreen() {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeGameInstance::DetermineTransition() {
    return;
}
