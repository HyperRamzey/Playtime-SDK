#include "..\FUObjectArray.hpp"
#include "ControlRigIOSettings.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
bool _Script_ControlRig::ControlRigIOSettings::get_bUpdatePose() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_ControlRig::ControlRigIOSettings::set_bUpdatePose(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_ControlRig::ControlRigIOSettings::get_bUpdateCurves() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 1 != 0;
}
void _Script_ControlRig::ControlRigIOSettings::set_bUpdateCurves(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_ControlRig::ControlRigIOSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.ControlRigIOSettings");
    return result;
}
