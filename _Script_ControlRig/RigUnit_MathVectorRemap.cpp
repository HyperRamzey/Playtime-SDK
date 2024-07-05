#include "..\FUObjectArray.hpp"
#include "RigUnit_MathVectorBase.hpp"
#include "RigUnit_MathVectorRemap.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_MathVectorRemap::get_Value() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_ControlRig::RigUnit_MathVectorRemap::get_TargetMaximum() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_ControlRig::RigUnit_MathVectorRemap::get_SourceMinimum() {
    return (void*)((uintptr_t)this + 0x14);
}
void _Script_ControlRig::RigUnit_MathVectorRemap::set_bClamp(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x44 + 0);
    *(uint8_t*)((uintptr_t)this + 0x44 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ControlRig::RigUnit_MathVectorRemap::get_SourceMaximum() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_ControlRig::RigUnit_MathVectorRemap::get_TargetMinimum() {
    return (void*)((uintptr_t)this + 0x2c);
}
bool _Script_ControlRig::RigUnit_MathVectorRemap::get_bClamp() {
    return (*(uint8_t*)((uintptr_t)this + 0x44 + 0)) & 1 != 0;
}
void* _Script_ControlRig::RigUnit_MathVectorRemap::get_Result() {
    return (void*)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathVectorRemap::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathVectorRemap");
    return result;
}
