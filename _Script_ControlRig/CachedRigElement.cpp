#include "..\FUObjectArray.hpp"
#include "CachedRigElement.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::CachedRigElement::get_Key() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_ControlRig::CachedRigElement::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.CachedRigElement");
    return result;
}
void* _Script_ControlRig::CachedRigElement::get_Index() {
    return (void*)((uintptr_t)this + 0xc);
}
int32_t& _Script_ControlRig::CachedRigElement::get_ContainerVersion() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
