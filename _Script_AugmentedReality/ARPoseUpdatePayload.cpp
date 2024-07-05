#include "..\FUObjectArray.hpp"
#include "ARPoseUpdatePayload.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AugmentedReality::ARPoseUpdatePayload::get_JointTransforms() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_AugmentedReality::ARPoseUpdatePayload::get_WorldTransform() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_AugmentedReality::ARPoseUpdatePayload::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AugmentedReality.ARPoseUpdatePayload");
    return result;
}
