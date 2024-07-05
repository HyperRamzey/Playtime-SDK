#include "..\FUObjectArray.hpp"
#include "RigUnit_MathVectorBase.hpp"
#include "RigUnit_MathVectorMakeBezierFourPoint.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_MathVectorMakeBezierFourPoint::get_Bezier() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathVectorMakeBezierFourPoint::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathVectorMakeBezierFourPoint");
    return result;
}
