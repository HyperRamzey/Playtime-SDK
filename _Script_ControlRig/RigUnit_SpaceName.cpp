#include "..\FUObjectArray.hpp"
#include "RigUnit.hpp"
#include "RigUnit_SpaceName.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_SpaceName::get_Space() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_SpaceName::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_SpaceName");
    return result;
}