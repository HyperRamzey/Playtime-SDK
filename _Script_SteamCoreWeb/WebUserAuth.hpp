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
struct WebUserAuth : public SteamCoreWebSubsystem {
    static _Script_CoreUObject::Class* static_class();
    void AuthenticateUserTicket(void*& Callback, void* Key, int32_t AppID, void* Ticket);
    void AuthenticateUser(void*& Callback, void* SteamID, void* SessionKey, void* EncryptedLoginKey);
}; // Size: 0x48
#pragma pack(pop)
}
