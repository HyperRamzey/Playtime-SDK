#include "..\FUObjectArray.hpp"
#include "RigElement.hpp"
#include "RigSpace.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::RigSpace::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigSpace");
    return result;
}
void* _Script_ControlRig::RigSpace::get_SpaceType() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_ControlRig::RigSpace::get_ParentName() {
    return (void*)((uintptr_t)this + 0x1c);
}
void* _Script_ControlRig::RigSpace::get_InitialTransform() {
    return (void*)((uintptr_t)this + 0x30);
}
int32_t& _Script_ControlRig::RigSpace::get_ParentIndex() {
    return *(int32_t*)((uintptr_t)this + 0x24);
}
void* _Script_ControlRig::RigSpace::get_LocalTransform() {
    return (void*)((uintptr_t)this + 0x60);
}
