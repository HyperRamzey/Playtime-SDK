#include "..\FUObjectArray.hpp"
#include "EnumParameterNameAndCurve.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::EnumParameterNameAndCurve::get_ParameterName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_ControlRig::EnumParameterNameAndCurve::get_ParameterCurve() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_ControlRig::EnumParameterNameAndCurve::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.EnumParameterNameAndCurve");
    return result;
}
