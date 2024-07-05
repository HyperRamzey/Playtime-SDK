#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SteamCoreSubsystem.hpp"
#include "SteamID.hpp"
#include "SteamTicketHandle.hpp"
#include "User.hpp"
void _Script_SteamCore::User::EndAuthSession(_Script_SteamCore::SteamID SteamID) {
    return;
}
void* _Script_SteamCore::User::get_ClientGameServerDeny() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_SteamCore::User::get_GameWebCallback() {
    return (void*)((uintptr_t)this + 0x58);
}
void _Script_SteamCore::User::StartVoiceRecording() {
    return;
}
void* _Script_SteamCore::User::get_LicensesUpdated() {
    return (void*)((uintptr_t)this + 0x88);
}
void* _Script_SteamCore::User::get_GetAuthSessionTicketResponse() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_SteamCore::User::get_MicroTxnAuthorizationResponse() {
    return (void*)((uintptr_t)this + 0x98);
}
void* _Script_SteamCore::User::get_IPCFailure() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_SteamCore::User::get_SteamServerConnectFailure() {
    return (void*)((uintptr_t)this + 0xa8);
}
int32_t _Script_SteamCore::User::GetVoiceOptimalSampleRate() {
    return;
}
void* _Script_SteamCore::User::get_SteamServersConnected() {
    return (void*)((uintptr_t)this + 0xb8);
}
void* _Script_SteamCore::User::get_SteamServersDisconnected() {
    return (void*)((uintptr_t)this + 0xc8);
}
void* _Script_SteamCore::User::get_ValidateAuthTicketResponse() {
    return (void*)((uintptr_t)this + 0xd8);
}
void* _Script_SteamCore::User::get_EncryptedAppTicketResponse() {
    return (void*)((uintptr_t)this + 0xe8);
}
_Script_CoreUObject::Class* _Script_SteamCore::User::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.User");
    return result;
}
void* _Script_SteamCore::User::UserHasLicenseForApp(_Script_SteamCore::SteamID SteamID, int32_t AppID) {
    return;
}
void _Script_SteamCore::User::StopVoiceRecording() {
    return;
}
void _Script_SteamCore::User::RequestStoreAuthURL(void*& Callback, void* RedirectURL) {
    return;
}
void _Script_SteamCore::User::RequestEncryptedAppTicket(void*& Callback, void* DataToInclude) {
    return;
}
void* _Script_SteamCore::User::GetVoice(void*& DestBuffer, int32_t& BytesWritten) {
    return;
}
_Script_SteamCore::SteamID _Script_SteamCore::User::GetSteamID_Pure() {
    return;
}
_Script_SteamCore::SteamID _Script_SteamCore::User::GetSteamID() {
    return;
}
int32_t _Script_SteamCore::User::GetPlayerSteamLevel() {
    return;
}
int32_t _Script_SteamCore::User::GetGameBadgeLevel(int32_t Series, bool bFoil) {
    return;
}
bool _Script_SteamCore::User::GetEncryptedAppTicket(void*& Ticket) {
    return;
}
void* _Script_SteamCore::User::GetAvailableVoice(int32_t& CompressedBytes, int32_t& UncompressedBytes, int32_t UncompressedVoiceDesiredSampleRate) {
    return;
}
_Script_SteamCore::SteamTicketHandle _Script_SteamCore::User::GetAuthSessionTicket(void*& Ticket) {
    return;
}
void* _Script_SteamCore::User::DecompressVoice(void*& CompressedBuffer, int32_t DesiredSampleRate, void*& DestBuffer) {
    return;
}
void _Script_SteamCore::User::CancelAuthTicket(_Script_SteamCore::SteamTicketHandle TicketHandle) {
    return;
}
bool _Script_SteamCore::User::BLoggedOn() {
    return;
}
bool _Script_SteamCore::User::BIsTwoFactorEnabled() {
    return;
}
bool _Script_SteamCore::User::BIsPhoneVerified() {
    return;
}
bool _Script_SteamCore::User::BIsPhoneRequiringVerification() {
    return;
}
bool _Script_SteamCore::User::BIsPhoneIdentifying() {
    return;
}
bool _Script_SteamCore::User::BIsBehindNAT() {
    return;
}
void* _Script_SteamCore::User::BeginAuthSession(void* Ticket, _Script_SteamCore::SteamID SteamID) {
    return;
}
void _Script_SteamCore::User::AdvertiseGame(_Script_SteamCore::SteamID SteamIDGameServer, void* ServerIP, int32_t ServerPort) {
    return;
}
