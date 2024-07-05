#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "PublishedFileID.hpp"
#include "SteamCoreSubsystem.hpp"
#include "SteamID.hpp"
#include "UGCQueryHandle.hpp"
#include "UGCUpdateHandle.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SteamCore {
struct SteamUGCDetails;
}
namespace _Script_SteamCore {
#pragma pack(push, 1)
struct UGC : public SteamCoreSubsystem {
    private: char pad_48[0x60]; public:
    void* get_ItemInstalled();
    void* get_DownloadItemResult();
    static _Script_CoreUObject::Class* static_class();
    bool UpdateItemPreviewVideo(_Script_SteamCore::UGCUpdateHandle Handle, int32_t Index, void* PreviewVideo);
    bool UpdateItemPreviewFile(_Script_SteamCore::UGCUpdateHandle Handle, int32_t Index, void* PreviewFile);
    void UnsubscribeItem(void*& Callback, _Script_SteamCore::PublishedFileID PublishedFileID);
    void SuspendDownloads(bool bSuspend);
    void SubscribeItem(void*& Callback, _Script_SteamCore::PublishedFileID PublishedFileID);
    void SubmitItemUpdate(void*& Callback, _Script_SteamCore::UGCUpdateHandle Handle, void* ChangeNote);
    void StopPlaytimeTrackingForAllItems(void*& Callback);
    void StopPlaytimeTracking(void*& Callback, void* PublishedFileIDs);
    void StartPlaytimeTracking(void*& Callback, void* PublishedFileID);
    _Script_SteamCore::UGCUpdateHandle StartItemUpdate(int32_t ConsumerAppID, _Script_SteamCore::PublishedFileID PublishedFileID);
    void SetUserItemVote(void*& Callback, _Script_SteamCore::PublishedFileID PublishedFileID, bool bVoteUp);
    bool SetSearchText(_Script_SteamCore::UGCQueryHandle Handle, void* SearchText);
    bool SetReturnTotalOnly(_Script_SteamCore::UGCQueryHandle Handle, bool bReturnTotalOnly);
    bool SetReturnPlaytimeStats(_Script_SteamCore::UGCQueryHandle Handle, int32_t Days);
    bool SetReturnOnlyIDs(_Script_SteamCore::UGCQueryHandle Handle, bool bReturnOnlyIDs);
    bool SetReturnMetadata(_Script_SteamCore::UGCQueryHandle Handle, bool bReturnMetadata);
    bool SetReturnLongDescription(_Script_SteamCore::UGCQueryHandle Handle, bool bReturnLongDescription);
    bool SetReturnKeyValueTags(_Script_SteamCore::UGCQueryHandle Handle, bool bReturnKeyValueTags);
    bool SetReturnChildren(_Script_SteamCore::UGCQueryHandle Handle, bool bReturnChildren);
    bool SetReturnAdditionalPreviews(_Script_SteamCore::UGCQueryHandle Handle, bool bReturnAdditionalPreviews);
    bool SetRankedByTrendDays(_Script_SteamCore::UGCQueryHandle Handle, int32_t Days);
    bool SetMatchAnyTag(_Script_SteamCore::UGCQueryHandle Handle, bool bMatchAnyTag);
    bool SetLanguage(_Script_SteamCore::UGCQueryHandle Handle, void* Language);
    bool SetItemVisibility(_Script_SteamCore::UGCUpdateHandle Handle, void* Visibility);
    bool SetItemUpdateLanguage(_Script_SteamCore::UGCUpdateHandle Handle, void* Language);
    bool SetItemTitle(_Script_SteamCore::UGCUpdateHandle Handle, void* Title);
    bool SetItemTags(_Script_SteamCore::UGCUpdateHandle Handle, void* Tags);
    bool SetItemPreview(_Script_SteamCore::UGCUpdateHandle Handle, void* PreviewFile);
    bool SetItemMetadata(_Script_SteamCore::UGCUpdateHandle Handle, void* MetaData);
    bool SetItemDescription(_Script_SteamCore::UGCUpdateHandle Handle, void* Description);
    bool SetItemContent(_Script_SteamCore::UGCUpdateHandle Handle, void* ContentFolder);
    bool SetCloudFileNameFilter(_Script_SteamCore::UGCQueryHandle Handle, void* MatchCloudFileName);
    bool SetAllowLegacyUpload(_Script_SteamCore::UGCUpdateHandle Handle, bool bAllowLegacyUpload);
    bool SetAllowCachedResponse(_Script_SteamCore::UGCQueryHandle Handle, int32_t MaxAgeSeconds);
    void SendQueryUGCRequest(void*& Callback, _Script_SteamCore::UGCQueryHandle Handle);
    bool RemoveItemPreview(_Script_SteamCore::UGCUpdateHandle Handle, int32_t Index);
    bool RemoveItemKeyValueTags(_Script_SteamCore::UGCUpdateHandle Handle, void* Key);
    void RemoveItemFromFavorites(void*& Callback, int32_t AppID, _Script_SteamCore::PublishedFileID PublishedFileID);
    void RemoveDependency(void*& Callback, _Script_SteamCore::PublishedFileID ParentPublishedFileID, _Script_SteamCore::PublishedFileID ChildPublishedFileId);
    void RemoveAppDependency(void*& Callback, _Script_SteamCore::PublishedFileID PublishedFileID, int32_t AppID);
    bool ReleaseQueryUGCRequest(_Script_SteamCore::UGCQueryHandle Handle);
    void GetUserItemVote(void*& Callback, _Script_SteamCore::PublishedFileID PublishedFileID);
    int32_t GetSubscribedItems(void*& PublishedFileIDs, int32_t MaxEntries);
    bool GetQueryUGCTagDisplayName(_Script_SteamCore::UGCQueryHandle Handle, int32_t Index, int32_t IndexTag, void*& Value);
    bool GetQueryUGCTag(_Script_SteamCore::UGCQueryHandle Handle, int32_t Index, int32_t IndexTag, void*& Value);
    bool GetQueryUGCStatistic(_Script_SteamCore::UGCQueryHandle Handle, int32_t Index, void* StatType, void*& StatValue);
    bool GetQueryUGCResult(_Script_SteamCore::UGCQueryHandle Handle, int32_t Index, _Script_SteamCore::SteamUGCDetails& Details);
    bool GetQueryUGCPreviewURL(_Script_SteamCore::UGCQueryHandle Handle, int32_t Index, void*& URL);
    int32_t GetQueryUGCNumTags(_Script_SteamCore::UGCQueryHandle Handle, int32_t Index);
    int32_t GetQueryUGCNumKeyValueTags(_Script_SteamCore::UGCQueryHandle Handle, int32_t Index);
    int32_t GetQueryUGCNumAdditionalPreviews(_Script_SteamCore::UGCQueryHandle Handle, int32_t Index);
    bool GetQueryUGCMetadata(_Script_SteamCore::UGCQueryHandle Handle, int32_t Index, void*& MetaData, int32_t MetadataSize);
    bool GetQueryUGCKeyValueTag(_Script_SteamCore::UGCQueryHandle Handle, int32_t Index, int32_t KeyValueTagIndex, void*& Key, void*& Value);
    bool GetQueryUGCChildren(_Script_SteamCore::UGCQueryHandle Handle, int32_t Index, void*& PublishedFileIDs, int32_t MaxEntries);
    bool GetQueryUGCAdditionalPreview(_Script_SteamCore::UGCQueryHandle Handle, int32_t Index, int32_t PreviewIndex, void*& URLOrVideoID, void*& OriginalFileName, void*& PreviewType);
    int32_t GetNumSubscribedItems();
    void* GetItemUpdateProgress(_Script_SteamCore::UGCUpdateHandle Handle, int32_t& BytesProcessed, int32_t& BytesTotal);
    int32_t GetItemState(_Script_SteamCore::PublishedFileID PublishedFileID, void*& States);
    bool GetItemInstallInfo(_Script_SteamCore::PublishedFileID PublishedFileID, int32_t& SizeOnDisk, void*& Folder, int32_t& Timestamp);
    bool GetItemDownloadInfo(_Script_SteamCore::PublishedFileID PublishedFileID, int32_t& BytesDownloaded, int32_t& BytesTotal);
    void GetAppDependencies(void*& Callback, _Script_SteamCore::PublishedFileID PublishedFileID);
    bool DownloadItem(_Script_SteamCore::PublishedFileID PublishedFileID, bool bHighPriority);
    void DeleteItem(void*& Callback, _Script_SteamCore::PublishedFileID PublishedFileID);
    _Script_SteamCore::UGCQueryHandle CreateQueryUserUGCRequest(_Script_SteamCore::SteamID SteamID, void* ListType, void* MatchingUGCType, void* SortOrder, int32_t CreatorAppID, int32_t ConsumerAppID, int32_t Page);
    _Script_SteamCore::UGCQueryHandle CreateQueryUGCDetailsRequest(void* PublishedFileIDs);
    _Script_SteamCore::UGCQueryHandle CreateQueryAllUGCRequest(void* QueryType, void* FileType, int32_t CreatorAppID, int32_t ConsumerAppID, int32_t Page);
    void CreateItem(void*& Callback, int32_t ConsumerAppID, void* FileType);
    bool BInitWorkshopForGameServer(int32_t WorkshopDepotID, void* Folder);
    bool AddRequiredTagGroup(_Script_SteamCore::UGCQueryHandle Handle, void* TagGroups);
    bool AddRequiredTag(_Script_SteamCore::UGCQueryHandle Handle, void* TagName);
    bool AddRequiredKeyValueTag(_Script_SteamCore::UGCQueryHandle Handle, void* Key, void* Value);
    void AddItemToFavorites(void*& Callback, int32_t AppID, _Script_SteamCore::PublishedFileID PublishedFileID);
    bool AddItemPreviewVideo(_Script_SteamCore::UGCUpdateHandle Handle, void* VideoID);
    bool AddItemPreviewFile(_Script_SteamCore::UGCUpdateHandle Handle, void* PreviewFile, void* Type);
    bool AddItemKeyValueTag(_Script_SteamCore::UGCUpdateHandle Handle, void* Key, void* Value);
    bool AddExcludedTag(_Script_SteamCore::UGCQueryHandle Handle, void* TagName);
    void AddDependency(void*& Callback, _Script_SteamCore::PublishedFileID PublishedFileID, _Script_SteamCore::PublishedFileID ChildPublishedFileId);
    void AddAppDependency(void*& Callback, _Script_SteamCore::PublishedFileID PublishedFileID, int32_t AppID);
}; // Size: 0xa8
#pragma pack(pop)
}
