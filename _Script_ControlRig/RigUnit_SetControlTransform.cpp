#include "..\FUObjectArray.hpp"
#include "RigUnitMutable.hpp"
#include "RigUnit_SetControlTransform.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_SetControlTransform::get_Space() {
    return (void*)((uintptr_t)this + 0xb0);
}
void* _Script_ControlRig::RigUnit_SetControlTransform::get_Control() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_ControlRig::RigUnit_SetControlTransform::get_Transform() {
    return (void*)((uintptr_t)this + 0x80);
}
float& _Script_ControlRig::RigUnit_SetControlTransform::get_Weight() {
    return *(float*)((uintptr_t)this + 0x70);
}
void* _Script_ControlRig::RigUnit_SetControlTransform::get_CachedControlIndex() {
    return (void*)((uintptr_t)this + 0xb4);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_SetControlTransform::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_SetControlTransform");
    return result;
}
