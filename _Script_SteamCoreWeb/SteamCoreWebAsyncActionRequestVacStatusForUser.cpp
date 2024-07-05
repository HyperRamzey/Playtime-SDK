#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionRequestVacStatusForUser.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionRequestVacStatusForUser::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionRequestVacStatusForUser");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionRequestVacStatusForUser* _Script_SteamCoreWeb::SteamCoreWebAsyncActionRequestVacStatusForUser::RequestVacStatusForUserAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, void* SteamID, int32_t AppID, void* SessionID) {
    return;
}
