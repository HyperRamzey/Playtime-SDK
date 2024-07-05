#include "..\FUObjectArray.hpp"
#include "RigHierarchyCopyPasteContent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigHierarchyCopyPasteContent::get_Types() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_ControlRig::RigHierarchyCopyPasteContent::get_Contents() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_ControlRig::RigHierarchyCopyPasteContent::get_LocalTransforms() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_ControlRig::RigHierarchyCopyPasteContent::get_GlobalTransforms() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigHierarchyCopyPasteContent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigHierarchyCopyPasteContent");
    return result;
}
