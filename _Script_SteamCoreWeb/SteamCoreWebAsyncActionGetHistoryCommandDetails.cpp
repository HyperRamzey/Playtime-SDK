#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionGetHistoryCommandDetails.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetHistoryCommandDetails::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetHistoryCommandDetails");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionGetHistoryCommandDetails* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetHistoryCommandDetails::GetHistoryCommandDetailsAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, int32_t AppID, void* SteamID, void* Command, void* ContextId, void* Arguments) {
    return;
}
