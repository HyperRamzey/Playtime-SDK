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
struct WebSteamPublishedItemSearch : public SteamCoreWebSubsystem {
    static _Script_CoreUObject::Class* static_class();
    void ResultSetSummary(void*& Callback, void* Key, void* SteamID, int32_t AppID, int32_t StartId, bool bHasAppAdminAccess, int32_t FileType, void* Tag, void* UserTag);
    void RankedByVote(void*& Callback, void* Key, void* SteamID, int32_t AppID, int32_t StartId, int32_t Count, bool bHasAppAdminAccess, int32_t FileType, void* Tag, void* UserTag);
    void RankedByTrend(void*& Callback, void* Key, void* SteamID, int32_t AppID, int32_t StartId, int32_t Count, bool bHasAppAdminAccess, int32_t FileType, int32_t Days, void* Tag, void* UserTag);
    void RankedByPublicationOrder(void*& Callback, void* Key, void* SteamID, int32_t AppID, int32_t StartId, int32_t Count, bool bHasAppAdminAccess, int32_t FileType, void* Tag, void* UserTag);
}; // Size: 0x48
#pragma pack(pop)
}
