#include "..\FUObjectArray.hpp"
#include "RigUnit_DeltaFromPreviousVector.hpp"
#include "RigUnit_SimBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_DeltaFromPreviousVector::get_Value() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_ControlRig::RigUnit_DeltaFromPreviousVector::get_Delta() {
    return (void*)((uintptr_t)this + 0x14);
}
void* _Script_ControlRig::RigUnit_DeltaFromPreviousVector::get_PreviousValue() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_ControlRig::RigUnit_DeltaFromPreviousVector::get_Cache() {
    return (void*)((uintptr_t)this + 0x2c);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_DeltaFromPreviousVector::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_DeltaFromPreviousVector");
    return result;
}
