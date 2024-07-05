#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SteamNetConnection.hpp"
#include "..\_Script_OnlineSubsystemUtils\IpConnection.hpp"
bool _Script_OnlineSubsystemSteam::SteamNetConnection::get_bIsPassthrough() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c48 + 0)) & 1 != 0;
}
void _Script_OnlineSubsystemSteam::SteamNetConnection::set_bIsPassthrough(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c48 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_OnlineSubsystemSteam::SteamNetConnection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/OnlineSubsystemSteam.SteamNetConnection");
    return result;
}
