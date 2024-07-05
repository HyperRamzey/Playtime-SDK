#include "..\FUObjectArray.hpp"
#include "ControlRigDrawContainer.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::ControlRigDrawContainer::get_Instructions() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_ControlRig::ControlRigDrawContainer::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.ControlRigDrawContainer");
    return result;
}
