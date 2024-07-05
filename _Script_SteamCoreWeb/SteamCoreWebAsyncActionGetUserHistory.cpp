#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionGetUserHistory.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetUserHistory::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetUserHistory");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionGetUserHistory* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetUserHistory::GetUserHistoryAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, int32_t AppID, void* SteamID, void* ContextId, int32_t StartTime, int32_t EndTime) {
    return;
}
