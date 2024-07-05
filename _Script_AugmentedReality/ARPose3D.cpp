#include "..\FUObjectArray.hpp"
#include "ARPose3D.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AugmentedReality::ARPose3D::get_JointTransforms() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_AugmentedReality::ARPose3D::get_SkeletonDefinition() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_AugmentedReality::ARPose3D::get_IsJointTracked() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_AugmentedReality::ARPose3D::get_JointTransformSpace() {
    return (void*)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_AugmentedReality::ARPose3D::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AugmentedReality.ARPose3D");
    return result;
}
