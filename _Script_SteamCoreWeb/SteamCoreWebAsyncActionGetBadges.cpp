#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionGetBadges.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetBadges::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetBadges");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionGetBadges* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetBadges::GetBadgesAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, void* SteamID) {
    return;
}
