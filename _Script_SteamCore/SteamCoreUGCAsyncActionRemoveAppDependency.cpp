#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "PublishedFileID.hpp"
#include "RemoveAppDependencyResult.hpp"
#include "SteamCoreAsyncAction.hpp"
#include "SteamCoreUGCAsyncActionRemoveAppDependency.hpp"
void* _Script_SteamCore::SteamCoreUGCAsyncActionRemoveAppDependency::get_OnCallback() {
    return (void*)((uintptr_t)this + 0x38);
}
void _Script_SteamCore::SteamCoreUGCAsyncActionRemoveAppDependency::HandleCallback(_Script_SteamCore::RemoveAppDependencyResult& Data, bool bWasSuccessful) {
    return;
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamCoreUGCAsyncActionRemoveAppDependency::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.SteamCoreUGCAsyncActionRemoveAppDependency");
    return result;
}
_Script_SteamCore::SteamCoreUGCAsyncActionRemoveAppDependency* _Script_SteamCore::SteamCoreUGCAsyncActionRemoveAppDependency::RemoveAppDependencyAsync(_Script_CoreUObject::Object* WorldContextObject, _Script_SteamCore::PublishedFileID PublishedFileID, int32_t AppID, float Timeout) {
    return;
}
