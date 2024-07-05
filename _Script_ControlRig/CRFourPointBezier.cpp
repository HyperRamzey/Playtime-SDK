#include "..\FUObjectArray.hpp"
#include "CRFourPointBezier.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::CRFourPointBezier::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.CRFourPointBezier");
    return result;
}
void* _Script_ControlRig::CRFourPointBezier::get_A() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_ControlRig::CRFourPointBezier::get_B() {
    return (void*)((uintptr_t)this + 0xc);
}
void* _Script_ControlRig::CRFourPointBezier::get_C() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_ControlRig::CRFourPointBezier::get_D() {
    return (void*)((uintptr_t)this + 0x24);
}
