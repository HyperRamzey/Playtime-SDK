#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionGetNumberOfCurrentPlayers.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetNumberOfCurrentPlayers::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetNumberOfCurrentPlayers");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionGetNumberOfCurrentPlayers* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetNumberOfCurrentPlayers::GetNumberOfCurrentPlayersAsync(_Script_CoreUObject::Object* WorldContextObject, int32_t AppID) {
    return;
}
