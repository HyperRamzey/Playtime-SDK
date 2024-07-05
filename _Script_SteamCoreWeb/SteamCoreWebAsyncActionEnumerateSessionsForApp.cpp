#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionEnumerateSessionsForApp.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionEnumerateSessionsForApp::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionEnumerateSessionsForApp");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionEnumerateSessionsForApp* _Script_SteamCoreWeb::SteamCoreWebAsyncActionEnumerateSessionsForApp::EnumerateSessionsForAppAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, int32_t AppID, void* SteamID, bool bIncludeAllUserMessages, bool bIncludeAuthUserMessage, void* Language) {
    return;
}
