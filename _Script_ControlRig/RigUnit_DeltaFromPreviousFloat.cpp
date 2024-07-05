#include "..\FUObjectArray.hpp"
#include "RigUnit_DeltaFromPreviousFloat.hpp"
#include "RigUnit_SimBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_ControlRig::RigUnit_DeltaFromPreviousFloat::get_Value() {
    return *(float*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_DeltaFromPreviousFloat::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_DeltaFromPreviousFloat");
    return result;
}
float& _Script_ControlRig::RigUnit_DeltaFromPreviousFloat::get_Delta() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_ControlRig::RigUnit_DeltaFromPreviousFloat::get_PreviousValue() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_ControlRig::RigUnit_DeltaFromPreviousFloat::get_Cache() {
    return *(float*)((uintptr_t)this + 0x14);
}
