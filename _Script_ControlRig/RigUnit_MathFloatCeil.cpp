#include "..\FUObjectArray.hpp"
#include "RigUnit_MathFloatBase.hpp"
#include "RigUnit_MathFloatCeil.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_ControlRig::RigUnit_MathFloatCeil::get_Value() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_ControlRig::RigUnit_MathFloatCeil::get_Result() {
    return *(float*)((uintptr_t)this + 0xc);
}
int32_t& _Script_ControlRig::RigUnit_MathFloatCeil::get_Int() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathFloatCeil::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathFloatCeil");
    return result;
}
