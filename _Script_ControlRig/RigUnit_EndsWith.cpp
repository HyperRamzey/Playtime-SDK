#include "..\FUObjectArray.hpp"
#include "RigUnit_EndsWith.hpp"
#include "RigUnit_NameBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_EndsWith::get_Name() {
    return (void*)((uintptr_t)this + 0x8);
}
void _Script_ControlRig::RigUnit_EndsWith::set_Result(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x18 + 0);
    *(uint8_t*)((uintptr_t)this + 0x18 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ControlRig::RigUnit_EndsWith::get_Ending() {
    return (void*)((uintptr_t)this + 0x10);
}
bool _Script_ControlRig::RigUnit_EndsWith::get_Result() {
    return (*(uint8_t*)((uintptr_t)this + 0x18 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_EndsWith::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_EndsWith");
    return result;
}
