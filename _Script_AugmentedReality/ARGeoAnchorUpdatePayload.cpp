#include "..\FUObjectArray.hpp"
#include "ARGeoAnchorUpdatePayload.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AugmentedReality::ARGeoAnchorUpdatePayload::get_AnchorName() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_AugmentedReality::ARGeoAnchorUpdatePayload::get_SessionPayload() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_AugmentedReality::ARGeoAnchorUpdatePayload::get_Longitude() {
    return *(float*)((uintptr_t)this + 0x50);
}
void* _Script_AugmentedReality::ARGeoAnchorUpdatePayload::get_WorldTransform() {
    return (void*)((uintptr_t)this + 0x20);
}
float& _Script_AugmentedReality::ARGeoAnchorUpdatePayload::get_Latitude() {
    return *(float*)((uintptr_t)this + 0x54);
}
void* _Script_AugmentedReality::ARGeoAnchorUpdatePayload::get_AltitudeSource() {
    return (void*)((uintptr_t)this + 0x5c);
}
float& _Script_AugmentedReality::ARGeoAnchorUpdatePayload::get_AltitudeMeters() {
    return *(float*)((uintptr_t)this + 0x58);
}
_Script_CoreUObject::Class* _Script_AugmentedReality::ARGeoAnchorUpdatePayload::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AugmentedReality.ARGeoAnchorUpdatePayload");
    return result;
}
