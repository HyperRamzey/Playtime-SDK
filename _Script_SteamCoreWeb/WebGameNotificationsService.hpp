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
struct WebGameNotificationsService : public SteamCoreWebSubsystem {
    static _Script_CoreUObject::Class* static_class();
    void UpdateSession(void*& Callback, void* Key, void* SessionID, int32_t AppID, void* Title, void* Users, void* SteamID);
    void RequestNotifications(void*& Callback, void* Key, void* SteamID, int32_t AppID);
    void GetSessionDetailsForApp(void*& Callback, void* Key, void* Sessions, int32_t AppID, void* Language);
    void EnumerateSessionsForApp(void*& Callback, void* Key, int32_t AppID, void* SteamID, bool bIncludeAllUserMessages, bool bIncludeAuthUserMessage, void* Language);
    void DeleteSessionBatch(void*& Callback, void* Key, void* SessionID, int32_t AppID);
    void DeleteSession(void*& Callback, void* Key, void* SessionID, int32_t AppID, void* SteamID);
    void CreateSession(void*& Callback, void* Key, int32_t AppID, void* Context, void* Title, void* Users, void* SteamID);
}; // Size: 0x48
#pragma pack(pop)
}
