#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RigVMRegister.hpp"
void* _Script_RigVM::RigVMRegister::get_Type() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_RigVM::RigVMRegister::get_ByteIndex() {
    return (void*)((uintptr_t)this + 0x4);
}
void* _Script_RigVM::RigVMRegister::get_ElementSize() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_RigVM::RigVMRegister::get_AlignmentBytes() {
    return (void*)((uintptr_t)this + 0xe);
}
void* _Script_RigVM::RigVMRegister::get_ElementCount() {
    return (void*)((uintptr_t)this + 0xa);
}
void* _Script_RigVM::RigVMRegister::get_SliceCount() {
    return (void*)((uintptr_t)this + 0xc);
}
void* _Script_RigVM::RigVMRegister::get_Name() {
    return (void*)((uintptr_t)this + 0x14);
}
void* _Script_RigVM::RigVMRegister::get_TrailingBytes() {
    return (void*)((uintptr_t)this + 0x10);
}
int32_t& _Script_RigVM::RigVMRegister::get_ScriptStructIndex() {
    return *(int32_t*)((uintptr_t)this + 0x1c);
}
bool _Script_RigVM::RigVMRegister::get_bIsArray() {
    return (*(uint8_t*)((uintptr_t)this + 0x20 + 0)) & 1 != 0;
}
void _Script_RigVM::RigVMRegister::set_bIsArray(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20 + 0);
    *(uint8_t*)((uintptr_t)this + 0x20 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RigVM::RigVMRegister::get_bIsDynamic() {
    return (*(uint8_t*)((uintptr_t)this + 0x21 + 0)) & 1 != 0;
}
void _Script_RigVM::RigVMRegister::set_bIsDynamic(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x21 + 0);
    *(uint8_t*)((uintptr_t)this + 0x21 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_RigVM::RigVMRegister::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RigVM.RigVMRegister");
    return result;
}
