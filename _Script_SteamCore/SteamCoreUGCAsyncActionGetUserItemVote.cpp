#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "GetUserItemVoteResult.hpp"
#include "PublishedFileID.hpp"
#include "SteamCoreAsyncAction.hpp"
#include "SteamCoreUGCAsyncActionGetUserItemVote.hpp"
void* _Script_SteamCore::SteamCoreUGCAsyncActionGetUserItemVote::get_OnCallback() {
    return (void*)((uintptr_t)this + 0x38);
}
void _Script_SteamCore::SteamCoreUGCAsyncActionGetUserItemVote::HandleCallback(_Script_SteamCore::GetUserItemVoteResult& Data, bool bWasSuccessful) {
    return;
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamCoreUGCAsyncActionGetUserItemVote::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.SteamCoreUGCAsyncActionGetUserItemVote");
    return result;
}
_Script_SteamCore::SteamCoreUGCAsyncActionGetUserItemVote* _Script_SteamCore::SteamCoreUGCAsyncActionGetUserItemVote::GetUserItemVoteAsync(_Script_CoreUObject::Object* WorldContextObject, _Script_SteamCore::PublishedFileID PublishedFileID, float Timeout) {
    return;
}
