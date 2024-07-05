#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RigVMMemoryContainer.hpp"
void* _Script_RigVM::RigVMMemoryContainer::get_MemoryType() {
    return (void*)((uintptr_t)this + 0x1);
}
bool _Script_RigVM::RigVMMemoryContainer::get_bUseNameMap() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void* _Script_RigVM::RigVMMemoryContainer::get_RegisterOffsets() {
    return (void*)((uintptr_t)this + 0x18);
}
void _Script_RigVM::RigVMMemoryContainer::set_bUseNameMap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_RigVM::RigVMMemoryContainer::get_Registers() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_RigVM::RigVMMemoryContainer::get_Data() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_RigVM::RigVMMemoryContainer::get_ScriptStructs() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_RigVM::RigVMMemoryContainer::get_NameMap() {
    return (void*)((uintptr_t)this + 0x48);
}
bool _Script_RigVM::RigVMMemoryContainer::get_bEncounteredErrorDuringLoad() {
    return (*(uint8_t*)((uintptr_t)this + 0x98 + 0)) & 1 != 0;
}
void _Script_RigVM::RigVMMemoryContainer::set_bEncounteredErrorDuringLoad(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x98 + 0);
    *(uint8_t*)((uintptr_t)this + 0x98 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_RigVM::RigVMMemoryContainer::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RigVM.RigVMMemoryContainer");
    return result;
}
