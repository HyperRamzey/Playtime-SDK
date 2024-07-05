#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SteamCoreSubsystem.hpp"
#include "SteamID.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SteamCore {
#pragma pack(push, 1)
struct RemotePlay : public SteamCoreSubsystem {
    private: char pad_48[0x60]; public:
    void* get_SteamRemotePlaySessionConnected();
    void* get_SteamRemotePlaySessionDisconnected();
    static _Script_CoreUObject::Class* static_class();
    _Script_SteamCore::SteamID GetSessionSteamID(int32_t SessionID);
    int32_t GetSessionID(int32_t SessionIndex);
    int32_t GetSessionCount();
    void* GetSessionClientName(int32_t SessionID);
    void* GetSessionClientFormFactor(int32_t SessionID);
    bool BSendRemotePlayTogetherInvite(_Script_SteamCore::SteamID SteamIDFriend);
    bool BGetSessionClientResolution(int32_t SessionID, int32_t& ResolutionX, int32_t& ResolutionY);
}; // Size: 0xa8
#pragma pack(pop)
}
