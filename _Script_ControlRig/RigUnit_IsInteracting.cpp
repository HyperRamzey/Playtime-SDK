#include "..\FUObjectArray.hpp"
#include "RigUnit.hpp"
#include "RigUnit_IsInteracting.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void _Script_ControlRig::RigUnit_IsInteracting::set_bIsInteracting(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_ControlRig::RigUnit_IsInteracting::get_bIsInteracting() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_IsInteracting::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_IsInteracting");
    return result;
}
