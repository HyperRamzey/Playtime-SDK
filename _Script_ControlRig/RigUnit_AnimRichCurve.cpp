#include "..\FUObjectArray.hpp"
#include "RigUnit_AnimBase.hpp"
#include "RigUnit_AnimRichCurve.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_AnimRichCurve::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_AnimRichCurve");
    return result;
}
void* _Script_ControlRig::RigUnit_AnimRichCurve::get_Curve() {
    return (void*)((uintptr_t)this + 0x8);
}
