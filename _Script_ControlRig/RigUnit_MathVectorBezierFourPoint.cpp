#include "..\FUObjectArray.hpp"
#include "RigUnit_MathVectorBase.hpp"
#include "RigUnit_MathVectorBezierFourPoint.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_MathVectorBezierFourPoint::get_Bezier() {
    return (void*)((uintptr_t)this + 0x8);
}
float& _Script_ControlRig::RigUnit_MathVectorBezierFourPoint::get_T() {
    return *(float*)((uintptr_t)this + 0x38);
}
void* _Script_ControlRig::RigUnit_MathVectorBezierFourPoint::get_Result() {
    return (void*)((uintptr_t)this + 0x3c);
}
void* _Script_ControlRig::RigUnit_MathVectorBezierFourPoint::get_Tangent() {
    return (void*)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathVectorBezierFourPoint::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathVectorBezierFourPoint");
    return result;
}
