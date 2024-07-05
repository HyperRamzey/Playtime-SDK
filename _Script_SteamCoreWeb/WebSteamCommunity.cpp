#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SteamCoreWebSubsystem.hpp"
#include "WebSteamCommunity.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::WebSteamCommunity::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.WebSteamCommunity");
    return result;
}
void _Script_SteamCoreWeb::WebSteamCommunity::ReportAbuse(void*& Callback, void* Key, void* SteamIdActor, void* SteamIdTarget, int32_t AppID, int32_t AbuseType, int32_t ContentType, void* Description, void* Gid) {
    return;
}
