#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RigVMByteCodeEntry.hpp"
_Script_CoreUObject::Class* _Script_RigVM::RigVMByteCodeEntry::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RigVM.RigVMByteCodeEntry");
    return result;
}
void* _Script_RigVM::RigVMByteCodeEntry::get_Name() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_RigVM::RigVMByteCodeEntry::get_InstructionIndex() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
