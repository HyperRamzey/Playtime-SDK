#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionGetRecentlyPlayedGames.hpp"
_Script_SteamCoreWeb::SteamCoreWebAsyncActionGetRecentlyPlayedGames* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetRecentlyPlayedGames::GetRecentlyPlayedGamesAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, void* SteamID, int32_t Count) {
    return;
}
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetRecentlyPlayedGames::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetRecentlyPlayedGames");
    return result;
}
