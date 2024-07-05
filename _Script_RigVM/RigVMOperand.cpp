#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RigVMOperand.hpp"
void* _Script_RigVM::RigVMOperand::get_MemoryType() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_RigVM::RigVMOperand::get_RegisterIndex() {
    return (void*)((uintptr_t)this + 0x2);
}
void* _Script_RigVM::RigVMOperand::get_RegisterOffset() {
    return (void*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_RigVM::RigVMOperand::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RigVM.RigVMOperand");
    return result;
}
