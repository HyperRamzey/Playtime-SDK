#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "RemoteSessionSettings.hpp"
int32_t& _Script_RemoteSession::RemoteSessionSettings::get_HostPort() {
    return *(int32_t*)((uintptr_t)this + 0x28);
}
int32_t& _Script_RemoteSession::RemoteSessionSettings::get_ConnectionTimeout() {
    return *(int32_t*)((uintptr_t)this + 0x2c);
}
int32_t& _Script_RemoteSession::RemoteSessionSettings::get_ConnectionTimeoutWhenDebugging() {
    return *(int32_t*)((uintptr_t)this + 0x30);
}
bool _Script_RemoteSession::RemoteSessionSettings::get_bAutoHostWithPIE() {
    return (*(uint8_t*)((uintptr_t)this + 0x39 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_RemoteSession::RemoteSessionSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RemoteSession.RemoteSessionSettings");
    return result;
}
void _Script_RemoteSession::RemoteSessionSettings::set_bAllowInShipping(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_RemoteSession::RemoteSessionSettings::get_PingTime() {
    return *(int32_t*)((uintptr_t)this + 0x34);
}
bool _Script_RemoteSession::RemoteSessionSettings::get_bAllowInShipping() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
void _Script_RemoteSession::RemoteSessionSettings::set_bAutoHostWithPIE(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x39 + 0);
    *(uint8_t*)((uintptr_t)this + 0x39 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RemoteSession::RemoteSessionSettings::get_bAutoHostWithGame() {
    return (*(uint8_t*)((uintptr_t)this + 0x3a + 0)) & 1 != 0;
}
void _Script_RemoteSession::RemoteSessionSettings::set_bAutoHostWithGame(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3a + 0);
    *(uint8_t*)((uintptr_t)this + 0x3a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_RemoteSession::RemoteSessionSettings::get_ImageQuality() {
    return *(int32_t*)((uintptr_t)this + 0x3c);
}
int32_t& _Script_RemoteSession::RemoteSessionSettings::get_FrameRate() {
    return *(int32_t*)((uintptr_t)this + 0x40);
}
void* _Script_RemoteSession::RemoteSessionSettings::get_WhitelistedChannels() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_RemoteSession::RemoteSessionSettings::get_BlacklistedChannels() {
    return (void*)((uintptr_t)this + 0x58);
}
