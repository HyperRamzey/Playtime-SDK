#include "..\FUObjectArray.hpp"
#include "RigUnitMutable.hpp"
#include "RigUnit_SetCurveValue.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_SetCurveValue::get_Curve() {
    return (void*)((uintptr_t)this + 0x68);
}
float& _Script_ControlRig::RigUnit_SetCurveValue::get_Value() {
    return *(float*)((uintptr_t)this + 0x70);
}
void* _Script_ControlRig::RigUnit_SetCurveValue::get_CachedCurveIndex() {
    return (void*)((uintptr_t)this + 0x74);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_SetCurveValue::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_SetCurveValue");
    return result;
}
