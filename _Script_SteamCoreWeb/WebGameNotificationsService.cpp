#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SteamCoreWebSubsystem.hpp"
#include "WebGameNotificationsService.hpp"
void _Script_SteamCoreWeb::WebGameNotificationsService::DeleteSessionBatch(void*& Callback, void* Key, void* SessionID, int32_t AppID) {
    return;
}
void _Script_SteamCoreWeb::WebGameNotificationsService::UpdateSession(void*& Callback, void* Key, void* SessionID, int32_t AppID, void* Title, void* Users, void* SteamID) {
    return;
}
_Script_CoreUObject::Class* _Script_SteamCoreWeb::WebGameNotificationsService::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.WebGameNotificationsService");
    return result;
}
void _Script_SteamCoreWeb::WebGameNotificationsService::CreateSession(void*& Callback, void* Key, int32_t AppID, void* Context, void* Title, void* Users, void* SteamID) {
    return;
}
void _Script_SteamCoreWeb::WebGameNotificationsService::DeleteSession(void*& Callback, void* Key, void* SessionID, int32_t AppID, void* SteamID) {
    return;
}
void _Script_SteamCoreWeb::WebGameNotificationsService::RequestNotifications(void*& Callback, void* Key, void* SteamID, int32_t AppID) {
    return;
}
void _Script_SteamCoreWeb::WebGameNotificationsService::GetSessionDetailsForApp(void*& Callback, void* Key, void* Sessions, int32_t AppID, void* Language) {
    return;
}
void _Script_SteamCoreWeb::WebGameNotificationsService::EnumerateSessionsForApp(void*& Callback, void* Key, int32_t AppID, void* SteamID, bool bIncludeAllUserMessages, bool bIncludeAuthUserMessage, void* Language) {
    return;
}
