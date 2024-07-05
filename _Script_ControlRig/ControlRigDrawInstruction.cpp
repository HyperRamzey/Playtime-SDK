#include "..\FUObjectArray.hpp"
#include "ControlRigDrawInstruction.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::ControlRigDrawInstruction::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.ControlRigDrawInstruction");
    return result;
}
void* _Script_ControlRig::ControlRigDrawInstruction::get_Name() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_ControlRig::ControlRigDrawInstruction::get_PrimitiveType() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_ControlRig::ControlRigDrawInstruction::get_Positions() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_ControlRig::ControlRigDrawInstruction::get_Color() {
    return (void*)((uintptr_t)this + 0x20);
}
float& _Script_ControlRig::ControlRigDrawInstruction::get_Thickness() {
    return *(float*)((uintptr_t)this + 0x30);
}
void* _Script_ControlRig::ControlRigDrawInstruction::get_Transform() {
    return (void*)((uintptr_t)this + 0x40);
}
