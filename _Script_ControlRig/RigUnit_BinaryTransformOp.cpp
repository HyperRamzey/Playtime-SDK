#include "..\FUObjectArray.hpp"
#include "RigUnit.hpp"
#include "RigUnit_BinaryTransformOp.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_BinaryTransformOp::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_BinaryTransformOp");
    return result;
}
void* _Script_ControlRig::RigUnit_BinaryTransformOp::get_Argument0() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_ControlRig::RigUnit_BinaryTransformOp::get_Argument1() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_ControlRig::RigUnit_BinaryTransformOp::get_Result() {
    return (void*)((uintptr_t)this + 0x70);
}
