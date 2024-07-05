#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionSetUGCUsedByGC.hpp"
_Script_SteamCoreWeb::SteamCoreWebAsyncActionSetUGCUsedByGC* _Script_SteamCoreWeb::SteamCoreWebAsyncActionSetUGCUsedByGC::SetUGCUsedByGCAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, void* SteamID, void* UGCID, int32_t AppID, bool bUsed) {
    return;
}
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionSetUGCUsedByGC::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionSetUGCUsedByGC");
    return result;
}
