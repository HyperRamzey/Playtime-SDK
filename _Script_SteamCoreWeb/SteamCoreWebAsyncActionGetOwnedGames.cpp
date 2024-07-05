#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionGetOwnedGames.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetOwnedGames::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetOwnedGames");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionGetOwnedGames* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetOwnedGames::GetOwnedGamesAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, void* SteamID, bool bIncludeAppInfo, bool bIncludePlayedFreeGames, void* Filter) {
    return;
}
