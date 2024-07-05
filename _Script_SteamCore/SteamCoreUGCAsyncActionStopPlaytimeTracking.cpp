#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreAsyncAction.hpp"
#include "SteamCoreUGCAsyncActionStopPlaytimeTracking.hpp"
#include "StopPlaytimeTrackingResult.hpp"
void* _Script_SteamCore::SteamCoreUGCAsyncActionStopPlaytimeTracking::get_OnCallback() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamCoreUGCAsyncActionStopPlaytimeTracking::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTracking");
    return result;
}
_Script_SteamCore::SteamCoreUGCAsyncActionStopPlaytimeTracking* _Script_SteamCore::SteamCoreUGCAsyncActionStopPlaytimeTracking::StopPlaytimeTrackingAsync(_Script_CoreUObject::Object* WorldContextObject, void* PublishedFileIDs, float Timeout) {
    return;
}
void _Script_SteamCore::SteamCoreUGCAsyncActionStopPlaytimeTracking::HandleCallback(_Script_SteamCore::StopPlaytimeTrackingResult& Data, bool bWasSuccessful) {
    return;
}
