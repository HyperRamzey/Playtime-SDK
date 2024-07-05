#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "NumberOfCurrentPlayers.hpp"
#include "SteamCoreAsyncAction.hpp"
#include "SteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers.hpp"
void _Script_SteamCore::SteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers::HandleCallback(_Script_SteamCore::NumberOfCurrentPlayers& Data, bool bWasSuccessful) {
    return;
}
void* _Script_SteamCore::SteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers::get_OnCallback() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_SteamCore::SteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers* _Script_SteamCore::SteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers::GetNumberOfCurrentPlayersAsync(_Script_CoreUObject::Object* WorldContextObject, float Timeout) {
    return;
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.SteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers");
    return result;
}
