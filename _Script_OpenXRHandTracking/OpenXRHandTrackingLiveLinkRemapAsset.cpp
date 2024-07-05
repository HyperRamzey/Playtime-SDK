#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_LiveLink\LiveLinkRetargetAsset.hpp"
#include "OpenXRHandTrackingLiveLinkRemapAsset.hpp"
void* _Script_OpenXRHandTracking::OpenXRHandTrackingLiveLinkRemapAsset::get_SwizzleZ() {
    return (void*)((uintptr_t)this + 0x2c);
}
bool _Script_OpenXRHandTracking::OpenXRHandTrackingLiveLinkRemapAsset::get_bHasMetacarpals() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
void* _Script_OpenXRHandTracking::OpenXRHandTrackingLiveLinkRemapAsset::get_SwizzleW() {
    return (void*)((uintptr_t)this + 0x2d);
}
bool _Script_OpenXRHandTracking::OpenXRHandTrackingLiveLinkRemapAsset::get_bRetargetRotationOnly() {
    return (*(uint8_t*)((uintptr_t)this + 0x29 + 0)) & 1 != 0;
}
void _Script_OpenXRHandTracking::OpenXRHandTrackingLiveLinkRemapAsset::set_bHasMetacarpals(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_OpenXRHandTracking::OpenXRHandTrackingLiveLinkRemapAsset::set_bRetargetRotationOnly(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x29 + 0);
    *(uint8_t*)((uintptr_t)this + 0x29 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_OpenXRHandTracking::OpenXRHandTrackingLiveLinkRemapAsset::get_SwizzleX() {
    return (void*)((uintptr_t)this + 0x2a);
}
void* _Script_OpenXRHandTracking::OpenXRHandTrackingLiveLinkRemapAsset::get_SwizzleY() {
    return (void*)((uintptr_t)this + 0x2b);
}
void* _Script_OpenXRHandTracking::OpenXRHandTrackingLiveLinkRemapAsset::get_HandTrackingBoneNameMap() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_OpenXRHandTracking::OpenXRHandTrackingLiveLinkRemapAsset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/OpenXRHandTracking.OpenXRHandTrackingLiveLinkRemapAsset");
    return result;
}
