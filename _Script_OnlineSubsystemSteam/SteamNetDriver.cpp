#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SteamNetDriver.hpp"
#include "..\_Script_OnlineSubsystemUtils\IpNetDriver.hpp"
_Script_CoreUObject::Class* _Script_OnlineSubsystemSteam::SteamNetDriver::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/OnlineSubsystemSteam.SteamNetDriver");
    return result;
}
