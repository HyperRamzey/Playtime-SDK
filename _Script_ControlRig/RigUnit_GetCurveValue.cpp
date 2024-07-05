#include "..\FUObjectArray.hpp"
#include "RigUnit.hpp"
#include "RigUnit_GetCurveValue.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_GetCurveValue::get_Curve() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_GetCurveValue::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_GetCurveValue");
    return result;
}
float& _Script_ControlRig::RigUnit_GetCurveValue::get_Value() {
    return *(float*)((uintptr_t)this + 0x10);
}
void* _Script_ControlRig::RigUnit_GetCurveValue::get_CachedCurveIndex() {
    return (void*)((uintptr_t)this + 0x14);
}
