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
struct SteamP2PSessionState;
}
namespace _Script_SteamCore {
#pragma pack(push, 1)
struct Networking : public SteamCoreSubsystem {
    private: char pad_48[0x60]; public:
    void* get_OnP2PSessionRequestDelegate();
    void* get_OnP2PSessionConnectFailDelegate();
    static _Script_CoreUObject::Class* static_class();
    bool SendP2PPacket(_Script_SteamCore::SteamID SteamIDRemote, void* Data, void* P2PSendType, int32_t Channel);
    bool ReadP2PPacket(void*& Data, _Script_SteamCore::SteamID& OutSteamIdRemote, int32_t MessageSize, int32_t Channel);
    bool IsP2PPacketAvailable(int32_t& MessageSize, int32_t Channel);
    bool GetP2PSessionState(_Script_SteamCore::SteamID SteamIDRemote, _Script_SteamCore::SteamP2PSessionState& ConnectionState);
    bool CloseP2PSessionWithUser(_Script_SteamCore::SteamID SteamIDRemote);
    bool CloseP2PChannelWithUser(_Script_SteamCore::SteamID SteamIDRemote, int32_t Channel);
    bool AllowP2PPacketRelay(bool bAllow);
    bool AcceptP2PSessionWithUser(_Script_SteamCore::SteamID SteamIDRemote);
}; // Size: 0xa8
#pragma pack(pop)
}
