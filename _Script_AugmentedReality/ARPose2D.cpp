#include "..\FUObjectArray.hpp"
#include "ARPose2D.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AugmentedReality::ARPose2D::get_JointLocations() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_AugmentedReality::ARPose2D::get_SkeletonDefinition() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_AugmentedReality::ARPose2D::get_IsJointTracked() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_AugmentedReality::ARPose2D::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AugmentedReality.ARPose2D");
    return result;
}
