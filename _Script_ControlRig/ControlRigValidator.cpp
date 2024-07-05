#include "..\FUObjectArray.hpp"
#include "ControlRigValidator.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
void* _Script_ControlRig::ControlRigValidator::get_Passes() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_ControlRig::ControlRigValidator::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ControlRig.ControlRigValidator");
    return result;
}
