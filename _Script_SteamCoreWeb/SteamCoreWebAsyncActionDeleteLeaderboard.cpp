#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionDeleteLeaderboard.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionDeleteLeaderboard::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionDeleteLeaderboard");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionDeleteLeaderboard* _Script_SteamCoreWeb::SteamCoreWebAsyncActionDeleteLeaderboard::DeleteLeaderboardAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, int32_t AppID, void* Name) {
    return;
}
