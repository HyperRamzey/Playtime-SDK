#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RigVMByteCode.hpp"
void* _Script_RigVM::RigVMByteCode::get_ByteCode() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_RigVM::RigVMByteCode::get_NumInstructions() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
void* _Script_RigVM::RigVMByteCode::get_Entries() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_RigVM::RigVMByteCode::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RigVM.RigVMByteCode");
    return result;
}
