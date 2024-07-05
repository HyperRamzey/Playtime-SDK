#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SteamCoreWebSubsystem.hpp"
#include "WebPublishedFileService.hpp"
void _Script_SteamCoreWeb::WebPublishedFileService::QueryFiles(void*& Callback, void* Key, int32_t QueryType, int32_t Page, void* Cursor, int32_t NumPerPage, int32_t CreatorAppID, int32_t AppID, void* RequiredTags, void* ExcludedTags, bool bMatchAllTags, void* RequiredFlags, void* OmittedFlags, void* SearchText, int32_t FileType, void* ChildPublishedFileId, int32_t Days, bool bIncludeRecentVotesOnly, int32_t CacheMaxAgeSeconds, int32_t Language, void* RequiredKvTags, bool bTotalOnly, bool bIDsOnly, bool bReturnVoteData, bool bReturnTags, bool bReturnKvTags, bool bReturnPreviews, bool bReturnChildren, bool bReturnShortDescription, bool bReturnForSaleData, bool bReturnMetadata, int32_t ReturnPlaytimeStats) {
    return;
}
_Script_CoreUObject::Class* _Script_SteamCoreWeb::WebPublishedFileService::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.WebPublishedFileService");
    return result;
}
void _Script_SteamCoreWeb::WebPublishedFileService::UpdateTags(void*& Callback, void* Key, void* PublishedFileID, int32_t AppID, void* AddTags, void* RemoveTags) {
    return;
}
void _Script_SteamCoreWeb::WebPublishedFileService::UpdateIncompatibleStatus(void*& Callback, void* Key, void* PublishedFileID, int32_t AppID, bool bIncompatible) {
    return;
}
void _Script_SteamCoreWeb::WebPublishedFileService::UpdateBanStatus(void*& Callback, void* Key, void* PublishedFileID, int32_t AppID, bool bBanned, void* Reason) {
    return;
}
void _Script_SteamCoreWeb::WebPublishedFileService::SetDeveloperMetadata(void*& Callback, void* Key, void* PublishedFileID, int32_t AppID, void* MetaData) {
    return;
}
