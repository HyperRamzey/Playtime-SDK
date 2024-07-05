#include "..\FUObjectArray.hpp"
#include "RigBone.hpp"
#include "RigElement.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigBone::get_Type() {
    return (void*)((uintptr_t)this + 0xd0);
}
int32_t& _Script_ControlRig::RigBone::get_ParentIndex() {
    return *(int32_t*)((uintptr_t)this + 0x20);
}
void* _Script_ControlRig::RigBone::get_ParentName() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_ControlRig::RigBone::get_GlobalTransform() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_ControlRig::RigBone::get_InitialTransform() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_ControlRig::RigBone::get_LocalTransform() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_ControlRig::RigBone::get_Dependents() {
    return (void*)((uintptr_t)this + 0xc0);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigBone::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigBone");
    return result;
}
