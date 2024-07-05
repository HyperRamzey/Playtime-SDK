#include "..\FUObjectArray.hpp"
#include "RigElement.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::RigElement::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigElement");
    return result;
}
void* _Script_ControlRig::RigElement::get_Name() {
    return (void*)((uintptr_t)this + 0x8);
}
int32_t& _Script_ControlRig::RigElement::get_Index() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
