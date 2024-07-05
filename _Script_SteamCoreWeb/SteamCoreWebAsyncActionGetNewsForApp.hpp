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
struct SteamCoreWebAsyncActionGetNewsForApp : public SteamCoreWebAsyncAction {
    static _Script_CoreUObject::Class* static_class();
    _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetNewsForApp* GetNewsForAppAsync(_Script_CoreUObject::Object* WorldContextObject, int32_t AppID, int32_t MaxLength, void* Feeds, int32_t EndDate, int32_t Count);
}; // Size: 0x58
#pragma pack(pop)
}
