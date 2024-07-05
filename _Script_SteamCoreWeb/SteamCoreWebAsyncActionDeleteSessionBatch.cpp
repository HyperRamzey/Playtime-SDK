#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionDeleteSessionBatch.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionDeleteSessionBatch::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionDeleteSessionBatch");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionDeleteSessionBatch* _Script_SteamCoreWeb::SteamCoreWebAsyncActionDeleteSessionBatch::DeleteSessionBatchAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, void* SessionID, int32_t AppID) {
    return;
}
