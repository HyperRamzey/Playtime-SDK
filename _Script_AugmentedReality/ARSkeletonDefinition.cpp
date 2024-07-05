#include "..\FUObjectArray.hpp"
#include "ARSkeletonDefinition.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
int32_t& _Script_AugmentedReality::ARSkeletonDefinition::get_NumJoints() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_AugmentedReality::ARSkeletonDefinition::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AugmentedReality.ARSkeletonDefinition");
    return result;
}
void* _Script_AugmentedReality::ARSkeletonDefinition::get_JointNames() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_AugmentedReality::ARSkeletonDefinition::get_ParentIndices() {
    return (void*)((uintptr_t)this + 0x18);
}
