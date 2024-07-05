#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "PublishedFileID.hpp"
#include "RemoveUGCDependencyResult.hpp"
#include "SteamCoreAsyncAction.hpp"
#include "SteamCoreUGCAsyncActionRemoveUGCDependency.hpp"
void* _Script_SteamCore::SteamCoreUGCAsyncActionRemoveUGCDependency::get_OnCallback() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamCoreUGCAsyncActionRemoveUGCDependency::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.SteamCoreUGCAsyncActionRemoveUGCDependency");
    return result;
}
_Script_SteamCore::SteamCoreUGCAsyncActionRemoveUGCDependency* _Script_SteamCore::SteamCoreUGCAsyncActionRemoveUGCDependency::RemoveDependencyAsync(_Script_CoreUObject::Object* WorldContextObject, _Script_SteamCore::PublishedFileID PublishedFileID, _Script_SteamCore::PublishedFileID ChildPublishedFileId, float Timeout) {
    return;
}
void _Script_SteamCore::SteamCoreUGCAsyncActionRemoveUGCDependency::HandleCallback(_Script_SteamCore::RemoveUGCDependencyResult& Data, bool bWasSuccessful) {
    return;
}
