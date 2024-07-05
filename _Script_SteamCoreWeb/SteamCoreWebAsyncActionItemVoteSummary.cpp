#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionItemVoteSummary.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionItemVoteSummary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionItemVoteSummary");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionItemVoteSummary* _Script_SteamCoreWeb::SteamCoreWebAsyncActionItemVoteSummary::ItemVoteSummaryAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, void* SteamID, int32_t AppID, void* PublishedFileIDs) {
    return;
}
