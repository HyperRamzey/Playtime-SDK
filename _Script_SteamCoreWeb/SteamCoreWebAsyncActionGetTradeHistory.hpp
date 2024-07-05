#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SteamCoreWebAsyncAction.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_SteamCoreWeb {
#pragma pack(push, 1)
struct SteamCoreWebAsyncActionGetTradeHistory : public SteamCoreWebAsyncAction {
    static _Script_CoreUObject::Class* static_class();
    _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetTradeHistory* GetTradeHistoryAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, int32_t MaxTrades, int32_t StartAfterTime, void* StartAfterTradeId, bool bNavigatingBack, bool bGetDescriptions, void* Language, bool bIncludeFailed, bool bIncludeTotal);
}; // Size: 0x58
#pragma pack(pop)
}
