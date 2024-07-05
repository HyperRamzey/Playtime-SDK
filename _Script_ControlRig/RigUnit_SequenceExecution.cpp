#include "..\FUObjectArray.hpp"
#include "RigUnit.hpp"
#include "RigUnit_SequenceExecution.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_SequenceExecution::get_ExecuteContext() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_ControlRig::RigUnit_SequenceExecution::get_A() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_ControlRig::RigUnit_SequenceExecution::get_B() {
    return (void*)((uintptr_t)this + 0xc8);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_SequenceExecution::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_SequenceExecution");
    return result;
}
void* _Script_ControlRig::RigUnit_SequenceExecution::get_C() {
    return (void*)((uintptr_t)this + 0x128);
}
void* _Script_ControlRig::RigUnit_SequenceExecution::get_D() {
    return (void*)((uintptr_t)this + 0x188);
}
