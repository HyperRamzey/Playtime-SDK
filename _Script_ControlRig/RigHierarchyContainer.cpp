#include "..\FUObjectArray.hpp"
#include "RigHierarchyContainer.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigHierarchyContainer::get_BoneHierarchy() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_ControlRig::RigHierarchyContainer::get_SpaceHierarchy() {
    return (void*)((uintptr_t)this + 0x98);
}
void* _Script_ControlRig::RigHierarchyContainer::get_CurveContainer() {
    return (void*)((uintptr_t)this + 0x230);
}
void* _Script_ControlRig::RigHierarchyContainer::get_ControlHierarchy() {
    return (void*)((uintptr_t)this + 0x128);
}
int32_t& _Script_ControlRig::RigHierarchyContainer::get_Version() {
    return *(int32_t*)((uintptr_t)this + 0x2c8);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigHierarchyContainer::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigHierarchyContainer");
    return result;
}
