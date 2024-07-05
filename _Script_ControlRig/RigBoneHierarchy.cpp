#include "..\FUObjectArray.hpp"
#include "RigBoneHierarchy.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigBoneHierarchy::get_Bones() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_ControlRig::RigBoneHierarchy::get_NameToIndexMapping() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_ControlRig::RigBoneHierarchy::get_Selection() {
    return (void*)((uintptr_t)this + 0x80);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigBoneHierarchy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigBoneHierarchy");
    return result;
}
