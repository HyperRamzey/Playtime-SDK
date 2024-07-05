#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SteamCoreWebSubsystem.hpp"
#include "WebPublishedItemVoting.hpp"
void _Script_SteamCoreWeb::WebPublishedItemVoting::ItemVoteSummary(void*& Callback, void* Key, void* SteamID, int32_t AppID, void* PublishedFileIDs) {
    return;
}
_Script_CoreUObject::Class* _Script_SteamCoreWeb::WebPublishedItemVoting::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.WebPublishedItemVoting");
    return result;
}
void _Script_SteamCoreWeb::WebPublishedItemVoting::UserVoteSummary(void*& Callback, void* Key, void* SteamID, void* PublishedFileIDs) {
    return;
}
