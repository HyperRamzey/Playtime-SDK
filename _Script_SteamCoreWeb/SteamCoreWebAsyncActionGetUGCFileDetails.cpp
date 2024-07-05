#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionGetUGCFileDetails.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetUGCFileDetails::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetUGCFileDetails");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionGetUGCFileDetails* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetUGCFileDetails::GetUGCFileDetailsAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, void* SteamID, void* UGCID, int32_t AppID) {
    return;
}
