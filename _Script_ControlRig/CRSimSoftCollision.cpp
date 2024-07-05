#include "..\FUObjectArray.hpp"
#include "CRSimSoftCollision.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::CRSimSoftCollision::get_Transform() {
    return (void*)((uintptr_t)this + 0x0);
}
bool _Script_ControlRig::CRSimSoftCollision::get_bInverted() {
    return (*(uint8_t*)((uintptr_t)this + 0x44 + 0)) & 1 != 0;
}
float& _Script_ControlRig::CRSimSoftCollision::get_Coefficient() {
    return *(float*)((uintptr_t)this + 0x40);
}
void* _Script_ControlRig::CRSimSoftCollision::get_ShapeType() {
    return (void*)((uintptr_t)this + 0x30);
}
float& _Script_ControlRig::CRSimSoftCollision::get_MaximumDistance() {
    return *(float*)((uintptr_t)this + 0x38);
}
float& _Script_ControlRig::CRSimSoftCollision::get_MinimumDistance() {
    return *(float*)((uintptr_t)this + 0x34);
}
void* _Script_ControlRig::CRSimSoftCollision::get_FalloffType() {
    return (void*)((uintptr_t)this + 0x3c);
}
void _Script_ControlRig::CRSimSoftCollision::set_bInverted(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x44 + 0);
    *(uint8_t*)((uintptr_t)this + 0x44 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_ControlRig::CRSimSoftCollision::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.CRSimSoftCollision");
    return result;
}
