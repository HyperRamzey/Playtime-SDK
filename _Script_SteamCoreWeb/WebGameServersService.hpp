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
struct WebGameServersService : public SteamCoreWebSubsystem {
    static _Script_CoreUObject::Class* static_class();
    void SetMemo(void*& Callback, void* Key, void* SteamID, void* Memo);
    void SetBanStatus(void*& Callback, void* Key, void* SteamID, bool bBanned, int32_t banSeconds);
    void ResetLoginToken(void*& Callback, void* Key, void* SteamID);
    void QueryLoginToken(void*& Callback, void* Key, void* LoginToken);
    void GetServerSteamIDsByIP(void*& Callback, void* Key, void* ServerIP);
    void GetServerIPsBySteamID(void*& Callback, void* Key, void* ServerSteamId);
    void GetAccountPublicInfo(void*& Callback, void* Key, void* SteamID);
    void GetAccountList(void*& Callback, void* Key);
    void DeleteAccount(void*& Callback, void* Key, void* SteamID);
    void CreateAccount(void*& Callback, void* Key, int32_t AppID, void* Memo);
}; // Size: 0x48
#pragma pack(pop)
}
