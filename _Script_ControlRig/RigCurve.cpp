#include "..\FUObjectArray.hpp"
#include "RigCurve.hpp"
#include "RigElement.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_ControlRig::RigCurve::get_Value() {
    return *(float*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigCurve::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigCurve");
    return result;
}
