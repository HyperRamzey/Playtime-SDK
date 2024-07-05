#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SteamP2PSessionState.hpp"
bool _Script_SteamCore::SteamP2PSessionState::get_bUsingRelay() {
    return (*(uint8_t*)((uintptr_t)this + 0x3 + 0)) & 1 != 0;
}
bool _Script_SteamCore::SteamP2PSessionState::get_bConnectionActive() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_SteamCore::SteamP2PSessionState::set_bConnectionActive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_SteamCore::SteamP2PSessionState::get_BytesQueuedForSend() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
void _Script_SteamCore::SteamP2PSessionState::set_bConnecting(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SteamCore::SteamP2PSessionState::get_bConnecting() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 1 != 0;
}
void* _Script_SteamCore::SteamP2PSessionState::get_P2PSessionError() {
    return (void*)((uintptr_t)this + 0x2);
}
void _Script_SteamCore::SteamP2PSessionState::set_bUsingRelay(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_SteamCore::SteamP2PSessionState::get_PacketsQueuedForSend() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
void* _Script_SteamCore::SteamP2PSessionState::get_RemoteIP() {
    return (void*)((uintptr_t)this + 0x10);
}
int32_t& _Script_SteamCore::SteamP2PSessionState::get_RemotePort() {
    return *(int32_t*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamP2PSessionState::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.SteamP2PSessionState");
    return result;
}
