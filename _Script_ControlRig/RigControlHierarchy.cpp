#include "..\FUObjectArray.hpp"
#include "RigControlHierarchy.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigControlHierarchy::get_Controls() {
    return (void*)((uintptr_t)this + 0x98);
}
void* _Script_ControlRig::RigControlHierarchy::get_NameToIndexMapping() {
    return (void*)((uintptr_t)this + 0xa8);
}
void* _Script_ControlRig::RigControlHierarchy::get_Selection() {
    return (void*)((uintptr_t)this + 0xf8);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigControlHierarchy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigControlHierarchy");
    return result;
}
