#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SteamCoreWebSubsystem.hpp"
#include "WebRemoteStorage.hpp"
void _Script_SteamCoreWeb::WebRemoteStorage::SetUGCUsedByGC(void*& Callback, void* Key, void* SteamID, void* UGCID, int32_t AppID, bool bUsed) {
    return;
}
_Script_CoreUObject::Class* _Script_SteamCoreWeb::WebRemoteStorage::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.WebRemoteStorage");
    return result;
}
void _Script_SteamCoreWeb::WebRemoteStorage::UnsubscribePublishedFile(void*& Callback, void* Key, void* SteamID, int32_t AppID, void* PublishedFileIDs) {
    return;
}
void _Script_SteamCoreWeb::WebRemoteStorage::EnumerateUserSubscribedFiles(void*& Callback, void* Key, void* SteamID, int32_t AppID, int32_t ListType) {
    return;
}
void _Script_SteamCoreWeb::WebRemoteStorage::GetPublishedFileDetails(void*& Callback, void* PublishedFileIDs) {
    return;
}
void _Script_SteamCoreWeb::WebRemoteStorage::GetUGCFileDetails(void*& Callback, void* Key, void* SteamID, void* UGCID, int32_t AppID) {
    return;
}
void _Script_SteamCoreWeb::WebRemoteStorage::SubscribePublishedFile(void*& Callback, void* Key, void* SteamID, int32_t AppID, void* PublishedFileIDs) {
    return;
}
void _Script_SteamCoreWeb::WebRemoteStorage::GetCollectionDetails(void*& Callback, void* PublishedFileIDs) {
    return;
}
void _Script_SteamCoreWeb::WebRemoteStorage::EnumerateUserPublishedFiles(void*& Callback, void* Key, void* SteamID, int32_t AppID) {
    return;
}
