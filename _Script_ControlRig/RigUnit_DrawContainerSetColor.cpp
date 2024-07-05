#include "..\FUObjectArray.hpp"
#include "RigUnitMutable.hpp"
#include "RigUnit_DrawContainerSetColor.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_DrawContainerSetColor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_DrawContainerSetColor");
    return result;
}
void* _Script_ControlRig::RigUnit_DrawContainerSetColor::get_InstructionName() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_ControlRig::RigUnit_DrawContainerSetColor::get_Color() {
    return (void*)((uintptr_t)this + 0x70);
}
