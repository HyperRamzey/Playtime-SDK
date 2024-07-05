#include "..\FUObjectArray.hpp"
#include "CRSimPointForce.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_ControlRig::CRSimPointForce::get_Coefficient() {
    return *(float*)((uintptr_t)this + 0x10);
}
void* _Script_ControlRig::CRSimPointForce::get_ForceType() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_ControlRig::CRSimPointForce::get_Vector() {
    return (void*)((uintptr_t)this + 0x4);
}
bool _Script_ControlRig::CRSimPointForce::get_bNormalize() {
    return (*(uint8_t*)((uintptr_t)this + 0x14 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_ControlRig::CRSimPointForce::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.CRSimPointForce");
    return result;
}
void _Script_ControlRig::CRSimPointForce::set_bNormalize(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14 + 0);
    *(uint8_t*)((uintptr_t)this + 0x14 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
