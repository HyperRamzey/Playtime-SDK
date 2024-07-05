#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreAsyncAction.hpp"
#include "SteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems.hpp"
#include "StopPlaytimeTrackingResult.hpp"
_Script_SteamCore::SteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems* _Script_SteamCore::SteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems::StopPlaytimeTrackingForAllItemsAsync(_Script_CoreUObject::Object* WorldContextObject, float Timeout) {
    return;
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems");
    return result;
}
void* _Script_SteamCore::SteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems::get_OnCallback() {
    return (void*)((uintptr_t)this + 0x38);
}
void _Script_SteamCore::SteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems::HandleCallback(_Script_SteamCore::StopPlaytimeTrackingResult& Data, bool bWasSuccessful) {
    return;
}
