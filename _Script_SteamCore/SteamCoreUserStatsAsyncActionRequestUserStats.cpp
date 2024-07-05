#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "RequestUserStatsData.hpp"
#include "SteamCoreAsyncAction.hpp"
#include "SteamCoreUserStatsAsyncActionRequestUserStats.hpp"
#include "SteamID.hpp"
void* _Script_SteamCore::SteamCoreUserStatsAsyncActionRequestUserStats::get_OnCallback() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamCoreUserStatsAsyncActionRequestUserStats::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.SteamCoreUserStatsAsyncActionRequestUserStats");
    return result;
}
void _Script_SteamCore::SteamCoreUserStatsAsyncActionRequestUserStats::HandleCallback(_Script_SteamCore::RequestUserStatsData& Data, bool bWasSuccessful) {
    return;
}
_Script_SteamCore::SteamCoreUserStatsAsyncActionRequestUserStats* _Script_SteamCore::SteamCoreUserStatsAsyncActionRequestUserStats::RequestUserStatsAsync(_Script_CoreUObject::Object* WorldContextObject, _Script_SteamCore::SteamID SteamID, float Timeout) {
    return;
}
