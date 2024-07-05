#include "..\FUObjectArray.hpp"
#include "RigUnit_NameBase.hpp"
#include "RigUnit_NameTruncate.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_NameTruncate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_NameTruncate");
    return result;
}
void* _Script_ControlRig::RigUnit_NameTruncate::get_Chopped() {
    return (void*)((uintptr_t)this + 0x20);
}
bool _Script_ControlRig::RigUnit_NameTruncate::get_FromEnd() {
    return (*(uint8_t*)((uintptr_t)this + 0x14 + 0)) & 1 != 0;
}
void* _Script_ControlRig::RigUnit_NameTruncate::get_Name() {
    return (void*)((uintptr_t)this + 0x8);
}
int32_t& _Script_ControlRig::RigUnit_NameTruncate::get_Count() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
void _Script_ControlRig::RigUnit_NameTruncate::set_FromEnd(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14 + 0);
    *(uint8_t*)((uintptr_t)this + 0x14 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ControlRig::RigUnit_NameTruncate::get_Remainder() {
    return (void*)((uintptr_t)this + 0x18);
}
