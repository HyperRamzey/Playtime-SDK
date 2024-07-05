#include "..\FUObjectArray.hpp"
#include "RigUnitMutable.hpp"
#include "RigUnit_SetSpaceInitialTransform.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_SetSpaceInitialTransform::get_SpaceName() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_ControlRig::RigUnit_SetSpaceInitialTransform::get_Transform() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_ControlRig::RigUnit_SetSpaceInitialTransform::get_Result() {
    return (void*)((uintptr_t)this + 0xa0);
}
void* _Script_ControlRig::RigUnit_SetSpaceInitialTransform::get_CachedSpaceIndex() {
    return (void*)((uintptr_t)this + 0xd4);
}
void* _Script_ControlRig::RigUnit_SetSpaceInitialTransform::get_Space() {
    return (void*)((uintptr_t)this + 0xd0);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_SetSpaceInitialTransform::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_SetSpaceInitialTransform");
    return result;
}
