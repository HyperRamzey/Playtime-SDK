#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "UdpMessagingSettings.hpp"
float& _Script_UdpMessaging::UdpMessagingSettings::get_MaxSendRate() {
    return *(float*)((uintptr_t)this + 0x2c);
}
bool _Script_UdpMessaging::UdpMessagingSettings::get_EnabledByDefault() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
bool _Script_UdpMessaging::UdpMessagingSettings::get_bAutoRepair() {
    return (*(uint8_t*)((uintptr_t)this + 0x2a + 0)) & 1 != 0;
}
void _Script_UdpMessaging::UdpMessagingSettings::set_EnabledByDefault(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UdpMessaging::UdpMessagingSettings::get_EnableTransport() {
    return (*(uint8_t*)((uintptr_t)this + 0x29 + 0)) & 1 != 0;
}
void* _Script_UdpMessaging::UdpMessagingSettings::get_AutoRepairAttemptLimit() {
    return (void*)((uintptr_t)this + 0x30);
}
void _Script_UdpMessaging::UdpMessagingSettings::set_EnableTransport(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x29 + 0);
    *(uint8_t*)((uintptr_t)this + 0x29 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_UdpMessaging::UdpMessagingSettings::set_bAutoRepair(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2a + 0);
    *(uint8_t*)((uintptr_t)this + 0x2a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_UdpMessaging::UdpMessagingSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UdpMessaging.UdpMessagingSettings");
    return result;
}
bool _Script_UdpMessaging::UdpMessagingSettings::get_bStopServiceWhenAppDeactivates() {
    return (*(uint8_t*)((uintptr_t)this + 0x34 + 0)) & 1 != 0;
}
void _Script_UdpMessaging::UdpMessagingSettings::set_bStopServiceWhenAppDeactivates(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x34 + 0);
    *(uint8_t*)((uintptr_t)this + 0x34 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_UdpMessaging::UdpMessagingSettings::get_UnicastEndpoint() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_UdpMessaging::UdpMessagingSettings::get_MulticastEndpoint() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_UdpMessaging::UdpMessagingSettings::get_MessageFormat() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_UdpMessaging::UdpMessagingSettings::get_MulticastTimeToLive() {
    return (void*)((uintptr_t)this + 0x59);
}
void* _Script_UdpMessaging::UdpMessagingSettings::get_StaticEndpoints() {
    return (void*)((uintptr_t)this + 0x60);
}
bool _Script_UdpMessaging::UdpMessagingSettings::get_EnableTunnel() {
    return (*(uint8_t*)((uintptr_t)this + 0x70 + 0)) & 1 != 0;
}
void _Script_UdpMessaging::UdpMessagingSettings::set_EnableTunnel(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x70 + 0);
    *(uint8_t*)((uintptr_t)this + 0x70 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_UdpMessaging::UdpMessagingSettings::get_TunnelUnicastEndpoint() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_UdpMessaging::UdpMessagingSettings::get_TunnelMulticastEndpoint() {
    return (void*)((uintptr_t)this + 0x88);
}
void* _Script_UdpMessaging::UdpMessagingSettings::get_RemoteTunnelEndpoints() {
    return (void*)((uintptr_t)this + 0x98);
}
