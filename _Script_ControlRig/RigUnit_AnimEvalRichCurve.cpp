#include "..\FUObjectArray.hpp"
#include "RigUnit_AnimBase.hpp"
#include "RigUnit_AnimEvalRichCurve.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_ControlRig::RigUnit_AnimEvalRichCurve::get_TargetMaximum() {
    return *(float*)((uintptr_t)this + 0xa4);
}
float& _Script_ControlRig::RigUnit_AnimEvalRichCurve::get_SourceMinimum() {
    return *(float*)((uintptr_t)this + 0x98);
}
float& _Script_ControlRig::RigUnit_AnimEvalRichCurve::get_Value() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_ControlRig::RigUnit_AnimEvalRichCurve::get_TargetMinimum() {
    return *(float*)((uintptr_t)this + 0xa0);
}
void* _Script_ControlRig::RigUnit_AnimEvalRichCurve::get_Curve() {
    return (void*)((uintptr_t)this + 0x10);
}
float& _Script_ControlRig::RigUnit_AnimEvalRichCurve::get_SourceMaximum() {
    return *(float*)((uintptr_t)this + 0x9c);
}
float& _Script_ControlRig::RigUnit_AnimEvalRichCurve::get_Result() {
    return *(float*)((uintptr_t)this + 0xa8);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_AnimEvalRichCurve::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_AnimEvalRichCurve");
    return result;
}
