#include "..\FUObjectArray.hpp"
#include "RigUnit.hpp"
#include "RigUnit_DrawContainerGetInstruction.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_DrawContainerGetInstruction::get_InstructionName() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_ControlRig::RigUnit_DrawContainerGetInstruction::get_Color() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_ControlRig::RigUnit_DrawContainerGetInstruction::get_Transform() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_DrawContainerGetInstruction::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_DrawContainerGetInstruction");
    return result;
}
