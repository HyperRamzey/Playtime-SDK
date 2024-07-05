#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SteamCoreSubsystem.hpp"
#include "SteamGameServer.hpp"
#include "SteamID.hpp"
#include "SteamTicketHandle.hpp"
bool _Script_SteamCore::SteamGameServer::BUpdateUserData(_Script_SteamCore::SteamID SteamIDUser, void* PlayerName, int32_t Score) {
    return;
}
void* _Script_SteamCore::SteamGameServer::get_GSClientGroupStatus() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_SteamCore::SteamGameServer::get_GSPolicyResponse() {
    return (void*)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamGameServer::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.SteamGameServer");
    return result;
}
void* _Script_SteamCore::SteamGameServer::get_GSValidateAuthTicketResponse() {
    return (void*)((uintptr_t)this + 0x68);
}
void _Script_SteamCore::SteamGameServer::SetBotPlayerCount(int32_t BotPlayers) {
    return;
}
void* _Script_SteamCore::SteamGameServer::get_GSClientApprove() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_SteamCore::SteamGameServer::get_GSClientDeny() {
    return (void*)((uintptr_t)this + 0x88);
}
void _Script_SteamCore::SteamGameServer::LogOnAnonymous() {
    return;
}
void* _Script_SteamCore::SteamGameServer::UserHasLicenseForApp(_Script_SteamCore::SteamID SteamID, int32_t AppID) {
    return;
}
bool _Script_SteamCore::SteamGameServer::WasRestartRequested() {
    return;
}
void* _Script_SteamCore::SteamGameServer::GetServerPublicIP() {
    return;
}
void _Script_SteamCore::SteamGameServer::SetSpectatorServerName(void* SpectatorServerName) {
    return;
}
void _Script_SteamCore::SteamGameServer::SetSpectatorPort(int32_t SpectatorPort) {
    return;
}
void _Script_SteamCore::SteamGameServer::SetServerName(void* ServerName) {
    return;
}
void _Script_SteamCore::SteamGameServer::SetRegion(void* Region) {
    return;
}
void _Script_SteamCore::SteamGameServer::LogOn(void* Token) {
    return;
}
void _Script_SteamCore::SteamGameServer::SetProduct(void* Product) {
    return;
}
void _Script_SteamCore::SteamGameServer::SetPasswordProtected(bool bPasswordProtected) {
    return;
}
void _Script_SteamCore::SteamGameServer::SetModDir(void* ModDir) {
    return;
}
void _Script_SteamCore::SteamGameServer::LogOff() {
    return;
}
void _Script_SteamCore::SteamGameServer::SetMaxPlayerCount(int32_t PlayersMax) {
    return;
}
void _Script_SteamCore::SteamGameServer::SetMapName(void* MapName) {
    return;
}
void _Script_SteamCore::SteamGameServer::ClearAllKeyValues() {
    return;
}
void _Script_SteamCore::SteamGameServer::SetKeyValue(void* Key, void* Value) {
    return;
}
void _Script_SteamCore::SteamGameServer::SetHeartbeatInterval(int32_t HeartbeatInterval) {
    return;
}
void _Script_SteamCore::SteamGameServer::SetGameTags(void* GameTags) {
    return;
}
void _Script_SteamCore::SteamGameServer::ForceHeartbeat() {
    return;
}
void _Script_SteamCore::SteamGameServer::SetGameDescription(void* GameDescription) {
    return;
}
void _Script_SteamCore::SteamGameServer::SetGameData(void* GameData) {
    return;
}
void _Script_SteamCore::SteamGameServer::SetDedicatedServer(bool bDedicated) {
    return;
}
bool _Script_SteamCore::SteamGameServer::RequestUserGroupStatus(_Script_SteamCore::SteamID SteamIDUser, _Script_SteamCore::SteamID SteamIDGroup) {
    return;
}
_Script_SteamCore::SteamID _Script_SteamCore::SteamGameServer::GetServerSteamID_PureCompact() {
    return;
}
_Script_SteamCore::SteamID _Script_SteamCore::SteamGameServer::GetServerSteamID_Pure() {
    return;
}
_Script_SteamCore::SteamID _Script_SteamCore::SteamGameServer::GetServerSteamID() {
    return;
}
void* _Script_SteamCore::SteamGameServer::GetServerPublicIP_PureCompact() {
    return;
}
void* _Script_SteamCore::SteamGameServer::GetServerPublicIP_Pure() {
    return;
}
_Script_SteamCore::SteamTicketHandle _Script_SteamCore::SteamGameServer::GetAuthSessionTicket(void*& Ticket) {
    return;
}
void _Script_SteamCore::SteamGameServer::EndAuthSession(_Script_SteamCore::SteamID SteamID) {
    return;
}
void _Script_SteamCore::SteamGameServer::EnableHeartbeats(bool bActive) {
    return;
}
_Script_SteamCore::SteamID _Script_SteamCore::SteamGameServer::CreateUnauthenticatedUserConnection() {
    return;
}
void _Script_SteamCore::SteamGameServer::ComputeNewPlayerCompatibility(void*& Callback, _Script_SteamCore::SteamID SteamIDNewPlayer) {
    return;
}
void _Script_SteamCore::SteamGameServer::CancelAuthTicket(_Script_SteamCore::SteamTicketHandle TicketHandle) {
    return;
}
bool _Script_SteamCore::SteamGameServer::BSecure() {
    return;
}
bool _Script_SteamCore::SteamGameServer::BLoggedOn() {
    return;
}
void* _Script_SteamCore::SteamGameServer::BeginAuthSession(void* Ticket, _Script_SteamCore::SteamID SteamID) {
    return;
}
void _Script_SteamCore::SteamGameServer::AssociateWithClan(void*& Callback, _Script_SteamCore::SteamID SteamIDClan) {
    return;
}
