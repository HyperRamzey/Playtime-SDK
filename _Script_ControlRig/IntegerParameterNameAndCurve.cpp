#include "..\FUObjectArray.hpp"
#include "IntegerParameterNameAndCurve.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::IntegerParameterNameAndCurve::get_ParameterCurve() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_ControlRig::IntegerParameterNameAndCurve::get_ParameterName() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_ControlRig::IntegerParameterNameAndCurve::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.IntegerParameterNameAndCurve");
    return result;
}
