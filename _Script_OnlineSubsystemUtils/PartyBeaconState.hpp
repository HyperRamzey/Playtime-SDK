#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_OnlineSubsystemUtils {
#pragma pack(push, 1)
struct PartyBeaconState : public _Script_CoreUObject::Object {
    private: char pad_28[0x78]; public:
    void* get_SessionName();
    int32_t& get_NumConsumedReservations();
    int32_t& get_MaxReservations();
    int32_t& get_NumTeams();
    int32_t& get_NumPlayersPerTeam();
    void* get_TeamAssignmentMethod();
    int32_t& get_ReservedHostTeamNum();
    int32_t& get_ForceTeamNum();
    bool get_bRestrictCrossConsole();
    void set_bRestrictCrossConsole(bool value);
    void* get_PlatformCrossplayRestrictions();
    void* get_PlatformTypeMapping();
    bool get_bEnableRemovalRequests();
    void set_bEnableRemovalRequests(bool value);
    void* get_Reservations();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa0
#pragma pack(pop)
}
