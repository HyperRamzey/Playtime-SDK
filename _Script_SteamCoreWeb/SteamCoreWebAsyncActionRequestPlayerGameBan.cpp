#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionRequestPlayerGameBan.hpp"
_Script_SteamCoreWeb::SteamCoreWebAsyncActionRequestPlayerGameBan* _Script_SteamCoreWeb::SteamCoreWebAsyncActionRequestPlayerGameBan::RequestPlayerGameBanAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, void* SteamID, int32_t AppID, void* ReportID, void* CheatDescription, int32_t Duration, bool bDelayBan) {
    return;
}
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionRequestPlayerGameBan::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionRequestPlayerGameBan");
    return result;
}
