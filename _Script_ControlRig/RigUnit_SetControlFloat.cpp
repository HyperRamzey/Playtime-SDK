#include "..\FUObjectArray.hpp"
#include "RigUnitMutable.hpp"
#include "RigUnit_SetControlFloat.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_SetControlFloat::get_Control() {
    return (void*)((uintptr_t)this + 0x68);
}
float& _Script_ControlRig::RigUnit_SetControlFloat::get_FloatValue() {
    return *(float*)((uintptr_t)this + 0x74);
}
float& _Script_ControlRig::RigUnit_SetControlFloat::get_Weight() {
    return *(float*)((uintptr_t)this + 0x70);
}
void* _Script_ControlRig::RigUnit_SetControlFloat::get_CachedControlIndex() {
    return (void*)((uintptr_t)this + 0x78);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_SetControlFloat::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_SetControlFloat");
    return result;
}
