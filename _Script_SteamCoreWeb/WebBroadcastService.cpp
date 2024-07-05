#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SteamCoreWebSubsystem.hpp"
#include "WebBroadcastService.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::WebBroadcastService::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.WebBroadcastService");
    return result;
}
void _Script_SteamCoreWeb::WebBroadcastService::PostGameDataFrame(void*& Callback, void* Key, int32_t AppID, void* SteamID, void* BroadcastId, void* FrameData) {
    return;
}
