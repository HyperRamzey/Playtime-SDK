#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RigVMInstruction.hpp"
void* _Script_RigVM::RigVMInstruction::get_ByteCodeIndex() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_RigVM::RigVMInstruction::get_OpCode() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_RigVM::RigVMInstruction::get_OperandAlignment() {
    return (void*)((uintptr_t)this + 0x9);
}
_Script_CoreUObject::Class* _Script_RigVM::RigVMInstruction::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RigVM.RigVMInstruction");
    return result;
}
