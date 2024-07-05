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
struct SteamCoreWebAsyncActionGetItemDefs : public SteamCoreWebAsyncAction {
    static _Script_CoreUObject::Class* static_class();
    _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetItemDefs* GetItemDefsAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, int32_t AppID, void* ModifiedSince, void* ItemdefIDs, void* WorkshopIDs, int32_t CacheMaxAgeSeconds);
}; // Size: 0x58
#pragma pack(pop)
}
