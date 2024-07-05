#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SteamCoreWebSubsystem.hpp"
#include "WebSteamUser.hpp"
void _Script_SteamCoreWeb::WebSteamUser::GetPlayerBans(void*& Callback, void* Key, void* SteamIDs) {
    return;
}
void _Script_SteamCoreWeb::WebSteamUser::GetPublisherAppOwnership(void*& Callback, void* Key, void* SteamID) {
    return;
}
_Script_CoreUObject::Class* _Script_SteamCoreWeb::WebSteamUser::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.WebSteamUser");
    return result;
}
void _Script_SteamCoreWeb::WebSteamUser::ResolveVanityURL(void*& Callback, void* Key, void* VanityURL, void* URLType) {
    return;
}
void _Script_SteamCoreWeb::WebSteamUser::GrantPackage(void*& Callback, void* Key, void* SteamID, int32_t PackageId, void* Ipaddress, void* ThirdPartyKey, int32_t ThirdPartyAppId) {
    return;
}
void _Script_SteamCoreWeb::WebSteamUser::GetUserGroupList(void*& Callback, void* Key, void* SteamID) {
    return;
}
void _Script_SteamCoreWeb::WebSteamUser::GetPublisherAppOwnershipChanges(void*& Callback, void* Key, void* PackageRowVersion, void* CDKeyRowVersion) {
    return;
}
void _Script_SteamCoreWeb::WebSteamUser::GetPlayerSummaries(void*& Callback, void* Key, void* SteamIDs) {
    return;
}
void _Script_SteamCoreWeb::WebSteamUser::GetFriendList(void*& Callback, void* Key, void* SteamID, void* Relationship) {
    return;
}
void _Script_SteamCoreWeb::WebSteamUser::GetAppPriceInfo(void*& Callback, void* Key, void* SteamID, void* AppIDs) {
    return;
}
void _Script_SteamCoreWeb::WebSteamUser::CheckAppOwnership(void*& Callback, void* Key, void* SteamID, int32_t AppID) {
    return;
}
