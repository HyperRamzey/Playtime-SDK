#include "..\FUObjectArray.hpp"
#include "RigUnitMutable.hpp"
#include "RigUnit_SetControlVector.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_SetControlVector::get_Control() {
    return (void*)((uintptr_t)this + 0x68);
}
float& _Script_ControlRig::RigUnit_SetControlVector::get_Weight() {
    return *(float*)((uintptr_t)this + 0x70);
}
void* _Script_ControlRig::RigUnit_SetControlVector::get_Vector() {
    return (void*)((uintptr_t)this + 0x74);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_SetControlVector::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_SetControlVector");
    return result;
}
void* _Script_ControlRig::RigUnit_SetControlVector::get_Space() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_ControlRig::RigUnit_SetControlVector::get_CachedControlIndex() {
    return (void*)((uintptr_t)this + 0x84);
}
