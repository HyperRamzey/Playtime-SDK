#include "..\FUObjectArray.hpp"
#include "ARPose3D.hpp"
#include "ARTrackedGeometry.hpp"
#include "ARTrackedPose.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AugmentedReality::ARTrackedPose::get_TrackedPose() {
    return (void*)((uintptr_t)this + 0xf8);
}
_Script_CoreUObject::Class* _Script_AugmentedReality::ARTrackedPose::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AugmentedReality.ARTrackedPose");
    return result;
}
_Script_AugmentedReality::ARPose3D _Script_AugmentedReality::ARTrackedPose::GetTrackedPoseData() {
    return;
}
