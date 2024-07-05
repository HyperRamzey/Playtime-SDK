#include "..\FUObjectArray.hpp"
#include "ARBaseAsyncTaskBlueprintProxy.hpp"
#include "CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
void* _Script_AugmentedReality::CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::get_OnSuccess() {
    return (void*)((uintptr_t)this + 0x50);
}
_Script_AugmentedReality::CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* _Script_AugmentedReality::CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::CheckGeoTrackingAvailability(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
void* _Script_AugmentedReality::CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::get_OnFailed() {
    return (void*)((uintptr_t)this + 0x60);
}
_Script_CoreUObject::Class* _Script_AugmentedReality::CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy");
    return result;
}
_Script_AugmentedReality::CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* _Script_AugmentedReality::CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::CheckGeoTrackingAvailabilityAtLocation(_Script_CoreUObject::Object* WorldContextObject, float Longitude, float Latitude) {
    return;
}
