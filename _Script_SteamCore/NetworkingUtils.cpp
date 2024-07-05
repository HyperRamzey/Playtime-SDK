#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NetworkingUtils.hpp"
#include "SteamCoreSubsystem.hpp"
#include "SteamNetworkPingLocation.hpp"
_Script_CoreUObject::Class* _Script_SteamCore::NetworkingUtils::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.NetworkingUtils");
    return result;
}
bool _Script_SteamCore::NetworkingUtils::ParsePingLocationString(void* String, _Script_SteamCore::SteamNetworkPingLocation& Result) {
    return;
}
void _Script_SteamCore::NetworkingUtils::InitRelayNetworkAccess() {
    return;
}
float _Script_SteamCore::NetworkingUtils::GetLocalPingLocation(_Script_SteamCore::SteamNetworkPingLocation& Result) {
    return;
}
int32_t _Script_SteamCore::NetworkingUtils::EstimatePingTimeBetweenTwoLocations(_Script_SteamCore::SteamNetworkPingLocation& Location1, _Script_SteamCore::SteamNetworkPingLocation& Location2) {
    return;
}
int32_t _Script_SteamCore::NetworkingUtils::EstimatePingTimeFromLocalHost(_Script_SteamCore::SteamNetworkPingLocation& RemoteLocation) {
    return;
}
bool _Script_SteamCore::NetworkingUtils::CheckPingDataUpToDate(float MaxAgeSeconds) {
    return;
}
void _Script_SteamCore::NetworkingUtils::ConvertPingLocationToString(_Script_SteamCore::SteamNetworkPingLocation& Location, void*& String) {
    return;
}
