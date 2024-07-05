#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RigVMStatistics.hpp"
void* _Script_RigVM::RigVMStatistics::get_BytesForCDO() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_RigVM::RigVMStatistics::get_BytesPerInstance() {
    return (void*)((uintptr_t)this + 0x4);
}
void* _Script_RigVM::RigVMStatistics::get_LiteralMemory() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_RigVM::RigVMStatistics::get_WorkMemory() {
    return (void*)((uintptr_t)this + 0x14);
}
_Script_CoreUObject::Class* _Script_RigVM::RigVMStatistics::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RigVM.RigVMStatistics");
    return result;
}
void* _Script_RigVM::RigVMStatistics::get_ByteCode() {
    return (void*)((uintptr_t)this + 0x24);
}
void* _Script_RigVM::RigVMStatistics::get_BytesForCaching() {
    return (void*)((uintptr_t)this + 0x20);
}
