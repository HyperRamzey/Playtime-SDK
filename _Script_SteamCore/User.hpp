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
struct User : public SteamCoreSubsystem {
    private: char pad_48[0x210]; public:
    void* get_ClientGameServerDeny();
    void* get_GameWebCallback();
    void* get_GetAuthSessionTicketResponse();
    void* get_IPCFailure();
    void* get_LicensesUpdated();
    void* get_MicroTxnAuthorizationResponse();
    void* get_SteamServerConnectFailure();
    void* get_SteamServersConnected();
    void* get_SteamServersDisconnected();
    void* get_ValidateAuthTicketResponse();
    void* get_EncryptedAppTicketResponse();
    static _Script_CoreUObject::Class* static_class();
    void* UserHasLicenseForApp(_Script_SteamCore::SteamID SteamID, int32_t AppID);
    void StopVoiceRecording();
    void StartVoiceRecording();
    void RequestStoreAuthURL(void*& Callback, void* RedirectURL);
    void RequestEncryptedAppTicket(void*& Callback, void* DataToInclude);
    int32_t GetVoiceOptimalSampleRate();
    void* GetVoice(void*& DestBuffer, int32_t& BytesWritten);
    _Script_SteamCore::SteamID GetSteamID_Pure();
    _Script_SteamCore::SteamID GetSteamID();
    int32_t GetPlayerSteamLevel();
    int32_t GetGameBadgeLevel(int32_t Series, bool bFoil);
    bool GetEncryptedAppTicket(void*& Ticket);
    void* GetAvailableVoice(int32_t& CompressedBytes, int32_t& UncompressedBytes, int32_t UncompressedVoiceDesiredSampleRate);
    _Script_SteamCore::SteamTicketHandle GetAuthSessionTicket(void*& Ticket);
    void EndAuthSession(_Script_SteamCore::SteamID SteamID);
    void* DecompressVoice(void*& CompressedBuffer, int32_t DesiredSampleRate, void*& DestBuffer);
    void CancelAuthTicket(_Script_SteamCore::SteamTicketHandle TicketHandle);
    bool BLoggedOn();
    bool BIsTwoFactorEnabled();
    bool BIsPhoneVerified();
    bool BIsPhoneRequiringVerification();
    bool BIsPhoneIdentifying();
    bool BIsBehindNAT();
    void* BeginAuthSession(void* Ticket, _Script_SteamCore::SteamID SteamID);
    void AdvertiseGame(_Script_SteamCore::SteamID SteamIDGameServer, void* ServerIP, int32_t ServerPort);
}; // Size: 0x258
#pragma pack(pop)
}
