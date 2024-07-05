#include "..\FUObjectArray.hpp"
#include "ControlRigSequenceObjectReference.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::ControlRigSequenceObjectReference::get_ControlRigClass() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_ControlRig::ControlRigSequenceObjectReference::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.ControlRigSequenceObjectReference");
    return result;
}
