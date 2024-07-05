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
struct WebGameInventory : public SteamCoreWebSubsystem {
    static _Script_CoreUObject::Class* static_class();
    void UpdateItemDefs();
    void SupportGetAssetHistory(void*& Callback, void* Key, int32_t AppID, void* AssetId, void* ContextId);
    void HistoryExecuteCommands(void*& Callback, void* Key, int32_t AppID, void* SteamID, void* ContextId, int32_t ActorId);
    void GetUserHistory(void*& Callback, void* Key, int32_t AppID, void* SteamID, void* ContextId, int32_t StartTime, int32_t EndTime);
    void GetHistoryCommandDetails(void*& Callback, void* Key, int32_t AppID, void* SteamID, void* Command, void* ContextId, void* Arguments);
}; // Size: 0x48
#pragma pack(pop)
}
