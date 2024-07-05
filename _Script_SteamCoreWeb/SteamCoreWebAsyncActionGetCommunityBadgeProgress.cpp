#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionGetCommunityBadgeProgress.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetCommunityBadgeProgress::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetCommunityBadgeProgress");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionGetCommunityBadgeProgress* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetCommunityBadgeProgress::GetCommunityBadgeProgressAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, void* SteamID, int32_t BadgeId) {
    return;
}
