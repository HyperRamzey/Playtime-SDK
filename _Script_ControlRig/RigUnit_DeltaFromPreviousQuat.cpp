#include "..\FUObjectArray.hpp"
#include "RigUnit_DeltaFromPreviousQuat.hpp"
#include "RigUnit_SimBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_DeltaFromPreviousQuat::get_Value() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_ControlRig::RigUnit_DeltaFromPreviousQuat::get_Delta() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_DeltaFromPreviousQuat::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_DeltaFromPreviousQuat");
    return result;
}
void* _Script_ControlRig::RigUnit_DeltaFromPreviousQuat::get_PreviousValue() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_ControlRig::RigUnit_DeltaFromPreviousQuat::get_Cache() {
    return (void*)((uintptr_t)this + 0x40);
}
