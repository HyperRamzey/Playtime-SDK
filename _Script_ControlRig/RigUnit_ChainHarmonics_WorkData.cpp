#include "..\FUObjectArray.hpp"
#include "RigUnit_ChainHarmonics_WorkData.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_ChainHarmonics_WorkData::get_PendulumVelocity() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_ControlRig::RigUnit_ChainHarmonics_WorkData::get_Time() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_ControlRig::RigUnit_ChainHarmonics_WorkData::get_Items() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_ControlRig::RigUnit_ChainHarmonics_WorkData::get_Ratio() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_ControlRig::RigUnit_ChainHarmonics_WorkData::get_LocalTip() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_ControlRig::RigUnit_ChainHarmonics_WorkData::get_PendulumTip() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_ControlRig::RigUnit_ChainHarmonics_WorkData::get_PendulumPosition() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_ControlRig::RigUnit_ChainHarmonics_WorkData::get_HierarchyLine() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_ControlRig::RigUnit_ChainHarmonics_WorkData::get_VelocityLines() {
    return (void*)((uintptr_t)this + 0x80);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_ChainHarmonics_WorkData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_ChainHarmonics_WorkData");
    return result;
}
