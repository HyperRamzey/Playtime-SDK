#include "..\FUObjectArray.hpp"
#include "CRSimPoint.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_ControlRig::CRSimPoint::get_Mass() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_ControlRig::CRSimPoint::get_LinearDamping() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_ControlRig::CRSimPoint::get_Size() {
    return *(float*)((uintptr_t)this + 0x4);
}
void* _Script_ControlRig::CRSimPoint::get_Position() {
    return (void*)((uintptr_t)this + 0x10);
}
float& _Script_ControlRig::CRSimPoint::get_InheritMotion() {
    return *(float*)((uintptr_t)this + 0xc);
}
void* _Script_ControlRig::CRSimPoint::get_LinearVelocity() {
    return (void*)((uintptr_t)this + 0x1c);
}
_Script_CoreUObject::Class* _Script_ControlRig::CRSimPoint::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.CRSimPoint");
    return result;
}
