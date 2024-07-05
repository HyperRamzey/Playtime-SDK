#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SteamCoreWebSubsystem.hpp"
#include "WebGameServersService.hpp"
void _Script_SteamCoreWeb::WebGameServersService::SetMemo(void*& Callback, void* Key, void* SteamID, void* Memo) {
    return;
}
_Script_CoreUObject::Class* _Script_SteamCoreWeb::WebGameServersService::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.WebGameServersService");
    return result;
}
void _Script_SteamCoreWeb::WebGameServersService::GetAccountPublicInfo(void*& Callback, void* Key, void* SteamID) {
    return;
}
void _Script_SteamCoreWeb::WebGameServersService::SetBanStatus(void*& Callback, void* Key, void* SteamID, bool bBanned, int32_t banSeconds) {
    return;
}
void _Script_SteamCoreWeb::WebGameServersService::QueryLoginToken(void*& Callback, void* Key, void* LoginToken) {
    return;
}
void _Script_SteamCoreWeb::WebGameServersService::ResetLoginToken(void*& Callback, void* Key, void* SteamID) {
    return;
}
void _Script_SteamCoreWeb::WebGameServersService::GetServerSteamIDsByIP(void*& Callback, void* Key, void* ServerIP) {
    return;
}
void _Script_SteamCoreWeb::WebGameServersService::GetServerIPsBySteamID(void*& Callback, void* Key, void* ServerSteamId) {
    return;
}
void _Script_SteamCoreWeb::WebGameServersService::GetAccountList(void*& Callback, void* Key) {
    return;
}
void _Script_SteamCoreWeb::WebGameServersService::DeleteAccount(void*& Callback, void* Key, void* SteamID) {
    return;
}
void _Script_SteamCoreWeb::WebGameServersService::CreateAccount(void*& Callback, void* Key, int32_t AppID, void* Memo) {
    return;
}
