#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "AddAppDependencyResult.hpp"
#include "PublishedFileID.hpp"
#include "SteamCoreAsyncAction.hpp"
#include "SteamCoreUGCAsyncActionAddAppDependency.hpp"
void* _Script_SteamCore::SteamCoreUGCAsyncActionAddAppDependency::get_OnCallback() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamCoreUGCAsyncActionAddAppDependency::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.SteamCoreUGCAsyncActionAddAppDependency");
    return result;
}
void _Script_SteamCore::SteamCoreUGCAsyncActionAddAppDependency::HandleCallback(_Script_SteamCore::AddAppDependencyResult& Data, bool bWasSuccessful) {
    return;
}
_Script_SteamCore::SteamCoreUGCAsyncActionAddAppDependency* _Script_SteamCore::SteamCoreUGCAsyncActionAddAppDependency::AddAppDependencyAsync(_Script_CoreUObject::Object* WorldContextObject, _Script_SteamCore::PublishedFileID PublishedFileID, int32_t AppID, float Timeout) {
    return;
}
