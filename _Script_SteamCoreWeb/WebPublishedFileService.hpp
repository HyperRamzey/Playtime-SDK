#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SteamCoreWebSubsystem.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SteamCoreWeb {
#pragma pack(push, 1)
struct WebPublishedFileService : public SteamCoreWebSubsystem {
    static _Script_CoreUObject::Class* static_class();
    void UpdateTags(void*& Callback, void* Key, void* PublishedFileID, int32_t AppID, void* AddTags, void* RemoveTags);
    void UpdateIncompatibleStatus(void*& Callback, void* Key, void* PublishedFileID, int32_t AppID, bool bIncompatible);
    void UpdateBanStatus(void*& Callback, void* Key, void* PublishedFileID, int32_t AppID, bool bBanned, void* Reason);
    void SetDeveloperMetadata(void*& Callback, void* Key, void* PublishedFileID, int32_t AppID, void* MetaData);
    void QueryFiles(void*& Callback, void* Key, int32_t QueryType, int32_t Page, void* Cursor, int32_t NumPerPage, int32_t CreatorAppID, int32_t AppID, void* RequiredTags, void* ExcludedTags, bool bMatchAllTags, void* RequiredFlags, void* OmittedFlags, void* SearchText, int32_t FileType, void* ChildPublishedFileId, int32_t Days, bool bIncludeRecentVotesOnly, int32_t CacheMaxAgeSeconds, int32_t Language, void* RequiredKvTags, bool bTotalOnly, bool bIDsOnly, bool bReturnVoteData, bool bReturnTags, bool bReturnKvTags, bool bReturnPreviews, bool bReturnChildren, bool bReturnShortDescription, bool bReturnForSaleData, bool bReturnMetadata, int32_t ReturnPlaytimeStats);
}; // Size: 0x48
#pragma pack(pop)
}
