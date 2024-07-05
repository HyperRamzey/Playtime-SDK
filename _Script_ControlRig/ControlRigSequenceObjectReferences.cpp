#include "..\FUObjectArray.hpp"
#include "ControlRigSequenceObjectReferences.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::ControlRigSequenceObjectReferences::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.ControlRigSequenceObjectReferences");
    return result;
}
void* _Script_ControlRig::ControlRigSequenceObjectReferences::get_Array() {
    return (void*)((uintptr_t)this + 0x0);
}
