#include "..\FUObjectArray.hpp"
#include "RigControlValueStorage.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_ControlRig::RigControlValueStorage::get_Float03() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_ControlRig::RigControlValueStorage::get_Float33() {
    return *(float*)((uintptr_t)this + 0x3c);
}
float& _Script_ControlRig::RigControlValueStorage::get_Float00() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_ControlRig::RigControlValueStorage::get_Float01() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_ControlRig::RigControlValueStorage::get_Float02() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_ControlRig::RigControlValueStorage::get_Float13() {
    return *(float*)((uintptr_t)this + 0x1c);
}
float& _Script_ControlRig::RigControlValueStorage::get_Float10() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_ControlRig::RigControlValueStorage::get_Float11() {
    return *(float*)((uintptr_t)this + 0x14);
}
float& _Script_ControlRig::RigControlValueStorage::get_Float21() {
    return *(float*)((uintptr_t)this + 0x24);
}
float& _Script_ControlRig::RigControlValueStorage::get_Float12() {
    return *(float*)((uintptr_t)this + 0x18);
}
float& _Script_ControlRig::RigControlValueStorage::get_Float20() {
    return *(float*)((uintptr_t)this + 0x20);
}
float& _Script_ControlRig::RigControlValueStorage::get_Float22() {
    return *(float*)((uintptr_t)this + 0x28);
}
float& _Script_ControlRig::RigControlValueStorage::get_Float23() {
    return *(float*)((uintptr_t)this + 0x2c);
}
float& _Script_ControlRig::RigControlValueStorage::get_Float30() {
    return *(float*)((uintptr_t)this + 0x30);
}
float& _Script_ControlRig::RigControlValueStorage::get_Float31() {
    return *(float*)((uintptr_t)this + 0x34);
}
float& _Script_ControlRig::RigControlValueStorage::get_Float32() {
    return *(float*)((uintptr_t)this + 0x38);
}
bool _Script_ControlRig::RigControlValueStorage::get_bValid() {
    return (*(uint8_t*)((uintptr_t)this + 0x40 + 0)) & 1 != 0;
}
void _Script_ControlRig::RigControlValueStorage::set_bValid(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x40 + 0);
    *(uint8_t*)((uintptr_t)this + 0x40 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigControlValueStorage::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigControlValueStorage");
    return result;
}
