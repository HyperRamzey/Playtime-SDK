#include "..\FUObjectArray.hpp"
#include "RigUnit_FitChainToCurve_DebugSettings.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_FitChainToCurve_DebugSettings::get_WorldOffset() {
    return (void*)((uintptr_t)this + 0x30);
}
bool _Script_ControlRig::RigUnit_FitChainToCurve_DebugSettings::get_bEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_FitChainToCurve_DebugSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_FitChainToCurve_DebugSettings");
    return result;
}
void _Script_ControlRig::RigUnit_FitChainToCurve_DebugSettings::set_bEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_ControlRig::RigUnit_FitChainToCurve_DebugSettings::get_Scale() {
    return *(float*)((uintptr_t)this + 0x4);
}
void* _Script_ControlRig::RigUnit_FitChainToCurve_DebugSettings::get_CurveColor() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_ControlRig::RigUnit_FitChainToCurve_DebugSettings::get_SegmentsColor() {
    return (void*)((uintptr_t)this + 0x18);
}
