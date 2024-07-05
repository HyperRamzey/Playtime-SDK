#include "..\FUObjectArray.hpp"
#include "RigUnit.hpp"
#include "RigUnit_GetSpaceTransform.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_GetSpaceTransform::get_Space() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_ControlRig::RigUnit_GetSpaceTransform::get_SpaceType() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_ControlRig::RigUnit_GetSpaceTransform::get_Transform() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_ControlRig::RigUnit_GetSpaceTransform::get_CachedSpaceIndex() {
    return (void*)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_GetSpaceTransform::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_GetSpaceTransform");
    return result;
}
