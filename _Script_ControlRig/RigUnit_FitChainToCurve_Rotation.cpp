#include "..\FUObjectArray.hpp"
#include "RigUnit_FitChainToCurve_Rotation.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_FitChainToCurve_Rotation::get_Rotation() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_ControlRig::RigUnit_FitChainToCurve_Rotation::get_Ratio() {
    return *(float*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_FitChainToCurve_Rotation::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_FitChainToCurve_Rotation");
    return result;
}
