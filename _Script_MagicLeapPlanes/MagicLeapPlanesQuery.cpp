#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "MagicLeapPlanesQuery.hpp"
void* _Script_MagicLeapPlanes::MagicLeapPlanesQuery::get_Flags() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_Engine::BoxComponent*& _Script_MagicLeapPlanes::MagicLeapPlanesQuery::get_SearchVolume() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x10);
}
int32_t& _Script_MagicLeapPlanes::MagicLeapPlanesQuery::get_MaxResults() {
    return *(int32_t*)((uintptr_t)this + 0x18);
}
void* _Script_MagicLeapPlanes::MagicLeapPlanesQuery::get_SearchVolumePosition() {
    return (void*)((uintptr_t)this + 0x24);
}
float& _Script_MagicLeapPlanes::MagicLeapPlanesQuery::get_MinHoleLength() {
    return *(float*)((uintptr_t)this + 0x1c);
}
void* _Script_MagicLeapPlanes::MagicLeapPlanesQuery::get_SearchVolumeOrientation() {
    return (void*)((uintptr_t)this + 0x30);
}
float& _Script_MagicLeapPlanes::MagicLeapPlanesQuery::get_MinPlaneArea() {
    return *(float*)((uintptr_t)this + 0x20);
}
void* _Script_MagicLeapPlanes::MagicLeapPlanesQuery::get_SearchVolumeExtents() {
    return (void*)((uintptr_t)this + 0x40);
}
float& _Script_MagicLeapPlanes::MagicLeapPlanesQuery::get_SimilarityThreshold() {
    return *(float*)((uintptr_t)this + 0x4c);
}
bool _Script_MagicLeapPlanes::MagicLeapPlanesQuery::get_bSearchVolumeTrackingSpace() {
    return (*(uint8_t*)((uintptr_t)this + 0x50 + 0)) & 1 != 0;
}
void _Script_MagicLeapPlanes::MagicLeapPlanesQuery::set_bSearchVolumeTrackingSpace(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x50 + 0);
    *(uint8_t*)((uintptr_t)this + 0x50 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_MagicLeapPlanes::MagicLeapPlanesQuery::get_bResultTrackingSpace() {
    return (*(uint8_t*)((uintptr_t)this + 0x51 + 0)) & 1 != 0;
}
void _Script_MagicLeapPlanes::MagicLeapPlanesQuery::set_bResultTrackingSpace(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x51 + 0);
    *(uint8_t*)((uintptr_t)this + 0x51 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_MagicLeapPlanes::MagicLeapPlanesQuery::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MagicLeapPlanes.MagicLeapPlanesQuery");
    return result;
}
