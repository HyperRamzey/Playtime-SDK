#include "..\FUObjectArray.hpp"
#include "RigUnit.hpp"
#include "RigUnit_SphereTraceWorld.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_SphereTraceWorld::get_HitLocation() {
    return (void*)((uintptr_t)this + 0x2c);
}
void* _Script_ControlRig::RigUnit_SphereTraceWorld::get_Start() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_ControlRig::RigUnit_SphereTraceWorld::get_End() {
    return (void*)((uintptr_t)this + 0x14);
}
void _Script_ControlRig::RigUnit_SphereTraceWorld::set_bHit(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ControlRig::RigUnit_SphereTraceWorld::get_Channel() {
    return (void*)((uintptr_t)this + 0x20);
}
float& _Script_ControlRig::RigUnit_SphereTraceWorld::get_Radius() {
    return *(float*)((uintptr_t)this + 0x24);
}
bool _Script_ControlRig::RigUnit_SphereTraceWorld::get_bHit() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
void* _Script_ControlRig::RigUnit_SphereTraceWorld::get_HitNormal() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_SphereTraceWorld::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_SphereTraceWorld");
    return result;
}
