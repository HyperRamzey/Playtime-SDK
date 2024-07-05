#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SteamCoreSubsystem.hpp"
#include "SteamID.hpp"
#include "SteamTicketHandle.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SteamCore {
#pragma pack(push, 1)
struct SteamGameServer : public SteamCoreSubsystem {
    private: char pad_48[0xf0]; public:
    void* get_GSPolicyResponse();
    void* get_GSClientGroupStatus();
    void* get_GSValidateAuthTicketResponse();
    void* get_GSClientApprove();
    void* get_GSClientDeny();
    static _Script_CoreUObject::Class* static_class();
    bool WasRestartRequested();
    void* UserHasLicenseForApp(_Script_SteamCore::SteamID SteamID, int32_t AppID);
    void SetSpectatorServerName(void* SpectatorServerName);
    void SetSpectatorPort(int32_t SpectatorPort);
    void SetServerName(void* ServerName);
    void SetRegion(void* Region);
    void SetProduct(void* Product);
    void SetPasswordProtected(bool bPasswordProtected);
    void SetModDir(void* ModDir);
    void SetMaxPlayerCount(int32_t PlayersMax);
    void SetMapName(void* MapName);
    void SetKeyValue(void* Key, void* Value);
    void SetHeartbeatInterval(int32_t HeartbeatInterval);
    void SetGameTags(void* GameTags);
    void SetGameDescription(void* GameDescription);
    void SetGameData(void* GameData);
    void SetDedicatedServer(bool bDedicated);
    void SetBotPlayerCount(int32_t BotPlayers);
    bool RequestUserGroupStatus(_Script_SteamCore::SteamID SteamIDUser, _Script_SteamCore::SteamID SteamIDGroup);
    void LogOnAnonymous();
    void LogOn(void* Token);
    void LogOff();
    _Script_SteamCore::SteamID GetServerSteamID_PureCompact();
    _Script_SteamCore::SteamID GetServerSteamID_Pure();
    _Script_SteamCore::SteamID GetServerSteamID();
    void* GetServerPublicIP_PureCompact();
    void* GetServerPublicIP_Pure();
    void* GetServerPublicIP();
    _Script_SteamCore::SteamTicketHandle GetAuthSessionTicket(void*& Ticket);
    void ForceHeartbeat();
    void EndAuthSession(_Script_SteamCore::SteamID SteamID);
    void EnableHeartbeats(bool bActive);
    _Script_SteamCore::SteamID CreateUnauthenticatedUserConnection();
    void ComputeNewPlayerCompatibility(void*& Callback, _Script_SteamCore::SteamID SteamIDNewPlayer);
    void ClearAllKeyValues();
    void CancelAuthTicket(_Script_SteamCore::SteamTicketHandle TicketHandle);
    bool BUpdateUserData(_Script_SteamCore::SteamID SteamIDUser, void* PlayerName, int32_t Score);
    bool BSecure();
    bool BLoggedOn();
    void* BeginAuthSession(void* Ticket, _Script_SteamCore::SteamID SteamID);
    void AssociateWithClan(void*& Callback, _Script_SteamCore::SteamID SteamIDClan);
}; // Size: 0x138
#pragma pack(pop)
}
