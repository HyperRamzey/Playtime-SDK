#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "PublishedFileID.hpp"
#include "SetUserItemVoteResult.hpp"
#include "SteamCoreAsyncAction.hpp"
#include "SteamCoreUGCAsyncActionSetUserItemVote.hpp"
void* _Script_SteamCore::SteamCoreUGCAsyncActionSetUserItemVote::get_OnCallback() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamCoreUGCAsyncActionSetUserItemVote::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.SteamCoreUGCAsyncActionSetUserItemVote");
    return result;
}
_Script_SteamCore::SteamCoreUGCAsyncActionSetUserItemVote* _Script_SteamCore::SteamCoreUGCAsyncActionSetUserItemVote::SetUserItemVoteAsync(_Script_CoreUObject::Object* WorldContextObject, _Script_SteamCore::PublishedFileID PublishedFileID, bool bVoteUp, float Timeout) {
    return;
}
void _Script_SteamCore::SteamCoreUGCAsyncActionSetUserItemVote::HandleCallback(_Script_SteamCore::SetUserItemVoteResult& Data, bool bWasSuccessful) {
    return;
}
