#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionCancelAppListingsForUser.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionCancelAppListingsForUser::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionCancelAppListingsForUser");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionCancelAppListingsForUser* _Script_SteamCoreWeb::SteamCoreWebAsyncActionCancelAppListingsForUser::CancelAppListingsForUserAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, int32_t AppID, void* SteamID, bool bSynchronous) {
    return;
}
