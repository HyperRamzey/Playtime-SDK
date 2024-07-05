#include "..\FUObjectArray.hpp"
#include "RigUnitMutable.hpp"
#include "RigUnit_SetSpaceTransform.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_SetSpaceTransform::get_Space() {
    return (void*)((uintptr_t)this + 0x68);
}
float& _Script_ControlRig::RigUnit_SetSpaceTransform::get_Weight() {
    return *(float*)((uintptr_t)this + 0x70);
}
void* _Script_ControlRig::RigUnit_SetSpaceTransform::get_Transform() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_ControlRig::RigUnit_SetSpaceTransform::get_CachedSpaceIndex() {
    return (void*)((uintptr_t)this + 0xb4);
}
void* _Script_ControlRig::RigUnit_SetSpaceTransform::get_SpaceType() {
    return (void*)((uintptr_t)this + 0xb0);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_SetSpaceTransform::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_SetSpaceTransform");
    return result;
}
