#include "..\FUObjectArray.hpp"
#include "ARGeoAnchor.hpp"
#include "ARTrackedGeometry.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AugmentedReality::ARGeoAnchor::GetAltitudeSource() {
    return;
}
_Script_CoreUObject::Class* _Script_AugmentedReality::ARGeoAnchor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AugmentedReality.ARGeoAnchor");
    return result;
}
float _Script_AugmentedReality::ARGeoAnchor::GetLongitude() {
    return;
}
float _Script_AugmentedReality::ARGeoAnchor::GetLatitude() {
    return;
}
float _Script_AugmentedReality::ARGeoAnchor::GetAltitudeMeters() {
    return;
}
