#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PublishedFileID.hpp"
#include "SteamCoreSubsystem.hpp"
#include "SteamID.hpp"
#include "SteamUGCDetails.hpp"
#include "UGC.hpp"
#include "UGCQueryHandle.hpp"
#include "UGCUpdateHandle.hpp"
void _Script_SteamCore::UGC::SuspendDownloads(bool bSuspend) {
    return;
}
int32_t _Script_SteamCore::UGC::GetQueryUGCNumAdditionalPreviews(_Script_SteamCore::UGCQueryHandle Handle, int32_t Index) {
    return;
}
_Script_CoreUObject::Class* _Script_SteamCore::UGC::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.UGC");
    return result;
}
void* _Script_SteamCore::UGC::get_ItemInstalled() {
    return (void*)((uintptr_t)this + 0x48);
}
void _Script_SteamCore::UGC::RemoveAppDependency(void*& Callback, _Script_SteamCore::PublishedFileID PublishedFileID, int32_t AppID) {
    return;
}
void* _Script_SteamCore::UGC::get_DownloadItemResult() {
    return (void*)((uintptr_t)this + 0x58);
}
bool _Script_SteamCore::UGC::SetLanguage(_Script_SteamCore::UGCQueryHandle Handle, void* Language) {
    return;
}
bool _Script_SteamCore::UGC::UpdateItemPreviewVideo(_Script_SteamCore::UGCUpdateHandle Handle, int32_t Index, void* PreviewVideo) {
    return;
}
bool _Script_SteamCore::UGC::UpdateItemPreviewFile(_Script_SteamCore::UGCUpdateHandle Handle, int32_t Index, void* PreviewFile) {
    return;
}
void _Script_SteamCore::UGC::UnsubscribeItem(void*& Callback, _Script_SteamCore::PublishedFileID PublishedFileID) {
    return;
}
void _Script_SteamCore::UGC::SubscribeItem(void*& Callback, _Script_SteamCore::PublishedFileID PublishedFileID) {
    return;
}
void _Script_SteamCore::UGC::SubmitItemUpdate(void*& Callback, _Script_SteamCore::UGCUpdateHandle Handle, void* ChangeNote) {
    return;
}
bool _Script_SteamCore::UGC::SetCloudFileNameFilter(_Script_SteamCore::UGCQueryHandle Handle, void* MatchCloudFileName) {
    return;
}
void _Script_SteamCore::UGC::StopPlaytimeTrackingForAllItems(void*& Callback) {
    return;
}
void _Script_SteamCore::UGC::StopPlaytimeTracking(void*& Callback, void* PublishedFileIDs) {
    return;
}
bool _Script_SteamCore::UGC::GetQueryUGCStatistic(_Script_SteamCore::UGCQueryHandle Handle, int32_t Index, void* StatType, void*& StatValue) {
    return;
}
void _Script_SteamCore::UGC::StartPlaytimeTracking(void*& Callback, void* PublishedFileID) {
    return;
}
_Script_SteamCore::UGCUpdateHandle _Script_SteamCore::UGC::StartItemUpdate(int32_t ConsumerAppID, _Script_SteamCore::PublishedFileID PublishedFileID) {
    return;
}
void _Script_SteamCore::UGC::SetUserItemVote(void*& Callback, _Script_SteamCore::PublishedFileID PublishedFileID, bool bVoteUp) {
    return;
}
bool _Script_SteamCore::UGC::SetSearchText(_Script_SteamCore::UGCQueryHandle Handle, void* SearchText) {
    return;
}
bool _Script_SteamCore::UGC::SetReturnTotalOnly(_Script_SteamCore::UGCQueryHandle Handle, bool bReturnTotalOnly) {
    return;
}
bool _Script_SteamCore::UGC::SetReturnPlaytimeStats(_Script_SteamCore::UGCQueryHandle Handle, int32_t Days) {
    return;
}
bool _Script_SteamCore::UGC::SetReturnOnlyIDs(_Script_SteamCore::UGCQueryHandle Handle, bool bReturnOnlyIDs) {
    return;
}
bool _Script_SteamCore::UGC::SetReturnMetadata(_Script_SteamCore::UGCQueryHandle Handle, bool bReturnMetadata) {
    return;
}
bool _Script_SteamCore::UGC::SetReturnLongDescription(_Script_SteamCore::UGCQueryHandle Handle, bool bReturnLongDescription) {
    return;
}
int32_t _Script_SteamCore::UGC::GetQueryUGCNumTags(_Script_SteamCore::UGCQueryHandle Handle, int32_t Index) {
    return;
}
bool _Script_SteamCore::UGC::SetReturnKeyValueTags(_Script_SteamCore::UGCQueryHandle Handle, bool bReturnKeyValueTags) {
    return;
}
bool _Script_SteamCore::UGC::SetItemTitle(_Script_SteamCore::UGCUpdateHandle Handle, void* Title) {
    return;
}
_Script_SteamCore::UGCQueryHandle _Script_SteamCore::UGC::CreateQueryUserUGCRequest(_Script_SteamCore::SteamID SteamID, void* ListType, void* MatchingUGCType, void* SortOrder, int32_t CreatorAppID, int32_t ConsumerAppID, int32_t Page) {
    return;
}
bool _Script_SteamCore::UGC::SetReturnChildren(_Script_SteamCore::UGCQueryHandle Handle, bool bReturnChildren) {
    return;
}
bool _Script_SteamCore::UGC::SetReturnAdditionalPreviews(_Script_SteamCore::UGCQueryHandle Handle, bool bReturnAdditionalPreviews) {
    return;
}
bool _Script_SteamCore::UGC::SetRankedByTrendDays(_Script_SteamCore::UGCQueryHandle Handle, int32_t Days) {
    return;
}
bool _Script_SteamCore::UGC::SetMatchAnyTag(_Script_SteamCore::UGCQueryHandle Handle, bool bMatchAnyTag) {
    return;
}
bool _Script_SteamCore::UGC::AddRequiredTag(_Script_SteamCore::UGCQueryHandle Handle, void* TagName) {
    return;
}
bool _Script_SteamCore::UGC::GetQueryUGCTagDisplayName(_Script_SteamCore::UGCQueryHandle Handle, int32_t Index, int32_t IndexTag, void*& Value) {
    return;
}
bool _Script_SteamCore::UGC::SetItemUpdateLanguage(_Script_SteamCore::UGCUpdateHandle Handle, void* Language) {
    return;
}
bool _Script_SteamCore::UGC::SetItemVisibility(_Script_SteamCore::UGCUpdateHandle Handle, void* Visibility) {
    return;
}
bool _Script_SteamCore::UGC::SetItemTags(_Script_SteamCore::UGCUpdateHandle Handle, void* Tags) {
    return;
}
bool _Script_SteamCore::UGC::SetItemPreview(_Script_SteamCore::UGCUpdateHandle Handle, void* PreviewFile) {
    return;
}
bool _Script_SteamCore::UGC::SetItemMetadata(_Script_SteamCore::UGCUpdateHandle Handle, void* MetaData) {
    return;
}
bool _Script_SteamCore::UGC::SetItemDescription(_Script_SteamCore::UGCUpdateHandle Handle, void* Description) {
    return;
}
void _Script_SteamCore::UGC::GetUserItemVote(void*& Callback, _Script_SteamCore::PublishedFileID PublishedFileID) {
    return;
}
bool _Script_SteamCore::UGC::SetItemContent(_Script_SteamCore::UGCUpdateHandle Handle, void* ContentFolder) {
    return;
}
bool _Script_SteamCore::UGC::GetItemInstallInfo(_Script_SteamCore::PublishedFileID PublishedFileID, int32_t& SizeOnDisk, void*& Folder, int32_t& Timestamp) {
    return;
}
bool _Script_SteamCore::UGC::SetAllowLegacyUpload(_Script_SteamCore::UGCUpdateHandle Handle, bool bAllowLegacyUpload) {
    return;
}
int32_t _Script_SteamCore::UGC::GetNumSubscribedItems() {
    return;
}
bool _Script_SteamCore::UGC::SetAllowCachedResponse(_Script_SteamCore::UGCQueryHandle Handle, int32_t MaxAgeSeconds) {
    return;
}
void _Script_SteamCore::UGC::SendQueryUGCRequest(void*& Callback, _Script_SteamCore::UGCQueryHandle Handle) {
    return;
}
bool _Script_SteamCore::UGC::RemoveItemPreview(_Script_SteamCore::UGCUpdateHandle Handle, int32_t Index) {
    return;
}
bool _Script_SteamCore::UGC::RemoveItemKeyValueTags(_Script_SteamCore::UGCUpdateHandle Handle, void* Key) {
    return;
}
void _Script_SteamCore::UGC::RemoveItemFromFavorites(void*& Callback, int32_t AppID, _Script_SteamCore::PublishedFileID PublishedFileID) {
    return;
}
void _Script_SteamCore::UGC::RemoveDependency(void*& Callback, _Script_SteamCore::PublishedFileID ParentPublishedFileID, _Script_SteamCore::PublishedFileID ChildPublishedFileId) {
    return;
}
bool _Script_SteamCore::UGC::ReleaseQueryUGCRequest(_Script_SteamCore::UGCQueryHandle Handle) {
    return;
}
bool _Script_SteamCore::UGC::GetQueryUGCMetadata(_Script_SteamCore::UGCQueryHandle Handle, int32_t Index, void*& MetaData, int32_t MetadataSize) {
    return;
}
int32_t _Script_SteamCore::UGC::GetSubscribedItems(void*& PublishedFileIDs, int32_t MaxEntries) {
    return;
}
bool _Script_SteamCore::UGC::GetQueryUGCTag(_Script_SteamCore::UGCQueryHandle Handle, int32_t Index, int32_t IndexTag, void*& Value) {
    return;
}
bool _Script_SteamCore::UGC::GetQueryUGCResult(_Script_SteamCore::UGCQueryHandle Handle, int32_t Index, _Script_SteamCore::SteamUGCDetails& Details) {
    return;
}
bool _Script_SteamCore::UGC::GetQueryUGCPreviewURL(_Script_SteamCore::UGCQueryHandle Handle, int32_t Index, void*& URL) {
    return;
}
int32_t _Script_SteamCore::UGC::GetQueryUGCNumKeyValueTags(_Script_SteamCore::UGCQueryHandle Handle, int32_t Index) {
    return;
}
int32_t _Script_SteamCore::UGC::GetItemState(_Script_SteamCore::PublishedFileID PublishedFileID, void*& States) {
    return;
}
bool _Script_SteamCore::UGC::GetQueryUGCKeyValueTag(_Script_SteamCore::UGCQueryHandle Handle, int32_t Index, int32_t KeyValueTagIndex, void*& Key, void*& Value) {
    return;
}
bool _Script_SteamCore::UGC::GetQueryUGCChildren(_Script_SteamCore::UGCQueryHandle Handle, int32_t Index, void*& PublishedFileIDs, int32_t MaxEntries) {
    return;
}
bool _Script_SteamCore::UGC::GetQueryUGCAdditionalPreview(_Script_SteamCore::UGCQueryHandle Handle, int32_t Index, int32_t PreviewIndex, void*& URLOrVideoID, void*& OriginalFileName, void*& PreviewType) {
    return;
}
void* _Script_SteamCore::UGC::GetItemUpdateProgress(_Script_SteamCore::UGCUpdateHandle Handle, int32_t& BytesProcessed, int32_t& BytesTotal) {
    return;
}
bool _Script_SteamCore::UGC::GetItemDownloadInfo(_Script_SteamCore::PublishedFileID PublishedFileID, int32_t& BytesDownloaded, int32_t& BytesTotal) {
    return;
}
void _Script_SteamCore::UGC::GetAppDependencies(void*& Callback, _Script_SteamCore::PublishedFileID PublishedFileID) {
    return;
}
bool _Script_SteamCore::UGC::AddItemPreviewFile(_Script_SteamCore::UGCUpdateHandle Handle, void* PreviewFile, void* Type) {
    return;
}
bool _Script_SteamCore::UGC::DownloadItem(_Script_SteamCore::PublishedFileID PublishedFileID, bool bHighPriority) {
    return;
}
void _Script_SteamCore::UGC::DeleteItem(void*& Callback, _Script_SteamCore::PublishedFileID PublishedFileID) {
    return;
}
bool _Script_SteamCore::UGC::AddExcludedTag(_Script_SteamCore::UGCQueryHandle Handle, void* TagName) {
    return;
}
_Script_SteamCore::UGCQueryHandle _Script_SteamCore::UGC::CreateQueryUGCDetailsRequest(void* PublishedFileIDs) {
    return;
}
_Script_SteamCore::UGCQueryHandle _Script_SteamCore::UGC::CreateQueryAllUGCRequest(void* QueryType, void* FileType, int32_t CreatorAppID, int32_t ConsumerAppID, int32_t Page) {
    return;
}
void _Script_SteamCore::UGC::CreateItem(void*& Callback, int32_t ConsumerAppID, void* FileType) {
    return;
}
bool _Script_SteamCore::UGC::BInitWorkshopForGameServer(int32_t WorkshopDepotID, void* Folder) {
    return;
}
bool _Script_SteamCore::UGC::AddRequiredTagGroup(_Script_SteamCore::UGCQueryHandle Handle, void* TagGroups) {
    return;
}
bool _Script_SteamCore::UGC::AddRequiredKeyValueTag(_Script_SteamCore::UGCQueryHandle Handle, void* Key, void* Value) {
    return;
}
void _Script_SteamCore::UGC::AddItemToFavorites(void*& Callback, int32_t AppID, _Script_SteamCore::PublishedFileID PublishedFileID) {
    return;
}
bool _Script_SteamCore::UGC::AddItemPreviewVideo(_Script_SteamCore::UGCUpdateHandle Handle, void* VideoID) {
    return;
}
bool _Script_SteamCore::UGC::AddItemKeyValueTag(_Script_SteamCore::UGCUpdateHandle Handle, void* Key, void* Value) {
    return;
}
void _Script_SteamCore::UGC::AddDependency(void*& Callback, _Script_SteamCore::PublishedFileID PublishedFileID, _Script_SteamCore::PublishedFileID ChildPublishedFileId) {
    return;
}
void _Script_SteamCore::UGC::AddAppDependency(void*& Callback, _Script_SteamCore::PublishedFileID PublishedFileID, int32_t AppID) {
    return;
}
