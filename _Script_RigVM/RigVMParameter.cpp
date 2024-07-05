#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\ScriptStruct.hpp"
#include "RigVMParameter.hpp"
int32_t& _Script_RigVM::RigVMParameter::get_RegisterIndex() {
    return *(int32_t*)((uintptr_t)this + 0xc);
}
void* _Script_RigVM::RigVMParameter::get_Type() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_RigVM::RigVMParameter::get_Name() {
    return (void*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_RigVM::RigVMParameter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RigVM.RigVMParameter");
    return result;
}
void* _Script_RigVM::RigVMParameter::get_CPPType() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::ScriptStruct*& _Script_RigVM::RigVMParameter::get_ScriptStruct() {
    return *(_Script_CoreUObject::ScriptStruct**)((uintptr_t)this + 0x20);
}
void* _Script_RigVM::RigVMParameter::get_ScriptStructPath() {
    return (void*)((uintptr_t)this + 0x28);
}
