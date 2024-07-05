#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "GetAppDependenciesResult.hpp"
#include "PublishedFileID.hpp"
#include "SteamCoreAsyncAction.hpp"
#include "SteamCoreUGCAsyncActionGetAppDependencies.hpp"
_Script_SteamCore::SteamCoreUGCAsyncActionGetAppDependencies* _Script_SteamCore::SteamCoreUGCAsyncActionGetAppDependencies::GetAppDependenciesAsync(_Script_CoreUObject::Object* WorldContextObject, _Script_SteamCore::PublishedFileID PublishedFileID, float Timeout) {
    return;
}
void* _Script_SteamCore::SteamCoreUGCAsyncActionGetAppDependencies::get_OnCallback() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamCoreUGCAsyncActionGetAppDependencies::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.SteamCoreUGCAsyncActionGetAppDependencies");
    return result;
}
void _Script_SteamCore::SteamCoreUGCAsyncActionGetAppDependencies::HandleCallback(_Script_SteamCore::GetAppDependenciesResult& Data, bool bWasSuccessful) {
    return;
}
