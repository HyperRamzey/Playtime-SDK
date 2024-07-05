#include "..\FUObjectArray.hpp"
#include "RigUnit_DeltaFromPreviousTransform.hpp"
#include "RigUnit_SimBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_DeltaFromPreviousTransform::get_PreviousValue() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_ControlRig::RigUnit_DeltaFromPreviousTransform::get_Value() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_ControlRig::RigUnit_DeltaFromPreviousTransform::get_Delta() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_ControlRig::RigUnit_DeltaFromPreviousTransform::get_Cache() {
    return (void*)((uintptr_t)this + 0xa0);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_DeltaFromPreviousTransform::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_DeltaFromPreviousTransform");
    return result;
}
