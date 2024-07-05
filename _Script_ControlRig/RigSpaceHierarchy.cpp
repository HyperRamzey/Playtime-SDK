#include "..\FUObjectArray.hpp"
#include "RigSpaceHierarchy.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::RigSpaceHierarchy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigSpaceHierarchy");
    return result;
}
void* _Script_ControlRig::RigSpaceHierarchy::get_Selection() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_ControlRig::RigSpaceHierarchy::get_Spaces() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_ControlRig::RigSpaceHierarchy::get_NameToIndexMapping() {
    return (void*)((uintptr_t)this + 0x30);
}
