#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RigVMMemoryStatistics.hpp"
void* _Script_RigVM::RigVMMemoryStatistics::get_RegisterCount() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_RigVM::RigVMMemoryStatistics::get_DataBytes() {
    return (void*)((uintptr_t)this + 0x4);
}
void* _Script_RigVM::RigVMMemoryStatistics::get_TotalBytes() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_RigVM::RigVMMemoryStatistics::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RigVM.RigVMMemoryStatistics");
    return result;
}
