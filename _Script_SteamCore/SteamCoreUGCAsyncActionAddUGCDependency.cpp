#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "AddUGCDependencyResult.hpp"
#include "PublishedFileID.hpp"
#include "SteamCoreAsyncAction.hpp"
#include "SteamCoreUGCAsyncActionAddUGCDependency.hpp"
void* _Script_SteamCore::SteamCoreUGCAsyncActionAddUGCDependency::get_OnCallback() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamCoreUGCAsyncActionAddUGCDependency::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.SteamCoreUGCAsyncActionAddUGCDependency");
    return result;
}
void _Script_SteamCore::SteamCoreUGCAsyncActionAddUGCDependency::HandleCallback(_Script_SteamCore::AddUGCDependencyResult& Data, bool bWasSuccessful) {
    return;
}
_Script_SteamCore::SteamCoreUGCAsyncActionAddUGCDependency* _Script_SteamCore::SteamCoreUGCAsyncActionAddUGCDependency::AddDependencyAsync(_Script_CoreUObject::Object* WorldContextObject, _Script_SteamCore::PublishedFileID PublishedFileID, _Script_SteamCore::PublishedFileID ChildPublishedFileId, float Timeout) {
    return;
}
