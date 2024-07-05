#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\ScriptStruct.hpp"
#include "RigVMRegisterOffset.hpp"
_Script_CoreUObject::ScriptStruct*& _Script_RigVM::RigVMRegisterOffset::get_ParentScriptStruct() {
    return *(_Script_CoreUObject::ScriptStruct**)((uintptr_t)this + 0x28);
}
void* _Script_RigVM::RigVMRegisterOffset::get_CPPType() {
    return (void*)((uintptr_t)this + 0x14);
}
void* _Script_RigVM::RigVMRegisterOffset::get_Segments() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_RigVM::RigVMRegisterOffset::get_Type() {
    return (void*)((uintptr_t)this + 0x10);
}
int32_t& _Script_RigVM::RigVMRegisterOffset::get_ArrayIndex() {
    return *(int32_t*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::ScriptStruct*& _Script_RigVM::RigVMRegisterOffset::get_ScriptStruct() {
    return *(_Script_CoreUObject::ScriptStruct**)((uintptr_t)this + 0x20);
}
void* _Script_RigVM::RigVMRegisterOffset::get_ElementSize() {
    return (void*)((uintptr_t)this + 0x34);
}
void* _Script_RigVM::RigVMRegisterOffset::get_CachedSegmentPath() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_RigVM::RigVMRegisterOffset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RigVM.RigVMRegisterOffset");
    return result;
}
