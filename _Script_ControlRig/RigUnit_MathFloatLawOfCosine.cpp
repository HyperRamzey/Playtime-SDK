#include "..\FUObjectArray.hpp"
#include "RigUnit_MathFloatBase.hpp"
#include "RigUnit_MathFloatLawOfCosine.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_ControlRig::RigUnit_MathFloatLawOfCosine::get_AlphaAngle() {
    return *(float*)((uintptr_t)this + 0x14);
}
float& _Script_ControlRig::RigUnit_MathFloatLawOfCosine::get_A() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_ControlRig::RigUnit_MathFloatLawOfCosine::get_B() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_ControlRig::RigUnit_MathFloatLawOfCosine::get_C() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_ControlRig::RigUnit_MathFloatLawOfCosine::get_BetaAngle() {
    return *(float*)((uintptr_t)this + 0x18);
}
bool _Script_ControlRig::RigUnit_MathFloatLawOfCosine::get_bValid() {
    return (*(uint8_t*)((uintptr_t)this + 0x20 + 0)) & 1 != 0;
}
float& _Script_ControlRig::RigUnit_MathFloatLawOfCosine::get_GammaAngle() {
    return *(float*)((uintptr_t)this + 0x1c);
}
void _Script_ControlRig::RigUnit_MathFloatLawOfCosine::set_bValid(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20 + 0);
    *(uint8_t*)((uintptr_t)this + 0x20 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathFloatLawOfCosine::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathFloatLawOfCosine");
    return result;
}
