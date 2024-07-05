#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Networking.hpp"
#include "SteamCoreSubsystem.hpp"
#include "SteamID.hpp"
#include "SteamP2PSessionState.hpp"
void* _Script_SteamCore::Networking::get_OnP2PSessionRequestDelegate() {
    return (void*)((uintptr_t)this + 0x48);
}
bool _Script_SteamCore::Networking::CloseP2PSessionWithUser(_Script_SteamCore::SteamID SteamIDRemote) {
    return;
}
void* _Script_SteamCore::Networking::get_OnP2PSessionConnectFailDelegate() {
    return (void*)((uintptr_t)this + 0x58);
}
bool _Script_SteamCore::Networking::SendP2PPacket(_Script_SteamCore::SteamID SteamIDRemote, void* Data, void* P2PSendType, int32_t Channel) {
    return;
}
_Script_CoreUObject::Class* _Script_SteamCore::Networking::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.Networking");
    return result;
}
bool _Script_SteamCore::Networking::ReadP2PPacket(void*& Data, _Script_SteamCore::SteamID& OutSteamIdRemote, int32_t MessageSize, int32_t Channel) {
    return;
}
bool _Script_SteamCore::Networking::IsP2PPacketAvailable(int32_t& MessageSize, int32_t Channel) {
    return;
}
bool _Script_SteamCore::Networking::GetP2PSessionState(_Script_SteamCore::SteamID SteamIDRemote, _Script_SteamCore::SteamP2PSessionState& ConnectionState) {
    return;
}
bool _Script_SteamCore::Networking::CloseP2PChannelWithUser(_Script_SteamCore::SteamID SteamIDRemote, int32_t Channel) {
    return;
}
bool _Script_SteamCore::Networking::AllowP2PPacketRelay(bool bAllow) {
    return;
}
bool _Script_SteamCore::Networking::AcceptP2PSessionWithUser(_Script_SteamCore::SteamID SteamIDRemote) {
    return;
}
