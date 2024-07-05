#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "StartPlaytimeTrackingResult.hpp"
#include "SteamCoreAsyncAction.hpp"
#include "SteamCoreUGCAsyncActionStartPlaytimeTracking.hpp"
void* _Script_SteamCore::SteamCoreUGCAsyncActionStartPlaytimeTracking::get_OnCallback() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamCoreUGCAsyncActionStartPlaytimeTracking::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.SteamCoreUGCAsyncActionStartPlaytimeTracking");
    return result;
}
void _Script_SteamCore::SteamCoreUGCAsyncActionStartPlaytimeTracking::HandleCallback(_Script_SteamCore::StartPlaytimeTrackingResult& Data, bool bWasSuccessful) {
    return;
}
_Script_SteamCore::SteamCoreUGCAsyncActionStartPlaytimeTracking* _Script_SteamCore::SteamCoreUGCAsyncActionStartPlaytimeTracking::StartPlaytimeTrackingAsync(_Script_CoreUObject::Object* WorldContextObject, void* PublishedFileIDs, float Timeout) {
    return;
}
