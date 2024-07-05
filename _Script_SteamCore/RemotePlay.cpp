#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RemotePlay.hpp"
#include "SteamCoreSubsystem.hpp"
#include "SteamID.hpp"
void* _Script_SteamCore::RemotePlay::get_SteamRemotePlaySessionConnected() {
    return (void*)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_SteamCore::RemotePlay::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.RemotePlay");
    return result;
}
void* _Script_SteamCore::RemotePlay::get_SteamRemotePlaySessionDisconnected() {
    return (void*)((uintptr_t)this + 0x58);
}
_Script_SteamCore::SteamID _Script_SteamCore::RemotePlay::GetSessionSteamID(int32_t SessionID) {
    return;
}
void* _Script_SteamCore::RemotePlay::GetSessionClientName(int32_t SessionID) {
    return;
}
int32_t _Script_SteamCore::RemotePlay::GetSessionID(int32_t SessionIndex) {
    return;
}
int32_t _Script_SteamCore::RemotePlay::GetSessionCount() {
    return;
}
void* _Script_SteamCore::RemotePlay::GetSessionClientFormFactor(int32_t SessionID) {
    return;
}
bool _Script_SteamCore::RemotePlay::BSendRemotePlayTogetherInvite(_Script_SteamCore::SteamID SteamIDFriend) {
    return;
}
bool _Script_SteamCore::RemotePlay::BGetSessionClientResolution(int32_t SessionID, int32_t& ResolutionX, int32_t& ResolutionY) {
    return;
}
