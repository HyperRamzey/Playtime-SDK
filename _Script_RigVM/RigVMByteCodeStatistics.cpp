#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RigVMByteCodeStatistics.hpp"
void* _Script_RigVM::RigVMByteCodeStatistics::get_InstructionCount() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_RigVM::RigVMByteCodeStatistics::get_DataBytes() {
    return (void*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_RigVM::RigVMByteCodeStatistics::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RigVM.RigVMByteCodeStatistics");
    return result;
}
