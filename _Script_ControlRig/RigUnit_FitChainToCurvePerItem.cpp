#include "..\FUObjectArray.hpp"
#include "RigUnit_FitChainToCurvePerItem.hpp"
#include "RigUnit_HighlevelBaseMutable.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_FitChainToCurvePerItem::get_Items() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_ControlRig::RigUnit_FitChainToCurvePerItem::get_Bezier() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_ControlRig::RigUnit_FitChainToCurvePerItem::get_Alignment() {
    return (void*)((uintptr_t)this + 0xa8);
}
void* _Script_ControlRig::RigUnit_FitChainToCurvePerItem::get_PrimaryAxis() {
    return (void*)((uintptr_t)this + 0xb8);
}
float& _Script_ControlRig::RigUnit_FitChainToCurvePerItem::get_Minimum() {
    return *(float*)((uintptr_t)this + 0xac);
}
float& _Script_ControlRig::RigUnit_FitChainToCurvePerItem::get_Maximum() {
    return *(float*)((uintptr_t)this + 0xb0);
}
int32_t& _Script_ControlRig::RigUnit_FitChainToCurvePerItem::get_SamplingPrecision() {
    return *(int32_t*)((uintptr_t)this + 0xb4);
}
void* _Script_ControlRig::RigUnit_FitChainToCurvePerItem::get_SecondaryAxis() {
    return (void*)((uintptr_t)this + 0xc4);
}
void* _Script_ControlRig::RigUnit_FitChainToCurvePerItem::get_PoleVectorPosition() {
    return (void*)((uintptr_t)this + 0xd0);
}
void* _Script_ControlRig::RigUnit_FitChainToCurvePerItem::get_Rotations() {
    return (void*)((uintptr_t)this + 0xe0);
}
void* _Script_ControlRig::RigUnit_FitChainToCurvePerItem::get_RotationEaseType() {
    return (void*)((uintptr_t)this + 0xf0);
}
float& _Script_ControlRig::RigUnit_FitChainToCurvePerItem::get_Weight() {
    return *(float*)((uintptr_t)this + 0xf4);
}
bool _Script_ControlRig::RigUnit_FitChainToCurvePerItem::get_bPropagateToChildren() {
    return (*(uint8_t*)((uintptr_t)this + 0xf8 + 0)) & 1 != 0;
}
void _Script_ControlRig::RigUnit_FitChainToCurvePerItem::set_bPropagateToChildren(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xf8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ControlRig::RigUnit_FitChainToCurvePerItem::get_DebugSettings() {
    return (void*)((uintptr_t)this + 0x100);
}
void* _Script_ControlRig::RigUnit_FitChainToCurvePerItem::get_WorkData() {
    return (void*)((uintptr_t)this + 0x160);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_FitChainToCurvePerItem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_FitChainToCurvePerItem");
    return result;
}
