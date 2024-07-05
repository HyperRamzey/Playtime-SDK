#include "..\FUObjectArray.hpp"
#include "ARGeoTrackingSupport.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
_Script_CoreUObject::Class* _Script_AugmentedReality::ARGeoTrackingSupport::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AugmentedReality.ARGeoTrackingSupport");
    return result;
}
void* _Script_AugmentedReality::ARGeoTrackingSupport::GetGeoTrackingStateReason() {
    return;
}
_Script_AugmentedReality::ARGeoTrackingSupport* _Script_AugmentedReality::ARGeoTrackingSupport::GetGeoTrackingSupport() {
    return;
}
void* _Script_AugmentedReality::ARGeoTrackingSupport::GetGeoTrackingState() {
    return;
}
void* _Script_AugmentedReality::ARGeoTrackingSupport::GetGeoTrackingAccuracy() {
    return;
}
bool _Script_AugmentedReality::ARGeoTrackingSupport::AddGeoAnchorAtLocationWithAltitude(float Longitude, float Latitude, float AltitudeMeters, void* OptionalAnchorName) {
    return;
}
bool _Script_AugmentedReality::ARGeoTrackingSupport::AddGeoAnchorAtLocation(float Longitude, float Latitude, void* OptionalAnchorName) {
    return;
}
