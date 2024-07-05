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
struct WebSteamNews : public SteamCoreWebSubsystem {
    static _Script_CoreUObject::Class* static_class();
    void GetNewsForAppAuthed(void*& Callback, void* Key, int32_t AppID, int32_t MaxLength, void* Feeds, int32_t EndDate, int32_t Count);
    void GetNewsForApp(void*& Callback, int32_t AppID, int32_t MaxLength, void* Feeds, int32_t EndDate, int32_t Count);
}; // Size: 0x48
#pragma pack(pop)
}
