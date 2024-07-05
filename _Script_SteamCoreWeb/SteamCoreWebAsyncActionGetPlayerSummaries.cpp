#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionGetPlayerSummaries.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetPlayerSummaries::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetPlayerSummaries");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionGetPlayerSummaries* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetPlayerSummaries::GetPlayerSummariesAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, void* SteamIDs) {
    return;
}
