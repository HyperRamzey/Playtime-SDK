#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SteamCoreAsyncAction.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_SteamCore {
struct GameServerItem;
}
namespace _Script_SteamCore {
#pragma pack(push, 1)
struct SteamCoreMatchmakingServersAsyncActionPingServer : public SteamCoreAsyncAction {
    private: char pad_38[0x10]; public:
    void* get_OnCallback();
    static _Script_CoreUObject::Class* static_class();
    _Script_SteamCore::SteamCoreMatchmakingServersAsyncActionPingServer* PingServerAsync(_Script_CoreUObject::Object* WorldContextObject, void* IP, int32_t Port, float Timeout);
    void HandleCallback(_Script_SteamCore::GameServerItem& Data, bool bWasSuccessful);
}; // Size: 0x48
#pragma pack(pop)
}
