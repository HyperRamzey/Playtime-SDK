#include "..\FUObjectArray.hpp"
#include "RigUnitMutable.hpp"
#include "RigUnit_SendEvent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void _Script_ControlRig::RigUnit_SendEvent::set_bEnable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7c + 0);
    *(uint8_t*)((uintptr_t)this + 0x7c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_ControlRig::RigUnit_SendEvent::get_OffsetInSeconds() {
    return *(float*)((uintptr_t)this + 0x78);
}
void* _Script_ControlRig::RigUnit_SendEvent::get_Event() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_ControlRig::RigUnit_SendEvent::get_Item() {
    return (void*)((uintptr_t)this + 0x6c);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_SendEvent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_SendEvent");
    return result;
}
bool _Script_ControlRig::RigUnit_SendEvent::get_bEnable() {
    return (*(uint8_t*)((uintptr_t)this + 0x7c + 0)) & 1 != 0;
}
bool _Script_ControlRig::RigUnit_SendEvent::get_bOnlyDuringInteraction() {
    return (*(uint8_t*)((uintptr_t)this + 0x7d + 0)) & 1 != 0;
}
void _Script_ControlRig::RigUnit_SendEvent::set_bOnlyDuringInteraction(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7d + 0);
    *(uint8_t*)((uintptr_t)this + 0x7d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
