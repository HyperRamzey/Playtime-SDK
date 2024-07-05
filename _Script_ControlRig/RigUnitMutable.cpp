#include "..\FUObjectArray.hpp"
#include "RigUnit.hpp"
#include "RigUnitMutable.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::RigUnitMutable::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnitMutable");
    return result;
}
void* _Script_ControlRig::RigUnitMutable::get_ExecuteContext() {
    return (void*)((uintptr_t)this + 0x8);
}
