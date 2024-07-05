#include "..\FUObjectArray.hpp"
#include "ControlRigObjectHolder.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::ControlRigObjectHolder::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ControlRig.ControlRigObjectHolder");
    return result;
}
void* _Script_ControlRig::ControlRigObjectHolder::get_Objects() {
    return (void*)((uintptr_t)this + 0x28);
}
