#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionUserVoteSummary.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionUserVoteSummary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionUserVoteSummary");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionUserVoteSummary* _Script_SteamCoreWeb::SteamCoreWebAsyncActionUserVoteSummary::UserVoteSummaryAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, void* SteamID, void* PublishedFileIDs) {
    return;
}
