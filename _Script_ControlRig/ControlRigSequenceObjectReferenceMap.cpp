#include "..\FUObjectArray.hpp"
#include "ControlRigSequenceObjectReferenceMap.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::ControlRigSequenceObjectReferenceMap::get_BindingIds() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_ControlRig::ControlRigSequenceObjectReferenceMap::get_References() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_ControlRig::ControlRigSequenceObjectReferenceMap::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.ControlRigSequenceObjectReferenceMap");
    return result;
}
