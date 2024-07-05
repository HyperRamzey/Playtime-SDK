#include "..\FUObjectArray.hpp"
#include "RigUnit_NameBase.hpp"
#include "RigUnit_StartsWith.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_StartsWith::get_Name() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_ControlRig::RigUnit_StartsWith::get_Start() {
    return (void*)((uintptr_t)this + 0x10);
}
bool _Script_ControlRig::RigUnit_StartsWith::get_Result() {
    return (*(uint8_t*)((uintptr_t)this + 0x18 + 0)) & 1 != 0;
}
void _Script_ControlRig::RigUnit_StartsWith::set_Result(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x18 + 0);
    *(uint8_t*)((uintptr_t)this + 0x18 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_StartsWith::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_StartsWith");
    return result;
}
