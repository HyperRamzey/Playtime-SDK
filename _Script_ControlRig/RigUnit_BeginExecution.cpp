#include "..\FUObjectArray.hpp"
#include "RigUnit.hpp"
#include "RigUnit_BeginExecution.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_BeginExecution::get_ExecuteContext() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_BeginExecution::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_BeginExecution");
    return result;
}
