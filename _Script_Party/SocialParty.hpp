#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_OnlineSubsystemUtils {
struct PartyBeaconClient;
}
namespace _Script_OnlineSubsystemUtils {
struct SpectatorBeaconClient;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Party {
#pragma pack(push, 1)
struct SocialParty : public _Script_CoreUObject::Object {
    private: char pad_28[0x298]; public:
    void* get_ReservationBeaconClientClass();
    void* get_SpectatorBeaconClientClass();
    void* get_OwningLocalUserId();
    void* get_CurrentLeaderId();
    void* get_PartyMembersById();
    bool get_bEnableAutomaticPartyRejoin();
    void set_bEnableAutomaticPartyRejoin(bool value);
    _Script_OnlineSubsystemUtils::PartyBeaconClient*& get_ReservationBeaconClient();
    _Script_OnlineSubsystemUtils::SpectatorBeaconClient*& get_SpectatorBeaconClient();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2c0
#pragma pack(pop)
}
