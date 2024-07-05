#include "..\FUObjectArray.hpp"
#include "RigUnit_MathBase.hpp"
#include "RigUnit_MathQuaternionRotationOrder.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_MathQuaternionRotationOrder::get_RotationOrder() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathQuaternionRotationOrder::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathQuaternionRotationOrder");
    return result;
}
