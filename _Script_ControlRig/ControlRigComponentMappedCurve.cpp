#include "..\FUObjectArray.hpp"
#include "ControlRigComponentMappedCurve.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::ControlRigComponentMappedCurve::get_Source() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_ControlRig::ControlRigComponentMappedCurve::get_Target() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_ControlRig::ControlRigComponentMappedCurve::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.ControlRigComponentMappedCurve");
    return result;
}