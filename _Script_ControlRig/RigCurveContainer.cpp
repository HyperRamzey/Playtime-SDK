#include "..\FUObjectArray.hpp"
#include "RigCurveContainer.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigCurveContainer::get_Curves() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_ControlRig::RigCurveContainer::get_NameToIndexMapping() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_ControlRig::RigCurveContainer::get_Selection() {
    return (void*)((uintptr_t)this + 0x80);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigCurveContainer::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigCurveContainer");
    return result;
}
